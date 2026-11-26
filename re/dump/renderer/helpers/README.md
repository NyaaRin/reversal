# Recovered direct helpers for `0x1801d5ef0`

This directory preserves one Ghidra body for every external direct callee of
the Utility renderer. The renderer body itself is one level up:

`../0x1801d5ef0_FUN_1801d5ef0.c` — `status: ok`, 194,287 bytes, 5,142 lines.

## Result

- 83 external callees recovered, all `status: ok`
- 84th `FUN_*` identifier in the recovered body is `0x1801d5ef0` itself
  (signature reference only; no call instruction), recorded as the entry row
- 814 named call sites from the renderer to the 83 external helpers
- 955 total call instructions in the disassembly; the remainder are imports,
  indirect calls and tail calls
- 286,404 bytes of recovered helper C in total
- No helper failed in this pass

## Exact command

```bash
cd C:/Users/BadMa/Downloads/my-clients/Deadlock
export JAVA_HOME="$PWD/.tools/jdk/jdk-25.0.4.1+1"
export GHIDRA_INSTALL_DIR="$PWD/.tools/ghidra/ghidra_12.1.4_PUBLIC"
"$GHIDRA_INSTALL_DIR/support/analyzeHeadless.bat" \
  Gmod/Skyfall/re/ghidra_project m64 -process m64.dll -noanalysis \
  -scriptPath Gmod/Skyfall/re/tools \
  -postScript DecompList.java \
    Gmod/Skyfall/re/seeds/renderer_helpers_external.txt \
    Gmod/Skyfall/re/dump/renderer/helpers 0 600
```

`DecompList.java` sets `DecompileOptions.setMaxPayloadMBytes(512)` and takes
the fourth argument (`600`) as the per-function time budget in seconds. The seed
`renderer_helpers_external.txt` contains 83 addresses. The log is
`re/renderer_helpers_decompile.log`; it ends with:

```text
DecompList: 83 seeds, depth=0
DecompList: wrote 83 functions ... 
```

## Map

[`../DEPENDENCIES.md`](../DEPENDENCIES.md) is the reviewed, one-row-per-callee
map. Its machine-readable source is `dependencies.tsv`. Each row records the
native size, renderer call-site count, recovered bytes/lines, classification
(`provided`, `reconstructed`, `missing`, or the renderer entry), and the evidence
for the classification.

Five helpers are reconstructed in the standalone tree this pass:

- `0x180268980` → `src/features/config/ui_hash.h::ImGuiHash` (CRC-32C ID hash;
  `CONFIG SELFTEST` tests bounded, NUL-terminated and `###` cases).
- `0x180012ac0` → `src/features/renderer/ui_helpers.cpp::FormatV`.
- `0x18001d080` → `src/features/renderer/ui_helpers.cpp::AssignString`.
- `0x180140b70` → `src/features/renderer/ui_helpers.cpp::FilterAndTrim`.
- `0x1802d8350` → `src/features/renderer/ui_helpers.cpp::AllocateOrThrow`.

The four renderer helpers are exercised by `RENDERER SELFTEST` in the pinned
ImGui 1.92.8 context. Thirty ImGui-core helpers are **provided** by the pinned
source at `third_party/imgui/` (Dear ImGui 1.92.8, commit
`8936b58fe26e8c3da834b8f60b06511d537b4c63`); nine MSVC STL release-ABI helpers
are provided by the compiler runtime. The remaining 39 are absent from the
standalone tree because their implementation is first-party/engine-bound, not
because ImGui or the STL is missing: engine interfaces, first-party ImGui
wrappers, engine path/cache globals, SQLite execution, the config `std::any`
store, the Lua VM, or a CRT log writer with a global flag. No shim or stub layer
was inserted to satisfy a call.
