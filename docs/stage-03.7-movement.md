# Stage 3.7 — Movement

The movement family is the cluster that follows Visual/ESP in the plan
(`STAGES.md`, stage table row 3.7). Eight `Features::*::*Feature` classes were
recovered; all eight edit the user command in their tick body rather than running
their own loop.

## Classes and entry points

| Class | Vtable RVA | Tick | Size | Role |
|---|---|---|---|---|
| `Features::BunnyHop::BunnyHopFeature` | `0x33c858` | slot 2 `0x1800c2e90` | 204 | clears `IN_JUMP` unless rising in air |
| `Features::Autostrafe::AutostrafeFeature` | `0x33b510` | slot 1 `0x1800e1280` | 2516 | rotates the strafe basis while jump is held |
| `Features::EdgeJump::EdgeJumpFeature` | `0x30fc58` | slot 2 `0x1800c3bc0` | 308 | sets `IN_JUMP` when the edge probe fires |
| `Features::JumpBug::JumpBugFeature` | `0x339cc0` | slot 2 `0x180106b80` | 827 | ducks and releases jump when the simulation says the jump failed |
| `Features::FakeDuck::FakeDuckFeature` | `0x33a988` | slot 1 `0x180105310` | 344 | forces the duck bit while the crouch state is valid |
| `Features::Airstuck::AirstuckFeature` | `0x33ad68` | slot 2 `0x18013fa40` | 1394 | freezes the command on an adaptive timer |
| `Features::Speedhack::SpeedhackFeature` | `0x30fe20` | slot 2 `0x180140920` | 583 | publishes a clamped time factor |
| `Features::MoveFix::MoveFixFeature` | `0x338f78` | slot 2 `0x1800e2040` | 426 | mixes the movement basis by the yaw delta |

Slot numbers come from `re/dump/vtable_methods.tsv`. `Autostrafe` and `FakeDuck`
use slot 1; the other six use slot 2. Their shared base's default slot body is
`0x18001e3e0`.

## Command layout

Every body touches the same structure:

| Offset | Field | Evidence |
|---|---|---|
| `+0x0c` | view angles | `0x1800e2040` reads `param_4 + 0xc`; `0x1800e1280` writes `param_3 + 0x14` style fields |
| `+0x14` | forward move | `0x18013fa40` writes `*(undefined8 *)(param_3 + 0x14) = 0` |
| `+0x1c` | up move | `0x18013fa40` writes `*(undefined4 *)(param_3 + 0x1c) = 0` |
| `+0x20` | buttons | every body reads or writes it |

Button bits: `IN_JUMP = 0x2`, `IN_DUCK = 0x4`. Airstuck's clear mask is
`0xfffff9e1`, i.e. it clears `0x61e` — jump, duck, forward and back.

## Per-feature behaviour

### BunnyHop `0x1800c2e90`

Armed by `DAT_18040986c`. With the simulation flag `DAT_1803de067` clear it only
sets `DAT_180409875`/`DAT_180409874` and clears `DAT_180409858`, leaving the
command alone. Otherwise: airborne **and** rising (`FUN_18001d710` bit 0 clear and
`FUN_18001d530(+8) > 0`) sets `DAT_18040985c` and returns; every other path clears
`IN_JUMP`.

### EdgeJump `0x1800c3bc0`

When the probe fires it sets `IN_JUMP`, increments `DAT_18040a644`, and logs while
the count is below `0xb` (11):

```
[EDGEJUMP] fire #%d speed=%.0f source=%s at (%.0f %.0f %.0f)
```

`source` is `"traces"`, or `"engine sim"` when `DAT_1803de067` is set.

### JumpBug `0x180106b80`

The result of the simulated tick decides: a jump that did not clear the ground and
did not gain vertical speed means `*(cmd+0x20) |= 4` and `&= ~2`. When the sim is
absent it only prints:

```
[JUMPBUG] sent: IN_DUCK=%d IN_JUMP=%d (no sim, result next tick)
```

The full diagnostic is emitted below 21 sends and includes `m_flDucktime`
(`0x1801056f0`), `hullGap`, `rayGap` and `n.z`.

### FakeDuck `0x180105310`

Reads the crouch state at `player + 0x20`. Below 1 it clears `IN_DUCK` and zeroes
`*DAT_1803db430`; otherwise it sets `IN_DUCK`. Two config keys gate it:
`0x5c61b11ceab8fecb` (enable) and `0x15b58d95d09e07fe` (mode).

### Airstuck `0x18013fa40`

Key `0x42dfcfdb85d00c63` (enable) and `0x14aaa39e12056f36` (mode, 1..254).
Mode 1 is the adaptive path:

* `DAT_1803e7cf4` is the interval, default `0xfa` = **250 ms**;
* each measured fall grows it by `0x19` = **25 ms**, capped at **3000**;
* a fall larger than `avgDrop * 3.0 + 4.0` instead decays it to
  `interval * 0.6`, floored at `0x78` = **120 ms**;
* the average drop mixes at `0.8 old + 0.2 new` (`0x180380b3c`, `0x180380a3c`);
* the auto interval comes from key `0x73634b3d3ddd8dca`, clamped to
  `[0, 10000]`, unless the "auto" key `0x1f136f05274bb28d` is set;
* every eighth tick (`DAT_1803ff250 & 7`) logs
  `[AIRSTUCK] auto interval=%dms avgDrop=%.1fu`.

Every active path zeroes `+0x14`/`+0x1c` and applies `& 0xfffff9e1`.

### Speedhack `0x180140920`

Enable key `0x2cad3795fc8b129f`, binding key `0x647450219ebf53aa`, factor key
`0x6682ac5b6cd814e3`. The factor is compared against `0.0` (`0x1803809c4`) and
`3.0` (`0x180380e28`); values outside are replaced by the stored bounds `0.05`
(`0x1803310e4`) and `3.0` (`0x1803310e0`). The published value is
`DAT_1803e90b8`; a state change or a new integer percentage (`* 100`,
`0x180381120`) logs:

```
[SPEED] on=%d held=%d hooks=%d factor=%.2f frametime=%.5f
```

The fallback frame time is `-1.0` (`0x180381384`) when the global is null.
The `hooks` field is `DAT_180423572`, set by the Stage 3.11 frametime scan
`0x1801f7d00` to `Host_AccumulateTime` hook success (`[SPEED] Host_AccumulateTime
hook=%s`), so it reads 1 only when the speedhack hook is live.

### MoveFix `0x1800e2040`

Delegates to `0x1800e1d50` when the class id is 9 or the move type is above 1.
Otherwise, if the view yaw changed, it computes the delta with a 360-degree wrap
(`0x18038120c`), converts with `0.017453292` (`0x180380994`), and rebuilds:

```
forward = cos(delta + 90) * side + cos(delta) * forward
side    = sin(delta + 90) * side + sin(delta) * forward
```

`90.0` is `0x18038110c`; the dead zone is `0.0099999` (`0x180380980`).

### Autostrafe `0x1800e1280`

Section token `0x2deb6b899a38d4e8`, registered as a child of the shared
`0x93fd561a96ab0c67` root. Enable key
`0x402819404e703058`, mode key `0x207b6d725748ed5f`. Gate: live player, class id 2
(`0x18001e0a0`), move type <= 1 (`0x18001fcf0`), and `IN_JUMP` in this or the
previous command. The body then calls `0x1800e1c60` to set the movement angle and
builds the strafe yaw from `atan2(vel.y, vel.x) * 57.295776` (`0x1803810bc`), or
keeps the command yaw at or below 15 u/s; `7500.0` (`0x180381298`) is the move
unit written to the command, not the atan2 scale.

## Wiring

`src/features/movement/cmd.h` holds the command layout and bit constants;
`features.h` holds all eight features with their addresses as `constexpr`.
`MovementSet` groups them; it is not claimed to be a dispatcher found in the DLL —
no combined mover exists in the corpus (see the negative-evidence table below).

## Residual closure pass

### Autostrafe's mode branches

The body is 2516 bytes. Its constants are now read, not sampled:

| Constant | Address | Value | Use |
|---|---|---|---|
| speed gate | `0x180380fe4` | 15.0 | velocity yaw is used only above this |
| mode-2 gate | `0x180381068` | 30.0 | low-speed 90-degree path |
| mode-1 gate | `0x180381094` | 45.0 | minimum speed for the asin path |
| radians→degrees | `0x1803810bc` | 57.295776 | `atan2` scaling |
| move unit | `0x180381298` | 7500.0 | forward/side command multiplier |
| negative move unit | `0x18038143c` | -7500.0 | opposite side |
| quarter turn | `0x18038110c` | 90.0 | `SetMoveAngle` argument |
| percent | `0x180381120` | 100.0 | speed ratio |
| mode-2 clamp low | `0x180381004` | 18.0 | target-speed cap |

`0x1800e1c60` (236 B) is the movement-angle writer: `lround(angle/45)`, then
`forward = sign(cos)`, `side = sign(sin)`, with a `0.001` dead band. It writes
`+0x14` / `+0x18` only. The model now exposes it as `SetMoveAngle`.

The branch structure, in body order:

| Condition | Action |
|---|---|
| enabled false, gate false, class != 2, move type > 1, no jump in either command | return |
| `DAT_1804253f0` counter: ground flag set | `++counter`, else `counter = 0` |
| speed > 15 | base yaw = `atan2(vel.y, vel.x) * 57.295776`; else command yaw `cmd+0xc` |
| mode 0, counter 0 | read `short cmd+0x30`; zero → return; clamp to `[-1,2]`; write `cmd+0x18 = value * 7500`; if both `cmd+0x14` and the value are zero → return; call `atan2` |
| mode 0, counter != 0, aux key false | require `short cmd+0x30 == 0` and counter == 1; write bytes `+0x14..+0x17 = 00 60 EA 45` (float 7500.0) |
| mode 0, counter != 0, aux key true | `SetMoveAngle(cmd, currentYaw)` |
| mode != 0, counter 0 | build direction angle from button bits 8/0x10 (forward/back) and 0x400/0x200 (left/right); no direction → `bVar4 = false` |
| mode 2, speed <= 30 | `SetMoveAngle(cmd, ±90)` |
| mode 2, speed > 30 | read mode-2 scale key, clamp to `[10,90]`, divide by 90 and multiply by 18 (target speed 2..18); clamp result to `[1,18]`; predict speed and apply `±7500` |
| other mode, counter 0 | if mode 1 and no direction and `short cmd+0x30 == 0` → return; if speed < 45 → return; read mode-cap key, clamp to `[2,18]`; `asin(15/speed)` clamped to that cap, times 57.295776; choose `±7500` |
| counter != 0 | aux key false → return; aux true → `SetMoveAngle(cmd, currentYaw)` |

Config keys, all under the `0x2deb6b899a38d4e8` section:
`0x402819404e703058` (enabled, shared), `0x207b6d725748ed5f` (mode),
`0x7b225fe0c7fe4acf` (aux flag), `0xb84e8776c92be6b0` (mode-2 scale),
`0x9d365af164de8da` (mode cap). Mode 4 is normalised to 2 before dispatch.

### Root registration and data bounds

The `0x2deb6b899a38d4e8` token is not an unrelated top-level root. The Lua
registration paths `0x1801aaa70` (line 1230) and `0x1801b2830` (line 1709) read
it as a child of `0x93fd561a96ab0c67`, then register its enabled/mode keys. The
Autostrafe tick can pass it directly as the first lookup key because the config
map stores that child as a nested map. The section's **name string is not in the
corpus**, but its identity, parent and every child key are now bound.

`DAT_1803db430` is an 8-byte pointer at `.bss`, initialised by `0x1801ee530`
line 599 to `&DAT_1803da694`, whose byte is set to 1 there. FakeDuck
`0x180105310` line 51 and FakeLag `0x18013f560` line 209 store zero through it;
AntiAim `0x1800bdd80` line 274 reads `*DAT_1803db430`. It is therefore a shared
one-byte "state valid" latch, not a movement-only global. All four references
are accounted for.

### No combined mover (negative evidence)

All 7,656 decompiled functions were searched for direct calls to the eight tick
addresses (`0x1800c2e90`, `0x1800c3bc0`, `0x180106b80`, `0x180105310`,
`0x18013fa40`, `0x180140920`, `0x1800e2040`, `0x1800e1280`) and for a slot-2 loop
over the feature list: zero hits. Registration is engine-side; the `MovementSet`
group in `features.h` remains a reconstruction convenience, not a claimed binary
dispatcher.

## Remaining external items

The only items not reducible inside the corpus are runtime values: the
Autostrafe section's display name (the token and every child key are bound), and
the engine-held values behind `DAT_1803db430`. No body in the eight-class family
remains unreconstructed. Stages 3.3-3.6 have their own residual sections; none
is re-described here.

## Verification

`build.bat` builds `src/features/movement/selftest.cpp` and runs it with the other
fifteen suites. The suite's 106 assertions cover the command bits, each feature's gate
and edits, the Airstuck interval growth/decay/cap, Speedhack's fallbacks, MoveFix's
basis mix, the Autostrafe gate/yaw/mode normalisation/45-degree writer, and the
address/constant table. Clean build: 0 errors, 0 warnings; all sixteen suites PASS
with 0 failures.
