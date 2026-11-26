# Recovered `0x1801d5ef0` artifact

This directory holds the single-function Ghidra recovery of
`0x1801d5ef0`, the 38,613-byte Utility settings renderer. The original
full-corpus pass stopped before completing it and wrote
`re/dump/decompile/0x1801d5ef0_FUN_1801d5ef0.c` as a 196-byte stub; that stub
is retained as history only. The successful recovery used the existing
Ghidra 12.1.4 project and `DecompList.java`, with a longer per-function budget
and a larger decompiler payload cap:

```
export JAVA_HOME="$PWD/.tools/jdk/jdk-25.0.4.1+1"
export GHIDRA_INSTALL_DIR="$PWD/.tools/ghidra/ghidra_12.1.4_PUBLIC"
"$GHIDRA_INSTALL_DIR/support/analyzeHeadless.bat" \
  Gmod/Skyfall/re/ghidra_project m64 -process m64.dll -noanalysis \
  -scriptPath Gmod/Skyfall/re/tools \
  -postScript DecompList.java Gmod/Skyfall/re/seeds/renderer.txt \
    Gmod/Skyfall/re/dump/renderer 0 600
```

`DecompList.java` accepts the final `600` as seconds and sets
`DecompileOptions.setMaxPayloadMBytes(512)`; the default payload cap was the
remaining blocker once the per-function budget was raised.

Result:

- `0x1801d5ef0_FUN_1801d5ef0.c` — `status: ok`
- 194,287 bytes, 5,142 lines
- 327 unique referenced strings
- 955 total call instructions; 814 named call sites to 83 external callees
- the 84th `FUN_*` identifier is the renderer's own signature reference

The output is a Ghidra C rendering, not original source. It is retained as
evidence and as the input for a future port; it is not compiled by `build.bat`.
The exact per-callee map is [`DEPENDENCIES.md`](DEPENDENCIES.md), and all 83
external bodies are under [`helpers/`](helpers/README.md).

Related evidence:

- `re/dump/disasm/0x1801d5ef0.asm` — 8,052-line objdump disassembly of the
  same address range.
- `re/dump/decompile/0x1801e70b0_FUN_1801e70b0.c:134` — caller in the Utility
  registration/bootstrap body.
- `re/dump/decompile/0x1801e7a50_FUN_1801e7a50.c:698` — root menu switch case
  that calls the renderer.
- `re/renderer_decompile.log` — Ghidra headless log for the recovery.
- `re/analysis.log` — Ghidra analysis log; no PDB was present
  (`Skipping PDB processing: failed to locate PDB file`).
