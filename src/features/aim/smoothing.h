#pragma once
// Aim-step smoothing (Stage 3.5).
//
// Reconstructed from 0x1800d0b60 (1478 bytes) —
//   re/dump/decompile/0x1800d0b60_FUN_1800d0b60.c
// and its call site in 0x1800d1750, which passes the user's smoothing value and
// the frame delta and then writes the returned fraction into the command angles.
//
// The model is a per-frame fraction of the remaining angular error, with a
// persistent accumulator so slow smoothing still converges, an exponential
// easing term when the error is far from the target, and an exact snap once the
// error is inside the snap distance.

#include <cmath>

#include "../nospread/angle.h"

namespace sf {
namespace aim {

// ---------------------------------------------------------------- constants
inline constexpr float kMinStep        = 0.0005f;  // 0x180380958
inline constexpr float kMaxStep        = 0.05f;    // 0x1803809c4 / 0x18033c670
inline constexpr float kSnapDefault    = 0.02f;    // 0x1803809a0
inline constexpr float kSnapCap        = 45.f;     // 0x180381094
inline constexpr float kSmoothDivisor  = 66.f;     // 0x1803810d4
inline constexpr float kSmoothFloor    = 0.0099999f; // 0x180380980
inline constexpr float kMinK           = 0.000099f; // 0x180380948
inline constexpr float kBoostThreshold = 1.25f;    // 0x180380c00
inline constexpr float kEaseGamma      = 0.449999f; // 0x180380ab0
inline constexpr float kCurveScale     = 0.1f;     // 0x1803809ec
inline constexpr float kCurveMax       = 0.9f;     // 0x180380b68
inline constexpr float kSecondsPerUnit = 1.0e9f;   // 0x1803812fc
inline constexpr float kWrapLimit      = 180.f;     // 0x180381188

// 0x1800d0b60 picks the step from the frame delta with two bounds. The middle
// branch reads a slot the optimiser reused, so the exact expression is not
// visible; clamping the delta to [0.0005, 0.05] is the reading that matches both
// bounds and the surrounding table. Marked assumption.
inline float FrameStep(float deltaSeconds)
{
    if (!(deltaSeconds >= kMinStep))
        return kMinStep;
    if (deltaSeconds > kMaxStep)
        return kMaxStep;
    return deltaSeconds;
}

// 0x1800d0b60: k = max(smooth, 0.01) / 66 for the yaw axis. The curve block can
// then shrink it to at most 0.9 of itself when the three curve keys are present.
inline float SmoothFactor(float smooth)
{
    float used = smooth;
    if (used < kSmoothFloor)
        used = kSmoothFloor;
    return used / kSmoothDivisor;
}

struct Smoother
{
    float accumulator = 0.f;       // DAT_180425abc
    float lastFraction = 1.f;      // DAT_1804258a0
    bool  hasHistory = false;

    // Returns the fraction of the remaining error to apply this frame.
    // current/desired are in degrees; the function also advances `current` when
    // Apply is used, but Step is exposed separately for testing.
    float Step(const QAngle& current, const QAngle& desired, float smooth,
               float deltaSeconds, float snapDistance, bool resetAccumulator)
    {
        const float step = FrameStep(deltaSeconds);
        if (resetAccumulator)
            accumulator = 0.f;
        accumulator += step;

        const float dYaw = NormalizeAngle(desired.yaw - current.yaw);
        const float dPitch = NormalizeAngle(desired.pitch - current.pitch);
        const float error = std::sqrt(dYaw * dYaw + dPitch * dPitch);

        float snap = snapDistance;
        if (!(snap >= kSnapDefault))
            snap = kSnapDefault;
        if (snap > kSnapCap)
            snap = kSnapCap;

        if (error <= snap)
        {
            lastFraction = 1.f;
            accumulator = 0.f;
            return 1.f;
        }

        float k = SmoothFactor(smooth);

        // Curve: scale * 0.1 * accumulator, clamped into [min, max] where the
        // three per-axis keys are configured. Without them the factor is 1.
        const float curve = std::fmin(std::fmax(kCurveScale * accumulator, 0.f), kCurveMax);
        if (curve > 0.f)
            k = (1.f - curve) * k;

        float ratio = error / std::fmax(k, kSnapDefault);
        if (lastFraction < ratio)
        {
            float gamma = k * kEaseGamma;
            if (gamma < kSnapDefault)
                gamma = kSnapDefault;
            const float eased = std::exp(-step / gamma);
            ratio = (1.f - eased) * (ratio - lastFraction) + lastFraction;
        }

        float applied = ratio * step;
        if (applied > error)
            applied = error;

        float fraction = error > 0.f ? applied / error : 1.f;
        if (fraction > 1.f)
            fraction = 1.f;
        if (fraction < 0.f)
            fraction = 0.f;

        lastFraction = ratio;
        return fraction;
    }

    // Applies one frame and returns the new angles, wrapping pitch like the
    // original (0x1800d0b60 wraps into (-180, 180] with the 360 constant at
    // 0x18038120c).
    QAngle Apply(const QAngle& current, const QAngle& desired, float smooth,
                 float deltaSeconds, float snapDistance, bool resetAccumulator)
    {
        const float fraction = Step(current, desired, smooth, deltaSeconds, snapDistance,
                                    resetAccumulator);
        QAngle next;
        next.yaw = current.yaw + fraction * NormalizeAngle(desired.yaw - current.yaw);
        next.pitch = current.pitch + fraction * NormalizeAngle(desired.pitch - current.pitch);
        next.roll = current.roll;

        if (next.pitch > kWrapLimit)
            next.pitch -= 360.f;
        else if (next.pitch < -kWrapLimit)
            next.pitch += 360.f;

        next.yaw = NormalizeAngle(next.yaw);
        return next;
    }
};

} // namespace aim
} // namespace sf
