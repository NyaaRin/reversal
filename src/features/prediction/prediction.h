#pragma once
// Seed / prediction subsystem (Stage 3.3).
//
// Reconstructed from:
//   0x180024f00  prediction begin   (re/dump/decompile/0x180024f00_FUN_180024f00.c, _INDEX.tsv L345)
//   0x180025360  prediction end     (0x180025360_FUN_180025360.c)
//   0x180015e50  command seed       (shared with seed_chain.h)
//   0x18001dfb0  m_nTickBase        (netvar walk: DT_BasePlayer::m_nTickBase)
//
// The cheat does not merely read the engine's prediction RNG; it reseeds it from
// the command number so a shot's spread is a pure function of the command. That
// requires writing `m_pPredictionRandomSeed` inside client.dll, which it locates
// by byte pattern rather than by offset, and it must put the original value back
// before the engine runs its own prediction.

#include <cstdint>
#include <cstring>

#include "../seed/seed_chain.h"

namespace sf {
namespace prediction {

// ---------------------------------------------------------------- constants
// Byte pattern the hook scans for in client.dll. 0x180024f00 builds this string
// and passes 0x2f to the string constructor: 47 is the length of the *text*
// (16 signature bytes rendered as "XX " pairs, 47 characters), not a byte count.
//
//   48 85 C9        test rcx, rcx
//   75 0B           jne  +0xB
//   C7 05 ?? ?? ?? ?? FF FF FF FF   mov dword ptr [rip+disp], -1
//   C3              ret
inline constexpr const char* kSeedPattern =
    "48 85 C9 75 0B C7 05 ?? ?? ?? ?? FF FF FF FF C3";
inline constexpr int kSeedPatternTextLength = 0x2f;   // 47 characters of pattern text
inline constexpr int kSeedPatternBytes = 16;          // 3 + 2 + 2 + 4 + 4 + 1
inline constexpr const char* kSeedModule = "client.dll";
inline constexpr int kSeedModuleLength = 10;          // "client.dll" without the NUL

// The resolved pointer is `match + 0xf + *(int32*)(match + 7)`: the body reads
// the RIP displacement at +7 and adds the length of the instruction that ends at
// +0xf.
inline constexpr int kSeedDispInstruction = 7;
inline constexpr int kSeedDispBase = 0xf;

// Mask applied to the seed before it reaches the engine: `& 0x7fffffff`.
// Used for both m_pPredictionRandomSeed and vstdlib!RandomSeed.
inline constexpr uint32_t kSeedMask = 0x7fffffffu;   // 0x180024f00

// Tick extrapolation bound. The body rejects a command gap whose (gap - 1)
// exceeds 0x3e = 62, i.e. anything 64 ticks or more away.
inline constexpr uint32_t kMaxTickGap = 0x3eu;       // 62

// The float the hook writes into the patched slot: 0x4e6e6b28 = 1.0e9f.
inline constexpr uint32_t kPatchedFloatBits = 0x4e6e6b28u;

// Step 10 is a config-gated patch, not an integrity check. The two lookups go
// through 0x180241610, a 36-byte nested-map lookup: FUN_180241a30 finds a node
// and 0x180241610 returns `*node + 0x28`; 0x1801fcfc0 / 0x1802029c0 are the
// std::any bool and int casts. No hashing takes place.
inline constexpr uint64_t kConfigLookup        = 0x180241610ULL;
inline constexpr uint64_t kConfigBoolCast      = 0x1801fcfc0ULL;
inline constexpr uint64_t kConfigIntCast       = 0x1802029c0ULL;
inline constexpr uint64_t kBacktrackGateRoot   = 0x237bcfbdef3b6800ULL;
inline constexpr uint64_t kBacktrackGateKey    = 0x402819404e703058ULL; // reused by 3.5/3.7/3.8/3.9
inline constexpr uint64_t kPatchRoot           = 0x93fd561a96ab0c67ULL; // reused by 3.4/3.5/3.6
inline constexpr uint64_t kPatchEnableKey      = 0xfc192b983f5bff62ULL;

// ------------------------------------------------------------------- state
// The engine block the hook saves and restores (DAT_1803fa608 + 0x10..0x28).
struct PredictionState
{
    double frameTime = 0.0;        // +0x10, rewritten to predictedTick * intervalPerTick
    uint32_t tickIntervalMs = 0;   // +0x18, cached as a float by the body
    double intervalPerTick = 0.0;  // +0x28, seconds per tick
};

// The globals the hook owns, named after the addresses in 0x180024f00.
struct HookGlobals
{
    bool active = false;        // DAT_1803de065
    bool patchActive = false;   // DAT_1803de066
    bool seedWritten = false;   // DAT_1803de064
    bool cmdStored = false;     // implied by _DAT_1803de050 != 0
    uint32_t savedSeed = 0;     // DAT_1803de060
    int lastServerTick = 0;     // DAT_1803de06c
    int lastCommand = 0;        // DAT_1803de070
    int predictedTick = 0;      // DAT_1803de068
};

// --------------------------------------------------------------- interface
// Resolves the byte pattern to the m_pPredictionRandomSeed address.
//
// The real hook calls a byte scanner over a module image; this stays a pure
// function so the scan can be tested without a process. `image` must hold at
// least kSeedPatternLength bytes at `matchOffset`.
inline uint32_t* ResolveSeedPointer(uint8_t* image, size_t matchOffset)
{
    if (image == nullptr)
        return nullptr;
    int32_t displacement = 0;
    std::memcpy(&displacement, image + matchOffset + kSeedDispInstruction,
                sizeof(displacement));
    return reinterpret_cast<uint32_t*>(image + matchOffset + kSeedDispBase + displacement);
}

// Command number -> server tick, with the body's 62-tick bound.
//
//   if (serverTick == lastServerTick && lastCommand < commandNumber)
//       predicted = serverTick + (commandNumber - lastCommand)   // extrapolate
//       if ((commandNumber - lastCommand) - 1 > 62) predicted = serverTick
//   else
//       predicted = serverTick
//
// On the extrapolating path the body deliberately leaves `lastServerTick` and
// `lastCommand` untouched, so repeated calls measure the gap from the last
// *server-confirmed* command. This function returns the predicted tick and
// updates the bookkeeping exactly as the body does.
inline int MapCommandToTick(int serverTick, int commandNumber,
                            int& lastServerTick, int& lastCommand)
{
    int predicted = serverTick;
    int nextServerTick = serverTick;
    int nextCommand = commandNumber;

    if (serverTick == lastServerTick && lastCommand < commandNumber)
    {
        const int gap = commandNumber - lastCommand;
        predicted = serverTick + gap;

        nextServerTick = lastServerTick;   // iVar6 keeps the old tick
        nextCommand = lastCommand;         // iVar7 keeps the old command

        if (kMaxTickGap < static_cast<uint32_t>(gap - 1))
            predicted = serverTick;        // gap of 64+ ticks: fall back
    }

    lastServerTick = nextServerTick;
    lastCommand = nextCommand;
    return predicted;
}

// ---------------------------------------------------------------- the hook
class PredictionHook
{
public:
    // `seedSlot` is the resolved m_pPredictionRandomSeed address; `seedFn` is
    // vstdlib!RandomSeed, which is handed the same masked value.
    PredictionHook(PredictionState* state, uint32_t* seedSlot,
                   void (*seedFn)(uint32_t) = nullptr)
        : m_state(state), m_seedSlot(seedSlot), m_seedFn(seedFn)
    {
    }

    // 0x180024f00
    void Begin(int commandNumber, int serverTick)
    {
        if (m_globals.active)
            End();

        m_globals.patchActive = false;
        m_globals.cmdStored = true;
        m_activeCommand = commandNumber;

        if (m_state != nullptr)
        {
            m_savedFrameTime = m_state->frameTime;
            m_savedTickInterval = m_state->tickIntervalMs;
        }
        m_globals.active = true;

        const uint32_t seed = seed::CommandSeed(static_cast<uint32_t>(commandNumber)) & kSeedMask;

        if (m_seedSlot != nullptr)
        {
            m_globals.savedSeed = *m_seedSlot;
            m_globals.seedWritten = true;
            *m_seedSlot = seed;
        }
        if (m_seedFn != nullptr)
            m_seedFn(seed);

        m_globals.predictedTick =
            MapCommandToTick(serverTick, commandNumber,
                             m_globals.lastServerTick, m_globals.lastCommand);

        if (m_state != nullptr)
        {
            m_state->frameTime =
                static_cast<double>(m_globals.predictedTick) * m_state->intervalPerTick;
            m_state->tickIntervalMs = static_cast<uint32_t>(m_state->intervalPerTick);
        }

        m_seeded = seed;
    }

    // 0x180025360
    void End()
    {
        m_globals.patchActive = false;

        if (m_globals.seedWritten && m_seedSlot != nullptr)
        {
            *m_seedSlot = m_globals.savedSeed;
            m_globals.seedWritten = false;
        }

        if (m_globals.active && m_state != nullptr)
        {
            m_state->frameTime = m_savedFrameTime;
            m_state->tickIntervalMs = m_savedTickInterval;
        }

        m_globals.active = false;
        m_globals.cmdStored = false;
        m_activeCommand = 0;
        m_seeded = 0;
    }

    bool active() const { return m_globals.active; }
    int predictedTick() const { return m_globals.predictedTick; }
    uint32_t lastSeed() const { return m_seeded; }
    int activeCommand() const { return m_activeCommand; }
    const HookGlobals& globals() const { return m_globals; }

private:
    PredictionState* m_state = nullptr;
    uint32_t* m_seedSlot = nullptr;
    void (*m_seedFn)(uint32_t) = nullptr;

    HookGlobals m_globals;
    double m_savedFrameTime = 0.0;
    uint32_t m_savedTickInterval = 0;
    int m_activeCommand = 0;
    uint32_t m_seeded = 0;
};

// ------------------------------------------------------------- MoveHelper
// Interface the hook shares with the engine's movement code. Resolved by RTTI
// (0x180017150 resolves `.?AVCMoveHelperClient@@` and logs
// `[IFACE] g_pMoveHelper = %p (CMoveHelperClient, RTTI-verified)`), stored in
// DAT_1803fa5a0. The prediction block calls vtable+0x10 (begin) and +0x18
// (end) on DAT_1803fa658, which is the same object family.
struct MoveHelper
{
    const char* rttiName = ".?AVCMoveHelperClient@@";
    const char* logLine =
        "[IFACE] g_pMoveHelper = %p (CMoveHelperClient, RTTI-verified)";
    uint32_t beginSlot = 0x10;   // vtable offset called when prediction starts
    uint32_t endSlot = 0x18;     // vtable offset called when prediction is restored
    bool resolved = false;
};

inline MoveHelper& GlobalMoveHelper()
{
    static MoveHelper helper;
    return helper;
}

} // namespace prediction
} // namespace sf
