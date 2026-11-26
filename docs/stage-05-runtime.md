# Stage 5 — Skyfall runtime

**Status: a real `Skyfall.dll` builds, loads and was verified inside a live
Garry's Mod x64 client with all 24 descriptor rows installed (23 unique
recovered interface/slot entries). Optional rows are installed only when their
interface/device is present and are logged by name otherwise. The command-stage
features, the engine-native ESP and the compiled Utility renderer
(`0x1801d5ef0`) are wired; the remaining feature boundaries are listed below.**

Artifact: `build/Skyfall.dll`, PE32+ x64 Windows GUI DLL, no exports,
1,522,688 bytes, MD5 `e3e08c2f5dc82c194a4ade44483e823e`. Build:

```bat
build_dll.bat
```

The script compiles `src/runtime/skyfall.cpp`, `src/runtime/config.cpp`, the
header-only reconstruction (`gmod_sdk.h`, `hooks.h`, `runtime_features.h`,
`offsets.h`), the reconstructed renderer (`renderer.cpp`,
`renderer_ui_ImGui.cpp`, `renderer_runtime.cpp`, `dependencies.cpp`,
`ui_widgets.cpp`, `ui_helpers.cpp`, `log_writer.cpp`), the vendored ImGui
1.92.8 core and its DX9 backend. It does not link VenomHook or m64.dll. `/W4`
is on and the current build has no compiler warnings.

## Runtime sequence

1. `DllMain` stores the module handle, disables thread notifications, reads
   `%LOCALAPPDATA%\skyfall\skyfall.ini` (creating defaults), and starts the
   worker.
2. The worker resolves the client/engine/optional interfaces through
   `CreateInterface` and finds the D3D9 device with the shaderapidx9 pattern.
   It retries for 150 seconds so injection at the main menu still works.
3. It waits for `IEngineClient::IsInGame` and a valid local player before
   touching gameplay vtables, then retries the netvar walk for ten seconds.
4. It attempts the 21 recovered hook rows and the two extra core rows through
   `sf::offsets::kHooks` / `kCoreHooks`:
   * all five D3D9 rows;
   * MaterialSystem `OverrideConfig`;
   * CHLClient `View_Render`, `WriteUsercmdDeltaToBuffer`, `HudUpdate`,
     `LevelInitPreEntity`, `LevelShutdown`, `FrameStageNotify`;
   * ClientMode `CreateMove`;
   * Panel `PaintTraverse`;
   * ViewRender `RenderView`, `PreHUD`, `DrawModel`;
   * Engine `SetViewAngles`/`GetViewAngles`;
   * ModelRender `DrawModelExecute`;
   * LuaShared `CloseLuaInterface`;
   * InputSystem `IsButtonDown`;
   * CPrediction `RunCommand`.
5. Every detour calls the saved original and preserves its return value. The
   command detour then applies the feature layer. FrameStageNotify at
   `FRAME_RENDER_START` draws the ESP through `IVDebugOverlay`.
6. `DLL_PROCESS_DETACH` restores every slot whose entry still points at our
   detour and closes the log.

The installed count is printed as descriptor rows/unique interface-slot entries, because
`offsets.json` records `ClientMode` once in `hooks[]` and once in `core_hooks[]`:

```
hooks installed: 24 of 24 descriptor rows (23 unique interface/slot entries); ClientMode is recorded once in hooks[] and once in core_hooks[]
```

Rows whose interface or D3D device is unavailable are logged by name and reduce
the count; none are silently reported as installed. The conditional rows are the
five D3D rows, MaterialSystem, Panel, the three ViewRender rows, ModelRender,
LuaShared and InputSystem. CHLClient, ClientMode, FrameStageNotify and
CPrediction are required; a missing required client interface aborts install.

## Live features

Canonical live-feature inventory (same names in `offsets.json`
`live_features` and `offsets.h` `kLiveFeatures`): `bunnyhop`, `autostrafe`,
`aimbot`, `triggerbot`, `no-spread`, `anti-aim`, `backtrack`, `fullbright`,
`esp`.

### Command stage (`ClientMode::CreateMove`)

`ApplyCommand` builds a synthetic snapshot from the live player, entity list and
netvars, then passes it to `FeatureRuntime::OnCreateMove`.

| Feature | Live behavior | Evidence / boundary |
|---------|---------------|---------------------|
| Bunnyhop | Grounded keeps `IN_JUMP`; rising keeps it; falling clears it. | `0x1800c2e90`, `CUserCmd::buttons` at `0x20`. |
| Autostrafe | Class-2/move-type gate; the commanded yaw follows the velocity direction (unwrapped across ±180°) with `forwardmove=0` and a perpendicular `sidemove=450`. | `0x1800e1280`; live acceleration to **466.7 u/s** (normal ground cap 320) with the counter advancing. |
| Aimbot | Scans entities 1..64, skips dead/dormant/teammates, scores by angular error, applies the recovered smoother. | `0x1800cef20`, `0x1800cfb30`, `0x1800d0b60`; eye point is the live `m_vecViewOffset`, not a bone hitbox. |
| Triggerbot | Confirmed angular target, recovered hold/jitter/burst/cooldown state machine, sets `IN_ATTACK`. | `0x1800e2580`; no `IEngineTrace` interface is recoverable from the m64 globals, so the world trace is replaced by the angular gate. |
| No-spread | Runs `weapon::FireShot` and writes the compensated command angles. | `0x1800779c0` generic backend and the seed chain; the live weapon's Lua/backend profile is not read, so backend/spread/inaccuracy are config values. |
| Anti-aim | Pitch modes 1–4 and yaw modes 1–6 write command angles; yaw mode 3 walks its stored base yaw by the clamped amplitude (1–18); `GetViewAngles` returns the fake view. | `0x1800bdd80`, mode 3 at `0x1800be3fe`, and the `GetViewAngles` stub `0x1801f3440`; modes 7–9 still use the static half-turn basis because the `0x1800bd8d0` body clock is not in this self-contained build. |
| Backtrack | Captures per-target origin records on a changed simulation time and, for aim, selects the newest earlier record inside 250 ms (the current command's own sample is skipped). | `0x1800c9910` recorder semantics; bone matrices and server rewind are not reconstructed here. |
| Fullbright | MaterialSystem `OverrideConfig` copies the `0x180` config, sets byte `+0x49`, and calls the original. | `0x1801ed5d0`; exact captured byte and size. |

The remaining recovered rows are live pass-throughs with a concrete state or
instrumentation effect, not silent stubs: D3D Present/Reset/GRTD/StretchRect/
SetRenderTarget track the device and frame state, CHLClient
View_Render/WriteUsercmdDeltaToBuffer/HudUpdate count the corresponding stage,
Panel/ViewRender/RenderView/PreHUD/DrawModel count paint/render entry,
`DrawModelExecute` and `CloseLuaInterface` forward their arguments, and
`InputSystem::IsButtonDown` preserves its bool result. No recovered m64 feature
consumer exists for those rows beyond their pass-through/telemetry role.

### ESP

At `FRAME_RENDER_START`, the runtime walks entity indices `1..highest`, keeps
entities with `FL_CLIENT` or `FL_FAKECLIENT` (GMod bots use the latter), skips
the local player, optionally skips teammates,
and reads the live health/team netvars. It draws a world-space box through
`IVDebugOverlay::AddBoxOverlay` and a name/health line through
`AddTextOverlay`. The OBB mins/maxs are used when available, with the standard
player hull as fallback.

The ESP remains deliberately engine-native, not the original ImGui element
renderer, so it cannot fight the game's swap chain. The reconstructed Utility
tab is separate: `FRAME_RENDER_START` calls `sf::renderer::RenderUtilityFrame()`
after `DrawEsp()`; that path uses the vendored ImGui core, the DX9 backend and
the translated `0x1801d5ef0` entry point. `HookD3dPresent` draws the completed
ImGui draw data into the back buffer **before** the original `Present`; drawing
after `Present` targets the next back buffer, which the engine clears or
overwrites. `HookD3dReset` recreates the backend objects after a successful
device reset.

## Configuration

The INI is created with these defaults:

```ini
[skyfall]
enabled=1
esp=1
esp_team=0
esp_box=1
esp_text=1
bhop=1
autostrafe=0
autostrafe_mode=0
aimbot=0
aim_always=0
aim_team=0
aim_fov=15
aim_smooth=0
triggerbot=0
trigger_fov=3
trigger_delay=0
trigger_randomize=0
nospread=0
weapon_backend=Generic
weapon_spread=0.02
weapon_inaccuracy=0.05
antiaim=0
antiaim_pitch=0
antiaim_yaw=0
antiaim_jitter=0
antiaim_amplitude=0
backtrack=0
fullbright=0
log=1
```

`enabled=0` makes every detour pass through without applying features. The
gameplay extensions default off; bunnyhop and ESP default on. `aim_always=0`
means the aimbot runs only while `IN_ATTACK` is held. `aim_team=1` permits
teammates. The log is `%LOCALAPPDATA%\skyfall\skyfall.log`.

## Hook ABI and return preservation

The exact typedefs live in `src/runtime/hooks.h`; `HookOriginals` is a single
typed table, so a wrong signature cannot be hidden behind a `void*` call:

* D3D: `HRESULT` for SetRenderTarget, StretchRect, GetRenderTargetData, Present,
  Reset.
* `OverrideConfig`: `bool`; `WriteUsercmdDeltaToBuffer`: `bool`; `IsButtonDown`:
  `bool`; `CreateMove`: `bool`.
* `View_Render`, `HudUpdate`, `LevelInitPreEntity`, `LevelShutdown`,
  `PaintTraverse`, `RenderView`, `PreHUD`, `DrawModel`, `SetViewAngles`,
  `GetViewAngles`, `DrawModelExecute`, `CloseLuaInterface`, `FrameStageNotify`,
  `RunCommand`: `void`.

`SetViewAngles` also reproduces the recovered NaN guard: a non-finite pitch,
yaw or roll is counted and dropped instead of reaching the engine.

## Verification performed

* `build_dll.bat`: exit 0, no compiler warnings, `build/Skyfall.dll` produced
  (1,522,688 bytes, MD5 `e3e08c2f5dc82c194a4ade44483e823e` in the final
  verified build).
* `build.bat`: exit 0, **16 self-test executables**, all `PASS (0 failures)`,
  including `RUNTIME SELFTEST PASS (0 failures)`.
* Runtime self-test coverage: every descriptor/ABI row (id, interface, slot,
  full signature, feature), 24 descriptor rows / 23 unique interface/slot
  entries, the nine live-feature and five unsupported inventory entries,
  `InstallVmt`/`UninstallVmt`, every handler's arguments and original return
  value, NaN rejection, fake-view publication/reset, and feature gates for
  bunnyhop, aimbot (selection, team skip, FOV rejection), triggerbot, anti-aim,
  autostrafe, no-spread and backtrack capture.
  The per-hook coverage layer emits **24 named descriptor PASS lines** (21
  `hook` rows plus 3 `core` rows) and **23 named handler PASS lines**, one per
  unique handler. Each descriptor line carries the hook name,
  `interface/0xslot` and return class. The two ClientMode rows print separately
  as `hook CreateMove` and `core CreateMove`; the shared handler line is marked
  `shared by 2 descriptor rows`. **Exclusions: none (0 hooks).** Every one of the 24 descriptor rows is asserted; void-return rows assert ABI shape and argument pass-through because they have no return value. NaN rejection, fake-view
  publication/reset, and the feature gates for bunnyhop, aimbot (selection,
  team skip, FOV rejection), triggerbot, anti-aim, autostrafe, no-spread and
  backtrack capture remain separately asserted.
* `offsets.json`: parsed successfully with PowerShell `ConvertFrom-Json`.
* `objdump`/`file`: PE32+ x64 DLL, five sections, no export table.
* Standalone `LoadLibraryA` smoke test: exit 0, `LoadLibrary` succeeded with
  error 0.
* Live GMod x64 injection (`Loader/native/test/inject_manual.exe` with
  `manualmap.dll`): 24/24 rows, `[Skyfall] reconstruction runtime loaded`, and
  no crash across the menu, ESP, combat and mouse-look checks.
* Live menu/input: Insert opens and closes the overlay; raw input is routed to
  the overlay only while the menu is open. Real cursor movement moved the
  software cursor, Chat and Triggerbot sections expanded, and the Triggerbot
  checkbox toggled without the earlier duplicate-ID popup. Closing the menu
  re-registers the game window for raw input; a 420-pixel mouse move rotated
  the in-game view, confirming mouse look is restored.
* Live ESP: two GMod bots (`FL_FAKECLIENT`, flags 768) produced red boxes,
  `Bot1`/`Bot2` names and `100%` health. Debug-overlay text uses a fixed
  192-byte non-variadic buffer; `AddLineOverlay` was removed after it crashed
  in `engine.dll+0xc4b71`, and `AddBoxOverlay` uses a 0.12 s duration so the
  engine consumes the box.
* Live fullbright: `fullbright=1` flattened the world lighting in `gm_construct`
  (wall shadows removed) with no crash; the saved config was restored afterward.
* Rendering scope actually driven in the live client (final artifact): the ImGui
  menu (open/close, section expansion, checkbox toggles), the element family,
  the screen-space glow/chams pass, ghosts, snaplines/skeleton/offscreen,
  tracers/lookbeam, world tint, fog, skybox suppression, the sky editor and
  fullbright. Evidence is listed feature by feature below.

### Live visual inventory (final artifact)

The runtime now draws the reconstructed 2D features from the foreground ImGui
list in `renderer_runtime.cpp` (`sf::runtime::DrawRuntimeVisuals`). The frame is
built even when the utility pane is closed; `Present` submits the draw data, so
the overlay is independent of menu visibility. World projection uses
`IEngineClient::WorldToScreenMatrix` (vtable 36) and `GetScreenSize` (vtable 5),
the same row-major transform as the recovered `0x1800207e0`.

| Feature | Config key | Live evidence |
|---|---|---|
| Box element | `esp_box` | `work/gmod_visuals_2d_final.png`, crop `work/gmod_visuals_2d_crop.jpg`; red/blue box around `Bot1`/`Bot2` |
| BBox element | `esp_bbox` | Yellow corner brackets in the same screenshot |
| Circle element | `esp_circle` | White head circle in the same screenshot |
| Text element | `esp_text` | `Bot1 [73]`, `Bot2 [42]` labels |
| DynamicText element | `esp_dynamic_text` | Labels include live distance (`4m`/`5m`) |
| HealthBar element | `esp_health` | Green left bar, 73%/42% |
| ArmorBar element | `esp_armor` | Blue right bar, 55%/21% (netvar `m_ArmorValue`) |
| Snapline | `esp_snapline` | Team-colour line from screen bottom to the box |
| Skeleton | `esp_skeleton` | White head/spine/arm/leg lines in the crop |
| Off-screen indicator | `esp_offscreen` | `work/gmod_visuals_offscreen.png`; red edge arrow for the bot placed behind the camera |
| Chams | `chams` | Screen-space magenta silhouette fill (not a material override) |
| Glow | `glow` | Three expanding cyan halos around the silhouette |
| Tracer | `tracers` | Yellow line from screen bottom to the entity centre |
| LookBeam | `lookbeam` | Green vertical beam from the lower centre to the crosshair |
| Ghosts | `ghosts` | `work/gmod_visuals_ghost3.png`; gray last-known box labelled `ghost` after `Bot2` was killed; `ghost: recorded player 3` in `work/visuals_ghost3.log` |
| Fullbright | `fullbright` | Prior live run: wall shadows removed in `gm_construct`, no crash |
| World tint | `world_tint` | `work/gmod_visuals_tint.png`; blue full-screen tint at alpha 0.35 |
| Fog override | `fog_override` | `work/gmod_visuals_fog.png`; dense red fog (`fog_color 255 30 30`, `fog_start 100`, `fog_end 900`) |
| Skybox override | `skybox_override` | `work/gmod_visuals_skybox.png`; `r_skybox 0` removes the map sky (black background) |
| Sky editor | `sky_editor` | `work/gmod_visuals_skyeditor.png`; dark gradient + 80 stars over the upper 58% of the screen |
| Water override | `water_override` | `work/verify_water_before.png` vs `work/verify_water_after.png` at `Vector(1440,5400,-200)` in `gm_construct`; the underwater view shifts from dark teal to a bright blue full-screen tint, and `work/verify_water_off.png` returns to baseline |
| Ambient override | `ambient_override` | `work/verify_water_before.png` vs `work/verify_ambient_after.png` at the same water spot; `r_ambientboost 1` + `r_ambientmin 3.0` shifts the water/scene tone from teal to navy, measured in the same session |

All live runs above were separate injections; none crashed, and the config-off
run (`work/gmod_visuals_baseline.png`) shows the same two bots with no overlay,
confirming clean toggle-off. Water, ambient, sky swap/restore, fullbright and
the element family were re-captured on the verification builds with the same
draw/override path; the final artifact (`e3e08c2f...`) was injected with the
restored user config, installed 24/24 rows, advanced the live bunnyhop counter
to 3,856 and stayed alive until the test harness closed it. The final smoke
capture is `work/verify_final_smoke.png`.

**Chams/glow boundary:** the live implementation is screen-space (silhouette
fill and expanding outlines), not the original `IMaterial`/`DrawModelExecute`
override. The material path was attempted through MaterialSystem
`FindMaterial` (vtable index 75, confirmed as `call *0x258(%rax)` in the
VenomHook disassembly) and `IModelRender::ForcedMaterialOverride`; the x64
engine returns a `Lua Materials`/error material for the stock debug names, and
forcing it rendered the checker error material. The unsafe forced-material path
was removed from the final artifact rather than shipped as a crash risk; the
screen-space chams remains the verified path. This is reported rather than
claimed as material parity.

### Live combat inventory (final artifact, real spawned player)

The hostile target for every row below was a real engine-spawned player, not a
NextBot. The external scene ran the engine `bot` command, set the bot to team
**2**, spawned it, and placed it 150 units in front of the local player. The
local player stayed on team **1001**. The scene printed:

```text
[SFVERIFY] local=Violet localteam=1001 class=player player=true nextbot=false team=2 hp=1000
```

The cheat's live target collector accepted that player: `aim targets: 1 (local
team=1001 eye=1)`. The target gate therefore did **not** need a source change.
The earlier no-damage observation was in the external harness: the local player
had no active weapon (`GetActiveWeapon()` was null). Giving the harness player
`weapon_pistol` made the same DLL's aimbot and triggerbot register damage. That
is a test-scene fix, not a shipped-DLL behavior change.

Every feature was toggled one at a time from `%LOCALAPPDATA%\skyfall\skyfall.ini`
with F5, with a before and after capture from the same live session and the
matching `%LOCALAPPDATA%\skyfall\skyfall.log` copied afterward. The external
scene (bot spawn, team/position, view reset and the temporary input markers) was
deleted after the captures; no spawn/probe/debug code remains in
`src/`. Rendering rows above and the chams/material boundary are unchanged.

| Feature | Config key | Live evidence (final artifact `e3e08c2f5dc82c194a4ade44483e823e`) |
|---|---|---|
| Aimbot acquire/fire | `aimbot`, `aim_always` | `work/combat_real_aim_off.png` is the clean off state, bot health **1000**. `work/combat_real_aim_on.png` shows the hostile player locked under the aim line, bot health **736**, pistol clip empty; `work/combat_real_aim.log` reaches `aim=7178` and contains `aim targets: 1 (local team=1001 eye=1)`. `work/combat_real_aim_off_after.png` returns to bot health **1000**, ammo **18/999**, with the aim counter frozen at 7178. |
| Triggerbot on target | `triggerbot` | `work/combat_real_trigger_off.png` is the clean off state, bot health **1000**. `work/combat_real_trigger_on.png` shows bot health **748** and an empty clip; `work/combat_real_trigger.log` reaches `trigger=4431`. `work/combat_final_trigger_off2.png` is the off state again, bot health **1000**, ammo **18/999**. |
| Triggerbot off target | `triggerbot` | `work/combat_final_trigger_on_target.png` is the on-target frame (weapon firing, bot box at the crosshair). `work/combat_final_trigger_off_target.png` is after the view was rotated 90 degrees off the player: the bot health stays **1000**, only the residual shot leaves ammo **4/999**, and `work/combat_final_trigger_offtarget.log` ends at `trigger=3055` with no further target. |
| Backtrack | `backtrack` | `work/combat_final_backtrack_on.png` and `work/combat_final_backtrack_off.png` show the same real player at health **1000**; `work/combat_final_backtrack_trigger.log` advances `backtrack` to **1385** while the target is sampled, then freezes at 1385 after the toggle-off. |
| Anti-aim | `antiaim` | `work/combat_final_antiaim_on.png` shows the injected view offset (the scene is looking away from the bot); `work/combat_final_antiaim_off.png` returns the view to the real player at health **1000**. `work/combat_final_session.log` records `antiaim=1830`; the off state has no new anti-aim ticks. |
| No-spread | `nospread` | `work/combat_final_nospread_off.png` (triggerbot on, no-spread off) shows bot health **578**, ammo **5/999**. `work/combat_final_nospread_on.png` shows health **692**, ammo **5/999**; `work/combat_final_session.log` reaches `nospread=584`, proving the compensated shot path ran. The health difference is shot-placement/RNG dependent; the counter and clip state are the deterministic evidence. |
| Bunnyhop | `bhop` | `work/combat_final_bhop_on.png` and `work/combat_final_bhop_off.png` show the same real player at health **1000**; `work/combat_final_session.log` reaches `bhop=1327` on, then the counter freezes after the off toggle. |
| Autostrafe | `autostrafe` | `work/combat_final_strafe_on.png` was captured with the menu closed and jump+forward held; the local player moved across the scene while the hostile box stayed targeted. `work/combat_final_strafe_off.png` is the same scene after the toggle-off. `work/combat_final_session.log` reaches `strafe=1761`; the counter freezes in the off state. |
| Combat indicators | `esp_box`, `esp_text` | `work/combat_final_indicators_on.png` shows the red hostile box, `Bot01 [1000]` name/health text and the live target; `work/combat_final_indicators_off.png` shows the player model with no box or label. The same `combat_final_session.log` covers the toggle. |
| Clean baseline | all combat keys off | `work/combat_final_clean.png` shows bot health **1000**, ammo **18/999**, no aim/trigger/nospread activity; the same session log ends with trigger/aim off and the counters frozen. |

The live target was a `class=player` entity (`nextbot=false`) on team 2; the
local player remained on team 1001 for every capture. The artifact used for
these runs is the rebuilt `build/Skyfall.dll`, MD5
`e3e08c2f5dc82c194a4ade44483e823e`, size 1,522,688 bytes. The external scene
and markers were removed before the final rebuild; the saved user config was
restored from `skyfall.ini.bak` (`enabled=1`, `esp=1`, `bhop=1`).

## Unsupported / verification boundary

The recovered binary inventory still contains all five original verification
boundaries in `offsets.json` `unsupported` and `offsets.h` `kUnsupported`. Two
are now closed by live execution and are retained only so the inventory matches
the recovered data; the three remaining live limits are:

1. **in-game hook execution** — **closed**: verified live with 24/24 rows.
2. **no-spread against a real weapon profile** — weapon base name, spread and
   inaccuracy are Lua/weapon-object values; the runtime exposes them as config
   values and uses the reconstructed Generic backend, not a live weapon read.
3. **triggerbot visibility trace** — **closed**: `0x180017150` resolves
   `EngineTraceClient003` into the engine-trace global, and `0x1800e2580` calls
   slot 4 (`TraceRay`) with mask `0x46004003` and a `CDoubleTraceFilter` that
   skips the local player. The runtime resolves the interface and uses the live
   trace; the angular gate is only a fallback when the interface is absent.
4. **backtrack rewind / bone history** — the recorder stores entity origins;
   per-bone history and server-time rewind require the missing lag-compensation
   path.
5. **anti-aim body desync modes 7-9** — the static yaw basis is reconstructed and
   mode 3 walks its stored base yaw by the clamped amplitude; the runtime body
   clock/offset in `0x1800bd8d0` is not available in this self-contained build.

## Out of scope

* **No auth handshake / VenLock edits.** `Skyfall.dll` does not replace the
  loader's existing shim.
* **Status: renderer entry point compiled, runtime-wired and exercised in the live client.** Config/SQLite decoding complete; implementation split: 38 provided (30 ImGui-core + 8 MSVC STL), 45 reconstructed, 0 missing; 0x1801d5ef0 is translated in src/features/renderer/renderer.cpp and called from the stage-6 FrameStageNotify path via renderer_runtime.cpp. Engine/Lua/SQLite operations use explicit typed host callbacks listed in the dependency map. The current build runs 16 suites. This document does not claim full binary parity with every original visual effect: the menu, section toggles, the element family, screen-space glow/chams, ghosts, snaplines/skeleton/offscreen, tracers/lookbeam, world tint, fog, skybox suppression, the sky editor, fullbright and command-stage features were exercised in-game; the material chams path and water/ambient visual proof remain boundaries listed above.


## 2026-11-25 — Obsidian menu, material chams and ESP gate

The live menu is now the recovered Obsidian shell rather than the utility window:
748x518, Arial, theme 0 palette, 140px sidebar, 46px top bar, the original
286x238 / 162 / 274 / 126 cards, Aimbot/HVH tabs, search, and per-feature gear
popups on Enable aimbot, Aim at NPCs, Draw FOV, Anti-AC protection, Hitscan mode,
No visual recoil and Backtrack. The gear buttons open the recovered sub-settings;
the Aimbot keybind now sits left of the toggle. Menu edits auto-save to
`%LOCALAPPDATA%\skyfall\skyfall.ini`.

Chams now use the recovered `DrawModelExecute` path, not screen-space rectangles:
`models/debug/debugwhite` with a per-pass `IncrementReferenceCount` (this removed
the engine's bad-reference-count flood), `MATERIAL_VAR_IGNOREZ` for the hidden
pass, a depth-tested visible pass, `IVRenderView::SetColorModulation`/`SetBlend`,
and the hidden/visible RGB, alpha and team settings from the menu.
`debug/debugdrawflat` and `vgui/white` remain fallbacks. The old filled
`IVDebugOverlay::AddBoxOverlay` ESP box was removed; the 2D ImGui overlay is the
shipped ESP and the master `esp` flag now gates the entire overlay.

Verification on 2026-11-25 (gm_construct, GMod x64, manual map):

- `build.bat`: all reconstructed suites pass; runtime self-test 0 failures;
  24/24 descriptor rows, 23/23 unique handlers.
- `build_dll.bat`: `build/Skyfall.dll` 1,574,400 bytes, MD5
  `884c9d0553bb9e8b4558c2346ce1ce31`.
- Live aim/trigger with the temporary team-2 bot: `aim targets: 1`,
  `features: aim=2486 trigger=2486`; bhop continued ticking; no crash.
- Chams material resolved live as `models/debug/debugwhite`; the player-path
  error model was tinted by the recovered hidden/visible passes, and the TTT prop
  was used as a second valid-model check. This install has no HL2/player models,
  so a true humanoid playermodel chams pass still needs a real player model.
- The Anti-AC gear popup (Anti-reversal, Fake mouse deltas, Snap protection,
  Pace backtrack tickshift, Autofire timing, Nova autoclick bypass, Block event
  subscriptions) was opened and rendered live.
- The temporary verification scene and copied TTT model were removed; the user
  config is restored (`esp=1`, `aimbot=0`, `triggerbot=0`, `aim_fov=15`,
  `chams=1`; `aim_always=1` now present to match the reference's Always on aim
  state).
