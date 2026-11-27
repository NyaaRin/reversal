# m64.dll — full extraction dossier

Target: `Gmod/Skyfall/m64.dll` — PE32+ x64, image base `0x180000000`,
4,431,360 bytes, MD5 `3d9ad8894d9d55e4212b7d800119aaa7`.

Everything below is generated from the unpacked PE plus the existing Ghidra
exports by `re/tools/extract_core.py`, `re/tools/extract_assets.py`,
`re/tools/finalize_dossier.py`, the checked-in container decoder
`re/extract/decode_containers.py`, and the live-memory pass
`re/tools/mine_runtime.py`. The corpus now has a readable body for all 7,656 inventory
functions: 7,654 ok bodies in `re/dump/decompile/`, plus the two authoritative
recovered copies under `re/dump/recovered_f30/` and `re/dump/renderer/` for the
two addresses whose decompile files remain timeout stubs. The two stubs remain
in `re/dump/decompile/` as history.

## Coverage

| Dataset | Rows | File |
|---|---:|---|
| Functions (all inventory entries) | 7,656 | `functions.tsv` |
| Decompiled function bodies | 7,656 | `re/dump/decompile/` + recovered copies |
| Reconstructed source records | 7,656 | `src/reconstructed/coverage.tsv` |
| Generated source chunks | 60 | `src/reconstructed/chunks/` |
| Call-graph edges | 23,444 | `callgraph.tsv` |
| Data references | 22,280 | `xrefs.tsv` |
| Runtime hooks | 24 | `hooks.tsv` |
| Interfaces (resolved + versioned strings) | 27 | `interfaces.tsv` |
| Signature patterns | 4,259 (4,238 function-entry + 6 external + 15 literal) | `signatures.tsv` |
| VTable methods | 2,680 | `vtables.tsv` |
| RTTI classes | 159 | `rtti.tsv` |
| Recovered data types | 460 | `datatypes.tsv` |
| Netvars | 59 | `netvars.tsv` |
| CVars | 196 | `cvars.tsv` |
| Lua API strings | 67 | `lua_api.tsv` |
| Game events | 17 | `events.tsv` |
| Import DLLs / third-party strings | 43 | `deps.tsv` |
| PE resources | 3 | `resources.tsv` |
| Fonts (2 PE + 3 decoded containers) | 5 | `fonts.tsv` |
| Decoded container fonts | 3 | `assets/decoded/` |
| Icon codepoints | 20 | `icons.tsv` |
| `57 BC` font containers | 3 | `font_blobs.tsv` |
| `57 BC` container regions | 14 | `font_blob_regions.tsv` |
| Font codepoint→glyph map | 2,464 | `glyphs.tsv` |
| Font glyph metrics (all glyphs) | 2,609 | `font_metrics.tsv` |
| Asset paths | 78 | `asset_strings.tsv` |
| Symbols (functions + vtables + RTTI + hooks) | 10,543 | `symbols.tsv` |
| Raw strings | 60,550 | `re/dump/strings_all.txt` |
| Runtime `.data` regions (4 KiB pages) | 340 | `runtime_regions.tsv` |
| Runtime IAT resolutions | 383 | `runtime_imports.tsv` |
| Live process modules | 185 | `runtime_modules.tsv` |
| Runtime objects (vtable-backed) | 54 | `runtime_objects.tsv` |
| Runtime-constructed vtables | 5 | `runtime_vtables.tsv` |
| Runtime-recovered strings | 29 | `runtime_strings.tsv` |
| Runtime GUIDs | 1 | `runtime_guids.tsv` |
| Runtime hook sites | 24 | `runtime_hooks.tsv` |

All **31** TSVs in this directory are fully populated: the blank-cell audit is
**0**. `n/a` is used only where the value is not applicable (for example an
external signature that targets `client.dll`, or an unapplied VMT name), and
the reason is recorded in the row. `functions.tsv` keeps every one of the
7,656 inventory rows and every one has a readable body: 110 are 3-byte thunks
with their jump body, and the two long functions use the recovered bodies under
`re/dump/recovered_f30/` and `re/dump/renderer/`. There are 0 rows with
`no-decompiled-body` or a missing `decompile_file`.

`py -3 re/tools/check_corpus_coverage.py` independently checks this: every
inventory address has an `ok` body (including the two recovered bodies), every
`functions.tsv` path exists, and every callgraph/xref caller is an inventory
function. It exits PASS only when all 7,656 rows close.

## Complete compiled reconstructed-source coverage

`src/reconstructed/` maps **7,656/7,656 inventory addresses** to compiled
C++17 accessors, with **0 unmapped** and **0 stubs**. The generator
`re/tools/gen_reconstructed_source.py` writes 60 chunks (**84,928,705 bytes**,
80.99 MiB) and `src/reconstructed/coverage.tsv`; every row names the chunk
source file and a unique `Function_0x...` accessor. Accessors contain
**457,271 audited executable statement/reference lines**, **306,161
`trace.statement` calls**, **49,305 real C++ control nodes**, **7,732 actual
string-literal calls**, and resolved references to **4,331 extern call thunks**
plus **5,414 extern data symbols** in `src/reconstructed/symbols.h`.
Recovered declarations and whole-array argument decay produce **27,539
compiler-checked condition expressions** and **46,123 `trace.call_arguments`
sites**; **14,481 condition sites** and **8,557 call-argument sites** remain
explicit TODOs where the evidence is insufficient. Global scalar types are
mined from the actual memory operands in `m64.dll` by
`re/tools/mine_data_types.py`; only slots whose observed accesses agree on one
width/kind are typed, via `re/dump/data_types.tsv`, and the rest stay byte
arrays. The recoverer also accepts Ghidra pointer declarations with no space
after `*` for both locals and parameters, safely re-encodes pure string-literal
arguments, rejects pointer/scalar and pointer-depth mismatches, skips function
signatures mistaken for calls, and replaces chunks atomically so an interrupted
run leaves the prior complete set intact. The complete decompiled body remains
a SHA-256-verified audit payload, not the executable accessor payload.

```
py -3 re/tools/gen_reconstructed_source.py
py -3 re/tools/check_reconstructed_source.py
```

The checker prints `PASS 7656/7656 inventory functions mapped; unmapped=0
stubs=0` and mechanically audits each accessor's executable/statement/control
counts, actual call/data/string references, symbol declarations and body hash.
`re/tools/build_reconstructed_check.bat` compiles all 60 chunks and
`src/reconstructed/compile_check.cpp` with MSVC C++17. The hand-translated
executable code under `src/features/**` is unchanged. The generated accessors
are compiled structural traces, not behaviorally equivalent implementations:
unknown globals, indirect calls, calling conventions and object layouts remain
explicitly TODO. Decompiler blocks nested beyond 32 levels are flattened into
executable trace statements to stay under MSVC's nesting limit; source text and
references are retained, but that deep nesting is not nested C++ control flow.

## Hooks / offsets

`hooks.tsv` is the full runtime set: 21 `hooks[]` rows plus 3 `core_hooks[]`
rows from `src/offsets/offsets.json`. Every row has the interface global, VMT
slot, byte offset, stub, original, ABI, purpose and feature.

- D3D9: SetRenderTarget, StretchRect, GetRenderTargetData, Present, Reset
- CHLClient: FrameStageNotify, CreateMove-adjacent rows
- ClientMode: CreateMove
- Panel / VGUI, ViewRender, Engine, ModelRender, LuaShared, InputSystem
- `src/offsets/offsets.json` also carries the 8 game offsets
  (`client_mode_create_move_slot`, `frame_stage_notify_slot`,
  `prediction_run_command_slot`, `user_cmd_size`, `user_cmd_view_angles`,
  `user_cmd_forward_move`, `user_cmd_side_move`, `user_cmd_up_move`).

`vtables.tsv` contains all 2,680 recovered VMT methods and their applied names;
`rtti.tsv` contains all 159 RTTI classes with vtable RVA, COL RVA and bases.
`datatypes.tsv` contains all 460 recovered structures/typedefs/pointers.

## Interfaces

27 interfaces are resolved in `interfaces.tsv`: 11 object-pointer globals
(`VClient017`, `VClientPrediction001`, `VClientEntityList003`, `VEngineClient015`,
`VEngineRenderView014`, `VMaterialSystem080`,
`VEngineModel016`, `InputSystemVersion001`, `VGUI_Panel009`, `LUASHARED003`,
D3D9 device) and 16 versioned `CreateInterface` names, all called from
`FUN_180017150` (`0x180017150`). Of the 16 call sites, 9 store the returned
pointer and 7 deliberately discard it (`VGUI_System010`, `VGUI_Scheme010`,
`VGUI_InputInternal001`, `VEngineClientStringTable001`,
`VClientDllSharedAppSystems001`, `VENGINE_LAUNCHER_API_VERSION004`,
`VPhysicsDebugOverlay001`). None remain `string-only`. `VDebugOverlay003` was retired: no such string exists in `m64.dll`, and `0x3FA650` is `VPhysicsSurfaceProps001`. `VEngineRenderView014` is `0x3F9280`/O036, not `0x3FA680`/O027 (`CViewRender`/`g_pRender`). Short mangled strings such as `VWAVH`,
`VUUU`, `VECTOR`, `VGui` and `VRC5HFJML` are filtered out; they are not
interface names.

## Signatures

`signatures.tsv` has **4,259** rows and no blank cells. Every one carries
`offset`, `function`, `xref_count` and `xrefs` where the pattern is anchored in
`m64.dll`.

- **4,238 function-entry patterns** — the distinct 16-byte prologues of every
  inventory function with a body, each with its address, anchoring function and
  caller list. These are the real m64.dll AOB candidates.
- **6 external patterns** from `offsets.json` — `BeamSegStart`, `BeamSegNext`,
  `BeamSegEnd`, `GmodNetRead`, `GmodNetWrite`, `NetSetTimeForTimescale`. They
  target `client.dll`/`engine.dll`, so `offset`/`function` are `n/a` in this
  binary and the module column names the external target.
- **15 literal byte-pattern strings** embedded in the binary; they are pattern
  strings, not code, so their `offset` is `n/a` unless the exact byte sequence
  also occurs in the image.

`finalize_dossier.py` is idempotent: it removes the previous
`function-prologue` rows before regenerating them, so rerunning it keeps the
count at 4,259 rather than duplicating the prologue set.

## Icons — generated from the decoded Font Awesome cmap

`FUN_18019AB20` (0x18019AB20) maps each icon id to a 4-byte UTF-8 Font Awesome
codepoint, then draws the glyph or its procedural fallback. The codepoints are
read from `0x180363BBC`…`0x180363C04` and `0x18034F9E0`; the glyph ids,
PostScript names and advances below come from the decoded
`font_blob_0_30f5e0.ttf` `cmap`/`post`/`hmtx` tables, not from a hand list.

| id | use in shell | codepoint | glyph id | decoded name | advance |
|---:|---|---|---:|---|---:|
| 0 | — | U+F140 | 233 | bullseye | 496 |
| 1 | Visual tab | U+F06E | 94 | eye | 576 |
| 2 | Utility tab | U+F0E7 | 169 | bolt | 320 |
| 3 | Logs tab | U+F03D | 54 | video | 576 |
| 4 | Settings tab | U+F013 | 19 | cog | 512 |
| 5 | Lua tab | U+F121 | 209 | code | 640 |
| 6 | — | U+F07B | 106 | folder | 512 |
| 7 | — | U+F0C7 | 147 | save | 448 |
| 8 | — | U+F019 | 23 | download | 512 |
| 9 | — | U+F1F8 | 316 | trash | 448 |
| 10 | — | U+F067 | 87 | plus | 448 |
| 11 | — | U+F2F1 | 432 | sync-alt | 512 |
| 12 | — | U+F1DE | 304 | sliders-h | 512 |
| 13 | — | U+F04B | 63 | play | 447 |
| 14 | — | U+F007 | 8 | user | 448 |
| **15** | **top-left logo** | **U+F3ED** | **470** | **shield-alt** | **512** |
| **16** | **Combat tab** | **U+F05B** | **78** | **crosshairs** | **512** |
| 17 | — | U+F550 | 627 | stream | 512 |
| 18 | Network tab | U+F0AC | 134 | globe | 495 |
| 19 | ESP tab | U+F5CB | 740 | vector-square | 512 |

Cross-check against the hand list: all 20 hand codepoints are present in the
decoded `cmap` (`codepoint_match=yes` for all). Eight hand names were already
correct (`eye`, `bolt`, `cog`, `code`, `folder`, `shield-alt`, `crosshairs`,
`globe`). The other twelve hand names were blank/`unknown`; they are filled
from the decoded `post` table (`bullseye`, `video`, `save`, `download`, `trash`,
`plus`, `sync-alt`, `sliders-h`, `play`, `user`, `stream`, `vector-square`).
No hand name contradicts the decoded name. The old label “5.7.329” is the build
number; the decoded name table says `329.474 (Font Awesome version: 5.7.2)`.
The full 935-codepoint map is in `glyphs.tsv`; the 938-glyph advance/LSB table
is in `font_metrics.tsv`.

## Fonts — two PE resources and three decoded containers

Five sfnt fonts are now in the dossier. Every one passes the per-table checksum
check and the `head` `checkSumAdjustment` check.

| Font | Source | Glyphs | cmap | Units/em | File |
|---|---|---:|---:|---:|---|
| **Maven Pro Black** | PE RCDATA `10/101/1049` | 722 | 663 | 1000 | `assets/fonts/MavenPro-Black.ttf` |
| **Nexa Book** | PE RCDATA `10/102/1049` | 500 | 420 | 1000 | `assets/fonts/Nexa-Book.ttf` |
| **Font Awesome 5 Free Solid** | `57 BC` @ `0x30F5E0` | 938 | 935 | 512 | `assets/decoded/font_blob_0_30f5e0.ttf` |
| **FontForge subset (name stripped)** | `57 BC` @ `0x330D20` | 192 | 190 | 1000 | `assets/decoded/font_blob_1_330d20.ttf` |
| **ProggyCleanTT** | `57 BC` @ `0x334610` | 257 | 256 | 2048 | `assets/decoded/font_blob_2_334610.ttf` |

Maven Pro Black is SIL OFL 1.1. Nexa Book carries the Fontfabric copyright in
its name table. The Font Awesome name table says `Font Awesome 5 Free Solid`
/ `Solid` / `329.474 (Font Awesome version: 5.7.2)`; its `post` table gives the
icon names used above. The second container is a valid FontForge 2.0 font whose
name table was deliberately reduced to `"."`; its 192 glyphs and 190 cmap
entries are intact, but the original family name is not recoverable from the
binary. The third is ImGui's ProggyCleanTT; its compressed size (9,583 bytes)
matches `proggy_clean_ttf_compressed_size` in
`third_party/imgui/imgui_draw.cpp`.

The third PE resource is the standard linker manifest
(`24/2/1033`, `assets/rsrc_24_2_1033.bin`). There are no bitmap/icon resources;
the logo and nav icons are Font Awesome glyphs plus procedural fallbacks in
`FUN_18019AB20`.

## `57 BC` container format — stb_compress, byte-exact

The three containers are **stb_compress** streams, the format produced by
`binary_to_compressed_c` and decoded by ImGui's `stb_decompress`. They are not a
custom LZSS. The DLL contains the same grammar: `FUN_1802A04E0` is the driver
and `FUN_18029FF10` is the token decoder (`stb_decompress_token`).

### Header

| Offset | Size | Meaning |
|---:|---:|---|
| `0x00` | 4 | magic `57 BC 00 00` |
| `0x04` | 4 | zero (uncompressed size must fit in 32 bits) |
| `0x08` | 4 | uncompressed size, big-endian |
| `0x0C` | 4 | format flag `00 04 00 00` (constant in all three; the DLL decoder starts at `0x10` and does not read it) |
| `0x10` | … | stb_compress token stream |
| end | 6 | `05 FA` + 4-byte big-endian Adler-32 of the output |

The Adler-32 is **after** the `05 FA` end marker. It is not in the header; the
old attempt read header bytes 2..5 and therefore always failed the checksum.
`FUN_1802A04E0` sets the output start/end/cursor globals, loops
`FUN_18029FF10` until it stops advancing, requires `05 FA` at the stop pointer,
requires the output cursor to equal `start + uncompressed_size`, and compares
the trailing Adler-32 with its own `stb_adler32(1, output, size)`.

### Token grammar

All distances are relative to the **current output cursor**, not the output
start. A match may overlap the bytes it is producing; copy byte-by-byte.

| Token | Type | Length | Distance | Bytes consumed |
|---|---|---|---|---|
| `0x20..0x3F` | literal | `t - 0x1F` | — | `1 + len` |
| `0x40..0x7F` | match | `b2 + 1` | `be16(t,b1) - 0x4000 + 1` | 3 |
| `0x80..0xFF` | match | `t - 0x7F` | `b1 + 1` | 2 |
| `0x18..0x1F` | match | `b3 + 1` | `be24(t,b1,b2) - 0x180000 + 1` | 4 |
| `0x10..0x17` | match | `be16(b3,b4) + 1` | `be24(t,b1,b2) - 0x100000 + 1` | 5 |
| `0x08..0x0F` | literal | `be16(t,b1) - 0x0800 + 1` | — | `2 + len` |
| `0x07` | literal | `be16(b1,b2) + 1` | — | `3 + len` |
| `0x06` | match | `b4 + 1` | `be24(b1,b2,b3) + 1` | 5 |
| `0x04` | match | `be16(b4,b5) + 1` | `be24(b1,b2,b3) + 1` | 6 |
| `0x05 0xFA` | end | — | — | 6 (includes the Adler-32) |

`0x00..0x03`, and `0x05` not followed by `0xFA`, are invalid. The decoder
rejects a match whose distance exceeds the bytes already produced and any run
that would overrun `uncompressed_size`.

The apparent “negative distance” in the old model was a misread of the
`0x18..0x1F` formula. It is `dist = be24 - 0x180000 + 1`; for a valid stream the
three bytes encode a distance that is already reachable. Container 0’s first
token is `0x37` (24 literal bytes: the 12-byte sfnt header plus the first 12
bytes of the `FFTM` table record). The next token is `0x82` at `+0x29` (match,
length 3, distance 22), not `0x00` or `0x1C`. The `0x1C` byte is inside the
following literal run at `+0x2C`; it is not the token after the literal run.

### Decoded containers

| Container | Raw file offset | Original blob | Stream | Post-stream | Uncompressed | Font | Glyphs | cmap | Tables | Checksums | Adler-32 |
|---|---:|---:|---:|---:|---:|---|---:|---:|---:|---|---|
| 0 | `0x30F5E0` | 137,024 | 133,406 | 3,618 | 186,228 | Font Awesome 5 Free Solid | 938 | 935 | 13 | OK | `6f78226b` |
| 1 | `0x330D20` | 14,576 | 14,562 | 14 | 18,556 | FontForge subset | 192 | 190 | 14 | OK | `3078caf1` |
| 2 | `0x334610` | 1,071,088 | 9,583 | 1,061,505 | 41,208 | ProggyCleanTT | 257 | 256 | 12 | OK | `48f962f7` |

The raw `font_blob_*.bin` files are the **complete original scan regions**, not
the exact streams. `font_blobs.tsv` records the original blob size, the
discovered stream size and the post-stream size; `font_blob_regions.tsv` has 14
rows that classify every region. For each blob the region lengths sum exactly
to the original blob size. The second container is the only font whose original
name is gone: its name table says `"."`, so the row is labelled “FontForge
subset (name stripped)” rather than inventing a family.

### Post-stream regions (every byte classified)

| Blob | Region | File range | Bytes | Classification | Evidence |
|---|---|---|---:|---|---|
| 0 | stream | `0x30F5E0..0x32FEFE` | 133,406 | stb_compress stream | `57 BC` magic; `05 FA`; Adler `6f78226b` |
| 0 | padding | `0x32FEFE..0x32FF00` | 2 | alignment padding | two zero bytes to the 16-byte boundary `0x32FF00` |
| 0 | glyph ranges | `0x32FF00..0x32FF06` | 6 | `ImWchar` array | `00 F0 FF F8 00 00` = `{0xF000,0xF8FF,0}`; `FUN_1801EA560` sets `GlyphRanges=&DAT_180330F00`; `FUN_1802983A0` copies it from config `+0x48` |
| 0 | static header | `0x32FF06..0x32FF40` | 58 | static `.rdata` header | dwords `0000000A 000741B0 000F0000`; pointer `0x180343F08`; no container framing |
| 0 | netvar names | `0x32FF40..0x3300A8` | 360 | 15 × 24-byte records | `{name_ptr,var_ptr,len,0}`; first `DT_BaseEntity/m_vecOrigin[0]`; last `DT_BaseFlex/m_vecViewOffset[0]` |
| 0 | static block | `0x3300A8..0x330D20` | 3,192 | static `.rdata` block | head `C8 00 00 00 B8 0B 00 00 78 00 00 00 06 00 00 00` (200/3000/120/6); no valid stream/asset magic |
| 1 | stream | `0x330D20..0x334602` | 14,562 | stb_compress stream | `57 BC` magic; `05 FA`; Adler `3078caf1` |
| 1 | padding | `0x334602..0x334610` | 14 | alignment padding | fourteen zero bytes to the 16-byte boundary `0x334610` |
| 2 | stream | `0x334610..0x336B7F` | 9,583 | stb_compress stream | `57 BC` magic; `05 FA`; Adler `48f962f7` |
| 2 | `.rdata` rest | `0x336B7F..0x3D8200` | 661,121 | PE section remainder | `.rdata` raw range `0x30B000..0x3D8200`; no `57 BC` magic |
| 2 | `.data` | `0x3D8200..0x3EF000` | 93,696 | PE writable data | PE section table |
| 2 | `.pdata` | `0x3EF000..0x40EA00` | 129,536 | PE exception unwind | PE section table |
| 2 | `.rsrc` | `0x40EA00..0x437E00` | 168,960 | PE resources | contains the known Maven/Nexa RCDATA fonts and manifest; no new asset |
| 2 | `.reloc` | `0x437E00..0x439E00` | 8,192 | PE relocations | PE section table |

The post-stream bytes are not a second container and are not indexed by the
container header. There is no second `57 BC` magic in any tail. The header has
only the uncompressed size and format flag; `FUN_1802A04E0` stops at `05 FA`,
checks that the output cursor equals `start + uncompressed_size`, and verifies
the trailing Adler-32, so it never consumes trailing bytes. `scan_tail` found
no valid zlib, gzip, LZMA or LZ4 stream. Blob 0's four `sfnt` magic hits and
blob 2's 1,582 `sfnt`/`OTTO` hits do not validate as sfnt except the two known
Maven/Nexa fonts inside `.rsrc`; the eight JPEG `FF D8 FF` hits fail image
decoding. The 58-byte header and the 3,192-byte block are ordinary static
`.rdata`; the 15 netvar records point into `.rdata` strings, not into the
container. Blob 2's raw file runs to EOF only because there is no next `57 BC`
magic; the actual container ends at `0x336B7F`, and everything after it is the
remainder of the PE image.

`re/extract/decode_containers.py` is the checked-in, byte-exact reproducer. It
reads the raw blobs, decodes with the grammar above, verifies the `05 FA` marker
and Adler-32, parses and checks every sfnt table, writes
`assets/decoded/*.ttf`, and emits `assets/decoded/decoded_manifest.json`.
`re/extract/stb_container.py` contains the shared decoder/validator.
`font_validation.json` records the five-font validation (table checksums,
`head` adjustment, cmap/glyf/loca/hmtx/head/maxp).

## Code links

`callgraph.tsv` has every `FUN_*` call found in the 7,656 decompiled bodies
(caller address, caller name, callee address/name, call-site count).
`xrefs.tsv` has every `DAT_*`, `PTR_*`, `LAB_*` and `UNK_*` reference per
function. `symbols.tsv` merges all function names, 2,680 VMT methods, 159 RTTI
classes and every hook stub/original into one address→name table.
`deps.tsv` groups the PE import table by DLL and records third-party strings
(ImGui, Lua, Font Awesome, STB, etc.).

## Reproduce

```bash
py -3 Gmod/Skyfall/re/tools/extract_core.py
py -3 Gmod/Skyfall/re/tools/extract_assets.py
py -3 Gmod/Skyfall/re/tools/finalize_dossier.py
py -3 Gmod/Skyfall/re/tools/check_corpus_coverage.py
py -3 Gmod/Skyfall/re/extract/decode_containers.py
py -3 Gmod/Skyfall/re/tools/mine_runtime.py
py -3 Gmod/Skyfall/re/tools/verify_runtime.py
```

`extract_assets.py` rewrites `assets/font_blob_*.bin` from the PE as the
complete original scan regions and decodes them as part of the normal asset
pass; `decode_containers.py` is the standalone reproducer. Both read the
untrimmed blobs, discover the stream length themselves, and use the same
`stb_container.py`. There is no manual trimming step. `finalize_dossier.py` is
idempotent for the signature table and the blank-cell fills.

## Live memory capture (2026-11-25)

The original `m64.dll` was manually mapped into the 64-bit Garry's Mod process
(`bin/win64/gmod.exe`, PID 21632) at base `0x27708F10000` and captured while
live. The normalized images and the full process dump are in
`re/dump/memory/`; `re/dump/memory/README.md` documents the injection command,
hashes and per-section diff. The live `.text` is byte-identical to the original
after applying the image's 3,904 base relocations; the only non-mutable
differences are 386 byte ranges in `.rdata`, which collapse to 383 eight-byte
IAT slots. All 383 changed from an import hint/name RVA to a resolved external
VA; all 383 match their PE import entry and are restored in
`m64_reconstructed.bin`. `.data` is writable runtime state. The runtime pass
below turns that state into the eight `runtime_*.tsv` datasets; it is no longer
just an unclassified delta.

## Runtime memory pass (2026-11-25)

The live image was manually mapped at `0x27708F10000` and captured in the full
1.3 GB process dump (`gmod_full_21632.dmp`, PID 21632). `mine_runtime.py`
compares `m64_unrelocated.bin` against `m64_original_virtual.bin` (so base
relocations are removed), resolves every changed pointer against the dump's
memory ranges and module list, and writes eight runtime TSVs plus
`runtime_summary.json`.

### What changed

| Measurement | Value |
|---|---:|
| `.data` diff bytes | 297,352 |
| `.data` diff ranges | 72,199 |
| `.data` pages touched | 340 |
| Changed `.data` qwords | 72,411 |
| Clusters at gap 16 | 16,981 |
| `.rdata` diff ranges | 386 |
| `.rdata` IAT slots after grouping | 383 |
| IAT slots changed / matched | 383 / 383 |
| `.text`, `.pdata`, `.rsrc`, `.reloc` diff bytes | 0 |

All 340 touched 4 KiB pages are classified in `runtime_regions.tsv`. The
classification is page-level, because the changed bytes are dense runtime state,
not contiguous structures; repeated records and individual artifacts are called
out in their own TSVs.

| Region class | Pages | What it is |
|---|---:|---|
| `external-object-state` | 96 | d3d9/shader/material object pointers plus float/flag state |
| `scalar/flag-array-state` | 54 | repeated `-1`/`0`/`1` words; feature state arrays |
| `sparse-scalar-state` | 99 | sparse scalar writes with no pointer/string evidence; noise-level |
| `esp-entity-cache-0x940` | 47 | 256-entry static `.data` ESP entity cache `DAT_180458AE0..DAT_1804ECAE0`; reset `FUN_180191a10`, copy `FUN_18018a8f0`, reader `FUN_18018b900`; `Valve001` at record `+0x40` (first page copy at `+0x2E0`) is stack-template residue |
| `heap-pointer-state` | 13 | dominant changed qwords are heap pointers |
| `object-pointer-array` | 4 | repeated interface/object pointer table |
| `m64-pointer-state` | 1 | changed qwords point back into the m64 image |
| `interface/object-globals` | 2 | interface globals, object vtables, bitmask tables |
| `stl-tail-globals` | 2 | tail STL/container globals and vtable refs |
| `resolved-external-pointer-state` | 2 | changed qwords resolve into loaded modules |
| `scalar/bitmask-state` | 5 | small integer/bitmask writes |
| `config/string-objects` | 1 | `std::string` SSO config objects |
| `constructed-vtable-state` | 1 | page holds a reference to an object-owned constructed heap vtable |
| `mixed-runtime-state` | 13 | genuinely mixed scalar/pointer pages |

### Runtime artifacts

| Artifact | Count | Evidence |
|---|---:|---|
| Resolved interfaces | 27 of 27 | 11 object-pointer globals plus 16 `CreateInterface` call sites in `FUN_180017150` |
| Interface call sites | 16 | 9 stored in globals, 7 deliberately discarded; all named in `interfaces.tsv` |
| Vtable-backed runtime objects | 54 | 54 unique object→vtable pairs from changed `.data` qwords |
| Constructed heap vtables | 5 | D3D9 plus 4 m64 code-pointer tables |
| D3D9 patched slots | 5 | Reset `0x1EBE00`, Present `0x1EBF30`, GetRenderTargetData `0x118FA0`, StretchRect `0x1EBCD0`, SetRenderTarget `0x1F5AD0` |
| Hook sites matched live | 24 / 24 | each runtime VMT slot equals the expected m64 stub; originals resolve in client/engine/materialsystem/vgui2/inputsystem/lua_shared/d3d9 |
| Runtime strings | 29 | 15 runtime-only, 14 static-literal copies; 23 with a stored `.data` pointer, 6 closed (2 object-owned, 4 ephemeral) |
| GUIDs | 1 | `cca94594-1b09-4be8-b70f-c87bd9c04c93` in telemetry SQL; 0 COM GUIDs; 3 binary candidates rejected |
| Modules | 185 | full dump module list; manual-mapped m64 is absent by design |

**D3D9.** The device object at `0x276EBF66FE0` has a heap vtable at
`0x276EBF6B5D0`, a 119-slot copy of the d3d9 `IDirect3DDevice9` vtable. Slots
16, 17, 32, 34 and 37 point at m64 stubs; the saved originals are d3d9.dll
addresses. It is the only constructed vtable copied from an external module.

**m64 heap code tables.** Four m64-owned heap tables are constructed at
runtime. `0x2770924BDE8` (18 slots) matches
`Features::DamageLogger::DamageLoggerFeature` 18/18. `0x2770928D450` (7 slots)
and `0x2770928D5B0` (7 slots) match `std::_Func_impl_no_alloc<TextEditor
lambda>`-family vtables 6/7 and 7/7. `0x2770928D698` is V005: RTTI at
`0x37D690` bounds it to 6 slots, all matching
`std::Z_NG::P6A_NG::?$_Func_impl_no_alloc`; the former 12-slot read over-ran
into the adjacent `_Ref_count_obj2<vector<LineSection>>` vtable at `0x37D6D0`.
It is a matched static vtable class, not a new table.

**Strings.** Runtime-only literals include the `mayrrX64` paths, the native
screen/HTML notices, the ESP hitbox/field labels, `##mayrr_watermark`, the
two `catsuper##...` panel ids, the telemetry SQL/field names, and the network
regex. The `.data` `std::string` pair `theme name` / `Default` is a static
literal copied into SSO storage. Six runtime-only strings have no stored
`.data` pointer (temporary `c_str()` results); they are marked `refs=n/a` rather
than given a false owner.

### Correspondence to the static dossier

- Every one of the 383 IAT slots is a resolved PE import, not a code patch:
  original qword = hint/name RVA, live qword = external module VA. The 386
  ranges are 3 extra fragment ranges from qwords split across diff runs.
- Every one of the 24 `hooks.tsv` rows was checked against the live object and
  vtable. 24/24 runtime slot targets equal the expected m64 stub, and 24/24
  saved originals resolve into the named external module.
- All 27 interface rows are matched to `interfaces.tsv`; the 16 former
  `string-only` rows are now `CreateInterface` call sites in `FUN_180017150`
  (9 stored, 7 discarded).
- The D3D9 object/vtable and the four m64 code tables are new runtime-only
  artifacts; they do not duplicate a static `vtables.tsv` row. The static
  `vtables.tsv` 2,680 rows remain the static method inventory.
- The `0x940`-stride pages are the 256-entry ESP entity cache
  `DAT_180458AE0..DAT_1804ECAE0` (reset `FUN_180191A10`, copy `FUN_18018A8F0`,
  reader `FUN_18018B900`). The sparse/flag pages remain allocator noise and are
  labelled as such, not promoted to fake symbols.

### Runtime TSV conventions

Each runtime row uses the same `id`/`rva`/`va`/`size`/`signature`/`note` shape as
the static tables, plus `static_relationship`, `static_xrefs`/`xref_sample` and
`related` where applicable. `refs` in `runtime_strings.tsv` are `.data` slot
RVAs, not raw heap addresses. `runtime_imports.tsv` keeps `original_rva` and
`runtime_va` side by side so the load-time→runtime change is explicit.

`runtime_summary.json` records source MD5s, all counts, region classes, output
MD5s/sizes and open questions. `verify_runtime.py` re-derives the `.data` diff,
checks every TSV row count, the 383/386 IAT grouping, all 24 hook matches, the
string-reference windows, blank cells, output checksums and the mirrored counts
in `final_summary.json`, `capture_manifest.json` and `mapped_summary.json`.

### Identity closures (2026-11-25)

| Artifact | Closure | Evidence |
|---|---|---|
| V005 / O017 | `std::Z_NG::P6A_NG::?$_Func_impl_no_alloc`, 6 slots | RTTI COL `0x386FF0`, TD `0x3F0CA8`; static source vtable `0x37D698`, runtime heap copy `0x2770928D698`; next RTTI `0x37D6C8`; object `0x5C81B0` initialized by `FUN_180260220` with lambda `LAB_1802600C0` |
| `0x4C0000-0x4F0000` | 256-entry static `.data` ESP entity cache, `0x940` records | `DAT_180458AE0..DAT_1804ECAE0`; reset `FUN_180191A10`; copy `FUN_18018A8F0`; writer `FUN_18018B900`; renderer `FUN_18018AEE0`; callers `FUN_1801924B0`/`FUN_180196380`; `Valve001` is residue at record `+0x40` (first page copy `+0x2E0`) |
| Theme map | `std::map<std::string,std::string>` at `DAT_1803FADA0` | creator `FUN_180010C60`; insert `FUN_180241340` stores `S028`/`S029`; destructor `FUN_18030B740`; no static readers |
| 16 former string-only interfaces | all `CreateInterface` call sites in `FUN_180017150` | 9 stored, 7 discarded; per-interface module/global in `interfaces.tsv` |
| 6 pointer-less strings | 2 object-owned, 4 ephemeral | writers/getters in `runtime_strings.tsv` (`S012`, `S013`, `S014`, `S018`, `S023`, `S025`) |

The audit also corrected 10 pre-existing labels: 7 static `.data`/heap object modules, 1 V005 slot over-read, and 2 interface mappings (`VDebugOverlay003` removal, `VEngineRenderView014` move).


#### ESP entity cache record layout (0x940 bytes)

| Offset | Size | Meaning | Code link |
|---|---:|---|---|
| `+0x00` | 8 | Entity pointer / cache key | written by `FUN_18018B900`; read as identity by `FUN_18018AEE0` |
| `+0x04` | 4 | Extra template dword, residue at reset | copied by `FUN_18018A8F0`; no cache writer/reader found |
| `+0x08..+0x28` | 0x24 | Nine box/bounds dwords | written by `FUN_18018B900`; copied by `FUN_18018A8F0` |
| `+0x2C` | 1 | Cache-valid byte, set to 1 | writer `FUN_18018B900`; reader `FUN_18018B900` / `FUN_18018F0F0` |
| `+0x2D` | 1 | Secondary visibility flag from `local_f4` | writer `FUN_18018B900`; reader `FUN_18018B900` / `FUN_18018F0F0` |
| `+0x2E..+0x2F` | 2 | Padding / copied residue | `FUN_18018A8F0` only |
| `+0x30..+0x92F` | 0x900 | 0x60 line segments, 0x18 bytes each | filled by renderer `FUN_18018AEE0`; reset copy `FUN_18018A8F0` |
| `+0x930` | 4 | Line-segment count (0..0x60) | written/read by `FUN_18018AEE0`; reset 0 |
| `+0x934` | 1 | Segments-valid flag, set to 1 | written/read by `FUN_18018AEE0`; reset 0 |
| `+0x938` | 4 | Float scale/derived value from `DAT_1803FA608+0x10` | writer `FUN_18018B900`; copied by `FUN_18018A8F0` |
| `+0x93C` | 4 | Padding, not copied by `FUN_18018A8F0` | none |

`Valve001` is at record `+0x40`, inside line segment 0 of the `+0x30` buffer.
On reset it is stack-template residue; `FUN_18018AEE0` overwrites the segment
buffer when it fills the cache. On page `R171` the first full record begins at
page `+0x2A0`, so the first `Valve001` copy in that page is at `+0x2E0`; it is
not a field, a name, or an interface string.

## Known gaps / limits

- The second container’s name table is `"."`; the original family name was
  stripped before embedding. Its 192 glyphs, 190 cmap entries, metrics and
  checksums are valid and fully extracted. Its `post` table also ends after 12
  custom glyph names; the remaining glyph names use standard Macintosh names or
  `glyph_<id>`. The `cmap` and `hmtx` tables are complete, so the codepoint map
  and advances are unaffected.
- Netvars/cvars/events are string-derived from the binary, not validated against
  a live client schema.
- This pass is extraction and live-capture only. It did not rebuild the
  reconstructed Skyfall DLL; the current rebuilt menu still uses Arial and the
  hand-drawn icons. The original `m64.dll` was injected and captured separately
  (see Live memory capture).
- No runtime identity gaps remain for V005, the `0x940` array, the theme map,
  the 27 interfaces or the six pointer-less strings. V005 is the 6-slot
  `std::Z_NG::P6A_NG::?$_Func_impl_no_alloc` vtable / static `std::function`
  O017; the array is the ESP entity cache; the theme map is
  `DAT_1803FADA0`. The six strings are closed as object-owned (`S012`, `S013`)
  or ephemeral (`S014`, `S018`, `S023`, `S025`) with their writers/readers in
  `runtime_strings.tsv`. The 99 sparse-scalar pages remain labelled noise.
