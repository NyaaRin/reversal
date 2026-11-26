#pragma once
// Weapon-backend interface.
//
// The image contains 22 backend classes under Features::Weapons::Backends.
// Their vtables agree on two slots:
//
//   vfunc00 -> const char*  the base name this backend serves.
//   vfunc04 -> the spread-compensation entry point.
//
// vfunc04's contract was re-checked against all 22 bodies while tracing their
// helper clusters: every body writes three floats through its out pointer. The
// first two are yaw/pitch, normalized through 0x1802d3e00; the third is the z
// component of the direction delta. Most bodies zero it (`param_2[2] = 0.0`),
// ArcCW (`0x180082ed0`) subtracts and writes a real value. None returns absolute
// angles, a boolean or a scale factor, and early-outs write zeros.

#include <cmath>
#include <cstdint>

#include "../nospread/angle.h"
#include "../nospread/compensation.h"

namespace sf {
namespace weapon {

// Values a body reads from its weapon object or from the command. Every field is
// a slot the corpus shows the body reading; defaults keep the generic case sane.
struct WeaponProfile
{
    const char* baseName = "Generic";
    float spread = 0.02f;          // cone / spread accessor
    float inaccuracy = 0.05f;      // second cone term
    int bullets = 1;

    float initialYaw = 0.f;        // ARC9 0x1800880b0 centroid, TFA's first result
    float initialPitch = 0.f;      // ARC9 0x1800880b0 centroid, TFA's second result

    float weaponYaw = 0.f;         // Z-City param_1+0x14, ZS param_1[2]
    float weaponPitch = 0.f;       // Z-City param_1+0x18, ZS param_1+0x14

    float coneScale = 1.f;         // UTSWB param_1+0x34
    float distance = 0.f;          // UTSWB distance falloff input
    float falloffRadius = 0.f;     // UTSWB param_1+0x3c
    bool distanceFalloff = false;  // UTSWB param_1[7] && param_1[8]
    bool ownBody = true;           // UTSWB param_1[6]: false => calls the CW body
    float yawCorrection = 0.f;     // UTSWB param_1+0x10
    float pitchCorrection = 0.f;   // UTSWB param_1+0x84
};

struct ShotContext
{
    int commandNumber = 0;      // CUserCmd::command_number
    QAngle commandAngles;       // CUserCmd::viewangles
    uint32_t seedState = 0;     // per-shot stream state
    uint32_t playerFlags = 0;   // FL_* bits; CW and UTSWB read bit 1
};

struct BackendResult
{
    nospread::ConeOffset offset;   // yaw/pitch deflection in degrees
    float deltaZ = 0.f;            // third out float; only ArcCW writes it
    bool valid = false;
};

class IWeaponBackend
{
public:
    virtual ~IWeaponBackend() = default;

    // vfunc00: the base this backend serves.
    virtual const char* BaseName() const = 0;

    // vfunc04: the cone correction for one shot.
    virtual BackendResult ComputeCorrection(ShotContext& shot) = 0;
};

// Where a bullet fired at `angles` goes once `offset` is applied.
inline QAngle ApplyOffsetToAngles(const QAngle& angles, const nospread::ConeOffset& offset)
{
    Vector forward, right, up;
    AngleVectors(angles, &forward, &right, &up);

    const float yawRad = offset.yaw * kDegToRad;
    const float pitchRad = offset.pitch * kDegToRad;
    const Vector dir = forward * (std::cos(yawRad) * std::cos(pitchRad)) +
                       right * std::sin(yawRad) + up * std::sin(pitchRad);
    return VectorAngles(dir);
}

} // namespace weapon
} // namespace sf
