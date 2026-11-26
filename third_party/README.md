# Third-party dependency manifest

This directory contains only dependencies that are both public and required by
the reconstructed code. The exact binary-backed dependency state is:

| Dependency | State | Location / evidence |
|---|---|---|
| Dear ImGui 1.92.8 (19280) | **vendored, pinned** | `third_party/imgui/`; commit `8936b58fe26e8c3da834b8f60b06511d537b4c63`; archive SHA-256 in `imgui/UPSTREAM.md` |
| Windows SDK D3D9 / Win32 | **installed toolchain** | `d3d9.h` from Windows SDK `10.0.26100.0`; used by `imgui_impl_dx9.cpp` and `imgui_impl_win32.cpp` |
| MSVC C++ standard library / CRT | **installed toolchain** | VS 2026 x64; supplies `std::string`, `std::vector`, `std::any`, `std::filesystem`, `malloc`, `vsnprintf`, mutexes |
| SQLite | **engine-provided, not vendored** | the routines at `0x18014c6b0`/`0x18014d5a0` call the engine's `sqlite3_exec` pointer; GMod builds SQLite into the engine and exposes the Lua `sql` library, with no public module C API or `sqlite3.dll`; a separate SQLite library would not match the host engine |
| Lua | **engine-provided, not vendored** | the routines resolve `lua_shared.dll` at runtime (`lua_newstate`, `lua_close`, table/stack calls); GMod uses the Lua 5.1/LuaJIT ABI, not Lua 5.4, and the source is not linked into `m64.dll` |
| Garry's Mod engine types / interfaces | **not public** | `VEngineClient015`, `CNetChan`, `BaseClientState`, ConVar/event/chat vtables and global offsets are image-specific; no package supplies them |
| Goossens TextEditor | **not needed for `0x1801d5ef0`** | the recovered renderer helper closure does not call TextEditor; it is used by the Stage 3.10 Lua editor and remains a separate UI dependency |

The ImGui archive is retained at `re/vendor/imgui-v1.92.8.tar.gz`. The vendored
tree is unmodified upstream source plus `UPSTREAM.md`, `SHA256SUMS` and the
license.

No engine or Lua/SQLite shim is placed here. Adding one would change the ABI
being reconstructed rather than satisfy it.
