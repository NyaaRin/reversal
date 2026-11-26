// Self-test for the HVH subsystem (Stage 3.8).
//
// Covers:
//   1. LagComp: save/abuse/restore, the eight-attempt arm, its failure result.
//   2. Resolver: the two passes, the alive-cache edges, the slot cap, slot 11.
//   3. AntiAim: the gate chain, pitch modes, yaw modes, jitter clamp, cooldown.
//   4. Visualize: its entry gate and the recovered render body.
//   5. The recovered addresses and constants.

#include <cmath>
#include <cstdio>

#include "antiaim.h"
#include "lagcomp.h"
#include "resolver.h"
#include "visualize.h"

namespace {

int g_failures = 0;

void Check(bool condition, const char* what)
{
    std::printf("%s  %s\n", condition ? "PASS" : "FAIL", what);
    if (!condition)
        ++g_failures;
}

void CheckInt(int actual, int expected, const char* what)
{
    const bool ok = actual == expected;
    std::printf("%s  %s (got %d, want %d)\n", ok ? "PASS" : "FAIL", what, actual, expected);
    if (!ok)
        ++g_failures;
}

void CheckNear(float actual, float expected, float tolerance, const char* what)
{
    const bool ok = std::fabs(actual - expected) <= tolerance;
    std::printf("%s  %s (got %.4f, want %.4f)\n", ok ? "PASS" : "FAIL", what, actual, expected);
    if (!ok)
        ++g_failures;
}

using namespace sf::hvh;

} // namespace

int main()
{
    // ---------------------------------------------------------------- LagComp
    {
        LagCompFeature lag;
        LagCompFeature::Convars con;
        con.interp = 0.1f;
        con.ratio = 2.f;

        Check(lag.Tick(con, false, 0) == LagCompFeature::Result::Idle,
              "disabled lag comp is idle");
        Check(lag.Tick(con, true, 2) == LagCompFeature::Result::Idle,
              "mode 2 does not arm the abuse");

        Check(lag.Tick(con, true, 1) == LagCompFeature::Result::SwitchedOn,
              "mode 1 arms the abuse");
        CheckNear(lag.savedInterp, 0.1f, 1e-6f, "the previous interp is saved");
        CheckNear(lag.savedRatio, 2.f, 1e-6f, "the previous ratio is saved");
        CheckNear(con.interp, 0.5f, 1e-6f, "cl_interp is written to 0.5");
        CheckNear(con.ratio, 5.f, 1e-6f, "cl_interp_ratio is written to 5.0");
        Check(lag.applied, "the abuse is marked applied");

        Check(lag.Tick(con, true, 1) == LagCompFeature::Result::Idle,
              "repeating the same state does nothing");
        Check(lag.Tick(con, false, 1) == LagCompFeature::Result::SwitchedOff,
              "disabling restores the saved pair");
        CheckNear(con.interp, 0.1f, 1e-6f, "the interp is restored");
        CheckNear(con.ratio, 2.f, 1e-6f, "the ratio is restored");
        Check(!lag.haveSaved && lag.attempts == 0, "the save state is cleared");

        LagCompFeature blocked;
        LagCompFeature::Convars locked;
        locked.writable = false;
        locked.interp = 0.2f;
        locked.ratio = 1.f;

        int pending = 0;
        for (int i = 0; i < LagCompFeature::kMaxAttempts - 1; ++i)
            if (blocked.Tick(locked, true, 1) == LagCompFeature::Result::Pending)
                ++pending;
        CheckInt(pending, LagCompFeature::kMaxAttempts - 1,
                 "each failed write below the limit reports pending");
        Check(blocked.Tick(locked, true, 1) == LagCompFeature::Result::Failed,
              "the eighth failed write reports failure");
        CheckNear(blocked.savedInterp, 0.2f, 1e-6f,
                  "the failed path still kept the saved value");
    }

    // ---------------------------------------------------------------- Resolver
    {
        ResolverFeature res;
        ResolverFeature::Player players[ResolverFeature::kMaxClientsCap + 1];

        players[1].present = true;
        players[1].alive = true;
        players[1].origin[0] = 100.f;
        players[2].present = true;
        players[2].dormant = true;
        players[2].alive = true;
        players[3].present = true;
        players[3].alive = false;

        res.Tick(players, 4, true, false);
        CheckInt(res.probed, 1, "only a live, non-dormant, present player is probed");

        res.Tick(players, 4, false, true);
        CheckInt(res.revivals, 1, "a live player produces one alive edge");
        Check(res.aliveCache[1] && !res.aliveCache[2] && !res.aliveCache[3],
              "a live slot caches true; dormant and dead slots cache false");

        players[1].alive = false;
        res.Tick(players, 4, false, true);
        CheckInt(res.deaths, 1, "dying fires the death edge once");
        Check(!res.aliveCache[1], "the cache drops on death");

        res.Tick(players, 4, false, true);
        CheckInt(res.deaths, 1, "the death edge does not repeat");

        players[1].alive = true;
        res.Tick(players, 4, false, true);
        CheckInt(res.revivals, 2, "respawning fires the alive edge again");

        ResolverFeature capped;
        ResolverFeature::Player many[ResolverFeature::kMaxClientsCap + 8];
        for (int i = 1; i < ResolverFeature::kMaxClientsCap + 8; ++i)
        {
            many[i].present = true;
            many[i].alive = true;
        }
        capped.Tick(many, ResolverFeature::kMaxClientsCap + 7, true, false);
        CheckInt(capped.probed, ResolverFeature::kMaxClientsCap,
                 "the slot loop never exceeds the 0x80 cap");

        Check(ResolverFeature::ShouldFixAimRecord(true), "slot 11 fixes the local player");
        Check(!ResolverFeature::ShouldFixAimRecord(false), "slot 11 skips other players");
    }

    // ---------------------------------------------------------------- AntiAim
    {
        Check(!AntiAimFeature::Gate(false, 2, 1, false), "a dead entity is refused");
        Check(!AntiAimFeature::Gate(true, 1, 1, false), "class 1 is refused");
        Check(!AntiAimFeature::Gate(true, 2, 2, false), "move type above one is refused");
        Check(!AntiAimFeature::Gate(true, 2, 1, true), "the shared gate key disables it");
        Check(AntiAimFeature::Gate(true, 2, 1, false), "a normal player passes");

        CheckNear(AntiAimFeature::PitchFor(1, false), 89.f, 1e-6f, "pitch mode 1 is +89");
        CheckNear(AntiAimFeature::PitchFor(2, false), -89.f, 1e-6f, "pitch mode 2 is -89");
        CheckNear(AntiAimFeature::PitchFor(3, true), 89.f, 1e-6f,
                  "pitch mode 3 follows the attack bit up");
        CheckNear(AntiAimFeature::PitchFor(3, false), -89.f, 1e-6f,
                  "pitch mode 3 follows the attack bit down");
        CheckNear(AntiAimFeature::PitchFor(4, true), 0.f, 1e-6f, "pitch mode 4 is zero");

        const float base = 12.f;
        CheckNear(AntiAimFeature::YawFor(1, base, 15.f, false, false), base + 180.f,
                  1e-4f, "yaw mode 1 is a half turn");
        CheckNear(AntiAimFeature::YawFor(2, base, 15.f, false, false),
                  base + 180.f - 15.f, 1e-4f, "yaw mode 2 adds half the jitter");
        CheckNear(AntiAimFeature::YawFor(2, base, 15.f, false, true),
                  base + 180.f + 15.f, 1e-4f, "the mirror flag flips the jitter");
        CheckNear(AntiAimFeature::YawFor(4, base, 15.f, false, false), base + 90.f,
                  1e-4f, "yaw mode 4 is a right quarter turn");
        CheckNear(AntiAimFeature::YawFor(5, base, 15.f, false, false), base - 90.f,
                  1e-4f, "yaw mode 5 is a left quarter turn");
        CheckNear(AntiAimFeature::YawFor(6, base, 15.f, true, false),
                  base + 195.f, 1e-4f, "yaw mode 6 alternates on the phase bit");
        CheckNear(AntiAimFeature::YawFor(7, base, 15.f, false, false),
                  base + 180.f, 1e-4f,
                  "yaw mode 7 keeps the recovered body-path basis");
        CheckInt(kYawMode3Max, 18, "yaw mode 3 clamps its amplitude at 18");
        CheckInt(kBodyJitterMax, 60, "the body offset ceiling is 60");
        CheckInt(kConfigJitterMin, 10, "modes 2/6 clamp configured jitter at 10");
        CheckInt(kConfigJitterMax, 180, "modes 2/6 clamp configured jitter at 180");
        Check(kDesyncBody == 0x180409ce8ULL, "the BodyDesync record is 0x180409ce8");
        CheckInt(kDesyncBodySize, 12, "the BodyDesync record is 12 bytes");
        Check(kDirectionStep == 45.f, "the body direction step is 45 degrees");
        CheckNear(AntiAimFeature::YawFor(0, base, 15.f, false, false), base,
                  1e-4f, "yaw mode 0 leaves the yaw alone");

        CheckNear(AntiAimFeature::ClampJitter(-100.f), -60.f, 1e-6f,
                  "jitter clamps at -60");
        CheckNear(AntiAimFeature::ClampJitter(100.f), 60.f, 1e-6f,
                  "jitter clamps at +60");
        CheckNear(AntiAimFeature::ClampJitter(12.5f), 12.5f, 1e-6f,
                  "jitter inside the range is untouched");

        AntiAimFeature aa;
        int logs = 0;
        for (int i = 0; i < 128; ++i)
            if (aa.TickCooldownLog())
                ++logs;
        CheckInt(logs, 2, "the cooldown log fires every 64th tick");
    }

    // --------------------------------------------------------------- Visualize
    {
        Check(!VisualizeFeature::Gate(false, true, true), "no interface means no render");
        Check(!VisualizeFeature::Gate(true, false, true), "disconnected means no render");
        Check(!VisualizeFeature::Gate(true, true, false), "a dead local player means no render");
        Check(VisualizeFeature::Gate(true, true, true), "a connected live player renders");
        Check(VisualizeFeature::kBodyRecovered,
              "the render body is recovered");
        Check(VisualizeFeature::kBodySize == 5584, "the render body is 5584 bytes");
        Check(VisualizeFeature::SectionEnabled(true, false, false, false, 0),
              "the box section follows its gate");
        Check(!VisualizeFeature::SectionEnabled(true, false, false, false, 1),
              "the LBY section does not run when its gate is off");
        Check(VisualizeFeature::SectionEnabled(false, false, false, true, 3),
              "the skeleton section follows its gate");
        Check(kProjection == 0x180021ac0ULL,
              "projection goes through 0x180021ac0");
    }

    // --------------------------------------------------------------- addresses
    {
        Check(AntiAimFeature::kVfunc02 == 0x1800bdd80ULL, "AntiAim keeps 0x1800bdd80");
        Check(ResolverFeature::kVfunc01 == 0x1800bc9e0ULL, "Resolver keeps 0x1800bc9e0");
        Check(ResolverFeature::kVfunc11 == 0x1800bcc10ULL, "Resolver slot 11 keeps 0x1800bcc10");
        Check(LagCompFeature::kVfunc01 == 0x1800c0db0ULL, "LagComp keeps 0x1800c0db0");
        Check(VisualizeFeature::kVfunc06 == 0x1800bf160ULL, "Visualize keeps 0x1800bf160");

        Check(AntiAimFeature::kVtableRva == 0x33dc68ULL, "AntiAim vtable is 0x33dc68");
        Check(ResolverFeature::kVtableRva == 0x33bc60ULL, "Resolver vtable is 0x33bc60");
        Check(LagCompFeature::kVtableRva == 0x33cad0ULL, "LagComp vtable is 0x33cad0");
        Check(VisualizeFeature::kVtableRva == 0x33b028ULL, "Visualize vtable is 0x33b028");

        CheckNear(kPitchUp, 89.f, 1e-6f, "pitch up is 89 (0x180381108)");
        CheckNear(kPitchDown, -89.f, 1e-6f, "pitch down is -89 (0x180381410)");
        CheckNear(kHalfTurn, 180.f, 1e-6f, "the half turn is 180 (0x180381188)");
        CheckNear(kJitterMin, -60.f, 1e-6f, "the jitter floor is -60 (0x180381408)");
        CheckNear(kJitterMax, 60.f, 1e-6f, "the jitter ceiling is 60 (0x1803810c8)");
        CheckNear(kAbuseInterp, 0.5f, 1e-6f, "the abused interp is 0.5 (0x180380ac0)");
        CheckNear(kAbuseRatio, 5.f, 1e-6f, "the abused ratio is 5.0 (0x180380f00)");
        CheckInt(ResolverFeature::kResolverSlotStride, 0x168,
                 "the resolver cache stride is 0x168");
        CheckInt(LagCompFeature::kMaxAttempts, 8, "the lag-comp attempt limit is 8");
    }

    std::printf("\n%s (%d failure%s)\n",
                g_failures == 0 ? "HVH SELFTEST PASS" : "HVH SELFTEST FAIL",
                g_failures, g_failures == 1 ? "" : "s");
    return g_failures == 0 ? 0 : 1;
}
