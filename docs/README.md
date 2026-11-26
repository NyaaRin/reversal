# Skyfall / mayrrX64 — documentation index

Reference documentation for the reverse-engineering mission. Everything here is
derived from `Gmod/Skyfall/m64.dll` (image base `0x180000000`, MD5
`3d9ad8894d9d55e4212b7d800119aaa7`) and its decompiled corpus at
`re/dump/decompile/`. The separately recovered `0x1801d5ef0` body is at
`re/dump/renderer/` and the recovered `0x180003f30` defaults initializer is at
`re/dump/recovered_f30/`, each with its own README. The per-callee map is
[`re/dump/renderer/DEPENDENCIES.md`](../re/dump/renderer/DEPENDENCIES.md). The
old-category file audit is
[`re/dump/OLD_CATEGORY_AUDIT.md`](../re/dump/OLD_CATEGORY_AUDIT.md) (574 cited
function bodies, 540 distinct, all `status: ok`).

## Where things live

| Document | What it covers |
|---|---|
| `../STAGES.md` | the mission tracker: what is done, what is next, resume commands |
| `../re/REPORT.md` | Stage 1 dossier: RTTI map, strings, imports, memory map, signatures |
| `../re/imclass/README.md` | ImClass live viewer: mapped-image host, verified binary, 159/159 live RTTI check, address index, one-command vtable generator, limits |
| `../re/dump/vtables/` | method-level map: `slots.tsv` (159 classes / 2177 slots, confidence + evidence), `vtables.h`, `hierarchy.md`, `shortlist.md`, `fields.tsv` (1,375 offsets, 136 classes, 197 chain-derived), `field_status.tsv` (all 159 classes), `symbols.csv`, `pdb.md`, `structural_diff.md`, switch-generated `baseline/`; checked by `../re/tools/check_vtables_baseline.js` and `../re/tools/audit_vtables.js` |
| `stage-03.2-weapon-backends.md` | the 22 weapon backends, their 11 `vfunc04` bodies, per-body draw source |
| `stage-03.3-seed-prediction.md` | command seed chain, prediction hook, 62-tick guard, MoveHelper, config-gated patch keys, pattern-scan limitation |
| `stage-03.4-autowall.md` | penetration loop, damage falloff, refusal reasons, trace filters, eleven model classes, five/four-key CW20/SWB/FAS2 accessors, six-unit target tolerance |
| `stage-03.5-aim.md` | target gates, the real `0x1800ce630` metric, hysteresis, FOV, smoothing, triggerbot timing and CRT call sites, curve-key roles |
| `stage-03.6-esp.md` | proven `[ESP]`/`[GLOW]`/`[CHAMS]` ownership, element family, anchor layout, colour, glow/chams, ghost listener, closed `DAT_1803fcb6c`; recovered paint-path renderer `0x180174130` and call chain (**complete**) |
| `stage-03.7-movement.md` | eight `Features::*` movement classes, command layout and bits, Airstuck interval state machine, MoveFix basis mix, full Autostrafe mode branches and data bounds |
| `stage-03.8-hvh.md` | `AntiAim`/`Resolver`/`LagComp`/`Visualize`: gate chain, yaw modes 1–9 and desync fields, resolver cache bounds, interp abuse and failure string, full Visualize render body and gates |
| `stage-03.9-backtrack.md` | `BacktrackFeature` slots 1/2/16, record and ring layout, extrapolation bone/origin pair, eleven timing queries, shift/validator helpers, ring `0 -> 8 -> 16` growth, sentinel ownership, 5 s window, verbatim `[BT*]` strings, `FakeLag` empty |
| `stage-03.10-lua.md` | Lua private stack (`0x1800414c0`/`0x180041420`), DrawModelExecute hook cap, all 35 channel setters, 46 registered readers + two thunks, BlockMessage/Net_ShouldSend/CL_Move gates, four editor bodies, LUAFEAT tables |
| `stage-03.11-resolver.md` | VMT installer, interface dump, 21-entry hook table, beam/net/time/fake-ping scans, CViewRender RTTI check, netvar builder, NW-store manager and probe |
| `stage-03.12-account-switcher.md` | 27 `[AS]` bodies, session state machine, password/token/guard logins, DPAPI token vault, `accounts.txt`/`tokens.dat`, Steam import, deploy and engine ticket cache, service callbacks, UI |
| `stage-03.13-config-ui.md` | 528-key hash config, `last_config.txt`, name sanitizer, Feature save/load blocks, full SQLite page/record/overflow decoder, module wipe, cleanup, AC markers, Configs/theme UI, vendoring evidence; `0x1801d5ef0` entry point translated/compiled in `src/features/renderer/renderer.cpp` from the recovered 5,142-line body, with all 83 external helper bodies at `re/dump/renderer/helpers/`, and `0x180003f30` default-settings initializer recovered (6,483 lines, 444 insertions / 435 keys), map at [`re/dump/renderer/DEPENDENCIES.md`](../re/dump/renderer/DEPENDENCIES.md); ImGui source pinned at `third_party/imgui/` (**Status: renderer entry point compiled and runtime-wired; full binary/in-game parity remains.** Config/SQLite decoding complete; implementation split: 38 provided (30 ImGui-core + 8 MSVC STL), 45 reconstructed, 0 missing; 0x1801d5ef0 is translated in src/features/renderer/renderer.cpp and called from the stage-6 FrameStageNotify path via renderer_runtime.cpp. Engine/Lua/SQLite operations use explicit typed host callbacks listed in the dependency map. The current build runs 16 suites.) |
| `stage-04-offsets.md` | complete 21-entry hook table plus 3 core rows (24 rows / 23 unique interface-slot entries), corrected D3D identities, exact ABIs, six verified signature strings, interface/device resolution, the canonical live-feature/unsupported inventories, and the installation boundary |
| `stage-05-runtime.md` | the compiled `Skyfall.dll`: the recovered hook install path (optional rows conditional), command features, fullbright, engine-native ESP, INI schema, verification performed, the five-item unsupported list, and the out-of-scope boundaries |
| `../src/features/nospread/README.md` | no-spread / compensation constants and evidence |
| `../src/features/weapon/README.md` | implementation notes for the backend layer |

`docs/` holds the reference sheets that span subsystems. Per-subsystem notes that
are most useful next to the code (nospread, weapon) stay in their source folders and
are linked above.

## Corpus conventions

* `re/dump/renderer/INVENTORY.md` — generated inventory of all 24 recovered
  `0x1801d5ef0` labels and all 84 `FUN_*` identifiers (83 external callees plus
  the renderer itself), with each entry mapped to compiled code, a provided
  MSVC/CRT path, or the typed host boundary list. Regenerate with
  `py re/tools/renderer_inventory.py`; the TSV companion is `INVENTORY.tsv`.
* `re/dump/decompile/` — one `.c` per function, named `<VA>_<symbol>.c`.
* `re/dump/decompile/_INDEX.tsv` — manifest: `address`, `size`, `name`, `file`,
  `status`. It is append-only across runs, so a later duplicate line can exist for a
  function that was re-decompiled; the `.c` filename is authoritative. The two
  original timeout stubs are superseded by `re/dump/recovered_f30/`
  (`0x180003f30`) and `re/dump/renderer/` (`0x1801d5ef0`).
* `re/dump/vtable_methods.tsv` — resolved vtable slots per class.
* `re/dump/rtti_classes.tsv` — 159 classes with vtable RVA and base classes.
* `re/dump/strings_by_function.tsv` — which strings each function references; this
  is how unnamed functions are identified.

## Rebuilding artifacts

The corpus is regenerated with the Ghidra headless pipeline in `re/tools/`; the
exact command is recorded in `../STAGES.md` under Stage 2. The old-category
file audit is regenerated with `py re/tools/audit_old_categories.py`.

The vtable map is regenerated with one command, `node re/tools/gen_vtables.js`,
which starts `imclass_host.exe`, runs `imclass_dump.exe` (ImClass's `memory.h`
reader) to enumerate slots/RTTI/class ownership at `0x180000000`, verifies that
list against the mapped image, and rewrites `re/dump/vtables/` plus
`re/dump/imclass/rtti_live.tsv`. No game process is used.

The structural baseline is not hand-copied. `node re/tools/gen_vtables.js --baseline`
runs the same slot/RVA walk with the label, field and chain stages off and
writes `re/dump/vtables/baseline/`. `node re/tools/check_vtables_baseline.js`
compares it independently against the all-stages artifacts, and
`node re/tools/audit_vtables.js` re-derives the ImClass rows, evidence
citations, placeholder reasons and chain fields from disk.

The reconstructed C++ is built and self-tested with `../build.bat`, which compiles
`src/features/nospread`, `src/features/shot`, `src/features/prediction`,
`src/features/autowall`, `src/features/aim`, `src/features/visual` and
`src/features/movement`, `src/features/hvh`, `src/features/backtrack`, `src/features/lua`, `src/features/account`,
`src/features/config` (which builds both the config and SQLite-decode suites),
`src/features/resolver` and `src/runtime` and runs each self-test. A clean exit
means all sixteen printed `PASS (0 failures)`, including `RENDERER SELFTEST`
and `RUNTIME SELFTEST`. The DLL itself is built separately with `build_dll.bat`
(see `stage-05-runtime.md`).
The runtime suite also prints 24 named descriptor `HOOK PASS` lines (21 `hook`
and 3 `core`) and 23 named handler `HOOK PASS` lines, followed by
`HOOK COVERAGE PASS` with 24/24 descriptor rows (23/23 unique handlers; void rows have no return value). The duplicate ClientMode rows and their shared handler are individually named. **Exclusions: none (0 hooks).** Every one of the 24 descriptor rows is asserted; void-return rows assert ABI shape and argument pass-through because they have no return value.

## Address notation

Addresses are full virtual addresses in the loaded image (base `0x180000000`), not
RVAs, so they can be pasted straight into the disassembler or the corpus index. A
`DAT_180xxxxxx` name is the decompiler's label for a global or constant at that
address; the value is resolved with `node re/tools/consts.js m64.dll <VA>`.
