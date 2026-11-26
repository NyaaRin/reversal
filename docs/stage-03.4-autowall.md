# Stage 3.4 — autowall

Eleven `Features::Autowall::*` classes, plus the three engine trace filters they
drive. Source: `src/features/autowall/` (`trace_filter.h`, `penetration.h`,
`models.h`), tested by `src/features/autowall/selftest.cpp`.

The subsystem is a **distance budget**, not a damage table: each surface subtracts
the distance travelled from the remaining damage, and a trace result may override
the remainder with a penetration modifier clamped to `[0, 8192]`. When the
remainder reaches the floor the shot is refused with a reason the feature logs.

## Evidence

| Address | Corpus file (`re/dump/decompile/`) | `_INDEX.tsv` | Role |
|---|---|---|---|
| `0x1800ad340` | `0x1800ad340_FUN_1800ad340.c` | L1520 | the penetration loop (3642 bytes) |
| `0x1800ae2d0` | `0x1800ae2d0_FUN_1800ae2d0.c` | L1522 | decision wrapper, hit/miss logging, rate limit |
| `0x1800aced0` | `0x1800aced0_FUN_1800aced0.c` | L1515 | refusal reason table (10 strings) |
| `0x1800ad020` | `0x1800ad020_FUN_1800ad020.c` | L1518 | layer-count read, clamped to `[1,4]` |
| `0x1800acfc0` | `0x1800acfc0_FUN_1800acfc0.c` | L1517 | damage floor read (negative → 0) |
| `0x1800acf70` | `0x1800acf70_FUN_1800acf70.c` | L1516 | feature-enabled read |
| `0x1800996a0` | `0x1800996a0_FUN_1800996a0.c` | L1402 | Lua penetration callback (`Penetration`, `Damage`, `noricochet`) |
| `0x180020020` | `0x180020020_CTraceFilter_vfunc00.c` | L282 | `CTraceFilter::ShouldHitEntity` |
| `0x180020030` | `0x180020030_CDoubleTraceFilter_vfunc00.c` | L283 | `CDoubleTraceFilter::ShouldHitEntity` |
| `0x180020050` | `0x180020050_CTripleTraceFilter_vfunc00.c` | L284 | `CTripleTraceFilter::ShouldHitEntity` |
| `0x1800139e0` | `0x1800139e0_vfunc_shared_1800139e0.c` | L119 | filter slot 1, returns 0 |
| `0x180020010` | `0x180020010_vfunc_shared_180020010.c` | L281 | filter slot 2, returns 0 |

The parameter reads (`0x1800acf70`, `0x1800ad020`, `0x1800acfc0`, `0x1800996a0`) are
**Lua-config accesses**: each looks up a 64-bit key through the 36-byte nested-map
lookup `0x180241610` and then reads a bool/int/float out of the result. There is no
hashing step. That is why the tunables are script-driven while the loop and its
constants are in-image.

## Penetration loop (`0x1800ad340`)

```
budget  = damage
cursor  = eye position
layer   = 0

while (true) {
    trace(cursor -> cursor + direction * range)
    if (!hit)                          -> NoSurface      ("no surface between us")
    if (hit entity is the target)      -> Ok             (hit)
    if (surface missing)               -> NoSurface
    travel = |impact - cursor|
    if (layer >= maxLayers)            -> WallLimit      ("wall limit reached")
    budget -= travel
    if (modifier >= 0) budget = clamp(modifier, 0, 8192)
    budget -= thickness
    if (budget <= 0)                   -> DamageFloor    ("damage floor")
    layer += 1
    cursor = impact + direction * thickness
}
```

`maxLayers` comes from `0x1800ad020`, which returns `1` for any configured value
`<= 0` and clamps anything above `4` to `4` (`DAT_18033c6a0` holds the integer 4).

Distance falloff for a wall without a modifier is
`(damage - distanceBeforeWall) - distanceAfterWall`; the self-test asserts it is
monotonic in both legs.

## Refusal reasons (`0x1800aced0`)

`switch (DAT_1804236b8)` over 0..9, default `"damage floor"`:

| Value | String |
|---|---|
| 0 | `ok` |
| 1 | `pack has no autowall` |
| 2 | `pack penetration unavailable` |
| 3 | `no penetration budget` |
| 4 | `no surface between us` |
| 5 | `another body in the way` |
| 6 | `wall limit reached` |
| 7 | `pack refused this surface` |
| 8 | `out of range` |
| 9 | `damage floor` |

## Trace filter contract

All three filters are three-slot vtables; only slot 0 differs.

| Class | Slot 0 | Slot 1 | Slot 2 | Predicate |
|---|---|---|---|---|
| `CTraceFilter` | `0x180020020` | `0x1800139e0` | `0x180020010` | `entity != this[+8]` |
| `CDoubleTraceFilter` | `0x180020030` | `0x1800139e0` | `0x180020010` | `entity != this[+8] && entity != this[+0x10]` |
| `CTripleTraceFilter` | `0x180020050` | `0x1800139e0` | `0x180020010` | also `!= this[+0x18]` |

Slots 1 and 2 return `0` for every filter (`GetTraceType` / `ShouldCollide`
stubs). The filters skip exactly the entities stored in their fields and trace
everything else.

## The eleven classes

Slots 0..4 are read from `re/dump/vtable_methods.tsv`; the vtable RVA is from
`re/dump/rtti_classes.tsv`. Keys are the Lua literals each slot-3 body references.

| Class | vtable RVA | Slot 0 | Slot 1 | Slot 3 | Keys |
|---|---|---|---|---|---|
| `ARC9Autowall` | `0x33e378` | `0x18021ec70` | `0x180086cc0` | `0x1800aecf0` | `arc9_mod_penetration`, `Penetration`, `PenetrationDelta`, `MaxPenetrationLayers`, `Damage_Max`, `GetProcessedValue` |
| `ArcCWAutowall` | `0x33aa28` | `0x18021ec40` | `0x180081350` | `0x1800ae6e0` | `arccw_enable_penetration`, `arccw_mult_penetration` |
| `AutowallFeature` | `0x386028` | `0x18001e3e0` | `0x18001e3e0` | stub | — (feature, vfunc06 at `0x1800b1760`) |
| `CW20Autowall` | `0x3392c8` | `0x18021eca0` | `0x1800b0b70` | `0x1800b0bd0` | `PenStr`, `PenMod`, `PenetrativeRange`, `CanPenetrate`, `Damage` |
| `FAS2Autowall` | `0x33b868` | `0x18021ed00` | `0x1800b10a0` | `0x1800b10e0` | `PenStr`, `PenMod`, `PenetrationEnabled`, `Damage` |
| `HomigradAutowall` | `0x33d5d8` | `0x180013760` | `0x1800b1220` | stub | — |
| `M9KAutowall` | `0x33a0f8` | `0x18021ec70` | `0x18007cd20` | `0x1800b0790` | `M9KDamageMultiplier`, `M9KDisablePenetration`, `Penetration` |
| `SWBAutowall` | `0x3390e8` | `0x18021eca0` | `0x18007ad70` | `0x1800b0bd0` | shared with CW20 (`PenStr`, `PenMod`, `PenetrativeRange`, `CanPenetrate`, `Damage`) |
| `SWCSAutowall` | `0x30ff60` | `0x18021ecd0` | `0x180083ef0` | `0x1800af890` | `swcs_penetration_type`, `GetDamage`, `GetPenetration`, `GetRange`, `GetRangeModifier` |
| `TacRPAutowall` | `0x33c6c0` | `0x18021eca0` | `0x180089500` | `0x1800af1c0` | `tacrp_penetration` |
| `TFAAutowall` | `0x33cdd0` | `0x18021ecd0` | `0x18007f2a0` | `0x1800aff90` | `sv_tfa_bullet_penetration`, `sv_tfa_bullet_penetration_power_mul`, `sv_tfa_penetration_hardlimit`, `GetStatL`, `Primary.Damage`, `Primary.MaxSurfacePenetrationCount`, `Primary.PenetrationMultiplier`, `Primary.PenetrationPower` |

Shared bodies used by several slots: `0x1800ae8a0` (returns `[+0xc]`, writes
`[+0x10]`), `0x1800ae8b0` (returns `[+8]`), `0x1800acea0` (returns `8192.0f`),
`0x1800aceb0` (returns `4`), `0x1800acec0` (identity), `0x18001e3e0` (empty).

## Constants

| Constant | Address | Meaning |
|---|---|---|
| `8192.0f` | `0x1803812a4`, `0x18033c69c` | range clamp / modifier ceiling |
| `4` | `0x18033c6a0` | hard layer cap |
| `1` | `0x1800ad020` default | layers when the config is `<= 0` |
| `0.5f` | `0x180380ac0` | loop half-step |
| `1.0f` | `0x180380bb0` | loop unit step |
| `6.0f` | `0x180380f40` | target proximity tolerance at lines 329/334 |
| `0.5f` | `0x180380cb0` | log rate-limit window, seconds |

## Residual closure pass

### The Lua readers do not hash

`0x180241610` is 36 bytes: it calls `FUN_180241a30` (353-byte red-black tree
lookup) and returns `*node + 0x28`. `0x1801fcfc0` / `0x1802029c0` are the
RTTI-checked `std::any` casts to `bool` / `int`. The three parameter keys are
ordinary map keys, not hashed constants:

| Reader | Key |
|---|---|
| `0x1800acf70` | `0xe0a48c0d8e551c4c` |
| `0x1800ad020` | `0xe7e1311753777c16` |
| `0x1800acfc0` | `0xef946101541b4e0d` |

### The empty key lists were a scan error

`0x1800b0bd0` (338 B, CW20 **and** SWB) reads five names directly from the
weapon table: `"PenStr"`, `"PenMod"`, `"PenetrativeRange"`, `"CanPenetrate"`,
`"Damage"`. Fields: `+8` PenStr, `+0xc` PenMod (default 1.0), `+0x10` range
(default 8192.0), `+0x14` damage, `+0x18` damage-present, `+0x19` CanPenetrate,
`+0x1a` model-valid.

`0x1800b10e0` (281 B, FAS2) reads `"PenStr"`, `"PenMod"`,
`"PenetrationEnabled"`, `"Damage"`. Fields: `+8` PenStr, `+0xc` PenMod,
`+0x10` damage, `+0x14` damage-present, `+0x15` penetration-enabled, `+0x16`
model-valid. Homigrad's slot 3 is the empty stub `0x18001e3e0`.

### `6.0f` is a proximity tolerance

At `0x1800ad340` the value is loaded at line 265 and used at lines 329/334 as a
six-unit window around the target test:

```
if (0 < along && along <= targetDistance + 6.0f) {
    endpoint = bVar2 ? targetDistance : endpointDistance;
    if (along - 6.0f <= endpoint) -> target hit
}
```

It is not a divisor and not part of damage falloff.

### Data objects

| Object | Extent | Writers / readers |
|---|---|---|
| `DAT_1804236c8` | 4 B | written `0x1800ad340` lines 168, 287, 297; read `0x1800ae2d0` lines 140/159 |
| `DAT_1804236c4` | 4 B | written `0x1800ad340` line 349 from `FUN_1800aa2b0`; read `0x1800ae2d0` lines 123/127/145 |

Both are loop scratch globals initialised to zero at the top of the body. The
material byte comes from `FUN_1800aa2b0`, the engine surface database; its value
cannot be enumerated in-corpus, only its writer and all readers are listed here.
The target identity test is supplied by the caller as `TraceResult::target` for
the same reason (entity pointers are runtime values).

## What the self-test proves

`build\autowall_selftest.exe`:

* all eleven classes exist, route by name, and resolve to their own vtable row;
* SWCS slot 1 is `0x180083ef0`, M9K slot 3 is `0x1800b0790`, TFA exposes 8 keys;
* CW20/SWB expose the five `PenStr`/`PenMod`/`PenetrativeRange`/`CanPenetrate`/
  `Damage` keys, FAS2 exposes its four names, and the config reader is the
  36-byte nested lookup at `0x180241610`, not a hash;
* the three filters accept a stranger and reject exactly their skipped entities,
  and all return trace type 0;
* each of the ten refusal reasons maps onto its exact image string;
* layer counts clamp to `[1,4]` from `0`, negative, valid and oversized inputs;
* falloff is monotonic in both legs of travel;
* the loop: no geometry → `no surface between us`; clear line → hit; zero budget →
  `no penetration budget`; one wall → `wall limit reached` with reduced damage; a
  thicker wall leaves strictly less; an oversized modifier clamps to the range; a
  two-layer budget passes two walls and leaves less than one.
