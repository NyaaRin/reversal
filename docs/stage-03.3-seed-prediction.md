# Stage 3.3 — seed / prediction

The cheat does not trust the engine's prediction RNG; it reseeds it from the command
number so a shot's cone is a pure function of that number. This stage reconstructs
that path end to end.

Source: `src/features/prediction/prediction.h`, tested by
`src/features/prediction/selftest.cpp`.

## Evidence

| Address | Corpus file (`re/dump/decompile/`) | `_INDEX.tsv` | Role |
|---|---|---|---|
| `0x180024f00` | `0x180024f00_FUN_180024f00.c` | L345 | prediction begin: pattern scan, seed write, tick mapping |
| `0x180025360` | `0x180025360_FUN_180025360.c` | — | prediction end: restore seed and engine time block |
| `0x180015e50` | `0x180015e50_FUN_180015e50.c` | L162 | command number → seed (MD5) |
| `0x18001dfb0` | `0x18001dfb0_FUN_18001dfb0.c` | — | `m_nTickBase` netvar lookup on `DT_BasePlayer` |
| `0x180017150` | `0x180017150_FUN_180017150.c` | — | resolves `CMoveHelperClient` by RTTI |

## Seed

```
seed = MD5(command_number as 4 little-endian bytes)
seed = ((state2 & 0xffff) << 16) | (state1 >> 16)     // digest-word extraction
seed = seed & 0x7fffffff                              // before it reaches the engine
```

The 31-bit mask is applied twice in `0x180024f00`: once when writing
`m_pPredictionRandomSeed` and once when calling `vstdlib!RandomSeed`. Both consumers
must see the same value or the client and server roll different cones.

## Locating m_pPredictionRandomSeed

The address is found by a byte pattern in `client.dll`, not by a stored offset:

```
48 85 C9                       test rcx, rcx
75 0B                          jne  +0xB
C7 05 ?? ?? ?? ?? FF FF FF FF  mov  dword ptr [rip+disp], -1
C3                             ret
```

`0x180024f00` passes the pattern text and `0x2f` to the string constructor. `0x2f` =
47 is the length of the **text** (16 signature bytes rendered as `XX ` pairs), not a
byte count — the 16 bytes are `48 85 C9 75 0B C7 05` + four wildcards + `FF FF FF FF
C3`.
The resolved slot is

```
match + 0xf + *(int32 *)(match + 7)
```

i.e. the RIP-relative displacement read at `+7` added to the address of the next
instruction (`+0xf`). On failure the body logs
`[PRED-WARN] x64 m_pPredictionRandomSeed pattern NOT FOUND` and leaves the slot
null; on success it logs `[PRED] x64 m_pPredictionRandomSeed = %p (disp=0x%X)`.

## Begin (`0x180024f00`)

1. If the hook is already active, run the restore path first.
2. Clear the "patch active" flag; store the `CUserCmd*` in `DAT_1803de050`.
3. Save the engine block at `DAT_1803fa608`: `+0x10` (double frame time) and `+0x18`
   (tick interval) into `DAT_1803ddea0` / `DAT_1803ddea8`.
4. Mark active (`DAT_1803de065 = 1`).
5. Resolve the seed pointer (once; the scan is latched by `DAT_1804253fc`).
6. `seed = CommandSeed(*cmd) & 0x7fffffff`; save `*slot` into `DAT_1803de060`, set
   the "seed written" flag, write `*slot = seed`.
7. `vstdlib!RandomSeed(seed)` with the same value.
8. Map the command to a tick (below).
9. `*(double *)(state + 0x10) = predictedTick * *(double *)(state + 0x28)`;
   `*(float *)(entity + 0x18) = (float)*(double *)(state + 0x28)`.
10. Config gate: read the shared backtrack gate (`0x237bcfbdef3b6800` /
    `0x402819404e703058`); when it is false, read the prediction-patch flag
    (`0x93fd561a96ab0c67` / `0xfc192b983f5bff62`) and, if set, run a one-shot
    memory patch that writes `0x4e6e6b28` (`1.0e9f`) at `entity +
    DAT_1803e6ed0`, restoring it afterwards.

## Tick mapping and the 62-tick bound

```
tick = m_nTickBase                      // server tick
predicted = tick
nextTick = tick ; nextCmd = cmd

if (tick == lastServerTick && lastCommand < cmd) {
    gap = cmd - lastCommand
    predicted = tick + gap              // extrapolate
    nextTick = lastServerTick           // deliberately not advanced
    nextCmd  = lastCommand              // deliberately not advanced
    if (0x3e < (gap - 1))               // gap >= 64
        predicted = tick                // too far ahead: fall back
}

lastServerTick = nextTick
lastCommand    = nextCmd
predictedTick  = predicted
```

Two details matter and are reproduced: the unsigned comparison means **63 ticks
still extrapolates and 64 falls back**, and the extrapolating branch leaves the
baselines at the last server-confirmed values so repeated calls measure the same
gap. `DAT_1803de068` (the predicted tick) is read by TFA's backend (`0x18007fdb0`).

## End (`0x180025360`)

1. If the memory patch is active, clear it and call `vtable+0x18` on
   `DAT_1803fa658` with the local entity to restore the patched float.
2. If a seed was written, `*slot = DAT_1803de060` (the saved original).
3. Clear the "seed written" flag.
4. If the hook was active, restore the engine block: `+0x10` and `+0x18` from
   `DAT_1803ddea0` / `DAT_1803ddea8`.
5. Clear active, the tick flags and the stored command pointer.

## MoveHelper

`0x180017150` resolves the interface by RTTI name `.?AVCMoveHelperClient@@` and
stores it in `DAT_1803fa5a0`, logging
`[IFACE] g_pMoveHelper = %p (CMoveHelperClient, RTTI-verified)`. The prediction
block drives the movement helper through vtable `+0x10` (begin) and `+0x18` (end) on
`DAT_1803fa658`.

## What the self-test proves

`build\prediction_selftest.exe` checks:

* the seed is `CommandSeed & 0x7fffffff`, fits in 31 bits, and reaches both the slot
  and the reseed callback identically;
* the step-10 gate pair is the shared backtrack flag, the second pair is the
  prediction-patch flag, and the lookup/cast addresses are `0x180241610` /
  `0x1801fcfc0` / `0x1802029c0`;
* the pattern has 16 signature bytes, its text is exactly `0x2f` characters (the
  length the body passes), and the module literal is 10 characters;
* pointer resolution equals `match + 0xf + displacement` on a synthetic image;
* the tick map: first call, same-tick extrapolation, the 63/64 boundary, and that a
  new server tick always wins;
* `End()` restores the original seed, frame time and tick interval.

## Residual closure pass

The step-10 constants are **not** integrity hashes and `0x180241610` is **not** a
hash function. It is a 36-byte nested-map lookup:

| Address | Size | Body |
|---|---|---|
| `0x180241610` | 36 B | calls `FUN_180241a30(root, key)`, then returns `*node + 0x28` |
| `0x180241a30` | 353 B | red-black tree walk: compares the 64-bit key at node `+0x20`, allocates a node on miss |
| `0x1801fcfc0` | 158 B | RTTI-checked `std::any` cast to `bool` |
| `0x1802029c0` | 169 B | RTTI-checked `std::any` cast to `int` |

The two probes in step 10 are therefore ordinary config reads:

```
backtrack = bool(*lookup(0x237bcfbdef3b6800, 0x402819404e703058))
if (!backtrack) {
    patchEnabled = bool(*lookup(0x93fd561a96ab0c67, 0xfc192b983f5bff62))
    if (patchEnabled) {
        FUN_180024b50(...); FUN_180024cd0(...);
        save = *(u32 *)(entity + DAT_1803e6ed0);
        *(u32 *)(entity + DAT_1803e6ed0) = 0x4e6e6b28;   // 1.0e9f
        three vtable calls;
        *(u32 *)(entity + DAT_1803e6ed0) = save;
    }
}
```

`DAT_1803e6ed0` is a 4-byte integer offset added to the entity pointer; the
patched float occupies the four bytes at `entity + offset`. Writer:
`0x180024cd0` line 84. Readers: `0x180024f00` line 132, `0x180051dc0` line 141
and `0x180052340` line 48, each guarded by `-1 < offset`.

`0x402819404e703058` is the shared backtrack gate reconstructed in Stage 3.9
(also read by 3.5/3.7/3.8), so it is **reused**, not re-derived here. The second
pair is the prediction memory-patch enable flag under the shared root; no
verification, checksum, or anti-tamper comparison exists in the block.

### Remaining external check

`client.dll` is absent from the workspace: `find . -iname client.dll` returns no
path. The pattern body itself is fully read (16 signature bytes, text length
`0x2f`, module literal length 10, displacement at `+7`, next instruction at `+0xf`),
and the self-test exercises the arithmetic on a synthetic image. The only
unverified step is matching the bytes against the real client module, which is
outside this corpus; this is a validation limitation, not an unread body.
