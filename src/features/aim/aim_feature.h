#pragma once
// The three targeting feature classes and their per-tick entry points (Stage 3.5).
//
// Class data comes from re/dump/rtti_classes.tsv and re/dump/vtable_methods.tsv:
//   Features::Aimbot::AimbotFeature            vtable 0x338e00
//     slot 2  0x1800d3460   slot 6  0x1800d3f50   slot 16 0x1800cb010
//   Features::RageAim::RageAimFeature          vtable 0x33ae88
//     slot 2  0x1800d5310                           slot 16 0x1800d64c0
//   Features::Triggerbot::TriggerbotFeature    vtable 0x33d2a8
//     slot 2  0x1800e2580 (the tick; 3336 bytes)
//
// Slot 16 in both aim classes is the teardown path. In Aimbot it walks the 64
// per-player aim records and resets them; in RageAim it restores the config value
// it stashed at enable time and, if it changed it, restores cl_lagcompensation.

#include <algorithm>
#include <cstdint>
#include <vector>

#include "../nospread/angle.h"
#include "smoothing.h"
#include "targeting.h"

namespace sf {
namespace aim {

// --------------------------------------------------------------- the classes
struct AimbotFeature
{
    static constexpr uint64_t kVtableRva = 0x338e00;
    static constexpr uint64_t kVfunc02   = 0x1800d3460;
    static constexpr uint64_t kVfunc06   = 0x1800d3f50;
    static constexpr uint64_t kVfunc16   = 0x1800cb010;   // teardown / reset
    static constexpr int      kPlayerSlots = 64;          // (0x1805580f0-0x1804f6cf0)/0x1850
    static constexpr int      kPlayerStride = 0x1850;     // 0x30a qwords

    // 0x1800cb010: for each of the 64 records, zero a 0x1800 scratch block, run
    // FUN_180202a70 on it and FUN_1800a2ba0 on the record. The reconstruction
    // exposes the loop shape; the two callees are engine restores not in this
    // corpus' aim path and are left to the caller.
    static void ResetPlayerRecords(std::vector<uint8_t>& recordBytes)
    {
        const std::size_t expected = static_cast<std::size_t>(kPlayerSlots) * kPlayerStride;
        if (recordBytes.size() < expected)
            recordBytes.resize(expected, 0);
        std::vector<uint8_t> scratch(0x1800, 0);
        for (int i = 0; i < kPlayerSlots; ++i)
        {
            std::fill(scratch.begin(), scratch.end(), uint8_t(0));
            uint8_t* record = recordBytes.data() + static_cast<std::size_t>(i) * kPlayerStride;
            std::fill(record, record + kPlayerStride, uint8_t(0));
        }
    }
};

struct RageAimFeature
{
    static constexpr uint64_t kVtableRva = 0x33ae88;
    static constexpr uint64_t kVfunc02   = 0x1800d5310;
    static constexpr uint64_t kVfunc16   = 0x1800d64c0;   // teardown / config restore
    static constexpr uint64_t kKeyRestoreConfig = 0x9653fa4f0c4e1755ULL;
    static constexpr int      kPendingSentinel  = -1;      // DAT_1803e7c74

    // 0x1800d64c0: at most one read-modify-write of the stash, then the
    // cl_lagcompensation restore with its exact log line.
    struct TeardownState
    {
        int  stashed = -1;          // DAT_1803e7c74; -1 means nothing to write
        bool lagCompensationChanged = false;  // DAT_1804096bc
    };

    static bool WriteStash(TeardownState& state, bool* outValue)
    {
        if (state.stashed < 0)
            return false;
        if (outValue != nullptr)
            *outValue = state.stashed != 0;
        state.stashed = kPendingSentinel;
        return true;
    }

    // Returns true when the caller must execute "cl_lagcompensation 1".
    static bool RestoreLagCompensation(TeardownState& state)
    {
        if (!state.lagCompensationChanged)
            return false;
        state.lagCompensationChanged = false;
        return true;
    }

    static constexpr const char* kRestoreLog =
        "[EXPLOIT] cl_lagcompensation restored on teardown\n";
};

struct TriggerbotFeature
{
    static constexpr uint64_t kVtableRva = 0x33d2a8;
    static constexpr uint64_t kVfunc02   = 0x1800e2580;
    static constexpr const char* kValidLog =
        "[TB] VALID target: ent=%p idx=%d hp=%d team=%d\n";
    static constexpr const char* kWaitLog = "[TB] WAITING: holdTicks=%d delay=%d\n";
    static constexpr const char* kFireLog = "[TB] FIRE! burst=%d/%d\n";
    static constexpr const char* kRejectLog =
        "[TB] REJECTED: ent=%p badRead=%d badVt=%d idx=%d dormant=%d hp=%d team=%d localTeam=%d\n";
    static constexpr const char* kNoBulletsLog = "[TB] weapon does not fire bullets\n";
    static constexpr const char* kEmptyClipLog = "[TB] auto: empty clip";
};

// ---------------------------------------------------------------- aim cycle
// 0x1800d1750 drives one tick: it collects candidates, lets 0x1800cfb30 pick and
// write angles, applies the smoothing step (0x1800d0b60), clamps the result and
// finally logs through 0x1800d1180. The reconstruction keeps the same order.

struct AimRequest
{
    QAngle view;                 // current command angles
    Vector eye;                  // shoot position
    float  fov = 0.f;            // 0x1800ce2c0, already sanitized
    float  smoothing = 0.f;      // degrees; 0 selects the instant (rage) path
    float  deltaSeconds = 1.f / 66.f;
    float  maxRange = kRangeLimit;
    int    targetPriority = 0;  // 0 crosshair, 1 distance, 2 health
    bool   silent = false;       // angles are written to the command, not the view
};

struct AimSolution
{
    bool  haveTarget = false;
    const void* entity = nullptr;
    const void* record = nullptr;
    QAngle angles;
    float score = 0.f;
    float distance = 0.f;
    int   hitbox = 0;
    int   group = kNoGroup;
};

// 0x1800cfb30's selection over an already-collected list.
inline AimSolution Select(const TargetList& list, const ScoreContext& ctx,
                          HitboxTable* table, int tick)
{
    AimSolution solution;
    TargetList accepted;

    for (const Candidate& source : list.entries)
    {
        Candidate candidate = source;
        ScoreCandidate(ctx, candidate, table, tick);
        if (AcceptCandidate(ctx, candidate))
            accepted.Add(candidate);
    }

    const Candidate* best = accepted.Best();
    if (best != nullptr)
    {
        solution.haveTarget = true;
        solution.entity = best->entity;
        solution.record = best->record;
        solution.angles = best->angles;
        solution.score = best->score;
        solution.distance = best->distance;
        solution.hitbox = best->hitbox;
        solution.group = best->group;
    }
    return solution;
}

// The whole per-tick outcome, including the written angles.
inline AimSolution RunAim(const AimRequest& request, const TargetList& list, Smoother& smoother,
                          bool resetAccumulator, HitboxTable* table, int tick)
{
    ScoreContext ctx;
    ctx.view = request.view;
    ctx.eye = &request.eye;
    ctx.fov = SanitizeFov(request.fov);
    ctx.priority = request.targetPriority;
    ctx.windowOpen = false;      // set by the caller from the previous frame's history

    AimSolution solution = Select(list, ctx, table, tick);
    if (!solution.haveTarget)
        return solution;

    if (solution.distance > request.maxRange)
    {
        // 0x1800d1180 logs "[AIM] out of range: dist=%.0f > weapon %.0f".
        solution.haveTarget = false;
        return solution;
    }

    // 0x1800d1750: smooth <= 0 writes the target angles straight through with a
    // step of 1.0; otherwise 0x1800d0b60 interpolates.
    if (!(request.smoothing > 0.f))
        solution.angles = { solution.angles.pitch, solution.angles.yaw, request.view.roll };
    else
        solution.angles = smoother.Apply(request.view, solution.angles, request.smoothing,
                                         request.deltaSeconds, kSnapDefault, resetAccumulator);

    return solution;
}

// --------------------------------------------------------------- log helpers
// 0x1800d1180 maps the hitbox group to the joint name it prints.
inline const char* HitgroupName(int group)
{
    switch (group)
    {
    case 3:  return "stomach";
    case 5:  return "chest";
    case 6:  return "HEAD";
    case 9:
    case 0xd: return "arm";
    case 0x11:
    case 0x15: return "leg";
    case 0x17: return "center";
    }
    return "?";
}

inline constexpr const char* kAimLog =
    "[AIM] mode=%d hbmode=%d joint=%s(%d) smooth=%.0f k=%.3f dist=%.0f "
    "d=(%.2f,%.2f)=%.2fdeg miss=%.1fu onTarget=%d fires=%d autoshoot=%d tgt=%d solveTgt=%d%s\n";
inline constexpr const char* kOutOfRangeLog =
    "[AIM] out of range: dist=%.0f > weapon %.0f \n the bullet stops before the target\n";
inline constexpr const char* kFovDiagLog = "[AIM DIAG] FOV changed to %.1f\n";

} // namespace aim
} // namespace sf
