# Renderer dependency map — `0x1801d5ef0`

**Status: renderer entry point compiled and runtime-wired; full binary/in-game parity remains.** Config/SQLite decoding complete; implementation split: 38 provided (30 ImGui-core + 8 MSVC STL), 45 reconstructed, 0 missing; 0x1801d5ef0 is translated in src/features/renderer/renderer.cpp and called from the stage-6 FrameStageNotify path via renderer_runtime.cpp. Engine/Lua/SQLite operations use explicit typed host callbacks listed in the dependency map. The current build runs 16 suites.

Recovered from `re/dump/renderer/0x1801d5ef0_FUN_1801d5ef0.c` (194,287 bytes, 5,142 lines).  All 83 external helper bodies are preserved under `helpers/` with `status: ok`; the 84th identifier is the renderer's own signature reference, not a dependency.

**Call accounting.** 8,052 disassembly lines contain 955 call instructions.  The C body has 83 external named callees and 814 call sites to them; the rest are imports, indirect calls and tail calls.  The older '84 direct callees' shorthand counted the renderer's own name; this map keeps that row explicit and does not treat it as a helper.

**Classification counts:** entry: 1, missing: 0, provided: 38, reconstructed: 45.

**Dependency groups:** config: 0, engine: 0, entry: 1, file: 0, file-sqlite: 0, imgui-provided: 30, lua: 0, reconstructed: 45, stl-provided: 8.

**Reconstructed rows:** 45 (the 26 former missing rows in `src/features/renderer/dependencies.cpp`, plus six earlier helpers: `0x180268980` → `src/features/config/ui_hash.h::ImGuiHash`; `0x180012ac0` → `src/features/renderer/ui_helpers.cpp:FormatV`; `0x18001d080` → `AssignString`; `0x180140b70` → `FilterAndTrim`; `0x1802d8350` → `AllocateOrThrow`; `0x180014410` → `src/features/renderer/log_writer.cpp:LogV`; plus the eleven former ImGui wrapper rows and the two key-capture helpers (`0x1802d31a0` and `0x1801df700`) in `src/features/renderer/ui_widgets.cpp`, listed individually in the table below).  The renderer suite exercises those source units in the pinned ImGui context.  `provided` means the implementation comes from pinned upstream source or the MSVC runtime (`third_party/imgui` v1.92.8 and the same x64 release STL), not from a wrapper in this tree.  No row remains missing; the former missing rows are compiled in `dependencies.cpp` with explicit host callbacks.  No shim or stub layer was added.

**What remains:** no missing helper rows. The 26 former missing rows are implemented in `src/features/renderer/dependencies.cpp`: six config-store/std::any helpers, seven file/global-state helpers, four file+SQLite maintenance helpers, eight engine-interface helpers and one Lua-VM helper. The 38 `provided` rows are 30 ImGui 1.92.8 core plus 8 MSVC STL release-ABI helpers. `0x1801d5ef0` is translated in `src/features/renderer/renderer.cpp`, compiled by both build scripts and reached from the stage-6 `FrameStageNotify` path; `renderer_ui_ImGui.cpp` supplies the live ImGui backend and `renderer_runtime.cpp` owns the frame. The full 5,142-line body is still the parity reference, so line-for-line equivalence and live in-game behaviour remain open.

**Host boundaries (not missing helpers).** These are the typed callbacks the translated entry point uses where the reconstruction has no live GMod engine, Lua VM or SQLite connection. They are declared in `src/features/renderer/dependencies.h`; the runtime installs the engine slots it can (`console_print`, `connected_ready`, `chat_send`), and the remaining slots are host-supplied. No callback fabricates game behaviour.

| Boundary | Recovered row(s) | Why it is a boundary |
|---|---|---|
| `EngineHost::convar_int` | `0x1800b3740` | Reads a live ConVar value (`sv_maxusrcmdprocessticks`); the reconstruction has no ConVar system. The clamp policy itself is reconstructed. |
| `EngineHost::convar_read` | Tools read action | Reads the live ConVar value into the editor; only the engine owns the ConVar object. |
| `EngineHost::convar_clear_flags` | Tools unlock action | Clears the live ConVar's blocking flags; the engine owns the flag word. |
| `EngineHost::convar_force` | Tools force action | Forces a value without touching flags; only the engine can apply it. |
| `EngineHost::event_subscribed` | `0x180142570`, `0x1801425f0` | Registers `player_death` / `player_hurt` with the live game-event manager; no event manager exists outside GMod. |
| `EngineHost::console_print` | `0x180144d80` | Writes to the engine console; the host owns the console sink. The runtime wires this to the engine when available. |
| `EngineHost::connected_ready` | `0x180145a20` | Queries the live engine connection state; only the engine can answer it. |
| `EngineHost::chat_send` | `0x180145f40` | Sends through the live client chat path; only the engine can deliver it. |
| `SqliteExecutor` | `0x180151970`, `0x1801542d0`, `0x1801544e0` | Executes the reconstructed SQL wipe plan against the live SQLite database; file enumeration and plan construction are reconstructed, but the SQLite connection is host-owned. |
| `LuaDumpSource` | `0x1801996a0` | Reads the live Lua VM state and returns the dump path; the Lua VM is engine-owned. |

`PickLoadingScreenPage` (`0x180220c70`) is not a boundary: it is a real Win32 file-picker implementation in `dependencies.cpp`. The config store, addon cache, model-path normalization, cleaner file enumeration/planning and the 45 helper rows are compiled in this tree.

The generated branch/callee inventory is `re/dump/renderer/INVENTORY.md` (24 labels, 84 callees); it is produced by `py re/tools/renderer_inventory.py` from this map and the recovered body.

**Former ImGui wrapper rows:** all eleven are reconstructed source (see their table entries); none remains in the missing bucket and none cites a first-party helper or module global as a blocker.

