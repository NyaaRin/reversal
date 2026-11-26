# Skyfall — m64.dll full reverse, staged

Target: `Gmod/Skyfall/m64.dll` — 4,431,360 bytes, PE32+ x64, MSVC 14.50, image base
`0x180000000`. Internally branded **mayrrX64**. Unpacked, no anti-debug imports,
full MSVC RTTI present (159 classes), 60,550 distinct strings.

The goal is complete, readable, maintainable source. That is a large job — the
binary has roughly eleven thousand functions — so it is split into stages that
each produce a usable artifact and can be resumed independently.

Reference documentation lives in `docs/` (`docs/README.md` is the index): the
per-stage sheets are `docs/stage-03.2-weapon-backends.md`,
`docs/stage-03.3-seed-prediction.md`, `docs/stage-03.4-autowall.md`,
`docs/stage-03.5-aim.md`, `docs/stage-03.6-esp.md`, `docs/stage-03.7-movement.md`,
`docs/stage-03.8-hvh.md`, `docs/stage-03.9-backtrack.md`,
`docs/stage-03.10-lua.md`, `docs/stage-03.11-resolver.md`,
`docs/stage-03.12-account-switcher.md` and `docs/stage-03.13-config-ui.md`.

**What "reversed" means here, precisely.** A byte-identical rebuild out of a
stripped binary is not achievable; what is achievable, and what this pipeline
produces, is:

1. every function decompiled with recovered names and call relationships,
2. the class architecture recovered exactly (RTTI gives this for free),
3. each subsystem rewritten as compilable C++ that reproduces its behaviour,
4. all version-dependent addresses moved into a signature/offset database so the
   result survives game updates instead of dying with one build.

Anything short of that would be a pile of `sub_140xxxx` that nobody can maintain.

---

## Status

| # | Stage | Output | Status |
|---|-------|--------|--------|
| 0 | Toolchain + target profile | `re/tools/`, PE profile | **done** |
| 1 | Binary dossier (RTTI, strings, imports, signatures) | `re/dump/*.tsv`, `re/REPORT.md` | **done** |
| 2 | Symbolized decompilation corpus | `re/dump/inventory.tsv`, `re/dump/decompile/` | **done** (full pass 7,591 decompiled / 65 skipped / 2 timeout stubs, both recovered separately: `0x1801d5ef0` renderer and `0x180003f30` config defaults; no timeout stub remains) |
| 3 | Subsystem reconstruction | `src/features/**` | **3.1–3.13 addressed** (3.13 UI-helper source complete; external UI integration remains) |
| 4 | Offset/signature database | `src/offsets/offsets.json` + resolver | **complete; 24 rows / 23 unique interface/slot entries wired and ABI-tested** |
| 5 | Skyfall product (rebrand, auth, build) | `src/`, `build.bat` | **DLL builds and was live-injected in GMod x64; 24/24 descriptor rows installed; menu, ESP, command features and mouse-look restore verified in-game; 16 suites pass** |
| 6 | Loader second GMod option | `Loader/` patch | not started |
| 7 | Behaviour verification | parity checklist | **in progress: live menu, ESP, mouse-look, fullbright and command-feature smoke checks pass; per-feature parity is not complete** |

---

## Stage 0 — Toolchain

Ghidra 12.1.4 headless with JDK 25, both already in `.tools/`. No Python is
installed on this machine, so the tooling is Ghidra Java scripts plus Node for
PE-level parsing.

Scripts in `re/tools/`:

| script | purpose |
|--------|---------|
| `rtti.js` | parses the PE, walks `RTTICompleteObjectLocator`s, rebuilds the class → base-class → vtable map (no decompiler needed) |
| `DumpAll.java` | `inventory` mode: function table, string→function map, imports, memory map, data types. `decompile` mode: resumable per-function C dump |
| `ApplyRTTI.java` | names every virtual method `Class_vfuncNN` from the vtable map so the corpus is navigable |
| `DecompList.java` | decompiles a chosen address list plus callees; optional per-function time budget and 512 MB payload cap, used for the `0x1801d5ef0` and `0x180003f30` recoveries |

## Stage 1 — Binary dossier

Artifacts in `re/dump/`:

* `rtti_classes.tsv` — 159 classes with vtable RVA, base classes, locator RVA.
* `rtti_namespaces.md` — the same grouped by namespace; this is the feature map.
* `strings_all.txt` — all 60,550 strings.
* `strings_tags.txt` — 185 log tag namespaces (`[AS]`, `[LUANET]`, `[ESP]`, …),
  which double as subsystem identifiers because every subsystem logs under its own
  tag.
* `strings_cvars.txt` — 1,581 ConVar names the cheat reads or spoofs.
* `strings_urls.txt` — embedded endpoints.

## Stage 1.1 — Live image verification (ImClass)

`codabro/ImClass` (MIT, release `v1.02-beta`, build 18) is a live-process
ReClass-style viewer; it reads a target with `ReadProcessMemory` and has no
command line. `re/tools/imclass_host.exe` maps `m64.dll` at its preferred base
`0x180000000` without running `DllMain`, so every stored RTTI/vtable value is a
valid VA and the viewer's `mem::rttiInfo` resolves the corpus unchanged.

| Artifact | Purpose |
|---|---|
| `re/tools/imclass_host.cpp` / `.exe` | maps the image at `0x180000000` and idles for attach |
| `re/tools/imclass_dump.cpp` / `.exe` | links ImClass `memory.h`; verifies every class vtable and writes the live table |
| `re/tools/build_imclass_tools.bat` | MSVC build (two local compile fixes in the extracted `memory.h`) |
| `re/tools/open_imclass.bat` | starts the host and the ImClass GUI |
| `re/dump/imclass/rtti_live.tsv` | class, vtable RVA/VA, slot count, slot VAs, live RTTI chain, resolution status |
| `re/dump/imclass/class_index.md` | copy-paste address index for the viewer |
| `re/imclass/README.md` | verified binary hash, method, usage, limits |

Result: **159/159 classes resolve from live memory** — 148 through ImClass's
`mem::rttiInfo`, 11 through a full-length descriptor read because its fixed
60-byte `TypeDescriptor` truncates long names; 0 failures.

## Stage 1.2 — Vtable slots (method level)

`re/tools/gen_vtables.js` walks every slot of every class vtable from the same
mapped image (`imclass_host.exe` + `imclass_dump.exe` + `memdump.exe`, no
`DllMain`, no game process). It runs `imclass_dump.exe`, which links ImClass's
`memory.h` and enumerates each vtable's slots, live RTTI chain and class
ownership through ImClass's `Read<>`/`mem::rttiInfo`; the generator then verifies
that slot list against the mapped image, follows jmp/call-ret thunks and import
stubs, and labels each landing function from string literals, called imports,
exact bytes or a body-derived structural descriptor.

| Artifact | Contents |
|---|---|
| `re/dump/vtables/slots.tsv` | class, base chain, slot, RVA, landing RVA, name/label, confidence, evidence |
| `re/dump/vtables/vtables.h` | per-class structs, `slotNN` in vtable order, compiling TU in `compile_check.cpp` |
| `re/dump/vtables/hierarchy.md` | roots and full base chains, slot counts |
| `re/dump/vtables/shortlist.md` | ranked gameplay classes with justifying evidence |
| `re/dump/vtables/fields.tsv` | field-offset candidates with type/size hint, access slots, via self/callee and origin (self or chain:Base) |
| `re/dump/vtables/field_status.tsv` | all 159 classes: own/inherited/total offsets and the exact reason when total is 0 |
| `re/dump/vtables/symbols.csv` | unique landing RVA to best label, sorted by address |
| `re/dump/vtables/pdb.md` | RSDS GUID/age/vendor path, zero exports, why no PDB exists |
| `re/dump/vtables/structural_diff.md` | current vs stage-disabled structural projection (class/order/slot/RVA/landing) |
| `re/dump/vtables/baseline/` | `slots_pre.tsv` and `vtables_pre.h`, regenerated by `node re/tools/gen_vtables.js --baseline` |
| `re/tools/check_vtables_baseline.js` | independent structural comparison (class/order, slot counts, RVAs, header sequence) |
| `re/tools/audit_vtables.js` | re-derives ImClass rows, evidence citations, placeholder reasons and chain fields |
| `re/tools/build_vtable_check.bat` | `cl /std:c++17 /c` compile check |
| `re/imclass/README.md` | generator method, reproduction, naming limits |

Result: **159 classes, 2177 slots, 0 unresolved** — 26 `symbol` (import stubs),
1412 `strong-inferred` (string literal or exact stub bytes), 432 `weak-inferred`
(callee-derived string/import evidence), 307 `structural` descriptors derived
from the decompiled body (field reads/writes/comparisons, constants, leaf
stubs). 19 slots remain `Class::vfuncNN` and every one carries an
`unresolved-by-tool` evidence row naming the callee count and why no descriptor
applied. All 159 class paths include every multiple-inheritance base path.

Field pass: 1,375 offsets across 136 classes, 197 chain-derived (`origin=chain:<Base>`).
Copies from captured base classes account for 32; the other 165 are
`Features::FeatureBase`, which has no RTTI vtable in the image. Its layout is
inferred from the 26 field-bearing subclasses: an offset present in at least
half of them is marked `via=sibling-inferred n/26` and inherited by siblings
whose bodies never touch it (0x08 25/26, 0x10 20/26, 0x18 20/26, 0x20 14/26). The remaining 23 classes
contain no `param_1 + offset` access anywhere in their virtual bodies, so
`field_status.tsv` records that reason instead of inventing an offset.
`Features::Aimbot::AimbotFeature` has no self access but now carries the four
inherited FeatureBase offsets, with the sibling basis stated in its status row.

Structural proof: `node re/tools/gen_vtables.js --baseline` runs the same
slot/RVA walk with the label, field and chain stages off and writes only
`baseline/slots_pre.tsv` and `baseline/vtables_pre.h`; two baseline runs are
byte-identical. The earlier hand-copied snapshot did not match the switch and
was replaced. The all-stages run compares against the switch output and
`re/tools/check_vtables_baseline.js` independently verifies class set/order,
per-class slot counts, direct and resolved landing RVAs and the `vtables.h`
struct/slot sequence. Both projections hash to `99e848…9e48`; only labels,
evidence, chain text, field comments and confidence change. Two consecutive
all-stage runs diff byte-identically across all twelve generated artifacts.
`audit_vtables.js` re-derives all 2,177 ImClass citations, the body/byte/import/
callee/structural citations, all 19 placeholder reasons and all 197 chain-field
rows from `re/dump` and the DLL.

## Stage 2 — Symbolized decompilation corpus

`inventory.tsv` gives every function with size, caller count, and the strings it
references. The string column is what identifies an unnamed function: a function
that logs `[SWCS-NS] inacc=%.5f...` is the SWCS no-spread path, no guessing
required.

`decompile/` then holds one `.c` per function, named `0xADDR_Class_method.c`,
resumable (existing files are skipped, so an interrupted run is restarted with
the same command).

## Stage 3 — Subsystem reconstruction

Ordered by dependency, not by size. Each becomes a directory under `src/features/`
with real, compilable C++ and the decompiled evidence cited in comments.

**3.1 no-spread + compensation is complete** in `src/features/nospread/`:
`swcs_spread.h` (seed fold, inaccuracy, spread, cone), `compensation.h`
(3-pass angular solve), `angle.h`, `md5.h`, and `selftest.cpp`, which builds and
passes (`build.bat`). Recovered constants and the evidence map are in that
directory's `README.md`.

### Stage 3.2 — FINAL

**Status: complete.** Every one of the 11 distinct `vfunc04` bodies has its own
implementation in `src/features/weapon/backends.h`; nothing falls back to the
generic sampler, and no body carries a placeholder fidelity label. The per-backend
fidelity map and the surviving-inferred table live in
`src/features/weapon/README.md`.

Artifacts:

| Artifact | Contents |
|----------|----------|
| `src/features/weapon/backend_table.h` | all 22 backends: observed base name, observed `vfunc04` address, `BackendKind`, traced `Entropy` source; 22 classes → 11 distinct bodies |
| `src/features/weapon/weapon_backend.h` | `IWeaponBackend` (`vfunc00` base name, `vfunc04` three-float out: yaw, pitch, `deltaZ`), `WeaponProfile`, `ApplyOffsetToAngles` |
| `src/features/weapon/backends.h` | one class per distinct body: generic, CW, no-op, SWCS, ARC9, ArcCW, TacRP, TFA, UTSWB, Z-City, ZS, plus `MakeBackend` |
| `src/features/weapon/README.md` | eleven-body fidelity map with `_INDEX.tsv` rows, contract, observed constants, surviving-inferred table |
| `src/features/seed/seed_chain.h` | `CommandSeed`, `PredictionSeed`, `SpreadSeed`, `RandomStream` |
| `src/features/seed/random_ran1.h` | observed `ran1` generator from `0x180083d00` |
| `src/features/shot/shot_pipeline.h` | `FireShot`: seed chain → owning backend → compensated command |
| `src/features/shot/selftest.cpp` | non-degeneracy proof (see below) |

Evidence read in full for this stage. `L####` is the row in
`re/dump/decompile/_INDEX.tsv` for that file:

| Address | File (`re/dump/decompile/`) | `_INDEX.tsv` | What it established |
|---------|------|------|---------------------|
| `0x1800779c0` | `0x1800779c0_vfunc_shared_1800779c0.c` | L1156 | generic cone sampling: two uniforms per axis, unit-disc rejection, 16 attempts |
| `0x180079040` | `0x180079040_vfunc_shared_180079040.c` | L1172 | CW-family body: spread from `vtable+0x100`, `0.85f` (`0x180380b4c`) when flags bit 1, `[-spread,+spread]` via `0x80000000` flip, output `×25.0f` (`0x18038103c`), Lua-seeded sampler `0x180078520` |
| `0x1800779b0` | `0x1800779b0_vfunc_shared_1800779b0.c` | L1155 | Octo body: unconditional zero output, no compensation path |
| `0x1800860c0` | `0x1800860c0_Features_Weapons_Backends_SWCSWeaponBackend_vfunc04.c` | L1276 | SWCS compensation entry, three-pass refinement |
| `0x180088980` | `0x180088980_Features_Weapons_Backends_ARC9WeaponBackend_vfunc04.c` | L1298 | ARC9: ranges `750` (`0x180381268`), `9999` (`0x1803812a8`), trace limit `56756` (`0x1803812d4`); three refinement passes |
| `0x180082ed0` | `0x180082ed0_Features_Weapons_Backends_ArcCWWeaponBackend_vfunc04.c` | L1253 | ArcCW: seed rebuilt via Lua chain `0x180082310`, cone bound `10.0f` (`0x180380fcc`), three-float out |
| `0x18008bdf0` | `0x18008bdf0_Features_Weapons_Backends_TacRPWeaponBackend_vfunc04.c` | L1322 | TacRP: `sqrt(3)/π` and `−1/π` cone model, `50.911686` scale, three `0x18008bb60` passes |
| `0x18007fdb0` | `0x18007fdb0_Features_Weapons_Backends_TFAWeaponBackend_vfunc04.c` | L1242 | TFA: Lua `ComputeBulletDeviation`, bounds `15.0f` (`0x180380fe4`), epsilon `0.0001f`, Rodrigues `0x18007fc10` |
| `0x18007c0e0` | `0x18007c0e0_Features_Weapons_Backends_UTSWBWeaponBackend_vfunc04.c` | L1195 | UTSWB: distance falloff, flag scaling, `×25.0f`, `atan` corrections, CW delegation |
| `0x18009ebc0` | `0x18009ebc0_Features_Weapons_Backends_ZCityWeaponBackend_vfunc04.c` | L1420 | Z-City: `32768.0f` is a fixed-point denominator, gain `1.5f`, epsilon `1e-6f` |
| `0x180092570` | `0x180092570_Features_Weapons_Backends_ZSWeaponBackend_vfunc04.c` | L1357 | ZS: command-number mismatch early-out, `tan(pitch)` cone, `0.05f` dead zone, clamps `2.0f`/`2.0f` |
| `0x180083d00` | `0x180083d00_FUN_180083d00.c` | L1262 | draw helper: `ran1` (Park–Miller `0x41a7`/`0x1f31d`, 39-step warm-up, 32-entry shuffle, `NDIV = 2^26`) |
| `0x1800859c0` | `0x1800859c0_FUN_1800859c0.c` | L1275 | inaccuracy/spread draws, MD5 seed fold, squeeze constants |
| `0x180015e50` | `0x180015e50_FUN_180015e50.c` | L162 | command seed: MD5 of the 4-byte command number, digest-word extraction |
| `0x180024f00` | `0x180024f00_FUN_180024f00.c` | L345 | prediction seed write, `& 0x7fffffff`, `vstdlib!RandomSeed`, 62-tick guard |
| `0x180078520` | `0x180078520_FUN_180078520.c` | L1165 | CW draw: `randomseed` + `math.random(min,max)` through `lua_pcall` |
| `0x18007af40` | `0x18007af40_FUN_18007af40.c` | L1188 | shared Lua `math.random` harness used by UTSWB |
| `0x180082b40` | `0x180082b40_FUN_180082b40.c` | L1252 | ArcCW disc: `math.random(0,1)` radius, `math.random(0,2π)` angle |
| `0x180082310` | `0x180082310_FUN_180082310.c` | L1251 | ArcCW's own seed chain through Lua |
| `0x1800880b0` | `0x1800880b0_FUN_1800880b0.c` | L1296 | ARC9 initial deviation: Lua global `SharedRandom`, per-pellet weights |
| `0x1800886c0` | `0x1800886c0_FUN_1800886c0.c` | L1297 | ARC9 refinement: four seed-keyed bound pairs, else triangular `RandomFloat(-0.5,0.5)` |
| `0x180086fc0` | `0x180086fc0_FUN_180086fc0.c` | L1289 | ARC9 validity predicate (mode field `+0x48`), not a draw |
| `0x18008bb60` | `0x18008bb60_FUN_18008bb60.c` | L1321 | TacRP refinement: triangular bounds, scaled by cone |
| `0x18007fc10` | `0x18007fc10_FUN_18007fc10.c` | L1241 | TFA Rodrigues rotation (deg→rad `0x180380994`) |
| `0x18009a610` | `0x18009a610_FUN_18009a610.c` | L1408 | Z-City deterministic side rotation, fixed-point `32768` |
| `0x18008b270` | `0x18008b270_FUN_18008b270.c` | L1318 | Rodrigues rotation helper used by the TacRP cluster |
| `0x180083ef0` | `0x180083ef0_vfunc_shared_180083ef0.c` | L1263 | SWCS base name literal (`"SWCS"`) |

**Verified by `build.bat`** (exit 0, 0 errors, 0 warnings):

* 22 backends, 11 distinct `vfunc04` bodies, and `DistinctBodyCount() == 11`;
* every body yields a distinct correction pair for the same command number, and
the pairwise assertions (generic vs CW, generic vs SWCS, generic vs ARC9, CW vs
SWCS, SWCS vs ArcCW, ARC9 vs TacRP, TFA vs UTSWB, Z-City vs ZS) all differ — the
dispatch cannot pass by running one shared sampler;
* one shot per body family resolves command -> seed -> spread -> compensated
command and lands within 0.01 deg (residual 0.00000-0.00001); Octo's no-op leaves
the command untouched;
* `ran1` determinism and `[0,1)` normalization; seed stability, the 31-bit
prediction mask and the separate decimal-text spread seed.

`nospread`'s `SELFTEST` still prints `PASS (0 failures)` alongside
`SHOT SELFTEST PASS (0 failures)`.

Every body's draw was traced to its termination. Three bodies are deterministic
(Z-City `0x18009a610`, ZS `0x180092570`, ARC9's seed-keyed bias pairs), five hand
the sample to a generator outside the image (CW/ArcCW/UTSWB → LuaJIT
`math.random`; ARC9 initial → Lua `SharedRandom`; TFA → Lua
`ComputeBulletDeviation`), and two use the engine's `RandomFloat` for their
refinement bounds (`0x1800886c0`, `0x18008bb60`). The five external cases are
listed per backend in `src/features/weapon/README.md` under "Surviving inferred
items / draws that leave the image", each with the `.c` file, its `_INDEX.tsv` row,
the address checked and why the generator is not in this image; their bounds,
ordering, scaling and refusals are reproduced.

No placeholder fidelity label remains: `Entropy` in `backend_table.h` is the only
classification, it is evidence-based, and the self-test asserts it per family.

Interface correction found while tracing: vfunc04 writes **three** floats (yaw,
pitch, z of the direction delta), not two, and UTSWB delegates to the CW body when
its flag byte is zero. Both are implemented in `weapon_backend.h` / `backends.h`.

### Stage 3.3 — FINAL

**Status: complete.** The seed/prediction path is reconstructed in
`src/features/prediction/prediction.h` and tested by
`src/features/prediction/selftest.cpp` (built and run by `build.bat`).

| Artifact | Contents |
|----------|----------|
| `src/features/prediction/prediction.h` | `PredictionHook` (begin/end), `MapCommandToTick` with the 62-tick bound, `ResolveSeedPointer`, `MoveHelper` |
| `src/features/prediction/selftest.cpp` | seed mask, pattern shape, pointer resolution, tick guard, restore |
| `docs/stage-03.3-seed-prediction.md` | reference sheet: globals, pattern, guard, restore order |

| Address | File (`re/dump/decompile/`) | `_INDEX.tsv` | What it established |
|---------|------|------|---------------------|
| `0x180024f00` | `0x180024f00_FUN_180024f00.c` | L345 | begin: pattern scan for `m_pPredictionRandomSeed`, `CommandSeed & 0x7fffffff`, `vstdlib!RandomSeed`, 62-tick extrapolation |
| `0x180025360` | `0x180025360_FUN_180025360.c` | — | end: restore saved seed and the engine time block at `+0x10`/`+0x18` |
| `0x18001dfb0` | `0x18001dfb0_FUN_18001dfb0.c` | — | predicted tick source: `DT_BasePlayer::m_nTickBase` |
| `0x180017150` | `0x180017150_FUN_180017150.c` | — | `CMoveHelperClient` resolved by RTTI into `DAT_1803fa5a0` |

Verified by `build.bat`: `PREDICTION SELFTEST PASS (0 failures)` — the seed written
to the slot equals the seed handed to the reseed callback, pointer resolution equals
`match + 0xf + disp`, and the tick map reproduces the 63/64 boundary plus the
baselines staying put on the extrapolating path.

3.3 residual pass: the four constants in step 10 are config keys, not integrity
hashes. `0x180241610` is a 36-byte nested-map lookup (`FUN_180241a30` node walk +
`*node+0x28`); `0x1801fcfc0` / `0x1802029c0` are the `std::any` casts. The first
pair is the shared backtrack gate; the second is the prediction-patch enable flag.
The self-test asserts all four constants plus the lookup/cast addresses. The only
remaining check is the byte match against `client.dll`, which is absent from the
workspace (`find . -iname client.dll` returns nothing); the pattern shape and
resolution arithmetic are proven against a synthetic image.

### Stage 3.4 — FINAL

**Status: complete.** All eleven `Features::Autowall::*` classes and the three
trace filters are reconstructed in `src/features/autowall/` and exercised by
`src/features/autowall/selftest.cpp`.

| Artifact | Contents |
|----------|----------|
| `src/features/autowall/trace_filter.h` | `CTraceFilter`, `CDoubleTraceFilter`, `CTripleTraceFilter` with observed slot addresses and predicates |
| `src/features/autowall/penetration.h` | `Refusal` enum + string table, `TraceResult`, `Penetrate()` loop, `FalloffAfterWall`, `ClampLayerCount` |
| `src/features/autowall/models.h` | all eleven model classes, vtable slots 0..4, per-model Lua keys, `FindModel` / `MakeAutowallModel` |
| `src/features/autowall/selftest.cpp` | filters, reasons, clamps, falloff monotonicity, loop behaviour |
| `docs/stage-03.4-autowall.md` | reference sheet: evidence, loop, reasons, filter contract, constants, assumptions |

| Address | File (`re/dump/decompile/`) | `_INDEX.tsv` | What it established |
|---------|------|------|---------------------|
| `0x1800ad340` | `0x1800ad340_FUN_1800ad340.c` | L1520 | the penetration loop: distance budget, modifier clamp, layer accounting |
| `0x1800ae2d0` | `0x1800ae2d0_FUN_1800ae2d0.c` | L1522 | decision wrapper and the hit/miss log lines |
| `0x1800aced0` | `0x1800aced0_FUN_1800aced0.c` | L1515 | the ten refusal reason strings |
| `0x1800ad020` | `0x1800ad020_FUN_1800ad020.c` | L1518 | layer count clamped to `[1,4]` |
| `0x1800acfc0` | `0x1800acfc0_FUN_1800acfc0.c` | L1517 | damage floor read |
| `0x1800acf70` | `0x1800acf70_FUN_1800acf70.c` | L1516 | feature-enabled read |
| `0x1800996a0` | `0x1800996a0_FUN_1800996a0.c` | L1402 | Lua penetration callback (`Penetration`, `Damage`, `noricochet`) |
| `0x180020020` | `0x180020020_CTraceFilter_vfunc00.c` | L282 | single-entity filter predicate |
| `0x180020030` | `0x180020030_CDoubleTraceFilter_vfunc00.c` | L283 | two-entity filter predicate |
| `0x180020050` | `0x180020050_CTripleTraceFilter_vfunc00.c` | L284 | three-entity filter predicate |

Verified by `build.bat`: `AUTOWALL SELFTEST PASS (0 failures)` — eleven models
routed and slot-checked, filter accept/reject for all three filters, all ten reason
strings, layer clamp `[1,4]`, modifier clamp to `8192`, falloff monotonic in both
legs, and loop outcomes for no-geometry, clear line, zero budget, one wall, thicker
wall and two-layer budget.

3.4 residual pass: `0x180241610` is a lookup, not a hash. CW20/SWB (`0x1800b0bd0`,
338 B) read `PenStr`, `PenMod`, `PenetrativeRange`, `CanPenetrate`, `Damage`;
FAS2 (`0x1800b10e0`, 281 B) reads `PenStr`, `PenMod`, `PenetrationEnabled`,
`Damage`; Homigrad's slot 3 is the empty stub. The `6.0f` at `0x180380f40` is a
six-unit target proximity tolerance at `0x1800ad340` lines 329/334, not a divisor.
The self-test asserts the key sets and the lookup addresses. Surface index and
material remain engine-database values (writer/readers enumerated in the sheet);
they are runtime inputs, not unreconstructed bodies.

| # | Subsystem | Classes / evidence | Notes |
|---|-----------|--------------------|-------|
| 3.1 | **No-spread + compensation** | `Features::Nospread::NospreadFeature`, `[SWCS-NS]`, `[ARC9-NS]`, `[TacRP-NS]`, `[ZS-SHOT]`, `[NS-SEED]`, `[NS-VERIFY]`, `[NVR-PUNCH]` | **complete** — `src/features/nospread/` |
| 3.2 | Weapon backends | 22 `Features::Weapons::Backends::*` classes | **complete** — `src/features/weapon/`, `docs/stage-03.2-weapon-backends.md` |
| 3.3 | Seed / prediction | `[PRED]`, `[NS-SEED]`, `predictionRandomSeed`, `MoveHelper` | **complete** — `src/features/prediction/`, `docs/stage-03.3-seed-prediction.md` |
| 3.4 | Autowall | 11 `Features::Autowall::*` classes, `CTraceFilter`/`CDoubleTraceFilter` | **complete** — `src/features/autowall/`, `docs/stage-03.4-autowall.md` |
| 3.5 | Aimbot / rage / trigger | `AimbotFeature`, `RageAimFeature`, `TriggerbotFeature`, `[AIM-*]` | **complete** — `src/features/aim/`, `docs/stage-03.5-aim.md` |
| 3.6 | ESP / visuals | `Features::Visual::ESP::Editor::Elements::*`, `CGhostEntityListener`, `ChamsGlowFeature` | **complete** — `src/features/visual/`, `docs/stage-03.6-esp.md` (renderer `0x180174130` recovered; all bodies closed) |
| 3.7 | Movement | `BunnyHop`, `Autostrafe`, `EdgeJump`, `JumpBug`, `FakeDuck`, `Airstuck`, `Speedhack`, `MoveFix` | **complete** — `src/features/movement/`, `docs/stage-03.7-movement.md` |
| 3.8 | HVH | `AntiAimFeature`, `ResolverFeature`, `LagCompFeature`, `VisualizeFeature` | **complete** — `src/features/hvh/`, `docs/stage-03.8-hvh.md` (all four residuals closed) |
| 3.9 | Backtrack / lag | `BacktrackFeature`, `[BT*]`, `FakeLagFeature` | **complete** — `src/features/backtrack/`, `docs/stage-03.9-backtrack.md` (no open items) |
| 3.10 | Lua engine | `[LUANET]`, `[LUASTACK]`, `[LUAHOOKS]`, `[LUAEDITOR]`, `[LUAFEAT]` | **complete** — `src/features/lua/`, `docs/stage-03.10-lua.md` (40 tagged bodies + 48 registered reader/companion callees reversed) |
| 3.11 | Interface / netvar resolution | `[IFACE]`, `[VMT]`, `[PAT]`, `[NETVARS]`, `[NWSTORE]` | **complete** — `src/features/resolver/`, `docs/stage-03.11-resolver.md` (12 of 12 tagged bodies reversed) |
| 3.12 | Account switcher | `AccountSwitcherFeature`, `[AS]` (27 tagged bodies) | **complete** — `src/features/account/`, `docs/stage-03.12-account-switcher.md` (persistence, DPAPI vault, deploy, engine ticket cache, UI) |
| 3.13 | Config / UI | `Features::Sqlite`, `TextEditor`, imgui, `[CFG]` | **Status: renderer entry point compiled and runtime-wired; full binary/in-game parity remains.** Config/SQLite decoding complete; implementation split: 38 provided (30 ImGui-core + 8 MSVC STL), 45 reconstructed, 0 missing; 0x1801d5ef0 is translated in src/features/renderer/renderer.cpp and called from the stage-6 FrameStageNotify path via renderer_runtime.cpp. Engine/Lua/SQLite operations use explicit typed host callbacks listed in the dependency map. The current build runs 16 suites. — `src/features/config/`, `src/features/renderer/`, `third_party/imgui/`, `docs/stage-03.13-config-ui.md` (528-key engine, `last_config.txt`, full decoder, validation/wipe; map at `re/dump/renderer/DEPENDENCIES.md`) |

### Stage 3.5 — FINAL

**Status: complete.** The three targeting classes are reconstructed in
`src/features/aim/` and exercised by `src/features/aim/selftest.cpp`.

| Artifact | Contents |
|----------|----------|
| `src/features/aim/targeting.h` | gate chain, scoring, sticky-target hysteresis, list caps, FOV clamp |
| `src/features/aim/smoothing.h` | aim-step interpolation, accumulator, snap distance, pitch wrap |
| `src/features/aim/triggerbot.h` | trace confirmation, hold delay, jitter, burst limit, cooldown |
| `src/features/aim/aim_feature.h` | `AimbotFeature`, `RageAimFeature`, `TriggerbotFeature`, per-tick glue, log strings |
| `docs/stage-03.5-aim.md` | evidence, selection model, gate table, smoothing, trigger timing, constants, assumptions |

| Address | File (`re/dump/decompile/`) | `_INDEX.tsv` | What it established |
|---------|------|------|---------------------|
| `0x1800cfb30` | `0x1800cfb30_FUN_1800cfb30.c` | L1819 | picker: dedupe caps 10/3, sticky target, angle output |
| `0x1800cef20` | `0x1800cef20_FUN_1800cef20.c` | L1816 | candidate collection over players, backtrack ring and other entities |
| `0x1800cf820` | `0x1800cf820_FUN_1800cf820.c` | L1817 | scoring, threshold, locked-target key discount |
| `0x1800c5030` | `0x1800c5030_FUN_1800c5030.c` | L1756 | the gate chain and its seven config keys |
| `0x1800c4a70` | `0x1800c4a70_FUN_1800c4a70.c` | L1753 | aim point: shoot pos, eye pos, simtime, origin |
| `0x1800ce2c0` | `0x1800ce2c0_FUN_1800ce2c0.c` | L1809 | FOV read, `[0,180]` clamp |
| `0x1800d1750` | `0x1800d1750_FUN_1800d1750.c` | L1822 | per-tick order: collect, pick, smooth, clamp, log |
| `0x1800d0b60` | `0x1800d0b60_FUN_1800d0b60.c` | L1820 | smoothing step, accumulator, snap, easing |
| `0x1800d1180` | `0x1800d1180_FUN_1800d1180.c` | L1821 | `[AIM]` diagnostics and hitgroup names |
| `0x1800e2580` | `0x1800e2580_Features_Triggerbot_TriggerbotFeature_vfunc02.c` | L1918 | triggerbot trace, hold, burst, cooldown |
| `0x1800cb010` | `0x1800cb010_Features_Aimbot_AimbotFeature_vfunc16.c` | L1799 | Aimbot teardown over 64 per-player records |
| `0x1800d64c0` | `0x1800d64c0_Features_RageAim_RageAimFeature_vfunc16.c` | L1844 | RageAim teardown and `cl_lagcompensation` restore |
| `0x1800d5310` | `0x1800d5310_Features_RageAim_RageAimFeature_vfunc02.c` | L1843 | RageAim tick |

Verified by `build.bat`: `AIM SELFTEST PASS (0 failures)` — 94 assertions over the
angular metric, sticky threshold and window, every gate refusal, key ordering and
the two discounts, list caps, FOV accept/reject and range drop, monotone smoothing
convergence and snap, smoothing dependence on the configured value, triggerbot
delay/fire/burst/cooldown/weapon-block/disable, and the three observed feature
addresses.

Correction recorded this stage: the `[AIM-*]` tags are backtrack/pose logging
(`0x1800c6c50`, `0x1800cbbd0`, the SEH wrapper at `0x1802e3ae6`), not the aimbot's
own lines. The aim path prints `[AIM]` and `[AIM DIAG]` only.

3.5 residual pass: `0x1800d0b60`'s frame step is proven by disassembly to be
`clamp(dt, 0.0005, 0.05)`. `0x1800ce630` is the picker metric: max cosine to three
points via `0x1800cb220` (invalid -> `-2`), segment closest-point correction, then
`acos * 180/pi`; invalid input returns `FLT_MAX`, not 180. The inline hypot form is
only a diagnostic. `0x1800c4900` returns the sticky threshold, not a penetration
value. The three curve keys are lower bound, upper bound and scale; the shared
`0x9653fa4f0c4e1755` is the triggerbot randomisation flag that RageAim restores.
The self-test asserts the metric, threshold roles and frame-step bounds. CRT
`rand` remains external state, with all six call sites and ranges recorded.

The remaining 3.3/3.4 limitations do not block the completed reconstruction but
are recorded here: the pattern scan is validated against a synthetic image, the
four 64-bit integrity constants are unmapped, surface index/material remain
runtime stand-ins, the `6.0f` at `0x180380f40` is unreduced, the
CW20/FAS2/Homigrad/SWB parameter source is unconfirmed, and `0x180241610` is not
reconstructed. All old categories 3.1–3.12 are complete; Stage 3.13's UI-helper
source is complete with its external UI integration boundary recorded, and the
later product stages are tracked separately below.

### Stage 3.6 — FINAL

**Status: complete.** The visual subsystem is reconstructed in
`src/features/visual/` and exercised by `src/features/visual/selftest.cpp`.
The paint-path element renderer is the recovered corpus body `0x180174130`, called
from the entity loop through `0x180196380` -> `0x18018b900` -> `0x180174130`;
the former "absent renderer" item was a wrong-address search, not a missing file.

| Artifact | Contents |
|----------|----------|
| `src/features/visual/layout.h` | anchor placement from `0x180169260`, all thirteen cases, offset tail, free-anchor scale |
| `src/features/visual/elements.h` | the eight element classes, their config fields, bbox styles, colour resolution, draw sink and layout-order dispatch |
| `src/features/visual/glow.h` | `ChamsGlowFeature` tick, glow keys, style/blur/sharp, chams material fallbacks |
| `src/features/visual/ghost.h` | `CGhostEntityListener` registration, unregistration, removal classification — the real `[ESP]` owner |
| `docs/stage-03.6-esp.md` | tag ownership proof, element vtables, recovered renderer chain, anchor table, constants, closed items |

| Address | File (`re/dump/decompile/`) | `_INDEX.tsv` | What it established |
|---------|------|------|---------------------|
| `0x180169260` | `0x180169260_vfunc_shared_180169260.c` | L2775 | anchor placement shared by all eight elements |
| `0x180174130` | `0x180174130_FUN_180174130.c` | L2869 | paint-path element renderer: list walk, placement, per-kind draw dispatch |
| `0x18018b900` | `0x18018b900_FUN_18018b900.c` | L2938 | per-player bounds/scale setup; calls the renderer |
| `0x180196380` | `0x180196380_FUN_180196380.c` | L2984 | paint-path entity loop; calls the per-player path |
| `0x180169760` | `…BoxElement_vfunc04.c` | L2780 | box colour/rounding/filled/thickness |
| `0x18016aa90` | `…BBoxElement_vfunc04.c` | L2794 | four bbox styles, protected and outline colours |
| `0x18016d2d0` | `…TextElement_vfunc04.c` | L2830 | text colour-by-job, shadow, text buffer |
| `0x18016ccc0` | `…TextElement_vfunc10.c` | L2827 | colour resolution, job colour divided by 255 |
| `0x1801768e0` | `0x1801768e0_FUN_1801768e0.c` | L2885 | layout order serialised as `esp.count` |
| `0x18010cc70` | `…ChamsGlowFeature_vfunc05.c` | L2210 | glow style, blur/sharp, through-walls, toggle log (`off`/`ON`) |
| `0x1800207e0` | `0x1800207e0_FUN_1800207e0.c` | L290 | world-to-screen: `w` divide, `w` guard `0.001`, `0.5` screen transform |
| `0x180021be0` | `0x180021be0_FUN_180021be0.c` | L304 | near-plane clip at `0.0099999`, then project both ends |
| `0x1800e46b0` | `0x1800e46b0_FUN_1800e46b0.c` | L1929 | Lua binding `ToScreen` |
| `0x180191fa0` | `0x180191fa0_FUN_180191fa0.c` | L2968 | stream-out grace `0xfa` = 250 ms |
| `0x180106ec0` | `0x180106ec0_FUN_180106ec0.c` | L2178 | chams material resolution |
| `0x1801913f0` | `0x1801913f0_FUN_1801913f0.c` | L2963 | `[ESP]` listener registration |
| `0x180192700` | `0x180192700_FUN_180192700.c` | L2971 | `[ESP]` removal classification |

### Stage 3.7 — FINAL

**Status: complete.** The movement family is reconstructed in
`src/features/movement/` and exercised by `src/features/movement/selftest.cpp`.

| Artifact | Contents |
|----------|----------|
| `src/features/movement/cmd.h` | `UserCmd` offsets (`+0x0c`, `+0x14`, `+0x1c`, `+0x20`), `IN_JUMP`/`IN_DUCK`, the Airstuck `0x61e` mask |
| `src/features/movement/features.h` | all eight feature classes with their vtable RVAs, tick addresses, config keys and constants |
| `docs/stage-03.7-movement.md` | evidence tables, per-feature behaviour, the recovered log strings, open items |

| Address | File (`re/dump/decompile/`) | What it established |
|---------|------|---------------------|
| `0x1800c2e90` | `0x1800c2e90_Features_BunnyHop_BunnyHopFeature_vfunc02.c` | grounded/rising early-out, `& ~2` on `+0x20` |
| `0x1800c3bc0` | `0x1800c3bc0_Features_EdgeJump_EdgeJumpFeature_vfunc02.c` | `\| 2`, fire counter, log cap `0xb`, `[EDGEJUMP]` format |
| `0x180106b80` | `0x180106b80_Features_JumpBug_JumpBugFeature_vfunc02.c` | `\| 4` / `& ~2` on a failed jump, `[JUMPBUG]` formats, duck-time source |
| `0x180105310` | `0x180105310_Features_FakeDuck_FakeDuckFeature_vfunc01.c` | crouch state at `player + 0x20`, `| 4` / `& ~4`, bevel zero |
| `0x18013fa40` | `0x18013fa40_Features_Airstuck_AirstuckFeature_vfunc02.c` | interval 250 ms floor 120 step 25 cap 3000, `& 0xfffff9e1`, `[AIRSTUCK]` |
| `0x180140920` | `0x180140920_Features_Speedhack_SpeedhackFeature_vfunc02.c` | factor gates 0.0/3.0 and fallbacks 0.05/3.0, `[SPEED]` format |
| `0x1800e2040` | `0x1800e2040_Features_MoveFix_MoveFixFeature_vfunc02.c` | delegation to `0x1800e1d50`, cos/sin basis at delta and delta+90 |
| `0x1800e1280` | `0x1800e1280_Features_Autostrafe_AutostrafeFeature_vfunc01.c` | root `0x2deb6b899a38d4e8`, class-2 / move-type gate, atan2 × 57.295776, mode branches |
| `0x1801056f0` | `0x1801056f0_FUN_1801056f0.c` | `m_flDucktime` read used in the JumpBug diagnostic |

3.7 residual pass: Autostrafe's branches are reconstructed in the sheet (mode 0
command path, mode 2 low/high speed, mode 1 asin path, aux/counter paths) with
the exact keys and constants. The atan2 scale is **57.295776** (`0x1803810bc`);
`0x180381298` = **7500.0** and `0x18038143c` = **-7500.0** are command move units.
`SetMoveAngle` reproduces `0x1800e1c60`. The Autostrafe token is registered as a
child of the shared root at `0x1801aaa70`/`0x1801b2830`. `DAT_1803db430` is an
8-byte pointer to a one-byte latch, with all four references recorded. No combined
mover exists in the corpus (zero callers for all eight ticks).

### Stage 3.8 — FINAL

**Status: complete, no open items.** The HVH family is reconstructed in
`src/features/hvh/` and exercised by `src/features/hvh/selftest.cpp`. The
Visualize body, the AntiAim yaw modes 3/7/8/9 and desync state, the LagComp
failure string, and the resolver cache extent are all closed against the dump.

| Artifact | Contents |
|----------|----------|
| `src/features/hvh/antiaim.h` | gate chain, pitch modes 1–4, yaw modes 1–9 including mode 3 and the 7/8/9 body path, desync state offsets/widths, jitter clamp, cooldown log |
| `src/features/hvh/resolver.h` | two passes, alive-cache edges, `0x81 × 0x168` cache bounds, slot-11 local-only rule |
| `src/features/hvh/lagcomp.h` | interp abuse save/restore, eight attempts, exact failure string, verbatim `[LAGCOMP]` logs |
| `src/features/hvh/visualize.h` | slot-6 body, four section gates and their keys, projection wrapper, colors, loop caps; `kBodyRecovered = true` |
| `docs/stage-03.8-hvh.md` | addresses, full mode/desync tables, Visualize body, cache bounds, string bytes, reuse map |

| Address | File (`re/dump/decompile/`) | What it established |
|---------|------|---------------------|
| `0x1800bdd80` | `0x1800bdd80_Features_HVH_AntiAim_AntiAimFeature_vfunc02.c` | AA gate chain, pitch `±89`/`-89`, yaw modes 1–9, mode 3 clamp `[1,18]`, 7/8/9 body path, `[AA-DESYNC]`, `[AA-COOLDOWN]` |
| `0x1800bd8d0` | `0x1800bd8d0_FUN_1800bd8d0.c` | body-offset source: velocity magnitude, interval, `0x1800b1de0`, batch latch |
| `0x1800bd7e0` / `0x1800bd570` / `0x1800bd320` | `0x1800bd7e0_FUN_1800bd7e0.c` / `0x1800bd570_FUN_1800bd570.c` / `0x1800bd320_FUN_1800bd320.c` | direction toggle, ±35-unit/20° cone probe, 12-tick alternator |
| `0x1800bc790` | `0x1800bc790_Features_HVH_Resolver_ResolverFeature_vfunc16.c` | cache initializer: `0x1805610f0` → `0x18056c658`, `0x81 × 0x168` |
| `0x1800bc9e0` | `0x1800bc9e0_Features_HVH_Resolver_ResolverFeature_vfunc01.c` | two passes, `[slot*0x168]` cache, `0x1800b5be0`/`0x1800b8740`/`0x1800b8c50` |
| `0x1800bcc10` | `0x1800bcc10_Features_HVH_Resolver_ResolverFeature_vfunc11.c` | slot-11 aim-record fix for the local player only |
| `0x1800c0db0` | `0x1800c0db0_Features_HVH_LagComp_LagCompFeature_vfunc01.c` | `cl_interp` 0.5 / ratio 5.0, save+restore, eight attempts, `[LAGCOMP]`, failure string `0x18034c310` (97 B, site `0x1800c1034`) |
| `0x1800bf160` | `0x1800bf160_Features_HVH_Visualize_VisualizeFeature_vfunc06.c` | slot-6 body: panic gate, box/LBY/player/skeleton sections, projection `0x180021ac0`, four gate keys, verbatim label strings |

**Attribution corrections:** the `[VIS]`/`[VIS-INIT]` strings belong to
`0x1801e9960`/`0x1801e97c0`, not to `VisualizeFeature`; the `[RESOLVER]` strings
belong to `0x1800bb8a0`, `0x1800bbcc0`, `0x1800bc110` and `0x1800bc360`, not to the
resolver slot bodies. `0x237bcfbdef3b6800` + `0x402819404e703058` is shared with
Stages 3.5/3.7 and is not re-derived here.

**Open after 3.8:** none. Yaw modes 3/7/8/9, `0x18034c310`, `DAT_180561252`
(cache `0x1805610f0`–`0x18056c658`, `0x81 × 0x168`) and every desync state field
are closed; `0x1800bf160` and its gates remain closed. Stages 3.3–3.7 are outside
this stage; their residual sections carry the final state.

### Stage 3.9 — FINAL

**Status: complete, no open items.** 25 distinct bodies (five tagged; two
extrapolation helpers; eleven timing queries including `0x1800c6530`; six
shift/validator predicates; the ring grow and sentinel constructor), 24
referenced strings, the lazy batch ring and both `DAT_1803fac40` containers are
reconstructed in `src/features/backtrack/` and tested by
`src/features/backtrack/selftest.cpp`.

| Artifact | Contents |
|----------|----------|
| `src/features/backtrack/records.h` | record/batch layouts, shared gate, capture dedupe, proximity invalidation, shift window, compaction, extrapolate restore, every resolved body address/size, timing constants, string table, ring growth and container extents |
| `docs/stage-03.9-backtrack.md` | addresses, sizes, control flow, constants, verbatim `[BT*]` strings with sites, reuse map, data-object extents, empty open list |

| Address | File (`re/dump/decompile/`) | What it established |
|---------|------|---------------------|
| `0x1800c9910` | `0x1800c9910_Features_Backtrack_BacktrackFeature_vfunc02.c` | per-player capture, dedupe counters, batch ring, 4096 proximity, `[BT]`/`[BT-CLOSED]` |
| `0x1800c9640` | `0x1800c9640_Features_Backtrack_BacktrackFeature_vfunc01.c` | span compaction, `0x1800c93d0` extrapolation, record store pointer |
| `0x1800c95d0` | `0x1800c95d0_Features_Backtrack_BacktrackFeature_vfunc16.c` | `cl_extrapolate` restore to `"1"`/`"0"` |
| `0x1800c7470` | `0x1800c7470_FUN_1800c7470.c` | `[BT-LSAC]` shift state machine, called by the recorder at `0x1800c9a24` |
| `0x1800c6530` | `0x1800c6530_FUN_1800c6530.c` | validator depth cap: latency/band/choke budget, floor/ceil, counter-multiple-of-200 `[BT] depth capped` (the initial zero also fires) |
| `0x1800c6c50` | `0x1800c6c50_FUN_1800c6c50.c` | shift application: cap refusal, band acceptance, pose diagnostic, `[BT-HIT]`; true extent `0x81e` (cold tail through `0x1800c746d`) |
| `0x1800c7670` / `0x1800c76d0` | `0x1800c7670_FUN_1800c7670.c` / `0x1800c76d0_FUN_1800c76d0.c` | bone matrix at `curtime`; render-origin delta, accepted below 256.0 |
| `0x1800c5790`–`0x1800c60c0` | eleven `FUN_1800c5*.c` files | interp, ping, unlag budget/headroom, band, choke, margin time, latency, depth cap, max ticks, tick validity; all formulas and constants recorded |
| `0x1800c5f70`, `0x1800c64b0`, `0x1800c6700`, `0x1800c6790`, `0x1800c6930`, `0x1800c9380` | matching `FUN_*.c` | record predicate, choke offset, config gate, depth window, shift validator, extrapolate config |
| `0x180002470` / `0x18022cdc0` | `0x180002470_FUN_180002470.c` / `0x18022cdc0_FUN_18022cdc0.c` | 16-byte sentinel `{self, 0}` via `.rdata` slot `0x18030cee0`; ring pointer array grows `0 -> 8 -> 16 -> 32` |

**Attribution corrections:** `[FAKELAG]` (`0x1801ee530`) does not belong to
`FakeLagFeature`, which has no non-default vtable slot. `[BT-LIMIT]` and
`[BT-ANIM]` are directly addressed from `0x1800c9910` at `0x1800ca20f`,
`0x1800ca3cf` and `0x1800ca6be`; the earlier "indirect" note is withdrawn. The
gate pair `0x402819404e703058` is shared with Stages 3.5/3.7/3.8 and is reused,
not re-derived.

**Open after 3.9:** none. Extrapolation is the bone/origin pair above; every
timing query has a formula and constants; the ring starts at capacity 0 in BSS,
first grows to 8 and doubles thereafter; `DAT_1803fac40` is constructed by
`0x180002470`, whose pointer is the `.rdata` initialiser qword at `0x18030cee0`.
Stages 3.3–3.7 are separate subsystems; Stage 3.8 has none.

### Stage 3.10 — COMPLETE

**Status: complete.** The private stack and hook are in
`src/features/lua/stack.h`; the 35 `[LUANET]`, 4 `[LUAEDITOR]` and one
`[LUAFEAT]` tagged bodies, plus the 48 reader/companion callees reached from
the same registration table, are reconstructed in
`src/features/lua/luanet.h` and the stage sheet. The earlier 40/40 promotion
counted tagged bodies only; the completeness claim is now explicitly 88.

| Artifact | Contents |
|----------|----------|
| `src/features/lua/stack.h` | private-stack open/reuse/release, `0x40000000` hide floor, `-1` sentinel, re-issue cap 8, verbatim `[LUASTACK]`/`[LUAHOOKS]` strings |
| `src/features/lua/luanet.h` | channel-table setters and 46 readers, two registration thunks, block table, Net_ShouldSend/CL_Move gates, editor state machine, feature-registration tables |
| `docs/stage-03.10-lua.md` | tag inventory with function counts, all 35 setters, 46 readers + 2 thunks, 4 editor bodies, LUAFEAT table list, verbatim strings |

| Address | File (`re/dump/decompile/`) | What it established |
|---------|------|---------------------|
| `0x1800414c0` | `0x1800414c0_FUN_1800414c0.c` | private stack open, lazy `lua_shared.dll` resolution, hide floor `0x40000000` |
| `0x180041420` | `0x180041420_FUN_180041420.c` | private stack release, globals cleared, eight entries zeroed |
| `0x180057f20` | `0x180057f20_FUN_180057f20.c` | DrawModelExecute hook, cap 8, one-shot warning |
| `0x18002d7a0` / `0x18002d8c0` | hide / close thread helpers | called by open/release |

**Closed in 3.10:** all 35 `[LUANET]` bodies (channel table `0x1800594e0`,
30 setters, BlockMessage/SendMessage, Net_ShouldSend `0x18006f280`, CL_Move
trampoline `0x1801f84d0`), all four `[LUAEDITOR]` bodies
(`0x1800ec770`, `0x1800ef850`, `0x1800f0ab0`, `0x1800f1200`), `[LUAFEAT]`
`0x1800e8340`, and the registration table's 48 untagged callees: 46 readers
(`0x18005a260`–`0x18005bc20`, `0x18005be60`, `0x18005dc00`–`0x18005dd50`) and
thunks `0x18005d160`/`0x18005d610`. `GetCommandAck` adds BaseClientState
`+0x20b90`. Stages 3.3–3.7 and 3.9 are separate subsystems; Stage 3.8 has none.

### Stage 3.11 — COMPLETE

**Status: complete.** All twelve tagged bodies are reconstructed in
`src/features/resolver/`; the five that were open last pass now have full
sections in the sheet.

| Artifact | Contents |
|----------|----------|
| `src/features/resolver/vmt.h` | CHLClient/CPrediction hook slots, `0x118`/`0x88` offsets, `0x40` protect flag, `0x30` node with `0x0101` tag |
| `src/features/resolver/patterns.h` | beam signatures, GMod net read/write, time-signature copy limit 4 and two-hook cap, `match+8+rel32` arithmetic |
| `src/features/resolver/iface.h` | CViewRender `0x130` bounds, `+0x28`/`+0x30`/`+0x128` slots, RTTI name at `lp-8` |
| `src/features/resolver/netstore.h` | unique-global manager rule, 129-entry clear, 5000 ms probe, type-4 compare |
| `src/features/resolver/netvars.h` | netvar builder: FNV-1a map hash, container globals, source/key clamps, v5→v6 migration |
| `docs/stage-03.11-resolver.md` | tag inventory, constants, verbatim strings, reuse map, all twelve bodies recovered |

| Address | File (`re/dump/decompile/`) | What it established |
|---------|------|---------------------|
| `0x1801ecae0` | `0x1801ecae0_FUN_1801ecae0.c` | VMT swap of CHLClient slot 0x23 and CPrediction slot 0x11 under PAGE 0x40 |
| `0x1800200b0` | `0x1800200b0_FUN_1800200b0.c` | three CBeamSegDraw signatures, ready flag, `[PAT-WARN]` |
| `0x1800713d0` | `0x1800713d0_FUN_1800713d0.c` | GMod net read/write scans and MinHook installs |
| `0x1801f7a80` | `0x1801f7a80_FUN_1801f7a80.c` | NET_SetTimeForTimescale copies (limit 4), `net_time_for_scale` |
| `0x180018770` | `0x180018770_FUN_180018770.c` | CViewRender RTTI verification, `0x130` object, three slots |
| `0x18006c9b0` | `0x18006c9b0_FUN_18006c9b0.c` | NW-store manager scan, unique RIP-global rule |
| `0x18006d430` | `0x18006d430_FUN_18006d430.c` | per-entity native/lua compare, agree/mismatch counters |
| `0x180103c10` | `0x180103c10_FUN_180103c10.c` | native read toggle, 129-entry clear, stride 0x50 |
| `0x180103d60` | `0x180103d60_FUN_180103d60.c` | native probe, 5000 ms deadline, two-player cap |

**Closed in 3.11:** `0x180017150` (interface dump), `0x1801f9180` (21-entry hook
table), `0x18002b540` (netvar builder and v5→v6 migration), `0x1801f7d00`
(frametime scan; sets the Stage 3.7 `hooks` flag) and `0x1801f7fa0` (fake-ping
scan). Stages 3.3–3.7 and 3.9 are separate subsystems; Stage 3.8 has no open
items. The Stage 3.7 `hooks` field is data published by this scan, not an open
3.7 item.

Verified by `build.bat`: `VISUAL SELFTEST PASS (0 failures)` — 127 assertions over
all thirteen anchors, the offset/free-scale tail, per-kind emission and its order,
layout-order dispatch and explicit order override, the shared gate's
team/index/dead/NODRAW refusals, glow toggle and key gating, the three chams
fallback literals, the ghost listener's registration and removal states, world-to-
screen projection, near-plane clipping, projected bounds rendering, the `off`/`ON`
and `blur`/`sharp` literals, and the 250 ms stream-out boundary.

**Tag correction.** `[ESP]`, `[GLOW]` and `[CHAMS]` do **not** belong to the element
classes. `[ESP]` is emitted by the entity-lifecycle listener
(`Features::Visual::ESP::CGhostEntityListener`, vtable `0x33bbb8`) from
`0x1801913f0`, `0x180191540`, `0x1801918f0`, `0x180191a10`, `0x180191fa0` and
`0x180192700`; `[GLOW]`/`[CHAMS]` are emitted by
`Features::ChamsGlow::ChamsGlowFeature` (vtable `0x33e458`, slot 5 `0x18010cc70`,
material path `0x180106ec0` / `0x1801070a0`). No element vtable slot contains any of
the three literals. The earlier table row that listed the tags as the element
subsystem's logging is corrected above.

**Second 3.6 pass — gaps closed or evidenced.**

Closed with cited addresses:

* world-to-screen now exists in code: `0x1800207e0` (point projection, `w` guard
  `0.001` at `0x180380964`, screen transform `0.5` at `0x180380ac0`) and
  `0x180021be0` (near-plane clip at `0.0099999` / `0x180380980`, degenerate-span
  guard `1e-6` / `0x180380938`), plus the `ToScreen` binding `0x1800e46b0` and
  `RenderPlayer` composing bounds → screen rect → element dispatch;
* the glow literals: `0x1803449c4` = `off`, `0x18034b584` = `ON` (toggle), and the
  style literal is `blur`/`sharp` from `0x3db4763925009906`. The earlier
  `Soft`/`Hard` naming was wrong and is corrected in the code and the sheet;
* the stream-out grace: `0x191fa0` compares against `0xfa` = 250 ms, so
  `kStreamOutGraceMs` is no longer a placeholder.

Closed or bounded after the renderer pass:

* the paint-path element renderer is `0x180174130` (`status: ok`, 1,288 B). It
  walks `DAT_1803fb100..DAT_1803fb108`, calls `0x180171c50` for placement
  (which invokes the element slot-8 anchor at `[this+0x40]`), and dispatches
  per-kind drawing through `0x180173e80`, `0x18016b260` and the element vfuncs.
  The caller chain is `0x180196380` (paint-path entity loop) -> `0x18018b900`
  (player bounds/scale) -> `0x180174130`; the editor preview calls the same
  renderer. The former negative search looked only for a direct `0x180169260`
  call, which is why it missed the indirect slot;
* `DAT_1803fcb6c`: 4-byte `.bss` scale, closed by its two writers
  (`0x18017ac80` = 1.0f, `0x18018b900` = average of the 170x270-relative scales);
  the self-test asserts the writer formula;
* element geometry is class-specific runtime data (fixed defaults, stored size,
  screen extents or text metrics); the ImGui inspector bodies are
  recorded as data; the visibility filter reuses Stage 3.5's gate chain because the
  element family has none of its own. These are runtime/data boundaries, not
  missing corpus bodies.

3.6 residual pass: the renderer boundary is closed with `0x180174130`; the
previous `0x180169260` direct-call search was a false negative because slot 8 is
reached through `0x180171c50`. `DAT_1803fcb6c` is closed: a 4-byte `.bss` scale
with writers `0x18017ac80` (`1.0f`) and `0x18018b900`
(`(widthScale+heightScale)/2`, references 170 and 270); `ScaleFromExtents` and the
visual self-test cover it. Element geometry remains a class-specific runtime input.
The measurement is paint-time, not an injection-time snapshot: `0x1801f62b0`
calls the entity loop `0x180196380` at line 127; the loop calls `0x18018b900` at
line 168; `0x18018b900` writes the 170x270-relative scale at line 411 and calls
`0x180174130` at line 415; `0x180174130` calls `0x180171c50` at line 180, which
calls element vfuncs `+0x10`/`+0x30`. The runtime ESP path reads GMod entity OBB
bounds in `HookFrameStageNotify` when `stage == 6` (`FRAME_RENDER_START`).
Injection installs the hooks; the paint/stage-6 path reads geometry.
The other stages' residuals are recorded in their own sheets and are not repeated
here.

### Stage 3.12 — COMPLETE

**Status: complete against the corpus.** The account switcher is reconstructed in
`src/features/account/account_switcher.h` and exercised by
`src/features/account/selftest.cpp`. The class vtable is the shared no-op
`0x18001e3e0`; the subsystem lives in 27 `[AS]` bodies plus the persistence,
Steam-adaptor and ImGui helpers.

| Artifact | Contents |
|----------|----------|
| `src/features/account/account_switcher.h` | six-value state machine, `EResult`/`EDenyReason` tables, object layouts, token-source precedence, JWT shape/`sub`, DPAPI entropy, both file formats, account merge/drop, deploy admission, ticket/engine-cache rules, UI labels |
| `src/features/account/selftest.cpp` | 170+ assertions over every recovered transition, table entry, file row, token rule and address; built and run by `build.bat` |
| `docs/stage-03.12-account-switcher.md` | all 27 tagged bodies, 25 support bodies, state/global map, four login paths, vault/DPAPI flow, deploy and service loop, ticket trace, UI, constants, verbatim strings, external limits |

| Address | File (`re/dump/decompile/`) | What it established |
|---------|------|---------------------|
| `0x18013aba0` | `0x18013aba0_FUN_18013aba0.c` | session pool, `Steam_CreateLocalUser`, `IClientUser` slot probing, reuse/re-logon |
| `0x18013bba0` | `0x18013bba0_FUN_18013bba0.c` | 20 ms logon pump, 6 s guard prompt, callback 101, timeout/cancel codes |
| `0x18013c230` | `0x18013c230_FUN_18013c230.c` | EResult 63/65/66 -> e-mail, 85/88 -> mobile, success/failure state writes |
| `0x18013ca40` | `0x18013ca40_FUN_18013ca40.c` | three retries on EResult 3, 30x50 ms drain, token-store poll |
| `0x18013d3d0` | `0x18013d3d0_FUN_18013d3d0.c` | password worker, `SetLoginInformation`, 180 s timeout |
| `0x18013d830` | `0x18013d830_FUN_18013d830.c` | token entry, `sub` subject, current-client rejection, 45 s timeout |
| `0x18013dfa0` | `0x18013dfa0_FUN_18013dfa0.c` | manual > vault > ConnectCache, `SetLoginToken`, rejected-token drop |
| `0x180137a90` | `0x180137a90_FUN_180137a90.c` | deploy: signed-in/SteamID/connect-token gates, adapter steal, ticket hooks |
| `0x180138760` | `0x180138760_FUN_180138760.c` | service loop, callback 163 ack, all fifteen deny reasons |
| `0x180138cf0` | `0x180138cf0_FUN_180138cf0.c` | join-ready predicate: loggedOn + owned + ticket > 0 + connect tokens |
| `0x18013a300` / `0x18013a560` | matching `.c` | unload env handoff and previous-load adoption |
| `0x180139c90` / `0x180139540` | matching `.c` | `loginusers.vdf` import and ConnectCache token pickup |
| `0x180134a00` / `0x1801342d0` | matching `.c` | DPAPI protect/unprotect and `tokens.dat` |
| `0x180135100` / `0x180133200` | matching `.c` | JWT shape check and decimal `sub` extraction |
| `0x1801d3b90` | `0x1801d3b90_FUN_1801d3b90.c` | full ImGui account page, row actions, token/code popups |

**Closed in 3.12:** every `[AS]` body and every direct helper was read; the one
non-obvious invariant is that the process keeps its first local user for the
whole launch (a replacement is not authorised), so failed logon calls
`0x18013a1e0` rather than releasing it. Passwordless switching depends on
`SetLoginToken` plus clearing the engine's `m_cubTicket` cache; without the
ticket reset only the first account can join. The vault is per-Windows-user
DPAPI with the lowercased account as entropy.

**External limits:** `steamclient64.dll` flat exports and `IClientUser` slot
numbers are client-build-specific; precision and deploy were verified
structurally, not against a live Steam client. No `[AS]` body is unread.

### Stage 3.13 — RENDERER COMPILED (FULL BINARY/IN-GAME PARITY REMAINS)

**Status: renderer entry point compiled and runtime-wired; full binary/in-game parity remains.** Config/SQLite decoding complete; implementation split: 38 provided (30 ImGui-core + 8 MSVC STL), 45 reconstructed, 0 missing; 0x1801d5ef0 is translated in src/features/renderer/renderer.cpp and called from the stage-6 FrameStageNotify path via renderer_runtime.cpp. Engine/Lua/SQLite operations use explicit typed host callbacks listed in the dependency map. The current build runs 16 suites. The product-owned config engine, `last_config.txt`,
528-key schema, SQLite header/page/cell/record decoder and database wipe policy
are reconstructed in `src/features/config/` and exercised by
`src/features/config/selftest.cpp` and `src/features/config/sqlite_selftest.cpp`.
ImGui 1.92.8 and the Goossens TextEditor are statically linked into `m64.dll`
from the binary's own version/API markers; the exact ImGui source is now vendored
at `third_party/imgui/` with pinned commit and checksums. The first-party UI
body `0x1801d5ef0` (38,613 B), the Utility settings renderer, is translated in
`src/features/renderer/renderer.cpp`, compiled into both build scripts and
called from the stage-6 runtime path. All 24 recovered labels and all 84
`FUN_*` identifiers are accounted for in the generated
`re/dump/renderer/INVENTORY.md`; each entry is compiled, a provided MSVC/CRT
path, or a named typed host boundary. Its original corpus stub is superseded by
a successful single-function Ghidra pass:
`re/dump/renderer/0x1801d5ef0_FUN_1801d5ef0.c` is `status: ok`, 194,287 bytes
and 5,142 lines. The other original corpus timeout, `0x180003f30` (52,526 B),
is also recovered: `re/dump/recovered_f30/0x180003f30_FUN_180003f30.c` is
`status: ok`, 224,665 bytes and 6,483 lines. It is the static initializer for
the `"Default"` profile of `DAT_1803fadf0`, with 444 map insertions and 435
distinct 64-bit keys; it is config evidence, not a compiled dependency. All 83 external direct callee bodies are preserved under
`re/dump/renderer/helpers/`, all `status: ok`; the 84th `FUN_*` identifier is the
renderer's own signature reference. The exact map at
`re/dump/renderer/DEPENDENCIES.md` marks 30 ImGui-core rows as provided by the
vendored v1.92.8 source, eight MSVC STL release-ABI helpers as provided by the
compiler runtime, 45 rows as reconstructed (six helpers: `0x180268980` in
`src/features/config/ui_hash.h`; `0x180012ac0`, `0x18001d080`, `0x180140b70` and
`0x1802d8350` in `src/features/renderer/ui_helpers.cpp`; `0x180014410` in
`src/features/renderer/log_writer.cpp`; plus all eleven former ImGui wrappers
and the key-capture helpers `0x1802d31a0` and `0x1801df700` in
`src/features/renderer/ui_widgets.cpp`; plus the 26 former missing rows in
`src/features/renderer/dependencies.cpp`), and 0 missing. The SQLite/config
decoding boundary is closed; the 26 former helper dependencies are compiled
with host callbacks. The translated renderer entry point is compiled and
runtime-wired; line-for-line parity with the 5,142-line body and live in-game
behaviour remain open.

| Artifact | Contents |
|----------|----------|
| `src/features/config/config.h` | paths, name sanitizer, `last_config.txt`, hash parser, old-format policy, bool/int/float/string/vec4 accessors, writer |
| `src/features/config/config_keys.h` | generated 528-key schema: 221 bool, 115 int, 184 float, 8 string |
| `src/features/config/sqlite.h` | SQLite header/page validation, varint and serial-type decoder, local/overflow payload assembler, b-tree walker, `key` column lookup, table/cookie/freelist wipe plan, cleanup counters, AC markers |
| `src/features/config/sqlite_selftest.cpp` | independent raw-page fixture builder, 528-key and all-serial-type round-trip, multi-leaf + overflow + malformed cases |
| `src/features/config/ui_hash.h` | reconstructed `0x180268980` ImGui CRC-32C ID hash; `CONFIG SELFTEST` covers bounded/NUL/`###` cases |
| `src/features/renderer/ui_helpers.{h,cpp}` | reconstructed `FormatV` (`0x180012ac0`), `AssignString` (`0x18001d080`), `FilterAndTrim` (`0x180140b70`) and `AllocateOrThrow` (`0x1802d8350`) |
| `src/features/renderer/log_writer.{h,cpp}` | reconstructed `0x180014410` thread-safe CRT log writer (`LogV`) |
| `src/features/renderer/ui_widgets.{h,cpp}` | reconstructed eleven former ImGui wrappers (`0x18019a460`..`0x1801df5d0`) plus key-capture helpers `0x1802d31a0`/`0x1801df700`, with queued records, popup/style/selected-tab state, formatted hints, key capture and draw-list output |
| `src/features/renderer/dependencies.{h,cpp}` | reconstructed 26 former missing rows: config store/std::any, thread-safe globals, model path, addon cache, cleaner scan/execute, engine host adapters, loading-screen picker and Lua dump boundary |
| `src/features/renderer/selftest.cpp` | `RENDERER SELFTEST` exercises the six ported helpers, all eleven UI-widget wrappers, both key-capture helpers, the 26 dependency-layer cases and the translated `0x1801d5ef0` early-outs/sections/Movement/cleaner/Lua branches in the pinned ImGui 1.92.8 context |
| `third_party/imgui/` | pinned Dear ImGui 1.92.8 (commit `8936b58fe26e8c3da834b8f60b06511d537b4c63`), MIT license, core + Win32/DX9 backends, checksums and compile smoke log |
| `third_party/README.md` | dependency manifest; ImGui vendored, SQLite/Lua/engine clearly marked as engine-provided or proprietary |
| `re/dump/renderer/0x1801d5ef0_FUN_1801d5ef0.c` | recovered `status: ok` body (194,287 bytes, 5,142 lines); source evidence for the compiled translation in `src/features/renderer/renderer.cpp` |
| `re/dump/recovered_f30/0x180003f30_FUN_180003f30.c` | recovered `status: ok` default-settings initializer (224,665 bytes, 6,483 lines); 444 insertions / 435 keys; config evidence, not built |
| `re/dump/renderer/helpers/` | 83 recovered external callee bodies, all `status: ok`, 286,404 bytes; README has the exact command |
| `re/dump/renderer/DEPENDENCIES.md` | 84-row dependency map: size, call sites, recovered bytes/lines, classification, evidence |
| `re/dump/renderer/README.md` | exact recovery command, original stub cause, artifact/caller/callee paths, build boundary |
| `re/tools/extract_config_keys.js` | regenerates the exact schema from `0x1801aaa70`/`0x1801b2830` |
| `re/tools/renderer_dependency_map.py` | regenerates `re/dump/renderer/DEPENDENCIES.md` and `helpers/dependencies.tsv` |
| `docs/stage-03.13-config-ui.md` | file formats, all helper addresses, full SQLite decode, UI shell, vendoring evidence and binary-vs-format divergences |

| Address | File (`re/dump/decompile/`) | What it established |
|---------|------|---------------------|
| `0x1801aaa70` | `0x1801aaa70_FUN_1801aaa70.c` | save: two headers, 479 inline keys + one explicit float + twelve vec4 groups |
| `0x1801b2830` | `0x1801b2830_FUN_1801b2830.c` | load: map, old-format rejection, per-key apply |
| `0x1801a93b0` | `0x1801a93b0_FUN_1801a93b0.c` | config-name sanitizer (alnum/space/-/_, trim, default) |
| `0x1801a8c20` / `0x1801a8dc0` | matching `.c` | `last_config.txt` auto-load flag and selected name |
| `0x1801a9730` | `0x1801a9730_FUN_1801a9730.c` | settings folder creation and `.cfg` enumeration |
| `0x1801aa240` / `0x1801aa2a0` / `0x1801aa350` | matching `.c` | bool/int/float value parsers |
| `0x1801aa0f0` / `0x1801aa5b0` | matching `.c` | twelve vec4 saves and forty-eight loads |
| `0x18014b840` / `0x18014b9d0` / `0x18014bba0` | matching `.c` | 1-9 byte varint, record header/serial types 0-11 and text/blob widths, column text copy |
| `0x18014bff0` / `0x18014c530` | matching `.c` | table b-tree leaf/interior walk, local/overflow payload assembly |
| `0x18014c6b0` / `0x18014d5a0` | matching `.c` | SQLite read validation and module wipe |
| `0x18014d1a0` | `0x18014d1a0_FUN_18014d1a0.c` | freelist refill, 1024 x 0x2000-byte inserts |
| `0x18014eb90` / `0x18014eda0` | matching `.c` | never truncate `.db`/`.sqlite`; remove-or-truncate cleanup |
| `0x180150550` | `0x180150550_FUN_180150550.c` | `vcmod_cl_usersettings` and `devicecookie` markers |
| `0x1801e3830` / `0x1801e7a50` | matching `.c` | Configs page and root menu tabs |

**Boundary, stated exactly:** the SQLite/config data path is closed.
`sqlite_selftest` builds a multi-page settings database with an independent
builder, reads every row through the new page/record/overflow decoder, and
checks all 528 config keys and every serial type. ImGui and TextEditor are
statically linked into `m64.dll`; the ImGui source is vendored, evidenced by the
exact `Dear ImGui 1.92.8 (19280)` banner/backends and the Goossens-only `DocPos`/`LineSection`/`Transaction`/`Iterator`/`addSquiggle`symbols. `0x1801d5ef0` is recovered, not missing: 5,142 lines at
`re/dump/renderer/0x1801d5ef0_FUN_1801d5ef0.c` after raising `DecompList` to a
600-second per-function budget and a 512 MB payload cap. Its 83 external
helpers are recovered under `re/dump/renderer/helpers/`; the dependency map
records 38 provided (30 ImGui-core + 8 MSVC STL), 45 reconstructed and 0
missing. Its translated entry point is compiled and wired into the stage-6
runtime path; the 26 former helper dependencies are compiled in
`dependencies.cpp`, and engine/Lua/SQLite-owned operations use explicit typed
host callbacks. Full line-for-line body parity and live in-game verification
remain open. The original corpus stub is historical
evidence only. `[CVAR-*]` belongs
to the TacRP backend from Stage 3.2 and is not re-counted here.

### Old-category file repass

The reproducible audit is `re/tools/audit_old_categories.py`; it writes
`re/dump/old_category_audit.tsv` and `re/dump/OLD_CATEGORY_AUDIT.md`. It extracts
every address cited by the Stage 3.1–3.12 sheets that is a real function in
`re/dump/inventory.tsv` and checks for a matching decompiled body with
`status: ok`. Result: **574 cited function bodies (540 distinct), 0 missing;
every present body is `status: ok`.** The same pass found that the one
remaining corpus timeout, `0x180003f30`, is the `"Default"` settings initializer;
it is now recovered (see the artifact row above), so the old categories have no
unrecovered cited file and the corpus has no remaining timeout stub. Stage 3.6's
previous renderer boundary is closed: the actual paint-path renderer is
`0x180174130`, a full `status: ok` body called through `0x180196380` ->
`0x18018b900` -> `0x180174130`. All twelve old categories (3.1–3.12) are now
complete; Stage 3.13's UI-helper source is complete with its external UI
integration boundary recorded. Stage 4 now has every recovered hook row wired
to an exact ABI, and Stage 5's install path covers all 24 descriptor rows (23
unique interface/slot entries; optional rows are conditional) and runs the
recovered command features plus the engine-native ESP.

## Stage 4 — Offset / signature database

**Status: complete; every recovered row is wired and ABI-tested.**

`src/offsets/offsets.json` and `src/offsets/offsets.h` now hold the full
21-entry hook table from `0x1801f9180`, the two extra VMT hooks from
`0x1801ecae0`, the recovered interface globals, and the six verified byte patterns
from `0x1800200b0` / `0x1800713d0` / `0x1801f7a80`. The runtime includes the
compiled header and asserts the counts (21 hooks / 3 core rows / 6 signatures /
9 live features / 5 unsupported items) in `RUNTIME SELFTEST`.

The live resolver resolves all client/engine/optional interfaces plus the D3D9
device (shaderapidx9 pattern), the ClientMode accessor and the player netvar
table. It deliberately does not dereference the version-specific interface-global
RVAs. Every one of the 21 recovered rows and the two extra core rows is attempted
through the descriptor table with its original pointer saved; a row whose
optional interface/device is absent is logged and left uninstalled.
`RUNTIME SELFTEST` tests every descriptor/ABI row and emits one named coverage
line per descriptor row: 24 named descriptor PASS lines (21 hook rows + 3 core
rows) plus 23 named handler PASS lines, one per unique handler. Each line names the hook, interface/slot and return class; the two
ClientMode rows are printed separately and the shared handler line says it is
shared by 2 descriptor rows. **Exclusions: none (0 hooks).** Every one of the 24 descriptor rows is asserted; void-return rows assert ABI shape and argument pass-through because they have no return value. The exact row/ABI table is in
`docs/stage-04-offsets.md`.

## Stage 5 — Skyfall product

**Status: `Skyfall.dll` builds and loads with an install path covering all 24
descriptor rows (23 unique recovered interface/slot entries; optional rows are
conditional), the command-stage feature layer, the engine-native ESP and the
compiled Utility renderer live; auth is unchanged.**

`build_dll.bat` produces `build/Skyfall.dll`, PE32+ x64 Windows GUI, no exports.
It attempts 24 descriptor rows (23 unique interface/slot entries) and calls
every saved original first. The canonical live-feature inventory is `bunnyhop`,
`autostrafe`, `aimbot`, `triggerbot`, `no-spread`, `anti-aim`, `backtrack`,
`fullbright`, `esp`; fullbright is the MaterialSystem config byte and ESP uses
`IVDebugOverlay`. Config is
`%LOCALAPPDATA%\skyfall\skyfall.ini`. The unsupported pieces are itemized in
`docs/stage-05-runtime.md`: `in-game hook execution` (closed by live GMod x64
verification; retained in the recovered inventory), `no-spread against a real weapon profile` (no live Lua/weapon-object read),
`triggerbot visibility trace` (closed: `EngineTraceClient003` resolved and the
live trace is wired), `backtrack rewind / bone history` (no lag-compensation
path), and `anti-aim body desync modes 7-9` (no `0x1800bd8d0` body clock/offset).

The DLL has no auth handshake yet and does not replace the loader's `VenLock`
shim. No mayrr branding remains in the compiled runtime. Build, load-smoke,
image and self-test evidence, plus the in-game gap, are in
`docs/stage-05-runtime.md`.

## Stage 6 — Loader

`Loader` already has a payload selector for Deadlock (`VenLock` vs `Base`).
GMod gets the same treatment: a second GMod payload, branded Skyfall, embedded as
its own resource and injected through the existing manual mapper.

## Stage 7 — Verification

Per-subsystem parity checklist against observed behaviour, plus a load test in
GMod x64 with the offset database pointed at the current build.

---

## Resuming

```bash
export JAVA_HOME="$PWD/.tools/jdk/jdk-25.0.4.1+1"
export GHIDRA_INSTALL_DIR="$PWD/.tools/ghidra/ghidra_12.1.4_PUBLIC"

# Stage 2 — inventory + names
"$GHIDRA_INSTALL_DIR/support/analyzeHeadless.bat" \
  Gmod/Skyfall/re/ghidra_project m64 -process m64.dll -noanalysis \
  -scriptPath Gmod/Skyfall/re/tools \
  -postScript DumpAll.java Gmod/Skyfall/re/dump inventory \
  -saveProject

# Stage 2 — full corpus (resumable, safe to interrupt and rerun)
"$GHIDRA_INSTALL_DIR/support/analyzeHeadless.bat" \
  Gmod/Skyfall/re/ghidra_project m64 -process m64.dll -noanalysis \
  -scriptPath Gmod/Skyfall/re/tools \
  -postScript DumpAll.java Gmod/Skyfall/re/dump decompile

# Stage 3 — one subsystem, with callees
"$GHIDRA_INSTALL_DIR/support/analyzeHeadless.bat" \
  Gmod/Skyfall/re/ghidra_project m64 -process m64.dll -noanalysis \
  -scriptPath Gmod/Skyfall/re/tools \
  -postScript DecompList.java Gmod/Skyfall/re/seeds/nospread.txt \
    Gmod/Skyfall/re/dump/nospread 1

# Old-category file repass (reproducible; writes re/dump/OLD_CATEGORY_AUDIT.md)
py re/tools/audit_old_categories.py
```
