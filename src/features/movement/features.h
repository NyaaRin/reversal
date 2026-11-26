#pragma once
// Movement features (Stage 3.7).
//
// Every class below is a Features::*::*Feature whose slot-2 body edits the user
// command directly. Addresses are the vtable slot targets from
// re/dump/vtable_methods.tsv:
//
//   Features::BunnyHop::BunnyHopFeature      vtable 0x33c858  slot 2 0x1800c2e90
//   Features::Autostrafe::AutostrafeFeature  vtable 0x33b510  slot 1 0x1800e1280
//   Features::EdgeJump::EdgeJumpFeature      vtable 0x30fc58  slot 2 0x1800c3bc0
//   Features::JumpBug::JumpBugFeature        vtable 0x339cc0  slot 2 0x180106b80
//   Features::FakeDuck::FakeDuckFeature      vtable 0x33a988  slot 1 0x180105310
//   Features::Airstuck::AirstuckFeature      vtable 0x33ad68  slot 2 0x18013fa40
//   Features::Speedhack::SpeedhackFeature    vtable 0x30fe20  slot 2 0x180140920
//   Features::MoveFix::MoveFixFeature        vtable 0x338f78  slot 2 0x1800e2040
//
// These bodies call the same engine predicates the aim/visual stages documented:
// FUN_18001d710 (entity flags, bit 0 = on ground), FUN_18001d530 (velocity),
// FUN_18001daf0 (origin), FUN_18001e0a0 (class id), FUN_18001fcf0 (move type) and
// FUN_180024540 / FUN_1800245f0 (key held / key state). They are supplied here as
// plain values so the command edits are testable without the engine.

#include <cmath>
#include <cstdint>

#include "cmd.h"

namespace sf {
namespace movement {

// ------------------------------------------------------------ shared constants
inline constexpr float kMsPerTick     = 15.f;      // 0x180380fe4
inline constexpr float kDegToRad      = 0.017453292f; // 0x180380994
inline constexpr float kRadToDegConst = 57.295776f; // 0x1803810bc — atan2 -> degrees
inline constexpr float kStrafeScale   = kRadToDegConst; // legacy name for 0x1803810bc
inline constexpr float kMoveUnit      = 7500.f;    // 0x180381298
inline constexpr float kYawFallback   = -7500.f;   // 0x18038143c
inline constexpr float kOne           = 1.f;       // 0x180380bb0
inline constexpr float kNinety        = 90.f;      // 0x18038110c
inline constexpr float kFullTurn      = 360.f;     // 0x18038120c
inline constexpr float kEpsilon       = 0.0099999f; // 0x180380980
inline constexpr float kVelocityEps   = 4.f;       // 0x180380e9c
inline constexpr float kUnduckMax     = 36.f;      // 0x180381080
inline constexpr float kDuckTimeMax   = 128.f;     // 0x180381148
inline constexpr float kPercentScale  = 100.f;     // 0x180381120
inline constexpr float kMode2Speed    = 30.f;      // 0x180381068
inline constexpr float kMode1Speed    = 45.f;      // 0x180381094
inline constexpr float kQuantizeStep  = 45.f;      // 0x180381094, SetMoveAngle divisor
inline constexpr float kMinStrafeSpeed = 15.f;     // 0x180380fe4
inline constexpr int   kEdgeJumpLogCap = 0xb;      // 0x1800c3bc0 compares < 0xb
inline constexpr int   kJumpBugLogCap  = 0x14;     // 0x180106b80 compares < 0x14 / 0x15
inline constexpr uint32_t kGroundFlag  = 1;        // FUN_18001d710 bit 0

// Config roots. Most features hang off 0x93fd561a96ab0c67; Autostrafe has its own
// root 0x2deb6b899a38d4e8.
inline constexpr uint64_t kRootMain    = 0x93fd561a96ab0c67ULL;
inline constexpr uint64_t kRootStrafe  = 0x2deb6b899a38d4e8ULL;

// --------------------------------------------------------------------- BunnyHop
// 0x1800c2e90: when the first-tick flag is armed and the player is grounded
// (flag bit 0 clear, vertical speed <= 0), it arms the jump request and returns;
// otherwise it clears IN_JUMP from the command.
struct BunnyHopFeature
{
    static constexpr uint64_t kVtableRva = 0x33c858;
    static constexpr uint64_t kVfunc02   = 0x1800c2e90;

    bool armed = false;          // DAT_18040986c
    bool jumpQueued = false;     // DAT_180409875
    bool jumpPending = false;    // DAT_180409874
    bool blocked = false;        // DAT_18040985c

    void Tick(UserCmd& cmd, bool playerValid, bool onGround, float verticalSpeed)
    {
        if (!playerValid || !armed)
            return;
        armed = false;

        // The body's early-out: grounded flag clear (airborne) and rising.
        if (!onGround && verticalSpeed > 0.f)
        {
            blocked = true;
            return;
        }

        jumpQueued = true;
        jumpPending = true;
        cmd.Clear(kInJump);
    }
};

// -------------------------------------------------------------------- EdgeJump
// 0x1800c3bc0: when the edge probe fires, set IN_JUMP and count the fire.
// The probe is FUN_1800c3270 (NaN path in the body) or, with the sim flag set,
// `!flags & 1`; both are reduced to `onEdge` here.
struct EdgeJumpFeature
{
    static constexpr uint64_t kVtableRva = 0x30fc58;
    static constexpr uint64_t kVfunc02   = 0x1800c3bc0;
    static constexpr uint64_t kProbe     = 0x1800c3270;

    bool armed = false;          // DAT_18040a64c
    int  fires = 0;              // DAT_18040a644
    float speed = 0.f;           // DAT_18040a648

    // Returns true when the fire log line should be emitted.
    bool Tick(UserCmd& cmd, bool edgeDetected)
    {
        if (!armed)
            return false;
        armed = false;
        if (!edgeDetected)
            return false;

        cmd.Set(kInJump);
        ++fires;
        return fires < kEdgeJumpLogCap;
    }
};

// --------------------------------------------------------------------- JumpBug
// 0x180106b80: after the simulated tick, if the player did not actually jump
// (still grounded and no positive vertical speed) it ducks and clears jump.
struct JumpBugFeature
{
    static constexpr uint64_t kVtableRva = 0x339cc0;
    static constexpr uint64_t kVfunc02   = 0x180106b80;

    bool armed = false;          // DAT_180409bd8
    int  sends = 0;              // DAT_180409bf8

    void Tick(UserCmd& cmd, bool jumped, bool onGround, bool ducked, float verticalSpeed)
    {
        if (!armed)
            return;
        armed = false;
        ++sends;

        if (!jumped && !onGround && verticalSpeed > 0.f)
            return;

        cmd.Set(kInDuck);
        cmd.Clear(kInJump);
        (void)ducked;
    }
};

// -------------------------------------------------------------------- FakeDuck
// 0x180105310: while airborne the duck bit is forced on; the body clears it and
// zeroes DAT_1803db430 when the crouch state is below 1.
struct FakeDuckFeature
{
    static constexpr uint64_t kVtableRva = 0x33a988;
    static constexpr uint64_t kVfunc01   = 0x180105310;
    static constexpr uint64_t kKeyEnabled = 0x5c61b11ceab8fecbULL;
    static constexpr uint64_t kKeyMode    = 0x15b58d95d09e07feULL;

    bool enabled = false;
    int  mode = 0;
    int  crouchState = 0;        // *(int*)(player + 0x20)
    bool bevelZeroed = false;    // *DAT_1803db430 = 0

    void Tick(UserCmd& cmd, bool playerValid)
    {
        if (!enabled || !playerValid)
            return;
        if (crouchState < 1)
        {
            cmd.Clear(kInDuck);
            bevelZeroed = true;
        }
        else
        {
            cmd.Set(kInDuck);
        }
    }
};

// -------------------------------------------------------------------- Airstuck
// 0x18013fa40: freezes movement, alternating between stuck and falling on a
// timer. The interval starts at 0xfa (250 ms), grows by 0x19 (25) per stuck tick
// up to 3000, and decays the measured drop by 0.6 / 0.2.
struct AirstuckFeature
{
    static constexpr uint64_t kVtableRva = 0x33ad68;
    static constexpr uint64_t kVfunc02   = 0x18013fa40;
    static constexpr uint64_t kKeyEnabled = 0x42dfcfdb85d00c63ULL;
    static constexpr uint64_t kKeyMode    = 0x14aaa39e12056f36ULL;
    static constexpr uint64_t kKeyAuto    = 0x1f136f05274bb28dULL;
    static constexpr uint64_t kKeyInterval = 0x73634b3d3ddd8dcaULL;

    static constexpr int kIntervalDefault = 0xfa;   // 250 ms
    static constexpr int kIntervalFloor   = 0x78;   // 120 ms
    static constexpr int kIntervalStep    = 0x19;   // 25 ms
    static constexpr int kIntervalCap     = 3000;
    static constexpr int kIntervalMin     = 1;
    static constexpr int kIntervalMax     = 0x2710; // 10000, checked against 0x2711
    static constexpr int kLogEvery        = 8;      // counter & 7 == 0

    static constexpr float kDecay      = 0.6f;      // 0x180380ae4
    static constexpr float kDropGain   = 0.2f;      // 0x180380a3c
    static constexpr float kDropWindow = 3.f;       // 0x180380e28
    static constexpr float kTickSeconds = 0.015f;   // implied by 15 ms ticks

    bool enabled = false;
    int  mode = 0;               // 1 = auto
    bool autoMode = false;
    int  configuredInterval = kIntervalDefault;
    int  interval = kIntervalDefault;   // DAT_1803e7cf4
    int  counter = 0;                   // DAT_1804099d0
    int  logCounter = 0;                // DAT_1803ff250
    uint64_t stuckUntil = 0;            // DAT_1804099b0
    uint64_t lastStamp = 0;             // DAT_1804099c8
    float lastZ = 0.f;                  // DAT_1804099c0
    float avgDrop = 0.f;                // DAT_1804099d4
    bool haveLastZ = false;
    bool falling = false;

    void Reset()
    {
        interval = kIntervalDefault;
        counter = 0;
        stuckUntil = 0;
        lastStamp = 0;
        lastZ = 0.f;
        avgDrop = 0.f;
        haveLastZ = false;
        falling = false;
    }

    bool Tick(UserCmd& cmd, uint64_t nowMs, float originZ)
    {
        if (!enabled)
        {
            Reset();
            return false;
        }

        ++counter;
        if (mode != 1)
        {
            // Non-auto mode: the body only clears movement and returns.
            ZeroMovement(cmd);
            cmd.ClearMask(~kMoveMask);
            return false;
        }

        stuckUntil = nowMs + static_cast<uint64_t>(kIntervalDefault);

        int intervalMs = interval;
        if (autoMode)
        {
            const int configured = configuredInterval < 0 ? 0
                                  : (configuredInterval > kIntervalMax ? kIntervalMax
                                                                       : configuredInterval);
            intervalMs = configured < kIntervalMin ? kIntervalMin : configured;
        }

        const bool due = lastStamp == 0 ||
                         nowMs - lastStamp >= static_cast<uint64_t>(intervalMs);
        if (due)
        {
            if (haveLastZ)
            {
                const float drop = lastZ - originZ > 0.f ? lastZ - originZ : 0.f;
                if (falling && avgDrop * kDropWindow + kVelocityEps < drop)
                {
                    const int raised = static_cast<int>(static_cast<float>(interval) * kDecay);
                    interval = raised > kIntervalFloor ? raised : kIntervalFloor;
                }
                else
                {
                    // 0.2 * drop + 0.8 * avgDrop
                    avgDrop = drop * kDropGain + avgDrop * (1.f - kDropGain);
                    const int next = interval + kIntervalStep;
                    interval = next < kIntervalCap ? next : kIntervalCap;
                }
            }
            haveLastZ = true;
            lastZ = originZ;
            lastStamp = nowMs;
        }

        // Stuck tick: freeze the command.
        ZeroMovement(cmd);
        cmd.ClearMask(~kMoveMask);

        bool log = false;
        if ((logCounter & (kLogEvery - 1)) == 0)
            log = true;
        ++logCounter;
        return log;
    }
};

// -------------------------------------------------------------------- Speedhack
// 0x180140920: two independent gates (the enable key and a mode/key binding),
// a factor clamped into [0.05, 3.0], and a change log keyed on the integer
// percentage.
struct SpeedhackFeature
{
    static constexpr uint64_t kVtableRva = 0x30fe20;
    static constexpr uint64_t kVfunc02   = 0x180140920;
    static constexpr uint64_t kKeyEnabled = 0x2cad3795fc8b129fULL;
    static constexpr uint64_t kKeyMode    = 0x647450219ebf53aaULL;
    static constexpr uint64_t kKeyFactor  = 0x6682ac5b6cd814e3ULL;

    // The body compares the configured factor against 0.0 (0x1803809c4) and 3.0
    // (0x180380e28); out-of-range values are replaced by the stored bounds.
    static constexpr float kFactorLowerGate = 0.0f;  // 0x1803809c4
    static constexpr float kFactorUpperGate = 3.0f;  // 0x180380e28
    static constexpr float kFactorLowFallback = 0.05f; // 0x1803310e4
    static constexpr float kFactorHighFallback = 3.0f;  // 0x1803310e0
    static constexpr float kPercent   = 100.f;   // 0x180381120

    bool enabled = false;
    int  mode = 0;
    bool held = false;
    float factor = 1.f;          // DAT_1803e90b8
    bool active = false;         // DAT_180423573
    int  lastState = -1;         // DAT_1803e6f58
    int  lastPercent = 0;        // DAT_1803e71a0

    // Returns true when the log line should be emitted.
    bool Tick(float configFactor)
    {
        float used = configFactor;
        if (used < kFactorLowerGate)
            used = kFactorLowFallback;
        if (used > kFactorUpperGate)
            used = kFactorHighFallback;
        factor = used;

        active = enabled && held;
        const int state = (enabled ? 2 : 0) | (held ? 1 : 0);
        const int percent = static_cast<int>(factor * kPercent);
        if (state == lastState && percent == lastPercent)
            return false;
        lastState = state;
        lastPercent = percent;
        return true;
    }
};

// ---------------------------------------------------------------------- MoveFix
// 0x1800e2040: rewrites the movement basis when the view yaw changed, mixing the
// old forward/side by cos/sin of the delta and the delta + 90 degrees.
struct MoveFixFeature
{
    static constexpr uint64_t kVtableRva = 0x338f78;
    static constexpr uint64_t kVfunc02   = 0x1800e2040;
    static constexpr uint64_t kDelegate  = 0x1800e1d50;

    // class id 9 or move type > 1 delegates to FUN_1800e1d50.
    static bool ShouldDelegate(int classId, int moveType)
    {
        return classId == 9 || moveType > 1;
    }

    struct Move
    {
        float forward = 0.f;   // was param_3[5] (int-scaled)
        float side = 0.f;      // was param_3[6]
    };

    // viewYaw / previousYaw in degrees; returns true when the basis changed.
    static bool FixYaw(Move& move, float previousYaw, float viewYaw, bool unitMove)
    {
        if (!unitMove)
            return false;

        float delta = viewYaw - previousYaw;
        if (std::fabs(delta) < kEpsilon)
            return false;

        if (previousYaw <= viewYaw)
            delta = std::fabs(previousYaw - viewYaw);
        else
            delta = kFullTurn - std::fabs(viewYaw - previousYaw);

        const float a = delta * kDegToRad;
        const float b = (delta + kNinety) * kDegToRad;

        const float oldForward = move.forward;
        const float oldSide = move.side;
        move.forward = std::cos(b) * oldSide + std::cos(a) * oldForward;
        move.side = std::sin(b) * oldSide + std::sin(a) * oldForward;
        return true;
    }
};

// ------------------------------------------------------------------- Autostrafe
// 0x1800e1280: only runs for a live player with class id 2 and move type <= 1
// while jump is held in this or the previous command. It then rotates the strafe
// basis by 90 degrees and picks a yaw from the velocity's atan2.
struct AutostrafeFeature
{
    static constexpr uint64_t kVtableRva = 0x33b510;
    static constexpr uint64_t kVfunc01   = 0x1800e1280;
    static constexpr uint64_t kKeyEnabled = 0x402819404e703058ULL;
    static constexpr uint64_t kKeyMode    = 0x207b6d725748ed5fULL;
    static constexpr uint64_t kSetMoveAngle = 0x1800e1c60;

    static constexpr int kPlayerClass = 2;   // FUN_18001e0a0 == 2
    static constexpr int kMaxMoveType = 1;   // FUN_18001fcf0 <= 1

    static bool Gate(bool alive, int classId, int moveType, uint32_t cmdButtons,
                     uint32_t prevButtons)
    {
        if (!alive || classId != kPlayerClass || moveType > kMaxMoveType)
            return false;
        return (cmdButtons & kInJump) != 0 || (prevButtons & kInJump) != 0;
    }

    static constexpr uint64_t kKeyAuxFlag = 0x7b225fe0c7fe4acfULL;
    static constexpr uint64_t kKeyMode2Scale = 0xb84e8776c92be6b0ULL;
    static constexpr uint64_t kKeyModeCap = 0x9d365af164de8daULL;

    // 0x1800e1280 normalises mode 4 to 2; every other value is passed through.
    static int NormalizeMode(int mode) { return mode == 4 ? 2 : mode; }

    // The body chooses the velocity yaw only above 15 u/s; below that it keeps
    // the command yaw. atan2 is scaled by 57.295776 (0x1803810bc), not 750.
    static float BaseYaw(float speed, float velX, float velY, float viewYaw)
    {
        if (speed <= kMinStrafeSpeed)
            return viewYaw;
        return std::atan2(velY, velX) * kRadToDegConst;
    }

    // 0x1800e1c60: quantise to the nearest 45 degrees, then write the two move
    // legs as +/-7500. The original negates sin before choosing the side sign,
    // and the dead band is 0.001 (0x180380ac0).
    static void SetMoveAngle(UserCmd& cmd, float angleDegrees)
    {
        const long steps = std::lround(angleDegrees / kQuantizeStep);
        const float radians = static_cast<float>(steps) * kQuantizeStep * kDegToRad;
        const float c = std::cos(radians);
        const float s = -std::sin(radians);
        cmd.forwardMove = std::fabs(c) <= kEpsilon ? 0.f : (c > 0.f ? kMoveUnit : kYawFallback);
        cmd.sideMove = std::fabs(s) <= kEpsilon ? 0.f : (s > 0.f ? kMoveUnit : kYawFallback);
    }

    // Summary of the common per-mode basis. Mode 0 uses the command field path;
    // modes 1/2 rotate the velocity/view yaw by the selected 90-degree side.
    static float StrafeYaw(int mode, float velX, float velY, float viewYaw,
                           float speed = kMinStrafeSpeed + 1.f)
    {
        const int normalized = NormalizeMode(mode);
        const float base = BaseYaw(speed, velX, velY, viewYaw);
        if (normalized == 0)
            return base;
        return base + (normalized > 0 ? kNinety : -kNinety);
    }
};

// -------------------------------------------------------------------- dispatch
// The corpus dispatches each feature once per tick from its slot; there is no
// combined mover in this region (see docs), so the list below is the
// reconstruction's tick order, matching slot order in FeatureBase registration.
struct MovementSet
{
    BunnyHopFeature bunnyHop;
    EdgeJumpFeature edgeJump;
    JumpBugFeature jumpBug;
    FakeDuckFeature fakeDuck;
    AirstuckFeature airstuck;
    SpeedhackFeature speedhack;
    MoveFixFeature moveFix;
    AutostrafeFeature autostrafe;
};

} // namespace movement
} // namespace sf
