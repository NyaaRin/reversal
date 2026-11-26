#pragma once
// The engine user command, as the movement features touch it (Stage 3.7).
//
// Offsets are the ones every tick body reads or writes:
//   +0x0c  view angles (pitch, yaw, roll)     — MoveFix reads, Autostrafe writes
//   +0x14  forwardmove                        — Airstuck zeroes
//   +0x18  sidemove                           — MoveFix mixes
//   +0x1c  upmove                             — Airstuck zeroes
//   +0x20  buttons                            — BunnyHop/EdgeJump/JumpBug/FakeDuck
//
// Button bits observed as immediates:
//   IN_JUMP  = 0x2   (BunnyHop clears `& ~2`, EdgeJump sets `| 2`, JumpBug `>> 1`)
//   IN_DUCK  = 0x4   (FakeDuck `| 4` / `& ~4`, JumpBug `>> 2`)
//   Airstuck clears 0x0000061e (mask `& 0xfffff9e1`), which is IN_JUMP, IN_DUCK,
//   IN_FORWARD and IN_BACK together.

#include <cstdint>

namespace sf {
namespace movement {

inline constexpr uint32_t kInJump    = 0x2;    // 1 << 1
inline constexpr uint32_t kInDuck    = 0x4;    // 1 << 2
inline constexpr uint32_t kMoveMask  = 0x0000061e; // Airstuck's clear mask complement
inline constexpr uint32_t kBothJumpDuck = 0x6;

// Stand-in for the engine's CUserCmd. Only the fields the recovered bodies touch
// are modelled; `buttons` is authoritative for the tests.
struct UserCmd
{
    float pitch = 0.f;
    float yaw = 0.f;
    float roll = 0.f;
    float forwardMove = 0.f;   // +0x14 (float view; stored as int in the engine)
    float sideMove = 0.f;      // +0x18
    float upMove = 0.f;        // +0x1c
    uint32_t buttons = 0;      // +0x20

    bool Has(uint32_t bit) const { return (buttons & bit) != 0; }
    void Set(uint32_t bit) { buttons |= bit; }
    void Clear(uint32_t bit) { buttons &= ~bit; }
    void ClearMask(uint32_t mask) { buttons &= mask; }
};

// The engine stores move components as scaled integers; the recovered code writes
// `*(undefined8 *)(cmd + 0x14) = 0` and `*(undefined4 *)(cmd + 0x1c) = 0`, i.e.
// both move legs and the up leg zeroed in one go.
inline void ZeroMovement(UserCmd& cmd)
{
    cmd.forwardMove = 0.f;
    cmd.sideMove = 0.f;
    cmd.upMove = 0.f;
}

} // namespace movement
} // namespace sf
