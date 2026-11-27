# Recovered `0x180003f30` default-settings initializer

**Status: recovered, `status: ok`.** The original corpus pass timed out on this
52,526-byte function and left `re/dump/decompile/0x180003f30_FUN_180003f30.c`
as an incomplete stub. A second single-function `DecompList` pass with the
same 600-second budget recovered the body:

```
re/dump/recovered_f30/0x180003f30_FUN_180003f30.c
6,483 lines / 224,665 bytes
```

The function is the static initializer for the `"Default"` profile in the
global settings map `DAT_1803fadf0`. It ends by constructing the map entry
`"Default"` (`FUN_180241340(&DAT_1803fadf0, ...)`) and registers
`FUN_18030b6f0` with `atexit`. The body builds four nested profile vectors
(294, 53, 52 and 15 entries) and performs 444 `FUN_180241700` map insertions,
using the same `std::any`/map helpers as the live config path:

- `0x18021efd0` — bool value into `std::any`
- `0x18021f060` — int value into `std::any`
- `0x18021f090` — float value into `std::any`
- `0x18021f000` — string value into `std::any`
- `0x1802417d0` / `0x180241460` — nested map construction
- `0x180241340` — root `DAT_1803fadf0` profile insertion

The body contains 435 distinct 64-bit key constants across the 444 insertions
(the repeated keys occur under different nested sections). It is a recovered
default profile for the same `DAT_1803fadf0` settings tree that the write/read
bodies `0x1801aaa70` / `0x1801b2830` resolve through. The 435 keys are not
claimed to be the complete 528-key product schema's default set.

## Reproduction

From `Gmod/Skyfall`:

```bash
cd ../..
export JAVA_HOME="$PWD/.tools/jdk/jdk-25.0.4.1+1"
export GHIDRA_INSTALL_DIR="$PWD/.tools/ghidra/ghidra_12.1.4_PUBLIC"
printf '0x180003f30\n' > Gmod/Skyfall/re/seeds/f30.txt
"$GHIDRA_INSTALL_DIR/support/analyzeHeadless.bat" \
  Gmod/Skyfall/re/ghidra_project m64 -process m64.dll -noanalysis \
  -scriptPath Gmod/Skyfall/re/tools \
  -postScript DecompList.java Gmod/Skyfall/re/seeds/f30.txt \
  Gmod/Skyfall/re/dump/recovered_f30 0 600
```

The original `re/dump/decompile/_INDEX.tsv` row remains the historical timeout
record; the recovered body is authoritative for this function.
