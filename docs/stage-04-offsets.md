# Stage 4 — Offset / signature database

**Status: the recovered hook database is complete and every row is wired into
the runtime install path. Optional rows are conditional on their interface or
D3D device; live GMod verification and the feature boundaries listed in
`stage-05-runtime.md` remain open.**

`src/offsets/offsets.json` records the setup pass and the compiled header
`src/offsets/offsets.h` is what `Skyfall.dll` includes. The JSON parses cleanly
and the runtime self-test asserts the table sizes, unique ids,
interface/slot/ABI/feature agreement, the live/unsupported inventories and
one named per-hook coverage assertion for every descriptor row.

## Hook table

Source: `0x1801f9180` (7,719 bytes). It installs these 21 VMT hooks. The
`core_hooks` table adds `FrameStageNotify`, `PredictionRunCommand` and the
`ClientMode::CreateMove` row shared with hook 11. The runtime therefore has
**24 descriptor rows and 23 unique interface/slot entries**; it reports the duplicate row
explicitly instead of hiding it.

The D3D identities were corrected this pass. Slots 37/34/32 are the IDirect3DDevice9
`SetRenderTarget` / `StretchRect` / `GetRenderTargetData` methods, not Reset/
Present/GRTD; slots 16/17 are `Reset`/`Present`. The old labels came from the
setup log's `RT`/`Stretch`/`GRTD` shorthand and are no longer used as function
names.

| # | Id | Interface | Slot | Vtable | Stub | Original | ABI (excluding `this`) | Runtime |
|---|----|-----------|------|--------|------|----------|-----------------------|---------|
| 0 | D3dSetRenderTarget | D3D | 0x25 | 0x128 | 0x1801f5ad0 | 0x1803fa370 | `HRESULT(DWORD, void*)` | yes |
| 1 | D3dStretchRect | D3D | 0x22 | 0x110 | 0x1801ebcd0 | 0x1803fa4f8 | `HRESULT(void*, const RECT*, void*, const RECT*, int)` | yes |
| 2 | D3dGetRenderTargetData | D3D | 0x20 | 0x100 | 0x180118fa0 | 0x1804235a0 | `HRESULT(void*, void*)` | yes |
| 3 | D3dPresent | D3D | 0x11 | 0x088 | 0x1801ebf30 | 0x1803fa4e0 | `HRESULT(const RECT*, const RECT*, HWND, const RGNDATA*)` | yes |
| 4 | D3dReset | D3D | 0x10 | 0x080 | 0x1801ebe00 | 0x1803fa4d8 | `HRESULT(D3DPRESENT_PARAMETERS*)` | yes |
| 5 | MaterialSystem | MaterialSystem | 0x14 | 0x0a0 | 0x1801ed5d0 | 0x1803fa3d8 | `bool(void*, bool)` | yes |
| 6 | ChlVr | CHLClient | 0x1a | 0x0d0 | 0x1801f6a20 | 0x1803fa440 | `void(void*)` | yes |
| 7 | ChlWriteUsercmd | CHLClient | 0x17 | 0x0b8 | 0x1801f3490 | 0x1803fa438 | `bool(void*, int, int, bool)` | yes |
| 8 | ChlHudUpdate | CHLClient | 0x0b | 0x058 | 0x1801f6950 | 0x1803fa388 | `void(bool)` | yes |
| 9 | ChlLevelInit | CHLClient | 0x05 | 0x028 | 0x1801f6840 | 0x1803fa410 | `void(const char*)` | yes |
| 10 | ChlLevelShutdown | CHLClient | 0x07 | 0x038 | 0x1801f68d0 | 0x1803fa420 | `void()` | yes |
| 11 | ClientMode | ClientMode | 0x15 | 0x0a8 | 0x1801ee530 | 0x1803fa3d0 | `bool(float, CUserCmd*)` | yes |
| 12 | Panel | Panel | 0x29 | 0x148 | 0x1801ed360 | 0x1803fa508 | `void(unsigned int, bool, bool)` | yes |
| 13 | ViewRender | ViewRender | 0x06 | 0x030 | 0x1801f1b80 | 0x1803fa478 | `void(void*, int, int)` | yes |
| 14 | ViewRenderPreHud | ViewRender | 0x25 | 0x128 | 0x1801f32a0 | 0x1803fa3a0 | `void(void*)` | yes |
| 15 | ViewRenderDrawModel | ViewRender | 0x28 | 0x140 | 0x1801f73b0 | 0x1803fa498 | `void(void*)` | yes |
| 16 | EngineServerViewAngles | Engine | 0x14 | -1 | 0x1801f3360 | 0x1803fa380 | `void(QAngle*)` | yes |
| 17 | EngineGetViewAngles | Engine | 0x13 | -1 | 0x1801f3440 | 0x1803fa3f0 | `void(QAngle*)` | yes |
| 18 | ModelRenderDrawModelExecute | ModelRender | 0x14 | 0x0a0 | 0x1801f5340 | 0x1803fa378 | `void(const void*, const void*, void*)` | yes |
| 19 | LuaShared | LuaShared | 0x05 | 0x028 | 0x1801f6f60 | 0x1803fa3c0 | `void(void*)` | yes |
| 20 | InputSystem | InputSystem | 0x0f | 0x078 | 0x1801f7440 | 0x1803fa3c8 | `bool(int)` | yes |

The ABI column omits the implicit `this` for readability. The full type
sequence including `this` is the `abi` string in `offsets.h`/`offsets.json`, and
`RUNTIME SELFTEST` compares that string with the compiled `kHookAbi` row. No
return value is discarded. Every row preserves the original return value.
`CreateMove` is `bool`, the five
D3D methods are `HRESULT`, `OverrideConfig`/`WriteUsercmdDeltaToBuffer`/
`IsButtonDown` are `bool`, and every remaining detour is `void`.

### Core rows

| Id | Interface | Slot | Vtable | Stub | Original | ABI | Runtime |
|----|-----------|------|--------|------|----------|-----|---------|
| ClientModeCreateMove | ClientMode | 0x15 | 0x0a8 | 0x1801ee530 | 0x1803fa3d0 | `bool(float, CUserCmd*)` | yes |
| FrameStageNotify | CHLClient | 0x23 | 0x118 | 0x1801ec910 | 0x1803ff900 | `void(int)` | yes |
| PredictionRunCommand | CPrediction | 0x11 | 0x088 | 0x1801ec9d0 | 0x1803ff8f8 | `void(void*, CUserCmd*, void*)` | yes |

## Signature patterns

The six strings from `0x1800200b0`, `0x1800713d0` and `0x1801f7a80` are stored
byte-for-byte, including `?` wildcards:

| Id | Module | Pattern |
|----|--------|---------|
| BeamSegStart | client.dll | `48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30 48 89 91 28 03 00 00` |
| BeamSegNext | client.dll | `4C 8B DC 49 89 5B 18 49 89 6B 20 57 48 81 EC 90 00 00 00 8B 81 14 03 00 00` |
| BeamSegEnd | client.dll | `48 83 79 10 00 74 09 48 C7 41 10 00 00 00 00 C3 48 83 C1 20` |
| GmodNetRead | engine.dll | `48 89 5C 24 08 48 89 74 24 10 57 48 8B F9` |
| GmodNetWrite | engine.dll | `48 89 5C 24 08 57 48 83 EC 20 48 8B 01 48 8B FA 48 8B D9 FF 50 38 41 B1 01 41 B8 06 00 00 00 8B D0 48 8B CF E8 ? ? ? ? 8B 53 20 41 B1 01 41 B8 14` |
| NetSetTimeForTimescale | engine.dll | `48 83 EC 38 48 8B 0D ? ? ? ? 48 8D 15 ? ? ? ? 0F 29 74 24 20 0F 28 F0 F2 0F 5C 35 ? ? ? ?` |

## Interface resolution

The runtime resolves live objects through `CreateInterface`, not the
version-specific m64 globals:

* `client.dll`: `VClient017`, `VClientPrediction001`, `VClientEntityList003`
* `engine.dll`: `VEngineClient015`, `VDebugOverlay003`, `VEngineRenderView014`,
  `VEngineModel016`
* `materialsystem.dll`: `VMaterialSystem080`
* `inputsystem.dll`: `InputSystemVersion001`
* `vgui2.dll`: `VGUI_Panel009`
* `lua_shared.dll`: `LUASHARED003`
* D3D9 device: the same `shaderapidx9.dll` x64 pattern `0x180017150` uses:
  `48 89 6C 24 18 48 89 7C 24 20 41 56 48 83 EC 30 48 8B F9 45 33 F6 48 8B 0D`,
  with the device resolved at `match + 0x1d + *(int32*)(match + 0x19)`.

The ClientMode object comes from `CHLClient` slot 10, the same RIP-relative
accessor used by the original. The player netvar table is walked from
`CHLClient::GetAllClasses`; this pass resolves `m_vecViewOffset[0]` and
`m_vecVelocity[0]` alongside `m_fFlags`, `m_iTeamNum`, `m_lifeState` and
`m_iHealth`.

## Canonical inventory

The runtime descriptor table is `sf::offsets::kHooks`; `skyfall.cpp` reads each
row's interface/slot from it instead of keeping a second slot table. The
self-test compares every `kHookAbi` row with the descriptor's id, interface,
slot, full ABI string and feature string, and does the same for the three core
rows. The live-feature inventory is exactly:

`bunnyhop`, `autostrafe`, `aimbot`, `triggerbot`, `no-spread`, `anti-aim`,
`backtrack`, `fullbright`, `esp`.

The explicit unsupported list, with the evidence each item is missing, is:

1. **in-game hook execution** — **closed**: verified in a live GMod x64 client
   (24/24 rows installed); the recovered inventory retains the original entry.
2. **no-spread against a real weapon profile** — no live Lua/weapon-object
   read; the runtime uses config values and the reconstructed Generic backend.
3. **triggerbot visibility trace** — **closed**: `0x180017150` resolves
   `EngineTraceClient003` into `DAT_1803fa610`, and `0x1800e2580` calls slot 4
   (`TraceRay`) with mask `0x46004003`, a `CDoubleTraceFilter` skipping the local
   player, and the 0x68-byte `trace_t`. The runtime resolves the same interface
   and uses the trace; the angular gate remains only as a fallback when the
   interface is absent.
4. **backtrack rewind / bone history** — the recorder stores origins, but the
   lag-compensation path for per-bone history and server-time rewind is missing.
5. **anti-aim body desync modes 7-9** — the `0x1800bd8d0` body clock/offset is
   not in the self-contained build; mode 3's stored-base-yaw walk is live.

The same five names and evidence boundaries are in `src/offsets/offsets.json`
`unsupported` and `src/offsets/offsets.h` `kUnsupported`; those two hold the
exact reason strings.

## Installation boundary

`skyfall.cpp` waits for `IsInGame` and a valid local player, then attempts all 24
descriptor rows through the `kHooks`/`kCoreHooks` table. `InstallVmt` stores the
exact original before swapping and `UninstallVmt` restores it only when the slot
still contains our detour. The runtime logs:

```
hooks installed: 24 of 24 descriptor rows (23 unique interface/slot entries); ClientMode is recorded once in hooks[] and once in core_hooks[]
```

If an interface or the D3D device is missing, the affected row is left
uninstalled and logged by name; the count then reflects it. No row is silently
counted as installed.

**No descriptor is intentionally left unpointed.** The conditional rows are:

* the five D3D rows (they require the shaderapidx9 device pattern);
* MaterialSystem (requires `materialsystem.dll` / `VMaterialSystem080`);
* Panel (requires `vgui2.dll` / `VGUI_Panel009`);
* the three ViewRender rows (require `engine.dll` / `VEngineRenderView014`);
* ModelRender (requires `engine.dll` / `VEngineModel016`);
* LuaShared (requires `lua_shared.dll` / `LUASHARED003`);
* InputSystem (requires `inputsystem.dll` / `InputSystemVersion001`).

The CHLClient, ClientMode, FrameStageNotify and CPrediction rows are required:
if `client.dll` or the ClientMode accessor is absent, the install returns false
instead of reporting a partial success.

`RUNTIME SELFTEST` exercises `InstallVmt`/`UninstallVmt` against a synthetic
vtable, checks every descriptor/ABI row (id, interface, slot, full signature,
feature), every hook's argument pass-through and original return value, the
live-feature and unsupported inventories, and every command feature's gate.
The per-hook coverage layer emits **24 named descriptor PASS lines** (21 `hook`
rows plus 3 `core` rows) and **23 named handler PASS lines**, one per unique
handler. Each descriptor line carries the hook name, `interface/0xslot` and
return class. The two ClientMode rows print separately as `hook CreateMove` and
`core CreateMove`; the shared handler line is marked `shared by 2 descriptor
rows`. **Exclusions: none (0 hooks).** Every one of the 24 descriptor rows is asserted; void-return rows assert ABI shape and argument pass-through because they have no return value.
Live GMod x64 injection installed all 24 descriptor rows and exercised the
command, ESP and Present paths; the standalone ABI fixtures remain the unit-level
proof for every slot.
