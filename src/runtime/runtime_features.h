#pragma once
// Command-stage feature composition for the reconstruction runtime.
//
// Every helper below is reconstructed in src/features and is exercised by the
// subsystem self-tests; this header is the thin live adapter that turns engine
// snapshots into the inputs those helpers already understand. It is deliberately
// engine-free so the runtime self-test can drive it with synthetic targets.

#include "config.h"
#include "gmod_sdk.h"

#include "../features/aim/aim_feature.h"
#include "../features/aim/triggerbot.h"
#include "../features/backtrack/records.h"
#include "../features/hvh/antiaim.h"
#include "../features/movement/features.h"
#include "../features/shot/shot_pipeline.h"

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <vector>

namespace sf {
namespace runtime {

struct TargetInfo
{
    void* entity = nullptr;
    int index = 0;
    gmod::Vector origin{};
    gmod::Vector eye{};
    gmod::Vector velocity{};
    int team = 0;
    int health = 0;
    bool alive = false;
    bool dormant = false;
    bool noDraw = false;
    bool godmode = false;
    double simTime = 0.0;
};

struct CommandInputs
{
    gmod::CUserCmd* command = nullptr;
    bool alive = false;
    bool onGround = false;
    float verticalSpeed = 0.f;
    int localTeam = 0;
    gmod::Vector localEye{};
    gmod::Vector localVelocity{};
    bool attackHeld = false;
    bool jumpHeld = false;
    bool previousJumpHeld = false;
    int classId = 2;             // recovered player class gate
    int moveType = 0;            // recovered move-type gate
    double simTime = 0.0;
    std::vector<TargetInfo> targets;

    // Optional live world trace. The runtime installs the recovered
    // EngineTraceClient003 path here; the self-test can supply a synthetic
    // trace or leave it null to exercise the angular fallback.
    using TraceRayFn = bool (*)(void*, const gmod::Vector&, const gmod::Vector&,
                                gmod::TraceHit&);
    TraceRayFn traceRay = nullptr;
    void* traceContext = nullptr;
};

struct FeatureStats
{
    int aimTicks = 0;
    int triggerFires = 0;
    int strafeTicks = 0;
    int antiaimTicks = 0;
    int nospreadShots = 0;
    int backtrackRecords = 0;
    int bhopTicks = 0;
};

// Applies a punch-angle multiplier once per new server value. The frame stage
// runs every rendered frame, so multiplying the live value unconditionally
// compounds the scale (0.5 becomes 0.25, then 0.125, ...). Remembering the last
// value we wrote lets repeated frames pass through while a fresh server punch is
// scaled exactly once.
inline bool ScalePunchOnce(gmod::Vector& punch, float scale,
                           gmod::Vector& lastWritten, bool& hasLast)
{
    if (!std::isfinite(punch.x) || !std::isfinite(punch.y) || !std::isfinite(punch.z))
        return false;
    if (!(scale >= 0.f))
        scale = 0.f;
    if (scale > 1.f)
        scale = 1.f;
    if (scale == 1.f)
        return false;
    if (hasLast && std::fabs(punch.x - lastWritten.x) < 1e-6f &&
        std::fabs(punch.y - lastWritten.y) < 1e-6f &&
        std::fabs(punch.z - lastWritten.z) < 1e-6f)
        return false;

    punch.x *= scale;
    punch.y *= scale;
    punch.z *= scale;
    lastWritten = punch;
    hasLast = true;
    return true;
}

inline sf::Vector ToSf(const gmod::Vector& value)
{
    return sf::Vector(value.x, value.y, value.z);
}

inline gmod::Vector ToGmod(const sf::Vector& value)
{
    return gmod::Vector(value.x, value.y, value.z);
}

inline sf::QAngle ToSf(const gmod::QAngle& value)
{
    return sf::QAngle(value.pitch, value.yaw, value.roll);
}

inline gmod::QAngle ToGmod(const sf::QAngle& value)
{
    return gmod::QAngle(value.pitch, value.yaw, value.roll);
}

class FeatureRuntime
{
public:
    void Reset()
    {
        aimSmoother = {};
        triggerState = {};
        triggerRandom = {};
        triggerCooldown = {};
        backtrackFeature = {};
        tracks.clear();
        fakeView = {};
        fakeViewActive = false;
        aimView = {};
        aimViewActive = false;
        lastAimTarget = nullptr;
        lastAimTargetHealth = 0;
        stopUntilRelease = false;
        stats = {};
    }

    void OnLevelInit() { Reset(); }
    void OnLevelShutdown() { Reset(); }

    void OnCreateMove(const Config& config, const CommandInputs& in)
    {
        if (in.command == nullptr || !config.enabled || !in.alive)
            return;

        gmod::CUserCmd& command = *in.command;

        if (config.bhop)
        {
            const int jump = static_cast<int>(gmod::kInJump);
            if ((command.buttons & jump) != 0)
            {
                if (in.onGround)
                    command.buttons |= jump;
                else if (in.verticalSpeed > 0.f)
                    command.buttons |= jump;
                else
                    command.buttons &= ~jump;
            }
            ++stats.bhopTicks;
        }

        if (config.autostrafe)
            RunAutostrafe(command, in, config);

        if (config.backtrack)
            CaptureBacktrack(in, command, config);

        if (config.aimbot)
            RunAimbot(command, in, config);
        else
            aimViewActive = false;

        // Triggerbot must see the real aim angles, not the anti-aim spoof.
        // Running anti-aim first made the crosshair test use the fake view and
        // silently suppressed the triggerbot whenever both features were on.
        if (config.triggerbot)
            RunTriggerbot(command, in, config);

        if (config.antiaim)
            RunAntiAim(command, in, config);
        else
            fakeViewActive = false;

        // Triggerbot sets IN_ATTACK, so nospread must run after it or the
        // triggerbot's shots never receive spread compensation.
        if (config.nospread)
            RunNospread(command, in, config);

        (void)in.jumpHeld;
    }

    bool FakeViewAngles(gmod::QAngle& out) const
    {
        if (!fakeViewActive)
            return false;
        out = fakeView;
        return true;
    }

    // Assist mode writes the smoothed aim angles back to the engine view. Silent
    // and Rage only edit the command, so their local camera stays untouched.
    bool AimViewAngles(gmod::QAngle& out) const
    {
        if (!aimViewActive)
            return false;
        out = aimView;
        return true;
    }

    const FeatureStats& Stats() const { return stats; }

private:
    struct Track
    {
        void* entity = nullptr;
        std::vector<backtrack::Record> records;
    };

    static constexpr double kMaxBacktrackAge = 0.25; // seconds

    aim::Smoother aimSmoother;
    aim::TriggerState triggerState;
    aim::TriggerRandom triggerRandom;
    aim::TriggerConfig triggerCooldown;
    backtrack::BacktrackFeature backtrackFeature;
    std::vector<Track> tracks;
    gmod::QAngle fakeView;
    bool fakeViewActive = false;
    gmod::QAngle aimView;
    bool aimViewActive = false;
    const void* lastAimTarget = nullptr;
    int lastAimTargetHealth = 0;
    bool stopUntilRelease = false;
    FeatureStats stats;

    void RunAutostrafe(gmod::CUserCmd& command, const CommandInputs& in,
                       const Config& config)
    {
        const bool gate = movement::AutostrafeFeature::Gate(
            in.alive, in.classId, in.moveType,
            static_cast<uint32_t>(command.buttons),
            in.previousJumpHeld ? movement::kInJump : 0u);
        if (!gate)
            return;

        const float speed = std::sqrt(in.localVelocity.x * in.localVelocity.x +
                                      in.localVelocity.y * in.localVelocity.y);
        if (speed <= movement::kMinStrafeSpeed)
            return;

        const int mode = movement::AutostrafeFeature::NormalizeMode(config.autostrafeMode);
        if (mode == 0)
        {
            // WASD mode keeps the player's view and only normalizes the strafe
            // leg. mousedx is the recovered direction source; fall back to the
            // command's own side input for raw-input clients that leave it zero.
            const float direction = command.mousedx != 0
                ? static_cast<float>(command.mousedx)
                : command.sidemove;
            if (std::fabs(direction) < 0.01f)
                return;
            command.sidemove = direction > 0.f ? 450.f : -450.f;
            ++stats.strafeTicks;
            return;
        }

        // Viewangle mode puts the view 90 degrees off the velocity and pushes
        // the side leg along the velocity. The previous implementation wrote
        // the velocity yaw itself, which made the side move perpendicular to
        // the velocity and decelerated the player.
        float yaw = movement::AutostrafeFeature::StrafeYaw(
            mode, in.localVelocity.x, in.localVelocity.y, command.viewangles.yaw, speed);
        while (yaw - command.viewangles.yaw > 180.f)
            yaw -= 360.f;
        while (yaw - command.viewangles.yaw < -180.f)
            yaw += 360.f;

        command.forwardmove = 0.f;
        command.sidemove = mode >= 0 ? 450.f : -450.f;
        command.viewangles.yaw = yaw;
        ++stats.strafeTicks;
    }

    void CaptureBacktrack(const CommandInputs& in, const gmod::CUserCmd& command,
                          const Config& config)
    {
        for (const TargetInfo& target : in.targets)
        {
            if (target.entity == nullptr || !target.alive ||
                (config.ignoreDormant && target.dormant) ||
                (config.ignoreInvisible && target.noDraw) ||
                (config.ignoreGod && target.godmode))
                continue;

            Track* track = FindTrack(target.entity);
            if (track == nullptr)
            {
                Track fresh;
                fresh.entity = target.entity;
                tracks.push_back(std::move(fresh));
                track = &tracks.back();
            }

            backtrack::Record record;
            record.simTime = target.simTime;
            record.x = target.origin.x;
            record.y = target.origin.y;
            record.z = target.origin.z;
            record.tick = command.command_number;
            record.valid = true;

            const int slot = target.index > 0 ? (target.index & 0xff) : 1;
            if (backtrackFeature.Capture(slot, record))
            {
                track->records.push_back(record);
                if (track->records.size() > 32)
                    track->records.erase(track->records.begin());
                ++stats.backtrackRecords;
            }
        }
    }

    Track* FindTrack(void* entity)
    {
        for (Track& track : tracks)
            if (track.entity == entity)
                return &track;
        return nullptr;
    }

    const Track* FindTrack(void* entity) const
    {
        for (const Track& track : tracks)
            if (track.entity == entity)
                return &track;
        return nullptr;
    }

    gmod::Vector BacktrackPoint(const TargetInfo& target, double simTime,
                                double maxAge) const
    {
        const Track* track = FindTrack(target.entity);
        if (track != nullptr)
        {
            for (auto it = track->records.rbegin(); it != track->records.rend(); ++it)
            {
                const double age = simTime - it->simTime;
                // Skip the record captured for this same command; a backtrack
                // aim point must come from an earlier tick.
                if (age > 1e-4 && age <= maxAge)
                    return gmod::Vector(it->x, it->y, it->z) +
                           (target.eye - target.origin);
            }
        }
        return target.eye;
    }

    void RunAimbot(gmod::CUserCmd& command, const CommandInputs& in,
                   const Config& config)
    {
        aimViewActive = false;
        if (config.stopOnKill && stopUntilRelease)
        {
            if (!in.attackHeld)
            {
                stopUntilRelease = false;
                lastAimTarget = nullptr;
                lastAimTargetHealth = 0;
            }
            else
                return;
        }
        if (config.stopOnKill && lastAimTarget != nullptr)
        {
            const TargetInfo* current = nullptr;
            for (const TargetInfo& target : in.targets)
                if (target.entity == lastAimTarget)
                {
                    current = &target;
                    break;
                }
            // A target disappearing from the list is not proof of a kill: the
            // player may have switched targets or left the FOV. Only an
            // observed zero-health target latches stop-on-kill.
            if (lastAimTargetHealth > 0 && current != nullptr && current->health <= 0)
                stopUntilRelease = true;
        }
        // Triggerbot's automatic fire is an aim request too; otherwise the
        // aimbot waits for an IN_ATTACK that the triggerbot cannot issue until
        // the aimbot has already acquired the target.
        if (!config.aimAlways && !in.attackHeld && !config.triggerbot)
            return;
        // Anti-AC humanization: update the aim every other command instead of
        // writing the exact target angle on every tick.
        if (config.antiAc && config.antiAcRate > 1 &&
            (command.command_number % config.antiAcRate) == 0)
            return;

        aim::TargetList list;
        for (const TargetInfo& target : in.targets)
        {
            if (target.entity == nullptr || !target.alive ||
                (config.ignoreDormant && target.dormant) ||
                (config.ignoreInvisible && target.noDraw) ||
                (config.ignoreGod && target.godmode))
                continue;
            if (!config.aimTeam && in.localTeam > 0 && target.team == in.localTeam)
                continue;

            const double backtrackAge = std::clamp(
                static_cast<double>(config.backtrackTime), 0.05, 0.50);
            const gmod::Vector point = config.backtrack
                ? BacktrackPoint(target, in.simTime, backtrackAge)
                : target.eye;
            const sf::Vector delta = ToSf(point) - ToSf(in.localEye);
            const float distance = std::sqrt(delta.LengthSqr());
            if (!(distance > 1.f) || distance > aim::kRangeLimit)
                continue;

            aim::Candidate candidate;
            candidate.entity = target.entity;
            candidate.angles = sf::VectorAngles(delta);
            candidate.distance = distance;
            candidate.health = static_cast<float>(target.health);
            candidate.hitbox = 6;      // eye point: head group
            candidate.group = 6;
            list.Add(candidate);
        }

        if (list.entries.empty())
            return;

        aim::AimRequest request;
        request.view = ToSf(command.viewangles);
        request.eye = ToSf(in.localEye);
        request.fov = config.aimMode == 2 ? 180.f : config.aimFov;
        request.smoothing = config.aimMode == 2
            ? 0.f
            : (config.aimMode == 1 ? std::max(config.aimSmooth, 8.f) : config.aimSmooth);
        request.deltaSeconds = 1.f / 66.f;
        request.maxRange = aim::kRangeLimit;
        request.targetPriority = config.targetPriority;
        request.silent = config.aimMode != 1;

        aim::HitboxTable table;
        const aim::AimSolution solution = aim::RunAim(
            request, list, aimSmoother, true, &table, command.command_number);
        if (!solution.haveTarget)
            return;

        if (config.stopOnKill)
        {
            const TargetInfo* current = nullptr;
            for (const TargetInfo& target : in.targets)
                if (target.entity == solution.entity)
                {
                    current = &target;
                    break;
                }
            if (lastAimTarget == solution.entity && lastAimTargetHealth > 0 &&
                current != nullptr && current->health <= 0)
                stopUntilRelease = true;
            lastAimTarget = solution.entity;
            lastAimTargetHealth = current != nullptr ? current->health : 0;
        }

        command.viewangles = ToGmod(solution.angles);
        if (config.aimMode == 1)
        {
            aimView = command.viewangles;
            aimViewActive = true;
        }
        ++stats.aimTicks;
    }

    void RunAntiAim(gmod::CUserCmd& command, const CommandInputs& in,
                    const Config& config)
    {
        const bool attack = (command.buttons & static_cast<int>(gmod::kInAttack)) != 0;
        float pitch = command.viewangles.pitch;
        if (config.antiaimPitch != 0)
            pitch = hvh::AntiAimFeature::PitchFor(config.antiaimPitch, attack);

        const float halfJitter = hvh::AntiAimFeature::ClampJitter(config.antiaimJitter) * 0.5f;
        const bool phase = (command.command_number & 1) != 0;
        float baseYaw = command.viewangles.yaw;
        if (config.antiaimYaw == 3)
        {
            // Mode 3 stores and walks its own base yaw at feature +8. Reuse the
            // published fake view as that store so the walk survives between
            // commands instead of restarting from the real view every tick.
            if (!fakeViewActive)
                fakeView.yaw = baseYaw;
            baseYaw = fakeView.yaw;
        }
        float yaw = hvh::AntiAimFeature::YawFor(config.antiaimYaw, baseYaw,
                                                halfJitter, phase, false);
        if (config.antiaimYaw == 3)
            yaw = hvh::AntiAimFeature::Mode3Yaw(baseYaw, config.antiaimAmplitude);
        else if (config.antiaimYaw >= 7 && config.antiaimYaw <= 9)
        {
            // The recovered body path uses a 12-tick alternator when the
            // live body clock is unavailable. Offset is clamped to 0..60 and
            // halved; mode 7 steps positive, 8 negative, 9 alternates.
            const float bodyOffset =
                std::clamp(config.antiaimBodyOffset, 0.f, 60.f) * 0.5f;
            const bool clockPhase = ((command.command_number / 12) & 1) != 0;
            const float clock = clockPhase ? 60.f : -60.f;
            float direction = 1.f;
            if (config.antiaimYaw == 8)
                direction = -1.f;
            else if (config.antiaimYaw == 9)
                direction = clockPhase ? -1.f : 1.f;
            yaw = baseYaw + 180.f + clock + direction * bodyOffset;
        }

        yaw = gmod::NormalizeYaw(yaw);
        if (pitch > 89.f)
            pitch = 89.f;
        else if (pitch < -89.f)
            pitch = -89.f;

        command.viewangles.pitch = pitch;
        command.viewangles.yaw = yaw;
        fakeView = command.viewangles;
        fakeViewActive = true;
        ++stats.antiaimTicks;
        (void)in;
    }

    void RunNospread(gmod::CUserCmd& command, const CommandInputs& in,
                     const Config& config)
    {
        if ((command.buttons & static_cast<int>(gmod::kInAttack)) == 0 ||
            command.command_number < 1)
            return;

        weapon::WeaponProfile profile;
        profile.baseName = config.weaponBackend.c_str();
        profile.spread = config.weaponSpread;
        profile.inaccuracy = config.weaponInaccuracy;

        const weapon::ShotOutcome outcome = weapon::FireShot(
            profile, ToSf(command.viewangles), command.command_number,
            static_cast<uint32_t>(in.onGround ? 1u : 0u));
        if (!outcome.valid || !outcome.compensated)
            return;

        command.viewangles = ToGmod(outcome.command);
        ++stats.nospreadShots;
    }

    void RunTriggerbot(gmod::CUserCmd& command, const CommandInputs& in,
                       const Config& config)
    {
        const TargetInfo* hit = nullptr;
        float best = config.triggerFov;
        for (const TargetInfo& target : in.targets)
        {
            if (target.entity == nullptr || !target.alive ||
                (config.ignoreDormant && target.dormant) ||
                (config.ignoreInvisible && target.noDraw) ||
                (config.ignoreGod && target.godmode))
                continue;
            if (!config.aimTeam && in.localTeam > 0 && target.team == in.localTeam)
                continue;

            const double backtrackAge = std::clamp(
                static_cast<double>(config.backtrackTime), 0.05, 0.50);
            const gmod::Vector point = config.backtrack
                ? BacktrackPoint(target, in.simTime, backtrackAge)
                : target.eye;
            const sf::Vector delta = ToSf(point) - ToSf(in.localEye);
            if (!(delta.LengthSqr() > 1.f))
                continue;
            const float error = aim::AngularDistance(ToSf(command.viewangles),
                                                     sf::VectorAngles(delta));
            if (error <= best)
            {
                best = error;
                hit = &target;
            }
        }

        // 0x1800e2580 traces from the eye along the command view before it
        // accepts a target. When the live EngineTraceClient003 interface is
        // available it replaces the angular-only confirmation; if the trace
        // says the ray hit the world or a different entity, the trigger does
        // not fire even though the target is inside the FOV cone. An absent
        // interface keeps the recovered angular fallback.
        if (in.traceRay != nullptr && in.traceContext != nullptr)
        {
            sf::Vector forward;
            sf::AngleVectors(ToSf(command.viewangles), &forward);
            const gmod::Vector end = in.localEye +
                ToGmod(forward * static_cast<float>(aim::kTraceRange));
            gmod::TraceHit traceHit;
            if (in.traceRay(in.traceContext, in.localEye, end, traceHit))
            {
                hit = nullptr;
                if (traceHit.entity != nullptr && !traceHit.startSolid &&
                    traceHit.fraction < 1.f)
                {
                    for (const TargetInfo& target : in.targets)
                    {
                        if (target.entity != traceHit.entity || !target.alive ||
                            (config.ignoreDormant && target.dormant) ||
                            (config.ignoreInvisible && target.noDraw) ||
                            (config.ignoreGod && target.godmode))
                            continue;
                        if (!config.aimTeam && in.localTeam > 0 &&
                            target.team == in.localTeam)
                            continue;
                        hit = &target;
                        break;
                    }
                }
            }
        }

        triggerCooldown.enabled = config.triggerbot;
        triggerCooldown.randomize = config.triggerRandomize;
        triggerCooldown.delayMs = config.triggerDelay;

        const aim::TriggerResult result = aim::OnTick(
            triggerState, triggerCooldown, hit != nullptr ? hit->entity : nullptr,
            hit != nullptr, true, triggerRandom);
        if (result == aim::TriggerResult::Fired)
        {
            command.buttons |= static_cast<int>(gmod::kInAttack);
            ++stats.triggerFires;
        }
    }
};

} // namespace runtime
} // namespace sf