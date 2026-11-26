# Stage 3.5 — targeting (`Aimbot`, `RageAim`, `Triggerbot`)

Source: `src/features/aim/` — `targeting.h` (gates, scoring, selection),
`smoothing.h` (aim-step interpolation), `triggerbot.h` (hit confirmation and
timing), `aim_feature.h` (the three classes and the per-tick glue). Tested by
`src/features/aim/selftest.cpp`.

The subsystem runs in this order each tick: **gates → candidate collection →
scoring → selection with hysteresis → smoothing → angle write**, or for the
triggerbot, **trace → gate → hold → burst gate → fire**.

## Evidence

| Address | Corpus file (`re/dump/decompile/`) | `_INDEX.tsv` | Role |
|---|---|---|---|
| `0x1800cfb30` | `0x1800cfb30_FUN_1800cfb30.c` | L1819 | per-tick picker: dedupe, sticky target, angle output (4131 B) |
| `0x1800cef20` | `0x1800cef20_FUN_1800cef20.c` | L1816 | candidate collection: players, backtrack ring, other entities (2175 B) |
| `0x1800cf820` | `0x1800cf820_FUN_1800cf820.c` | L1817 | scoring and insertion (619 B) |
| `0x1800c5030` | `0x1800c5030_FUN_1800c5030.c` | L1756 | target validity gate chain (1186 B) |
| `0x1800c4a70` | `0x1800c4a70_FUN_1800c4a70.c` | L1753 | aim point: shoot pos, eye pos, simtime, origin (143 B) |
| `0x1800ce2c0` | `0x1800ce2c0_FUN_1800ce2c0.c` | L1809 | FOV read and clamp to `[0,180]` (170 B) |
| `0x1800d1750` | `0x1800d1750_FUN_1800d1750.c` | L1822 | the tick: collect, pick, smooth, clamp, log (4570 B) |
| `0x1800d0b60` | `0x1800d0b60_FUN_1800d0b60.c` | L1820 | aim-step interpolation (1478 B) |
| `0x1800d1180` | `0x1800d1180_FUN_1800d1180.c` | L1821 | `[AIM]` diagnostic line and hitgroup names (1394 B) |
| `0x1800e2580` | `0x1800e2580_Features_Triggerbot_TriggerbotFeature_vfunc02.c` | L1918 | triggerbot tick (3336 B) |
| `0x1800cb010` | `0x1800cb010_Features_Aimbot_AimbotFeature_vfunc16.c` | L1799 | Aimbot teardown: 64 per-player records |
| `0x1800d64c0` | `0x1800d64c0_Features_RageAim_RageAimFeature_vfunc16.c` | L1844 | RageAim teardown: config stash + `cl_lagcompensation` |
| `0x1800d5310` | `0x1800d5310_Features_RageAim_RageAimFeature_vfunc02.c` | L1843 | RageAim tick (4319 B) |
| `0x1800d3460` | `0x1800d3460_Features_Aimbot_AimbotFeature_vfunc02.c` | L1833 | Aimbot slot 2 |

### Correction to a tag mapping

The `[AIM-*]` tags are **not** the aimbot's own logging. `[AIM-POSE]` and
`[AIM-SEH]` live in the backtrack/pose code (`0x1800c6c50`, and the SEH wrapper
at `0x1802e3ae6`), `[AIM-HB]` in the hitbox/pose enumerator `0x1800cbbd0`, and
`[AIM]` (no suffix) is the diagnostic line of `0x1800d1180`. The aim path itself
prints `[AIM]` and `[AIM DIAG]`; nothing in the picker or the smoother prints a
tagged line. Earlier notes that treated `[AIM-*]` as a family belonging to the
aimbot are corrected here.

## Target selection and scoring

`0x1800cef20` builds the candidate list:

1. the local player is resolved, then every client index `1 .. maxClients`
   (`DAT_1803fa608[7]`) is tested with `FUN_1800c5030`;
2. each passing entity is resolved to an aim point with `FUN_1800c4a70` and
   scored into the list via `0x1800cf820`;
3. a second loop walks indices above `maxClients` for non-player entities using
   `FUN_1800c54e0` (the "other entity" filter);
4. if the backtrack list is enabled, the ring `DAT_1803fac58 .. +0x30d` (record
   stride `0x30d` qwords = `0x1868` bytes) is walked and each record is scored
   with `FUN_1800c69c0` / `FUN_1800c6ab0` as the tick and penetration source.

`0x1800cf820` scores one point:

```
score = angle(eye, point)                       // FUN_1800ce630
threshold = fov
if (candidate == locked target && 0 <= prev <= cur && cur - prev <= 0.2)
    threshold = min(fov + min(fov * 0.15, 1.5), 180)
key = distance(point, eye)      if the distance-key flag is set
    = best + bias               otherwise, best = min(score, previous best)
if (candidate == locked target) key *= 0.85
push { entity, record, score, key } if best <= threshold
```

`0x1800cfb30` then walks the list in insertion order, keeps a running best under
a **strict** `<` comparison (ties keep the earlier entry), discounts a revisit of
the previous hitbox group by `0.95` (`0x180380b74`), and breaks out after 10
distinct entities or 3 records for one entity. It writes the winning angles into
the command vector and stores the winner in `DAT_1803e8a28` for the next frame's
hysteresis.

Selection is therefore **minimum angular error**, modified by three rules:

| Rule | Constant | Effect |
|---|---|---|
| locked-target threshold | `0.15`, cap `1.5`, window `0.2°` | a worse candidate may stay acquired |
| locked-target key discount | `0.85` | the current target orders earlier |
| same hitbox group discount | `0.95` | re-aiming at the same box is preferred |

## Gate chain (`0x1800c5030`)

In order, each returning `false`:

| Check | Detail | Config key |
|---|---|---|
| null / self | `param_1 == param_2` | — |
| readable | `IsBadReadPtr(entity, 8)` and `[entity]` | — |
| client entity | vfunc `0x20` non-null | — |
| index | `1 <= index` and `index <= maxClients` (equal is allowed) | — |
| model | vfunc `0x28` non-null | — |
| dormant | vfunc `0x40`, then distance vs the per-index table `DAT_1803ff300` with margin `0.25` | `0xe5e03453c741697f` |
| distance gate | second pass on the same table | `0x8dbcb6da1c093609` |
| alive / health | `FUN_18001c330`, `FUN_18001c680 > 0` | — |
| team | `FUN_18001c560(entity) == FUN_18001c560(authority)` | `0x585adea58af62688` |
| dead | skips players with no health | `0xb893a7799007b22f` |
| `EF_NODRAW` | `flags & 0x40` | `0x8ae1ad0adb54c4f0` |
| dormant flag | `FUN_18001fad0 != 0` | — |
| ignore list | `FUN_1800c4740(index)` | `0x216df9830429193f` |
| extension | one of four optional callbacks, plus `DAT_1803feb28` | `0x7f0b28cb8d45cb74` |

The reconstructed `CheckTarget` keeps the same order and returns a
`GateRefusal` naming the rule that fired.

## FOV (`0x1800ce2c0`)

Reads the Lua float under `0xfb3877511c4b6892` (root `0xf7521f28977a3033`),
rejects a non-finite or non-positive value to `0`, clamps above `180`. A change is
logged once as `[AIM DIAG] FOV changed to %.1f`.

## Smoothing (`0x1800d0b60`)

Called from `0x1800d1750` with the user smoothing value and the frame delta. The
function keeps a persistent accumulator (`DAT_180425abc`) and a last-ratio
(`DAT_1804258a0`):

```
step    = clamp(dt, 0.0005, 0.05)         // 0x180380958 / 0x1803809c4
accum  += step
error   = hypot(dyaw, dpitch)
if error <= snap (0.02, cap 45)  -> write target exactly, reset accum, return 1.0
k       = max(smooth, 0.01) / 66          // 0x180380980 / 0x1803810d4
k      *= (1 - clamp(0.1 * accum, 0, 0.9))     // when the curve keys exist
ratio   = error / max(k, 0.02)
if last < ratio:
    gamma = max(k * 0.45, 0.02)
    ratio = (1 - exp(-step / gamma)) * (ratio - last) + last
fraction = min(ratio * step, error) / error
current += fraction * delta
```

The instant path is not a separate function: `0x1800d1750` tests `smooth <= 0`
and writes the target angles directly with a step of `1.0`. That is the path
RageAim uses.

## Triggerbot (`0x1800e2580`)

State on the feature object: `+0x08` last target, `+0x10` hold ticks, `+0x14`
cooldown, `+0x18` burst, `+0x1c` burst limit, `+0x20` fired-this-tick.

```
if (!enabled) return                                   // 0x574fa339fade2366
if (cooldown > 0) { --cooldown; return }
trace(eye_or_muzzle, crosshair point, mask 0x46004003, CDoubleTraceFilter(local))
if (!hit || hit == local || same team || health < 1) { clear state; return }
if (hit != lastTarget) { lastTarget = hit; hold = 0; burst = 0; burstLimit = rand()%4 + 2 }
++hold
delay = max(1, cfg_ms / 15) + jitter                   // 0x180380fe4 = 15
if (hold < delay) return WAITING
if (randomize && burst >= burstLimit) {
    cooldown = rand()%8 + 4; hold = 0; burstLimit = rand()%4 + 2; return COOLDOWN
}
if (!weaponCanFire) return WEAPON_BLOCKED
++burst; set IN_ATTACK; DAT_1803db5ee = 1; return FIRE
```

Timing contract:

| Quantity | Expression | Range |
|---|---|---|
| base delay | `(int)(configured_ms / 15.0f)`, min 1 | ≥ 1 tick |
| jitter | `rand() % 5 - 2`, refreshed every `10 + rand()%20` held ticks | `[-2, +2]` |
| burst limit | `rand() % 4 + 2` | `[2, 5]` |
| cooldown | `rand() % 8 + 4` | `[4, 11]` ticks |

The weapon gate merges the body's four checks: `FUN_1800e2410` (weapon fires
bullets), `FUN_1800e2330` (semi-auto), `FUN_1800e2280` (can primary attack now,
with the `0.085 s` minimum interval at `0x180380c40`) and `FUN_1800e2430` (clip
non-empty for automatic fire).

## Constants

| Value | Address | Used by |
|---|---|---|
| `0.2` (double) | `0x180380c80` | sticky angle window |
| `0.15` | `0x180380a1c` | sticky threshold gain |
| `1.5` | `0x180380c50` | sticky bonus cap |
| `180.0` | `0x180381188` | FOV cap / pitch wrap |
| `0.85` | `0x180380b4c` | locked-target key discount |
| `0.95` | `0x180380b74` | same-hitbox-group discount |
| `0.25` | `0x180380a58` | dormant distance margin |
| `1e9` | `0x1803812fc` | distance sentinel / ns per second |
| `8192.0` | `0x1803812a4` | trace and weapon range |
| `0.0005` / `0.05` | `0x180380958` / `0x1803809c4` | smoothing step bounds |
| `0.02` | `0x1803809a0` | snap distance default |
| `45.0` | `0x180381094` | snap distance cap |
| `66.0` | `0x1803810d4` | smoothing divisor |
| `0.01` | `0x180380980` | smoothing floor |
| `0.000099` | `0x180380948` | minimum k |
| `0.45` | `0x180380ab0` | easing gamma |
| `0.1` / `0.9` | `0x1803809ec` / `0x180380b68` | curve scale / cap |
| `1.25` | `0x180380c00` | boost threshold |
| `15.0` | `0x180380fe4` | milliseconds per tick |
| `0.015` (double) | `0x180380bd0` | interval fallback |
| `0.085` (double) | `0x180380c40` | minimum shot interval |
| `0x46004003` | call site | `MASK_SHOT` |

## Feature addresses

| Class | vtable RVA | slot 2 | slot 16 |
|---|---|---|---|
| `Features::Aimbot::AimbotFeature` | `0x338e00` | `0x1800d3460` | `0x1800cb010` |
| `Features::RageAim::RageAimFeature` | `0x33ae88` | `0x1800d5310` | `0x1800d64c0` |
| `Features::Triggerbot::TriggerbotFeature` | `0x33d2a8` | `0x1800e2580` | — |

`0x1800cb010` loops `0x1804f6cf0 .. 0x1805580f0` in steps of `0x30a` qwords
(`0x1850` bytes): 64 per-player aim records. Each iteration clears a `0x1800`
scratch block, runs `FUN_180202a70` on it and `FUN_1800a2ba0` on the record.

`0x1800d64c0` writes the stashed boolean once (root `0xf7521f28977a3033` →
`0x9653fa4f0c4e1755`), then, if `DAT_1804096bc` is set, issues
`cl_lagcompensation 1` and logs `[EXPLOIT] cl_lagcompensation restored on teardown`.

## Residual closure pass

### The picker metric is `0x1800ce630`, not the inline hypot form

`0x1800cf820` calls `FUN_1800ce630(*param_1, param_4, param_5, param_6)`. The
body (741 B) uses a view frame `{origin[3], forward[3], valid byte}` and
`FUN_1800cb220` (316 B) for each point:

```
cos(point) = dot(point - origin, forward) / |point - origin|   // clamped [-1,1]
invalid frame, |delta| <= 0.001, or non-finite -> -2.0f
```

It takes the maximum cosine over the three points, computes a closest-approach
point on the `p2..p3` segment (`fabs(denom) > 1e-6`, parameter in `(0,1)`), adds
that point to the maximum, then returns `acos(cos) / 0.017453292` (degrees). If
the result is non-finite or the maximum cosine is below `-1`, it returns
`FLT_MAX` (`0x180381308`), not `180`. The inline `hypot(dyaw*cos(mid), dpitch)`
form belongs to `0x1800d1180` / `0x1800d1750` diagnostics and is retained only as
`AngularDistance`; it is not used by the picker model. The self-test now asserts
the real metric: axis point 0°, 45° offset 45°, invalid frame `FLT_MAX`.

### The hitbox field is a threshold

`0x1800c4900` (108 B) is called from `0x1800cf820` at the hitbox-table write. It
returns `fov` or, when the candidate is `DAT_1803e8a28` and the window
`0 <= start <= end && end-start <= 0.2`, `min(fov + min(fov*0.15, 1.5), 180)`.
That is exactly `StickyThreshold`; the table's second dword is therefore a
**threshold**, not a penetration value. Both call sites (`0x1800cf820`,
`0x1800cbbd0`) use it as the acceptance bound. The table is `0x81` entries of
`0xc` bytes at `0x1803e8a60`, i.e. exactly `0x60c` bytes, bounded by the
`iVar3 - 1U < 0x81` check at the write site and the same `0x81` bound in the
trigger path.

### Frame step is a proven clamp

Disassembly at `0x1800d0c14..0x1800d0c47` shows the three candidates: the stack
slot holds `param_4` (dt) at `+0x24`, the initial slot holds `0x3a03126f`
(`0.0005f`), and `0x18033c670` holds `0.05f`. `comiss` against `0x180380958`
(`0.0005`) selects dt with `cmovbe`; `comiss` against `0x1803809c4` (`0.05`)
selects the ceiling with `cmova`. The result is exactly
`clamp(dt, 0.0005, 0.05)`, so the former assumption is closed.

### Curve keys and the shared key

The curve block reads, under `0xf7521f28977a3033` → `0xdc8f15f640c36b21` →
`0x3203b4acc51e8a98` → `0x16b8c441e119cc7a`, three float keys:

| Key | Role |
|---|---|
| `0x46d7ec514677a08b` | lower bound (`pfVar8`) |
| `0x46bd02514660fe35` | upper bound (`pfVar6`) |
| `0x1b82d4fa2b9cb358` | scale, multiplied by `0.1 * accumulator` (`0x1803809ec`) |

The value is clamped between the lower/upper keys, then into `[0, 0.9]`
(`0x180380b68`). The names are not in the image, but the roles and constants are
now reconstructed.

`0x9653fa4f0c4e1755` (under `0xf7521f28977a3033`) is the triggerbot
randomisation flag: `0x1800e2580` reads it at lines 324 and 402, and RageAim's
teardown `0x1800d64c0` writes the stashed `DAT_1803e7c74` value back through the
same key. It is one setting temporarily overridden by RageAim, not two unrelated
users of a colliding key.

### CRT random state

The triggerbot imports `rand` from `API-MS-WIN-CRT-UTILITY-L1-1-0.DLL`
(`imports.tsv` ordinal `0x179`) and calls it at `0x1800e2580` lines 304, 333,
335, 352, 359 and 460. No `srand` call exists in the body or in its direct
callees, so the sequence is process-global CRT state outside the image. The
ranges (`rand()%4+2`, `rand()%8+4`, `rand()%5-2`, `rand()%20+10`) are exact and
the deterministic `TriggerRandom` stands in only for the sequence, not the
ranges. This is an external-state limitation with all call sites enumerated.

Entity vtable slots `0x20`, `0x28`, `0x40`, `0x48` remain caller-supplied engine
interfaces; `GateInputs` carries their values so the chain stays testable.

## What the self-test proves

`build\aim_selftest.exe` — 94 assertions:

* the legacy diagnostic metric is zero for identical angles, linear for small
  offsets, and takes the short way around the wrap;
* the picker metric `0x1800ce630` scores the axis as 0, a 45-degree point as 45,
  keeps the worst of three scored points, and returns `FLT_MAX` for an invalid
  frame; `0x1800c4900` returns the capped sticky threshold, not penetration;
* the sticky threshold is plain when unlocked, `+15%` inside the window, capped at
  `1.5°` and at `180°`; the window is `0.2°` wide and rejects a decreasing error;
* every gate rule refuses for its own reason, and disabling the team check lets a
  teammate through while NODRAW still refuses;
* the closer candidate orders first under the angle key and under the distance
  key; the locked target is discounted `0.85`; the same group `0.95`;
* the list holds 10 entities and 3 records; the lowest key wins;
* FOV accept/reject, out-of-range drop, instant write-through, and one smoothed
  frame moving partway;
* smoothing is monotone over 400 frames, snaps inside the snap distance, moves
  less at a higher smoothing value, and wraps pitch;
* triggerbot: `0 ms → 1 tick`, `45 ms → 3 ticks`, two waiting ticks then fire,
  burst counting, reset on target loss, weapon block, disable, cooldown under
  randomisation, and re-arm on target switch;
* helpers: FOV clamp, hitgroup names (`HEAD`, `stomach`, `chest`, `arm`, `leg`,
  `center`, `?`), the 64 player records, and the three observed feature addresses.
