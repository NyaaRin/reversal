# No-spread and compensation — reconstructed source

This is the subsystem the plan asked to pull out of `m64.dll` and make readable.
It is not a copy of the binary's code: it is a reconstruction written from the
decompiled functions, with every behaviour traceable to an address.

## Evidence map

| Address | Recovered role | Function |
|---------|----------------|----------|
| `0x1800860c0` | `SWCSWeaponBackend::vfunc04` — spread compensation entry | `compensation.h` |
| `0x1800859c0` | cone solver: inaccuracy draw, spread draw, angle shaping | `swcs_spread.h` |
| `0x180082310` | Lua seed extraction (`game.SinglePlayer`, `math.randomseed`, `util.SharedRandom`) | `swcs_spread.h` (`SeedForCommand`) |
| `0x180085870` | `GetSpread` — the weapon's cone, supplied by the backend | `WeaponParams::spread` |
| `0x1800a4c80` | `[OCTO-FIT]` muzzle pitch calibration | tracked in `STAGES.md` 3.6 |
| `0x1800df780` | `[NS-VERIFY-PHYS]` verification against the physical bullet | tracked in `STAGES.md` 3.9 |
| `0x180104260` | `[NVR-PUNCH]` no-visual-recoil verdict | tracked in `STAGES.md` 3.6 |

## Constants (verified against the image, not inferred)

| Address | Value | Meaning |
|---------|-------|---------|
| `0x180380a08` | `4.656612875e-10` | `1 / 2^31`, normalizes a 31-bit draw to `[0,1)` |
| `0x180380d00` | `0.99999988` | upper clamp on a normalized draw |
| `0x180380d08` | `1.0` | force-spread value |
| `0x180380d48` | `3.0` | speed threshold for the upward-only penalty |
| `0x1803813b0` | `-1.0` | speed step in that penalty loop |
| `0x180380d90` | `2*pi` | random cone angle range |
| `0x180380d28` | `pi/2` | fixed cone angle |
| `0x1803817c0` | `0x7fffffff` | float sign mask |
| `0x18033f570` | `"%d"` | seed string format |
| `0x1803813e0` / `0x180380ee8` | `-1337` / `+1337` | seed bias pushed to Lua |

The strings `[NS-SEED] OK: sr=%.4f modulo=%d rounded=%.0f seed='%s' addSeed=%.0f`
and `[SWCS-NS] inacc=%.5f(cached %.5f) spread=%.5f recoilIdx=%.2f ...` confirm the
draw order: inaccuracy first, spread second, then the two-term cone sum.

## What the algorithm is

1. **Seed.** The command number is formatted as a decimal string, hashed, and one
   digest byte is folded into a word with `~(byte & swcs_weapon_max_spread_seed)`.
   The same command number therefore produces the same cone on any machine.
2. **Inaccuracy.** A draw normalized by `1/2^31`, then shaped: square-and-invert
   for `weapon_accuracy_nospread`, repeated squaring per unit of missing speed for
   the upward-only penalty, forced to `1.0` by `weapon_accuracy_forcespread`.
3. **Spread.** A second draw from the same stream becomes the cone angle
   (`draw * 2*pi`), or is taken from the shotgun pellet pattern when
   `weapon_accuracy_shotgun_spread_patterns` is set.
4. **Cone.** Two terms, each with its own angle: the deterministic spread cone at
   a fixed angle, plus the inaccuracy cone at the drawn angle.
5. **Compensation.** The command angles are converted to a direction, rotated by
   the cone offset, converted back, and the error against the aim is subtracted
   from the command. Three passes, matching the original's bound.

## Honest limits

* `RandomFloat01`'s generator is now observed, not inferred: `0x180083d00` was
  read in full (stage 3.2) and is the Numerical Recipes `ran1` generator —
  Park–Miller `16807`/`127773` plus a 32-entry Bays–Durham shuffle warmed up over
  39 steps, with `1/2^31` normalization. See
  `../seed/random_ran1.h`; the previously guessed LCG constants are gone.
* The digest byte index (`7`) comes from a 64-bit load shifted by 56; a different
  compiler may pick another byte. The seed is stable either way, but it will not
  match the original's stream until the index is confirmed against a live shot.
* `GetSpread` per weapon is not reproduced: it is weapon data, supplied through
  `WeaponParams` by the weapon backend (stage 3.2).

## Build

```
Gmod\Skyfall\build.bat
```

Compiles `selftest.cpp` with the repo's MSVC toolchain and runs it. The test
checks the MD5 vectors, seed stability, angle round-trips, and that a compensated
command lands the shot back on the aim — the last one is the check that matters,
because a sign error there still produces plausible-looking angles.
