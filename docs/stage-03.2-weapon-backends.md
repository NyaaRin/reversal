# Stage 3.2 — weapon backends (`vfunc04`)

22 `Features::Weapons::Backends` classes resolve to **11 distinct** compensation
bodies. Each has its own implementation in `src/features/weapon/backends.h`.

Source: `src/features/weapon/{backend_table.h,weapon_backend.h,backends.h}`,
tested by `src/features/shot/selftest.cpp`. Implementation notes live in
`src/features/weapon/README.md`; this sheet is the quick reference.

## Body map

| VA | Owners | Class | Draw source | Corpus file (`re/dump/decompile/`) | `_INDEX.tsv` |
|---|---|---|---|---|---|
| `0x1800779c0` | CombineWeaponry, CSGO, Generic, HL2, HVH2/CSS, M9K, PTP, TTT | `GenericBackend` | in-image rejection | `0x1800779c0_vfunc_shared_1800779c0.c` | L1156 |
| `0x180079040` | CW20, CW2.0, FAS2, SWB, UTSWB fallback | `CwBackend` | Lua `math.random` | `0x180079040_vfunc_shared_180079040.c` | L1172 |
| `0x1800779b0` | Octo, ORP/TPIK camera | `NoCompensationBackend` | none | `0x1800779b0_vfunc_shared_1800779b0.c` | L1155 |
| `0x1800860c0` | SWCS | `SwcsBackend` | in-image | `0x1800860c0_…SWCSWeaponBackend_vfunc04.c` | L1276 |
| `0x180088980` | ARC9 | `Arc9Backend` | Lua `SharedRandom` + in-image bias pairs | `0x180088980_…ARC9WeaponBackend_vfunc04.c` | L1298 |
| `0x180082ed0` | ArcCW | `ArcCWBackend` | Lua `math.random` disc | `0x180082ed0_…ArcCWWeaponBackend_vfunc04.c` | L1253 |
| `0x18008bdf0` | TacRP | `TacRPBackend` | in-image triangular + engine `RandomFloat` | `0x18008bdf0_…TacRPWeaponBackend_vfunc04.c` | L1322 |
| `0x18007fdb0` | TFA | `TfaBackend` | Lua `ComputeBulletDeviation` | `0x18007fdb0_…TFAWeaponBackend_vfunc04.c` | L1242 |
| `0x18007c0e0` | UTSWB | `UtswbBackend` | Lua `math.random` | `0x18007c0e0_…UTSWBWeaponBackend_vfunc04.c` | L1195 |
| `0x18009ebc0` | Z-City/Homigrad | `ZCityBackend` | deterministic | `0x18009ebc0_…ZCityWeaponBackend_vfunc04.c` | L1420 |
| `0x180092570` | ZS/SunRust | `ZsBackend` | deterministic | `0x180092570_…ZSWeaponBackend_vfunc04.c` | L1357 |

No entry routes to the generic sampler; `DistinctBodyCount() == 11` is asserted.

## Contract

Every body writes three floats: yaw, pitch (both normalized through `0x1802d3e00`)
and the z component of the direction delta, which most zero explicitly. The caller
subtracts the yaw/pitch offset (`nospread::CompensateCommand`). UTSWB calls the CW
body directly when its first flag byte is zero, which is why they share one class.

## Key constants

| Constant | Address | Meaning |
|---|---|---|
| `0.85f` | `0x180380b4c` | CW and UTSWB flag-bit-1 spread multiplier |
| `25.0f` | `0x18038103c` | CW and UTSWB output scale |
| `0x80000000` | `0x1803817f0` | float XOR producing `-spread` |
| `10.0f` | `0x180380fcc` | ArcCW cone divisor |
| `2π` (double) | `0x180380d98` | ArcCW disc angle range |
| `50.911686` | `0x1803810a4` | TacRP cone scale (`36√2`) |
| `3.0f`/`π`/`−1/π` | `0x180380e28`, `0x180380e48`, `0x180381354` | TacRP cone model |
| `15.0f` | `0x180380fe4` | TFA deviation bound |
| `0.0001f` | `0x180380948` | TFA epsilon |
| `0.09f`/`0.25f` | `0x1803809e8`, `0x180380a58` | UTSWB falloff clamp and factor |
| `32768.0f` | `0x1803812d0` | Z-City fixed-point denominator |
| `1.5f` | `0x180380c50` | Z-City gain |
| `0.05f`/`2.0f` | `0x1803809c4`, `0x180380d20` | ZS dead zone and clamp |

## Draws that leave the image

Five bodies sample from a generator outside `m64.dll`; each is listed with file,
`_INDEX.tsv` row and reason in `src/features/weapon/README.md` under "Surviving
inferred items / draws that leave the image". In short: LuaJIT `math.random` for
CW/ArcCW/UTSWB, the game's `SharedRandom` for ARC9, `ComputeBulletDeviation` for TFA,
plus vstdlib `RandomFloat` in the ARC9 and TacRP refinement passes. Bounds, ordering,
scaling and refusals are reproduced.
