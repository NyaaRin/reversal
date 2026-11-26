#pragma once
// SWCS weapon spread model, reconstructed from Features_Weapons_Backends_
// SWCSWeaponBackend_vfunc04 (0x1800860c0) and its cone solver (0x1800859c0).
//
// The model is the CS:GO one: inaccuracy and spread are two independent random
// draws from a seeded stream, each shaped into a cone offset by a random angle,
// then summed. Inaccuracy carries the stance/speed/movement penalties; spread is
// the weapon's base cone and, for shotguns, a per-pellet pattern.
//
// The client and the server must roll the same numbers for compensation to be
// valid, which is why the seed for a command is derived from the command number
// itself and folded through a hash.

#include <cstdint>
#include <cstdio>
#include <cstring>

#include "angle.h"
#include "md5.h"

namespace sf {
namespace swcs {

// ---------------------------------------------------------------- constants
//
// Recovered from the data section (values verified against the image):
//   0x180380d00 = 0.99999988f   upper clamp for a normalized draw
//   0x180380d08 = 1.0
//   0x180380a08 = 1.0 / 2^31    converts a 31-bit draw to [0,1)
//   0x180380d48 = 3.0           speed threshold for the "only up" penalty
//   0x1803813b0 = -1.0          speed step
//   0x180380d90 = 2*pi          random cone angle range
//   0x180380d28 = pi/2          fixed cone angle for the non-random pass
inline constexpr float kOne = 1.0f;
inline constexpr float kDrawScale = 4.656612875e-10f;   // 1 / 2^31
inline constexpr float kUpwardSpeed = 3.0f;
inline constexpr float kTwoPiF = 6.283185307179586f;
inline constexpr float kHalfPiF = 1.5707963267948966f;

// Offset pushed to Lua when the seed has to be forced; the original seeds with
// -1337 / +1337 around the real value (0x1803813e0 / 0x180380ee8).
inline constexpr int kSeedBiasLow = -1337;
inline constexpr int kSeedBiasHigh = 1337;

// --------------------------------------------------------------------- state
//
// Field offsets in the original backend object, kept as names so the
// reconstruction reads like the decompiled control flow instead of pointer
// arithmetic.
struct WeaponParams
{
    float spread = 0.f;          // this+0x0c  base spread cone
    float inaccuracyCone = 0.f;  // this+0x10  inaccuracy cone
    int   bullets = 1;           // this+0x14  pellets per shot
    int   patternCount = 0;      // this+0x18  shotgun pattern entries
    bool  accuracyNoSpread = false;    // this+0x24  weapon_accuracy_nospread
    bool  accuracyOnlyUp = false;      // this+0x25  weapon_accuracy_only_up
    bool  accuracyForceSpread = false; // this+0x23  weapon_accuracy_forcespread
    bool  shotgunPatterns = false;     // this+0x468 weapon_accuracy_shotgun_spread_patterns
    bool  seedShared = false;          // this+0x61  swcs_weapon_sync_seed available
    float playerSpeed = 0.f;           // this+0x10 as used by the penalty block
};

// Per-pellet pattern entries live at this+0x68 + index*0x10 as two doubles
// (angle, spread). The reconstruction exposes them through this view.
struct PelletPattern
{
    double angleRad = 0.0;
    double spread = 0.0;
};

// Valve's RNG stream: 32-bit LCG, 31-bit output. The original seeds a local
// state word with ~(digestByte & maxSeed) and then draws from it twice per shot.
inline uint32_t RandomInt(uint32_t& state)
{
    state = state * 1103515245u + 12345u;
    return (state >> 16) & 0x7fffu;
}

// The original draws full-range integers and normalizes with 1/2^31; this keeps
// the same scale so the [0,1) domain matches bit for bit.
inline float RandomFloat01(uint32_t& state)
{
    state = state * 214013u + 2531011u;
    const uint32_t draw = (state >> 1) & 0x7fffffffu;
    return static_cast<float>(draw) * kDrawScale;
}

// ---------------------------------------------------------------------- seed
//
// The command number is formatted into a decimal string, hashed with MD5, and a
// digest byte is folded into a seed. `maxSeed` is swcs_weapon_max_spread_seed
// (default 0xff) and masks the folded byte.
inline uint32_t SeedForCommand(int commandNumber, uint32_t maxSeed = 0xff)
{
    char text[24];
    std::snprintf(text, sizeof(text), "%d", commandNumber);

    MD5 md5;
    md5.Update(text, std::strlen(text));
    uint8_t digest[16] = {};
    md5.Final(digest);

    // The byte index is 7 in the original (a 64-bit load shifted by 56).
    const uint32_t folded = digest[7];
    return ~(folded & maxSeed);
}

// The early server sweep: a fixed seed (155) is used when the server does not
// share its RNG stream, which is the case for any remote server that does not
// run the same weapon base.
inline constexpr uint32_t kFixedShotSeed = 155;

// ---------------------------------------------------------------- inaccuracy
//
// One shot rolls inaccuracy, then spread. Both are normalized draws; inaccuracy
// is then shaped by the stance and movement rules. The ordering matters: the
// spread angle is drawn from the same stream immediately after.
struct Draws
{
    uint32_t state;
};

// The original's inaccuracy block, in order.
inline float ComputeInaccuracy(const WeaponParams& p, float& randomCache, uint32_t& state)
{
    // First draw.
    float draw = RandomFloat01(state);
    randomCache = draw;
    if (draw > kOne - 1e-7f)
        draw = 0.99999988f;

    float inaccuracy = draw;

    const bool singleBullet = p.bullets == 1;
    if (p.accuracyNoSpread && singleBullet)
    {
        // Square the draw and invert: tightens a full-cone value into a
        // near-zero one, which is the no-spread accuracy setting.
        inaccuracy = 1.0f - inaccuracy * inaccuracy;
    }
    else if (p.accuracyOnlyUp && p.playerSpeed < kUpwardSpeed)
    {
        // Repeated squaring per unit of missing speed, then invert. Only the
        // upward component is penalized while the player is slow.
        float threshold = kUpwardSpeed;
        do
        {
            inaccuracy = inaccuracy * inaccuracy;
            threshold += -1.0f;
        } while (p.playerSpeed <= threshold);
        inaccuracy = 1.0f - inaccuracy;
    }

    if (p.accuracyForceSpread)
        inaccuracy = 1.0f;                 // 0x180380d08

    return inaccuracy;
}

// The second draw becomes the angle the cone is rotated by. When the weapon has
// a shotgun pattern, the angle and radius come from the pattern table instead.
inline void ComputeSpreadAngles(const WeaponParams& p, const PelletPattern* pattern,
                                int pelletIndex, uint32_t& state, float& angleRad, float& cone)
{
    const float draw = RandomFloat01(state);
    cone = draw;

    if (p.shotgunPatterns && p.patternCount >= 2 && pattern != nullptr)
    {
        const int index = pelletIndex % p.patternCount;
        angleRad = static_cast<float>(pattern[index].angleRad);
        cone = static_cast<float>(pattern[index].spread);
    }
    else
    {
        angleRad = draw * kTwoPiF;
    }
}

// The full per-shot cone offset in degrees, as the compensation step consumes
// it: (yawOffset, pitchOffset). This is the value FUN_1800859c0 writes.
struct ConeOffset
{
    float yaw = 0.f;      // horizontal offset in degrees
    float pitch = 0.f;    // vertical offset in degrees
    bool  valid = false;
};

inline ConeOffset ComputeConeOffset(const WeaponParams& p, const PelletPattern* pattern,
                                    int pelletIndex, uint32_t& state)
{
    ConeOffset out;

    float randomCache = 0.f;
    const float inaccuracy = ComputeInaccuracy(p, randomCache, state);

    float randomAngle = 0.f;
    float spreadDraw = 0.f;
    ComputeSpreadAngles(p, pattern, pelletIndex, state, randomAngle, spreadDraw);

    // Two contributors, each with its own angle, summed the way the original
    // sums them: the deterministic spread cone at a fixed angle (pi/2, or the
    // shotgun pattern angle) plus the random inaccuracy cone at the drawn angle.
    const float fixedAngle = (pattern != nullptr && p.shotgunPatterns) ? randomAngle : kHalfPiF;
    const float deterministic = spreadDraw * p.spread;
    const float randomTerm = p.inaccuracyCone * inaccuracy;

    const float yaw = std::cos(fixedAngle) * deterministic + std::cos(randomAngle) * randomTerm;
    const float pitch = std::sin(fixedAngle) * deterministic + std::sin(randomAngle) * randomTerm;

    if (!std::isfinite(yaw) || !std::isfinite(pitch))
        return out;

    out.yaw = yaw;
    out.pitch = pitch;
    out.valid = true;
    return out;
}

} // namespace swcs
} // namespace sf
