#pragma once
// Features::HVH::LagComp::LagCompFeature  (Stage 3.8)
// vtable 0x33cad0, slot 1 = 0x1800c0db0.
//
// The body abuses interpolation by rewriting two client convars and restoring
// the values it saved on the way in:
//
//   * config root 0x2d8f695138585a77
//       enable 0xe0c32a7e4da84b2e  (bool)
//       mode   0x80da9dc943fdf3cc  (int, ==1 arms the abuse)
//   * fields: +8 applied, +9 haveSaved, +0x14 attempts,
//             +0x20 savedInterp, +0x24 savedRatio
//   * writes cl_interp = 0.5 (0x180380ac0), cl_interp_ratio = 5.0 (0x180380f00)
//   * restores the saved pair on disable and logs both transitions.
//
// The convar writes go through 0x1800c0920, the convar lookup through
// 0x180016fb0. The failure string is at 0x18034c310, 97 bytes plus NUL:
//
//   [LAGCOMP] interp cvars refuse to change after 8 attempts – giving up until
//   the toggle is moved\n
//
// The dash is UTF-8 e2 80 94. Its only reference is the lea at 0x1800c1034
// (FUN_180014410 call at 0x1800c103b), reached when the attempt counter has
// reached 8 and either convar write failed.

#include <cstdint>

namespace sf {
namespace hvh {

inline constexpr uint64_t kLagCompRoot    = 0x2d8f695138585a77ULL;
inline constexpr uint64_t kLagCompEnable  = 0xe0c32a7e4da84b2eULL;
inline constexpr uint64_t kLagCompModeKey = 0x80da9dc943fdf3ccULL;

inline constexpr float kAbuseInterp      = 0.5f;  // 0x180380ac0
inline constexpr float kAbuseRatio       = 5.0f;  // 0x180380f00
inline constexpr int   kMaxAttempts      = 8;     // attempts < 8 guard at +0x14
inline constexpr uint64_t kFailureString = 0x18034c310ULL;
inline constexpr int   kFailureStringLen = 97;
inline constexpr uint64_t kFailureSite   = 0x1800c0db0ULL; // owning body
inline constexpr uint64_t kFailureLea    = 0x1800c1034ULL; // lea rcx, [0x18034c310]
inline constexpr char kFailureText[] =
    "[LAGCOMP] interp cvars refuse to change after 8 attempts \xE2\x80\x94 "
    "giving up until the toggle is moved\n";

struct LagCompFeature
{
    static constexpr int kMaxAttempts = ::sf::hvh::kMaxAttempts;
    static constexpr uint64_t kVtableRva = 0x33cad0;
    static constexpr uint64_t kVfunc01   = 0x1800c0db0;
    static constexpr uint64_t kConvarLookup = 0x180016fb0;
    static constexpr uint64_t kConvarWrite  = 0x1800c0920;

    bool enabled = false;        // config
    int  mode = 0;               // config
    bool applied = false;        // +8
    bool haveSaved = false;      // +9
    int  attempts = 0;           // +0x14
    float savedInterp = 0.f;     // +0x20
    float savedRatio = 0.f;      // +0x24

    // Stand-in for the convar manager: reports whether the two writes succeeded.
    struct Convars
    {
        float interp = 0.f;
        float ratio = 0.f;
        bool writable = true;
    };

    enum class Result { Idle, SwitchedOn, SwitchedOff, Pending, Failed };

    // `con` is the stand-in convar table; `fired` mirrors the log calls.
    Result Tick(Convars& con, bool tarEnabled, int tarMode)
    {
        enabled = tarEnabled;
        mode = tarMode;

        const bool desired = enabled && mode == 1;
        if (desired == applied)
            return Result::Idle;

        if (!desired)
        {
            con.interp = savedInterp;
            con.ratio = savedRatio;
            haveSaved = false;
            attempts = 0;
            applied = false;
            return Result::SwitchedOff;
        }

        if (!haveSaved)
        {
            savedInterp = con.interp;
            savedRatio = con.ratio;
            haveSaved = true;
        }

        if (attempts > kMaxAttempts - 1)
            return Result::Idle;
        ++attempts;

        con.interp = kAbuseInterp;
        con.ratio = kAbuseRatio;
        if (!con.writable)
        {
            if (attempts < kMaxAttempts)
                return Result::Pending;
            return Result::Failed;   // logs the string at 0x18034c310
        }

        attempts = 0;
        applied = true;
        return Result::SwitchedOn;
    }
};

} // namespace hvh
} // namespace sf
