// Self-test for the backtrack subsystem (Stage 3.9).
//
// Covers the slot-2 recorder's observable core: the shared gate, per-player
// capture dedupe, the proximity invalidation, the batch shift window, the closed
// window predicate, the 0x42-tick summary cadence, the worth-building ratio, the
// slot-1 compaction and the slot-16 extrapolate restore. Constants are asserted
// against their resolved values.

#include <cmath>
#include <string>
#include <cstdio>

#include "records.h"

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

void CheckNear(double actual, double expected, double tolerance, const char* what)
{
    const bool ok = std::fabs(actual - expected) <= tolerance;
    std::printf("%s  %s (got %.4f, want %.4f)\n", ok ? "PASS" : "FAIL", what, actual, expected);
    if (!ok)
        ++g_failures;
}

using namespace sf::backtrack;

} // namespace

int main()
{
    // ------------------------------------------------------------------- gate
    {
        Check(!BacktrackFeature::Gate(false, false), "both gates off means no recorder");
        Check(BacktrackFeature::Gate(true, false), "the config gate alone arms it");
        Check(BacktrackFeature::Gate(false, true), "0x1800b8200 alone arms it");
    }

    // ---------------------------------------------------------------- capture
    {
        BacktrackFeature bt;
        Record r;
        r.simTime = 10.0;

        Check(bt.Capture(1, r), "a first record is stored");
        CheckInt(bt.changed, 1, "a stored record counts as changed");
        CheckInt(bt.captures, 0, "a stored record is not a duplicate");

        Check(!bt.Capture(1, r), "the same simulation time is refused");
        CheckInt(bt.captures, 1, "the duplicate counter increments");
        CheckInt(bt.changed, 1, "the duplicate does not count as changed");

        r.simTime = 10.015;
        Check(bt.Capture(1, r), "a new simulation time is stored");
        CheckInt(bt.changed, 2, "the second store counts");

        Check(!bt.Capture(0, r), "slot 0 is out of range");
        Check(!bt.Capture(300, r), "a slot above 0xff is out of range");
    }

    // ------------------------------------------------------------ proximity
    {
        Record a, b;
        a.x = 0.f; a.y = 0.f;
        b.x = 10.f; b.y = 0.f;
        BacktrackFeature::InvalidateIfFar(a, b);
        Check(!a.invalid && !b.invalid, "close records stay valid");

        Record c, d;
        c.x = 0.f; c.y = 0.f;
        d.x = 100.f; d.y = 0.f;    // 10000 > 4096
        BacktrackFeature::InvalidateIfFar(c, d);
        Check(c.invalid && d.invalid, "records past 4096 squared are both invalid");

        Record edgeA, edgeB;
        edgeA.x = 0.f;
        edgeB.x = 64.f;            // 4096 exactly is not greater, so valid
        BacktrackFeature::InvalidateIfFar(edgeA, edgeB);
        Check(!edgeA.invalid && !edgeB.invalid, "the 4096 boundary is exclusive");
    }

    // ------------------------------------------------------------------ shift
    {
        BacktrackFeature bt;
        Batch first;
        first.tickNumber = 100;
        first.records.push_back(Record{});
        Batch middle;
        middle.tickNumber = 104;
        middle.records.push_back(Record{});
        Batch last;
        last.tickNumber = 109;
        last.records.push_back(Record{});

        bt.Push(first);
        bt.Push(middle);
        bt.Push(last);

        const BacktrackFeature::Shift s = bt.ComputeShift();
        CheckInt(s.floorTick, 100, "the shift floor is the oldest tick");
        CheckInt(s.ceilingTick, 109, "the shift ceiling is the newest tick");
        CheckInt(s.usable, 10, "the usable count includes both ends");
        Check(!BacktrackFeature::Closed(100, 109), "a normal window is open");
        Check(BacktrackFeature::Closed(110, 109), "floor above ceiling is closed");

        BacktrackFeature empty;
        const BacktrackFeature::Shift none = empty.ComputeShift();
        CheckInt(none.usable, 1, "an empty recorder reports a single-tick window");

        // The ring keeps at most eight batches.
        for (int i = 0; i < 12; ++i)
        {
            Batch b;
            b.tickNumber = i;
            b.records.push_back(Record{});
            bt.Push(b);
        }
        CheckInt(static_cast<int>(bt.batches.size()), 8, "the ring holds eight batches");
    }

    // -------------------------------------------------------------- cadence
    {
        BacktrackFeature bt;
        int fires = 0;
        for (int i = 0; i < 0x42 * 3; ++i)
            if (bt.TickSummary())
                ++fires;
        CheckInt(fires, 3, "the summary fires every 0x42 ticks");

        Check(!BacktrackFeature::WorthBuilding(0, 5), "no captures is not worth building");
        Check(!BacktrackFeature::WorthBuilding(10, 0), "no changed times is not worth building");
        Check(BacktrackFeature::WorthBuilding(20, 10), "a 2.0 ratio is worth building");
        Check(!BacktrackFeature::WorthBuilding(14, 10), "a 1.4 ratio is not");
        Check(BacktrackFeature::WorthBuilding(16, 10), "a 1.6 ratio is");
    }

    // ----------------------------------------------------------- compaction
    {
        std::vector<Record> records(4);
        records[1].invalid = true;
        records[3].invalid = true;
        BacktrackFeature::Compact(records);
        CheckInt(static_cast<int>(records.size()), 2, "compaction drops the invalid records");
        Check(!records[0].invalid && !records[1].invalid,
              "compaction preserves the valid records in order");
    }

    // ------------------------------------------------------- extrapolate
    {
        Check(!BacktrackFeature::ShouldRestoreExtrapolate(false, true),
              "both saved flags are required");
        Check(!BacktrackFeature::ShouldRestoreExtrapolate(true, false),
              "one flag alone does nothing");
        Check(BacktrackFeature::ShouldRestoreExtrapolate(true, true),
              "both flags trigger the restore");
        Check(std::string(BacktrackFeature::ExtrapolateValue(true)) == "1",
              "a saved value restores cl_extrapolate to \"1\"");
        Check(std::string(BacktrackFeature::ExtrapolateValue(false)) == "0",
              "no saved value restores cl_extrapolate to \"0\"");
    }

    // ------------------------------------------------------------- constants
    {
        CheckNear(kWindowSeconds, 5.0, 1e-9, "the window is 5.0 s (0x180380d80)");
        CheckNear(kMinPingOffset, 0.5, 1e-9, "the ping offset is 0.5 (0x180380cb0)");
        CheckNear(kStallSeconds, 1.0, 1e-9, "the stall threshold is 1.0 (0x180380d08)");
        CheckNear(kLostSyncSeconds, 3.0, 1e-9, "the lost-sync threshold is 3.0 (0x180380d48)");
        CheckNear(kIdleSeconds, 30.0, 1e-9, "the idle threshold is 30.0 (0x180380e18)");
        CheckNear(kUsableFraction, 0.6, 1e-9, "the usable fraction is 0.6 (0x180380cb8)");
        CheckNear(kDefaultInterval, 0.015, 1e-9, "the default interval is 0.015 (0x180380bd0)");
        CheckNear(kMarginTicks, 2.0, 1e-9, "the margin is 2 ticks (0x180380d38)");
        CheckNear(kProximitySq, 4096.f, 1e-6, "the proximity bound is 4096 (0x180381290)");
        CheckNear(kWorthRatio, 1.5, 1e-9, "the worth ratio is 1.5 (0x180380c50)");
        CheckInt(kRecordStride, 0x1868, "the record stride is 0x1868");
        CheckInt(kBatchTickOff, 0x18, "the batch tick number lives at +0x18");
        CheckInt(kSummaryPeriod, 0x42, "the summary period is 0x42");

        Check(BacktrackFeature::kVtableRva == 0x33a438ULL, "backtrack vtable is 0x33a438");
        Check(BacktrackFeature::kVfunc01 == 0x1800c9640ULL, "slot 1 keeps 0x1800c9640");
        Check(BacktrackFeature::kVfunc02 == 0x1800c9910ULL, "slot 2 keeps 0x1800c9910");
        Check(BacktrackFeature::kVfunc16 == 0x1800c95d0ULL, "slot 16 keeps 0x1800c95d0");
        Check(kRoot == 0x13806d9e35de0023ULL, "the backtrack root is 0x13806d9e35de0023");
        Check(kGateKey == 0x402819404e703058ULL, "the shared gate key is unchanged");
    }

    // ------------------------------------------------ record field offsets
    {
        CheckInt(kRecordPrevXOff, 0x28, "previous x is +0x28");
        CheckInt(kRecordPrevYOff, 0x2c, "previous y is +0x2c");
        CheckInt(kRecordPrevZOff, 0x30, "previous z is +0x30");
        CheckInt(kRecordSimTimeOff, 0x1848, "simulation time is +0x1848");
        CheckInt(kRecordValidOff, 0x1850, "the valid flag is +0x1850");
        CheckInt(kRecordTickOff, 0x1854, "the server tick is +0x1854");
        CheckInt(kRecordXOff, 0x1858, "current x is +0x1858");
        CheckInt(kRecordYOff, 0x185c, "current y is +0x185c");
        CheckInt(kRecordZOff, 0x1860, "current z is +0x1860");
        CheckInt(kRecordInvalidOff, 0x1864, "the invalid flag is +0x1864");
    }

    // ------------------------------------------------ resolved body extents
    {
        auto CheckBody = [](uint64_t address, uint32_t size, uint64_t wantAddress,
                            uint32_t wantSize, const char* what) {
            Check(address == wantAddress, what);
            CheckInt(static_cast<int>(size), static_cast<int>(wantSize), what);
        };
        CheckBody(kBodyExtrapBones, kExtrapBonesSize, 0x1800c7670, 79, "bone matrix helper is 0x1800c7670, 79 B");
        CheckBody(kBodyExtrapDelta, kExtrapDeltaSize, 0x1800c76d0, 198, "origin delta helper is 0x1800c76d0, 198 B");
        CheckBody(kBodyInterp, kInterpSize, 0x1800c5790, 773, "interp query is 0x1800c5790, 773 B");
        CheckBody(kBodyPing, kPingSize, 0x1800c5aa0, 122, "ping query is 0x1800c5aa0, 122 B");
        CheckBody(kBodyUnlagBudget, kUnlagBudgetSize, 0x1800c5b20, 217, "unlag budget is 0x1800c5b20, 217 B");
        CheckBody(kBodyUnlagHeadroom, kUnlagHeadroomSize, 0x1800c5c00, 130, "unlag headroom is 0x1800c5c00, 130 B");
        CheckBody(kBodyBand, kBandSize, 0x1800c5c90, 131, "band query is 0x1800c5c90, 131 B");
        CheckBody(kBodyChoke, kChokeSize, 0x1800c5d20, 161, "choke query is 0x1800c5d20, 161 B");
        CheckBody(kBodyMarginTime, kMarginTimeSize, 0x1800c5dd0, 157, "margin time is 0x1800c5dd0, 157 B");
        CheckBody(kBodyLatency, kLatencySize, 0x1800c5e70, 254, "latency query is 0x1800c5e70, 254 B");
        CheckBody(kBodyDepthCap, kDepthCapSize, 0x1800c6530, 459, "depth cap is 0x1800c6530, 459 B");
        CheckBody(kBodyMaxTicks, kMaxTicksSize, 0x1800c6870, 185, "max ticks is 0x1800c6870, 185 B");
        CheckBody(kBodyTickValid, kTickValidSize, 0x1800c60c0, 163, "tick validity is 0x1800c60c0, 163 B");
        CheckBody(kBodyRecordPredicate, kRecordPredicateSize, 0x1800c5f70, 330, "record predicate is 0x1800c5f70, 330 B");
        CheckBody(kBodyChokeQuery, kChokeQuerySize, 0x1800c64b0, 116, "choke query is 0x1800c64b0, 116 B");
        CheckBody(kBodyConfigGate, kConfigGateSize, 0x1800c6700, 133, "config gate is 0x1800c6700, 133 B");
        CheckBody(kBodyDepthWindow, kDepthWindowSize, 0x1800c6790, 221, "depth window is 0x1800c6790, 221 B");
        CheckBody(kBodyAcceptShift, kAcceptShiftSize, 0x1800c6930, 141, "shift validator is 0x1800c6930, 141 B");
        CheckBody(kBodyExtrapConfig, kExtrapConfigSize, 0x1800c9380, 62, "extrapolate config is 0x1800c9380, 62 B");
        CheckBody(kBodySetExtrap, kSetExtrapSize, 0x1800c93d0, 505, "extrapolate setter is 0x1800c93d0, 505 B");
        CheckBody(kBodyApplyShift, kApplyShiftExtent, 0x1800c6c50, 0x81e, "shift body spans 0x1800c6c50..0x1800c746d (0x81e)");
        CheckBody(kBodyLsac, kLsacSize, 0x1800c7470, 508, "LSAC state machine is 0x1800c7470, 508 B");
        CheckBody(kBodyRingGrow, kRingGrowSize, 0x18022cdc0, 534, "ring grow is 0x18022cdc0, 534 B");
        CheckBody(kBodyListCtor, kListCtorSize, 0x180002470, 55, "sentinel constructor is 0x180002470, 55 B");
        CheckInt(static_cast<int>(kApplyShiftHeaderSize), 1973, "the recorder header undercounts 0x1800c6c50 at 1973 B");
    }

    // -------------------------------------------- strings and their extents
    {
        CheckInt(kStageStringCount, 24, "Stage 3.9 references twenty-four strings");
        auto CheckString = [](const StringRef& s, uint64_t address, int length,
                              const char* what) {
            Check(s.address == address && s.length == length, what);
        };
        CheckString(kStageStrings[0], 0x18034c850, 98, "depth-cap string is 0x18034c850, 98 B");
        CheckString(kStageStrings[1], 0x18034c8c0, 104, "refused string is 0x18034c8c0, 104 B");
        CheckString(kStageStrings[2], 0x18034c930, 22, "live-body selector is 0x18034c930, 22 B");
        CheckString(kStageStrings[3], 0x18034c948, 13, "record selector is 0x18034c948, 13 B");
        CheckString(kStageStrings[4], 0x18034c960, 119, "pose string is 0x18034c960, 119 B");
        CheckString(kStageStrings[5], 0x18034c9d8, 3, "IN selector is 0x18034c9d8, 3 B");
        CheckString(kStageStrings[6], 0x18034c9dc, 3, "OUT selector is 0x18034c9dc, 3 B");
        CheckString(kStageStrings[7], 0x18034c9e0, 178, "hit string is 0x18034c9e0, 178 B");
        CheckString(kStageStrings[8], 0x18034caa0, 97, "jump string is 0x18034caa0, 97 B");
        CheckString(kStageStrings[9], 0x18034cb10, 81, "budget string is 0x18034cb10, 81 B");
        CheckString(kStageStrings[10], 0x18034cb70, 21, "amount ConVar is 0x18034cb70, 21 B");
        CheckString(kStageStrings[11], 0x18034cb88, 14, "extrapolate ConVar is 0x18034cb88, 14 B");
        CheckString(kStageStrings[12], 0x18034cb98, 44, "restored string is 0x18034cb98, 44 B");
        CheckString(kStageStrings[13], 0x18034cbd0, 132, "zeroed string is 0x18034cbd0, 132 B");
        CheckString(kStageStrings[14], 0x18034cc60, 148, "idle string is 0x18034cc60, 148 B");
        CheckString(kStageStrings[15], 0x18034cd00, 290, "empty-history string is 0x18034cd00, 290 B");
        CheckString(kStageStrings[16], 0x18034ce30, 207, "span string is 0x18034ce30, 207 B");
        CheckString(kStageStrings[17], 0x18034cf00, 351, "closed-window string is 0x18034cf00, 351 B");
        CheckString(kStageStrings[18], 0x18034d060, 94, "summary string is 0x18034d060, 94 B");
        CheckString(kStageStrings[19], 0x18034d0c0, 14, "worth-building string is 0x18034d0c0, 14 B");
        CheckString(kStageStrings[20], 0x18034d0d0, 18, "not-worth-building string is 0x18034d0d0, 18 B");
        CheckString(kStageStrings[21], 0x18034d0f0, 124, "animation string is 0x18034d0f0, 124 B");
        CheckString(kStageStrings[22], 0x18034124c, 1, "restore-one string is 0x18034124c, 1 B");
        CheckString(kStageStrings[23], 0x180347810, 1, "restore-zero string is 0x180347810, 1 B");
    }

    // ------------------------------------------- ring growth and ownership
    {
        Check(kRingPointers == 0x1803fac48ULL, "ring pointer array is 0x1803fac48");
        Check(kRingCapacity == 0x1803fac50ULL, "ring capacity is 0x1803fac50");
        Check(kRingHead == 0x1803fac58ULL, "ring head is 0x1803fac58");
        Check(kRingCount == 0x1803fac60ULL, "ring count is 0x1803fac60");
        Check(kListSentinel == 0x1803fac40ULL, "list sentinel is 0x1803fac40");
        Check(kListInitSlot == 0x18030cee0ULL, "constructor pointer is at 0x18030cee0");
        Check(kListAtexit == 0x180309a40ULL, "destructor is 0x180309a40");
        CheckInt(kListSentinelSize, 0x10, "the sentinel allocation is 0x10 B");
        CheckInt(kRingPointerSize, 8, "a ring pointer slot is 8 B");
        CheckInt(static_cast<int>(kRingInitialCapacity), 0, "the BSS ring capacity starts at 0");
        CheckInt(static_cast<int>(kRingFirstCapacity), 8, "the first grow creates eight slots");
        CheckInt(BacktrackFeature::NextRingCapacity(0), 8, "capacity 0 grows to 8");
        CheckInt(BacktrackFeature::NextRingCapacity(8), 16, "capacity 8 doubles to 16");
        CheckInt(BacktrackFeature::NextRingCapacity(16), 32, "capacity 16 doubles to 32");
        CheckInt(BacktrackFeature::NextRingCapacity(32), 64, "capacity 32 doubles to 64");
        CheckInt(BacktrackFeature::NextRingCapacity(-1), 0, "a negative capacity is rejected");
    }

    // ---------------------------------------- extrapolation / timing values
    {
        CheckNear(kExtrapBoneMax, 128.0, 1e-9, "the bone matrix is capped at 128 bones");
        CheckInt(kExtrapBoneMask, 0x100, "the bone mask is 0x100");
        CheckNear(kExtrapDeltaLimit, 256.0, 1e-6, "the extrapolation delta limit is 256");
        CheckNear(kExtrapDefaultAmount, 0.25, 1e-9, "the extrapolate amount default is 0.25");
        CheckNear(kFakepingLow, 0.001, 1e-9, "the fakeping low bound is 0.001");
        CheckNear(kFakepingHigh, 1.0, 1e-9, "the fakeping high bound is 1.0");
        CheckNear(kInterpFallback, 0.1, 1e-6, "the interp fallback is 0.1");
        CheckNear(kUpdaterateDefault, 66.0, 1e-9, "the updaterate fallback is 66");
        CheckNear(kBandBase, 0.2, 1e-9, "the band base is 0.2");
        CheckNear(kBandFloor, 0.1, 1e-9, "the band floor is 0.1");
        CheckNear(kBandMargin, 2.0, 1e-9, "the band margin is 2.0");
        CheckNear(kBandMarginHigh, 4.0, 1e-9, "the high fakeping margin is 4.0");
        CheckInt(kChokeMax, 15, "choke ticks clamp at 15");
        CheckNear(kChokeTimeScale, 0.5, 1e-9, "choke time scales by 0.5");
        CheckNear(kDepthRequiredOffset, -2.0, 1e-9, "the depth cap offset is -2");
        CheckNear(kDepthNegOne, -1.0, 1e-9, "the depth cap uses -1.0");
        CheckNear(kPredicateLower, -0.1, 1e-9, "the record predicate lower bound is -0.1");
        CheckNear(kLatencyShortMs, 200.0, 1e-9, "the short latency limit is 200 ms");
        CheckNear(kLatencyLongMs, 1000.0, 1e-9, "the long latency limit is 1000 ms");
        CheckNear(kLatencyStaleTime, 3000000000.0, 1e-3, "the stale-shift threshold is 3e9");
        CheckNear(kPoseMinDistance, 16.0, 1e-6, "the pose warning distance is 16");
    }

    std::printf("\n%s (%d failure%s)\n",
                g_failures == 0 ? "BACKTRACK SELFTEST PASS" : "BACKTRACK SELFTEST FAIL",
                g_failures, g_failures == 1 ? "" : "s");
    return g_failures == 0 ? 0 : 1;
}
