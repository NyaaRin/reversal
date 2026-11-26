#pragma once
// One shot, end to end: command number -> seed -> cone -> compensated command,
// through whichever backend owns the weapon.
//
// The branch here is only "which backend owns this base name". The cone itself
// always comes from that backend's own vfunc04 reconstruction in
// `../weapon/backends.h`; nothing in this file samples a cone.

#include <cmath>
#include <cstdint>
#include <cstring>
#include <memory>

#include "../nospread/angle.h"
#include "../nospread/compensation.h"
#include "../seed/seed_chain.h"
#include "../weapon/backend_table.h"
#include "../weapon/backends.h"
#include "../weapon/weapon_backend.h"

namespace sf {
namespace weapon {

struct ShotOutcome
{
    const BackendEntry* backend = nullptr;
    uint32_t commandSeed = 0;
    uint32_t predictionSeed = 0;
    uint32_t spreadSeed = 0;
    nospread::ConeOffset offset;
    float deltaZ = 0.f;
    QAngle aim;
    QAngle command;
    QAngle landed;
    float missPitch = 0.f;
    float missYaw = 0.f;
    bool compensated = false;   // false when the backend reports no correction
    bool valid = false;
};

inline ShotOutcome FireShot(const WeaponProfile& profile, const QAngle& aim, int commandNumber,
                            uint32_t playerFlags = 0)
{
    ShotOutcome out;
    out.aim = aim;
    out.command = aim;
    out.landed = aim;

    out.backend = FindBackend(profile.baseName);
    if (out.backend == nullptr)
        return out;

    // The seed chain, in the order the binary builds it.
    out.commandSeed = seed::CommandSeed(static_cast<uint32_t>(commandNumber));
    out.predictionSeed = seed::PredictionSeed(static_cast<uint32_t>(commandNumber));
    out.spreadSeed = seed::SpreadSeed(commandNumber);

    std::unique_ptr<IWeaponBackend> backend = MakeBackend(out.backend, profile);
    if (!backend)
        return out;

    ShotContext context;
    context.commandNumber = commandNumber;
    context.commandAngles = aim;
    context.seedState = out.spreadSeed;
    context.playerFlags = playerFlags;

    const BackendResult correction = backend->ComputeCorrection(context);
    out.offset = correction.offset;
    out.deltaZ = correction.deltaZ;
    out.valid = true;

    // A backend with no compensation path (0x1800779b0) reports invalid: the
    // shot is unchanged, which is what the binary does.
    if (!correction.valid)
    {
        out.command = aim;
        out.landed = aim;
        return out;
    }

    // Every body reports a deflection; removing it is the caller's job, and the
    // solver iterates because the offset is angular, not additive.
    // The two large-cone bodies (UTSWB's min(radius+0.09) clamp yields ~28 deg,
    // TacRP ~9 deg) need more passes than the default three to converge; the
    // default stays untouched so nospread's own solve is unchanged.
    QAngle command = aim;
    nospread::CompensateCommand(command, correction.offset, 12);

    out.compensated = true;
    out.command = command;
    out.landed = ApplyOffsetToAngles(command, correction.offset);
    out.missPitch = std::fabs(NormalizeAngle(out.landed.pitch - aim.pitch));
    out.missYaw = std::fabs(NormalizeAngle(out.landed.yaw - aim.yaw));
    return out;
}

} // namespace weapon
} // namespace sf
