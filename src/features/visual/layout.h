#pragma once
// Element anchor layout (Stage 3.6).
//
// Reconstructed from 0x180169260 (530 bytes) —
//   re/dump/decompile/0x180169260_vfunc_shared_180169260.c
//
// This is slot 8 of every element vtable: given the element's own size, a parent
// rectangle and a gap, it returns the top-left corner the element occupies. All
// eight element classes share this exact body, so the anchor enum and the maths
// below are the whole family's placement contract.
//
// Calling convention, as recovered:
//   this      element; anchor = *(int*)(this + 8)
//   size      via vfunc 0x10 (w at out[0], h at out[1])
//   line      via vfunc 0x30 (scalar)
//   parent    rect {x, y, w, h}
//   gap       pixels
//   out       {x, y}
//   element offsets are added afterwards from +0xc and +0x10.

#include <cmath>

namespace sf {
namespace visual {

// 0x180380ac0 — the half divisor used by every centred anchor.
inline constexpr float kHalf = 0.5f;
inline constexpr uint64_t kAnchorFn = 0x180169260ULL;
inline constexpr uint64_t kScaleFactorAddress = 0x1803fcb6cULL;
inline constexpr uint64_t kScaleInitWrite = 0x18017ac80ULL;
inline constexpr uint64_t kScaleComputeWrite = 0x18018b900ULL;
inline constexpr float kRefWidth = 170.f;   // 0x180381178
inline constexpr float kRefHeight = 270.f;  // 0x1803811dc

// The anchor index lives at +8 and is not an enum in the binary. The names here
// are descriptive, not recovered; only the numbers are evidence.
enum class Anchor : int
{
    CenterAbove = 0,
    CenterBelow = 1,
    LeftOfTop = 2,
    RightOfTop = 3,
    LeftOfCenter = 4,
    LeftOfBottom = 5,
    RightOfCenter = 6,
    RightOfBottom = 7,
    Free = 8,
    LeftOfTopAlt = 9,
    LeftOfBottomAlt = 10,
    RightOfTopAlt = 11,
    RightOfBottomAlt = 12,
};

struct Rect
{
    float x = 0.f, y = 0.f, w = 0.f, h = 0.f;
};

struct Vec2
{
    float x = 0.f, y = 0.f;
};

// 0x180169260, case for case. `anchorRect` is the parent; `origin` is the packed
// float pair the caller passes in param_3.
inline Vec2 AnchorPoint(Anchor anchor, const Rect& anchorRect, Vec2 origin,
                        float elementW, float elementH, float line, float gap)
{
    float x = origin.x;
    float y = origin.y;

    switch (anchor)
    {
    case Anchor::CenterAbove:
        x = x - elementW * kHalf;
        y = ((y + anchorRect.y) - elementH * kHalf) - line - gap;
        break;

    case Anchor::CenterBelow:
        x = x - elementW * kHalf;
        y = y + anchorRect.h + line + gap;
        break;

    case Anchor::LeftOfTop:
    case Anchor::LeftOfTopAlt:
        x = ((x + anchorRect.x) - elementW) - line;
        y = y + anchorRect.y + gap;
        break;

    case Anchor::RightOfTop:
    case Anchor::RightOfTopAlt:
        x = x + anchorRect.w + line;
        y = y + anchorRect.y + gap;
        break;

    case Anchor::LeftOfCenter:
        x = x + anchorRect.x;
        y = y - elementH * kHalf;
        break;

    case Anchor::LeftOfBottom:
        x = (x + anchorRect.w) - elementW;
        y = y - elementH * kHalf;
        break;

    case Anchor::RightOfCenter:
        x = x + anchorRect.x;
        y = y + anchorRect.h + line + gap;
        break;

    case Anchor::RightOfBottom:
        x = (x + anchorRect.w) - elementW;
        y = y + anchorRect.h + line + gap;
        break;

    case Anchor::Free:
        // The only anchor whose offsets are scaled (see ApplyOffset).
        x = x - elementW * kHalf;
        y = y - elementH * kHalf;
        break;

    case Anchor::LeftOfBottomAlt:
        x = ((x + anchorRect.x) - elementW) - line;
        y = ((y + anchorRect.h) - elementH) - gap;
        break;

    case Anchor::RightOfBottomAlt:
        x = x + anchorRect.w + line;
        y = ((y + anchorRect.h) - elementH) - gap;
        break;
    }

    return Vec2{ x, y };
}

// 0x180169260's tail: the element's own offset is added, and for the free anchor
// (8) only, the offset is multiplied by DAT_1803fcb6c while DAT_1803fcb80 is 0.
//
// DAT_1803fcb6c is a 4-byte .bss scale factor with two writers:
//   0x18017ac80  sets it to 1.0f at initialisation;
//   0x18018b900  sets it to (widthScale + heightScale) * 0.5, where the scales
//                are (current - reference) / reference for 170 x 270.
// Its readers use it as the interpolation factor in 0.92 + 0.08*f and
// 0.80 + 0.20*f. The free-anchor tail multiplies the element offset by it while
// DAT_1803fcb80 is zero. The live value comes from the screen-extent update.
inline constexpr float kScaleBaseA = 0.92f;    // 0x180380b6c
inline constexpr float kScaleSpanA = 0.0799999f; // 0x1803809e4
inline constexpr float kScaleBaseB = 0.8f;     // 0x180380b3c
inline constexpr float kScaleSpanB = 0.19999999f; // 0x180380a38

inline float InterpolateScale(float factor, float base, float span)
{
    return factor * span + base;
}

// 0x18018b900: the average of the horizontal and vertical relative scales.
inline float ScaleFromExtents(float width, float height)
{
    const float sx = (width - kRefWidth) / kRefWidth;
    const float sy = (height - kRefHeight) / kRefHeight;
    return (sx + sy) * kHalf;
}

inline Vec2 ApplyOffset(Vec2 placed, float offsetX, float offsetY, Anchor anchor,
                        float freeScale, bool freeScaleEnabled)
{
    if (!freeScaleEnabled && anchor == Anchor::Free)
    {
        offsetX = offsetX * freeScale;
        offsetY = offsetY * freeScale;
    }
    return Vec2{ placed.x + offsetX, placed.y + offsetY };
}

} // namespace visual
} // namespace sf
