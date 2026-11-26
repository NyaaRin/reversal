#pragma once
// Target collection, gating and scoring (Stage 3.5).
//
// Reconstructed from:
//   0x1800cef20  candidate collection over players, backtrack records and other
//                entities (2175 bytes) — re/dump/decompile/0x1800cef20_FUN_1800cef20.c
//   0x1800cf820  scoring / insertion (619 bytes)
//   0x1800c5030  target validity gate chain (1186 bytes)
//   0x1800c4a70  aim-point resolution: shoot pos, eye pos, simtime, origin (143 bytes)
//   0x1800ce2c0  FOV read and clamp (170 bytes)
//   0x1800cfb30  per-tick picker, sticky target and angle output (4131 bytes)
//
// Selection is minimum angular error with two hysteresis rules: a locked target is
// scored against an enlarged threshold, and its ordering key is discounted, so a
// briefly better candidate does not steal the aim every tick.

#include <cmath>
#include <cstdint>
#include <limits>
#include <vector>

#include "../nospread/angle.h"

namespace sf {
namespace aim {

// ---------------------------------------------------------------- constants
// Every value below was read out of m64.dll with re/tools/consts.js.
inline constexpr float kStickyWindow     = 0.2f;      // 0x180380c80 (double)
inline constexpr float kStickyGain       = 0.15f;     // 0x180380a1c
inline constexpr float kStickyCap        = 1.5f;      // 0x180380c50
inline constexpr float kMaxFov           = 180.f;     // 0x180381188
inline constexpr float kLockedKeyScale   = 0.85f;     // 0x180380b4c
inline constexpr float kSameGroupScale   = 0.95f;     // 0x180380b74
inline constexpr float kDistanceMargin   = 0.25f;     // 0x180380a58
inline constexpr float kRangeLimit       = 8192.f;    // 0x1803812a4
inline constexpr int   kMaxEntities      = 10;        // picker breaks at 9 < index
inline constexpr int   kMaxRecords       = 3;         // picker breaks at 2 < records
inline constexpr int   kMaxHitboxes      = 0x81;      // index bound used everywhere
inline constexpr int   kNoGroup          = 0x18;      // 0x1800cfb30: local_5e8 == 0x18

// ------------------------------------------------------------ angle metric
// 0x1800ce630 is the picker's score. It is *not* the inline hypot form below:
// it takes a view frame (origin + forward + valid byte), computes the cosine of
// the angle to three points with 0x1800cb220, adds the closest point on the
// segment p2..p3 when that projection lands inside it, and returns
// acos(max cosine) * 180/pi. An invalid frame or a degenerate point yields
// FLT_MAX (0x180381308), which rejects the candidate.
struct ViewFrame
{
    Vector origin;
    Vector forward;
    bool valid = true;    // *(char*)(param_1 + 6) in 0x1800cb220 / 0x1800ce630
};

inline constexpr float kMetricInvalidCos = -2.f;   // 0x1803813c0
inline constexpr float kMetricLengthEps = 0.001f; // 0x180380964
inline constexpr float kMetricCurveEps = 1e-6f;   // 0x180380938
inline constexpr float kMetricInvalid = std::numeric_limits<float>::max(); // 0x180381308

// 0x1800cb220: cos(angle(point - origin, forward)), clamped to [-1, 1].
// Returns -2 for an invalid frame, a degenerate delta, or a non-finite result.
inline float PointAngleCos(const ViewFrame& view, const Vector& point)
{
    if (!view.valid)
        return kMetricInvalidCos;
    const Vector delta = point - view.origin;
    const float length = std::sqrt(delta.Dot(delta));
    if (!(length > kMetricLengthEps))
        return kMetricInvalidCos;
    const float cosine = delta.Dot(view.forward) / length;
    if (!std::isfinite(cosine))
        return kMetricInvalidCos;
    return std::fmin(std::fmax(cosine, -1.f), 1.f);
}

// 0x1800ce630: maximum angle to p1/p2 and the segment p1..p2, plus p3.
// The segment correction solves the closest-approach parameter exactly as the
// body does; a parameter outside (0,1) is ignored.
inline float MaximumAngularError(const ViewFrame& view, const Vector& p1,
                                 const Vector& p2, const Vector& p3)
{
    float cosine = PointAngleCos(view, p1);
    cosine = std::fmax(cosine, PointAngleCos(view, p2));
    cosine = std::fmax(cosine, PointAngleCos(view, p3));

    const Vector ab = p2 - p1;
    const Vector bc = p3 - p2;
    const float fwdAb = view.forward.Dot(ab);
    const float fwdBc = view.forward.Dot(bc);
    const float abBc = ab.Dot(bc);
    const float denom = fwdBc * abBc - bc.Dot(bc) * fwdAb;
    if (std::fabs(denom) > kMetricCurveEps)
    {
        const float t = (fwdAb * abBc - ab.Dot(ab) * fwdBc) / denom;
        if (t > 0.f && t < 1.f)
        {
            const Vector closest = p2 + bc * t;
            cosine = std::fmax(cosine, PointAngleCos(view, closest));
        }
    }

    if (cosine >= -1.f)
    {
        const float degrees = std::acos(cosine) * kRadToDeg;
        if (std::isfinite(degrees))
            return degrees;
    }
    return kMetricInvalid;
}

// Legacy/diagnostic form used by 0x1800d1180 and 0x1800d1750 for two QAngles.
// It is not the picker score; see MaximumAngularError above.
inline float AngularDistance(const QAngle& from, const QAngle& to)
{
    const float dYaw = NormalizeAngle(to.yaw - from.yaw) * kDegToRad;
    const float dPitch = NormalizeAngle(to.pitch - from.pitch) * kDegToRad;
    const float mid = (from.pitch + to.pitch) * 0.5f * kDegToRad;
    return std::sqrt(dYaw * dYaw * std::cos(mid) * std::cos(mid) + dPitch * dPitch) * kRadToDeg;
}

// ------------------------------------------------------------- hitbox table
// 0x1803e8a60 is a 0x81-entry table with stride 0xc: { score, threshold, tick }.
// 0x1800cf820 writes it for the hitbox the candidate resolves to, and the trigger
// path reads the same layout.
struct HitboxSample
{
    float score = 0.f;
    float threshold = 0.f;     // FUN_1800c4900 returns a float threshold
    int   tick = 0;
};

struct HitboxTable
{
    HitboxSample slot[kMaxHitboxes];

    void Record(int hitbox, float score, float threshold, int tick)
    {
        if (hitbox < 1 || hitbox >= kMaxHitboxes)
            return;
        slot[hitbox].score = score;
        slot[hitbox].threshold = threshold;
        slot[hitbox].tick = tick;
    }
};

// -------------------------------------------------------------- candidates
struct Candidate
{
    const void* entity = nullptr;       // param_2 of 0x1800cf820
    const void* record = nullptr;       // param_3; null means the live body
    QAngle angles;                      // aim angles to this point
    float  score = 0.f;                 // angular error in degrees (fVar7)
    float  key = 0.f;                   // ordering key (local_a0)
    float  distance = 0.f;              // eye -> point distance
    float  health = 100.f;              // target health for priority ordering
    int    hitbox = 0;
    int    group = kNoGroup;            // 0x1800cfb30's local_5e8
    Vector points[3];                   // p1/p2/p3 when the point metric is used
    bool   hasPoints = false;
};

// The threshold a candidate must beat, including the locked-target bonus.
// 0x1800cf820: threshold = fov, then + min(fov * 0.15, 1.5) when the candidate is
// the locked target and the angle history window is open, capped at 180.
inline float StickyThreshold(float fov, bool isLocked, bool windowOpen)
{
    float threshold = fov;
    if (isLocked && windowOpen)
    {
        float bonus = fov * kStickyGain;
        if (bonus >= kStickyCap)
            bonus = kStickyCap;
        threshold = threshold + bonus;
        if (threshold >= kMaxFov)
            threshold = kMaxFov;
    }
    return threshold;
}

// 0x1800c4900, called from 0x1800cf820 at the hitbox-table write. It is the
// same threshold, not a penetration value: base FOV plus the capped sticky
// bonus, or the plain FOV when the target/window pair is not active.
inline float HitboxThreshold(float fov, bool isLocked, bool windowOpen)
{
    return StickyThreshold(fov, isLocked, windowOpen);
}

// True when the previous and current error are inside the sticky window:
// 0.0 <= previous <= current && current - previous <= 0.2
inline bool StickyWindowOpen(float previous, float current)
{
    return previous >= 0.f && previous <= current && (current - previous) <= kStickyWindow;
}

struct ScoreContext
{
    QAngle view;                        // the angles currently in the command
    ViewFrame frame;                    // picker frame for the point metric
    bool  pointMetric = false;          // true = call 0x1800ce630 semantics
    const Vector* eye = nullptr;        // param_1[0]
    bool  recordHitboxes = true;        // *(char*)param_1[1]
    bool  distanceKey = false;          // *(char*)param_1[2]
    float bias = 0.f;                   // param_7
    float previousBest = -1.f;          // param_8, negative means "none"
    int   priority = 0;                 // 0 crosshair, 1 distance, 2 health
    const void* lockedTarget = nullptr; // DAT_1803e8a28
    bool  windowOpen = false;
    float fov = 0.f;                    // DAT_1803e8a48
    const void* previousGroupTarget = nullptr; // DAT_1803e8a14's owner
    int   previousGroup = kNoGroup;
};

// 0x1800cf820. Fills the candidate's score/key and returns the angular error.
// The caller pushes it only when `score <= StickyThreshold(...)`.
inline float ScoreCandidate(const ScoreContext& ctx, Candidate& candidate,
                            HitboxTable* table, int tick)
{
    candidate.score = (ctx.pointMetric && candidate.hasPoints)
                          ? MaximumAngularError(ctx.frame, candidate.points[0],
                                                candidate.points[1], candidate.points[2])
                          : AngularDistance(ctx.view, candidate.angles);

    const bool isLocked = ctx.lockedTarget != nullptr && candidate.entity == ctx.lockedTarget;

    if (ctx.recordHitboxes && candidate.record == nullptr && candidate.entity != nullptr &&
        table != nullptr && candidate.hitbox > 0 && candidate.hitbox < kMaxHitboxes)
    {
        table->Record(candidate.hitbox, candidate.score,
                      HitboxThreshold(ctx.fov, isLocked, ctx.windowOpen), tick);
    }

    const float best = ctx.previousBest < 0.f
                           ? candidate.score
                           : std::fmin(candidate.score, ctx.previousBest);

    if (ctx.priority == 1)
        candidate.key = candidate.distance;
    else if (ctx.priority == 2)
        candidate.key = candidate.health;
    else if (ctx.distanceKey)
        candidate.key = candidate.distance;
    else
        candidate.key = best + ctx.bias;

    if (isLocked)
        candidate.key *= kLockedKeyScale;

    // 0x1800cfb30 additionally discounts a revisit of the same hitbox group.
    if (ctx.previousGroupTarget != nullptr && candidate.entity == ctx.previousGroupTarget &&
        candidate.group != kNoGroup && candidate.group == ctx.previousGroup)
    {
        candidate.key *= kSameGroupScale;
    }

    return candidate.score;
}

inline bool AcceptCandidate(const ScoreContext& ctx, const Candidate& candidate)
{
    const bool isLocked = ctx.lockedTarget != nullptr && candidate.entity == ctx.lockedTarget;
    return candidate.score <= StickyThreshold(ctx.fov, isLocked, ctx.windowOpen);
}

// ------------------------------------------------------------------- gates
// 0x1800c5030 runs this chain in order and returns false at the first hit.
// Fields the corpus does not expose (entity vtable slots) are supplied by the
// caller as plain values so the chain is testable without the engine.
struct GateInputs
{
    bool  nullEntity = false;
    bool  selfEntity = false;
    bool  badRead = false;
    bool  hasClientEntity = true;
    int   index = 0;                 // vfunc 0x48
    int   maxClients = 65;           // DAT_1803fa608[7]
    bool  dormant = false;           // vfunc 0x40
    bool  hasModel = true;           // vfunc 0x28
    bool  alive = true;
    int   health = 100;
    int   team = 0;
    int   localTeam = 0;
    int   flags = 0;                 // FUN_18001d710
    bool  inIgnoreList = false;      // FUN_1800c4740(index)
    bool  blockedByExtension = false; // one of the four optional callbacks
};

enum class GateRefusal : int
{
    None = 0,
    NullOrSelf,
    BadRead,
    NoClientEntity,
    IndexOutOfRange,
    NoModel,
    Dead,
    TeamMismatch,
    NoDraw,
    Ignored,
    Extension,
};

// Config keys that gate this chain, in the order 0x1800c5030 reads them.
inline constexpr uint64_t kKeyIgnoreDormant   = 0xe5e03453c741697fULL;
inline constexpr uint64_t kKeyDistanceGate    = 0x8dbcb6da1c093609ULL;
inline constexpr uint64_t kKeyTeamCheck       = 0x585adea58af62688ULL;
inline constexpr uint64_t kKeyIgnoreDead      = 0xb893a7799007b22fULL;
inline constexpr uint64_t kKeyIgnoreNoDraw    = 0x8ae1ad0adb54c4f0ULL;
inline constexpr uint64_t kKeyIgnoreList      = 0x216df9830429193fULL;
inline constexpr uint64_t kKeyExtensionGate   = 0x7f0b28cb8d45cb74ULL;

struct GateConfig
{
    bool ignoreDormant = true;
    bool distanceGate = true;
    bool teamCheck = true;
    bool ignoreDead = true;
    bool ignoreNoDraw = true;
    bool useIgnoreList = true;
    bool extensionGate = true;
};

inline GateRefusal CheckTarget(const GateInputs& in, const GateConfig& cfg)
{
    if (in.nullEntity || in.selfEntity)
        return GateRefusal::NullOrSelf;
    if (in.badRead)
        return GateRefusal::BadRead;
    if (!in.hasClientEntity)
        return GateRefusal::NoClientEntity;
    if (in.index < 1 || in.index > in.maxClients)
        return GateRefusal::IndexOutOfRange;
    if (!in.hasModel)
        return GateRefusal::NoModel;
    if (!in.alive || in.health < 1)
        return GateRefusal::Dead;
    if (cfg.teamCheck && in.team != 0 && in.team == in.localTeam)
        return GateRefusal::TeamMismatch;
    if (cfg.ignoreNoDraw && (in.flags & 0x40) != 0)   // EF_NODRAW
        return GateRefusal::NoDraw;
    if (cfg.useIgnoreList && in.inIgnoreList)
        return GateRefusal::Ignored;
    if (cfg.extensionGate && in.blockedByExtension)
        return GateRefusal::Extension;
    return GateRefusal::None;
}

// 0x1800ce2c0: a non-finite or non-positive FOV becomes 0; anything above 180 is
// clamped to 180. The image logs a change at most once per distinct value.
inline float SanitizeFov(float fov)
{
    if (!std::isfinite(fov) || !(fov > 0.f))
        return 0.f;
    return fov > kMaxFov ? kMaxFov : fov;
}

// ---------------------------------------------------------------- the list
// 0x1800cef20 appends to a vector of 0x20-byte records and 0x1800cfb30 walks it.
// The picker breaks after 10 distinct entities and 3 records per entity.
struct TargetList
{
    std::vector<Candidate> entries;

    bool Add(const Candidate& candidate)
    {
        int records = 0;
        for (const Candidate& existing : entries)
            if (existing.entity == candidate.entity)
                ++records;

        if (records >= kMaxRecords)
            return false;

        int entities = 0;
        bool seen = false;
        for (const Candidate& existing : entries)
        {
            if (existing.entity == candidate.entity)
                seen = true;
        }
        if (!seen)
        {
            for (std::size_t i = 0; i < entries.size(); ++i)
            {
                bool unique = true;
                for (std::size_t j = 0; j < i; ++j)
                    if (entries[j].entity == entries[i].entity)
                        unique = false;
                if (unique)
                    ++entities;
            }
            if (entities >= kMaxEntities)
                return false;
        }

        entries.push_back(candidate);
        return true;
    }

    // Lowest key wins; ties keep the earlier insertion, as the picker does with
    // its strict `key < best` comparison.
    const Candidate* Best() const
    {
        const Candidate* best = nullptr;
        for (const Candidate& candidate : entries)
            if (best == nullptr || candidate.key < best->key)
                best = &candidate;
        return best;
    }

    void Clear() { entries.clear(); }
};

} // namespace aim
} // namespace sf
