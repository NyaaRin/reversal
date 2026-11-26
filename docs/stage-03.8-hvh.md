# Stage 3.8 — HVH

The plan's next unreversed family after movement (`STAGES.md` row 3.8): four
`Features::HVH::*` classes. No other unrecovered `Features::*` cluster precedes
them in the plan, so no cluster-count fallback was needed.

## Classes and dispatch

| Class | Vtable RVA | Slot | Entry | Size |
|---|---|---|---|---|
| `Features::HVH::AntiAim::AntiAimFeature` | `0x33dc68` | 1 | `0x1800bdd70` (5-byte thunk) | — |
| | | 2 | `0x1800bdd80` | 3935 |
| `Features::HVH::Resolver::ResolverFeature` | `0x33bc60` | 1 | `0x1800bc9e0` | 529 |
| | | 11 | `0x1800bcc10` | 108 |
| `Features::HVH::LagComp::LagCompFeature` | `0x33cad0` | 1 | `0x1800c0db0` | 771 |
| `Features::HVH::Visualize::VisualizeFeature` | `0x33b028` | 6 | `0x1800bf160` | 5584 |

`Visualize` overrides only slot 6 (the render slot); all its other slots are the
shared default `0x18001e3e0`.

## AntiAim

Gate chain from `0x1800bdd80`:

1. local entity resolves and passes `0x18001c330` (alive);
2. `0x1800bda90(entity, command)` — per-command bookkeeping;
3. `0x1800b8160()` — armed;
4. class id 2 (`0x18001e0a0`) and move type <= 1 (`0x18001fcf0`);
5. config root `0x237bcfbdef3b6800` with key `0x402819404e703058` — **the same
   opt-out pair Stage 3.5 and Stage 3.7 read**; routed through the existing shared
   gate helper rather than a second copy;
6. the attack-cooldown path `0x1800bd830` / `0x1800bd880` / `0x1800bd8a0`.

Config, all under `0x2d8f695138585a77`:

| Key | Meaning |
|---|---|
| `0xd2ceb89ade8cdec` | pitch mode int |
| `0x398cc31e81e2db51` | yaw mode int |
| `0xeddd7019415d29f4` | jitter float |
| `0xa93407069741444e` | amplitude float |

Pitch modes: 1 → `+89` (`0x180381108`), 2 → `-89` (`0x180381410`), 3 → `+89`/`-89`
selected by the attack bit, 4 → `0`; mode 0 leaves the command untouched.

Yaw modes with base yaw (the command yaw at `+0xc`, possibly replaced by the
body yaw chosen through `0x1800bcf30`):

| Mode | Result |
|---|---|
| 1 | base + 180 (`0x180381188`) |
| 2 | base + 180 ± `(int)jitter * 0.5` (clamp `[10,180]`) |
| 3 | `feature +8` + `clamp((int)amplitude, 1, 18)`, normalized; writes `feature +8` too |
| 4 | base + 90 (`0x18038110c`) |
| 5 | base − 90 |
| 6 | base + 180 ± alternating jitter/2, phase from `cmd / 0x1800bdcb0()` |
| 7, 8 | body-offset path below; not exempt from the post-switch desync override |
| 9 | same body-offset path, but exempt from the post-switch override |

**Mode 3 — `0x1800be3fe`.** The amplitude key `0xa93407069741444e` is read as
an int and clamped with `cmp 1` / `cmp 0x12` to `[1,18]`. The value is added to
the float at `this + 8`, the sum goes through `0x1802d3e00`, and the result is
stored both at `this + 8` and at the command yaw (`cmd + 0xc` / `cmd[3]`). It
therefore walks the stored base yaw by 1–18 degrees per command, not by the
view yaw.

**Modes 7, 8 and 9 — shared block at `0x1800be5b5`.** All three execute the
same code; the only difference is at the final override. The block:

1. reads `0x423a90540ddbc421` as an int, clamps it with `cmp 0x3c` to `[0,60]`,
   and multiplies by `0.5` (`0x180380ac0`) — this is the body-offset magnitude;
2. derives the direction:
   * desync mode `DAT_180409ce0 == 1` → `+1`, `== 2` → `-1`;
   * mode 0 or 3 → `0x1800bd7e0()` reads the toggle key `0x52e8e7a5c772ca6c`.
     If it is off, the direction comes from `0x1800bd320()`; if it is on,
     `0x1800bd570(entity, baseYaw)` returns the side (`±1`, `0` on no decision)
     and a zero result falls back to `0x1800bd320()`;
   * `0x1800bd320()` reads key `0x2e7b87382f9b768`: value 1 → `-1`, value 2 →
     `+1`; any other value flips `DAT_1803feb74` once every 12 global ticks
     (`DAT_1803fa608 + 0x20` compared against `DAT_180426190`, threshold 11)
     and returns the flag as `±1`;
   * `0x1800bd570` offsets the body position by ±35 units along the forward
     basis (`0x18038107c` = 35), evaluates both points with `0x1800bd3e0`, and
     separates the sides by 20° (`0x180381024`); it returns -1/1 or 0 when
     neither side wins;
   * the mirror byte `DAT_180409cfa` negates the final direction;
3. when the direction is zero, keeps `base` and optionally flips the jitter sign
   by the per-command phase byte (bit 0 of `cmd / 0x1800bdcb0()`); otherwise
   flips the jitter for a negative direction and normalizes
   `base + direction * 45` (`0x180381094` = 45);
4. computes the body offset through `0x1800bd8d0(entity, &offset)`. That helper
   (441 bytes) first requires `DAT_180409cf8`, the entity, globals, engine and
   `BaseClientState`, with `maxClients < 0x80` and local index
   `DAT_1803e8768`. It takes the entity velocity via `0x18001d530`, forms its
   magnitude, reads the interval from `globals + 0x28` (fallback `0x180380988`),
   snapshots the latched 12-byte record at `DAT_180409cd0`/`DAT_180409cd8`, then
   walks slots `0..maxClients-1`: `0x1800b2040(slot)` resolves the entity,
   `0x1800b2190` reads its angle, non-finite exponents
   (`(bits & 0x7f800000) == 0x7f800000`) abort with 0, and `0x1800b1de0` folds
   the sample into the snapshot. It returns 1 with the shown value at
   `snapshot + 4`, or 0 on every failure path. On failure,
   if the latch `DAT_180409cf9` is set, it substitutes the last accepted shown
   body value at `DAT_180409ce8 + 4`; otherwise the offset is zero. The clock
   contribution comes from `0x180022110()` clamped to `[-60,60]`
   (`0x180381408`, `0x1803810c8`). The final yaw is
   `normalize(base + 180 + clock + offset)`;
5. when `DAT_1803db430` is null or its byte is non-zero, writes that final yaw to
   `cmd + 0xc` and logs every 16th command (`DAT_1803fd0bc & 0x8000000f`);
   otherwise writes the direction-only value `base` or `base + dir * 45`.
   `DAT_1803db430` is set to `&DAT_1803da694` by `0x1801ee530` and cleared by
   FakeDuck (`0x180105310`) and FakeLag (`0x18013f560`), so those features force
   the direction-only branch;
6. on the substitution path it also latches `DAT_180409d00 = 1` and
   `DAT_180409ccc = shown`; `0x1800c15f0` consumes that latch.

After the switch, when `DAT_180409ce0 != 0` and the yaw mode is not 9, a second
override replaces the command yaw with `normalize(base + offset)` where offset is
`+90` for desync mode 1, `-90` for mode 2, `+180` for mode 3, plus another `+180`
when mirror is set. Mode 9 is the sole yaw mode that skips this block; modes 7
and 8 are overwritten when a desync mode is active. The `[AA-DESYNC]` log below
reports the pre-override values.

Modes 2 and 6 clamp the configured jitter to `[10,180]` before halving it
(`cmp 0xa` / `cmp 0xb4` at `0x1800be397` and `0x1800be517`). The separate
`[-60,+60]` pair (`0x180381408`, `0x1803810c8`) clamps the clock contribution in
the mode 7/8/9 body path. The desync state block is one contiguous
`0x180409cc8` object:

| Address | Offset | Width | Type | Meaning | Read / write sites |
|---|---|---|---|---|---|
| `0x180409cc8` | `+0x00` | 4 | int32 | failed body samples | `++` in `0x1800bda90`; log in `0x1800bdd80` |
| `0x180409ccc` | `+0x04` | 4 | float | last latched shown yaw | write `0x1800bdd80`; read `0x1800c15f0` |
| `0x180409cd0` | `+0x08` | 12 | BodyDesync | saved target/shown/flags | copy out `0x1800bda90`, read `0x1800bd8d0` |
| `0x180409cdc` | `+0x14` | 4 | int32 | retaken attack ticks | `++`/log in `0x1800bdd80` |
| `0x180409ce0` | `+0x18` | 4 | int32 | desync mode 0–3 | write `0x1800bccd0`; read `0x1800bdd80`, `0x1800bf160` |
| `0x180409ce4` | `+0x1c` | 4 | int32 | applied/valid this tick | set/clear throughout `0x1800bdd80`; read `0x1800c15f0` |
| `0x180409ce8` | `+0x20` | 12 | BodyDesync | body yaw state below | write `0x1800bda90` via `0x1800b1de0`; read `0x1800bdd80`, `0x1800bd8d0` |
| `0x180409cf4` | `+0x2c` | 4 | int32 | accepted body samples | `++` in `0x1800bda90`; log in `0x1800bdd80` |
| `0x180409cf8` | `+0x30` | 1 | bool | first body sample captured | write `0x1800bda90`; gate `0x1800bd8d0` |
| `0x180409cf9` | `+0x31` | 1 | bool | body-offset fallback armed | set/clear `0x1800bda90`, `0x1800bdd80`; read `0x1800bdd80` |
| `0x180409cfa` | `+0x32` | 1 | bool | mirror toggle | toggle `0x1800bccd0`; read `0x1800bdd80`, `0x1800bf160` |
| `0x180409cfc` | `+0x34` | 4 | int32 | attack ticks | `++`/mask/log in `0x1800bdd80` |
| `0x180409d00` | `+0x38` | 1 | bool | shown-yaw latch pending | write/read/clear `0x1800bdd80`; read `0x1800c15f0` |

`BodyDesync` (`0x180409ce8`, 12 bytes): `+0x00` float target, `+0x04` float
shown/pull, `+0x08` byte initialized, `+0x09` byte no-clamp, `+0x0a..+0x0b`
pad. `0x1800b1de0` normalizes the target to `(-180,180]` via `0x18038120c`
(360), `0x180381188` (180) and `0x180381420` (-180); on the first sample it
copies target to shown and sets the init byte, otherwise it applies at most a
45° step (`0x180381094`/`0x180381404`) and rate-limits shown toward target by
`clamp(|delta| / 60, 0.01, 1) * interval * 720` (`0x1803810c8`, `0x180380980`,
`0x180381264`). The no-clamp byte at `+0x09` bypasses the limiter for one call
and is cleared at the end; `0x1800bdd80` clears `+0x08/+0x09` when the entity
dies.

The cooldown log fires every 64th tick:

```
[AA-COOLDOWN] retook %d of %d attack ticks | engine fire clock: %s
```

and the desync diagnostics:

```
[AA-DESYNC] cmd=%u base=%.2f pull=%.2f shown=%.2f | body batch=%.2f mirror=%.2f src=%s | bodyOff raw=%.1f used=%.1f | batch=%d steps=%d skips=%d
```

## Resolver

Slot 1 (`0x1800bc9e0`) runs two passes over client slots `1 .. maxClients`, capped
at `0x80`:

* pass A (`0x1800bc930`): skip null / bad-read / dormant / not-alive, then
  `0x1800b5be0(entity, origin)` — the LBY/animation probe;
* pass B (`0x1800b81b0`): compare the cached alive flag at
  `(&DAT_180561252)[slot * 0x168]`; a true→false edge calls `0x1800b8740(slot)`, a
  false→true edge calls `0x1800b8c50(slot, entity)`; `0x1800bc360` closes the pass.

The cache is a single static block, not a standalone byte array:

| Property | Value | Evidence |
|---|---|---|
| base | `0x1805610f0` | `0x1800bc790` starts at `&DAT_1805610f0` |
| record size | `0x168` | `memset(...,0x168)` and pointer step `0x5a` dwords in `0x1800bc790`; `slot * 0x168` in `0x1800bc9e0` |
| records | `0x81` | the same loop ends when the cursor equals `&DAT_18056c658`; `(0x18056c658 - 0x1805610f0) / 0x168 = 0x81` |
| total extent | `0xB568` | `0x81 * 0x168`; block is `[0x1805610f0, 0x18056c658)` |
| alive field | `0x180561252` | base `+0x162`; `0x1800bc9e0` reads/writes `(&DAT_180561252)[slot*0x168]` |
| last live byte | `0x18056c652` | record 128 begins at `0x18056c4f0`, field `+0x162`; the next record boundary is `0x18056c658` |

The initializer calls `0x1800b8590` and `0x1800b89a0` on each record, so this is
the owner's complete allocation, not inferred from a neighbour. `0x1800b8c50`
and the Visualize body index the same records; accesses use `+0x90`
(`0x180561180`) for the first float, `+0x98`/`+0x99` for the two bytes,
`+0x9c` (`0x18056118c`) for the comparison float, and `+0x162` for alive. The
slot guards admit `1..0x80` (`param_1 - 1U < 0x80`), and the initializer lays
out records `0..0x80`, so slot `0x80` is fully backed; no access reaches the
end sentinel `0x18056c658`.

Slot 11 (`0x1800bcc10`) fixes the aim record only when the entity argument is the
local player: `0x1800bace0(param + 4, param + 0x10)`.

The `[RESOLVER]` strings belong to `0x1800bb8a0`, `0x1800bbcc0`, `0x1800bc110` and
`0x1800bc360`, not to the slot bodies; that is recorded here so the tag is not
misattributed to this class.

## LagComp

`0x1800c0db0` rewrites interpolation and restores it on the way out:

| Field | Offset |
|---|---|
| applied | `+8` |
| haveSaved | `+9` |
| attempts | `+0x14` |
| savedInterp | `+0x20` |
| savedRatio | `+0x24` |

Config root `0x2d8f695138585a77`, enable `0xe0c32a7e4da84b2e`, mode
`0x80da9dc943fdf3cc` (== 1 arms it). It writes `cl_interp = 0.5` (`0x180380ac0`)
and `cl_interp_ratio = 5.0` (`0x180380f00`) through `0x1800c0920`, up to eight
attempts (`+0x14 < 8`), and logs:

```
[LAGCOMP] interp abuse OFF (restored %.3f / %.1f)
[LAGCOMP] interp abuse ON (was %.3f / %.1f)
```

The failure branch logs the string at `0x18034c310`; the exact record is: address `0x18034c310`, **97 bytes plus the
NUL at `0x18034c371`**, UTF-8 en dash (`e2 80 94`):

```
[LAGCOMP] interp cvars refuse to change after 8 attempts – giving up until the toggle is moved
```

The only reference in the module is the `lea rcx, [rip+0x28b2d5]` at
`0x1800c1034`, followed by the `FUN_180014410` call at `0x1800c103b`. It is
reached when `*(int *)(this + 0x14) >= 8` and either convar write failed; the
body then returns without changing `applied`. There is no pointer to the string
in `.rdata`. `strings_all.txt` splits it across lines 48734–48735 at the
non-ASCII dash and drops the dash byte, so the binary is the authoritative
record. Defaults when the convars cannot be read: `0.1` (`0x1803809ec`)
and `2.0` (`0x180380d30`).

## Visualize — recovered

The open set was derived from the class's only override, not from the earlier
prose: vtable `0x33b028` slot 6 points at `0x1800bf160`; an xref scan of the
decompile corpus returns that body's own file only (no C++ caller), and the
slot is the sole dispatch entry. The set is therefore **one body**, `0x1800bf160`
(5584 bytes), plus the four gate helpers it calls (documented here because they
carry its section conditions; they were never separately opened). All are read
end to end.

### Render body — `0x1800bf160` (5584 bytes)

Entry: security cookie `DAT_1803da4c0`; TLS init via `_tls_index`/
`__dyn_tls_on_demand_init`; returns immediately when `DAT_1804236a5 != 0`
(panic). Every section then re-checks its config gate, its globals and
`VEngineClient015` (`0x1803fa668`) `+0xd0` (IsConnected).

| Section | Gate | Globals | ImGui / draw calls |
|---|---|---|---|
| Box | `0x1800bf0b0` (168 B): keys `0xf877df6876fb9434`, `0xd34643a33790f520`, `0xaf1968f7424da736` under root `0x2d8f695138585a77` | engine only | `0x18026f7d0(ctx,0,"##Background")`, viewport `engine+0x28`, `0x18020dc30` (path point), `0x1802938c0` (fill) |
| LBY | `0x1800bf010` (62 B): key `0xc980722e39863cca` | `0x1803fa608` globals, `0x1803fa360` entity list | background list, `0x18029e350` text size, `0x18029e990` text |
| Player | `0x1800bf060` (62 B): key `0x6ab593f4aff6a4b1` + `0x1800b81b0` | globals, entity list | background list, `0x180021ac0` projection, `0x180295600` boxes |
| Skeleton | `0x1800bedb0` (79 B): predicate `0x1800bed60` key `0x72114d0ef27e6e77` + key `0x1cb083bf379fe263` | globals, entity list | `0x1800c07c0` line, `0x1802d4050` rotate |

**Box section.** Reads the viewport as two ints through `engine +0x28`
(`DAT_180380ac0` = 0.5 scale), takes the mode from `DAT_180409ce0` and swaps
1↔2 when the mirror flag `DAT_180409cfa` is set. It builds three screen
rectangles from `DAT_1803810e4`, `DAT_1803810b4` and `DAT_180380fcc`, feeding
three points at a time to `0x18020dc30`, then fills with `0x1802938c0`. The
active side uses `0xeb82eb78`, the inactive side `0x6e7d7d7d`; the bottom band
uses `0xeb82eb78` only for mode 3 without mirror.

**LBY section.** Resolves the local entity from `entitylist +0x18` using
`engine +0x60` (local index), then:

* `0x1800b5f30(entity, &origin)` — probe, Stage 3.8 Resolver family;
* `0x1800b5e40(entity, 2, &goal)` — field 2 of the anim state;
* `0x1800b6290(entity, &eye)` — eye position.

When `0x1800b5f30` succeeds but the anim-state pointer is unresolved it prints
the calibrating line; when both resolve it normalises `goal - cur` through
`0x1802d3e00` and compares the absolute delta with `DAT_180380bb0`, choosing
`0xff78ff78` or `0xff7878ff`. The calibrating line is `0xff5ac8ff`. Text is
formatted into a `0x60` buffer, sized with `0x18029e350`, and drawn with
`0x18029e990` at the local player's screen rectangle; the box thickness constant
`0xc8000000` is passed as the draw-list argument.

**Player section.** Requires the resolver alive pass `0x1800b81b0`, then loops
slots `1 .. maxClients` with the cap `0x81`. Each candidate is rejected on
null, `IsBadReadPtr(entity, 8)`, `IsBadReadPtr(*entity, 8)`, dormant
(`*(netvar +0x40) != 0`), dead (`0x18001c330` false), local index, or a
failed `0x180021ac0` projection. For survivors it reads the origin
`0x18001c430`, calls `0x18001d620`, samples health through `0x1800b9e90(slot)`,
and builds three strings:

```
  %s %.0f%%                                  // anim mode: rotate/alternate/repeat/none
%s  chk %.1f/%.1f  dy %.0f  pitch %d%s      // "legit"/"AA" + " LATCH"
%s %d/%d  off %+.0f%s  m%d h%d  %s%s        // weapon/name + state suffixes
```

The anim-mode value comes from `DAT_18040a958 + slot * 0x318`; the cache
fields come from `DAT_180561180` indexed by `slot * 0x2d` (dwords) and
`DAT_180561188 + slot * 0x168` (bytes) for the AA/LATCH flags. Box corners are
drawn with `0x180295600` at four offsets (`DAT_180380fd8`, `DAT_180380fd4`,
`DAT_180380fc4`, `DAT_180380fa8`, `DAT_180380f00`, `DAT_180380e9c`,
`DAT_180380fcc`, `DAT_1803810c8`), with `0xff5abeff` for AA and `0xffaa9b96`
for legit, thickness `0xc8000000` and `0x0f` for the header band.

**Skeleton section.** After `0x1800bedb0`, it resolves the local player and
draws its forward vector in `0xff00ff00` and its right vector in `0xff0000ff`
using `0x1802d4050` on `DAT_1803eb878` / `DAT_1803eb858` and scale
`DAT_1803810c8`, through `0x1800c07c0`. If `0x1800b81b0` is also true it loops
all other live, non-dormant players, projects each origin-derived point with
`0x1802d4050` and scale `DAT_1803810a0`, draws a `0xff3c3cff` box line, and —
when `0x1800b9e90(angle)` is non-zero — a head marker in `0xff3cff3c`.

Verbatim strings owned by this body:

```
LBY  cur %.0f  (calibrating field offsets, turn around)
LBY  cur %.0f  goal %.0f  d %.0f  eye %.0f
LBY unavailable (animstate pointer unresolved)
##Background
rotate
alternate
repeat
none
legit
AA
 LATCH
```

No `[VIS]` string belongs to `0x1800bf160`; `[VIS]`/`[VIS-INIT]` remain owned by
`0x1801e9960`/`0x1801e97c0` in the other module, as corrected in the earlier
pass. Constants referenced: `0x180380ac0` (0.5), `0x1803810e4`, `0x1803810b4`,
`0x180380fcc`, `0x180380bb0`, `0x180380fd8`, `0x180380fd4`, `0x180380fc4`,
`0x180380fa8`, `0x180380f00`, `0x1803810c8`, `0x1803810a0`, `0x180380fdc`,
`0x180381384` (-1.0), `0x18038110c` (90.0), `0x180381120` (100.0). Other
globals referenced by the body, all resolved from the dump: `DAT_1803da4c0`
(security cookie), `DAT_1803fa608` (globals), `DAT_1803fa360` (entity list),
`DAT_1803fa668` (engine), `DAT_1803eb878`/`DAT_1803eb858` (skeleton view
vectors), `DAT_180409ce0` (box mode), `DAT_180409cfa` (mirror), `DAT_180409ce4`
(skeleton extra flag), `DAT_180409cb8` (pitch), `DAT_18040a960` (anim-mode
percent), `DAT_1805610fc`, `0x18056110c`, `0x180561110`, `0x18056118c`,
`0x18056119c`, `0x1805611ac` (per-slot cache fields). Imports: `IsBadReadPtr`,
`AcquireSRWLockShared`/`ReleaseSRWLockShared` (via `0x180021ac0`), and the TLS
on-demand initialiser.

## Wiring and reuse

| Call site | Reuses |
|---|---|
| AntiAim gate step 5 | the shared `0x237bcfbdef3b6800` / `0x402819404e703058` opt-out pair from Stages 3.5 and 3.7 |
| Visualize projection | `0x180021ac0` wrapper (284 B) locks `0x1804260d8`, builds the view matrix via `0x1802d4780` and forwards the 3D point to the Stage 3.6 world-to-screen path `0x1800207e0`; `0x180021be0` is **not** called by this body |
| Resolver probe `0x1800b5be0` | reused from the earlier LBY pass by address; its scanner `0x1800b58b0` and scan strings stay with that pass and are not re-described here |

## Open items

**None for Stage 3.8.** The four residuals are closed in the sections above:

* yaw modes 3/7/8/9 — shared body block, direction helpers, constants and the
  post-switch override are recorded; mode 3's separate 1–18 path is recorded;
* `0x18034c310` — 97 bytes plus NUL, exact text, one `lea`/call site;
* `DAT_180561252` — field `+0x162` of the `0x81 × 0x168` cache at
  `0x1805610f0`, bounded by its own initializer at `0x1800bc790`;
* the desync fields — address, offset, width, type and read/write sites in the
  table above.

Stage 3.6's paint-path element renderer is recovered at `0x180174130` with a full
`status: ok` body; only its class-specific element geometry remains a runtime
input (fixed defaults, stored sizes, screen extents and text metrics). Stages 3.3–3.7 are complete.

## Verification

`build.bat` builds `src/features/hvh/selftest.cpp` and runs it last. It asserts the
LagComp save/abuse/restore and eight-attempt path, the Resolver's two passes and
alive-cache edges, the slot cap, slot 11's local-only rule, every pitch and yaw
mode, the jitter clamp, the 64-tick cooldown log, the Visualize gate and its
recovered-body flag plus the four section gates, and all four vtables and the
resolved constants. It also asserts the 0x81-record/0xB568-byte cache bounds,
the `DAT_180561252` `+0x162` offset, every desync state offset/width, the
direction-helper addresses and keys, and the failure string's address, length,
UTF-8 bytes and single `lea` site. Clean build: 0 errors, 0 warnings; all eleven
suites PASS with 0 failures.
