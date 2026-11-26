#pragma once
// Command-angle compensation.
//
// Reconstructed from Features_Weapons_Backends_SWCSWeaponBackend_vfunc04
// (0x1800860c0), which is the backend's spread-compensation entry point, and
// from the seed helper at 0x180082310.
//
// What the original does, in order:
//
//   1. Ask the weapon backend for the shot's cone offset (yaw, pitch) in degrees.
//   2. Convert the command angles to a forward direction.
//   3. Rotate that direction by the cone offset expressed in the command's own
//      basis (right * yaw + up * pitch + forward).
//   4. Convert back to angles and measure how far the shot moved.
//   5. Fold that delta back into the command and repeat, three times.
//
// The iteration exists because a fixed angular offset applied once does not
// land the bullet on the crosshair when the cone is large: rotating a direction
// by an angle is not the same as adding that angle to pitch/yaw. Three passes
// converge closely enough that the residual is below the engine's rounding.
//
// The correction is applied to the command that is about to be sent, so the
// server rolls the same cone from the same seed and the bullet follows the
// compensated direction.

#include "angle.h"

namespace sf {
namespace nospread {

struct ConeOffset
{
    float yaw = 0.f;
    float pitch = 0.f;
};

struct CompensationResult
{
    QAngle command;          // angles to write back into the user command
    float  residualPitch = 0.f;
    float  residualYaw = 0.f;
    int    iterations = 0;
    bool   valid = false;
};

// Applies one cone offset to a command's view angles.
//
// maxIterations matches the original's bound (it stops after three passes, and
// also stops early when the measured delta is exactly zero, which happens when
// the offset is already aligned with the view).
inline CompensationResult Compensate(const QAngle& command, const ConeOffset& offset,
                                     int maxIterations = 3)
{
    CompensationResult result;
    result.command = command;

    if (offset.yaw == 0.f && offset.pitch == 0.f)
    {
        result.valid = true;
        return result;
    }

    QAngle accumulated = command;

    // The offset is an angle in degrees, so it becomes a rotation of the forward
    // direction, not a translation of it: a unit right vector scaled by 0.9 is a
    // 42-degree turn, while 0.9 degrees is the intended cone.
    const float yawRad = offset.yaw * kDegToRad;
    const float pitchRad = offset.pitch * kDegToRad;
    const float cosYaw = std::cos(yawRad);
    const float sinYaw = std::sin(yawRad);
    const float cosPitch = std::cos(pitchRad);
    const float sinPitch = std::sin(pitchRad);

    for (int iteration = 0; iteration < maxIterations; ++iteration)
    {
        Vector forward, right, up;
        AngleVectors(accumulated, &forward, &right, &up);

        // Yaw turns in the horizontal plane, pitch lifts out of it.
        Vector rotated = forward * (cosYaw * cosPitch) + right * sinYaw + up * sinPitch;
        if (!std::isfinite(rotated.x) || !std::isfinite(rotated.y) || !std::isfinite(rotated.z))
            return result;

        const QAngle shotAngles = VectorAngles(rotated);

        // Error is measured against the view the player is aiming at, not
        // against the command being adjusted: the command is what we are
        // solving for, so closing the gap to itself would never converge.
        const float errorPitch = NormalizeAngle(command.pitch - shotAngles.pitch);
        const float errorYaw = NormalizeAngle(command.yaw - shotAngles.yaw);

        result.residualPitch = errorPitch;
        result.residualYaw = errorYaw;
        result.iterations = iteration + 1;

        if (errorPitch == 0.f && errorYaw == 0.f)
            break;

        accumulated.pitch = NormalizeAngle(accumulated.pitch + errorPitch);
        accumulated.yaw = NormalizeAngle(accumulated.yaw + errorYaw);

        if (!std::isfinite(accumulated.pitch) || !std::isfinite(accumulated.yaw))
            return result;
    }

    result.command = NormalizeAngles(accumulated);
    result.valid = true;
    return result;
}

// Writes the compensated angles back into the outgoing command. The offset is
// the deflection the shot will receive, so it is passed through unchanged; the
// loop removes its effect instead of applying it twice.
inline CompensationResult CompensateCommand(QAngle& command, const ConeOffset& offset,
                                            int maxIterations = 3)
{
    CompensationResult result = Compensate(command, offset, maxIterations);
    if (result.valid)
        command = result.command;
    return result;
}

} // namespace nospread
} // namespace sf
