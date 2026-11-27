# ImClass — live image viewer for m64.dll

[ImClass](https://github.com/codabro/ImClass) is a ReClass-style memory viewer
(MIT, C++, Dear ImGui + D3D11). Its README states the scope: x64/x86, signature
and string scanning, IDA-style pattern/mask signatures, C++ class exporting,
RTTI parsing, pointer previews, memory nodes, and module base/export address
arithmetic.

It is a **live-process** tool: the viewer attaches with `OpenProcess` +
`ReadProcessMemory` and resolves RTTI from the target's memory. It cannot open a
file, and there is no command line — `main.cpp` is a `WinMain` that shows a
window and an "Attach to process" list.

## Setup used here

| Item | Value |
|---|---|
| Binary | `.tools/ImClass/ImClass.exe` |
| Release | `v1.02-beta`, build 18 (`build-18-c409803766af9b6395947d154a9f7072fd1e7b3a`) |
| Size | 1,127,424 bytes |
| SHA-256 | `d0555381fdf5190b9af7eddc563f73e0391893eea833b0d383f06dbada8ffccd` (matches the release asset digest) |
| Source | `.tools/ImClass/src/ImClass-main/` (snapshot of `main`) |

The `.tools/ImClass` snapshot is workspace-level provenance from the original
analysis, not part of this repository. The reproducible audit inputs are the
tracked harnesses in `re/tools` (`imclass_host.exe`, `imclass_dump.exe`,
`memdump.exe`), the tracked `m64.dll`, and the corpus under `re/dump`; a clean
checkout runs the generator directly without `.tools`.

Because `m64.dll` imports no engine libraries but its `DllMain` expects the
Source client, it is never loaded with `LoadLibrary`. `re/tools/imclass_host.cpp`
maps the PE sections into a `VirtualAlloc` at the image's preferred base
`0x180000000` and idles without executing a single byte of the image.

That base matters: PE32+ images store preferred-base VAs in RTTI locators,
hierarchy descriptors and vtables, so at `0x180000000` every value is live and
every corpus RVA maps to `0x180000000 + RVA` with no relocation pass.

## Building the harnesses

```
re\tools\build_imclass_tools.bat
```

This rebuild is optional provenance and requires the workspace-level
`.tools/ImClass` source snapshot. A clean checkout uses the tracked executables
directly and does not need the external snapshot for the audit.

The dumper includes ImClass's own `memory.h` and calls `mem::rttiInfo`, the same
function the viewer uses when it labels a pointer. Two local compile fixes were
needed in the extracted snapshot for MSVC 14.52:

* `processSnapshot` aggregate init from `WCHAR[260]` (brace-init picks
  `initializer_list`) is assigned field by field;
* `std::string(wide.begin(), wide.end())` is replaced with a `NarrowAscii` helper.

The viewer binary itself is untouched.

## Running it

Headless verification (this is what produced the artifacts):

```
imclass_host.exe ..\..\m64.dll --seconds 180
imclass_dump.exe <pid> 0x180000000 ..\dump\rtti_classes.tsv ..\dump\imclass
```

`ImClass.exe` itself is GUI-only and was not driven headlessly; these commands
run the same engine it uses (`memory.h`, `mem::rttiInfo`, `Read<>`) against the
host process. No game process was opened. The one-command regeneration is
`node re/tools/gen_vtables.js`, which starts the host, invokes
`imclass_dump.exe <pid> 0x180000000 re/dump/rtti_classes.tsv re/dump/imclass`,
reads the slots/RTTI/ownership table it writes, verifies it against the mapped
image, and then produces every vtable artifact.

Interactive browsing:

```
re\tools\open_imclass.bat
```

Attach ImClass to `imclass_host.exe`, then paste addresses from
`re/dump/imclass/class_index.md` into the address bar, e.g.
`0x180338E00` for `Features::Aimbot::AimbotFeature`. The viewer resolves the
RTTI name from the locator and shows the vtable slots; hover/double-click the
pointer values to follow them, and use the class pane's export to emit a C++
class for whatever layout is built there.

## Result

`re/dump/imclass/rtti_live.tsv` and `class_index.md`:

* 159/159 classes resolved from live memory at `0x180000000`;
* 148 through ImClass's `mem::rttiInfo`;
* 11 through a full-length descriptor read — ImClass models `TypeDescriptor`
  with a fixed `char name[60]`, and the longer namespaced classes truncate
  before the `@@` terminator, so the chain fails its `ends_with("@@")` check;
* 0 failures.

## Limits

* The mapped image is not in the PEB loader list, so ImClass's module list and
  `module.dll + offset` arithmetic do not see it; use the raw `0x180000000 + RVA`
  form or the addresses in `class_index.md`.
* No `DllMain`, no engine interfaces, no hooks: this exposes read-only static
  RTTI/vtable data, not runtime object instances.
* Class *field* layouts are not in RTTI. ImClass is where they get built by hand
  against a real object; the host has no objects to point at, so `fields.tsv`
  records access sites (marked `weak-inferred`), not a verified layout.
* Structural descriptors (`field_compare_08_10`, `get_field_10`, `leaf_stub`, …)
  describe what the body does; they are not recovered symbol names. Only the 26
  import-stub rows are real symbols. The 19 remaining `vfuncNN` rows are
  explicitly `unresolved-by-tool`.
* `ImClass.exe` is GUI-only (no CLI/offline mode); the run above uses its
  `memory.h` engine through `imclass_dump.exe`. No game process is attached, so
  live object instances, constructors and runtime field values remain
  unreachable.

## Vtable generator (method-level pass)

The class-level map above is the input to `re/tools/gen_vtables.js`, which walks
all 159 vtables slot by slot and writes `re/dump/vtables/`. One command:

```
node re/tools/gen_vtables.js
```

The generator starts `imclass_host.exe` (mapping `m64.dll` at `0x180000000`,
still without running `DllMain`) and runs `imclass_dump.exe`, which links
ImClass's `memory.h` and walks each vtable with `Read<uintptr_t>`, resolves the
live RTTI chain with `mem::rttiInfo`, and writes `class`, `vtable_rva`,
`vtable_slots`, `slot_vas`, `live_chain`, `resolved` and `status`. It also runs
`memdump.exe` for the raw image. The generator then checks ImClass's slot list
against the image qwords (count and order) before using it. No game process and
no live client are involved.

What each slot goes through:

1. ImClass enumerates the slots from the live mapping; the generator verifies
   each qword matches the mapped image and that every target is a `.text` VA
   (one trailing non-VA qword sits after a vtable in this image and is excluded);
2. `jmp rel32` / `jmp rel8` / `call;ret` thunks are followed, and `jmp [rip+..]`
   import stubs are resolved through the PE import table to
   `dll!function`;
3. a body that only calls one `FUN_` and returns is followed as a forwarder even
   when a stack-frame prologue defeats the byte pattern;
4. the landing function is labelled from its decompiled body: referenced string
   literals (log tags first), called imports, exact entry bytes for stubs, then
   a body-derived structural descriptor (field read/write/compare, constant,
   empty/leaf stub), and finally the RTTI slot identity for rows with no usable
   body evidence.

ImClass supplies the class, slot count, slot VAs, live RTTI chain and resolved
ownership; the image and corpus supply the behaviour. Every evidence cell starts
with `imclass <status> slot k/n` and ends with `rtti <live_chain>`, so the
ImClass-derived part is traceable row by row.

Confidence is explicit: `symbol` only for an import-table symbol reached through
an import stub, `strong-inferred` for a direct string literal or exact entry
bytes, `weak-inferred` for import-call-only bodies, and `structural` for a
descriptor derived from the decompiled body (these are not recovered method
names; the evidence quotes the pattern). A slot whose import stub has no
import-table entry is written as `unresolved`; the current image has none.

Current result: 159 classes, 2177 slots, 0 unresolved — 26 `symbol`, 1412
`strong-inferred`, 432 `weak-inferred`, 307 `structural`. The 326 former
trailing placeholders are down to 19; each remaining row is marked
`unresolved-by-tool` and states its callee count and why no string, import,
callee or structural descriptor was available.

Field candidates: `fields.tsv` holds 1,375 offsets across 136 classes from
literal `param_1 + 0xNN`/`param_1 + N` accesses in the class's virtual bodies and
in callees that receive `param_1` as their first argument. Type and size come
from the decompiler cast; offsets without a cast keep `?`. `origin` is `self`
for an offset seen on this class, `chain:<Base>` for one copied from a base
class, and 197 rows are chain-derived in total. `Features::FeatureBase` has no
RTTI vtable in this image, so its layout is inferred from its subclasses: an
offset present in at least half of the 26 field-bearing FeatureBase siblings is
marked `via=sibling-inferred n/26` and inherited by siblings whose own bodies
never touch it (0x08 25/26, 0x10 20/26, 0x18 20/26, 0x20 14/26).
Offsets copied from a non-primary base are relative to that base subobject; the
`origin` column names it. The FeatureBase rows are the only statistical ones and
are never presented as direct accesses. `field_status.tsv` lists all 159
classes; the 23 still at zero contain no `param_1 + offset` access anywhere in
their virtual bodies, so the row says so instead of inventing one. `Features::Aimbot::AimbotFeature` has no self access
but now carries those four inherited FeatureBase offsets; its status row states
the sibling basis explicitly.

PDB: the image has an RSDS debug record but no symbols beyond it, and the vendor
PDB is not on this machine — `pdb.md` records the GUID, age and path, and
`symbols.csv` exports every landing RVA with its label for debugger import.

Artifacts:

| File | Contents |
|---|---|
| `re/dump/vtables/slots.tsv` | class, base chain, slot, direct RVA, landing RVA, name/label, confidence, evidence |
| `re/dump/vtables/vtables.h` | one struct per class, `slotNN` fields in vtable order, slot comment carries RVA + confidence |
| `re/dump/vtables/compile_check.cpp` | translation unit that includes the header |
| `re/dump/vtables/hierarchy.md` | roots and per-class immediate/full base chain with slot counts |
| `re/dump/vtables/shortlist.md` | ranked gameplay classes with the evidence strings that justify each rank |
| `re/dump/vtables/fields.tsv` | per-class field-offset candidates with type/size hints, access slots and `origin` (self / chain) |
| `re/dump/vtables/field_status.tsv` | all 159 classes with own/inherited/total counts and the reason for every zero |
| `re/dump/vtables/symbols.csv` | unique landing RVA to best label, sorted by address |
| `re/dump/vtables/pdb.md` | RSDS GUID/age/vendor path, export-directory status, why no PDB exists |
| `re/dump/vtables/structural_diff.md` | structural projection vs the stage-disabled baseline |
| `re/dump/vtables/baseline/slots_pre.tsv`, `vtables_pre.h` | baseline regenerated by `node re/tools/gen_vtables.js --baseline` (label/field/chain stages off) |
| `re/tools/check_vtables_baseline.js` | independent structural comparison: class set/order, slot counts, RVAs, header sequence |
| `re/tools/audit_vtables.js` | re-derives every evidence citation, placeholder reason and chain-field row from disk |

The structural baseline is produced by the same generator with the label, field
and chain stages disabled, not copied from an old run:

```
node re/tools/gen_vtables.js --baseline
node re/tools/gen_vtables.js
node re/tools/check_vtables_baseline.js
node re/tools/audit_vtables.js
```

`--baseline` writes only `baseline/slots_pre.tsv` and `baseline/vtables_pre.h`;
two runs are byte-identical. The normal run compares against them and writes
`structural_diff.md`; `check_vtables_baseline.js` independently checks class
set/order, per-class counts, direct and landing RVAs and the `vtables.h`
struct/slot sequence. `audit_vtables.js` re-derives the ImClass row data,
evidence citations, placeholder reasons and chain fields from disk.

All-stage reproducibility is checked by running the generator twice and diffing:

```
node re/tools/gen_vtables.js
cp re/dump/vtables/{slots.tsv,vtables.h,hierarchy.md,shortlist.md,compile_check.cpp,fields.tsv,field_status.tsv,symbols.csv,pdb.md,structural_diff.md} /tmp/run1/
node re/tools/gen_vtables.js
diff /tmp/run1/slots.tsv re/dump/vtables/slots.tsv
```

The output carries no timestamps, PIDs or run-dependent ordering; both runs are
byte-identical across all twelve artifacts (the ten above plus
`re/dump/imclass/rtti_live.tsv` and `class_index.md`, which the same command
regenerates). The header is compiled with
`re/tools/build_vtable_check.bat` (`cl /std:c++17 /c compile_check.cpp`).

Limits of the names: the DLL has no exports and no PDB, so nothing here is a
binary function symbol except the import-stub targets. `strong-inferred` labels
quote the function's own log/format string — they describe what the function
logs, not a recovered identifier. `weak-inferred` labels either list the imports
a body calls or fall back to the RTTI slot identity, which is exact but says
nothing about behaviour. No label is invented, and no guess is promoted to
`symbol`.
