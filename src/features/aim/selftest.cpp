// Self-test for the aim subsystem (Stage 3.5).
//
// These cases exercise behaviour, not declarations:
//   1. the angular metric and the sticky-target threshold,
//   2. the gate chain, one refusal per rule,
//   3. scoring keys, the locked-target discount and the same-group discount,
//   4. list caps (10 entities, 3 records) and best-key selection,
//   5. FOV accept/reject and the out-of-range refusal,
//   6. smoothing: monotone convergence, snap inside the snap distance, and the
//      dependence of the step size on the smoothing value,
//   7. triggerbot: delay in ticks from milliseconds, waiting, fire, burst
//      cooldown, weapon block and disable,
//   8. the small helpers (FOV clamp, hitgroup names, vtable constants).

#include <cmath>
#include <cstdio>
#include <cstring>

#include "aim_feature.h"
#include "smoothing.h"
#include "targeting.h"
#include "triggerbot.h"

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

void CheckStr(const char* actual, const char* expected, const char* what)
{
    const bool ok = actual != nullptr && std::strcmp(actual, expected) == 0;
    std::printf("%s  %s (got \"%s\")\n", ok ? "PASS" : "FAIL", what, actual ? actual : "(null)");
    if (!ok)
        ++g_failures;
}

using namespace sf;
using namespace sf::aim;

} // namespace

int main()
{
    // ---------------------------------------------------------- angle metric
    {
        const QAngle a(0.f, 0.f);
        CheckNear(AngularDistance(a, a), 0.f, 1e-4f, "identical angles score zero");
        CheckNear(AngularDistance(QAngle(0.f, 0.f), QAngle(0.f, 10.f)), 10.f, 1e-3f,
                  "ten degrees of yaw scores ten");
        CheckNear(AngularDistance(QAngle(0.f, 0.f), QAngle(10.f, 0.f)), 10.f, 1e-3f,
                  "ten degrees of pitch scores ten");
        Check(AngularDistance(QAngle(0.f, 179.f), QAngle(0.f, -179.f)) < 2.1f,
              "the metric takes the short way around the wrap");
    }

    // ------------------------------------------------------ sticky threshold
    {
        ViewFrame view;
        view.origin = Vector(0.f, 0.f, 0.f);
        view.forward = Vector(1.f, 0.f, 0.f);
        const float centred = MaximumAngularError(view, Vector(10.f, 0.f, 0.f),
                                                  Vector(10.f, 0.f, 0.f),
                                                  Vector(10.f, 0.f, 0.f));
        CheckNear(centred, 0.f, 1e-4f, "0x1800ce630 scores a point on the view axis as zero");
        const float ninety = MaximumAngularError(view, Vector(10.f, 10.f, 0.f),
                                                 Vector(10.f, 10.f, 0.f),
                                                 Vector(10.f, 10.f, 0.f));
        CheckNear(ninety, 45.f, 1e-3f, "0x1800ce630 scores a 45-degree offset as 45");

        // The segment correction can only add a candidate to the max; with a
        // segment whose endpoints are 45 degrees off the axis the endpoint
        // score stays 45 even though the closest interior point is 0.
        const float segment = MaximumAngularError(view, Vector(10.f, -10.f, 0.f),
                                                  Vector(10.f, 10.f, 0.f),
                                                  Vector(10.f, 10.f, 0.f));
        CheckNear(segment, 45.f, 1e-3f,
                  "0x1800ce630 keeps the worst of the three scored points");
        ViewFrame invalid;
        invalid.valid = false;
        Check(MaximumAngularError(invalid, Vector(1.f, 0.f, 0.f), Vector(1.f, 0.f, 0.f),
                                  Vector(1.f, 0.f, 0.f)) == kMetricInvalid,
              "an invalid view frame yields the FLT_MAX rejection score");
        CheckNear(HitboxThreshold(20.f, true, true), 21.5f, 1e-4f,
                  "0x1800c4900 returns the capped sticky threshold, not penetration");
        CheckNear(HitboxThreshold(20.f, false, true), 20.f, 1e-4f,
                  "the hitbox threshold is the plain FOV for a non-locked target");
    }

    // ------------------------------------------------------ sticky threshold
    CheckNear(StickyThreshold(5.f, false, true), 5.f, 1e-4f,
              "a non-locked candidate gets the plain FOV threshold");
    CheckNear(StickyThreshold(5.f, true, false), 5.f, 1e-4f,
              "a locked candidate without the window gets no bonus");
    CheckNear(StickyThreshold(5.f, true, true), 5.75f, 1e-4f,
              "a locked candidate gets a 15% bonus inside the window");
    CheckNear(StickyThreshold(20.f, true, true), 21.5f, 1e-4f,
              "the bonus is capped at 1.5 degrees");
    CheckNear(StickyThreshold(179.5f, true, true), 180.f, 1e-4f,
              "the threshold never exceeds 180 degrees");
    Check(StickyWindowOpen(0.5f, 0.6f) && !StickyWindowOpen(0.5f, 0.9f),
          "the sticky window is 0.2 degrees wide");
    Check(!StickyWindowOpen(1.f, 0.5f), "the sticky window requires a non-decreasing error");

    // -------------------------------------------------------------- gates
    {
        GateInputs good;
        good.index = 4;
        good.health = 100;
        good.team = 2;
        good.localTeam = 3;
        GateConfig cfg;
        Check(CheckTarget(good, cfg) == GateRefusal::None, "a healthy enemy passes the gate chain");

        GateInputs self = good; self.selfEntity = true;
        Check(CheckTarget(self, cfg) == GateRefusal::NullOrSelf, "the local player is refused");

        GateInputs bad = good; bad.badRead = true;
        Check(CheckTarget(bad, cfg) == GateRefusal::BadRead, "an unreadable entity is refused");

        GateInputs idx = good; idx.index = 0;
        Check(CheckTarget(idx, cfg) == GateRefusal::IndexOutOfRange,
              "index 0 is refused");
        GateInputs high = good; high.index = 66; high.maxClients = 65;
        Check(CheckTarget(high, cfg) == GateRefusal::IndexOutOfRange,
              "an index above the client count is refused");
        GateInputs edge = good; edge.index = 65; edge.maxClients = 65;
        Check(CheckTarget(edge, cfg) == GateRefusal::None,
              "the boundary index equals maxClients and is allowed (0x1800c5030 uses <)");

        GateInputs dead = good; dead.health = 0;
        Check(CheckTarget(dead, cfg) == GateRefusal::Dead, "a dead player is refused");

        GateInputs team = good; team.team = 3;
        Check(CheckTarget(team, cfg) == GateRefusal::TeamMismatch, "a teammate is refused");

        GateInputs nodraw = good; nodraw.flags = 0x40;
        Check(CheckTarget(nodraw, cfg) == GateRefusal::NoDraw,
              "EF_NODRAW (0x40) is refused");

        GateInputs ignored = good; ignored.inIgnoreList = true;
        Check(CheckTarget(ignored, cfg) == GateRefusal::Ignored, "the ignore list is honoured");

        GateInputs ext = good; ext.blockedByExtension = true;
        Check(CheckTarget(ext, cfg) == GateRefusal::Extension,
              "an extension callback can veto a target");

        GateConfig permissive;
        permissive.teamCheck = false;
        Check(CheckTarget(team, permissive) == GateRefusal::None,
              "disabling the team check lets a teammate through");
        Check(CheckTarget(nodraw, permissive) == GateRefusal::NoDraw,
              "the NODRAW rule is independent of the team rule");
    }

    // -------------------------------------------------------------- scoring
    {
        HitboxTable table;
        ScoreContext ctx;
        ctx.view = QAngle(0.f, 0.f);
        ctx.fov = 10.f;
        ctx.recordHitboxes = true;

        Candidate near;
        near.entity = reinterpret_cast<const void*>(1);
        near.angles = QAngle(0.f, 2.f);
        near.distance = 100.f;
        near.hitbox = 6;
        const float nearScore = ScoreCandidate(ctx, near, &table, 42);
        CheckNear(nearScore, 2.f, 1e-3f, "a 2-degree candidate scores 2");
        CheckNear(table.slot[6].score, 2.f, 1e-3f, "the hitbox table records the score");
        CheckInt(table.slot[6].tick, 42, "the hitbox table records the tick");

        ScoreContext pointCtx;
        pointCtx.pointMetric = true;
        pointCtx.frame.origin = Vector(0.f, 0.f, 0.f);
        pointCtx.frame.forward = Vector(1.f, 0.f, 0.f);
        Candidate pointCand;
        pointCand.hasPoints = true;
        pointCand.points[0] = Vector(10.f, 10.f, 0.f);
        pointCand.points[1] = Vector(10.f, 10.f, 0.f);
        pointCand.points[2] = Vector(10.f, 10.f, 0.f);
        CheckNear(ScoreCandidate(pointCtx, pointCand, nullptr, 0), 45.f, 1e-3f,
                  "ScoreCandidate can use the real 0x1800ce630 point metric");

        Candidate far = near;
        far.entity = reinterpret_cast<const void*>(2);
        far.angles = QAngle(0.f, 6.f);
        ScoreCandidate(ctx, far, &table, 42);
        Check(near.key < far.key, "the closer candidate orders first under the angle key");

        ScoreContext distanceCtx = ctx;
        distanceCtx.distanceKey = true;
        Candidate dNear = near; dNear.distance = 50.f;
        Candidate dFar = near; dFar.distance = 500.f;
        dFar.entity = reinterpret_cast<const void*>(3);
        ScoreCandidate(distanceCtx, dNear, nullptr, 0);
        ScoreCandidate(distanceCtx, dFar, nullptr, 0);
        Check(dNear.key < dFar.key, "the distance key orders by range");

        ScoreContext locked = ctx;
        locked.lockedTarget = near.entity;
        Candidate same = near;
        ScoreCandidate(locked, same, nullptr, 0);
        Candidate other = far;
        ScoreCandidate(locked, other, nullptr, 0);
        CheckNear(same.key, near.key * kLockedKeyScale, 1e-3f,
                  "the locked target's key is discounted by 0.85");

        ScoreContext grouped = ctx;
        grouped.previousGroupTarget = far.entity;
        grouped.previousGroup = 5;
        Candidate revisit = far;
        revisit.group = 5;
        ScoreCandidate(grouped, revisit, nullptr, 0);
        const float plain = far.key;
        CheckNear(revisit.key, plain * kSameGroupScale, 1e-3f,
                  "revisiting the same hitbox group is discounted by 0.95");

        Check(AcceptCandidate(ctx, near), "a candidate inside the FOV is accepted");
        Candidate outside = near;
        outside.angles = QAngle(0.f, 40.f);
        ScoreCandidate(ctx, outside, nullptr, 0);
        Check(!AcceptCandidate(ctx, outside), "a candidate outside the FOV is rejected");
    }

    // ----------------------------------------------------------- list caps
    {
        TargetList list;
        int added = 0;
        for (int i = 0; i < 40; ++i)
        {
            Candidate c;
            c.entity = reinterpret_cast<const void*>(static_cast<intptr_t>(1000 + i));
            c.key = static_cast<float>(i);
            if (list.Add(c))
                ++added;
        }
        CheckInt(added, kMaxEntities, "the list holds at most ten distinct entities");
        Check(list.Best() != nullptr && list.Best()->key == 0.f, "the lowest key wins");

        TargetList records;
        Candidate c;
        c.entity = reinterpret_cast<const void*>(static_cast<intptr_t>(7));
        int rec = 0;
        for (int i = 0; i < 5; ++i)
            if (records.Add(c))
                ++rec;
        CheckInt(rec, kMaxRecords, "a single entity contributes at most three records");
    }

    // ------------------------------------------------------------- selection
    {
        TargetList list;
        Candidate inside;
        inside.entity = reinterpret_cast<const void*>(static_cast<intptr_t>(11));
        inside.angles = QAngle(0.f, 1.f);
        inside.distance = 120.f;
        list.Add(inside);

        Candidate outside = inside;
        outside.entity = reinterpret_cast<const void*>(static_cast<intptr_t>(12));
        outside.angles = QAngle(0.f, 30.f);
        list.Add(outside);

        AimRequest request;
        request.view = QAngle(0.f, 0.f);
        request.eye = Vector(0.f, 0.f, 0.f);
        request.fov = 5.f;
        request.smoothing = 0.f;
        request.maxRange = 8192.f;

        Smoother smoother;
        const AimSolution solution = RunAim(request, list, smoother, true, nullptr, 1);
        Check(solution.haveTarget, "a target inside the FOV is selected");
        Check(solution.entity == inside.entity, "the nearer-angle candidate wins");
        CheckNear(solution.angles.yaw, 1.f, 1e-4f,
                  "the instant path writes the target angles unchanged");

        AimRequest outOfRange = request;
        outOfRange.fov = 45.f;
        outOfRange.maxRange = 50.f;
        const AimSolution refused = RunAim(outOfRange, list, smoother, true, nullptr, 1);
        Check(!refused.haveTarget, "a target beyond the weapon range is dropped");

        AimRequest smoothRequest = request;
        smoothRequest.smoothing = 66.f;
        smoothRequest.deltaSeconds = 1.f / 66.f;
        Smoother slow;
        const AimSolution partial = RunAim(smoothRequest, list, slow, true, nullptr, 1);
        Check(partial.haveTarget, "the smoothed path still reports the target");
        Check(partial.angles.yaw > 0.f && partial.angles.yaw < 1.f,
              "one smoothed frame moves partway toward the target");
    }

    // ------------------------------------------------------------ smoothing
    {
        Smoother smoother;
        const QAngle current(0.f, 0.f);
        const QAngle desired(0.f, 30.f);

        float previousError = 30.f;
        bool monotone = true;
        QAngle state = current;
        for (int i = 0; i < 400; ++i)
        {
            state = smoother.Apply(state, desired, 66.f, 1.f / 66.f, kSnapDefault, i == 0);
            const float error = std::fabs(NormalizeAngle(desired.yaw - state.yaw));
            if (!(error <= previousError + 1e-4f))
                monotone = false;
            previousError = error;
        }
        Check(monotone, "every smoothed frame moves toward the target, never away");
        Check(previousError < 30.f, "smoothing makes progress over 400 frames");

        // Snap inside the snap distance.
        Smoother snap;
        const QAngle close = snap.Apply(QAngle(0.f, 10.f), QAngle(0.f, 10.01f), 66.f,
                                       1.f / 66.f, kSnapDefault, true);
        CheckNear(close.yaw, 10.01f, 1e-4f, "inside the snap distance the aim snaps exactly");

        // A larger smoothing value moves less in one frame.
        Smoother fast;
        Smoother gentle;
        const QAngle fastStep = fast.Apply(current, desired, 66.f, 1.f / 66.f, kSnapDefault, true);
        const QAngle gentleStep = gentle.Apply(current, desired, 200.f, 1.f / 66.f, kSnapDefault, true);
        Check(std::fabs(gentleStep.yaw) < std::fabs(fastStep.yaw),
              "a higher smoothing value produces a smaller step");

        // Pitch wraps into (-180, 180].
        Smoother wrap;
        const QAngle wrapped = wrap.Apply(QAngle(170.f, 0.f), QAngle(-170.f, 0.f), 66.f,
                                          1.f / 66.f, kSnapDefault, true);
        Check(wrapped.pitch >= -180.f && wrapped.pitch <= 180.f,
              "pitch is wrapped into the engine range");

        // Frame step clamps.
        CheckNear(FrameStep(0.f), kMinStep, 1e-6f, "a zero frame delta clamps to the floor");
        CheckNear(FrameStep(1.f), kMaxStep, 1e-6f, "a one-second delta clamps to the ceiling");
    }

    // ------------------------------------------------------------ triggerbot
    {
        TriggerState state;
        TriggerConfig cfg;
        cfg.delayMs = 45;                       // 45 / 15 = 3 ticks
        cfg.randomize = false;
        TriggerRandom random;

        const void* enemy = reinterpret_cast<const void*>(static_cast<intptr_t>(0xabc));

        CheckInt(DelayTicks(0), 1, "a zero delay is clamped to one tick");
        CheckInt(DelayTicks(45), 3, "forty-five milliseconds is three ticks");
        CheckInt(DelayTicks(15), 1, "fifteen milliseconds is one tick");

        Check(OnTick(state, cfg, nullptr, false, true, random) == TriggerResult::Idle,
              "no confirmed hit means idle");
        Check(OnTick(state, cfg, enemy, true, true, random) == TriggerResult::Waiting,
              "the first held tick waits");
        Check(OnTick(state, cfg, enemy, true, true, random) == TriggerResult::Waiting,
              "the second held tick waits");
        Check(OnTick(state, cfg, enemy, true, true, random) == TriggerResult::Fired,
              "the third held tick fires");
        CheckInt(state.burst, 1, "firing increments the burst counter");

        // Losing the target resets the hold and the burst.
        OnTick(state, cfg, nullptr, false, true, random);
        CheckInt(state.holdTicks, 0, "losing the target resets the hold timer");
        CheckInt(state.burst, 0, "losing the target resets the burst counter");

        // Weapon gate.
        TriggerState blocked;
        for (int i = 0; i < 2; ++i)
            OnTick(blocked, cfg, enemy, true, true, random);
        Check(OnTick(blocked, cfg, enemy, true, false, random) == TriggerResult::WeaponBlocked,
              "a weapon that cannot fire blocks the shot");
        CheckInt(blocked.burst, 0, "a blocked shot does not count toward the burst");

        // Disabled.
        TriggerConfig off = cfg;
        off.enabled = false;
        TriggerState disabled;
        Check(OnTick(disabled, off, enemy, true, true, random) == TriggerResult::Disabled,
              "the feature can be disabled");

        // Burst limit and cooldown when randomisation is on.
        TriggerConfig burstCfg;
        burstCfg.delayMs = 15;
        burstCfg.randomize = true;
        TriggerState burst;
        TriggerRandom burstRandom;
        int fired = 0;
        bool sawCooldown = false;
        for (int i = 0; i < 200; ++i)
        {
            const TriggerResult r = OnTick(burst, burstCfg, enemy, true, true, burstRandom);
            if (r == TriggerResult::Fired)
                ++fired;
            if (r == TriggerResult::Cooldown)
                sawCooldown = true;
        }
        Check(fired > 0, "the triggerbot fires when a target is held");
        Check(sawCooldown, "the burst limit eventually produces a cooldown");
        Check(fired < 200, "cooldowns suppress some ticks");

        // Switching targets re-arms the burst limit and clears the hold. A long
        // delay is used so the switch tick cannot fire and clear the evidence.
        TriggerConfig slowSwitch;
        slowSwitch.delayMs = 150;               // ten ticks
        TriggerState switching;
        OnTick(switching, slowSwitch, enemy, true, true, burstRandom);
        OnTick(switching, slowSwitch, enemy, true, true, burstRandom);
        const void* other = reinterpret_cast<const void*>(static_cast<intptr_t>(0xdef));
        OnTick(switching, slowSwitch, other, true, true, burstRandom);
        CheckInt(switching.holdTicks, 1, "a new target restarts the hold timer");
        CheckInt(switching.burst, 0, "a new target clears the burst counter");
        Check(switching.target == other, "the triggerbot tracks the new target");
    }

    // --------------------------------------------------------------- helpers
    {
        CheckNear(SanitizeFov(-5.f), 0.f, 1e-6f, "a negative FOV becomes zero");
        CheckNear(SanitizeFov(0.f), 0.f, 1e-6f, "a zero FOV stays zero");
        CheckNear(SanitizeFov(90.f), 90.f, 1e-6f, "a normal FOV is preserved");
        CheckNear(SanitizeFov(400.f), 180.f, 1e-6f, "a FOV above 180 is clamped");

        CheckStr(HitgroupName(6), "HEAD", "hitgroup 6 is HEAD");
        CheckStr(HitgroupName(3), "stomach", "hitgroup 3 is stomach");
        CheckStr(HitgroupName(5), "chest", "hitgroup 5 is chest");
        CheckStr(HitgroupName(0xd), "arm", "hitgroup 13 is arm");
        CheckStr(HitgroupName(0x15), "leg", "hitgroup 21 is leg");
        CheckStr(HitgroupName(0x17), "center", "hitgroup 23 is center");
        CheckStr(HitgroupName(1), "?", "an unknown hitgroup prints ?");

        CheckInt(kMaxHitboxes, 0x81, "the hitbox table covers 0x81 slots");
        CheckInt(AimbotFeature::kPlayerSlots, 64, "the aimbot keeps 64 player records");
        Check(AimbotFeature::kVfunc16 == 0x1800cb010ULL &&
              RageAimFeature::kVfunc16 == 0x1800d64c0ULL &&
              TriggerbotFeature::kVfunc02 == 0x1800e2580ULL,
              "the three feature bodies keep their observed addresses");

        RageAimFeature::TeardownState teardown;
        bool written = true;
        Check(!RageAimFeature::WriteStash(teardown, &written),
              "a fresh teardown writes nothing");
        teardown.stashed = 1;
        Check(RageAimFeature::WriteStash(teardown, &written) && written,
              "a stashed value is written once");
        Check(!RageAimFeature::WriteStash(teardown, &written),
              "the stash is consumed after the write");
        teardown.lagCompensationChanged = true;
        Check(RageAimFeature::RestoreLagCompensation(teardown),
              "the lag-compensation restore fires when it was changed");
        Check(!RageAimFeature::RestoreLagCompensation(teardown),
              "the restore is not repeated");
    }

    std::printf("\n%s (%d failure%s)\n",
                g_failures == 0 ? "AIM SELFTEST PASS" : "AIM SELFTEST FAIL",
                g_failures, g_failures == 1 ? "" : "s");
    return g_failures == 0 ? 0 : 1;
}
