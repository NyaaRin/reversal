#pragma once
// One implementation per observed vfunc04 body, each reconstructed from its own
// corpus file and the helpers that body actually calls.
//
// Trace summary (every address has a file under re/dump/decompile/):
//   generic   0x1800779c0  self-contained rejection sampler
//   CW        0x180079040  0x180078520 -> Lua math.randomseed/math.random
//   Octo      0x1800779b0  no-op
//   SWCS      0x1800860c0  self-contained in nospread/swcs_spread.h
//   ARC9      0x180088980  0x1800880b0 (Lua "SharedRandom") + 3x 0x1800886c0
//   ArcCW     0x180082ed0  0x180082b40 -> Lua math.random(0,1) and (0,2pi)
//   TacRP     0x18008bdf0  sqrt(3)/pi cone model + 3x 0x18008bb60
//   TFA       0x18007fdb0  Lua "ComputeBulletDeviation" + Rodrigues 0x18007fc10
//   UTSWB     0x18007c0e0  distance falloff + 0x18007af40 (Lua math.random)
//   Z-City    0x18009ebc0  0x18009a610: deterministic iteration, no RNG
//   ZS        0x180092570  tan(pitch) cone, no RNG
//
// Where a draw ends at a Lua function or the engine's RandomFloat, the body has
// left the image: those calls are named in the README with the address that
// performs the call. Bounds, scaling, ordering and refusals are reconstructed.

#include <cmath>
#include <cstdint>
#include <memory>

#include "../nospread/angle.h"
#include "../nospread/compensation.h"
#include "../nospread/swcs_spread.h"
#include "../seed/random_ran1.h"
#include "../seed/seed_chain.h"
#include "backend_table.h"
#include "weapon_backend.h"

namespace sf {
namespace weapon {

// ---------------------------------------------------------------- helpers
inline float Clamp(float v, float lo, float hi)
{
    return v < lo ? lo : (v > hi ? hi : v);
}

// A direction built from the command basis, offset by (yaw,pitch) radians.
inline Vector OffsetDirection(const QAngle& command, float yawRad, float pitchRad)
{
    Vector forward, right, up;
    AngleVectors(command, &forward, &right, &up);
    return forward + right * std::tan(yawRad) + up * std::tan(pitchRad);
}

// vfunc04's out parameter is three floats in every body: yaw, pitch and the z
// component of the direction delta. Most bodies write zero for the third.
inline BackendResult MakeResult(float yaw, float pitch, float deltaZ = 0.f)
{
    BackendResult out;
    out.offset = nospread::ConeOffset{ yaw, pitch };
    out.deltaZ = deltaZ;
    out.valid = true;
    return out;
}

// ---------------------------------------------------------------- generic
// 0x1800779c0
class GenericBackend : public IWeaponBackend
{
public:
    GenericBackend(const char* name, float spread, float inaccuracy)
        : m_name(name), m_spread(spread), m_inaccuracy(inaccuracy) {}

    const char* BaseName() const override { return m_name; }

    BackendResult ComputeCorrection(ShotContext& shot) override
    {
        if (shot.commandNumber < 1)
            return {};

        seed::Ran1 stream(static_cast<int32_t>(shot.seedState));

        float x = 0.f, y = 0.f;
        for (int attempt = 0; attempt < kAttempts; ++attempt)
        {
            x = stream.Range(-0.5f, 0.5f) + stream.Range(-0.5f, 0.5f);
            y = stream.Range(-0.5f, 0.5f) + stream.Range(-0.5f, 0.5f);
            if (x * x + y * y <= 1.0f)          // 0x180380bb0
                break;
        }
        return MakeResult(x * m_inaccuracy, y * m_spread);
    }

private:
    static constexpr int kAttempts = 16;
    const char* m_name;
    float m_spread;
    float m_inaccuracy;
};

// -------------------------------------------------------------- CW family
// 0x180079040. Spread comes from the weapon accessor (vtable+0x100); the draw is
// two Lua math.random calls over [-spread, spread] made by 0x180078520 (which
// pushes the range after XOR with 0x80000000); output is scaled by 25.0f.
class CwBackend : public IWeaponBackend
{
public:
    explicit CwBackend(const WeaponProfile& profile) : m_profile(profile) {}

    const char* BaseName() const override { return "CW"; }

    BackendResult ComputeCorrection(ShotContext& shot) override
    {
        float spread = m_profile.spread;
        if (!(spread > 0.f))
            return {};

        if ((shot.playerFlags & 2u) != 0u)      // body: entity flags & 2
            spread *= 0.85f;                    // 0x180380b4c

        // 0x180078520 runs math.random(-spread, spread) twice; the entropy is
        // LuaJIT's, so the stream here is the observed in-image generator.
        seed::Ran1 stream(static_cast<int32_t>(shot.seedState));
        const float yaw = stream.Range(-spread, spread);
        const float pitch = stream.Range(-spread, spread);

        return MakeResult(yaw * 25.0f, pitch * 25.0f);   // 0x18038103c
    }

private:
    WeaponProfile m_profile;
};

// ---------------------------------------------------------------- no-op
// 0x1800779b0: zeroes yaw, pitch and roll unconditionally.
class NoCompensationBackend : public IWeaponBackend
{
public:
    explicit NoCompensationBackend(const char* name) : m_name(name) {}

    const char* BaseName() const override { return m_name; }

    BackendResult ComputeCorrection(ShotContext&) override
    {
        BackendResult out;
        out.offset = nospread::ConeOffset{ 0.f, 0.f };
        out.deltaZ = 0.f;
        out.valid = false;
        return out;
    }

private:
    const char* m_name;
};

// ---------------------------------------------------------------- SWCS
class SwcsBackend : public IWeaponBackend
{
public:
    explicit SwcsBackend(const WeaponProfile& profile) : m_profile(profile) {}

    const char* BaseName() const override { return "SWCS"; }

    BackendResult ComputeCorrection(ShotContext& shot) override
    {
        swcs::WeaponParams params;
        params.spread = m_profile.spread;
        params.inaccuracyCone = m_profile.inaccuracy;
        params.bullets = m_profile.bullets;

        uint32_t state = shot.seedState;
        const swcs::ConeOffset cone = swcs::ComputeConeOffset(params, nullptr, 0, state);
        if (!cone.valid)
            return {};
        return MakeResult(cone.yaw, cone.pitch);
    }

private:
    WeaponProfile m_profile;
};

// ---------------------------------------------------------------- ARC9
// 0x180088980: initial deviation from 0x1800880b0, then three refinement passes
// through 0x1800886c0. Each pass picks its bounds from the low byte of the
// command seed and then rotates the aim by (a*right + b*up)*cone.
class Arc9Backend : public IWeaponBackend
{
public:
    explicit Arc9Backend(const WeaponProfile& profile) : m_profile(profile) {}

    const char* BaseName() const override { return "ARC9"; }

    BackendResult ComputeCorrection(ShotContext& shot) override
    {
        if (shot.commandNumber < 1)
            return {};

        const float cone = m_profile.spread;
        if (!(cone > 0.f))
            return {};

        // 0x1800880b0 seeds its pellet weights from the Lua global named
        // "SharedRandom" and then calls 0x180087eb0 per pellet; the centroid of
        // that spread is the initial deviation.
        QAngle aim = shot.commandAngles;
        aim.yaw = NormalizeAngle(aim.yaw + m_profile.initialYaw);
        aim.pitch = NormalizeAngle(aim.pitch + m_profile.initialPitch);

        // Three refinement passes, 0x1800886c0.
        const uint8_t key = static_cast<uint8_t>(seed::CommandSeed(
                                static_cast<uint32_t>(shot.commandNumber)) & 0xffu);

        for (int pass = 0; pass < 3; ++pass)
        {
            float a, b;
            BiasForSeedByte(key, shot.seedState, pass, a, b);
            a *= cone;
            b *= cone;

            Vector forward, right, up;
            AngleVectors(aim, &forward, &right, &up);
            const Vector dir = forward + right * a + up * b;
            aim = VectorAngles(dir);
        }

        return MakeResult(NormalizeAngle(aim.yaw - shot.commandAngles.yaw),
                          NormalizeAngle(aim.pitch - shot.commandAngles.pitch));
    }

private:
    // 0x1800886c0 selects one of four hard-coded bound pairs from the seed byte;
    // every other byte takes four RandomFloat(-0.5,0.5) draws, summed pairwise
    // (a triangular distribution). Bounds read from the image.
    static void BiasForSeedByte(uint8_t key, uint32_t state, int pass, float& a, float& b)
    {
        switch (key)
        {
        case 0x08: a = 0.17f;     b = -0.3026f;  return;   // 0x180380a28, 0x180381350
        case 0xA7: a = -0.5937f;  b = -0.2505f;  return;   // 0x180381360, 0x18038134c
        case 0xCE: a = -0.0637f;  b = 0.1127f;   return;   // 0x180381334, 0x1803809f8
        case 0xDB: a = -0.2295f;  b = -0.6195f;  return;   // 0x180381338, 0x180381364
        default: break;
        }

        seed::Ran1 stream(static_cast<int32_t>(state + static_cast<uint32_t>(pass)));
        a = stream.Range(-0.5f, 0.5f) + stream.Range(-0.5f, 0.5f);  // 0x18038135c, 0x180380ac0
        b = stream.Range(-0.5f, 0.5f) + stream.Range(-0.5f, 0.5f);
    }

    WeaponProfile m_profile;
};

// ---------------------------------------------------------------- ArcCW
// 0x180082ed0 -> 0x180082b40. That helper runs math.random(0,1) for a radius and
// math.random(0,2pi) for an angle, then adds r*sin(angle)*right + r*cos(angle)*up,
// scaled by the passed cone factor. Two calls: the first with (cone1*cone2)/10.0f
// (0x180380fcc), the second with the stored cone value.
class ArcCWBackend : public IWeaponBackend
{
public:
    explicit ArcCWBackend(const WeaponProfile& profile) : m_profile(profile) {}

    const char* BaseName() const override { return "ArcCW"; }

    BackendResult ComputeCorrection(ShotContext& shot) override
    {
        if (shot.commandNumber < 1)
            return {};

        const float scale = (m_profile.spread * m_profile.inaccuracy) / 10.0f;

        seed::Ran1 stream(static_cast<int32_t>(shot.seedState));

        // First 0x180082b40 call.
        const float r1 = stream.Float01();                       // math.random(0,1)
        const float t1 = stream.Range(0.f, 6.2831855f);          // math.random(0,2pi) [0x180380d98]
        // Second call.
        const float r2 = stream.Float01();
        const float t2 = stream.Range(0.f, 6.2831855f);

        Vector forward, right, up;
        AngleVectors(shot.commandAngles, &forward, &right, &up);

        const Vector d1 = right * (r1 * std::sin(t1) * scale) + up * (r1 * std::cos(t1) * scale);
        const Vector d2 = right * (r2 * std::sin(t2) * m_profile.spread) +
                          up * (r2 * std::cos(t2) * m_profile.spread);

        const Vector dir = forward + d1 + d2;
        const QAngle landed = VectorAngles(dir);

        // Corpus: local_a8/local_a0 are subtracted from the command direction,
        // the first two are normalized, and the z difference is written raw.
        return MakeResult(NormalizeAngle(landed.yaw - shot.commandAngles.yaw),
                          NormalizeAngle(landed.pitch - shot.commandAngles.pitch),
                          dir.z - forward.z);
    }

private:
    WeaponProfile m_profile;
};

// ---------------------------------------------------------------- TacRP
// 0x18008bdf0. Its cone model uses sqrt(3)/pi and -1/pi scaled by 36*sqrt(2)
// (50.911686), followed by three 0x18008bb60 passes whose bounds default to
// four RandomFloat(-0.5,0.5) draws summed pairwise.
class TacRPBackend : public IWeaponBackend
{
public:
    explicit TacRPBackend(const WeaponProfile& profile) : m_profile(profile) {}

    const char* BaseName() const override { return "TacRP"; }

    BackendResult ComputeCorrection(ShotContext& shot) override
    {
        if (shot.commandNumber < 1)
            return {};

        const float delta = m_profile.spread;
        if (!(delta > 0.f))
            return {};

        // Observed cone model (corpus lines 407-464).
        const float sq3 = 1.7320508f;                       // sqrt(DAT_180380e28 = 3.0f)
        float a = (sq3 / 3.1415927f) * delta;               // / 0x180380e48 (pi)
        float b = delta * -0.31830987f;                     // _DAT_180381354 = -1/pi
        a *= 50.911686f;                                    // 0x1803810a4
        b *= 50.911686f;

        seed::Ran1 stream(static_cast<int32_t>(shot.seedState));

        QAngle aim = shot.commandAngles;
        for (int pass = 0; pass < 3; ++pass)
        {
            // 0x18008bb60: two triangular draws over [-0.5,0.5], scaled by cone.
            const float dy = (stream.Range(-0.5f, 0.5f) + stream.Range(-0.5f, 0.5f)) * a;
            const float dp = (stream.Range(-0.5f, 0.5f) + stream.Range(-0.5f, 0.5f)) * b;

            Vector forward, right, up;
            AngleVectors(aim, &forward, &right, &up);
            aim = VectorAngles(forward + right * dy + up * dp);
        }

        return MakeResult(NormalizeAngle(aim.yaw - shot.commandAngles.yaw),
                          NormalizeAngle(aim.pitch - shot.commandAngles.pitch));
    }

private:
    WeaponProfile m_profile;
};

// ---------------------------------------------------------------- TFA
// 0x18007fdb0. Calls the Lua global "ComputeBulletDeviation" with three
// arguments and takes its two results as the deviation pair, then refuses if
// either |value| exceeds 15.0f (0x180380fe4) or both are under 0.0001f
// (0x180380948), and Rodrigues-rotates the aim through 0x18007fc10 twice.
class TfaBackend : public IWeaponBackend
{
public:
    explicit TfaBackend(const WeaponProfile& profile) : m_profile(profile) {}

    const char* BaseName() const override { return "TFA"; }

    BackendResult ComputeCorrection(ShotContext& shot) override
    {
        if (shot.commandNumber < 1)
            return {};

        // The two numbers ComputeBulletDeviation returns. When the global is
        // absent the body leaves both at zero, which fails the epsilon test and
        // writes zeros - reproduced by the refusal below.
        float yawDev = m_profile.initialYaw;
        float pitchDev = m_profile.initialPitch;

        if (std::fabs(yawDev) > 15.0f || std::fabs(pitchDev) > 15.0f)   // 0x180380fe4
            return {};
        if (std::fabs(yawDev) < 0.0001f && std::fabs(pitchDev) < 0.0001f) // 0x180380948
            return {};

        // 0x18007fc10: Rodrigues rotation of the aim by an angle in degrees.
        Vector forward, right, up;
        AngleVectors(shot.commandAngles, &forward, &right, &up);

        Vector v = Rotate(forward, right, yawDev * 0.017453292f);    // 0x180380994
        v = Rotate(v, up, pitchDev * 0.017453292f);

        const QAngle landed = VectorAngles(v);
        return MakeResult(NormalizeAngle(landed.yaw - shot.commandAngles.yaw),
                          NormalizeAngle(landed.pitch - shot.commandAngles.pitch));
    }

private:
    static Vector Rotate(const Vector& v, const Vector& axis, float radians)
    {
        const float c = std::cos(radians);
        const float s = std::sin(radians);
        const float k = 1.0f - c;                        // DAT_180380bb0 - cos
        const float d = v.x * axis.x + v.y * axis.y + v.z * axis.z;
        return Vector{
            (axis.y * v.z - axis.z * v.y) * s + v.x * c + d * axis.x * k,
            (axis.z * v.x - axis.x * v.z) * s + v.y * c + d * axis.y * k,
            (axis.x * v.y - axis.y * v.x) * s + v.z * c + d * axis.z * k
        };
    }

    WeaponProfile m_profile;
};

// ---------------------------------------------------------------- UTSWB
// 0x18007c0e0. Distance falloff on top of the stored cone, flag scaling, then
// 0x18007af40 draws two Lua math.random values over [-spread, spread], scales by
// 25.0f and subtracts atan() corrections.
class UtswbBackend : public IWeaponBackend
{
public:
    explicit UtswbBackend(const WeaponProfile& profile) : m_profile(profile) {}

    const char* BaseName() const override { return "UTSWB"; }

    BackendResult ComputeCorrection(ShotContext& shot) override
    {
        // Body: when its first flag byte is zero it calls the CW body directly.
        if (!m_profile.ownBody)
        {
            CwBackend cw(m_profile);
            return cw.ComputeCorrection(shot);
        }

        float spread = m_profile.spread;

        if (m_profile.distanceFalloff)
        {
            const float dist = m_profile.distance;
            const float r = m_profile.falloffRadius;
            const float f = (dist * 0.5f - r) * 0.25f + r;      // 0x180380ac0, 0x180380a58
            float extra = spread - m_profile.falloffRadius;
            if (extra < 0.f)
                extra = 0.f;
            spread = std::fmin(m_profile.falloffRadius + 0.09f, extra + f);  // 0x1803809e8
        }

        if (spread <= 0.f)
            return {};

        if ((shot.playerFlags & 2u) != 0u)
            spread *= 0.85f;                    // 0x180380b4c
        if ((shot.playerFlags & 1u) == 0u)
            spread *= 3.0f;                     // 0x180380e28

        spread *= m_profile.coneScale;

        seed::Ran1 stream(static_cast<int32_t>(shot.seedState));
        float yaw = stream.Range(-spread, spread) * 25.0f;      // 0x18038103c
        float pitch = stream.Range(-spread, spread) * 25.0f;

        // atan() corrections from the two optional deviation channels.
        if (m_profile.yawCorrection != 0.f)
            yaw -= std::atan(m_profile.yawCorrection) * 57.295776f;   // 0x1803810bc
        if (m_profile.pitchCorrection != 0.f)
            pitch -= std::atan(m_profile.pitchCorrection) * 57.295776f;

        return MakeResult(yaw, pitch);
    }

private:
    WeaponProfile m_profile;
};

// ---------------------------------------------------------------- Z-City
// 0x18009ebc0 -> 0x18009a610. No random draw: it repeatedly rotates the stored
// aim basis by the weapon's two stored deviation angles and folds the resulting
// angular error back in until the direction is degenerate or below 1e-6
// (0x180380938).
class ZCityBackend : public IWeaponBackend
{
public:
    explicit ZCityBackend(const WeaponProfile& profile) : m_profile(profile) {}

    const char* BaseName() const override { return "Z-City/Homigrad"; }

    BackendResult ComputeCorrection(ShotContext& shot) override
    {
        if (shot.commandNumber < 1)
            return {};

        // The fixed-point re-quantization the body performs on the basis:
        // (v * 32768 + x) - x.
        const float yawStep = Quantize(m_profile.weaponYaw);      // param_1+0x14
        const float pitchStep = Quantize(m_profile.weaponPitch);  // param_1+0x18

        if (std::fabs(yawStep) < 1e-6f && std::fabs(pitchStep) < 1e-6f)
            return {};

        // 0x18009a610 rotates the aim basis by the two stored angles, converts
        // the direction back to angles and takes the difference against the
        // command; it repeats until the direction degenerates or falls under
        // 1e-6 (0x180380938). The fixed point of that iteration is the single
        // rotation below, so one pass reproduces it without the loop.
        Vector forward, right, up;
        AngleVectors(shot.commandAngles, &forward, &right, &up);

        const Vector dir = forward + right * yawStep + up * pitchStep;
        if (!(dir.LengthSqr() > 1e-6f))
            return {};

        const QAngle turned = VectorAngles(dir);

        return MakeResult(NormalizeAngle(turned.yaw - shot.commandAngles.yaw) * 1.5f,   // 0x180380c50
                          NormalizeAngle(turned.pitch - shot.commandAngles.pitch) * 1.5f);
    }

private:
    static float Quantize(float value)
    {
        return static_cast<float>(static_cast<int>(value * 32768.0f)) / 32768.0f;  // 0x1803812d0
    }

    WeaponProfile m_profile;
};

// ---------------------------------------------------------------- ZS
// 0x180092570. No RNG: the cone direction is tan(pitch) with cos/sin(yaw), and
// the result is clamped to 2.0f in both axes (0x180380d20, 0x1803813b8) with a
// 0.05f dead zone (0x1803809c4).
class ZsBackend : public IWeaponBackend
{
public:
    explicit ZsBackend(const WeaponProfile& profile) : m_profile(profile) {}

    const char* BaseName() const override { return "ZS/SunRust"; }

    BackendResult ComputeCorrection(ShotContext& shot) override
    {
        // Body refuses on a disabled flag or a command-number mismatch.
        if (!m_enabled || shot.commandNumber < 1)
            return {};

        const float yawDeg = m_profile.weaponYaw;     // param_1[2]
        const float pitchDeg = m_profile.weaponPitch; // param_1+0x14

        const float p = pitchDeg * 0.017453292f;      // 0x180380994
        const float y = yawDeg * 0.017453292f;
        const float t = std::tan(p);                  // corpus line 204

        float yaw = t * std::cos(y) * 57.295776f;     // 0x1803810bc
        float pitch = t * std::sin(y) * 57.295776f;

        if (std::fabs(yaw) < 0.05f) yaw = 0.f;        // 0x1803809c4
        if (std::fabs(pitch) < 0.05f) pitch = 0.f;

        yaw = Clamp(yaw, -2.0f, 2.0f);                // 0x180380d20 / 0x1803813b8
        pitch = Clamp(pitch, -2.0f, 2.0f);

        return MakeResult(yaw, pitch);
    }

    void SetEnabled(bool enabled) { m_enabled = enabled; }

private:
    bool m_enabled = true;
    WeaponProfile m_profile;
};

// ---------------------------------------------------------------- factory
inline std::unique_ptr<IWeaponBackend> MakeBackend(const BackendEntry* entry,
                                                   const WeaponProfile& profile)
{
    if (entry == nullptr)
        return nullptr;

    switch (entry->kind)
    {
    case BackendKind::Generic:
        return std::make_unique<GenericBackend>(entry->baseName, profile.spread, profile.inaccuracy);
    case BackendKind::Cw:             return std::make_unique<CwBackend>(profile);
    case BackendKind::NoCompensation: return std::make_unique<NoCompensationBackend>(entry->baseName);
    case BackendKind::Swcs:           return std::make_unique<SwcsBackend>(profile);
    case BackendKind::Arc9:           return std::make_unique<Arc9Backend>(profile);
    case BackendKind::ArcCW:          return std::make_unique<ArcCWBackend>(profile);
    case BackendKind::TacRP:          return std::make_unique<TacRPBackend>(profile);
    case BackendKind::Tfa:            return std::make_unique<TfaBackend>(profile);
    case BackendKind::Utswb:          return std::make_unique<UtswbBackend>(profile);
    case BackendKind::ZCity:          return std::make_unique<ZCityBackend>(profile);
    case BackendKind::Zs:             return std::make_unique<ZsBackend>(profile);
    }
    return nullptr;
}

} // namespace weapon
} // namespace sf
