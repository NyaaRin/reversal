# Stage 3.9 — Backtrack / lag

**Status: complete, no open items.** 25 distinct bodies (five tagged; two
extrapolation helpers; eleven timing queries including `0x1800c6530`; six
shift/validator predicates; the ring grow and the sentinel constructor), 24
referenced strings, the lazy batch ring and both `DAT_1803fac40` containers are
reconstructed from the corpus. The shipped `src/features/backtrack/` model keeps
its existing observable contracts; the dump facts it does not model redundantly
are recorded below.

## Open set derived from the dump

The family was re-derived instead of taken from the earlier notes:

* `re/dump/strings_by_function.tsv` gives five bodies with `[BT*]` strings:
  `0x1800c6530` (`[BT] depth capped…`), `0x1800c6c50` (`[BT] REFUSED`,
  `[BT-HIT]`), `0x1800c7470` (`[BT-LSAC]`), `0x1800c93d0` (`[BT-EXTRAP]`) and
  `0x1800c9910` (`[BT]`, `[BT-LIMIT]`, `[BT-CLOSED]`, `[BT-ANIM]`).
* The xrefs/calls from those bodies add the extrapolation pair `0x1800c7670` /
  `0x1800c76d0`, the eleven timing queries `0x1800c5790`–`0x1800c60c0`, and their
  support predicates `0x1800c5f70`, `0x1800c64b0`, `0x1800c6700`,
  `0x1800c6790`, `0x1800c6930`, `0x1800c9380`.
* The batch store resolves to the pointer array `0x1803fac48`, capacity
  `0x1803fac50`, head `0x1803fac58`, count `0x1803fac60`, grown by
  `0x18022cdc0`. The adjacent sentinel `0x1803fac40` is built by
  `0x180002470`, reached from the preinitialiser qword at `0x18030cee0`.
* No body in this set is unreadable. The old residual items (timing "composition
  only", extrapolation "velocity", ring capacity "constructor not in corpus",
  container "outside the module") are false and are closed below.

## Classes and dispatch

| Class | Vtable RVA | Slot | Entry | Size | Role |
|---|---|---|---|---|---|
| `Features::Backtrack::BacktrackFeature` | `0x33a438` | 1 | `0x1800c9640` | 711 | compaction and extrapolation config |
| | | 2 | `0x1800c9910` | 3638 | per-tick recorder and diagnostics |
| | | 16 | `0x1800c95d0` | 108 | `cl_extrapolate` restore |
| `Features::FakeLag::FakeLagFeature` | `0x33cb60` | — | no overrides | — | constructor-only in the corpus; all slots default to `0x18001e3e0` |

`FakeLagFeature` has an RTTI record but no non-default vtable entry. Its
`[FAKELAG]` string belongs to `0x1801ee530`, outside this class; that is negative
evidence for a missing body, not an open reconstruction item.

## Record and batch layout

| Field | Offset | Width |
|---|---|---|
| previous origin x / y / z | `+0x28` / `+0x2c` / `+0x30` | float ×3 |
| simulation time | `+0x1848` | double |
| valid flag (`param_2[0x30a]`) | `+0x1850` | byte |
| server tick | `+0x1854` | int |
| current point x / y / z | `+0x1858` / `+0x185c` / `+0x1860` | float ×3 |
| invalid/pruned flag | `+0x1864` | byte |
| record stride | `0x1868` | — |

`0x1800c6c50` proves the coordinate order: it subtracts the live origin x from
`+0x1858`, y from `+0x185c`, z from `+0x1860`, and compares the previous origin
against `+0x28/+0x2c/+0x30`.

A batch entry is `0x20` bytes: `{begin, end, capacity end, tickNumber at +0x18}`.
The ring is a pointer array, not inline storage: `0x1803fac48` holds `capacity`
qwords, `0x1803fac58` is the head index and `0x1803fac60` the live count. Batch
records live at `0x1868` each; the per-player last simulation times are
`0x1805c51f0 + slot * 8`.

## Slot 2 — the recorder

Gate: config root `0x13806d9e35de0023` with key `0x402819404e703058` (the same
opt-out pair Stages 3.5, 3.7 and 3.8 read), or `0x1800b8200`. It is a reuse, not a
new key.

Filters: `0x1800c7b00` (the Stage 3.5 candidate path, reused), then
`0x1800c7470` (the `[BT-LSAC]` shift/validator state).

Per player `1..maxClients`:

1. `0x1800c5030(entity, local)` admits the slot; the latency window is checked
   against `0x1803e9228` and `0x180380d80` (5.0 s).
2. `0x1800c4a70` captures the record and two points, `0x1800c4b10` normalises it.
3. Current `curtime`/`simtime` fields (`+4`/`+6` of the global tick object) are
   swapped around `0x1800ba4e0` and `0x180053780` (Stage 3.4 trace filter and
   Stage 3.5 population helper, reused) and restored immediately afterwards.
4. `0x1800c7670(entity, boneBuffer)` calls entity vfunc `+0x28` then vfunc
   `+0x80(studio, boneBuffer, 0x80, 0x100, curtime)` — a `SetupBones`-shaped
   call: 128 bones, mask `0x100`, current time from `DAT_1803fa608 + 0x10`.
5. `0x1800c76d0(entity, delta)` takes entity vfunc `+0x48` (render/origin
   vector), subtracts `0x18001daf0(entity)` (`DT_BaseAnimating::m_vecOrigin`,
   reused), writes the three floats to `delta`, and returns
   `sqrt(dx²+dy²+dz²) < 256.0f`. If true the recorder adds `delta` to **both**
   captured points (`local_1978…` and `local_196c…`); it is a render-origin
   correction, not a velocity extrapolation.
6. A record whose time is missing or older than the window falls back to
   `tickCount * interval` (`+0x10` double).
7. Dedupe: identical time increments `DAT_1803fb0c4`; a changed time stores into
   `0x1805c51f0[slot]` and increments `DAT_1803fb0d8`.

After the player loop the batch is pushed. Records of the same player closer than
`4096` squared units (`0x180381290`) mark both invalid at `+0x1864`.

Diagnostics in the body: every `0x42` ticks the summary line; after 30 s without a
shootable player the `[BT] idle` line; when the accepted history is empty the
`[BT-LIMIT] history is EMPTY` diagnostic; when the span is smaller than the
reachable window the `[BT-LIMIT] history spans only` line; when `floor > ceiling`
the `[BT-CLOSED]` line; the `[BT-ANIM]` ratio line when sampled poses are mostly
interpolated. All are quoted verbatim in the string table below.

## Extrapolation

`0x1800c93d0` is the slot-1 setup (single code call at `0x1800c965d`):

1. Requires `DAT_1803fa340` and the `cl_extrapolate` ConVar (`0x180016fb0`).
2. The first call snapshots the ConVar text through `+0x38`/`+0x48`, validates the
   string, uses `atof` when non-empty, otherwise `1.0f`, stores it at
   `DAT_1803db380`, and sets `DAT_1803fac7b`.
3. `0x1800c9380` reads config root `0x13806d9e35de0023`, key
   `0x34f63b042c73cf80`. If false and `DAT_1803fac7a` is set, it writes `"1"`
   (`0x18034124c`) when the saved value is non-zero, otherwise `"0"`
   (`0x180347810`), clears `0x1803fac7a`, logs the restored value and returns.
4. If true it reads `cl_extrapolate`; when already zero it only sets
   `0x1803fac7a`. Otherwise it writes `"0"` (site `0x1800c951d`), sets the flag,
   resolves `cl_extrapolate_amount`, clamps out `≤0` and `≥1` to `0.25f`
   (`0x180380a58`), and logs the amount in milliseconds (`×1000`, `0x180381278`).

`0x1800c95d0` is the teardown: it requires `0x1803fac7a`, `0x1803fac7b` and
`DAT_1803fa340`. If the `cl_extrapolate` ConVar resolves it writes `"1"` when
`DAT_1803db380` is non-zero, else `"0"`; a null ConVar skips the write but still
clears both flags. The two strings are selected at
`0x1800c9611`/`0x1800c961a`; the set call is `0x1800c9624`.

The direct extrapolation helpers are fully reconstructed in the recorder section:
`0x1800c7670` (79 B) and `0x1800c76d0` (198 B), with the `0x80`/`0x100` bone
arguments and the `256.0f` (`0x1803811cc`) acceptance bound.

## Timing query family

All returns are `double` unless noted; `interval` is `DAT_1803fa608 + 0x28`
(falling back to `0.015`, `0x180380bd0`), `curtime` is `+0x10`, and `fp` is
`DAT_1803fb248` only when `DAT_1803fb0dc >= 4` and `0 < fp < 1.0`
(`0x180380bb0`), else `0`.

| Address | Size | Returns / control |
|---|---|---|
| `0x1800c5790` | 773 | **float interp.** Lazily resolves `sv_minupdaterate`, `sv_maxupdaterate`, `cl_updaterate`, `cl_interpolate`, `cl_interp_ratio`, `cl_interp`, `sv_client_min_interp_ratio`, `sv_client_max_interp_ratio` via `0x180016fb0`. Requires the three client values, else `0.1f` (`0x1803809ec`). If `cl_interpolate` is false and `0x1800b8290` is false, returns `0.0f`. Rate is `cl_updaterate`, `66.0f` (`0x1803810d4`) when `≤0`, clamped to the two server rates when both exist and max `>0`. Ratio is `cl_interp_ratio`, `1.0f` (`0x180380bb0`) when zero, clamped to the client ratio pair when max `≠ -1.0f` (`0x180381384`). Returns `max(cl_interp, ratio / rate)`. |
| `0x1800c5aa0` | 122 | **ping.** Channel getter at `0x1803fa668` vfunc `+0x240`, then channel vfunc `+0x48(0)`; non-finite or negative becomes `0.0`. |
| `0x1800c5b20` | 217 | **accepted fakeping.** `base = ping + interp + param`; `upper = sv_maxunlag` when `>0`, else `1.0`; returns `max(0, min(max(base,0), upper) - (ping + interp))`. |
| `0x1800c5c00` | 130 | **unlag headroom.** `max(0, maxunlag - interp - ping)`, maxunlag fallback `1.0` (`0x180380bb0`). |
| `0x1800c5c90` | 131 | **acceptance band.** `margin = fp > 0.001f (0x180380964) ? 4.0 (0x180380d68) : 2.0 (0x180380d38)`; returns `max(0.1 (0x180380c48), 0.2 (0x180380c80) - margin * interval)`. |
| `0x1800c5d20` | 161 | **choke ticks.** Gate root `0x93fd561a96ab0c67`, bool key `0x46af284dbd58f0c`; when false returns 0, otherwise int key `0xb3bc1c7136473c92` clamped to `[0,15]`. |
| `0x1800c5dd0` | 157 | **margin time.** `(choke * 0.5 (0x180380cb0) + (fp > 0.001 ? 2.0 (0x180380d38) : 0.0)) * interval`. |
| `0x1800c5e70` | 254 | **effective latency.** `b8200` false: config root `0x13806d9e35de0023`, key `0x6018685605485a` (ms); true: `200` ms, or `1000` when `0x1800b8250() == 1`. `limit = ms / 1000`. `available = c5b20(fp) + c5c90()`; when `fp ≤ 0.001` and `limit ≤ available`, uses `limit`; returns `min(available, c5c00())`. |
| `0x1800c6530` | 459 | **depth cap.** No globals or `interval ≤0` → 1. `headroom = min(c5e70(), c5b20(fp)+c5c90()-c5dd0())`; `budget = min(headroom, c5c00()-(c5d20()+2.0)*interval)`; `ticks = floor(budget/interval)`. Required cap `max(1, -2 - int(-1.0 (0x1803813b0) / interval))`; when smaller than `ticks`, logs `[BT] depth capped…` when the counter is a multiple of 200 (it starts at zero, so the first call also fires) and returns the cap. Final floor 1. |
| `0x1800c6870` | 185 | **max reachable ticks.** 1 when no globals/interval; `v = c5b20(fp) - c5c90() + c5dd0()`; `v ≤0` → 1; else `max(1, ceil(v / interval))`. |
| `0x1800c60c0` | 163 | **record-in-window predicate.** Requires `c5f70(record)` and globals. `delta = c5b20(fp) - (curtime - tick * interval)`; returns `abs(delta) <= c5c90()` (absolute value by the `0x7fffffff` masks at `0x1803817d0` / `0x1803817d4`). |

Support predicates read in full:

| Address | Size | Behaviour |
|---|---|---|
| `0x1800c5f70` | 330 | Record keep predicate: entity and vtable readable (`IsBadReadPtr` twice), `0x18001c330(entity)` true, vfunc `+0x20` non-null; if globals exist the entity index is in `1..maxClients` and the entity-list vfunc `+0x18(index)` returns the same entity; `0x18001c680(entity) >= 1`; channel getter non-null; globals present; `+0x1854 > 0`; `+0x1864 == 0`; `curtime - tick*interval` in `[-0.1 (0x180381398), c5e70()]`. |
| `0x1800c64b0` | 116 | `b8200` false → 0; otherwise config root `0x2d8f695138585a77`, key `0x4fc289ac518c30d0`, clamped to `[-14,14]`; this is the choke/command offset added to the record tick. |
| `0x1800c6700` | 133 | Config gate only: `b8200` false and both keys `0x9653fa4f0c4e1755` (shared with 3.5) and `0xe455dd426f2b5319` under root `0xf7521f28977a3033` true. |
| `0x1800c6790` | 221 | `cap = c6530()`. When `c6700()` and the saved shift state (`DAT_1803fb0d0`, `DAT_1803fb0cc`, `DAT_1803fb0c0`) is active, elapsed `now - DAT_1803fb0e0 < 3e9` (`0x180381050`) returns `max(0, min(cap, state.last - serverTick + 3))`; elapsed `> 3e9` increments the stale counter, stores now and calls the bare `[BT-LSAC] jump` format; otherwise returns `cap`. |
| `0x1800c6930` | 141 | Accepts `(current, target, upper)` when `c6870() <= current-target <= upper`; if the saved shift is active and `*state == serverTick+1`, additionally requires `target != serverTick`. |
| `0x1800c9380` | 62 | Reads config root `0x13806d9e35de0023`, key `0x34f63b042c73cf80`, returns the byte. Used by `0x1800c93d0` as the enable/disable decision. |

## Shift application — `0x1800c6c50`

Declared size 1973, but the cold `[BT-HIT]` tail continues to `0x1800c746d`
(`mov al,1; jmp 0x1800c6dee`); the next function starts at `0x1800c7470`. The true
extent is `0x81e` (2078) bytes. The body is shared: call sites `0x1800c7d95`
(inside `0x1800c7b00`) pass `"manual"`, `0x1800d3a77` (inside `0x1800d34a0`)
passes `"aimbot"`, and `0x1800d5f6e` (inside `0x1800d5310`) passes
`"extrapolate"`.

Control flow:

1. Reject null `self`, null globals, record valid flag `+0x1850 == 0`, tick
   `+0x1854 <= 0`.
2. `target = c64b0() + tick`. A non-positive target returns 0 without touching the
   shift.
3. `delta = currentShift - target`; the validator cap is
   `max(1, -2 - int(-1.0/interval))` (or 1 without an interval). `cap < delta`
   logs `[BT] REFUSED` every 32nd call (mask `0x8000001f`) and returns 0.
4. Otherwise `upper = c6790()` and `c6930(current, target, upper)` must accept;
   failure returns 0. On success the shift is written (`*(float *)(self+4) =
   target`).
5. Band: `fakepingTime = c5b20(fp)`, `band = c5c90()`, `span = delta*interval`.
   `inBand = (fakepingTime-band) <= span <= (fakepingTime+band)`. Being outside
   the band does **not** reject; it only changes the `IN `/`OUT` selector and
   the counters.
6. Pose check when `record->entity` is non-null and all six live/record floats
   are finite: distances `recordPoint↔live`, `previous↔recordPoint`,
   `previous↔live` via `sqrt` (`PTR_FUN_1803da018`). `DAT_1803ffd7c` counts
   checks; `DAT_180425f98` counts wrong-body cases; `[AIM-POSE]` logs when the
   record distance exceeds `16.0f` (`0x180380fe8`) and either wrong-body,
   fewer than 7 checks, or every 100th check.
7. `DAT_1803ff0d8` counts accepted/checked shifts; `DAT_1804260b4` counts
   out-of-band; `DAT_1803ffd00` sums alignment and `DAT_180423a30` keeps its
   absolute maximum.
8. `[BT-HIT]` logs when out-of-band, every 10th check, or fewer than 7 checks;
   the `IN `/`OUT` selector is chosen at `0x1800c73d5`/`0x1800c73dc`, the format
   is at `0x1800c745b`. Every accepted path returns 1; every rejection returns 0.

## The `0x1800c7470` state machine

`0x1800c7470(int* shift, int* fallback)` is called from the recorder at
`0x1800c9a24` and from `0x1800d5faa`. It first rejects null or `*shift == 0`, then
requires `c6700()`, bit 0 of `shift[8]`, positive `DAT_1803fb0cc` and
`DAT_1803fb0c0`, a non-null store `DAT_1803fb0d0`, and
`*DAT_1803fb0d0 == DAT_1803fb0c0 + 1`. It computes
`abs(shift[1] - serverTick)`; a difference of 1–3 skips the adjustment. Otherwise
it uses `DAT_180014300` for the current time, and:

* within `3e9` of the saved time, clamps the request into
  `[serverTick-3, serverTick+3]` (one tick below serverTick when the clamped
  value equals it), increments `DAT_1803f91fc`, logs the budget line on every
  50th or first five calls, and writes `shift[1]`;
* at/after the threshold, bumps `DAT_1803fb0c8`, stores the current time and emits
  the bare jump format (no varargs — an observable defect, reproduced exactly).

All paths end by clearing `DAT_1803fb0d0` and saving `shift[1]`/`*shift` into
`DAT_1803fb0cc`/`DAT_1803fb0c0`.

## Ring growth and container ownership

`0x180002470` (55 B) allocates `0x10` bytes with `0x1802d8350`, sets
`[1] = 0`, writes the global's own address into `[0]`, and registers
`0x180309a40` with `atexit`. The constructor has no code xref because its address
is the qword at **`0x18030cee0`** in the `.rdata` preinitialiser array (neighbours
`0x18030cec0`–`0x18030cf38` are other `0x1800022xx`/`0x1800024xx` constructors).
That closes the ownership question: the sentinel is in-corpus and statically
constructed.

`0x18022cdc0` (534 B) grows the pointer array at `0x1803fac48`:

* `target = capacity ? capacity : 1`; while `target == capacity || target < 8`,
  `target *= 2`. Thus capacity `0 → 8 → 16 → 32 …`, with an initial capacity of
  zero in BSS.
* Allocates `target * 8` bytes, copies the live pointers in ring order (two
  `memmove`s across the wrap), zero-fills the new tail, frees the old allocation,
  then stores `capacity += (target - capacity)` and the new pointer.

The push path grows when `capacity <= count + 1`, so the first batch creates eight
slots and later growth doubles the pointer array. No other instruction writes
`0x1803fac50`; the only code references are `0x1800c7b00`, `0x1800c9640`,
`0x1800c9910`, `0x1800cf580` (Stage 3.5 candidate reader) and the grow itself.

References to `DAT_1803fac40`: constructor `0x18000247e` / `0x18000248d`,
recorder `0x1800c97ec`, container callers `0x1800e8212`, `0x1800e830e`,
`0x1801f4718`, `0x18022cff8`, `0x18022d1a4`, and the `atexit` destructor
`0x180309b2a`/`0x180309b31` (`0x180309a40`). References to the ring fields are the
five code sites above; no additional initialiser exists.

## Log and format strings (verbatim)

Lengths count the bytes before the terminating NUL, including the trailing
newline. “LEA” is the instruction that forms the string address; “call” is the
logger invocation.

| Address | Len | LEA / call | String |
|---|---|---|---|
| `0x18034c850` | 98 | `0x1800c66aa` / `0x1800c66c0` | `[BT] depth capped by the server's usercmd validator: %d -> %d ticks (lag comp would allow %.0fms)` + LF |
| `0x18034c8c0` | 104 | `0x1800c6de0` / `0x1800c6de7` | `[BT] REFUSED %s tick: delta=%d > validator cap %d (the command would be voided and its angles replaced)` + LF |
| `0x18034c930` | 22 | argument at `0x1800c71b5` | `AIMED AT THE LIVE BODY` |
| `0x18034c948` | 13 | argument at `0x1800c71bc` | `on the record` |
| `0x18034c960` | 119 | `0x1800c71e4` / `0x1800c71eb` | `[AIM-POSE] %s: point is %.0fu from the RECORD and %.0fu from the LIVE body, which stand %.0fu apart (wrong-body %d/%d)` + LF |
| `0x18034c9d8` | 3 | `0x1800c73d5` | `IN ` |
| `0x18034c9dc` | 3 | `0x1800c73dc` | `OUT` |
| `0x18034c9e0` | 178 | `0x1800c745b` / `0x1800c7462` | `[BT-HIT] %s %s orig=%d new=%d srv=%d delta=%d ticks (%.0fms) band=[%.0f..%.0f]ms fp=+%.0fms sim=%.2f lerp=%.0fms age=%.0fms rec=%d align=%+.0fms (avg %+.0f max %.0f) (out %d/%d)` + LF |
| `0x18034caa0` | 97 | `0x1800c7565` / `0x1800c758e` | `[BT-LSAC] jump #%d %d -> %d (delta=%d, free band +-%d) — costs one flag, capped at 1 per %.0fs` + LF |
| `0x18034cb10` | 81 | `0x1800c7633` / `0x1800c763a` | `[BT-LSAC] budget spent: want=%d last=%d -> sending %d (walking back in <=%d/cmd)` + LF |
| `0x18034cb70` | 21 | `0x1800c9555` | `cl_extrapolate_amount` |
| `0x18034cb88` | 14 | `0x1800c93e2` / `0x1800c95f0` | `cl_extrapolate` |
| `0x18034cb98` | 44 | `0x1800c94d2` / tail-jump `0x1800c94f6` | `[BT-EXTRAP] cl_extrapolate restored to %.0f` + LF |
| `0x18034cbd0` | 132 | `0x1800c9592` / `0x1800c95b5` | `[BT-EXTRAP] cl_extrapolate -> 0 (was %.0f): entities now clamp to their last real snapshot instead of drifting up to %.0fms past it` + LF |
| `0x18034cc60` | 148 | `0x1800ca082` | `[BT] idle: no shootable player for %.0fs, so there is nothing to record. Not a fault — the history refills as soon as somebody is in front of you` + LF |
| `0x18034cd00` | 290 | `0x1800ca20f` | `[BT-LIMIT] history is EMPTY (%d records, %d valid targets) — every record is being pruned. ping=%.0fms (+%.0fms fakeping) lerp=%.0fms window=%.0fms: the acceptance band is \|shift-%.0fms\|<=%.0fms, so records outside it are dropped and a window smaller than that band leaves nothing at all` + LF |
| `0x18034ce30` | 207 | `0x1800ca3cf` | `[BT-LIMIT] history spans only %.0fms of the %.0fms you can reach (%d records; window %.0fms, restorable %.0fms, band far edge %.0fms with %.0fms fakeping) — the deep half of the band has nothing to aim at` + LF |
| `0x18034cf00` | 351 | `0x1800ca5f4` | `[BT-CLOSED] no legal tick: floor %d > ceiling %d. band centre %.0fms +-%.0fms, restorable %.0fms, choke %d ticks -> margins eat %.0fms off the floor and %.0fms off the ceiling. fakeping %.0fms pushed the band out and lerp %.0fms spent the unlag budget it shares with the shift. Back off ONE of fakeping / interp abuse / fakelag and the window reopens` + LF |
| `0x18034d060` | 94 | `0x1800ca63f` | `[BT] records=%d valid=%d shift=%d..%d ticks (%d usable) curtime=%.2f latestSim=%.2f diff=%.3f` + LF |
| `0x18034d0c0` | 14 | `0x1800ca674` | `worth building` |
| `0x18034d0d0` | 18 | `0x1800ca67b` | `not worth building` |
| `0x18034d0f0` | 124 | `0x1800ca6be` | `[BT-ANIM] %d samples / %d snapshots = %.2f commands per snapshot (%.0f%% of poses are interpolated — animation fix is %s)` + LF |
| `0x18034124c` | 1 | `0x1800c94bb`, `0x1800c961a` | `1` |
| `0x180347810` | 1 | `0x1800c94b2`, `0x1800c951d`, `0x1800c9611` | `0` |

The escaped pipes in the EMPTY row are table markup; the binary has literal `|`
bytes around `shift-%.0fms`.

## Data objects

| Object | Extent | Bound | References |
|---|---|---|---|
| `DAT_1803fac40` sentinel | 16 bytes (`{self, 0}`) | allocation size `0x10` in `0x180002470`; fields `[0]`/`[1]` | constructor `0x18000247e`, `0x18000248d`; `0x1800c97ec`; `0x1800e8212`; `0x1800e830e`; `0x1801f4718`; `0x18022cff8`; `0x18022d1a4`; destructor `0x180309b2a`/`0x180309b31` |
| `DAT_1803fac48` ring pointers | `capacity * 8` bytes | grow allocates `target*8`; frees old; null until first push | `0x1800c7c87`, `0x1800c9727`, `0x1800c9e67`, `0x1800c9f50`, `0x1800c9f68`, `0x1800c9f80`, `0x1800ca0fd`, `0x1800ca265`, `0x1800ca430`, `0x1800cf580`, `0x18022cdc0` |
| `DAT_1803fac50` capacity | 8-byte qword | starts 0; only `+= (target-capacity)` in grow | `0x1800c7c80`, `0x1800c9720`, `0x1800c9e5a`, `0x1800c9f16`, `0x1800c9f2b`, `0x1800c9f73`, `0x1800ca0f0`, `0x1800ca24d`, `0x1800ca423`, `0x18022cdc0` |
| `DAT_1803fac58` head | 8-byte qword | ring index, wrapped by capacity | `0x1800c7c46`, `0x1800c96f9`, `0x1800c97e5`, `0x1800c9e4d`, `0x1800c9f35`, `0x1800ca0de`, `0x1800ca258`, `0x1800ca413` |
| `DAT_1803fac60` count | 8-byte qword | live entries, bounded by capacity | `0x1800c7c4d`, `0x1800c96ca`, `0x1800c97de`, `0x1800c9e3d`, `0x1800c9efd`, `0x1800c9f24`, `0x1800c9fd4`, `0x1800ca209`, `0x1800ca3bb`, `0x1800ca3db`, `0x1800ca639`, `0x1800cf580` |
| `DAT_1803db380` saved extrapolate | 4-byte float | `movss`; written `0x1800c947e`, read `0x1800c94a2`, `0x1800c94ca`, `0x1800c9599`, `0x1800c9601` | `0x1800c93d0`, `0x1800c95d0` |
| `DAT_1803fac7a` active flag | 1 byte | set by `0x1800c9511`/`0x1800c9540`, cleared by `0x1800c94dc`/`0x1800c9630` | `0x1800c93d0`, `0x1800c95d0` |
| `DAT_1803fac7b` saved flag | 1 byte | set by `0x1800c9486`, cleared by `0x1800c9629` | `0x1800c93d0`, `0x1800c95d0` |

## Reuse map

| Call site | Reused helper | Owner |
|---|---|---|
| gate in slots 1 and 2 | `0x237bcfbdef3b6800` + `0x402819404e703058` | Stage 3.5/3.7/3.8 |
| record capture `0x1800ba4e0` | trace-filter save/restore | Stage 3.4 |
| populator `0x180053780` | player population | Stage 3.5 |
| `0x18001daf0` | `DT_BaseAnimating::m_vecOrigin` | Stage 3.5 |
| `0x1800c7b00` / `0x1800cf580` | candidate reader over the batch ring | Stage 3.5 |
| `0x180016fb0`, `0x180019700`, `0x1800197a0`, `0x1801fcdc0` | ConVar get/value/set | earlier passes |
| `0x180014300` | engine time | earlier passes |
| `0x180014410` | logger | earlier passes |

External calls resolve through these slots:

| Slot / pointer | Target |
|---|---|
| `0x18030c240` | `KERNEL32!IsBadReadPtr` |
| `0x18030c8f8` | `atof` |
| `0x18030c868` / `0x18030c888` / `0x18030c948` | `memset` / `memmove` / `free` |
| `0x1803da018` | `0x1802d3a70`, the scalar `sqrtf` wrapper (`sqrtss`; negative input jumps to `0x1802d92f8`) |

## Open items

**None in Stage 3.9.** The previously listed extrapolation maths, timing helpers,
ring initial capacity and `DAT_1803fac40` ownership are all closed above.
`FakeLagFeature` remains a negative finding: no non-default vtable slot exists, so
there is no body to reconstruct. Stage 3.6's paint-path element renderer is
recovered with a full `status: ok` body; only its class-specific element geometry
remains a runtime input (fixed defaults, stored sizes, screen extents and text
metrics). Stages 3.3–3.8 are complete.

## Verification

`build.bat` builds `src/features/backtrack/selftest.cpp` and runs it after HVH. It
asserts the shared gate, capture dedupe, the 4096-squared boundary, the shift
window and closed-window predicate, the eight-batch model, the `0x42` summary
cadence, the 1.5 ratio, compaction, the extrapolate restore strings, every newly
resolved body address/size, the timing constants, the string addresses/lengths,
and the ring/container extents. Clean build: 0 MSVC errors, 0 MSVC warnings, every
suite PASS.
