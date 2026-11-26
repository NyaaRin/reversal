# Dear ImGui — pinned upstream source

- Upstream: <https://github.com/ocornut/imgui>
- Tag: `v1.92.8`
- Commit: `8936b58fe26e8c3da834b8f60b06511d537b4c63`
- Version macros: `IMGUI_VERSION "1.92.8"`, `IMGUI_VERSION_NUM 19280`
- License: MIT, Copyright (c) 2014-2026 Omar Cornut; full text in `LICENSE.txt`
- Source archive: <https://github.com/ocornut/imgui/archive/refs/tags/v1.92.8.tar.gz>
- Archive SHA-256: `fecb33d33930e12ff53a34064e9d3a06c8f7c3e04408f14cd36c80e3faac863b`
- Local archive retained at `re/vendor/imgui-v1.92.8.tar.gz`

The commit and version macros were checked directly against the local archive and
`m64.dll`'s exact banner `Dear ImGui 1.92.8 (19280)`.

## Files vendored

Core:

- `imgui.cpp`, `imgui_draw.cpp`, `imgui_tables.cpp`, `imgui_widgets.cpp`
- `imgui.h`, `imgui_internal.h`, `imconfig.h`
- `imstb_rectpack.h`, `imstb_textedit.h`, `imstb_truetype.h`

Backends:

- `backends/imgui_impl_win32.cpp`, `backends/imgui_impl_win32.h`
- `backends/imgui_impl_dx9.cpp`, `backends/imgui_impl_dx9.h`

`SHA256SUMS` pins every vendored file. No source file was modified.

## Compile smoke test

The pinned sources compile on the project toolchain (VS 2026, x64, C++17, `/MD`,
`/W3`) with the Windows SDK D3D9 headers:

```text
third_party/imgui/imgui.cpp
third_party/imgui/imgui_draw.cpp
third_party/imgui/imgui_tables.cpp
third_party/imgui/imgui_widgets.cpp
third_party/imgui/backends/imgui_impl_win32.cpp
third_party/imgui/backends/imgui_impl_dx9.cpp
IMGUI_BUILD_EXIT=0
errors=0
warnings=0
```

The linked version smoke test then printed:

```text
IMGUI_RUNTIME_VERSION=1.92.8
```

Logs: `third_party_imgui_build.log` and `third_party_imgui_runtime.log`. This
smoke test is separate from `build.bat`; it confirms the dependency is usable
but does not put third-party sources into the reconstructed subsystem suites.

## Why this version

`m64.dll` contains the exact upstream banner at `0x18026e050` and the
`imgui.ini` / `imgui_log.txt` IO defaults. The recovered renderer `0x1801d5ef0`
and its 41 ImGui helper rows resolve against this tag, not a generic ImGui
checkout. Do not replace this with the `v1.92.8-docking` tag: that is a
different commit (`b61e563`).
