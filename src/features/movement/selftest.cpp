// Self-test for the movement subsystem (Stage 3.7).
//
// Covers what the eight tick bodies actually do to the command:
//   1. command bits and the Airstuck clear mask,
//   2. BunnyHop arming, ground check and jump-bit clearing,
//   3. EdgeJump fire, count and log cap,
//   4. JumpBug duck-and-clear on a failed jump, and its log cap,
//   5. FakeDuck duck state below one,
//   6. Airstuck's interval floor/step/cap and decay, plus its command freeze,
//   7. Speedhack's two gates and out-of-range factor fallbacks,
//   8. MoveFix's ninety-degree basis mix and delegation,
//   9. Autostrafe's gate and yaw basis,
//  10. the addresses and constants themselves.

#include <cmath>
#include <cstdio>
#include <cstring>

#include "features.h"

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

using namespace sf::movement;

} // namespace

int main()
{
    // ------------------------------------------------------------ command bits
    {
        UserCmd cmd;
        Check(!cmd.Has(kInJump) && !cmd.Has(kInDuck), "a fresh command holds no buttons");
        cmd.Set(kInJump);
        Check(cmd.buttons == 0x2, "IN_JUMP is bit 1");
        cmd.Set(kInDuck);
        Check(cmd.buttons == 0x6, "IN_DUCK is bit 2");
        cmd.Clear(kInJump);
        Check(cmd.buttons == 0x4, "clearing jump leaves duck");
        CheckInt(kMoveMask, 0x61e, "the Airstuck mask covers bits 1-4 and 9-10");
        cmd.buttons = 0x7ff;
        cmd.ClearMask(~kMoveMask);
        CheckInt(static_cast<int>(cmd.buttons), 0x1e1, "the Airstuck mask survives the clear");
    }

    // --------------------------------------------------------------- BunnyHop
    {
        BunnyHopFeature hop;
        UserCmd cmd;
        cmd.Set(kInJump);

        hop.Tick(cmd, true, true, 0.f);
        Check(cmd.Has(kInJump), "an unarmed BunnyHop leaves the jump bit alone");

        hop.armed = true;
        hop.Tick(cmd, true, true, 0.f);
        Check(!hop.armed, "a tick consumes the arm flag");
        Check(hop.jumpQueued && hop.jumpPending, "a grounded tick queues a jump");
        Check(!cmd.Has(kInJump), "a grounded tick clears IN_JUMP");

        cmd.Set(kInJump);
        hop.armed = true;
        hop.Tick(cmd, true, false, 100.f);
        Check(hop.blocked, "a rising airborne tick blocks the hop");
        Check(cmd.Has(kInJump), "the blocked hop leaves jump set");

        hop.armed = true;
        cmd.Set(kInJump);
        hop.Tick(cmd, true, false, -50.f);
        Check(!cmd.Has(kInJump), "a falling airborne tick clears jump");

        hop.armed = true;
        UserCmd stale;
        stale.Set(kInJump);
        hop.Tick(stale, false, true, 0.f);
        Check(stale.Has(kInJump) && hop.armed,
              "an invalid player neither edits the command nor consumes the flag");
    }

    // --------------------------------------------------------------- EdgeJump
    {
        EdgeJumpFeature edge;
        UserCmd cmd;
        Check(!edge.Tick(cmd, true), "an unarmed EdgeJump does not fire");
        edge.armed = true;
        Check(!edge.Tick(cmd, false), "no edge means no fire");
        CheckInt(edge.fires, 0, "a refused fire is not counted");

        edge.armed = true;
        Check(edge.Tick(cmd, true), "the first edge fire logs");
        Check(cmd.Has(kInJump), "an edge fire sets IN_JUMP");
        CheckInt(edge.fires, 1, "the fire counter increments");

        for (int i = 0; i < 20; ++i)
        {
            edge.armed = true;
            edge.Tick(cmd, true);
        }
        Check(edge.fires >= kEdgeJumpLogCap, "the fire counter passes the log cap");
        edge.armed = true;
        Check(!edge.Tick(cmd, true), "past the cap the fire is silent");
    }

    // ---------------------------------------------------------------- JumpBug
    {
        JumpBugFeature bug;
        UserCmd cmd;
        cmd.Set(kInJump);
        bug.Tick(cmd, true, true, false, 0.f);
        Check(cmd.Has(kInJump) && bug.sends == 0, "an unarmed JumpBug does not run");

        bug.armed = true;
        bug.Tick(cmd, false, false, false, 200.f);
        Check(cmd.Has(kInJump) && !cmd.Has(kInDuck),
              "a successful jump keeps the command untouched");
        CheckInt(bug.sends, 1, "the send counter increments per armed tick");

        cmd.Set(kInJump);
        cmd.Clear(kInDuck);
        bug.armed = true;
        bug.Tick(cmd, false, true, false, 0.f);
        Check(cmd.Has(kInDuck), "a grounded failed jump ducks");
        Check(!cmd.Has(kInJump), "a grounded failed jump releases the jump bit");
    }

    // --------------------------------------------------------------- FakeDuck
    {
        FakeDuckFeature duck;
        UserCmd cmd;
        duck.Tick(cmd, true);
        Check(!cmd.Has(kInDuck), "a disabled FakeDuck leaves the command alone");

        duck.enabled = true;
        duck.crouchState = 0;
        duck.Tick(cmd, true);
        Check(!cmd.Has(kInDuck) && duck.bevelZeroed,
              "a crouch state below one clears the duck bit and zeroes the bevel");

        duck.crouchState = 3;
        cmd.Set(kInDuck);
        duck.Tick(cmd, true);
        Check(cmd.Has(kInDuck), "a valid crouch keeps the duck bit set");

        duck.crouchState = 0;
        cmd.Set(kInDuck);
        duck.Tick(cmd, false);
        Check(cmd.Has(kInDuck), "an invalid player skips FakeDuck");
    }

    // --------------------------------------------------------------- Airstuck
    {
        AirstuckFeature stuck;
        UserCmd cmd;
        Check(!stuck.Tick(cmd, 1000, 0.f), "a disabled Airstuck does nothing");
        CheckInt(stuck.interval, AirstuckFeature::kIntervalDefault, "the default interval is 250 ms");

        stuck.enabled = true;
        stuck.mode = 1;
        bool logged = stuck.Tick(cmd, 1000, 0.f);
        Check(logged, "the first auto tick logs because the counter starts at zero");
        CheckInt(stuck.counter, 1, "the auto tick counter increments");

        Check(!stuck.Tick(cmd, 1015, 0.f), "the second auto tick does not log");
        stuck.logCounter = 8;
        logged = stuck.Tick(cmd, 1030, 0.f);
        Check(logged, "every eighth tick logs the interval");
        CheckInt(stuck.logCounter, 9, "the log counter increments");

        AirstuckFeature growth;
        growth.enabled = true;
        growth.mode = 1;
        growth.autoMode = true;
        growth.interval = AirstuckFeature::kIntervalFloor;
        growth.haveLastZ = true;
        growth.lastZ = 100.f;
        growth.lastStamp = 5000;
        UserCmd frozen;
        frozen.forwardMove = 450.f;
        frozen.sideMove = -450.f;
        frozen.upMove = 320.f;
        frozen.buttons = 0x7ff;
        growth.Tick(frozen, 6000, 90.f);
        Check(growth.interval > AirstuckFeature::kIntervalFloor, "a slow fall grows the interval");
        CheckNear(growth.avgDrop, 2.f, 1e-4f, "the drop is mixed at 0.2 into the average");
        CheckNear(frozen.forwardMove, 0.f, 1e-6f, "stuck zeroes forwardmove");
        CheckNear(frozen.sideMove, 0.f, 1e-6f, "stuck zeroes sidemove");
        CheckNear(frozen.upMove, 0.f, 1e-6f, "stuck zeroes upmove");
        CheckInt(static_cast<int>(frozen.buttons), 0x1e1, "stuck clears the movement bits");

        AirstuckFeature capped;
        capped.enabled = true;
        capped.mode = 1;
        capped.interval = 2980;
        capped.haveLastZ = true;
        capped.lastZ = 100.f;
        capped.lastStamp = 5000;
        UserCmd c2;
        capped.Tick(c2, 9000, 99.9f);
        CheckInt(capped.interval, AirstuckFeature::kIntervalCap, "the interval never exceeds 3000");

        AirstuckFeature shrink;
        shrink.enabled = true;
        shrink.mode = 1;
        shrink.interval = 400;
        shrink.falling = true;
        shrink.avgDrop = 10.f;
        shrink.haveLastZ = true;
        shrink.lastZ = 500.f;
        shrink.lastStamp = 5000;
        UserCmd c3;
        shrink.Tick(c3, 12000, 300.f);
        CheckInt(shrink.interval, 240, "a large drop decays the interval by 0.6");
        Check(shrink.interval >= AirstuckFeature::kIntervalFloor, "the interval stays above the floor");

        AirstuckFeature manual;
        manual.enabled = true;
        manual.mode = 2;
        UserCmd c4;
        c4.forwardMove = 1.f;
        Check(!manual.Tick(c4, 1, 0.f), "a non-auto mode never logs");
        CheckNear(c4.forwardMove, 0.f, 1e-6f, "a non-auto mode still freezes the command");
    }

    // --------------------------------------------------------------- Speedhack
    {
        SpeedhackFeature speed;
        Check(speed.Tick(1.f), "the first Speedhack tick reports because the last state is -1");
        CheckInt(speed.lastState, 0, "the state starts at zero");
        Check(!speed.Tick(1.f), "an unchanged factor does not log");
        Check(speed.Tick(-1.f), "a negative factor falls back to 0.05");
        CheckNear(speed.factor, 0.05f, 1e-6f, "the low fallback is 0.05");
        Check(speed.Tick(9.f), "a factor above three is reported");
        CheckNear(speed.factor, 3.f, 1e-6f, "the high fallback is 3.0");

        SpeedhackFeature gated;
        gated.enabled = true;
        gated.held = true;
        gated.Tick(1.f);
        Check(gated.active, "both gates set means active");
        CheckInt(gated.lastState, 3, "the state packs enable and hold");
        gated.held = false;
        gated.Tick(1.f);
        Check(!gated.active, "losing the hold deactivates");
        CheckInt(gated.lastPercent, 100, "the percentage is the factor times 100");
    }

    // ----------------------------------------------------------------- MoveFix
    {
        Check(MoveFixFeature::ShouldDelegate(9, 0), "class id 9 delegates");
        Check(MoveFixFeature::ShouldDelegate(2, 2), "move type 2 delegates");
        Check(!MoveFixFeature::ShouldDelegate(2, 1), "a normal player does not delegate");

        MoveFixFeature::Move move;
        move.forward = 450.f;
        move.side = 0.f;
        Check(MoveFixFeature::FixYaw(move, 0.f, 0.f, true) == false,
              "no yaw change leaves the basis alone");

        MoveFixFeature::Move turn;
        turn.forward = 450.f;
        turn.side = 0.f;
        Check(MoveFixFeature::FixYaw(turn, 0.f, 90.f, true), "a right turn rotates the basis");
        CheckNear(turn.forward, 0.f, 1e-3f, "a 90-degree turn zeroes the forward leg");
        CheckNear(turn.side, 450.f, 1e-3f, "the old forward leg moves entirely into side");

        MoveFixFeature::Move left;
        left.forward = 450.f;
        left.side = 0.f;
        MoveFixFeature::FixYaw(left, 90.f, 0.f, true);
        CheckNear(left.side, -450.f, 1e-3f, "turning back negates the side leg");

        MoveFixFeature::Move wrap;
        wrap.forward = 450.f;
        MoveFixFeature::FixYaw(wrap, 350.f, 10.f, true);
        Check(std::fabs(wrap.forward) > 1.f, "the wrap adds 360 before mixing");
    }

    // --------------------------------------------------------------- Autostrafe
    {
        Check(!AutostrafeFeature::Gate(false, 2, 1, kInJump, 0), "a dead player is refused");
        Check(!AutostrafeFeature::Gate(true, 1, 1, kInJump, 0), "class 1 is refused");
        Check(!AutostrafeFeature::Gate(true, 2, 2, kInJump, 0), "move type above one is refused");
        Check(!AutostrafeFeature::Gate(true, 2, 1, 0, 0), "no jump in either command is refused");
        Check(AutostrafeFeature::Gate(true, 2, 1, kInJump, 0), "jump in the current command passes");
        Check(AutostrafeFeature::Gate(true, 2, 1, 0, kInJump), "jump in the previous command passes");

        const float yawRight = AutostrafeFeature::StrafeYaw(1, 0.f, 250.f, 0.f);
        CheckNear(yawRight, (1.57079633f * kStrafeScale) + 90.f, 1e-2f,
                  "a positive mode adds ninety to the scaled velocity yaw");
        const float yawLeft = AutostrafeFeature::StrafeYaw(-1, 0.f, 250.f, 0.f);
        CheckNear(yawLeft, (1.57079633f * kStrafeScale) - 90.f, 1e-2f,
                  "a negative mode subtracts ninety");
        CheckNear(AutostrafeFeature::BaseYaw(10.f, 0.f, 250.f, 33.f), 33.f, 1e-5f,
                  "below 15 u/s the view yaw is kept");
        CheckNear(AutostrafeFeature::BaseYaw(250.f, 0.f, 250.f, 33.f), 90.f, 1e-3f,
                  "above 15 u/s the velocity atan2 is scaled by 57.295776");
        CheckInt(AutostrafeFeature::NormalizeMode(4), 2,
                 "mode 4 is normalised to mode 2");

        UserCmd cardinal;
        AutostrafeFeature::SetMoveAngle(cardinal, 0.f);
        CheckNear(cardinal.forwardMove, kMoveUnit, 1e-3f, "0x1800e1c60 puts 0 degrees on +7500 forward");
        CheckNear(cardinal.sideMove, 0.f, 1e-6f, "0x1800e1c60 has no side leg at 0 degrees");
        AutostrafeFeature::SetMoveAngle(cardinal, 90.f);
        CheckNear(cardinal.forwardMove, 0.f, 1e-6f, "90 degrees drops the forward leg");
        CheckNear(cardinal.sideMove, kYawFallback, 1e-3f,
                  "90 degrees puts the negated-sin side leg on -7500");
        AutostrafeFeature::SetMoveAngle(cardinal, 45.f);
        CheckNear(cardinal.forwardMove, kMoveUnit, 1e-3f,
                  "45 degrees keeps the cos forward leg on +7500");
        CheckNear(cardinal.sideMove, kYawFallback, 1e-3f,
                  "45 degrees puts the negated-sin side leg on -7500");
        AutostrafeFeature::SetMoveAngle(cardinal, 20.f);
        CheckNear(cardinal.forwardMove, kMoveUnit, 1e-3f,
                  "20 degrees quantises down to the forward axis");
        CheckNear(cardinal.sideMove, 0.f, 1e-6f, "20 degrees quantises away the side leg");
    }

    // -------------------------------------------------------------- addresses
    {
        Check(BunnyHopFeature::kVfunc02 == 0x1800c2e90ULL, "BunnyHop keeps 0x1800c2e90");
        Check(EdgeJumpFeature::kVfunc02 == 0x1800c3bc0ULL, "EdgeJump keeps 0x1800c3bc0");
        Check(JumpBugFeature::kVfunc02 == 0x180106b80ULL, "JumpBug keeps 0x180106b80");
        Check(FakeDuckFeature::kVfunc01 == 0x180105310ULL, "FakeDuck keeps 0x180105310");
        Check(AirstuckFeature::kVfunc02 == 0x18013fa40ULL, "Airstuck keeps 0x18013fa40");
        Check(SpeedhackFeature::kVfunc02 == 0x180140920ULL, "Speedhack keeps 0x180140920");
        Check(MoveFixFeature::kVfunc02 == 0x1800e2040ULL, "MoveFix keeps 0x1800e2040");
        Check(AutostrafeFeature::kVfunc01 == 0x1800e1280ULL, "Autostrafe keeps 0x1800e1280");

        CheckNear(kNinety, 90.f, 1e-6f, "the basis constant is 90 degrees (0x18038110c)");
        CheckNear(kFullTurn, 360.f, 1e-6f, "the wrap constant is 360 (0x18038120c)");
        CheckNear(kVelocityEps, 4.f, 1e-6f, "the jump velocity floor is 4 (0x180380e9c)");
        CheckNear(kDuckTimeMax, 128.f, 1e-6f, "the duck-time ceiling is 128 (0x180381148)");
        CheckNear(kStrafeScale, 57.295776f, 1e-5f,
                  "the strafe atan2 scale is 57.295776 (0x1803810bc)");
        CheckNear(kMoveUnit, 7500.f, 1e-6f, "the command multiplier is 7500 (0x180381298)");
        CheckNear(kYawFallback, -7500.f, 1e-6f, "the negative multiplier is -7500 (0x18038143c)");
        CheckInt(AirstuckFeature::kIntervalDefault, 250, "the airstuck interval default is 250 ms");
        CheckInt(AirstuckFeature::kIntervalStep, 25, "the airstuck step is 25 ms");
        CheckInt(AirstuckFeature::kIntervalCap, 3000, "the airstuck cap is 3000 ms");
        CheckNear(AirstuckFeature::kDecay, 0.6f, 1e-6f, "the decay is 0.6 (0x180380ae4)");
        CheckNear(AirstuckFeature::kDropGain, 0.2f, 1e-6f, "the drop gain is 0.2 (0x180380a3c)");
    }

    std::printf("\n%s (%d failure%s)\n",
                g_failures == 0 ? "MOVEMENT SELFTEST PASS" : "MOVEMENT SELFTEST FAIL",
                g_failures, g_failures == 1 ? "" : "s");
    return g_failures == 0 ? 0 : 1;
}
