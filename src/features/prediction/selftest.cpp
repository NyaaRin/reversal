// Self-test for the seed/prediction subsystem (Stage 3.3).
//
// Proves what 0x180024f00 and 0x180025360 do:
//   1. the seed written to m_pPredictionRandomSeed is CommandSeed & 0x7fffffff,
//      and the same value goes to vstdlib!RandomSeed,
//   2. the pattern resolves to the address the body computes
//      (match + 0xf + *(int32*)(match + 7)),
//   3. the tick extrapolation and its 62-tick bound behave as the body does,
//      including leaving the bookkeeping untouched on the extrapolating path,
//   4. End() puts back the original seed and engine time fields.

#include <cmath>
#include <cstdio>
#include <cstring>

#include "../seed/seed_chain.h"
#include "prediction.h"

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

void CheckU32(uint32_t actual, uint32_t expected, const char* what)
{
    const bool ok = actual == expected;
    std::printf("%s  %s (got 0x%08x, want 0x%08x)\n", ok ? "PASS" : "FAIL", what, actual, expected);
    if (!ok)
        ++g_failures;
}

// Stands in for vstdlib!RandomSeed so the seeded value can be observed.
uint32_t g_seedFnValue = 0;
void CaptureSeed(uint32_t value) { g_seedFnValue = value; }

} // namespace

int main()
{
    using namespace sf;
    using namespace sf::prediction;

    // ------------------------------------------------------- seed derivation
    const uint32_t expected = seed::PredictionSeed(1000);
    CheckU32(expected, seed::CommandSeed(1000) & 0x7fffffffu,
             "prediction seed is the 31-bit masked command seed");
    Check((expected & 0x80000000u) == 0u, "prediction seed fits in 31 bits");

    // --------------------------------------------------------- pattern shape
    {
        // The body passes 0x2f to the string constructor: that is the length of
        // the pattern *text*, which renders kSeedPatternBytes signature bytes as
        // "XX " pairs. Both numbers are checked so the distinction cannot drift.
        int bytes = 0;
        for (const char* p = kSeedPattern; *p != '\0'; ++p)
            if (*p == ' ')
                ++bytes;
        ++bytes;
        CheckInt(bytes, kSeedPatternBytes, "seed pattern has 16 signature bytes");
        CheckInt(static_cast<int>(std::strlen(kSeedPattern)), kSeedPatternTextLength,
                 "seed pattern text is 0x2f characters, the length the body passes");
        Check(std::strlen(kSeedModule) == static_cast<size_t>(kSeedModuleLength),
              "seed module name length matches the literal passed to the scanner");
    }

    // ------------------------------------------------------- pointer resolve
    {
        uint8_t image[64] = {};
        const size_t match = 8;
        // The body reads a 32-bit displacement at match+7 and adds match+0xf.
        const int32_t disp = 0x20;
        std::memcpy(image + match + 7, &disp, sizeof(disp));

        uint32_t* slot = ResolveSeedPointer(image, match);
        const uint8_t* want = image + match + 0xf + disp;
        Check(reinterpret_cast<const uint8_t*>(slot) == want,
              "pattern resolution equals match + 0xf + displacement");
    }

    // ------------------------------------------------------------ tick map
    {
        int lastTick = 0, lastCmd = 0;

        // First call: no history, so the server tick is used as-is.
        CheckInt(MapCommandToTick(100, 100, lastTick, lastCmd), 100,
                 "first command maps to the server tick");
        CheckInt(lastTick, 100, "first call records the server tick");
        CheckInt(lastCmd, 100, "first call records the command number");

        // Same server tick, command advanced: extrapolate.
        CheckInt(MapCommandToTick(100, 103, lastTick, lastCmd), 103,
                 "same-tick command gap extrapolates the predicted tick");
        CheckInt(lastTick, 100, "extrapolation leaves the server tick untouched");
        CheckInt(lastCmd, 100, "extrapolation leaves the command baseline untouched");

        // Gap of exactly 63 still extrapolates (0x3e < gap-1 is false).
        lastTick = 100; lastCmd = 100;
        CheckInt(MapCommandToTick(100, 163, lastTick, lastCmd), 163,
                 "a 63-tick gap still extrapolates");

        // Gap of 64 falls back to the server tick.
        lastTick = 100; lastCmd = 100;
        CheckInt(MapCommandToTick(100, 164, lastTick, lastCmd), 100,
                 "a 64-tick gap falls back to the server tick");

        // A new server tick always wins.
        lastTick = 100; lastCmd = 100;
        CheckInt(MapCommandToTick(101, 102, lastTick, lastCmd), 101,
                 "a new server tick overrides extrapolation");
        CheckInt(lastTick, 101, "new server tick is recorded");
        CheckInt(lastCmd, 102, "new command number is recorded");
    }

    // ------------------------------------------------------- begin / restore
    {
        PredictionState state;
        state.frameTime = 0.5;
        state.tickIntervalMs = 15;
        state.intervalPerTick = 0.015;

        uint32_t seedSlot = 0xdeadbeefu;

        PredictionHook hook(&state, &seedSlot, &CaptureSeed);
        hook.Begin(1000, 500);

        Check(hook.active(), "hook reports active after Begin");
        CheckU32(seedSlot, expected, "m_pPredictionRandomSeed holds the masked seed");
        CheckU32(hook.lastSeed(), expected, "hook recorded the seed it wrote");
        CheckInt(hook.predictedTick(), 500, "predicted tick came from the server tick");
        Check(std::fabs(state.frameTime - 500.0 * 0.015) < 1e-9,
              "frame time was rewritten to predictedTick * intervalPerTick");

        const int predicted = hook.predictedTick();
        hook.End();

        Check(!hook.active(), "hook reports inactive after End");
        CheckU32(seedSlot, 0xdeadbeefu, "End restores the original m_pPredictionRandomSeed");
        Check(std::fabs(state.frameTime - 0.5) < 1e-12, "End restores the frame time");
        CheckInt(static_cast<int>(state.tickIntervalMs), 15, "End restores the tick interval");
        CheckInt(hook.predictedTick(), predicted, "predicted tick survives End for readers");
    }

    // --------------------------------------------- reseed callback got the seed
    {
        PredictionState state;
        state.intervalPerTick = 0.015;
        uint32_t seedSlot = 0;
        g_seedFnValue = 0;

        PredictionHook hook(&state, &seedSlot, &CaptureSeed);
        hook.Begin(1000, 1);

        CheckU32(seedSlot, expected, "seed slot written on Begin");
        CheckU32(g_seedFnValue, expected, "vstdlib RandomSeed received the same masked seed");
        hook.End();
    }

    // ------------------------------------------- config probes in step 10
    {
        Check(kConfigLookup == 0x180241610ULL,
              "step 10 uses the nested config lookup at 0x180241610");
        Check(kConfigBoolCast == 0x1801fcfc0ULL && kConfigIntCast == 0x1802029c0ULL,
              "the lookup result is read by the std::any bool/int casts");
        Check(kBacktrackGateRoot == 0x237bcfbdef3b6800ULL &&
              kBacktrackGateKey == 0x402819404e703058ULL,
              "the first probe is the shared backtrack gate, not an integrity hash");
        Check(kPatchRoot == 0x93fd561a96ab0c67ULL &&
              kPatchEnableKey == 0xfc192b983f5bff62ULL,
              "the second probe is the prediction-patch enable key");
        Check(kPatchedFloatBits == 0x4e6e6b28u,
              "the patched float is still 1.0e9f (0x4e6e6b28)");
    }

    // ----------------------------------------------------------- MoveHelper
    {
        MoveHelper& helper = GlobalMoveHelper();
        Check(helper.rttiName != nullptr &&
              std::strcmp(helper.rttiName, ".?AVCMoveHelperClient@@") == 0,
              "MoveHelper is identified by its RTTI name");
        Check(helper.beginSlot == 0x10 && helper.endSlot == 0x18,
              "MoveHelper vtable slots match the prediction calls");
    }

    std::printf("\n%s (%d failure%s)\n",
                g_failures == 0 ? "PREDICTION SELFTEST PASS" : "PREDICTION SELFTEST FAIL",
                g_failures, g_failures == 1 ? "" : "s");
    return g_failures == 0 ? 0 : 1;
}
