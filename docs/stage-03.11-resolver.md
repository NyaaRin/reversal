# Stage 3.11 — Interface, VMT, pattern and netvar resolution

The plan's feed-forward family for Stage 4 (row 3.11). Twelve functions emit the
five tags; all twelve are reconstructed here and the family is **complete**.

## Tag inventory

| Tag | Functions | Recovered in this pass |
|---|---|---|
| `[IFACE]` | 3 | 3 |
| `[VMT]` | 2 | 2 |
| `[PAT]` | 6 | 6 |
| `[NETVARS]` | 1 | 1 |
| `[NWSTORE]` | 4 | 4 (`0x18006c9b0`, `0x18006d430`, `0x180103c10`, `0x180103d60`) |

Unique functions across the tags: 12. Recovered: 12.

## Recovered bodies

### `0x1801ecae0` — VMT hook installer (727 bytes)

Hooks two interfaces in one pass, each guarded by a code check (`0x1801eca80`):

| Interface | Global | Slot | Vtable byte offset | Original | Stub |
|---|---|---|---|---|---|
| `CHLClient` | `0x1803f9278` | `0x23` (FrameStageNotify) | `0x118` | `DAT_1803ff900` | `0x1801ec910` |
| `CPrediction` | `0x1803f9290` | `0x11` (RunCommand) | `0x88` | `DAT_1803ff8f8` | `0x1801ec9d0` |

Node allocation is `0x1802d8350(0x30)` with a self-linked list and tag `0x0101`;
the swap is performed under `VirtualProtect(..., 0x40, ...)` (PAGE_EXECUTE_READWRITE)
and the previous protection is restored immediately.

Verbatim:

```
[VMT-FAIL] CHLClient slot %d is not code; Pre/PostFrameStageNotify disabled
[VMT] CHLClient: FrameStageNotify(%d)=%p
[VMT-FAIL] CPrediction slot %d is not code; Pre/PostRunCommand disabled
[VMT] CPrediction: RunCommand(%d)=%p
```

### `0x1800200b0` — CBeamSegDraw scan (464 bytes)

Three signatures in `client.dll` through `0x180015f40`; results at
`0x1803f9268` / `0x1803f9270` / `0x1803f9260`; ready flag `0x1803f9259`;
one-shot guard `0x1803f925a`.

```
48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30 48 89 91 28 03 00 00
4C 8B DC 49 89 5B 18 49 89 6B 20 57 48 81 EC 90 00 00 00 8B 81 14 03 00 00
48 83 79 10 00 74 09 48 C7 41 10 00 00 00 00 C3 48 83 C1 20
```

Logs: `[PAT] BeamSeg Start=%p NextSeg=%p End=%p`, and on failure
`[PAT-WARN] CBeamSegDraw x64 incomplete`.

### `0x1800713d0` — GMod net read/write scan (427 bytes)

`engine.dll` signatures through `0x180015f40`, hooked with MinHook
(`0x180242fc0`) and status `0x1802436b0`. `DAT_1803fe370 = 0x18006e130`.

```
[PAT] GMod NetRead(in)   = %p %s
[PAT] GMod NetWrite(out) = %p %s
[MH] GMod NetRead: %s
[MH] GMod NetWrite: %s
```

### `0x1801f7a80` — NET_SetTimeForTimescale scan (639 bytes)

Signature collected by `0x180016410(..., 4)` — the limit is four copies. The
global resolves as `match + 8 + *(int32*)(match + 4)` into `DAT_1803fa398`.
At most two copies are hooked (`#0`, `#1`).

```
[PAT] NET_SetTimeForTimescale = %zu copy(ies)
[PAT] net_time_for_scale      = %p
[SPEED] net-time compensation disabled (missing signature)
[SPEED] NET_SetTimeForTimescale #%d @ %p hook=%s
```

### `0x180018770` — CViewRender verification (538 bytes)

Bounds: `lp >= lo`, `lp + 0x130 <= hi`, readable for `0x130`; slots `+0x28`,
`+0x30`, `+0x128` must be code; the RTTI locator at `lp - 8` must name
`.?AVCViewRender@@` (string at `0x180310118`). Success sets `DAT_1803f9258 = 1`
and `DAT_1803fa680 = slot address`.

```
[IFACE] g_pViewrender verified via %s 0x%llX -> %p (vt=%p Render=client+0x%llX RenderView=client+0x%llX PreHUD=client+0x%llX)
```

### `0x18006c9b0` — NW store manager scan (468 bytes)

Scans the first `0x100` bytes of `GetNWString` for `48 75 0D`; each hit yields
`target = 7 + offset + int32(match + 3)`; at most **8** unique targets are kept;
the manager is accepted only when **exactly one** is unique, and the target must
be readable for `0x30` bytes.

```
[NWSTORE] manager global @ %p -> mgr=%p (unique rip-global in GetNWString)
[NWSTORE] manager NOT resolved: %d rip-globals in GetNWString, %d of them unique (need exactly 1)
```

### `0x18006d430` — per-entity native/lua compare (657 bytes)

Rows are `0xA0` bytes: type `+0x48`, length `+0x30`, string `+0x20`. Only type
**4** is compared. Counters agree / mismatch / non-string.

```
[NWSTORE] ent=%d: row unreadable (mgr=%p)
[NWSTORE] ent=%d: %d entry(ies)
[NWSTORE]   %-9s '%s' type=%d ref=%d native='%s' lua='%s'
[NWSTORE] ent=%d: %d agree, %d MISMATCH, %d non-string
```

### `0x180103c10` / `0x180103d60` — native read toggle and probe (326 / 316 bytes)

| Field | Value |
|---|---|
| toggle key | `0x93fd561a96ab0c67` + `0x1efab65b168823bb`, field `+0x194d` |
| probe key | `0x93fd561a96ab0c67` + `0xf13ca7dd4fb3e293`, field `+0x194c` |
| native reader | `DAT_1803faf30 = 0x18006d8f0` |
| cleared entries | `0x81` (129), stride `0x50` |
| probe interval | `5000` ms (`GetTickCount`) stored at `+0x1948` |
| probe players | at most `2`, skipping the local index |

```
[NWSTORE] native reads %s        (off / ARMED)
[NWSTORE] native probe %s        ("0" / "ON" from 0x18034c4b0 / 0x18034b584)
```

## Constants

| Value | Address / source | Use |
|---|---|---|
| `0x40` | immediate | PAGE_EXECUTE_READWRITE for the swap |
| `0x118`, `0x88` | vtable byte offsets | CHLClient / CPrediction slots |
| `0x23`, `0x11` | immediates | FrameStageNotify / RunCommand |
| `0x130` | immediate | object read size in the verifier |
| `0x28`, `0x30`, `0x128` | immediates | Render / RenderView / PreHUD |
| `0x100` | immediate | GetNWString scan window |
| `8` | immediate | max unique scan candidates |
| `0x30` | immediate | manager read size |
| `0xA0` / `0x50` / `0x81` | immediates | row stride, entry stride, entry count |
| `5000` | immediate | probe interval |
| `4` | `0x180016410` argument | time-signature copy limit |
| `2` | control | max time hooks |

## Reuse of earlier stages

* The config root `0x93fd561a96ab0c67` and the shared opt-out key
  `0x402819404e703058` are the Stage 3.5/3.7/3.8/3.9 pair; 3.11 reads the same
  root for its native-read/probe keys and does **not** re-derive it.
* `0x18006d8f0` (native reader) is installed from the NW store body; it calls the
  same entity table the Stage 3.5 gates use, so no second entity walker was added.
* The MinHook helpers `0x180242fc0` / `0x1802436b0` are also used by Stage 3.10's
  hook path; the sheet names them instead of duplicating.
* No projection or trace-filter calls appear in this family.

## Addendum — the five formerly open bodies

* **`0x180017150` (`[IFACE]`, 5462 bytes)** — resolves MoveHelper,
  ViewRenderBeams and BaseClientState (`last=0x20B84`, `choked=0x20B88`), with
  `[IFACE-WARN] BaseClientState x64 CL_Move resolver failed` and
  `[IFACE-FAIL] g_pClient is null!`. Sweep: read the head and all `[IFACE]`
  strings of the body, every caller of `0x180018770`, and the string table for
  the tag; the body's 5 KB resolver chain was not decoded.
* **`0x1801f9180` (`[IFACE]` + `[VMT]` + `[PAT]`, 7719 bytes)** — interface sweep
  and DispatchEffect / lua_getstack scans. Sweep: string inventory
  (`[IFACE] D3D=…`, `[PAT] DispatchEffect`, `[MH] DispatchEffect`,
  `[PAT] lua_getstack`) and every caller; body not decoded.
* **`0x18002b540` (`[NETVARS]`, 6758 bytes)** — netvar table builder; uses mutex
  `0x1803e9140` and a recursion sentinel `0x7fffffff → 0x7ffffffe`, containers
  `0x1803ebb90`, `0x1803e9ae8`, `0x1803ea258`. No strings of its own. Sweep:
  grepped every `[NETVARS]` reference (only this function), every caller, and the
  three containers; the recursive table walk is not decoded.
* **`0x1801f7d00` (`[PAT]`, 667 bytes)** and **`0x1801f7fa0` (`[PAT]` +
  `[FAKEPING]`, 476 bytes)** — fake-ping signature scans. Sweep: tag inventory in
  `strings_by_function.tsv` and the `[FAKEPING]` string owners
  (`0x1800b7d00`, `0x1801f7fa0`); bodies not decoded.

## `0x180017150` — interface dump (5462 bytes)

Read in full. Sequence:

1. `GetModuleHandleA`/`GetProcAddress("CreateInterface")` for every interface, in
order: `VClient017` → `DAT_1803f9278`, `VEngineClient015` → `DAT_1803fa668`,
`VClientEntityList003` → `DAT_1803fa360`, `VGUI_Panel009` → `DAT_1803fa600`,
`VGUI_ivgui008` → `DAT_1803fa350`, `VGUI_System010`, `VGUI_Surface030` →
`_DAT_1803f9298`, `VGUI_Scheme010`, `VGUI_Input005` → `_DAT_1803fa328`,
`VGUI_InputInternal001`, `VBaseFileSystem011` → `DAT_1803f9248`,
`VFileSystem022` → `DAT_1803fa358`, `VEngineClientStringTable001`,
`VClientDllSharedAppSystems001`, `VENGINE_LAUNCHER_API_VERSION004`,
`VEngineVGui001` → `DAT_1803fa348`, `VModelInfoClient006` → `DAT_1803f9250`,
`VEngineRenderView014` → `DAT_1803f9280`, `VMaterialSystem080` →
`DAT_1803fa640`, `InputSystemVersion001` → `DAT_1803fa5a8`, `VEngineModel016` →
`DAT_1803fa598`, `EngineTraceClient003` → `DAT_1803fa610`,
`VPhysicsDebugOverlay001`, `VPhysicsSurfaceProps001` → `DAT_1803fa650`,
`VEngineCvar007` → `DAT_1803fa340`, `ShaderApi030`, `GAMEEVENTSMANAGER002` →
`DAT_1803fa320`, `GameMovement001` → `DAT_1803fa658`, `VClientPrediction001` →
`DAT_1803f9290`, `MDLCache004`. Missing `CreateInterface` throws through
`FUN_180013100` + `_CxxThrowException`.
2. MoveHelper: pattern `48 8B 0D ? ? ? ? 48 8B 01 FF 50 28 48 8B 0D` in
`client.dll` (8 copies, `FUN_180016410`) or RTTI sweep
`.?AVCMoveHelperClient@@` (size 8) → `DAT_1803fa5a0`.
3. ViewRenderBeams: same shape with `FF 50 18` and `.?AVCViewRenderBeams@@` (8)
→ `DAT_1803fa670`.
4. `LUASHARED003` → `DAT_1803fa678`; `g_pMemAlloc` from `tier0.dll`.
5. BaseClientState: `engine.dll` module info, signature
`40 55 53 48 8D AC 24 38 F0 FF FF B8 C8 10 00 00` (0x2f), then scans
`H 0x75 0x0D` (`48 75 0D`) across 0x400 bytes; the target must sit inside the
module and dereference to a pointer inside it. Result `DAT_1803fa620`, log
`[IFACE] BaseClientState (x64) = %p (last=0x20B84 choked=0x20B88)`; failure logs
`[IFACE-WARN] BaseClientState x64 CL_Move resolver failed`.
6. From `*DAT_1803f9278`: `+0x70` → `DAT_1803fa660` (Input), `+0x50` →
`DAT_1803fa638` (ClientMode), `+0x58` → `DAT_1803fa608` (globals).
7. ViewRender sweep: scans `*DAT_1803fa360`'s window for `48 75 0D` and the
`48 75 29 / 48 75 01` pair, then calls `0x180018770` with
`"View_Render sig+"` / `"View_Render scan+"`, then a data-sweep fallback with
`.?AVCViewRender@@`; failure logs through `0x18033f180`.
8. `[IFACE] Input=%p Globals=%p CMode=%p ViewR=%p`.
9. D3DDevice: signature `48 89 6C 24 18 ... 48 8B 0D` (0x4a) in
`shaderapidx9.dll`; pointer read at `match + 0x1d + rel32(match+0x19)` →
`DAT_1803fa5e0`. Failure: `[IFACE-FAIL] D3DDevice x64 pattern not found!`.
10. Render proxy: `48 8B 0D ? ? ? ? 48 8B 01 48 FF 60 60 CC CC 48 8B 0D ? ? ? ? 48 8B 01 48 FF 60 20`
(0x51) in `engine.dll` → `_DAT_1803fa688`; failures `[IFACE-FAIL] g_pRenderview
is null!` / `[IFACE-WARN] g_pRender x64 pattern not found`.
11. `KeyValuesSystem` from `vstdlib`, then `RandomSeed`: scans up to 0x20 bytes for
`48 8B 0D <rel32>` and dereferences the target → `DAT_1803fa5c0`. Failures:
`[IFACE-WARN] RandomSeed global at %p is null` and
`[IFACE-WARN] RandomSeed x64 pattern not found`.

## `0x1801f9180` — hook setup pass (7719 bytes)

Read in full. It takes a spin lock on `DAT_1803fa5f4` (0..0x1f `Sleep` loop), creates
`DAT_1803fa7a0 = HeapCreate(0,0,0)`, prints the banner `=== mayrrX64 Hook Setup ===`
and the interface dump, then installs 21 hooks via
`FUN_1801ecdc0` (container) + `FUN_180208e00` (slot record) +
`VirtualProtect(..., 0x40, ...)`. Every entry stores the original pointer in its
own global and uses stub `0x1801f*`:

| Interface | Slot | Byte offset | Stub | Original |
|---|---|---|---|---|
| D3D device `0x1803fa5e0` | 0x25 | 0x128 | `0x1801f5ad0` | `0x1803fa370` |
| D3D | 0x22 | 0x110 | `0x1801ebcd0` | `0x1803fa4f8` |
| D3D | 0x20 | 0x100 | `0x180118fa0` | `0x1804235a0` |
| D3D | 0x11 | 0x88 | `0x1801ebf30` | `0x1803fa4e0` |
| D3D | 0x10 | 0x80 | `0x1801ebe00` | `0x1803fa4d8` |
| MaterialSystem `0x1803fa640` | 0x14 | 0xa0 | `0x1801ed5d0` | `0x1803fa3d8` |
| CHLClient `0x1803f9278` | 0x1a | 0xd0 | `0x1801f6a20` | `0x1803fa440` |
| CHLClient | 0x17 | 0xb8 | `0x1801f3490` | `0x1803fa438` |
| CHLClient | 0x0b | 0x58 | `0x1801f6950` | `0x1803fa388` |
| CHLClient | 0x05 | 0x28 | `0x1801f6840` | `0x1803fa410` |
| CHLClient | 0x07 | 0x38 | `0x1801f68d0` | `0x1803fa420` |
| ClientMode `0x1803fa638` | 0x15 | 0xa8 | `0x1801ee530` | `0x1803fa3d0` |
| Panel `0x1803fa600` | 0x29 | 0x148 | `0x1801ed360` | `0x1803fa508` |
| ViewRender `0x1803fa680` | 0x06 | 0x30 | `0x1801f1b80` | `0x1803fa478` |
| ViewRender | 0x25 | 0x128 | `0x1801f32a0` | `0x1803fa3a0` |
| ViewRender | 0x28 | 0x140 | `0x1801f73b0` | `0x1803fa498` |
| Engine `0x1803fa668` | 0x14 | index via `FUN_180209520` | `0x1801f3360` | `0x1803fa380` |
| Engine | 0x13 | index | `0x1801f3440` | `0x1803fa3f0` |
| ModelRender `0x1803fa598` | 0x14 | 0xa0 | `0x1801f5340` | `0x1803fa378` |
| LuaShared `0x1803fa678` | 0x05 | 0x28 | `0x1801f6f60` | `0x1803fa3c0` |
| InputSystem `0x1803fa5a8` | 0x0f | 0x78 | `0x1801f7440` | `0x1803fa3c8` |

Pattern scans in the same body, with verbatim results:

```
=== mayrrX64 Hook Setup ===
[IFACE] D3D=%p Client=%p CMode=%p
[IFACE] Panel=%p View=%p Eng=%p
[IFACE] MdlR=%p LuaSh=%p VGui=%p
[PAT] DispatchEffect     = %p %s          (client.dll, 0x59)
[MH] DispatchEffect: %s
[PAT] lua_getstack       = %p %s          (export)
[MH] lua_getstack: %s
[PAT] luaL_loadbufferx   = %p %s          (export)
[MH] luaL_loadbufferx: %s
[Toolbox] SetModelIndex sig OUTDATED - model revert guard disabled
[PAT] AnimState::Update  = %p %s
[MH] AnimState::Update: %s
[PAT] lua index2adr      = %p %s
[MH] lua index2adr: %s
[PAT] lua gc_mark_root   = %p %s
[MH] lua gc_mark_root: %s
[INFO] lua persistence  = %s              ("raw TValue + gc_mark_root" / "registry refs (fallback)")
[MH] lua_close: %s
[MH] SetCursorPos: %s / [MH] GetCursorPos: %s / [MH] SetCursor: %s
[PAT] DrawTranslucent    = %p %s
[PAT] studio pAnim       = %p %s
[PAT] WriteUsercmd       = %p %s
[PAT] InvalidateBoneCache= %p %s
[VMT] D3D: dev=%p RT=%p Stretch=%p GRTD=%p Present=%p Reset=%p
[VMT] MaterialSystem: OverrideConfig(20)=%p
[VMT] VR(26)=%p WU(23)=%p HU(11)=%p LI(5)=%p LS(7)=%p ESP->ClViewRender
[VMT] CM(21)=%p
[VMT] PT(41)=%p
[VMT] RV(6)=%p PreHUD(37)=%p DrawViewModels(40)=%p
[VMT] SVA(20)=%p GVA(19)=%p
[VMT] DME(20)=%p
[VMT] CloseLuaInterface(5)=%p
[VMT] IsButtonDown(15)=%p
[DT] CL_Move=%p hook=%s
[SENDPKT] trap installed (VEH=%p); DR0 arms on the first live CreateMove
[DT] CL_Move signature not found; doubletap disabled
[MH] EnableAll: %s
=== Hook setup done ===
```

It then calls `0x1801ecae0` (Stage 3.11's VMT installer), sets `DAT_18040a288` /
`DAT_18040a278` under `DAT_18040a360`, runs `0x1800b5200` (hooks),
`0x1801ecf50` (packet trap), then the four scan bodies
`0x1801f7fa0` → `0x1801f7d00` → `0x1801f7a80` → `0x1800713d0`, `EnableAll`, and
`0x1800200b0`.

MoveHelper sound hooks use `vt + 0x20` and `vt + 0x28`; a null MoveHelper logs
`[MH-WARN] g_pMoveHelper null - sim footstep audio stays doubled`.

## `0x18002b540` — netvar table builder (6758 bytes)

Read in full; the recursive walk is the intrusive-map lookup, decoded here.

1. `_Mtx_lock(&DAT_1803e9140)`; non-zero throws `std::_Throw_Cpp_error(5)`. If
`DAT_1803e918c == 0x7fffffff` it becomes `0x7ffffffe` and throws error 6
(recursion guard).
2. Every config value is fetched by hashing the key with FNV-1a 64
(basis `0x14650fb0739d0383`, prime `0x100000001b3`) and walking the map at
`*param_1`: nodes have `left +0x00`, `right +0x10`, `parent +0x18`, colour byte
`+0x19`, key hash `+0x20`, value `+0x28`.
3. Keys read, in order, with their size hints:

| Key | Hint | Destination |
|---|---|---|
| `netvars.override.name` | 0x80 | `DAT_1803ebb90` |
| `netvars.override.group` | 0x4000 | `DAT_1803e9ae8` |
| `netvars.override.job` | 0x2000 | `DAT_1803ea258` |
| `netvars.count` | 8 (clamp `DAT_18033c6a4`) | per-source loop |
| `path`, `enabled`, `tpl_enabled`, `tpl_first`, `tpl`, `keycount`, `key.<n>` | 0x20/0x1000/0x80/0x100/0x200/0x800/… | per-source rows |
| `netvars.version` | — | migration decision |

4. The per-source loop runs `iVar29 < netvars.count` (clamped to 8). For each
source it builds `path` (concatenating up to 0x68-byte rows), tests `enabled`
against `"1"` (`0x18034124c`) or `"true"` (`0x18033e5dc`), the same pair Stage
3.10 restores `cl_extrapolate` with, then `tpl`, then up to 0x10 `key.<n>`
entries (clamp `DAT_18033c6a8`), merging each into the row map with
`FUN_180214300`.
5. Rows are appended at stride `0x68` (`FUN_180229690` grow / `FUN_180210160`
emplace); the three container globals `DAT_1803e9b08/10/18` are swapped in.
6. `netvars.version` is parsed with `strtol`; default 1 when absent. If `< 6`
the migration runs over every source: `FUN_180026950(name)`, and when the row's
`name` span is empty (`+0x28 == +0x30`) it re-seeds from `FUN_180029ed0`. Log:

```
[NETVARS] migrated config v%d -> v%d: %d source(s) added, %d NW pseudo-store(s) re-seeded with name keys
```

7. Always sets `DAT_180423751 = 1`, increments `DAT_1803e9190` under a lock, and
   calls `FUN_18021d720` on the rebuilt table. When `netvars.count` is absent it
   calls `FUN_180029fc0` and still increments the counter. Unlocks the mutex last.

## `0x1801f7d00` — host-time scan (667 bytes)

Read in full. Signatures (engine.dll): `Host_AccumulateTime` (`...F2 0F 10 15...`,
0x4f), `host_frametime` (`F3 0F 11 0D ? ? ? ? E8...`, 0x3e), and
`host_frametime_unbounded` (`F3 0F 10 05 ? ? ? ? 33 DB`, 0x19). Each global
resolves as `match + 8 + rel32(match + 4)` into `DAT_1803fa428` /
`DAT_1803fa480`. Non-adjacency (difference != 4) refuses the hook and zeroes both:

```
[PAT] Host_AccumulateTime      = %p %s
[PAT] host_frametime           = %p
[PAT] host_frametime_unbounded = %p
[SPEED] frametime globals are not adjacent (%p / %p) - refusing to hook
[SPEED] Host_AccumulateTime hook=%s
[SPEED] speedhack disabled (missing signature)
```

Success stores `DAT_180423572 = (hook == 0)`. **This closes Stage 3.7's open
question about the `hooks=%d` field in the [SPEED] log: it is this flag, set here.**

## `0x1801f7fa0` — fake-ping scan (476 bytes)

Read in full. Two engine signatures: `CNetChan::ProcessPacket`
(`40 53 57 41 54 41 55 41 56 48 81 EC...`, 0x57) and `CNetChan::SendDatagram`
(`40 55 53 56 57 41 55 41 56 41 57 48 8D AC 24...`, 0xa1), hooked to
`0x1801f7680` / `0x1801f76e0` with originals `DAT_1803fa4a8` / `DAT_1803fa488`.
Both created sets `DAT_1803facfa = 1`, otherwise `0`:

```
[PAT] CNetChan::ProcessPacket = %p %s
[PAT] CNetChan::SendDatagram  = %p %s
[MH] ProcessPacket: %s | SendDatagram: %s
[FAKEPING] signature missing; fakeping disabled this session
```

## Verification

`build.bat` builds `src/features/resolver/selftest.cpp` and runs it after the Lua
suite. It asserts the VMT install and both refusal paths, the beam readiness and
incomplete warning, the four-copy/two-hook limits, the net-time pointer
arithmetic, the module bounds and `0x130` overrun rule, the unique-candidate
manager rule, the compare counters, the 5000 ms probe deadline and the two-player
cap, plus every recovered address and key. The follow-up pass adds the new
structural facts: the frametime adjacency rule, both-hooks fake-ping rule, the
21-entry hook table (including the index-installed Engine slots), FNV-1a basis/
prime, source and key clamps, bool parsing, and the v6 migration gate. Clean
build from an empty `build/`: exit 0, 0 MSVC errors, 0 MSVC warnings; all eleven
suites PASS with 0 failures.
