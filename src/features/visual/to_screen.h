#pragma once
// World-to-screen and screen-space line clipping (Stage 3.6, projection pass).
//
// The projection path is not in the element family — it is exposed to scripts and
// used by the beam/tracer renderers:
//
//   0x1800207e0  project one world point: w divide + screen transform (452 bytes)
//   0x180021be0  clip a world-space segment to the near plane, then project both
//                ends (848 bytes)
//   0x1800e46b0  Lua binding "ToScreen": reads two vec3s, calls 0x180021be0,
//                pushes four numbers (432 bytes)
//   0x1800e4860  Lua binding "ToScreenLine"
//   0x1800ebff0  "GetScreenSize" binding (1598 bytes)
//
// Callers of 0x180021be0 in the corpus: 0x1800e46b0, LookBeam (0x180107f80) and
// BulletTracers (0x1801103a0). Those three are the only projected overlays.

#include <cmath>

#include "../nospread/angle.h"
#include "layout.h"

namespace sf {
namespace visual {

// 0x1800207e0 rejects a point when w is not finite or below this. The sibling
// guard 0x180380980 (0.0099999) is used for the near-plane side of the clip.
inline constexpr float kNearPlaneW  = 0.001f;   // 0x180380964
inline constexpr float kClipNearW   = 0.0099999f; // 0x180380980
inline constexpr float kClipEpsilon = 0.000001f; // 0x180380938
inline constexpr float kScreenHalf  = 0.5f;     // 0x180380ac0

// Row-major 4x4, the layout the image passes to 0x1800207e0:
//   x' = dot(p, m[0..2])  + m[3]
//   y' = dot(p, m[4..6])  + m[7]
//   w  = dot(p, m[12..14]) + m[15]
struct ViewMatrix
{
    float m[16] = { 1.f, 0.f, 0.f, 0.f,
                    0.f, 1.f, 0.f, 0.f,
                    0.f, 0.f, 1.f, 0.f,
                    0.f, 0.f, 0.f, 1.f };
};

// 0x1800207e0. Returns false when the point is behind the camera or the screen
// size is degenerate.
inline bool WorldToScreen(const Vector& p, const ViewMatrix& view, int screenW, int screenH,
                          Vec2* out)
{
    const float w = p.y * view.m[13] + p.x * view.m[12] + p.z * view.m[14] + view.m[15];
    if (!std::isfinite(w) || !(kNearPlaneW <= w))
        return false;

    float x = (p.y * view.m[1] + p.x * view.m[0] + p.z * view.m[2] + view.m[3]) / w;
    float y = (p.y * view.m[5] + p.x * view.m[4] + p.z * view.m[6] + view.m[7]) / w;

    if (!std::isfinite(x) || !std::isfinite(y))
        return false;
    if (screenW <= 1 || screenH <= 1)
        return false;

    const float fw = static_cast<float>(screenW);
    const float fh = static_cast<float>(screenH);
    if (out != nullptr)
    {
        out->x = fw * x * kScreenHalf + fw * kScreenHalf;
        out->y = fh * kScreenHalf - fh * y * kScreenHalf;
    }
    return true;
}

// 0x180021be0. Clips the segment against w >= kClipNearW, then projects both
// ends. The image returns false if either end still fails to project.
inline bool ClipLineToScreen(const Vector& a, const Vector& b, const ViewMatrix& view,
                             int screenW, int screenH, Vec2* outA, Vec2* outB)
{
    float wa = a.y * view.m[13] + a.x * view.m[12] + a.z * view.m[14] + view.m[15];
    float wb = b.y * view.m[13] + b.x * view.m[12] + b.z * view.m[14] + view.m[15];
    if (!std::isfinite(wa) || !std::isfinite(wb))
        return false;

    Vector pa = a;
    Vector pb = b;

    if (wa < kClipNearW)
    {
        if (wb < kClipNearW)
            return false;
        const float dw = std::fabs(wb - wa);
        if (dw < kClipEpsilon)
            return false;
        const float t = (kClipNearW - wa) / (wb - wa);
        pa = a + (b - a) * t;
    }
    else if (wb < kClipNearW)
    {
        const float dw = std::fabs(wa - wb);
        if (dw < kClipEpsilon)
            return false;
        const float t = (kClipNearW - wb) / (wa - wb);
        pb = b + (a - b) * t;
    }

    Vec2 sa, sb;
    if (!WorldToScreen(pa, view, screenW, screenH, &sa))
        return false;
    if (!WorldToScreen(pb, view, screenW, screenH, &sb))
        return false;
    if (outA != nullptr)
        *outA = sa;
    if (outB != nullptr)
        *outB = sb;
    return true;
}

// Screen rectangle of an entity's world bounds. Every corner is projected; the
// result is the axis-aligned hull. Corners behind the camera are dropped, and a
// box with fewer than two visible corners yields false.
//
// This is the consumer that turns the element family's 2D anchors into a real
// screen rect; the corner set is the standard eight, since the corpus does not
// contain the bounds call itself (open, see docs).
inline bool ProjectBoundsRect(const Vector& mins, const Vector& maxs, const ViewMatrix& view,
                              int screenW, int screenH, Rect* out)
{
    const float xs[2] = { mins.x, maxs.x };
    const float ys[2] = { mins.y, maxs.y };
    const float zs[2] = { mins.z, maxs.z };

    float minX = 0.f, minY = 0.f, maxX = 0.f, maxY = 0.f;
    int visible = 0;

    for (int ix = 0; ix < 2; ++ix)
    {
        for (int iy = 0; iy < 2; ++iy)
        {
            for (int iz = 0; iz < 2; ++iz)
            {
                Vec2 screen;
                if (!WorldToScreen(Vector(xs[ix], ys[iy], zs[iz]), view, screenW, screenH, &screen))
                    continue;
                if (visible == 0)
                {
                    minX = maxX = screen.x;
                    minY = maxY = screen.y;
                }
                else
                {
                    if (screen.x < minX) minX = screen.x;
                    if (screen.x > maxX) maxX = screen.x;
                    if (screen.y < minY) minY = screen.y;
                    if (screen.y > maxY) maxY = screen.y;
                }
                ++visible;
            }
        }
    }

    if (visible < 2)
        return false;

    if (out != nullptr)
        *out = Rect{ minX, minY, maxX - minX, maxY - minY };
    return true;
}

} // namespace visual
} // namespace sf
