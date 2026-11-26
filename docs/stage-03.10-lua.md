# Stage 3.10 — Lua engine

The plan's Lua family. Every body carrying `[LUANET]`, `[LUAEDITOR]` or
`[LUAFEAT]` is reconstructed here from its dump body: 35 + 4 + 1 = 40. The
private stack and the DrawModelExecute hook were recovered in the first pass;
this pass closes the binding tables, the editor and the feature registration.

The tagged count is not the whole Lua surface: the same registration body
`0x1800594e0` also registers 48 reader/companion callees that carry no tag.
They are reconstructed in the reader section below, so the stage's actual
coverage is 40 tagged bodies + 48 registered callees = 88.

## Tag inventory (function counts)

| Tag | Bodies | Status |
|---|---|---|
| `[LUASTACK]` | 6 | recovered (`0x1800414c0`, `0x180041420`, `0x18002d7a0`, `0x18002d8c0`, plus the two stack helpers named there) |
| `[LUAHOOKS]` | 1 | recovered (`0x180057f20`) |
| `[LUAFEAT]` | 1 | recovered (`0x1800e8340`, 2217 bytes) |
| `[LUAEDITOR]` | 4 | recovered (`0x1800ec770`, `0x1800ef850`, `0x1800f0ab0`, `0x1800f1200`) |
| `[LUANET]` | 35 | recovered (inventory below) |

## Private stack

Open `0x1800414c0` (628 bytes):

1. Lazily resolves `lua_shared.dll` and six exports — `lua_newstate`,
   `lua_close`, `lua_pushcclosure`, `lua_settable`, `lua_createtable`,
   `lua_pushstring` — through `GetProcAddress`.
2. Calls the hide helper `0x18002d7a0` (floor `0x40000000`); on failure logs
   `[LUASTACK] refusing to open: private stack could not be hidden` and returns
   its `-1` sentinel.
3. Creates the state and the persist table; a missing persist table logs
   `[LUASTACK] refusing to open: persist table unavailable` and returns `-1`.
4. Records the state and the four callbacks in `DAT_1803ff*`; a second open
   while one is live returns the existing handle rather than creating another.

Release `0x180041420` (size in dump) closes the handle through `0x18002d8c0`,
clears the five globals and zeroes the eight callback entries. All eight
recovered addresses and both refusal strings are asserted in
`src/features/lua/stack.h`.

## DrawModelExecute hook

`0x180057f20` (194 bytes) resolves the interface via `0x180039770`, requires
`interface[1] == argument`, and forwards to slot `0xf8` with a boolean. The
boolean is true while the per-model counter `DAT_1803ff8b8` is below `8`; the
ninth and later calls pass false. The cap warning is one-shot
(`DAT_1804260e8`):

```
[LUAHOOKS] DrawModelExecute re-issue cap (%d per model) hit
```

Arguments come from `DAT_1803ff8e0`, `0x1803ff8b0`, `0x1803ff8c0`,
`0x1803ff8d8`; the callback is `DAT_1803ff8c8` gated by `DAT_1803ff8d0`.

## `[LUANET]` — 35 bodies

Every registration thunk in `0x1800594e0` uses the same shape:

```
lua  = FUN_180039770();                      // 0x180039770
if (lua && lua[1] == state) {
  net = (*(DAT_1803fa668 + 0x240))();        // VEngineClient015 -> CNetChan
  v   = (*(lua + 0x160))(lua, n);            // lua_tonumber
  ++DAT_1803ff928;                           // write counter
  log(...);
  apply to net / net vtable / BaseClientState;
}
```

A state mismatch returns 0. A missing channel calls `vtable+0xe0` (push nil)
or `vtable+0xf8` (push boolean) and returns 1. `log(...)` is the shared
`0x180014410`. The Lua C API is reached through the interface vtable: `+0xb8`
lua_tolstring, `+0xc0` lua_tointeger, `+0x138` lua_type, `+0x158` lua_tostring,
`+0x160` lua_tonumber, `+0x200` lua_toboolean, `+0xe8` error, `+0x10` pop,
`+0x30` begin table, `+0x100` push C function.

Shared globals: `DAT_1803fa620` BaseClientState (`+0x20b84`
lastoutgoingcommand, `+0x20b88` chokedcommands, `+0x20b8c` last_command_ack),
`DAT_1803fa668` VEngineClient015, `DAT_1803ff928` write counter. CNetChan raw
fields `+0x0c` out sequence, `+0x10` in sequence, `+0x14` out-seq ack, `+0x18`
OUT_RELIABLE, `+0x1c` IN_RELIABLE, `+0x20` choked, `+0x273c` packet drop,
`+0x2798` queued; vtable slots `0xd8`, `0xf8`, `0x108`, `0x150`, `0x178`,
`0x1e8`, `0x1f0`, `0x210`, `0x218`, `0x220`.

### Registration body — `0x1800594e0` (3448 bytes)

Opens the `channel` table, registers the reader family (`0x18005a260` …
`0x18005bc20`, not tagged) and the 30 tagged setters below, then the net-message
sub-table (`Disconnect` 1, `StringCmd` 4, `SetConVar` 5, `VoiceData` 10,
`BaselineAck` 11, `RespondCvarValue` 13, `FileCRCCheck` 14, `channel`) and the
`clientstate` table with `GetLastOutgoingCommand`, `GetChokedCommands`,
`GetLastCommandAck`, `GetCommandAck` and the three tagged setters. Logs:

```
[LUANET] channel table registered
[LUANET] api table unavailable -- persist not ready
```

### Tagged setters (30)

| Address | Size | API | Target | Verbatim log |
|---|---|---|---|---|
| `0x18005bcf0` | 179 | SetRate | vt `+0xd8` | `[LUANET] script set data rate -> %.0f\n` |
| `0x18005bdb0` | 176 | SetSendPacket | `DAT_1803ff938` | `[LUANET] script set bSendPacket -> %s\n` |
| `0x18005bef0` | 152 | SetSequenceNr | `+0x0c` | `[LUANET] script set out sequence %d -> %d\n` |
| `0x18005bf90` | 152 | SetInSequenceNr | `+0x10` | `[LUANET] script set in sequence %d -> %d\n` |
| `0x18005c030` | 152 | SetOutSequenceNrAck | `+0x14` | `[LUANET] script set out sequence ack %d -> %d\n` |
| `0x18005c0d0` | 152 | SetChokedPackets | `+0x20` | `[LUANET] script set choked packets %d -> %d\n` |
| `0x18005c170` | 158 | SetPacketDrop | `+0x273c` | `[LUANET] script set packet drop %d -> %d\n` |
| `0x18005c210` | 152 | SetOutReliableState | `+0x18` | `[LUANET] script set OUT RELIABLE state %d -> %d (stalls the reliable stream if this disagrees with the server)\n` |
| `0x18005c2b0` | 152 | SetInReliableState | `+0x1c` | `[LUANET] script set IN RELIABLE state %d -> %d (stalls the reliable stream if this disagrees with the server)\n` |
| `0x18005c350` | 160 | SetChallengeNr | vt `+0x108` | `[LUANET] script set challenge nr -> %u\n` |
| `0x18005c3f0` | 179 | SetTimeout | vt `+0xf8` | `[LUANET] script set timeout -> %.1fs\n` |
| `0x18005c4b0` | 159 | SetMaxRoutablePayloadSize | vt `+0x220` | `[LUANET] script set max routable payload -> %d\n` |
| `0x18005c550` | 218 | SetCompressionMode | vt `+0x1e8` | `[LUANET] script set compression -> %s\n` |
| `0x18005c630` | 241 | SetRemoteFramerate | vt `+0x218` | `[LUANET] script set remote framerate -> %.4f (dev %.4f)\n` |
| `0x18005c730` | 179 | SetInterpolationAmount | vt `+0x210` | `[LUANET] script set interpolation amount -> %.4f\n` |
| `0x18005c7f0` | 189 | SetClearTime | `+0x1e` | `[LUANET] script set clear time -> %.3f (now %.3f)\n` |
| `0x18005c8b0` | 189 | SetTimeConnected | `+0x1c` | `[LUANET] script set connect time -> %.3f (now %.3f)\n` |
| `0x18005c970` | 193 | SetLastReceived | `+0x1b` (float) | `[LUANET] script set last received -> %.3f (now %.3f)\n` |
| `0x18005ca40` | 165 | SetQueuedPackets | `+0x2798` | `[LUANET] script set queued packets -> %d (was %d)\n` |
| `0x18005caf0` | 293 | SendFile | vt `+0x150` | `[LUANET] script SendFile '%s' (id %u)\n` |
| `0x18005cc20` | 242 | RequestFile | vt `+0x1f0` | `[LUANET] script RequestFile '%s'\n` |
| `0x18005d170` | 265 | SendStringCmd | engine `+0x30` | `[LUANET] script SENT string cmd (%s): %s\n` |
| `0x18005d620` | 306 | SendVoice | `DAT_1803ff918` | `[LUANET] script sent voice: %u bytes -> %s\n` |
| `0x18005d760` | 270 | SendFileCRC | `DAT_1803ff910` | `[LUANET] script sent file CRC for '%s'\n` |
| `0x18005d870` | 319 | SendDisconnect | `DAT_1803ff948` | `[LUANET] script sent net_Disconnect: %s\n` |
| `0x18005d9b0` | 284 | Transmit | vt `+0x178` | `[LUANET] script forced a transmit (onlyReliable=%s)\n` |
| `0x18005dad0` | 302 | Disconnect | `DAT_1803ff930` | `[LUANET] script REQUESTED disconnect: %s\n` |
| `0x18005ddc0` | 141 | SetLastOutgoingCommand | `+0x20b84` | `[LUANET] script set lastoutgoingcommand %d -> %d\n` |
| `0x18005de50` | 141 | SetChokedCommands | `+0x20b88` | `[LUANET] script set chokedcommands %d -> %d\n` |
| `0x18005dee0` | 141 | SetLastCommandAck | `+0x20b8c` | `[LUANET] script set last_command_ack %d -> %d\n` |

### BlockMessage — `0x18005cd20` (1079 bytes)

Reads `name` (string 1) and `blocked` (boolean 2), takes mutex
`0x1803e7760` (sentinel `0x1803e77ac == 0x7fffffff` → `0x7ffffffe`, C++ error 6;
lock failure error 5), and inserts or erases the name in the intrusive map
`DAT_1805b8898` (node stride `0x40`, key at `+0x20`, colour `+0x19`). Insertion
allocates through `0x1802d8350(0x40)` and rebalances via `0x18022bb90`; erase
calls `0x18022dc30`. Log:

```
[LUANET] script %s outgoing '%s'\n     // "blocked" / "unblocked"
```

The body is also the place where the block table is seeded with `Disconnect` 1,
`StringCmd` 4, `SetConVar` 5, `VoiceData` 10, `BaselineAck` 11,
`RespondCvarValue` 13, `FileCRCCheck` 14 and `channel`.

### SendMessage — `0x18005d280` (901 bytes)

Reads the numeric message type (1), then a table (2) with keys
`0x180344c24`, `0x180344c28`, `0x180344c2c`, `"cookie"`, `"reliable"`,
`"voice"`; fills a `0x30`-byte message record and calls `DAT_1803ff920`. Log:

```
[LUANET] script sent message type %d (%s) -> %s\n
```

### Net_ShouldSend — `0x18006f280` (268 bytes)

One-shot convar probe `Net_ShouldSend` (`0x18003a090`); when set it walks the
block map, logs

```
[LUANET] script blocked outgoing net message '%s'\n
```

and returns 0 instead of calling the original `DAT_1803ff018`. A block hit also
runs `0x18006ed50` when `DAT_18042586d` is set.

### CL_Move trampoline — `0x1801f84d0` (772 bytes)

Gated by `DAT_1803fa408` (original). When enabled, it resolves the message name
via `0x1801f81f0` and a drop decision via `0x180059340`; a dropped name
increments `DAT_1803ff90c` and logs

```
[LUANET] dropped outgoing '%s' (%u so far)\n
```

For message type 9 (`clc_Move`) it emits a one-shot (`DAT_180423aea`) hex dump of
`0x60` bytes in `0x10`-byte rows and

```
[CLCMOVE] type=%d name=%s (GetName idx %d)\n
[CLCMOVE] +%02X: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X\n
[CLCMOVE] new=%d backup=%d (expected small ints at +0x24/+0x20)\n
```

then applies the `DAT_1804099b0` freeze window (`GetTickCount64`, flag
`DAT_1804099b8`, counter `DAT_180423b68`) with

```
[CLCMOVE] frozen: clc_Move dropped, datagram still sent (#%d)\n
```

before calling `0x1801f8230` and the original.

### Remaining `[LUANET]` bodies

The seven special bodies above plus the 30 setters cover 35 tagged addresses;
each setter table row above is one body (address, size, decoded target, string).
No tagged body is left undescribed.

## Registered reader/companion bodies — 48

Derived from the registration body, not from prose: every
`(**(code **)(*param_1 + 0x100))(param_1, callee)` push in `0x1800594e0`, in
slot order, before each `DAT_1803fcbe0(lua, -2, name)` setfield. That yields
**48 distinct callees**: 41 CNetChan readers (`0x18005a260`–`0x18005bc20`),
`GetSendPacket` (`0x18005be60`), four BaseClientState readers
(`0x18005dc00`–`0x18005dd50`) and the two `BlockMessage`/`SendMessage`
registration thunks (`0x18005d160`, `0x18005d610`). All 48 are read below;
none is left open.

Common shape for the 46 readers (all reuse `0x180039770` for the interface
check, `DAT_1803fa668 + 0x240` for the channel, `0x1803ff928` is **not**
incremented because they are read-only, and the Lua slots `+0xf0` number,
`+0xf8` boolean, `+0xe8` string, `+0xe0` nil):

```
if (!lua || lua[1] != state) return 0;
net = GetNetChan();                    // reused
if (!net) { push nil; return 1; }
result = net->slot(...) / net->field;
if (result == null) result = "";       // string readers only, 0x18033e5ea
push result;
return 1;
```

None of the 46 readers emits a log or format string — the only literals they
touch are the empty-string fallback `0x18033e5ea` (GetName, GetAddress) and
the Lua type constants `1`/`2`/`3`/`4` passed to `+0x138`. Kinds below:
**String** = net `+0x00`/`+0x08` then `+0xe8`; **Bool** = net slot then
`+0xf8`; **Float** = net slot then `+0xf0` (float→double); **Int** = net slot,
optional int args then `+0xf0`; **Raw** = CNetChan field then `+0xf0`;
**State** = BaseClientState field then `+0xf0`; **Trap** = `0x1803ff940`
callback then `+0xf8`.

| Address | Size | API | Shape | Target / detail |
|---|---|---|---|---|
| `0x18005a260` | 153 | GetName | String | net `+0x00`; null → `0x18033e5ea` |
| `0x18005a300` | 154 | GetAddress | String | net `+0x08`; null → `0x18033e5ea` |
| `0x18005a3a0` | 139 | IsLoopback | Bool | net `+0x30` |
| `0x18005a430` | 139 | IsTimingOut | Bool | net `+0x38` |
| `0x18005a4c0` | 139 | IsPlayback | Bool | net `+0x40` |
| `0x18005a550` | 143 | GetTime | Float | net `+0x10` |
| `0x18005a5e0` | 143 | GetTimeConnected | Float | net `+0x18` |
| `0x18005a670` | 146 | GetTimeSinceLastReceived | Float | net `+0xa8` |
| `0x18005a710` | 146 | GetTimeoutSeconds | Float | net `+0xc8` |
| `0x18005a7b0` | 135 | GetClearTime | Raw | net `+0xf0` |
| `0x18005a840` | 139 | GetQueuedPackets | Raw | net `+0x2798` |
| `0x18005a8d0` | 138 | GetRemoteFrameTime | Raw | net `+0x27a0` (float) |
| `0x18005a960` | 138 | GetRemoteFrameTimeStdDeviation | Raw | net `+0x27a4` (float) |
| `0x18005a9f0` | 181 | GetLatency | Int | lua arg 1 → int; net `+0x48` |
| `0x18005aab0` | 181 | GetAvgLatency | Int | lua arg 1 → int; net `+0x50` |
| `0x18005ab70` | 181 | GetAvgLoss | Int | lua arg 1 → int; net `+0x58` |
| `0x18005ac30` | 181 | GetAvgChoke | Int | lua arg 1 → int; net `+0x60` |
| `0x18005acf0` | 181 | GetAvgData | Int | lua arg 1 → int; net `+0x68` |
| `0x18005adb0` | 181 | GetAvgPackets | Int | lua arg 1 → int; net `+0x70` |
| `0x18005ae70` | 182 | GetTotalData | Int | lua arg 1 → int; net `+0x78` |
| `0x18005af30` | 185 | GetSequenceNr | Int | lua arg 1 → int; net `+0x80` |
| `0x18005aff0` | 144 | GetBufferSize | Int | net `+0x20` |
| `0x18005b080` | 144 | GetDataRate | Int | net `+0x28` |
| `0x18005b110` | 220 | IsValidPacket | Bool | args 1,2 → ints; net `+0x88` |
| `0x18005b1f0` | 228 | GetPacketTime | Float | args 1,2 → ints; net `+0x90` |
| `0x18005b2e0` | 275 | GetPacketBytes | Int | args 1,2,3 → ints; net `+0x98` |
| `0x18005b400` | 136 | GetOutSequenceNr | Raw | net `+0x0c` |
| `0x18005b490` | 136 | GetInSequenceNr | Raw | net `+0x10` |
| `0x18005b520` | 136 | GetOutSequenceNrAck | Raw | net `+0x14` |
| `0x18005b5b0` | 136 | GetChokedPackets | Raw | net `+0x20` |
| `0x18005b640` | 139 | GetPacketDrop | Raw | net `+0x273c` |
| `0x18005b6d0` | 136 | GetOutReliableState | Raw | net `+0x18` |
| `0x18005b760` | 136 | GetInReliableState | Raw | net `+0x1c` |
| `0x18005b7f0` | 149 | GetChallengeNr | Int | net `+0x1a0` |
| `0x18005b890` | 147 | GetDropNumber | Int | net `+0x190` |
| `0x18005b930` | 147 | GetSocket | Int | net `+0x198` |
| `0x18005b9d0` | 142 | IsOverflowed | Bool | net `+0x1c8` |
| `0x18005ba60` | 142 | CanPacket | Bool | net `+0x1c0` |
| `0x18005baf0` | 142 | HasPendingReliableData | Bool | net `+0x1d8` |
| `0x18005bb80` | 147 | GetMaxRoutablePayloadSize | Int | net `+0x228` |
| `0x18005bc20` | 208 | GetNumBitsWritten | Int | arg 1 optional boolean (`+0x138`/`+0x200`); net `+0x208` |
| `0x18005be60` | 144 | GetSendPacket | Trap | `DAT_1803ff940`; null channel or null trap → nil |
| `0x18005dc00` | 100 | GetLastOutgoingCommand | State | `DAT_1803fa620 + 0x20b84` |
| `0x18005dc70` | 100 | GetChokedCommands | State | `DAT_1803fa620 + 0x20b88` |
| `0x18005dce0` | 100 | GetLastCommandAck | State | `DAT_1803fa620 + 0x20b8c` |
| `0x18005dd50` | 100 | GetCommandAck | State | `DAT_1803fa620 + 0x20b90` |

`GetCommandAck` establishes a fourth BaseClientState field, `+0x20b90`, right
after `last_command_ack`; the three setters only cover `+0x20b84`–`+0x20b8c`.

### Registration wrappers — 2 companions

`0x18005d160` and `0x18005d610` have no decompiled body file because they are
7-byte thunks. They were read from `m64.dll` with `objdump -d`:

```
18005d160:  48 8b d1        mov %rcx,%rdx
18005d163:  e9 b8 fb ff ff  jmp 0x18005cd20    ; BlockMessage core
18005d610:  48 8b d1        mov %rcx,%rdx
18005d613:  e9 68 fc ff ff  jmp 0x18005d280    ; SendMessage core
```

Both shift the Lua state from arg1 to arg2 and tail-jump, so the recovered
cores and their strings (`0x18005cd20`, `0x18005d280`) apply unchanged. This is
the only place in the registration table where the slot callee is not a
standalone decompiled function; it is decoded, not open.

## `[LUAEDITOR]` — 4 bodies

### `0x1800ef850` — state initialiser (855 bytes)

Resolves `lua_gettop`/`lua_settop` from `lua_shared.dll`
(`DAT_1803fcfa0`/`DAT_180425540`); returns 1 when `DAT_1803fa5e8` already
equals the state. Otherwise it runs the 12 API installers
(`0x1800ebff0`, `0x180047bf0`, `0x180058b00`, `0x1800594e0`, `0x18005e350`,
`0x18003bb10`, `0x180041dc0`, `0x180069950`, `0x180054350`, `0x1800e3750`,
`0x18004a530`, `0x1800525b0`), registers DrawModelExecute through
`0x180057f20`, calls `0x1800e8340`, sets `DAT_1803ff978 = 0x1800f0fa0`, restores
the stack top and caches the state. Logs:

```
[LUAEDITOR] %s Lua state ready\n                         // Client/shared, Server, Menu, Unknown
[LUAHOOKS] api table unavailable -- persist not ready\n
[LUAHOOKS] DrawModelExecute registered\n
```

### `0x1800ec770` — RunScript (961 bytes)

Scans state kinds 2, 0, 1; finds the matching interface; requires a non-empty
buffer. Takes `lua_gettop`, calls `luaL_loadbufferx` through `0x1803feb68`;
compiled chunks optionally pass `0x180026890` (sandbox) and run through
`0x180023180`. Results: `0` not found/empty, `1` success, `2` compile/runtime
error; errors are pushed through slot `0xe8` with `luaL_checklstring`, and the
compile path also calls `0x1803faee0`. Logs:

```
[LUAEDITOR] RunScript: sandbox not applied\n
```

### `0x1800f0ab0` — failed external chunks (451 bytes)

Locks `0x1803e8550` (sentinel `0x1803e859c`), detaches
`DAT_1803e9ea0`/`0x1803e9ea8`/`0x1803e9eb0`, walks rows at stride `0x68`
(entries +0x00 script id, +0x08 text, +0x60 callback), calls
`0x1800f0630` and invokes the row callback with the status. Log:

```
[LUAEDITOR] external %s chunk failed: %s\n
```

### `0x1800f1200` — LuaLoaderFeature vfunc03 (15758 bytes)

The ImGui window. Locks `0x1803e8500` (sentinel `0x1803e854c`). If a run result
is pending (`DAT_180409bb8`) it renders `Ran on <state> - OK` or
`Failed on <state>: <error>` / `Hook <name>: <error>`, clearing the flag.
Otherwise it builds the frame from the ImGui state and draws, in order:

1. Background and window geometry from `0x180381650`…`0x180381720` and the
   current ImGui context (`+0xdd0`, `+0xe00`, `+0xe20`).
2. The title `Lua editor##AOS` (id `0x12d`), font push/pop through
   `0x18027a8a0`/`0x18027a5f0`, and the `LUA EDITOR` header.
3. A state combo `##lua_state` over `Client/shared`, `Server`, `Menu`
   (`DAT_180425408`, result `DAT_1803fa5f0`, clamp `< 3`).
4. The scripts panel `##lua_scripts_panel`: name field `##lua_script_name`
   (0x60 buffer, default `script.lua`), buttons `New`/`Save`/`Open`/`Refresh`
   (`0x1800eb7c0`, `0x1800eb390`, `0x1800eae40`), and the list
   `##lua_script_list` over `param+0x9d8` entries of stride `0x20`; selecting a
   row stores index at `+0x9f0`, copies the name into the 0x60 buffer and resets
   the buffer/state.
5. The editor surface `##lua_editor_surface` (flags `0x800`) with
   `Ctrl+Enter` run, `Find / replace (Ctrl+F)`, `Minimap`, `Blanks`, and the
   line-number gutter.
6. `Close`, `Refresh`, the status jump `##lua_status_jump` (`Click to jump to
   line %d`), and the run path: queue through `0x1800efd50`, on success
   `Ran on <state> - OK`, on failure `Failed on <state>: <error>`.

Verbatim strings and ids: `Lua editor##AOS`, `LUA EDITOR`, `Lua Loader`,
`SCRIPTS`, `Close`, `Refresh`, `New script buffer.`, `script.lua`,
`Run the buffer on the selected state  (Ctrl+Enter)`,
`Find / replace  (Ctrl+F)`, `Minimap`, `Blanks`, `Show spaces and tabs`,
`##lua_state`, `##lua_scripts_panel`, `##lua_script_name`, `##lua_script_list`,
`##lua_editor_surface`, `##lua_status_jump`, `Calling PopFont() too many
times!` (0x18027e9c0), and the run log

```
[LUAEDITOR] queued %d bytes for %s\n
```

## `[LUAFEAT]` — `0x1800e8340` (2217 bytes)

Opens the persist API table (`0x2736efefe1fb290` via `0x1800260c0`), then
registers eight tables with `+0x30` (begin) / `+0x100` (push C function) /
`DAT_1803fcbe0` (set field, -2) and aliases through `DAT_1803fcba8`:

| Table | Entries |
|---|---|
| `aimbot` | IsActive (`0x1800e8bf0`), HasTarget (`0x1800e8c30`), GetTarget (`0x1800e4340`), GetPosition (`0x1800e8c70`), SetTarget (`0x1800e8d40`), SetPosition (`0x1800e8dc0`), ClearForced (`0x1800e8e60`) |
| `triggerbot` | IsActive (`0x1800e8ea0`) |
| `freecam` | GetActive (`0x1800e8f00`), SetActive (`0x1800e8f60`), GetPosition (`0x1800e4bb0`), GetAngle (`0x1800e4c60`), SetPosition (`0x1800e8fb0`), SetAngle (`0x1800e9020`), GetSpeed (`0x1800e9120`), SetSpeed (`0x1800e9200`) |
| `thirdperson` | GetActive (`0x1800e9280`), SetActive (`0x1800e92e0`), GetDistance (`0x1800e9330`), SetDistance (`0x1800e9410`), GetSideDistance (`0x1800e94a0`), SetSideDistance (`0x1800e9580`), GetUpDistance (`0x1800e9610`), SetUpDistance (`0x1800e96f0`), GetBackDistance (`0x1800e9780` alias), SetBackDistance |
| `backtrack` | GetRecords (`0x1800e9780`), Count (`0x1800e98c0`) |
| `tick_anims` | Installed (`0x1800e98d0`), Active (`0x1800e99d0`), Pumps (`0x1800e99e0`), Interval (`0x180052af0`) |
| `esp` | SetText (`0x1800e9d50`), ClearText (`0x1800e9d60`), Clear (`0x1800e9de0`), GetText (`0x1800e9e10`), Slots (`0x1800e9f50`), SetPlayerText / SetEntityText aliases, ClearPlayerText / ClearEntityText aliases, IsVisible (`0x1800516a0`), SetVisible (`0x1800e9f90`), GetAlpha (`0x1800ea000`), GetWindowPos (`0x1800ea090`), GetWindowSize (`0x1800ea100`) |
| `menu` | InPanic (`0x1800ea170`) |

It restores the stack top and logs:

```
[LUAFEAT] api table unavailable -- persist not ready\n
[LUAFEAT] aimbot, triggerbot, freecam, thirdperson, backtrack, tick_anims, esp and menu tables registered\n
```

## Wiring and reuse

`0x1800ef850` is the caller that chains the API installers; `0x1800e8340` calls
`FUN_1800210b0(0,0)` first (the Stage 3.2 feature registry helper) and otherwise
talks to the Lua state directly. `0x1800594e0` reuses the Stage 3.11 interface
globals `DAT_1803fa668` and `DAT_1803fa620`; no new interface resolution is
introduced. The editor's ImGui calls are engine imports, not earlier-stage
helpers.

## Verification

`build.bat` builds and runs `src/features/lua/selftest.cpp` (stack) and the
RESOLVER suite. The latter now also asserts the Lua tag inventory
(35/4/1 = 40), the 30-setter table with its first/last addresses and offsets,
the `0x20b84`/`0x20b88`/`0x20b8c`/`0x20b90` BaseClientState fields, the 46-entry
reader table and its registration order, the two wrapper thunks and their
targets, the block-table sentinel and eight seeded names, the eight feature
tables and twenty recovered API rows, and all four editor addresses. Clean
build from an empty `build/`:
exit 0, 0 MSVC errors, 0 MSVC warnings, all sixteen suites PASS with 0 failures.

**Open in these tags: none.** Stage 3.6's paint-path element renderer is recovered
at `0x180174130` with a full `status: ok` body; only its class-specific element
geometry remains a runtime input (fixed defaults, stored sizes, screen extents
and text metrics). Visualize and backtrack are closed above,
and the 46 LUANET reader bodies are reconstructed in this sheet.
