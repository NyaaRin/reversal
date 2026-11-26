# Stage 3.13 — config, SQLite maintenance and the UI shell

**Status: renderer entry point compiled and runtime-wired; full binary/in-game parity remains.** Config/SQLite decoding complete; implementation split: 38 provided (30 ImGui-core + 8 MSVC STL), 45 reconstructed, 0 missing; 0x1801d5ef0 is translated in src/features/renderer/renderer.cpp and called from the stage-6 FrameStageNotify path via renderer_runtime.cpp. Engine/Lua/SQLite operations use explicit typed host callbacks listed in the dependency map. The current build runs 16 suites.
The product-owned config engine, the `last_config.txt` selection, the SQLite
header/page/cell/record decoder and the database wipe policy are reconstructed
and tested. ImGui 1.92.8 and the Goossens TextEditor are statically linked into
`m64.dll`, established from binary markers in section 12; the exact ImGui
source is now vendored at `third_party/imgui/` with a pinned commit and
checksums. The 38,613-byte Utility settings renderer `0x1801d5ef0` is recovered
at `re/dump/renderer/0x1801d5ef0_FUN_1801d5ef0.c` (`status: ok`, 194,287 bytes,
5,142 lines). Its 83 external direct callee bodies are preserved under
`re/dump/renderer/helpers/`, all `status: ok`. The 84th `FUN_*` identifier is
the renderer's own signature reference, not a dependency. The exact map is
[`re/dump/renderer/DEPENDENCIES.md`](../re/dump/renderer/DEPENDENCIES.md): 30 ImGui-core rows are **provided** by
the vendored v1.92.8 source, 8 STL/ABI helpers are provided by the MSVC runtime,
45 rows are reconstructed, and 0 are missing. The 26 former missing rows are
implemented in `src/features/renderer/dependencies.cpp`; engine/Lua/SQLite
operations use explicit host callbacks. The 84 identifiers account for 814 named
call sites inside the body; the disassembly has 955 total call instructions.
The renderer entry point `0x1801d5ef0` is translated into
`src/features/renderer/renderer.cpp` and compiled into both the self-test and
the DLL. It keeps the recovered top-level order (tab selection, left child,
Movement, Chat, Triggerbot, Anti-Screenshot/Loading screen, Tools, Data cleaner,
File cloak, Lua editor/dumper) and its branch/early-out structure, and is called
from the real stage-6 `FrameStageNotify` path via `renderer_runtime.cpp`. The
full 5,142-line body remains evidence for line-for-line parity; the translated
entry point is not a stub. ImGui headers and all 45 reconstructed sources are
present.

Artifacts:

| Artifact | Contents |
|---|---|
| `src/features/config/config.h` | paths, name sanitizer, `last_config.txt`, hash-key parser, old-format policy, bool/int/float/string/vec4 accessors, config writer |
| `src/features/config/config_keys.h` | generated 528-key schema: 221 bool, 115 int, 184 float, 8 string |
| `src/features/config/sqlite.h` | SQLite header/page validation, varint and serial-type decoder, payload/overflow assembler, b-tree walker, `key` column locator, table/cookie/freelist policy, file cleanup, AC markers |
| `src/features/config/selftest.cpp` | schema counts/uniqueness, FNV/vec4 relations, parser/old-format, accessors, writers, SQLite header/page/wipe checks, ImGui ID hash (`ImGuiHash`) cases |
| `src/features/config/sqlite_selftest.cpp` | independent real-page fixture builder and 528-key + all-serial-type round-trip, multi-leaf/overflow/corruption tests |
| `src/features/config/ui_hash.h` | reconstructed `ImGuiHash` (`0x180268980`): CRC-32C table hash with `###` restart, bounded and NUL-terminated forms |
| `src/features/renderer/ui_helpers.{h,cpp}` | reconstructed `FormatV` (`0x180012ac0`), `AssignString` (`0x18001d080`), `FilterAndTrim` (`0x180140b70`) and `AllocateOrThrow` (`0x1802d8350`) |
| `src/features/renderer/log_writer.{h,cpp}` | reconstructed `0x180014410` thread-safe CRT log writer (`LogV`), with stdout and FILE* gates |
| `src/features/renderer/ui_widgets.{h,cpp}` | reconstructed eleven former ImGui wrappers (`0x18019a460`..`0x1801df5d0`) and key-capture helpers `0x1802d31a0`/`0x1801df700`: records, popup state, cards, sliders, colour editors/buttons, formatted hints, styled labels and key capture |
| `src/features/renderer/dependencies.{h,cpp}` | reconstructed 26 former missing rows: config store/std::any casts, thread-safe globals, model path, addon cache, cleaner scan/execute, engine host adapters, Win32 loading-screen picker and Lua dump host boundary |
| `src/features/renderer/renderer.{h,cpp}` | translated `0x1801d5ef0` entry point: tab/child early-outs and the recovered section order (Movement, Chat, Triggerbot, Anti-Screenshot/Loading screen, Tools, Data cleaner, File cloak, Lua editor/dumper), with branch/early-out accounting |
| `src/features/renderer/renderer_ui_imGui.{h,cpp}` | live ImGui implementation of the typed `RendererUi` interface used by the runtime path |
| `src/features/renderer/renderer_runtime.{h,cpp}` | lazy ImGui context/frame owner and DX9 backend lifecycle; `RenderUtilityFrame()` is called from the stage-6 `FrameStageNotify` path, `RenderRendererD3d()` from `Present`, `ResetRendererD3d()` from `Reset`, and shutdown on detach |
| `src/features/renderer/selftest.cpp` | renderer helper suite: ImGui 1.92.8 context/style-stack checks plus formatting, string-assignment, filter/trim, allocation, all eleven UI-widget cases, both key-capture helpers and the 26 dependency-layer cases (config/RTTI, globals, model path, addon cache, cleaner, engine host, Lua boundary) |
| `third_party/imgui/` | pinned Dear ImGui 1.92.8 (commit `8936b58fe26e8c3da834b8f60b06511d537b4c63`), MIT, core + Win32/DX9 backends, file checksums and compile smoke log |
| `third_party/README.md` | dependency manifest: ImGui vendored; SQLite/Lua/engine remain engine-provided or proprietary |
| `re/dump/renderer/0x1801d5ef0_FUN_1801d5ef0.c` | recovered Ghidra body (`status: ok`, 5,142 lines, 194,287 bytes); source evidence for the compiled translation in `src/features/renderer/renderer.cpp` |
| `re/dump/recovered_f30/0x180003f30_FUN_180003f30.c` | recovered default-settings initializer (`status: ok`, 6,483 lines, 224,665 bytes); 444 map insertions / 435 distinct keys; config evidence, not compiled |
| `re/dump/renderer/helpers/` | 83 recovered external callee bodies, all `status: ok`; 286,404 bytes total; README carries the exact command |
| [`re/dump/renderer/DEPENDENCIES.md`](../re/dump/renderer/DEPENDENCIES.md) | one-row-per-callee map: 84 rows, address, size, call sites, recovered bytes/lines, classification and evidence |
| `re/dump/renderer/README.md` | recovery command, original stub cause, caller/callee and artifact paths |
| `re/dump/disasm/0x1801d5ef0.asm` | 8,052-line objdump disassembly, 955 call instructions |
| `re/tools/extract_config_keys.js` | regenerates `config_keys.h` from the two config bodies |
| `re/tools/renderer_dependency_map.py` | regenerates `re/dump/renderer/DEPENDENCIES.md` and `helpers/dependencies.tsv` from the 84-row map |

---

## 1. Where the files live

`0x1801a8740` builds the root:

```
%USERPROFILE%\Documents\mayrrX64
```

`SHGetFolderPathW(CSIDL_PERSONAL = 0x8005)` supplies `Documents`; a failure
falls back to `%USERPROFILE%\Documents`, then to the current directory with
`mayrrX64`. `0x1801a8aa0` appends `settings`.

```
%USERPROFILE%\Documents\mayrrX64\settings\<name>.cfg
%USERPROFILE%\Documents\mayrrX64\settings\last_config.txt
```

`0x1801a9730` creates the settings folder, enumerates `.cfg` entries into the
vector at `0x1803fcc98` (stride `0x20`, std::string), clears the previous list,
and sets `DAT_1803facfe = 1` (list refreshed). A missing folder is not fatal: it
sets the status `Failed to create settings folder.`; an enumeration failure sets
`Failed to read settings folder.`. The default entry is `No saved configs yet.`

`0x1801a9580` resolves a name to a path by sanitizing it, appending `.cfg`, and
converting to UTF-16 (`0x1801a9250` reverses that conversion).

### Name sanitization (`0x1801a93b0`)

- keeps ASCII `A-Z`, `a-z`, `0-9`, space, `-`, `_`;
- replaces every other ASCII byte with `_`;
- leaves bytes `>= 0x80` untouched;
- trims leading and trailing spaces;
- an empty result becomes `default`.

The function returns a moved `std::string`; the source buffer is reset to the
small-string state. This is also the guard against `..\` path traversal in a
config name.

## 2. `last_config.txt`

`0x1801a8c20` writes two lines; `0x1801a8dc0` reads them back:

```
1
my config
```

Line 1 is the **Auto-load last config** toggle (`DAT_1803db385`). Line 2 is the
selected config name. The UI label is exactly `Auto-load last config`
(`0x1801e3830`). On startup `0x1801e9960` reads the file, and only when the
toggle is true and the name is non-empty does it call the loader
`0x1801b2830` and select the entry (`0x1801a9690`).

`0x1801a9690` compares the name against every entry of the settings vector and
sets the selected index `DAT_1803dc960`; no match leaves the old index.

## 3. Config file format

`0x1801aaa70` writes:

```
# mayrrX64 menu config
# Keep it simple: key=value
<16 lowercase hex digits>=<value>
```

`0x1801b2830` reads one setting per line. Comments begin with `#` and blank
lines are skipped. A line without `=` is ignored and **not** counted as a
plaintext key. The split is at the first `=`; the value keeps any spaces after
it. A key must be exactly 16 hexadecimal characters (upper or lower) and is
parsed with `strtoull(..., 16)`.

The key is the 64-bit hash of the original setting name. `0x1801a9c30` and the
four writers format it with `"%016llx"`; the constants themselves are
compile-time. The file is therefore intentionally opaque by name.

### Type writers

| Writer | Type | Output |
|---|---|---|
| `0x1801a9cd0` | bool / byte | `key=<0 or 1>` |
| `0x1801a9de0` | int | `key=<decimal>` |
| `0x1801a9ee0` | float | `key=<ostream default>` |
| `0x1801a9ff0` | string | `key=<raw text>` |

The separator is `=` and the terminator is `\n` (the same two stream helpers
used throughout `0x1801aaa70`). Floats use the default stream precision, not a
fixed decimal count; the loader uses `strtof`.

### The 528 keys

The save body has **479** direct inline writer calls:

| Type | Count |
|---|---:|
| bool | 221 |
| int | 115 |
| float | 135 |
| string | 8 |

One additional float is written through an explicit hash string
(`0xc7a447b124778c2b`), giving **480** inline keys. `0x1801aa470` contributes
twelve four-float groups, each saved by `0x1801aa0f0` as:

```
key(component) = (base ^ component) * 0x100000001b3
component      = 'r', 'g', 'b', 'a'
```

That is a single FNV-1a step per component, adding **48** keys. The total is
**528**: 221 bool, 115 int, 184 float, 8 string.

The twelve vec4 bases are:

```
0x48e79057e40ce6c9  0xc38787bc090874e3  0x020911cfa6969a00
0xe597932344a935cd  0x927ca2408a294e11  0xce81b2053c921563
0x924e0fd74e4da6f4  0x3d847b128eed226c  0x8f44eca67d6e6a6b
0x9bea20a4fecf6362  0xe6614a445df79c7a  0xce819df53e824b34
```

`0x1801aa5b0` is the loader counterpart: forty-eight `strtof` calls at
`0x1803dcc98`..`0x1803dcd54`. The theme-path string is key
`0xc5f8652028d74e9b`, loaded into the 0x200-byte buffer at `0x180400ec0`
(`0x1801aa400`, `strncpy_s`).

Regenerate the schema with:

```bash
node re/tools/extract_config_keys.js
```

The generator refuses duplicate keys with conflicting types and asserts the
twelve vec4 bases.

## 4. Loader policy

`0x1801b2830` builds `std::map<uint64_t, std::string>` and counts plaintext
keys. It then applies each known key to its own global (the order is the same
as the save body, so a later clamp can depend on an earlier value).

The old-format rule is exact:

- no plaintext keys -> apply all hash values found;
- plaintext keys but no valid hash lines -> leave defaults, no warning;
- plaintext keys mixed with valid hash lines -> **reject the whole file**, leave
  defaults, and log:

> `[CFG] '%s' is a pre-hash config (%d plaintext keys) - defaults used, NOT overwritten`

A missing file is reported by the UI as `Config not found: <path>`. A successful
load ends with `Loaded config: <path>` and rewrites `last_config.txt`.

### Accessor semantics

- **bool** (`0x1801aa240` -> `0x1801aa170`): exact lowercase `1`, `true`, `on`
  are true; `0`, `false`, `off` are false; anything else leaves the default.
  Matching is case-sensitive.
- **int** (`0x1801aa2a0`): `strtol(value, &end, 10)`; only `end != begin` is
  checked, so `12junk` applies 12 and a non-numeric value leaves the default.
- **float** (`0x1801aa350`): `strtof` with the same prefix rule.
- **string** (`0x1801aa400`): the value is copied into the caller's fixed
  buffer; the recovered key is the theme path, 0x200 bytes.

These prefix rules are reproduced deliberately, including the permissive
trailing bytes; they are not tightened in the reconstruction.

## 5. Save and the feature-owned blocks

`0x1801aaa70` opens the selected path, writes the two header lines, then the 480
inline keys in order. It ends by calling the other subsystems' savers:

```
0x1801768e0  0x180123200  0x1800fb990  0x1800fffb0  0x180185fa0
0x180143040  0x180143d20  0x1801587c0  0x18002a1c0
```

The loader calls the matching readers:

```
0x180101a60  0x180188450  0x1801433d0  0x1801440b0
0x180158ba0  0x18002b540
```

Those blocks are feature-owned and are reconstructed in their own stage
modules; `config_keys.h` is the 528-key core, not a claim that the union ends
there. The writer then updates `last_config.txt`, refreshes the settings list
and selects the saved name. Success is `Saved config: <path>`; failure is
`Failed to save config.`.

Deleting a config (`0x1801bb580`) sanitizes the name, resolves the path, removes
it, and reports `Deleted config: <name>` or `Failed to delete config: <name>`.

## 6. SQLite reader

`0x18014c6b0` is `Features::Sqlite::Read(path)`; `0x18014be40` loads the file in
0x100000-byte chunks with a 0x10000000-byte ceiling and rejects under 0x200
bytes as `truncated`. The reconstructed validation:

- magic is `SQLite format 3\0` (16 bytes);
- the page-size big-endian word at offset 16 is `1` for 65536, otherwise a
  power of two in `[512, 65536]`;
- the reserved-byte tail at offset 20 leaves at least 480 usable bytes;
- the file contains at least one whole page and the page count fits 32 bits;
- page 1's b-tree header starts at offset 100, every other page at 0;
- table pages are type `0x0d` (leaf) or `0x05` (interior); the 8-byte header
  carries freeblock/cell-count/cell-content/fragmented, interior pages add the
  right-most child at +8 and start their cell-pointer array at +12.

The page walker (`0x18014bff0`) uses a page bitmap, a stack, and a
`0x100000`-page cap. `0x18014bc10` finds the `key` column at paren depth 1.

### 6.1 Cell payload and overflow (`0x18014c530`)

For a table leaf cell the decode is:

```
varint payload_size          (total, including overflow)
varint rowid
payload_size local bytes
uint32 big-endian next_overflow_page   (only if payload_size > local)
```

The local split is the binary's exact integer arithmetic, with `U` the usable
page size and `P` the cell's total payload:

```
local = P
if U - 0x23 < P:
    local = (U*0x20 - 0x180) / 0xff - 0x17
    candidate = local + (P - local) % (U - 4)
    if candidate <= U - 0x23: local = candidate
```

This is the SQLite table-leaf `X = U-35`, `M = ((U-12)*32/255)-23`,
`K = M + ((P-M) mod (U-4))` rule, but written in the binary's own form. The
format details in sections 6.1-6.4 were cross-checked against the primary
specification, <https://www.sqlite.org/fileformat2.html> §1.6 (varint and
payload spill), §1.7 (overflow pages) and §2.1 (serial types); a researcher-web
pass confirmed those passages and the published 10/11 rule. The
overflow page is `uint32 next` followed by `U-4` content bytes; a zero `next`
while bytes remain, a `next` beyond the page count, or more than `0x100000`
links returns false. A self/cyclic chain is bounded by the remaining payload,
not rejected as a cycle. Payloads above `0x2000000` are refused outright by
`0x18014c530` (the published SQLite limit is much larger; the binary wins).

### 6.2 Varint (`0x18014b840`)

The decoder consumes 1-8 bytes with seven data bits each, or 9 bytes where the
last byte contributes all eight bits:

```
v = byte[0] & 0x7f
while byte[i] has bit 7 set, i = 1..7:
    v = (v << 7) | (byte[i] & 0x7f)
if i == 8: v = (v << 8) | byte[8]
```

A truncated continuation returns 0 (failure); a non-minimal encoding is
accepted (`80 7f` decodes as 127). The fixture checks the SQLite `12345678` and
`10204081` vectors and the `ff*9` all-ones 64-bit form.

### 6.3 Record header and serial types (`0x18014b9d0`)

The header-size varint includes itself. The serial-type varints must fit inside
the declared header. The body size for each serial type is:

| serial | bytes | meaning |
|---:|---:|---|
| 0 | 0 | NULL |
| 1 | 1 | signed integer, 1 byte |
| 2 | 2 | signed integer, 2 bytes |
| 3 | 3 | signed integer, 3 bytes |
| 4 | 4 | signed integer, 4 bytes |
| 5 | 6 | signed integer, 6 bytes |
| 6 | 8 | signed integer, 8 bytes |
| 7 | 8 | IEEE-754 double, big-endian |
| 8 | 0 | integer constant 0 |
| 9 | 0 | integer constant 1 |
| 10, 11 | 0 in the binary | reserved transient forms; published SQLite gives them a variable size and says they never occur in a well-formed file |
| 12, 14, ... | (N-12)/2 | BLOB |
| 13, 15, ... | (N-13)/2 = floor((N-12)/2) | TEXT |

The parser stores `(serial, offset, length)` per column. It does **not** reject
a cumulative body overrun: the check is `payload_size - header_size < length`
for each field independently, so later offsets can point past the payload.
`0x18014bba0` has no additional `offset + length <= payload` check when it
copies a text/blob column; that is the binary's undefined read. The
reconstruction preserves the parser's acceptance exactly but refuses the
out-of-bounds extraction (a recorded, safety-only divergence). It never
rejects serial 10/11 and it treats header size 0 as failure, unlike SQLite's
historical `OP_Column` exception. The binary maps 10/11 to length 0; published
SQLite documents them as variable-sized reserved codes. The binary wins and the
typed view reports them as NULL; that is another recorded divergence, not a
claim about the file format.

### 6.4 Page walk and schema

The walker marks pages, pushes the right-most child and each interior cell's
left child, and pops from the back (so the traversal is right-to-left across
leaves). Unknown page types and cell pointers outside
`[base+header, usable)` are skipped, not fatal. The root page must be non-zero
and at most the page count. For page 1 the 100-byte database header is skipped
before the 8-byte b-tree header; all offsets in a leaf cell are absolute from
the page start.

`0x18014cac0` reads the sqlite_schema row `(type,name,tbl_name,rootpage,sql)`:
type must match `table` under `_stricmp` (the fixture uses uppercase `TABLE`
to prove that), name must be non-empty, rootpage is serial 1..6 with sign
extension or 8/9 constants, and sql is serial >=12. `0x18014c6b0`
then walks the cookies root and reads its `key` column. The reconstruction's
`ReadTables` stores root/sql for every table (so a settings table can be
enumerated, not only cookies); the page walker, record parser, payload
assembler and value decoder are exact. That schema-selection generalization is
the only wrapper-level difference and is exercised directly by the settings
fixture.

Binary-vs-published-format divergences preserved here:

| Point | Binary | Published SQLite |
|---|---|---|
| per-field body bound | `payload-header < field_length`; cumulative overrun accepted | field must fit the record |
| serial 10/11 | length 0, decoded as NULL | variable-sized reserved transient codes |
| header size 0 | rejected (`0 < 1`) | historical OP_Column accepts it |
| unknown page type | silently skipped, walk still succeeds | corruption error |
| page count | `file_size / page_size` | in-header count when change counter matches |
| payload ceiling | `0x2000000` | `SQLITE_MAX_LENGTH`-bounded, much larger |
| overflow page 1 | not rejected by the read path | not legal for a write; read path also lacks the `<2` test |
| self/cyclic overflow | bounded by remaining bytes and 1,048,576 links | no explicit cycle check in the normal read path |

### 6.5 Value decoding

On top of that exact structural parse, `DecodeValue` exposes the typed value:
NULL for 0/10/11, signed integers for 1-6 with 1/2/3/4/6/8-byte sign
extension, the constant 0/1 for 8/9, a big-endian double for 7, and TEXT/BLOB
bytes for the `(N-12)>>1` forms. A key is any serial >=12 copied as bytes, as
`0x18014bba0` does; numeric serials are never keys.

`0x180150550` reads a database file and reports AC markers:

- any table containing `vcmod_cl_usersettings` -> `%s: %d client-side BAN
  table(s) present (vcmod_cl_usersettings_*)`;
- any cookie/table containing `devicecookie` -> `%s: %d AC device cookie(s)
  present`;
- otherwise `%s: %d table(s), %d cookie(s) - no known AC marker`;
- an unreadable file -> `%s: not readable right now (%s)`.

## 7. Database wipe

`0x18014d5a0` resolves the engine's `g_pDB` and `sqlite3_exec` for the named
module. The signature is 0x82 bytes:

```
48 8B 0D ? ? ? ? 48 8D 15 ? ? ? ? 45 33 C9 48 C7 44 24 20 00 00 00 00
45 33 C0 E8 ? ? ? ? 48 8B 0D ? ? ? ? 45 33 C9 BA F2 03 00 00
```

It caches the resolved pair per module and refuses with
`sql interface not found`, `no database open`, `self-test failed` or
`schema query failed`. `0x18014ce60` asks `PRAGMA database_list` for the file
the connection just used; `:memory:` is the fallback name.

The wipe order:

1. `PRAGMA freelist_count`. A positive count means the database has freed pages
   but `SQLITE_OMIT_VACUUM` left the bytes; jump to the refill step.
2. Otherwise `SELECT name FROM sqlite_master WHERE type='table'`, drop every
   table except `cookies` and `sqlite_*` with
   `DROP TABLE IF EXISTS [<name>]`.
3. `DELETE FROM cookies` when the cookie count is positive.
4. `0x18014d1a0` refills the freelist: creates a one-column table, inserts
   0x2000-byte text chunks of `'0'` in a loop capped at **1024** inserts
   (`0x400`), re-reading `PRAGMA freelist_count` until it reaches zero.

The result is `%s: %d table(s) dropped, %d cookie(s) cleared, %d freed page(s)
overwritten`. `0x180150310` runs this for the module list
`client.dll`, `menusystem.dll`; the database files are `cl.db`, `mn.db`,
`sv.db`.

## 8. File cleanup

`0x18014eda0` walks a directory recursively. For each file it first tries to
remove it; if removal fails it calls `0x18014eb90`. That function never
truncates a database extension:

```
.db  .db-journal  .db-wal  .sqlite
```

For any other file it opens with `GENERIC_WRITE`, share mode 7, `OPEN_EXISTING`,
clears the read-only attribute on access-denied and succeeds only when both
`SetFilePointerEx(0)` and `SetEndOfFile` succeed. The counters are
**removed / truncated / failed**.

This is the rule behind the file header in the token vault and the maintenance
text: a `.db` is never zeroed under a live sqlite handle; it is emptied through
the connection that owns it.

## 9. UI shell

The product-owned menu body is `0x1801e7a50` (6906 B). Its root tabs are:

```
mayrr | Damage | Lua editor | World | ESP Editor | Theme editor
```

- `0x1801e3830` (6865 B) is the **Configs** page: `Configs`, `##new_config_name`,
  `##config_list`, `No saved configs yet.`, and the `Auto-load last config`
  checkbox. Save/load/delete call `0x1801aaa70` / `0x1801b2830` /
  `0x1801bb580`.
- `0x1801a6210` (2613 B) is the theme editor (`Primary`, `Custom`,
  `CUSTOM THEME`, `Saved with the selected config.`, `FOUNDATION`).
- `0x1801e9960` (2790 B) is the D3D/ImGui bootstrap (`[VIS-INIT]`, `Valve001`,
  `imgui.ini` at `0x1801ea450`, fonts `C:\Windows\Fonts\Arial.ttf`,
  `consola.ttf`, `cour.ttf` at `0x1801ea560`).
- `0x1801d5ef0` (38,613 B) is the **Utility tab renderer**, not the Configs
  page. `0x1801e70b0:134` calls it immediately after setting
  `s_Utility_180378fb8`; `0x1801e7a50:698` is the root-menu switch case that
  calls it. Its 327 unique strings cover `Movement`, `BunnyHop`, `##misc_left`,
  `##misc_right`, `Tools`, `Data cleaner`, and their controls.

  The original corpus file `re/dump/decompile/0x1801d5ef0_FUN_1801d5ef0.c` is
  a 196-byte historical stub, superseded by the separate recovery:
  `re/dump/renderer/0x1801d5ef0_FUN_1801d5ef0.c` has `status: ok`, 194,287
  bytes and 5,142 lines. `re/dump/disasm/0x1801d5ef0.asm` independently
  confirms 8,052 disassembly lines and 955 call instructions. The body has 84
  `FUN_*` identifiers: 83 external direct callees plus its own signature
  reference. Those 83 externals account for 814 named call sites; all 83 bodies
  are recovered under `re/dump/renderer/helpers/`. The exact per-callee map is
  `re/dump/renderer/DEPENDENCIES.md`.

  The recovered Data Cleaner subpage is explicit in the body: `Clean
  now##clean_run`, `Rescan##clean_scan`; Files options `Run on game
  exit##clean_on_exit`, `Wipe data folder##clean_data`,
  `Downloads##clean_downloads`, `Lua / Workshop cache##clean_cache`, `Crash
  dumps##clean_crashes`, `Disable lua/bin DLLs##clean_luabin`; SQLite + ConVars
  options `Wipe databases##clean_sql`, `Reset flagged ConVars##clean_convars`;
  Fingerprint options `Re-roll file times##clean_filetimes`, `Re-roll install
  age##clean_install_age`. Its maintenance calls (`0x1801544e0` run,
  `0x180151970` rescan, `0x1801542d0` post-exit, `0x1801582f0` cache wipe) target
  the reconstructed **decision** layer in `sqlite.h`; file-system enumeration is
  implemented in `src/features/renderer/dependencies.cpp`, and `sqlite3_exec`
  is an explicit host callback. The dependency map records no missing rows.

  The entry point is **compiled into `build.bat` and `build_dll.bat`** through
  `src/features/renderer/renderer.cpp`; `build_dll.bat` also compiles
  `renderer_ui_imGui.cpp` and `renderer_runtime.cpp`. The recovered function is a
  5,142-line UI renderer over the ImGui 1.92.8/engine API. Of its 83 external
  helpers, 30 ImGui-core implementations are provided by `third_party/imgui/`
  and 8 MSVC STL release-ABI helpers are provided by the compiler runtime;
  45 rows are reconstructed: the six earlier helpers (`ui_hash.h`, the four in
  `src/features/renderer/ui_helpers.cpp`, and the CRT logger in
  `src/features/renderer/log_writer.cpp`) plus all eleven former ImGui wrapper
  rows and the key-capture helpers `0x1802d31a0` and `0x1801df700` in
  `src/features/renderer/ui_widgets.cpp`, plus the 26 former missing rows in
  `src/features/renderer/dependencies.cpp` (six config-store/std::any helpers,
  seven file/global-state helpers, four file+SQLite maintenance helpers, eight
  engine-interface helpers and one Lua-VM helper). Engine/Lua/SQLite-owned
  operations use explicit host callbacks; no row remains missing.

  The eleven wrappers were reconstructed as compiled control/state layers from
  their recovered bodies and pure callees, not re-audited (exact pixel-identical
  layout is not claimed): `QueueUiRecord` (0x18019a460), `PopupUiLabel`
  (0x18019a680), `DrawCardButton` (0x18019cb40), `DrawSiblingActivityRow`
  (0x18019d4d0), `DrawControlCard` (0x18019dc00), `DrawForegroundEditor`
  (0x18019fbc0), `DrawThemeColorButton` (0x1801a0b60), `DrawThemeSwatchRow`
  (0x1801a16e0), `DrawFloatHint` (0x1801a7a20), `DrawIntHint` (0x1801a85a0),
  `DrawStyledLabel` (0x1801df5d0), `DrawKeybindRow` (0x1802d31a0) and
  `DrawSpamKeybindRow` (0x1801df700). Their module vectors, scalar flags, style
  indices, style tables, selected-tab state and first-party draw helpers are
  owned by the reconstructed module instead of being cited as blockers. The
  pure ImGui primitives (`TLS+0xec0` context, `ImDrawList`, text/colour widgets
  and style APIs) come from the vendored v1.92.8 source. The wrapper tests
  assert record contents and counts, popup opening, unchanged no-input returns,
  formatted bytes/lengths, selected-tab updates and emitted draw vertices; a
  wrong return or a no-op fails those assertions. The translated entry point is
  executed by `RENDERER SELFTEST` through its tab/child early-outs, section
  collapse, Movement popup, feature-gate, Data cleaner and Lua dumper branches;
  it is not a no-op or stub. The remaining boundary is line-for-line parity with
  the full 5,142-line body and live in-game behaviour, not a missing helper.
- The upstream Goossens `TextEditor` is statically linked into `m64.dll` and is
  the Lua editor's text widget; its transaction, line-section and iterator RTTI
  appears in `rtti_classes.tsv`, but the implementation is the upstream library,
  not reconstructed or vendored as source here.

The config page is a consumer of the recovered engine: it does not reimplement
hashing or parsing. It displays the current vector from `0x1803fcc98`, calls
the loader/saver with the selected name, and refreshes after every mutation.

## 10. Evidence table

| Address | Size | Role |
|---|---:|---|
| `0x1801a8740` | 853 | Documents / mayrrX64 root |
| `0x1801a8aa0` | 179 | settings directory |
| `0x1801a8b60` | 179 | `last_config.txt` path |
| `0x1801a8c20` | 404 | write auto-load + selected name |
| `0x1801a8dc0` | 788 | read auto-load + selected name |
| `0x1801a90e0` | 354 | UTF-16 -> UTF-8 |
| `0x1801a9250` | 339 | UTF-8 -> UTF-16 |
| `0x1801a93b0` | 453 | config-name sanitizer |
| `0x1801a9580` | 269 | name -> `.cfg` path |
| `0x1801a9690` | 158 | select by name |
| `0x1801a9730` | 1266 | create/enumerate settings folder |
| `0x1801a9c30` | 155 | hash -> `%016llx` |
| `0x1801a9cd0` | 257 | bool writer |
| `0x1801a9de0` | 256 | int writer |
| `0x1801a9ee0` | 264 | float writer |
| `0x1801a9ff0` | 256 | string writer |
| `0x1801aa0f0` | 126 | vec4 writer (four FNV steps) |
| `0x1801aa170` | 205 | bool parser |
| `0x1801aa240` | 85 | bool map lookup |
| `0x1801aa2a0` | 175 | int parser |
| `0x1801aa350` | 171 | float parser |
| `0x1801aa400` | 98 | theme-path string copy |
| `0x1801aa470` | 311 | twelve vec4 saves |
| `0x1801aa5b0` | 1211 | forty-eight vec4 loads |
| `0x1801aaa70` | 32186 | config save + feature blocks |
| `0x1801b2830` | 36055 | config load + feature blocks |
| `0x1801bb580` | 649 | delete config |
| `0x1801e3830` | 6865 | Configs page |
| `0x1801d5ef0` | 38613 | Utility settings renderer; body recovered at `re/dump/renderer/` (`status: ok`, 5,142 lines), entry point translated/compiled in `src/features/renderer/renderer.cpp` and runtime-wired |
| `0x180268980` | 190 | ImGui ID CRC-32C hash; reconstructed as `sf::config::ImGuiHash` (`src/features/config/ui_hash.h`) |
| `0x1801e7a50` | 6906 | root menu tabs |
| `0x1801e9960` | 2790 | ImGui/D3D bootstrap |
| `0x1801ea450` | 270 | `imgui.ini` |
| `0x1801ea560` | 898 | font paths |
| `0x1801a6210` | 2613 | theme editor |
| `0x18014be40` | 417 | database file loader |
| `0x18014b840` | 385 | varint decoder |
| `0x18014b9d0` | 405 | record header + serial-type decoder |
| `0x18014bba0` | 108 | text/blob column copy |
| `0x18014bff0` | 1330 | page walker |
| `0x18014bc10` | 545 | `key` column locator |
| `0x18014c530` | 380 | local/overflow payload assembler |
| `0x18014c6b0` | 1027 | `Features::Sqlite::Read` |
| `0x18014d5a0` | 2122 | module wipe |
| `0x18014d1a0` | 1013 | freelist refill |
| `0x18014ce60` | 636 | `PRAGMA database_list` |
| `0x18014eda0` | 255 | recursive file cleanup |
| `0x18014eb90` | 518 | truncate non-database file |
| `0x180150310` | 445 | wipe client.dll/menusystem.dll |
| `0x180150550` | 1563 | AC-marker report |

## 11. Verification

`build.bat` builds two Stage 3.13 suites with the same `/std:c++17 /W4 /O2`
flags as every other suite and runs them.

`src/features/config/selftest.cpp` asserts the 528 keys and the
221/115/184/8 split, sortedness/uniqueness, FNV-1a and the four vec4 keys,
sanitizer, paths, `.cfg` filtering, `last_config.txt`, the three old-format
dispositions, bool/int/float prefix rules, writer output/roundtrip, SQLite
headers/page headers, `key` lookup, table/cookie exclusion, cleanup and marker
strings. It also checks the reconstructed ImGui ID hash: CRC-32C values for
bounded and NUL-terminated labels, and the `###` restart (including a leading
`###`). The generated hash table is checked against the binary's table at VA
`0x180331380` (`table[1] = 0xf26b8303`, `table[255] = 0xad7d5351`, CRC-32C).

`src/features/config/sqlite_selftest.cpp` builds a real SQLite file as raw
pages with an independent test-only builder (no reader structs), then reads it
back through `ValidateHeader` -> `WalkBtree` -> `ParseRecord` -> `AssemblePayload`
-> `DecodeValue`. The fixture contains:

- all 528 generated config keys as text keys, with bool/int/float/string values;
- every integer width 1/2/3/4/6/8, serial 8/9 constants, NULL, real, text,
  empty text/blob, a 16-byte blob and a 2200-byte blob;
- an uppercase `TABLE` schema type, exercising the binary's `_stricmp` match;
- a root `0x05` interior page, at least three `0x0d` leaf pages, and four
  overflow pages for the 2200-byte value;
- the full `key` and typed value of every row checked by an independent map;
- malformed fixtures: a zero/oversized header, a truncated serial varint, a
  field longer than the body, the binary's cumulative-overrun acceptance, a
  zero overflow pointer, a corrupted page type (skipped with zero rows), a bad
  magic and a sub-page file.

A clean run reports `CONFIG SELFTEST PASS (0 failures)`,
`SQLITE SELFTEST PASS (0 failures)` and `RENDERER SELFTEST PASS (0 failures)`
alongside the other thirteen suites (16 total). The renderer suite creates the
pinned ImGui context, checks the version and style stacks, and exercises all
four newly ported helpers. It also drives the translated branch families:
chat waiting/hurt/death/cleanup, loading file/URL edit, Tools set/read/unlock/
force, model scan/list/match/apply/limit/empty/no-match, File-cloak list/add/
restore/status/cleanup, cleaner issue/log and final cleanup. The generated
schema is reproducible from `re/tools/extract_config_keys.js`; the tool is not
part of the DLL. The label/callee accounting is generated by
`re/tools/renderer_inventory.py` into `re/dump/renderer/INVENTORY.md`:
24/24 recovered labels and 84/84 `FUN_*` identifiers (83 external callees plus
the renderer itself).

## 12. Vendoring evidence and final boundaries

The SQLite/config data path has no first-party decoding boundary left. The
remaining first-party presentation boundary is the compiled port of
`0x1801d5ef0`. This is not a missing-body problem: the renderer body was
recovered from the existing Ghidra project with a 600-second per-function
budget and a 512 MB decompiler payload cap, and is stored at
`re/dump/renderer/0x1801d5ef0_FUN_1801d5ef0.c` (`status: ok`, 5,142 lines,
194,287 bytes). All 83 external callee bodies were then recovered by the same
single-function path into `re/dump/renderer/helpers/`, all `status: ok`, and
mapped in `re/dump/renderer/DEPENDENCIES.md`. The original corpus stub at
`re/dump/decompile/0x1801d5ef0_FUN_1801d5ef0.c` is retained as history only;
the full-corpus `re/dump/run.log` ends `done=7591 skipped=65 failed=2`.
The other timeout stub, the 52,526-byte `0x180003f30`, is the static
initializer for the `"Default"` profile of `DAT_1803fadf0`; the same
single-function pass recovered it at
`re/dump/recovered_f30/0x180003f30_FUN_180003f30.c` (`status: ok`, 6,483
lines, 224,665 bytes). It performs 444 map insertions over 435 distinct
64-bit key constants and ends with `FUN_180241340(&DAT_1803fadf0, "Default", ...)`.
It is a recovered default profile for the runtime settings tree, not a
renderer dependency; its 435 distinct keys are not claimed to be the complete
default set for the 528-key product schema, and it does not change the
38/45/0 renderer split.

Artifacts checked for alternate source: `re/dump/decompile/_INDEX.tsv:3093`
(only the stub row), `re/dump/inventory.tsv:3092` (38,613 B, 2 callers, 329
string hits), `re/dump/strings_by_function.tsv` (327 unique labels),
`re/dump/disasm/0x1801d5ef0.asm` (objdump, 8,052 lines, 955 call
instructions), `re/dump/decompile/0x1801e70b0_FUN_1801e70b0.c:134` and
`re/dump/decompile/0x1801e7a50_FUN_1801e7a50.c:698` (the two callers),
`re/dump/exports.tsv` (four exports, none this body), and `re/dump/vtable_methods.tsv`
(no entry). `re/analysis.log` shows the Ghidra 12.1.4 project and no PDB
(`Skipping PDB processing: failed to locate PDB file`); there is no
`.pdb`/`.idb`/`.i64`/IDA database in the workspace. The Ghidra project itself
is `re/ghidra_project/m64.gpr`, and `re/renderer_decompile.log` is the
recovery log.

The recovered body is an ImGui/engine renderer, not a config/SQLite algorithm:
84 `FUN_*` identifiers (83 external callees + the renderer's own signature
reference), 814 named call sites, 955 total call instructions and 327 UI
strings, including feature pages owned by Stages 3.7-3.10. This is not the old
"no body" claim: the renderer body and all 83 external helper bodies are preserved.
The remaining work is a **compiled UI port**. Forty-five rows are reconstructed:
`0x180268980` → `src/features/config/ui_hash.h::ImGuiHash` (tested by the
config suite); `0x180012ac0`, `0x18001d080`, `0x180140b70` and `0x1802d8350` →
`src/features/renderer/ui_helpers.cpp`; the CRT logger in
`src/features/renderer/log_writer.cpp`; the eleven ImGui wrappers plus the
key-capture helpers `0x1802d31a0`/`0x1801df700` in
`src/features/renderer/ui_widgets.cpp` (tested in the `renderer_selftest` suite
inside an ImGui 1.92.8 context); and the 26 former missing rows in
`src/features/renderer/dependencies.cpp`. Thirty ImGui-core helpers are
**provided** by the pinned `third_party/imgui/` v1.92.8 source; eight MSVC STL
release-ABI helpers are provided by the compiler runtime. No helper row is
missing. Engine/Lua/SQLite-owned operations use explicit host callbacks. The
dependency map records each address, recovered body, size, call count and
classification; no shim or stub was inserted. The eight STL-provided rows are
`0x18020d5c0` (vector<string> destructor), `0x18020d6f0` (vector<string>
growth), `0x18020d830` (vector<string> move assignment), `0x18020d910`
(vector<string> copy constructor), `0x18020e450` (string destructor),
`0x18020e8a0` (string move assignment),
`0x180212700` (string assign) and `0x18021c730` (vector destructor whose only
element destructor is the string at +8). Each is compiler-generated x64 release
STL code over the standard 0x20-byte string and 0x18-byte vector layouts, with
no engine global or application-authored branch; the only callees are the
standard `std::string`/`std::vector` ABI (including the string copy constructor
at `0x18016d4c0`). `0x18021c730` is a vector-destructor instantiation over a
first-party 0x28-byte element whose only non-trivial member is the string at
+8; the generated destructor is STL code, not authored logic. `0x18014e0a0` was removed from that set after audit:
it locks `DAT_1803e7a40` and clones the first-party global vector at
`DAT_1803ea200`, so it is a reconstructed file helper, not an STL routine. The
maintenance decision layer is reconstructed in `sqlite.h`; file/SQLite
execution helpers are in `dependencies.cpp`, with `sqlite3_exec` supplied by
an explicit host callback. The
third-party code linked into `m64.dll` was established by binary evidence, not assumed:

* **Dear ImGui 1.92.8 (19280)**, statically compiled in. The binary contains the
exact upstream banner `Dear ImGui 1.92.8 (19280)` at `0x18026e050` (upstream
`IMGUI_VERSION`/`IMGUI_VERSION_NUM` and localization-table banner confirmed in a
researcher-web pass), the
`imgui.ini` / `imgui_log.txt` defaults at `0x180267720`, the official FAQ URL at
`0x1802af100`, and the `imgui_impl_win32` / `imgui_impl_dx9` backend
identifiers at `0x1802d0ab0` / the init path. Upstream builds the banner by token
pasting `"Dear ImGui " IMGUI_VERSION " (" IM_STRINGIFY(IMGUI_VERSION_NUM)
")"`, and the ini/log names are `ImGuiIO` constructor constants. This fixes the
exact upstream tag: <https://github.com/ocornut/imgui/blob/v1.92.8/imgui.cpp>,
<https://github.com/ocornut/imgui/blob/v1.92.8/imgui.h>,
<https://github.com/ocornut/imgui/blob/v1.92.8/backends/imgui_impl_win32.cpp>,
<https://github.com/ocornut/imgui/blob/v1.92.8/backends/imgui_impl_dx9.cpp>.
* **TextEditor** is the Goossens rewrite of ImGuiColorTextEdit, not the older
BalazsJako class. The binary's mangled RTTI/symbol strings name
`TextEditor::DocPos`, `TextEditor::LineSection`, `TextEditor::Iterator`,
`TextEditor::Transaction`, `TextEditor::Glyph` and the private
`TextEditor::addSquiggle` lambda. `DocPos`, `LineSection`, `Transaction`,
`Iterator` and `addSquiggle` are the distinguishing Goossens members; they are
absent from BalazsJako's original header. The corpus has no application-domain
symbol inside the editor; the symbols are the generic widget's line/glyph/
undo model. Upstream: <https://github.com/goossens/ImGuiColorTextEdit>,
`TextEditor.h`/`TextEditor.cpp`. The Stage 3.10 Lua editor wrapper bodies that
call it are first-party and already reconstructed.
* The product-owned page bodies are not skipped: `0x1801e7a50` (root tabs),
`0x1801e3830` (Configs page and its Save/Load/Delete/Refresh/Auto-load wiring),
`0x1801a6210` (theme editor), `0x1801e9960` / `0x1801ea450` (bootstrap and
paths) are mapped in section 9. Their drawing is ImGui calls; the recovered
control/label/action map is the product behavior, while ImGui itself is the
vendored implementation above. `0x1801d5ef0` is now translated and compiled:
`renderer.cpp` keeps the recovered top-level sections and branches, binds the
45 reconstructed helpers, and is reached from the stage-6 runtime path. The map
separates 38 provided rows (30 ImGui-core + 8 MSVC STL), 45 reconstructed rows
and 0 missing. The remaining UI boundary is line-for-line parity with the full
5,142-line body and live in-game verification, not a missing helper body.

`[CVAR-*]` is the TacRP diagnostic cluster from Stage 3.2, not part of this
feature; it is not re-counted here.

## 13. Subagent execution and build verification

Subagent availability was checked for this porting pass. `researcher-web` is
available and was used to verify the pinned ImGui 1.92.8 API surface
(`IsPopupOpen`/`OpenPopup` same-frame semantics, `ColorButton`, `ColorEdit4`,
`ImFontAtlas::Build`/`AddFontDefault`) before the headless test setup. The
`code-searcher` and `editor-multi-prompt` roles were attempted together and the
spawn was rejected as unavailable; no other specialist porting roles are
available. All eleven wrapper reconstructions, the two key-capture helper
reconstructions, the source/test/build-script edits and the documentation
reconciliation were therefore done in the main thread. The
renderer suite was then built from a deleted `build/`: 16 suites, zero C errors,
zero C warnings, and `RENDERER SELFTEST PASS (0 failures)`. The same suite now
runs the 26 dependency-layer cases; `build.bat` still reports 16 suites total.

## 14. Stage closure

The reconstructable UI-helper layer is complete: the 528-key config engine,
`last_config.txt`, SQLite reader/wipe decisions, ImGui ID hash, four string/CRT
helpers, the thread-safe logger, all eleven former ImGui wrappers and both
key-capture helpers are present and covered by `CONFIG SELFTEST`,
`SQLITE SELFTEST` and `RENDERER SELFTEST`. The dependency map has no remaining
first-party ImGui wrapper or key-capture helper in the missing bucket; there are
no missing helper rows. The 26 former missing rows are implemented in
`src/features/renderer/dependencies.cpp`; engine/Lua/SQLite-owned operations use
explicit host callbacks.

`0x1801d5ef0` now has a compiled, runtime-wired entry point; the renderer
self-test executes its branches and the DLL builds and loads. This still does
**not** claim full original-DLL or in-game parity: the remaining boundary is
line-for-line parity with the full 5,142-line recovered body and live GMod
behaviour. The recovered renderer and all 83 helper bodies remain evidence, and
the typed host boundaries are listed in the dependency map.
