#pragma once
// Triggerbot: hit confirmation, hold timing and burst gating (Stage 3.5).
//
// Reconstructed from Features::Triggerbot::TriggerbotFeature::vfunc02 at
// 0x1800e2580 (3336 bytes) —
//   re/dump/decompile/0x1800e2580_Features_Triggerbot_TriggerbotFeature_vfunc02.c
//
// The feature traces from the shoot position to the crosshair point, accepts the
// hit only when the entity passes the same team/dormant/health test as the aimbot,
// then holds fire for a configured number of ticks plus a small random jitter
// before firing. Bursts are capped and separated by a random cooldown.

#include <cmath>
#include <cstdint>
#include <cstdlib>

#include "../nospread/angle.h"
#include "targeting.h"

namespace sf {
namespace aim {

// ---------------------------------------------------------------- constants
inline constexpr float kMsPerTick      = 15.f;     // 0x180380fe4
inline constexpr float kTraceRange     = 8192.f;   // 0x1803812a4
inline constexpr uint32_t kTraceMask   = 0x46004003; // MASK_SHOT used at the call
inline constexpr int   kMaxBurst       = 4;        // rand()%4 + 2 -> [2,5]
inline constexpr int   kMinCooldown    = 4;        // rand()%8 + 4 -> [4,11]
inline constexpr int   kJitterRange    = 2;        // rand()%5 + -2 -> [-2,2]
inline constexpr int   kMinDelayTicks  = 1;        // clamps in the body
inline constexpr int   kDelayJitterLow = 10;       // rand()%20 + 10
inline constexpr int   kDelayJitterSpan= 20;

// Config keys read by 0x1800e2580, in order.
inline constexpr uint64_t kKeyTriggerEnabled   = 0x574fa339fade2366ULL;
inline constexpr uint64_t kKeyTriggerMode      = 0xcef5d8b14b3154d9ULL;
inline constexpr uint64_t kKeyTriggerDelayMs   = 0x324e861f12873f9aULL;
inline constexpr uint64_t kKeyTriggerRandomize = 0x9653fa4f0c4e1755ULL;
inline constexpr uint64_t kKeyTriggerHold      = 0xfbdfb712f0666000ULL;
inline constexpr uint64_t kKeyTriggerIgnoreEnts= 0x8ae1ad0adb54c4f0ULL;

// The feature object's fields, in the order the body uses them.
struct TriggerState
{
    const void* target = nullptr;   // +0x08
    int holdTicks = 0;              // +0x10
    int cooldown = 0;               // +0x14
    int burst = 0;                 // +0x18
    int burstLimit = 0;            // +0x1c
    bool firedThisTick = false;    // +0x20
};

enum class TriggerResult : int
{
    Idle = 0,        // no confirmed target
    Waiting,         // target held, delay not elapsed
    Fired,           // attack should be issued
    Cooldown,        // burst limit reached, waiting out the cooldown
    Disabled,        // configuration is off
    WeaponBlocked,   // weapon cannot fire this tick
};

// The delay in ticks is the configured milliseconds divided by 15 ms/tick with a
// floor of one tick (0x1800e2580: iVar9 = (int)((float)cfg / DAT_180380fe4)).
inline int DelayTicks(int delayMs)
{
    int ticks = static_cast<int>(static_cast<float>(delayMs) / kMsPerTick);
    return ticks < kMinDelayTicks ? kMinDelayTicks : ticks;
}

// Deterministic stand-in for the image's rand() calls. The original uses the CRT
// generator without seeding at these sites, so sequence values are not part of
// the contract — only the ranges are. Marked assumption.
struct TriggerRandom
{
    uint32_t state = 0x9e3779b9u;

    int Next()
    {
        state ^= state << 13;
        state ^= state >> 17;
        state ^= state << 5;
        return static_cast<int>(state & 0x7fffffffu);
    }

    int Range(int count) { return count > 0 ? Next() % count : 0; }
};

struct TriggerConfig
{
    bool  enabled = true;
    bool  randomize = false;    // kKeyTriggerRandomize
    int   delayMs = 0;          // kKeyTriggerDelayMs
    int   mode = 0;             // kKeyTriggerMode: 0 = hold to fire
};

// 0x1800e2580's per-tick decision. `hitConfirmed` is the result of the trace plus
// the team/health/dormant gate; `weaponCanFire` merges the "fires bullets",
// "clip not empty" and "next primary attack elapsed" checks the body performs.
inline TriggerResult OnTick(TriggerState& state, const TriggerConfig& cfg,
                            const void* hitEntity, bool hitConfirmed,
                            bool weaponCanFire, TriggerRandom& random)
{
    state.firedThisTick = false;

    if (!cfg.enabled)
        return TriggerResult::Disabled;

    if (state.cooldown > 0)
    {
        --state.cooldown;
        return TriggerResult::Cooldown;
    }

    if (!hitConfirmed || hitEntity == nullptr)
    {
        state.target = nullptr;
        state.holdTicks = 0;
        state.burst = 0;
        return TriggerResult::Idle;
    }

    if (hitEntity != state.target)
    {
        state.target = hitEntity;
        state.holdTicks = 0;
        state.burst = 0;
        state.burstLimit = random.Range(kMaxBurst) + 2;   // [2,5]
    }

    ++state.holdTicks;

    int jitter = 0;
    if (cfg.randomize)
    {
        // The body refreshes the jitter every 10..30 held ticks and keeps it in
        // DAT_180400a28 as rand()%5 - 2.
        if (state.holdTicks % (kDelayJitterLow + random.Range(kDelayJitterSpan)) == 0)
            jitter = random.Range(5) - kJitterRange;
    }

    const int delay = DelayTicks(cfg.delayMs) + jitter;
    if (state.holdTicks < (delay < kMinDelayTicks ? kMinDelayTicks : delay))
        return TriggerResult::Waiting;

    if (cfg.randomize && state.burst >= state.burstLimit)
    {
        state.cooldown = random.Range(8) + kMinCooldown;
        state.holdTicks = 0;
        state.burstLimit = random.Range(kMaxBurst) + 2;
        return TriggerResult::Cooldown;
    }

    if (!weaponCanFire)
        return TriggerResult::WeaponBlocked;

    ++state.burst;
    state.firedThisTick = true;
    return TriggerResult::Fired;
}

const char* TriggerResultName(TriggerResult result)
{
    switch (result)
    {
    case TriggerResult::Idle:          return "idle";
    case TriggerResult::Waiting:       return "waiting";
    case TriggerResult::Fired:         return "fire";
    case TriggerResult::Cooldown:      return "cooldown";
    case TriggerResult::Disabled:      return "disabled";
    case TriggerResult::WeaponBlocked: return "weapon-blocked";
    }
    return "idle";
}

} // namespace aim
} // namespace sf
