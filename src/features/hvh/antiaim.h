#pragma once
// Features::HVH::AntiAim::AntiAimFeature  (Stage 3.8)
// vtable 0x33dc68, slot 1 = 0x1800bdd70 (5-byte thunk), slot 2 = 0x1800bdd80.
//
// Gate chain in the slot-2 body, in order:
//   1. local entity resolves and is alive          0x18001c330
//   2. 0x1800bda90(entity, command)                — per-command bookkeeping
//   3. 0x1800b8160()                               — armed
//   4. class id == 2 and move type <= 1            0x18001e0a0 / 0x18001fcf0
//   5. config root 0x237bcfbdef3b6800 with key 0x402819404e703058 must be OFF
//      (the same pair Stage 3.5 and Stage 3.7 read; routed through the shared
//      gate helper instead of a second copy)
//   6. the attack-cooldown path 0x1800bd830 / 0x1800bd880
//
// Config keys under 0x2d8f695138585a77:
//   pitch mode 0xd2ceb89ade8cdec     (0..4)
//   yaw mode   0x398cc31e81e2db51    (0..9)
//   jitter     0xeddd7019415d29f4    (degrees, float)
//   amplitude  0xa93407069741444e    (float)
//
// Pitch: 1 -> +89 (0x180381108), 2 -> -89 (0x180381410),
//        3 -> +89/-89 by the attack-command bit, 4 -> 0, else unchanged.
//
// Yaw (base yaw = last view yaw at +0xc):
//   1 -> base + 180 (0x180381188)
//   2 -> base + 180 + jitter/2 * sign
//   3 -> feature +8 + clamp((int)amplitude, 1, 18); also stores feature +8.
//        The affected command yaw is command +0xc / command[3].
//   4 -> base + 90  (0x18038110c)
//   5 -> base - 90
//   6 -> base + 180 + alternating jitter/2
//   7, 8, 9 -> the body-offset path:
//        offset = clamp((int)key 0x423a90540ddbc421, 0, 60) * 0.5
//        dir    = +1 for desync mode 1, -1 for mode 2; modes 0/3 consult
//                 0x1800bd7e0 (key 0x52e8e7a5c772ca6c), then the cone probe
//                 0x1800bd570, falling back to the 12-tick alternator
//                 0x1800bd320 (key 0x2e7b87382f9b768); mirror negates.
//        yaw    = normalize(base + 180 + clock(-60..60) + body offset)
//        The direction step is 45 degrees (0x180381094). Mode 9 is the one
//        yaw mode exempt from the post-switch desync override; 7 and 8 are
//        not. The body-offset gate is DAT_1803db430 (points at DAT_1803da694,
//        cleared by FakeDuck/FakeLag).
//   The static YawFor below is the display-level basis only; it cannot carry
//   the body clock/offset because those come from 0x1800bd8d0 at runtime.

#include <cstdint>

namespace sf {
namespace hvh {

inline constexpr uint64_t kAntiAimRoot   = 0x2d8f695138585a77ULL;
inline constexpr uint64_t kGateRoot      = 0x237bcfbdef3b6800ULL; // shared 3.5/3.7 gate
inline constexpr uint64_t kGateKey       = 0x402819404e703058ULL;
inline constexpr uint64_t kKeyPitchMode  = 0xd2ceb89ade8cdecULL;
inline constexpr uint64_t kKeyYawMode    = 0x398cc31e81e2db51ULL;
inline constexpr uint64_t kKeyJitter     = 0xeddd7019415d29f4ULL;
inline constexpr uint64_t kKeyAmplitude  = 0xa93407069741444eULL;

inline constexpr float kPitchUp   = 89.f;   // 0x180381108
inline constexpr float kPitchDown = -89.f;  // 0x180381410
inline constexpr float kHalfTurn  = 180.f;  // 0x180381188
inline constexpr float kQuarter   = 90.f;   // 0x18038110c
inline constexpr float kJitterMin = -60.f;  // 0x180381408
inline constexpr float kJitterMax = 60.f;   // 0x1803810c8

inline constexpr uint64_t kKeyBodyOffset      = 0x423a90540ddbc421ULL;
inline constexpr uint64_t kKeyDirectionToggle = 0x52e8e7a5c772ca6cULL;
inline constexpr uint64_t kKeyDirectionMode   = 0x2e7b87382f9b768ULL;
inline constexpr uint64_t kDirectionToggle    = 0x1800bd7e0ULL;
inline constexpr uint64_t kDirectionCone      = 0x1800bd570ULL;
inline constexpr uint64_t kDirectionAlternate = 0x1800bd320ULL;
inline constexpr float    kDirectionStep      = 45.f; // 0x180381094
inline constexpr int      kYawMode3Min        = 1;
inline constexpr int      kYawMode3Max        = 18;
inline constexpr int      kBodyJitterMin      = 0;
inline constexpr int      kBodyJitterMax      = 60;   // cmp $0x3c
inline constexpr int      kConfigJitterMin    = 10;   // cmp $0xa (modes 2/6)
inline constexpr int      kConfigJitterMax    = 180;  // cmp $0xb4
inline constexpr uint64_t kBodyYawGate        = 0x1803db430ULL;
inline constexpr uint64_t kBodyYawGateByte    = 0x1803da694ULL;

// The desync state block, 0x180409cc8 .. 0x180409d00. Widths are the stores
// and loads in 0x1800bda90 / 0x1800bd8d0 / 0x1800bdd80 / 0x1800c15f0.
inline constexpr uint64_t kDesyncBase       = 0x180409cc8ULL;
inline constexpr uint64_t kDesyncBody       = 0x180409ce8ULL;
inline constexpr int kDesyncBodySize        = 12;
inline constexpr int kOffSkips             = 0x00; // int32
inline constexpr int kOffYawLatch          = 0x04; // float32
inline constexpr int kOffSavedBody         = 0x08; // 12-byte BodyDesync copy
inline constexpr int kOffRetook            = 0x14; // int32
inline constexpr int kOffMode              = 0x18; // int32
inline constexpr int kOffApplied           = 0x1c; // int32
inline constexpr int kOffBody              = 0x20; // BodyDesync
inline constexpr int kOffSteps             = 0x2c; // int32
inline constexpr int kOffFirstBody         = 0x30; // byte
inline constexpr int kOffBodyLatch         = 0x31; // byte
inline constexpr int kOffMirror            = 0x32; // byte
inline constexpr int kOffAttackTicks       = 0x34; // int32
inline constexpr int kOffYawPending        = 0x38; // byte
inline constexpr int kOffBodyTarget        = 0x00; // float32
inline constexpr int kOffBodyShown         = 0x04; // float32
inline constexpr int kOffBodyInit          = 0x08; // byte
inline constexpr int kOffBodyNoClamp       = 0x09; // byte
inline constexpr int kWidthSkips           = 4;
inline constexpr int kWidthYawLatch        = 4;
inline constexpr int kWidthSavedBody       = 12;
inline constexpr int kWidthRetook          = 4;
inline constexpr int kWidthMode            = 4;
inline constexpr int kWidthApplied         = 4;
inline constexpr int kWidthSteps           = 4;
inline constexpr int kWidthFirstBody       = 1;
inline constexpr int kWidthBodyLatch       = 1;
inline constexpr int kWidthMirror          = 1;
inline constexpr int kWidthAttackTicks     = 4;
inline constexpr int kWidthYawPending      = 1;

struct AntiAimFeature
{
    static constexpr uint64_t kVtableRva = 0x33dc68;
    static constexpr uint64_t kVfunc01   = 0x1800bdd70;
    static constexpr uint64_t kVfunc02   = 0x1800bdd80;
    static constexpr uint64_t kBookkeep  = 0x1800bda90;
    static constexpr uint64_t kArmed     = 0x1800b8160;
    static constexpr uint64_t kCooldown  = 0x1800bd830;
    static constexpr uint64_t kRetook    = 0x1800bd880;
    static constexpr uint64_t kClockKind = 0x1800bd8a0;
    static constexpr uint64_t kDesyncSrc = 0x1800bd8d0;

    bool armed = false;
    int  pitchMode = 0;
    int  yawMode = 0;
    float jitter = 0.f;
    float amplitude = 0.f;
    int  cmdNumber = 0;          // DAT_1803e8774 last seen
    int  attackTicks = 0;        // DAT_180409cdc
    int  totalTicks = 0;         // DAT_180409cfc

    struct Angles { float pitch = 0.f; float yaw = 0.f; };

    static bool Gate(bool entityAlive, int classId, int moveType, bool gateKeyOn)
    {
        if (!entityAlive)
            return false;
        if (classId != 2 || moveType > 1)
            return false;
        return !gateKeyOn;   // the pair is an opt-out: key on means bail
    }

    static float PitchFor(int mode, bool attackBit)
    {
        switch (mode)
        {
        case 1: return kPitchUp;
        case 2: return kPitchDown;
        case 3: return attackBit ? kPitchUp : kPitchDown;
        case 4: return 0.f;
        default: return 0.f;   // mode 0 leaves the command pitch alone
        }
    }

    // `halfJitter` is the body's (int)(jitter * 0.5); `phase` is the alternating
    // bit used by mode 6 (counter / period & 1).
    static float YawFor(int mode, float baseYaw, float halfJitter,
                        bool phase, bool mirror)
    {
        switch (mode)
        {
        case 1:
            return baseYaw + kHalfTurn;
        case 2:
            return baseYaw + kHalfTurn + (mirror ? halfJitter : -halfJitter);
        case 4:
            return baseYaw + kQuarter;
        case 5:
            return baseYaw - kQuarter;
        case 6:
            return baseYaw + kHalfTurn + (phase ? halfJitter : -halfJitter);
        case 3:
        case 7:
        case 8:
        case 9:
            // Static basis only: mode 3 adds its clamped amplitude to feature +8,
            // and modes 7-9 add the runtime body offset (see the block comment).
            return baseYaw + kHalfTurn;
        default:
            return baseYaw;
        }
    }

    // Mode 3 walks the stored base yaw by a clamped 1..18 degrees per command
    // (0x1800be3fe). Unlike modes 7-9 this needs no body clock.
    static float Mode3Yaw(float storedYaw, float amplitude)
    {
        int step = static_cast<int>(amplitude);
        if (step < kYawMode3Min)
            step = kYawMode3Min;
        else if (step > kYawMode3Max)
            step = kYawMode3Max;
        return storedYaw + static_cast<float>(step);
    }

    // The cooldown log fires every 64th tick.
    bool TickCooldownLog() { return (++totalTicks & 0x3f) == 0; }

    static float ClampJitter(float value)
    {
        if (value < kJitterMin)
            return kJitterMin;
        if (value > kJitterMax)
            return kJitterMax;
        return value;
    }
};

} // namespace hvh
} // namespace sf
