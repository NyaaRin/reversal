# Weapon backends (vfunc04) — body map

The image has 22 `Features::Weapons::Backends` classes. Vtable slot 4 is the
spread-compensation entry point. All 22 bodies and every helper they call were read
from `re/dump/decompile/` for this stage. The 22 classes resolve to **11 distinct
addresses**, and each address has its own implementation in `backends.h`.

## Contract (verified across all 22 bodies)

Every body writes **three floats** through its out pointer. The first two are
yaw/pitch, each normalized through `0x1802d3e00`; the third is the z component of
the direction delta, which most bodies explicitly zero (`param_2[2] = 0.0`, e.g.
ARC9 corpus line 326) and ArcCW computes. No body returns absolute angles, a
boolean or a scale factor, and every early-out writes zeros. The interface is
therefore `ConeOffset{ yaw, pitch } + deltaZ`, and the caller subtracts the offset
(`nospread::CompensateCommand`).

UTSWB (`0x18007c0e0`) additionally **delegates to the CW body** when its first flag
byte is zero — it literally calls `vfunc_shared_180079040`. That is why the two CW
implementations share one class rather than one being a copy.

## Body map

`_INDEX.tsv` is the corpus manifest (`address`, `size`, `name`, `file`, `status`).
Row numbers below are the line in `re/dump/decompile/_INDEX.tsv`, cited so a reader
can go from this table to the file in one lookup.

| VA | Owners | Implementation | Draw terminates in | Corpus file | `_INDEX.tsv` |
|---|---|---|---|---|---|
| `0x1800779c0` | CombineWeaponry, CSGO, Generic, HL2, HVH2/CSS, M9K, PTP, TTT | `GenericBackend` | in-image | `0x1800779c0_vfunc_shared_1800779c0.c` | L1156 |
| `0x180079040` | CW20, CW2.0, FAS2, SWB, (UTSWB fallback) | `CwBackend` | Lua `math.random` | `0x180079040_vfunc_shared_180079040.c` | L1172 |
| `0x1800779b0` | Octo, ORP/TPIK camera | `NoCompensationBackend` | no draw | `0x1800779b0_vfunc_shared_1800779b0.c` | L1155 |
| `0x1800860c0` | SWCS | `SwcsBackend` | in-image | `0x1800860c0_Features_Weapons_Backends_SWCSWeaponBackend_vfunc04.c` | L1276 |
| `0x180088980` | ARC9 | `Arc9Backend` | Lua `SharedRandom` + in-image bias pairs | `0x180088980_Features_Weapons_Backends_ARC9WeaponBackend_vfunc04.c` | L1298 |
| `0x180082ed0` | ArcCW | `ArcCWBackend` | Lua `math.random` (disc) | `0x180082ed0_Features_Weapons_Backends_ArcCWWeaponBackend_vfunc04.c` | L1253 |
| `0x18008bdf0` | TacRP | `TacRPBackend` | in-image triangular + engine `RandomFloat` | `0x18008bdf0_Features_Weapons_Backends_TacRPWeaponBackend_vfunc04.c` | L1322 |
| `0x18007fdb0` | TFA | `TfaBackend` | Lua `ComputeBulletDeviation` | `0x18007fdb0_Features_Weapons_Backends_TFAWeaponBackend_vfunc04.c` | L1242 |
| `0x18007c0e0` | UTSWB | `UtswbBackend` | Lua `math.random` | `0x18007c0e0_Features_Weapons_Backends_UTSWBWeaponBackend_vfunc04.c` | L1195 |
| `0x18009ebc0` | Z-City/Homigrad | `ZCityBackend` | deterministic, no RNG | `0x18009ebc0_Features_Weapons_Backends_ZCityWeaponBackend_vfunc04.c` | L1420 |
| `0x180092570` | ZS/SunRust | `ZsBackend` | deterministic, no RNG | `0x180092570_Features_Weapons_Backends_ZSWeaponBackend_vfunc04.c` | L1357 |

Eleven rows, eleven distinct addresses, no entry routed to the generic sampler.
`DistinctBodyCount() == 11` is asserted by the self-test.

## Per-body reconstruction

**Generic `0x1800779c0`** — self-contained. Each axis is the sum of two uniforms in
`[-0.5, 0.5]` (`0x18038135c`, `0x180380ac0`), accepted while inside the unit disc
(`0x180380bb0`), 16 attempts.

**CW `0x180079040`** — spread from the weapon accessor (`vtable+0x100`); `×0.85f`
(`0x180380b4c`) when the local player's flags have bit 1; the range `[-spread,
+spread]` is built by XOR-ing the float with `0x80000000` (`0x1803817f0`); output
`×25.0f` (`0x18038103c`). The draw itself is `0x180078520`: `math.randomseed(seed)`
then `math.random(min,max)` twice.

**Octo `0x1800779b0`** — zeroes all three floats unconditionally.

**SWCS `0x1800860c0`** — inaccuracy/spread cone from the decimal-text spread seed,
three-pass refinement (`nospread/swcs_spread.h`).

**ARC9 `0x180088980`** — initial deviation from `0x1800880b0`, then three passes of
`0x1800886c0`. That pass selects one of four hard-coded bound pairs from the low byte
of `CommandSeed` — `0x08` → `(0.17, -0.3026)` (`0x180380a28`, `0x180381350`), `0xA7`
→ `(-0.5937, -0.2505)` (`0x180381360`, `0x18038134c`), `0xCE` → `(-0.0637, 0.1127)`
(`0x180381334`, `0x1803809f8`), `0xDB` → `(-0.2295, -0.6195)` (`0x180381338`,
`0x180381364`). Every other byte takes four `RandomFloat(-0.5,0.5)` draws, summed
pairwise, then both sums are scaled by the cone and applied as
`forward + a*right + b*up` before converting back to angles.

**ArcCW `0x180082ed0`** — `0x180082b40` runs `math.random(0,1)` for a radius and
`math.random(0, 2π)` (`0x180380d98` = 2π as a double) for an angle, then adds
`r·sin(θ)·right + r·cos(θ)·up` scaled by the passed cone. The body calls it twice:
first with `(cone1·cone2)/10.0f` (`0x180380fcc`), then with the stored cone.

**TacRP `0x18008bdf0`** — cone model `sqrt(3)/π · δ` and `−1/π · δ`
(`0x180380e28` under `sqrtf`, `0x180380e48` = π, `0x180381354` = −1/π) scaled by
`50.911686` (`0x1803810a4`), then three `0x18008bb60` passes whose bounds default to
four `RandomFloat(-0.5,0.5)` draws summed pairwise.

**TFA `0x18007fdb0`** — calls the Lua global `ComputeBulletDeviation` with three
arguments (mode `0`, an int, a float) and takes its two results as `(yaw, pitch)`;
refuses if either `|value| > 15.0f` (`0x180380fe4`) or if both are under `0.0001f`
(`0x180380948`); then Rodrigues-rotates the aim twice through `0x18007fc10`
(deg→rad via `0x180380994`).

**UTSWB `0x18007c0e0`** — distance falloff `(dist·0.5 − r)·0.25 + r`
(`0x180380ac0`, `0x180380a58`) folded into the stored cone, clamped to `min(r+0.09,
…)` (`0x1803809e8`); `×0.85f` when flags bit 1, `×3.0f` (`0x180380e28`) when bit 0 is
clear; then `0x18007af40` (the Lua `math.random` harness) twice over `[-spread,
spread]`, `×25.0f`, minus `atan(correction)·57.295776f` (`0x1803810bc`) for the two
optional deviation channels.

**Z-City `0x18009ebc0`** — `0x18009a610` rotates the aim basis by the weapon's two
stored deviation angles (`param_1+0x14`, `+0x18`), re-quantizing fixed-point with
`(v·32768 + x) − x` (`0x1803812d0`), converts back to angles and subtracts; iterates
until the direction degenerates or falls under `1e-6` (`0x180380938`); scales the
result by `1.5f` (`0x180380c50`). No random draw.

**ZS `0x180092570`** — cone direction from `tan(pitch)` (`0x180380994` deg→rad) with
`cos/sin(yaw)` multipliers, converted to degrees with `57.295776f` (`0x1803810bc`),
`0.05f` dead zone (`0x1803809c4`), clamped to ±`2.0f` (`0x180380d20`, `0x1803813b8`).
Refuses when its disabled flag is set or its stored command number differs from
`*param_4`. No random draw.

## Surviving inferred items / draws that leave the image

Every one of the eleven bodies has its draw **math** in `backends.h`. Where a body's
sample is produced by code that is not in `m64.dll`, the call site, seeding order,
bounds, draw count, scaling, clamps and refusals are still reproduced, and the
generator is substituted with the in-image `ran1` stream. Those substitutions are
listed here, one row per backend, with the corpus file, its `_INDEX.tsv` row, the
address checked and why the generator is genuinely absent from this image.

| Backend | Corpus file | `_INDEX.tsv` | Address checked | Reason it is not independently reconstructable |
|---|---|---|---|---|
| CW (`0x180079040`) | `0x180078520_FUN_180078520.c` | L1165 | `0x180078520` | This helper resolves `randomseed` and `math.random` as Lua globals and calls them through `lua_pcall` (`0x180023180`). LuaJIT's generator is compiled into `lua_shared.dll`; `m64.dll` contains only the seed push and the two range pushes, so there is no generator state or constant in this image to reconstruct. |
| ArcCW (`0x180082ed0`) | `0x180082b40_FUN_180082b40.c` | L1252 | `0x180082b40` | Same external generator. This helper pushes `0`/`1.0` (radius) and `0`/`2π` (angle, double at `0x180380d98`) and calls `lua_pcall(2,1)`; the disc composition is in-image and reproduced, the PRNG is not. |
| UTSWB (`0x18007c0e0`) | `0x18007af40_FUN_18007af40.c` | L1188 | `0x18007af40` | Same external generator: the harness seeds, pushes `-spread`/`spread` and calls `math.random` through `lua_pcall`. The distance falloff, flag scaling, `×25.0f` and `atan` corrections wrapped around it are reproduced exactly. |
| ARC9 initial (`0x180088980`) | `0x1800880b0_FUN_1800880b0.c` | L1296 | `0x1800880b0` | The initial deviation comes from the Lua global `SharedRandom`, resolved by name at runtime and used to weight each pellet call to `0x180087eb0`. `SharedRandom` is defined by the game's Lua scripts, which are not in this corpus; no definition exists in the image. The three refinement passes (`0x1800886c0`) are fully reconstructed. |
| TFA (`0x18007fdb0`) | `0x18007fdb0_Features_Weapons_Backends_TFAWeaponBackend_vfunc04.c` | L1242 | `0x18007fdb0` | The body calls the Lua global `ComputeBulletDeviation` with three arguments and `lua_pcall(4,2)`, taking its two results as the deviation. The function is supplied by the game's Lua, not by this image. Everything after the call — the `15.0f` bound, the `0.0001f` epsilon and the two Rodrigues rotations — is reproduced exactly. |

Two refinement helpers also take their sample from the engine rather than from the
image. Their bounds are observed and implemented; only the generator is external:

| Helper | Corpus file | `_INDEX.tsv` | Address checked | Reason |
|---|---|---|---|---|
| ARC9 refinement | `0x1800886c0_FUN_1800886c0.c` | L1297 | `0x1800886c0` | Its default branch calls `RandomFloat(min,max)` through the vtable at `DAT_1803fa5c0` (`+8`), i.e. vstdlib's generator. The four seed-keyed bound pairs and the four `(-0.5,0.5)` draws are in-image and reproduced; the PRNG is resolved with `GetProcAddress` at runtime. |
| TacRP refinement | `0x18008bb60_FUN_18008bb60.c` | L1321 | `0x18008bb60` | Same vtable call and same reason; the triangular composition and the `param_5` cone scaling around it are reproduced. |

Nothing outside these seven rows is inferred: the remaining five bodies (generic,
Octo, SWCS, Z-City, ZS) draw entirely from code in this image, and no other
constant in `backends.h` is unverified.

## Seed derivation

Two derivations exist and both are implemented:

- `seed::CommandSeed` / `PredictionSeed` — MD5 over the four little-endian bytes of
  the command number (`0x180015e50`), masked to 31 bits for the engine
  (`0x180024f00`).
- `seed::SpreadSeed` — MD5 over the **decimal text** of the command number, folded
  through digest byte 7 and inverted (`0x1800859c0`).

ArcCW rebuilds its own seed through the Lua chain (`0x180082310`) rather than the
shared path; that divergence is in `ArcCWBackend`.

## Random stream (corrected)

`0x180083d00` is the Numerical Recipes `ran1` generator, not an LCG: Park–Miller
`16807`/`127773` in Schrage form, `+0x7fffffff` when negative, a 39-step (`0x27`)
warm-up filling a 32-entry Bays–Durham table, index `floor(iy / 2^26)`
(`0x180381010`, guarded by `> 0x1f`). Implemented in `../seed/random_ran1.h`.

## Reconstruction summary

| Category | Bodies |
|---|---|
| Draw fully in-image, exact | generic `0x1800779c0`, Octo `0x1800779b0`, SWCS `0x1800860c0`, Z-City `0x18009ebc0`, ZS `0x180092570` |
| Structure exact, generator substituted | CW `0x180079040`, ArcCW `0x180082ed0`, UTSWB `0x18007c0e0`, ARC9 `0x180088980`, TFA `0x18007fdb0`, TacRP `0x18008bdf0` |

The substituted generators are enumerated row by row in "Surviving inferred items /
draws that leave the image" above, with the corpus file, `_INDEX.tsv` row and address
for each.

## Self-test coverage

`shot/selftest.cpp` fires one shot per body family with a profile that exercises its
own path (ARC9's centroid, TFA's deviation pair, UTSWB's falloff, Z-City's stored
angles, ZS's stored angles), asserts the dispatch address, asserts each compensated
shot lands within 0.01°, asserts Octo leaves the command untouched, and asserts all
11 correction pairs are distinct for the same command number plus 8 named pairwise
differences.
