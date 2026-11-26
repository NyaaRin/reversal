#pragma once
// Penetration loop and damage falloff (Stage 3.4).
//
// Reconstructed from:
//   0x1800ad340  the loop (3642 bytes) — re/dump/decompile/0x1800ad340_FUN_1800ad340.c
//   0x1800ae2d0  decision wrapper + logging (958 bytes)
//   0x1800aced0  refusal reason table (111 bytes)
//   0x1800ad020  max-layer read (106 bytes), clamped to [1,4]
//   0x1800acfc0  damage floor read (82 bytes)
//   0x1800acf70  feature-enabled read (62 bytes)
//
// The model is a distance budget, not a lookup table: each surface a bullet passes
// through subtracts the distance travelled from the remaining damage, and the
// trace result may override the remainder with a penetration modifier clamped to
// [0, 8192]. When the remainder reaches the floor the shot is refused.

#include <cmath>
#include <cstdint>
#include <cstring>

#include "../nospread/angle.h"
#include "trace_filter.h"

namespace sf {
namespace autowall {

// --------------------------------------------------------- refusal reasons
// 0x1800aced0 switches on DAT_1804236b8 over 0..9 and returns these literals.
// The strings are the image's own, in order.
enum class Refusal : int
{
    Ok = 0,
    NoAutowall = 1,
    PenetrationUnavailable = 2,
    NoBudget = 3,
    NoSurface = 4,
    BodyInTheWay = 5,
    WallLimit = 6,
    SurfaceRefused = 7,
    OutOfRange = 8,
    DamageFloor = 9,
};

inline const char* ReasonString(Refusal reason)
{
    switch (reason)
    {
    case Refusal::Ok:                    return "ok";
    case Refusal::NoAutowall:            return "pack has no autowall";
    case Refusal::PenetrationUnavailable:return "pack penetration unavailable";
    case Refusal::NoBudget:              return "no penetration budget";
    case Refusal::NoSurface:             return "no surface between us";
    case Refusal::BodyInTheWay:          return "another body in the way";
    case Refusal::WallLimit:             return "wall limit reached";
    case Refusal::SurfaceRefused:        return "pack refused this surface";
    case Refusal::OutOfRange:            return "out of range";
    case Refusal::DamageFloor:           return "damage floor";
    }
    return "damage floor";   // the switch's default arm
}

// ------------------------------------------------------------- constants
// Resolved from the image with re/tools/consts.js.
inline constexpr float kMaxModifier = 8192.0f;   // 0x18033c69c / 0x1803812a4
inline constexpr int   kHardLayerCap = 4;        // 0x18033c6a0 (int 4)
inline constexpr int   kDefaultLayers = 1;       // 0x1800ad020 default when <= 0
inline constexpr float kClampHalf = 0.5f;        // 0x180380ac0
inline constexpr float kClampOne = 1.0f;         // 0x180380bb0
inline constexpr float kFalloffDivisor = 6.0f;   // 0x180380f40
inline constexpr float kLogWindow = 0.5f;        // 0x180380cb0 (log rate limit, seconds)

// 0x1800ad020: reads the configured layer count and clamps it to [1,4].
inline int ClampLayerCount(int configured)
{
    if (configured <= 0)
        return kDefaultLayers;
    if (configured > kHardLayerCap)
        return kHardLayerCap;
    return configured;
}

// --------------------------------------------------------------- structs
struct TraceResult
{
    bool hit = false;
    bool target = false;        // the trace landed on the intended entity
    Vector end;                 // impact point
    Vector normal;              // surface normal at the impact
    const void* surface = nullptr;
    float thickness = 0.f;      // +0x14 in the trace result
    float modifier = -1.f;      // +0x18; negative means "no modifier"
};

// Callback the loop uses for one ray. The original calls vtable+0x58 on the trace
// interface; the test supplies a synthetic implementation.
using TraceFn = TraceResult (*)(void* context, const Vector& start, const Vector& end,
                                int contentsMask);

struct PenetrationParams
{
    float damage = 0.f;         // weapon damage this shot carries
    float penetration = 0.f;    // penetration budget ("Penetration" Lua value)
    float range = kMaxModifier; // clamp for the modifier, 8192 in the image
    int   maxLayers = kDefaultLayers;
};

struct PenetrationOutcome
{
    bool hit = false;
    Refusal reason = Refusal::NoAutowall;
    int walls = 0;
    float damageLeft = 0.f;
    float allowed = 0.f;
    Vector hitPoint;
    int surface = 0;            // surface index the loop recorded
    char material = '?';
};

// ---------------------------------------------------------------- the loop
// Faithful structure of 0x1800ad340:
//
//   budget = damage
//   for (layer = 0; layer < maxLayers; ++layer) {
//       trace from `cursor` along the shot direction
//       if (!hit)                          -> no surface between us
//       travel = |impact - cursor|
//       if (this is the target)            -> hit
//       if (surface is missing)            -> no surface between us
//       budget -= travel
//       if (budget <= 0)                   -> damage floor
//       if (modifier >= 0)                 -> budget = clamp(modifier, 0, range)
//       exit = thickness (the far side of the wall)
//       budget -= exit
//       walls += 1
//       if (walls >= maxLayers)            -> wall limit reached
//       cursor = impact + direction * exit
//   }
//
// `maxLayers` is clamped to [1,4] by 0x1800ad020; the modifier override is clamped
// to [0, 8192] by the constants above.
inline PenetrationOutcome Penetrate(const Vector& start, const Vector& direction,
                                    const PenetrationParams& params,
                                    TraceFn trace, void* context,
                                    int contentsMask)
{
    PenetrationOutcome out;
    out.reason = Refusal::Ok;

    if (params.damage <= 0.f || params.penetration <= 0.f)
    {
        out.reason = Refusal::NoBudget;
        return out;
    }

    const int maxLayers = ClampLayerCount(params.maxLayers);
    float budget = params.damage;
    Vector cursor = start;

    for (int layer = 0; layer < maxLayers; ++layer)
    {
        const Vector target = cursor + direction * params.range;
        const TraceResult result = trace(context, cursor, target, contentsMask);

        if (!result.hit)
        {
            out.reason = Refusal::NoSurface;
            out.damageLeft = budget;
            return out;
        }

        const Vector delta = result.end - cursor;
        const float travel = std::sqrt(delta.Dot(delta));

        // Direct line to the target ends the loop as a hit before any surface
        // bookkeeping, matching the body's early return.
        if (result.target)
        {
            out.hit = true;
            out.reason = Refusal::Ok;
            out.damageLeft = budget;
            out.allowed = budget;
            out.hitPoint = result.end;
            return out;
        }

        // The loop's surface check: a hit with no surface is refused outright.
        if (result.surface == nullptr)
        {
            out.reason = Refusal::NoSurface;
            out.damageLeft = budget;
            return out;
        }

        // Distance spent before the wall.
        budget -= travel;

        if (result.modifier >= 0.f)
            budget = result.modifier < 0.f ? 0.f
                     : (result.modifier > params.range ? params.range : result.modifier);

        // Distance spent inside the wall.
        if (result.thickness > 0.f)
            budget -= result.thickness;

        out.walls = layer + 1;
        out.damageLeft = budget;
        out.allowed = budget;
        out.hitPoint = result.end;
        out.surface = static_cast<int>(reinterpret_cast<uintptr_t>(result.surface) & 0xff);

        if (budget <= 0.f)
        {
            out.reason = Refusal::DamageFloor;
            return out;
        }

        if (out.walls >= maxLayers)
        {
            out.reason = Refusal::WallLimit;
            out.damageLeft = budget;
            return out;
        }

        // Step through the wall to the far side and continue.
        cursor = result.end + direction * result.thickness;
    }

    out.reason = Refusal::WallLimit;
    return out;
}

// Distance falloff used when a shot has no modifier: the remaining damage after a
// wall is the current damage minus both legs of travel. Exposed separately so the
// self-test can assert monotonicity.
inline float FalloffAfterWall(float damage, float beforeWall, float afterWall)
{
    return (damage - beforeWall) - afterWall;
}

} // namespace autowall
} // namespace sf
