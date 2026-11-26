# Stage 3.6 — visuals (`Elements::*`, glow, chams, ghosts)

**Status: complete.** The element family's layout, colour, glow/chams, ghost
listener, projection, scale factor and paint-path renderer are reconstructed. The
renderer is `0x180174130`, a full `status: ok` corpus body called from the
per-player path; see **Renderer chain** below.

Source: `src/features/visual/` — `layout.h` (anchor placement), `elements.h` (the
eight element classes, colour resolution, draw dispatch), `glow.h` (ChamsGlow),
`ghost.h` (the `[ESP]` entity-lifecycle listener). Tested by
`src/features/visual/selftest.cpp`.

## Tag ownership, proven by address

The three tags are **not** one family, and none of them belongs to the element
classes. Each was traced to the function that emits it and from there to its
vtable:

| Tag | Emitting functions | Owning class | vtable |
|---|---|---|---|
| `[ESP]` | `0x1801913f0`, `0x180191540`, `0x1801918f0`, `0x180191a10`, `0x180191fa0`, `0x180192700` | `Features::Visual::ESP::CGhostEntityListener` | `0x33bbb8` (slots `0x1801911e0`, `0x180191320`) |
| `[GLOW]` | `0x180109680`, `0x180109710`, `0x18010a0d0`, `0x18010c040`, `0x18010c1b0`, `0x18010cc70` | `Features::ChamsGlow::ChamsGlowFeature` | `0x33e458` (slot 5 = `0x18010cc70`) |
| `[CHAMS]` | `0x180106ec0`, `0x1801070a0` | `Features::ChamsGlow::ChamsGlowFeature` material path | — |

`[ESP]` is entity-lifecycle bookkeeping: listener registration, unregistration,
stream-out retention, and the three erase classifications. Its literals are about
the **entity list**, not about boxes or text: `"[ESP] Entity List kept stream-out
idx=%d class=%s dt=%llums"`, `"[ESP] Entity List erased delete …"`, `"[ESP]
lifecycle footprint released: listener=%s transmit=%d recreate=%d"`.

No vtable slot of any `Features::Visual::ESP::Editor::Elements::*` class contains
an `[ESP]`, `[GLOW]` or `[CHAMS]` literal. A grep of all eight element bodies
returns no tag strings at all. The previous wording in `STAGES.md` that listed
`[ESP]`, `[GLOW]`, `[CHAMS]` as the logging of the ESP element subsystem is
corrected in this stage; the tags are per-owner as in the table above.

## Evidence

| Address | Corpus file (`re/dump/decompile/`) | `_INDEX.tsv` | Role |
|---|---|---|---|
| `0x180169260` | `0x180169260_vfunc_shared_180169260.c` | L2775 | anchor placement shared by all eight elements (530 B) |
| `0x180174130` | `0x180174130_FUN_180174130.c` | L2869 | **paint-path element-list renderer**: visibility gate, layout, slot-8 placement, per-kind draw dispatch (1,288 B) |
| `0x18018b900` | `0x18018b900_FUN_18018b900.c` | L2938 | per-player bounds/scale setup; calls `0x180174130` at line 415 and `0x18018aee0` at 418 (3,066 B) |
| `0x180196380` | `0x180196380_FUN_180196380.c` | L2984 | paint-path entity loop; calls `0x18018b900` at line 168 (1,324 B) |
| `0x180169760` | `…BoxElement_vfunc04.c` | L2780 | BoxElement inspector: colour, rounding, filled, thickness |
| `0x18016aa90` | `…BBoxElement_vfunc04.c` | L2794 | BBoxElement inspector: four styles, protected/outline colours |
| `0x18016d2d0` | `…TextElement_vfunc04.c` | L2830 | TextElement inspector: colour by job, shadow, text buffer |
| `0x18016c890` | `…ArmorBarElement_vfunc04.c` | L2818 | ArmorBar inspector: "Combine with HP bar" |
| `0x18016ccc0` | `…TextElement_vfunc10.c` | L2827 | colour resolution, job colour divided by 255 |
| `0x1801768e0` | `0x1801768e0_FUN_1801768e0.c` | L2885 | layout serialiser: `esp.count`, `# ESP editor layout` |
| `0x18010cc70` | `…ChamsGlowFeature_vfunc05.c` | L2210 | glow tick: style, blur/sharp, through-walls, toggle log |
| `0x18010ceb0` | `…ChamsGlowFeature_vfunc16.c` | L2211 | glow teardown (97 B) |
| `0x180106ec0` | `0x180106ec0_FUN_180106ec0.c` | L2178 | custom material resolution |
| `0x1801070a0` | `0x1801070a0_FUN_1801070a0.c` | L2179 | material unavailable fallback |
| `0x1801913f0` | `0x1801913f0_FUN_1801913f0.c` | L2963 | listener registration |
| `0x180192700` | `0x180192700_FUN_180192700.c` | L2971 | entity-list removal classification |

### The element vtable

All eight classes share the same layout; slot 8 is the anchor function above and
slot 4 is the editor inspector.

| Slot | Body (BoxElement) | Meaning |
|---|---|---|
| 2 | `0x180169510` | size getter: copies the two floats at `+0x40` |
| 3 | `0x180169520` | draw: box rect/outline through the surface helpers |
| 4 | `0x180169760` | editor inspector |
| 5 | `0x180169500` | class name (`"Box"`) |
| 6 | `0x1801691c0` | line getter: returns `DAT_180380d30` (`2.0`) |
| 7 | `0x180076390` | shared helper |
| 8 | `0x180169260` | anchor placement |

`vfunc04` is **editor UI**, not drawing: the bodies call ImGui helpers
(`FUN_1802aac00` separator, `FUN_1802bac60` colour picker, `FUN_1801a0b60`
checkbox, `FUN_1801a6c50` drag-int with 4/8/5 maxima, `FUN_1802b74e0`
input-text). The reconstruction models the same properties as plain data so the
behaviour is testable without ImGui.

## Dispatch and draw ordering

`0x1801768e0` serialises the layout: a comment header `"\n# ESP editor layout\n"`
followed by `"esp.count"` and one entry per element. Nothing in the element family
carries a z-index, sort key, or comparator — the family has exactly one ordering,
the stored list order.

The reconstruction therefore dispatches in layout order, and `ElementList::Render`
accepts an explicit order list (the file's order) as the original would.

The paint-path dispatch entry **does exist**; the previous search was aimed at the
wrong address. The chain is:

```
0x180196380  paint-path entity loop
  -> 0x18018b900  player bounds/scale, screen rect, visibility gate
    -> 0x180174130  element-list renderer (DAT_1803fb100..DAT_1803fb108)
      -> 0x180171c50  element placement; invokes slot 8 at [this+0x40]
      -> 0x180173e80 / element vfuncs  per-kind draw dispatch
```

The element slot 3 used by the dispatcher is a real draw body, not an identifier:
`0x180169520` (`BoxElement::vfunc03`, 571 B) computes the box rectangle and calls
the surface helpers `0x180294990`, `0x1802929d0` and `0x180295000`. That matches
`0x180174130`'s `+0x18` dispatch and confirms the recovered function is the
drawing renderer rather than a layout-only pass. `0x180174130` is also called by
the ESP editor preview at `0x18017ac80`, so the same dispatcher serves the live
overlay and the editor. `RenderPlayer` remains
the reconstruction's testable entry — it projects the player's bounds
(`0x1800207e0`) and then dispatches the list — but it now mirrors this recovered
chain instead of filling a missing boundary. The exact body evidence is
`0x180174130` lines 54-58 (list bounds), 99-128 (visibility/scale pass and
`0x180172420` layout), 180 (`0x180171c50` placement) and 186 (`0x180173e80`
draw); `0x180171c50` line 69 is the slot-8 indirect call `[this+0x40]`;
`0x18018b900` lines 415-418 call the renderer and the skeleton pass; and
`0x180196380` line 168 calls the per-player path.

Inside one element the emission order follows the property order of its inspector:

| Element | Emission |
|---|---|
| `BoxElement` | fill when filled, otherwise outline with thickness |
| `BBoxElement` | body (fill/outline), then the optional outline overlay |
| `CircleElement` | circle |
| `TextElement` / `DynamicTextElement` | shadow first, then the text |
| `HealthBarElement` / `ArmorBarElement` | bar |

## Anchor model (`0x180169260`)

Inputs: element size (vfunc `0x10`), a scalar from vfunc `0x30`, the parent rect
`{x, y, w, h}`, and a gap. With `w`/`h` the element size, `line` the scalar:

| Anchor | x | y |
|---|---|---|
| 0 | `- w/2` | `+ parent.y - h/2 - line - gap` |
| 1 | `- w/2` | `+ parent.h + line + gap` |
| 2, 9 | `+ parent.x - w - line` | `+ parent.y + gap` |
| 3, 11 | `+ parent.w + line` | `+ parent.y + gap` |
| 4 | `+ parent.x` | `- h/2` |
| 5 | `+ parent.w - w` | `- h/2` |
| 6 | `+ parent.x` | `+ parent.h + line + gap` |
| 7 | `+ parent.w - w` | `+ parent.h + line + gap` |
| 8 | `- w/2` | `- h/2` |
| 10 | `+ parent.x - w - line` | `+ parent.h - h - gap` |
| 12 | `+ parent.w + line` | `+ parent.h - h - gap` |
| default | `- w/2` | `- h/2` |

The tail adds the element offsets at `+0xc` / `+0x10`; for anchor 8 only, those
offsets are multiplied by `DAT_1803fcb6c` while `DAT_1803fcb80` is zero.

## Colour

`0x18016ccc0` returns the stored float RGBA at `+0x40`. When "Color by Job"
(`+0x81`) is set and `DAT_1803fe548` is present, the RGB is replaced by the job
colour from the callback divided by `255.0` (`0x1803811c8`), keeping the element
alpha from `+0x4c`.

## Glow and chams

`0x18010cc70` reads, in order:

| Key | Type | Meaning |
|---|---|---|
| `0x28549c2b3ea27228` | int | through walls |
| `0x928aca364203258f` | float | blur radius |
| `0x3db4763925009906` | bool | sharp vs blur |
| `0x44e346faced5d1ce` | bool | enable glow (evaluated only when enabled and the style resolves) |

All four hang off the root token `0x93fd561a96ab0c67`. The toggle line is emitted
only when the enabled flag changes:
`"[GLOW] toggle -> %s (through walls=%d, style=%s, blur=%.1f, sharp=%dpx)"`.
Turning the glow off calls `FUN_180109680`; the active flag is `DAT_180409670`,
the last enabled state `DAT_180409654`.

**Literal correction.** The first 3.6 pass read the two literals at
`DAT_1803449c4` / `DAT_18034b584` as style names and called them `Soft`/`Hard`.
They are the **toggle** pair, read from the raw bytes:

| Address | Bytes | Literal | Role |
|---|---|---|---|
| `0x1803449c4` | `6f 66 66 00` | `off` | first `%s`, disabled |
| `0x18034b584` | `4f 4e 00 00` | `ON` | first `%s`, enabled |

The style argument (second `%s`) is chosen by kGlowSharp: `blur` when clear,
`sharp` when set. The code now exposes `ToggleName(bool)` and `StyleName(bool)`
with those exact literals; the invented `Soft`/`Hard` names are gone.

Chams material resolution has exactly three outcomes, each with its literal:

| Outcome | Literal |
|---|---|
| resolved | `[CHAMS] custom material '%s' resolved` |
| not found | `[CHAMS] custom material '%s' not found -> falling back to Flat` |
| unavailable | `[CHAMS] material '%s' unavailable on this mount -> falling back to Flat` |

## Ghost listener (`[ESP]`)

`CGhostEntityListener` registers a delete + transmit/PVS listener. Registration has
four outcomes, named by the literals: registered, deferred (no RTTI adjustment),
conservative (signature missing), conservative (registration threw). A failed
unregister also lands in the conservative state: ghosts are kept rather than
dropped, which is the whole point of the tag.

Removal classification (`0x180192700`) distinguishes a kept stream-out, a delete,
a serial reuse and an occupied slot, each with its own line.

## Projection (world to screen)

The projection path exists and is now wired in `src/features/visual/to_screen.h`.
It is not part of the element family — it is exposed to scripts and used by the
beam and tracer renderers.

| Address | Corpus file | `_INDEX.tsv` | Role |
|---|---|---|---|
| `0x1800207e0` | `0x1800207e0_FUN_1800207e0.c` | L290 | project one world point: `w` divide + screen transform (452 B) |
| `0x180021be0` | `0x180021be0_FUN_180021be0.c` | L304 | clip a segment to the near plane, then project both ends (848 B) |
| `0x1800e46b0` | `0x1800e46b0_FUN_1800e46b0.c` | L1929 | Lua binding `ToScreen` (432 B) |
| `0x1800e4860` | `0x1800e4860_FUN_1800e4860.c` | L1930 | Lua binding `ToScreenLine` |
| `0x1800ebff0` | `0x1800ebff0_FUN_1800ebff0.c` | L2058 | Lua binding `GetScreenSize` (1598 B) |

The math, argument for argument:

```
w  = dot(p, m[12..14]) + m[15]            // row 3 of the 4x4
if (!finite(w) || w < 0.001) return false  // 0x180380964
x' = (dot(p, m[0..2])  + m[3]) / w
x' = (dot(p, m[4..6])  + m[7]) / w
get screen W,H from DAT_1803fa668->vfunc(0x28)
if (W <= 1 || H <= 1) return false
screenX = W * x' * 0.5 + W * 0.5          // 0x180380ac0
screenY = H * 0.5 - H * y' * 0.5
```

`0x180021be0` adds the near-plane clip before projecting: it transforms both
endpoints, keeps the segment when either `w` is above `0.0099999`
(`0x180380980`), interpolates the behind-camera end to exactly that plane
(rejecting a degenerate `|dw| < 1e-6`), then calls the point projector twice.

Callers of the clipper in the whole corpus: `0x1800e46b0`, LookBeam
(`0x180107f80`), BulletTracers (`0x1801103a0`). Nothing else projects world space.

`RenderPlayer` composes the two: it projects the eight corners of the entity's
world bounds, takes the screen hull, and dispatches the element list against that
rect. The corner enumeration is the standard eight; the bounds call itself is
engine-side and not in the corpus, so it is a parameter.

## Geometry source and timing

Stage 3.6's element geometry is **not a single saved config value**. The
recovered read sites are in the paint path; no injection-time snapshot appears
in those call sites. It is produced at paint time by each element object's
vfuncs:

* `Element::width`, `height` and `line` correspond to the element vfuncs at
  `+0x10` and `+0x30`. `0x180171c50` calls `+0x10` at lines 159, 189 and 225 and
  `+0x30` at line 190; the shared anchor body `0x180169260` calls the same two
  slots at lines 24-25.
* The recovered path is `0x1801f62b0` (calls `0x180196380` at line 127; the
  `Paint` check is at line 128) -> `0x180196380` (entity loop, calls
  `0x18018b900` at line 168) -> `0x18018b900` (derives the screen-space extents
  at lines 391-410, writes the scale at line 411, and calls `0x180174130` at
  line 415) -> `0x180174130` (calls `0x180171c50` at line 180).
* `0x18018b900` divides by `0x180381178` and `0x1803811dc` at lines 409-410;
  `re/tools/consts.js m64.dll` reads those as `170.0f` and `270.0f`. The scale
  written at line 411 is the average of the two relative scales.
* Therefore width, height and line are runtime values returned by the element
  vfuncs during the paint/entity pass. They are class-specific, not one shared
  engine query:
  - `BaseElement` (`0x180169190`) returns fixed `50x15`; its line vfunc
    `0x1801691c0` returns `2.0` (`0x180380d30`).
  - `BoxElement` (`0x180169510`) returns the two stored floats at `+0x40`.
  - `BBoxElement` (`0x180169c90`) returns the current screen extents.
  - `TextElement` (`0x18016cc90`) and `DynamicTextElement` (`0x18016e220`) call
    `0x18016ca30`, which measures the text through the text-measurement helper
    `0x18029e350`.
  - `HealthBarElement`/`ArmorBarElement` (`0x18016af90`) use the screen extents
    plus the stored width at `+0x74`; their line vfunc `0x1800764a0` returns 0.
  - `CircleElement` (`0x180169940`) returns twice the radius at `+0x58`.
  The `50x15`/`2.0` BaseElement values are compiled-in defaults, not GMod
  measurements. The recovered read sites are in this paint path; no injection-time read
  appears in the recovered call sites. This is a class-specific runtime
  geometry boundary, not a single GMod config key.
* Only the separate runtime ESP path reads GMod geometry: `DrawEsp()` calls
  `gmod::EntityBounds()` from `HookFrameStageNotify` when it receives
  `FRAME_RENDER_START` (stage 6), `src/runtime/skyfall.cpp:448` and `:574`.
  `EntityBounds` calls entity slot 3 and collision slots 3/4
  (`src/runtime/gmod_sdk.h:208,216-217,230-237`), i.e. the GMod entity's
  collision OBB (`GetCollideable` -> `OBBMins`/`OBBMaxs`). The fixed
  `(-16,-16,0)..(16,16,72)` box is the fallback when `EntityBounds` returns
  false or the returned collision bounds fail the x finite check
  (`skyfall.cpp:444-452`).

So: the box bounds are GMod entity collision bounds; the element sizes/line are
class-specific runtime element data, not one GMod measurement. Both are read at
paint/stage-6 time after injection, not at hook installation. The standalone
visual self-test supplies literal element geometry (for example 40x10 at
`src/features/visual/selftest.cpp:146`); the live runtime supplies the GMod
collision bounds instead, as exercised by the injected ESP check.

## Constants and keys

| Value | Address | Use |
|---|---|---|
| `0.5` | `0x180380ac0` | centred anchors and the screen transform |
| `255.0` | `0x1803811c8` | job colour scale |
| `0.001` | `0x180380964` | projection `w` guard |
| `0.0099999` | `0x180380980` | near-plane clip `w` |
| `1e-6` | `0x180380938` | clip degenerate-span guard |
| `250` (`0xfa`) | inline in `0x180191fa0` | stream-out grace window |
| `0.92` / `0.08` | `0x180380b6c` / `0x1803809e4` | free-scale interpolation, first form |
| `0.80` / `0.20` | `0x180380b3c` / `0x180380a38` | free-scale interpolation, second form |
| `0x33ad18` … `0x339258` | RTTI | the eight element vtables |
| `0x33bbb8` | RTTI | `CGhostEntityListener` vtable |
| `0x33e458` | RTTI | `ChamsGlowFeature` vtable |
| `0x93fd561a96ab0c67` | root | glow config section |
| `0x180381384` | `-1.0f` | unset sentinel used around the glow state |

BBox styles, in the editor's order: `Full box`, `Corner box`, `Top + bottom`,
`Side rails`.

## Residuals and closed items

* **World-to-screen: closed.** `0x1800207e0` (point) and `0x180021be0` (clipped
  segment) are reconstructed with their `w` guards and screen transform in
  `to_screen.h`, and `RenderPlayer` uses them to turn world bounds into the anchor
  rect. This item is no longer open.
* **Element renderer: closed.** The actual renderer is `0x180174130`
  (`status: ok`, 1,288 B, 212 lines), not `0x180169260`. It loops the global
  element list `DAT_1803fb100..DAT_1803fb108`, applies the visibility/scale gates,
  calls `0x180171c50` for placement (which invokes slot 8 through
  `(**(code **)(*param_2 + 0x40))`), and dispatches drawing through
  `0x180173e80`, `0x18016b260`, and the element vfuncs at `+0x18` / `+0x58`.
  `0x18018b900` calls it from the per-player path and `0x180196380` calls
  `0x18018b900` in the paint-path entity loop. The old direct-call search looked
  for a direct `FUN_180169260` call, but slot 8 is reached indirectly; that is why
  the body appeared absent. The eight element vtables still carry slot 8, as
  `vtable_methods.tsv` records, and the layout serialiser `0x1801768e0`
  (`esp.count`) confirms list order.
* **`DAT_1803fcb6c`: closed.** This is a 4-byte `.bss` float with **two writers**:
  `0x18017ac80` line 298 sets it to `1.0f`, and `0x18018b900` line 411 sets it to
  `(widthScale + heightScale) * 0.5`; line 412 clears `DAT_1803fcb80`. Here
  `widthScale = (width-170)/170`
  (`0x180381178`) and `heightScale = (height-270)/270` (`0x1803811dc`). The 18
  remaining references are readers (`0x180169260` free-anchor offsets, text/box
  interpolation at `0x18016bbb0`, `0x18016ca30`, `0x18016d150`, `0x18016ff90`,
  `0x180171160`, `0x180171430`, `0x180171c50`). `ScaleFromExtents` in `layout.h`
  reproduces the writer formula; the self-test asserts 0 at 170x270, 1 at 340x540
  and 0.5 at 255x405. The former "no writer" statement is withdrawn.
* **Stream-out grace: closed.** `0x180191fa0` compares the record age with `0xfa`,
  so the window is 250 ms and `kStreamOutGraceMs` is now that value.
* **Draw ordering (assumption, bounded).** Layout order is evidenced by the
  serialiser `0x1801768e0` (`esp.count`) and by the absence of any sort key in the
  family. Per-element emission order follows the property order of each inspector.
* **Element geometry (class-specific runtime input).** Each class's vfunc `0x10`
  / `0x30` supplies width/height/line at paint time: `BaseElement` returns fixed
  `50x15`/line `2`; `BoxElement` returns the stored size at `+0x40`;
  `BBoxElement`, `HealthBarElement` and `ArmorBarElement` use the current screen
  extents (the bars add their stored width at `+0x74`); `TextElement` and
  `DynamicTextElement` call `0x18016ca30` for font metrics; `CircleElement`
  doubles its radius. The reconstruction stores width/height/line because it
  models the element data, not because the vfunc bodies are absent. This is a
  runtime input boundary, not a missing corpus body or renderer gap.
* **Glow literals: closed.** The pair at `0x1803449c4` / `0x18034b584` is `off` /
  `ON` (toggle), and the style literal is `blur` / `sharp`. No descriptive names
  remain in the code.

* **Editor UI not reimplemented.** The inspector bodies are ImGui calls; their
  labels, offsets and ranges are recorded as data instead.
* **Filter reuse (assumption).** The element family contains no visibility/team
  filter of its own; the reconstruction reuses Stage 3.5's gate chain
  (`0x1800c5030`) so team/dormant/health/NODRAW semantics match the aim side.

## What the self-test proves

`build\visual_selftest.exe` — 127 assertions:

* all thirteen anchor cases, the offset tail, and the free-anchor scale;
* emission per kind: filled vs outlined box, bbox body + outline overlay, text
  shadow before text, bars, and the command payloads;
* dispatch in layout order, explicit order override, anchor placement through the
  list, and an empty layout;
* the shared gate rejects teammate, invalid index, dead and NODRAW entities and
  accepts a visible enemy;
* glow: toggle logging only on change, activation requires enabled + style + key,
  each condition alone disables it, disable restores, sharp/blur reporting;
* chams: resolvable material, missing-name `Flat` fallback, and all three literals
  byte-for-byte;
* ghosts: deferred/conservative/registered paths, failed unregister preserving
  ghosts, clean unregister releasing them, all four removal classes, and the
  250 ms stream-out boundary;
* projection: a centred point lands at the screen centre, a point behind the
  camera is rejected by the `w` guard, a degenerate screen size is rejected, a
  segment crossing the near plane is clipped and lands inside, a fully-behind
  segment is rejected, a world box projects to a rect of the expected size, a box
  behind the camera yields nothing, and `RenderPlayer` emits through the projected
  path or nothing for an offscreen player;
* literals and scale: `off`/`ON`, `blur`/`sharp`, and both interpolation forms
  reaching 1.0 at factor 1;
* the scale writer: `DAT_1803fcb6c` is 4 bytes, its two writers are
  `0x18017ac80` and `0x18018b900`, and `ScaleFromExtents` gives 0 at 170x270,
  1 at 340x540 and 0.5 at 255x405.
