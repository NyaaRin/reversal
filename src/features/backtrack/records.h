#pragma once
// Features::Backtrack::BacktrackFeature  (Stage 3.9)
// vtable 0x33a438; slot 1 = 0x1800c9640, slot 2 = 0x1800c9910, slot 16 = 0x1800c95d0.
//
// Slot 2 is the per-tick recorder. Its shape, from the body:
//
//   gate      config root 0x13806d9e35de0023 + key 0x402819404e703058 (the same
//             opt-out pair Stages 3.5/3.7/3.8 read), or 0x1800b8200
//   filters   0x1800c7b00, then 0x1800c7470 ("[BT-LSAC]")
//   per player 1..maxClients, 0x1800c5030(entity, local) admits the slot; the
//             record is taken by 0x1800c4a70 / 0x1800c4b10, optionally extended by
//             0x1800c76d0 (render-origin delta, length < 256) after
//             0x1800c7670 fills the 128-bone matrix at curtime
//   dedupe    per-player last simulation time at 0x1805c51f0[slot * 8];
//             0x1803fb0c4 counts captures, 0x1803fb0d8 counts *changed* times
//   batches   ring at 0x1803fac48, head 0x1803fac58, count 0x1803fac60,
//             capacity 0x1803fac50; each entry is 0x20 bytes
//             {begin, end, cap, tickNumber at +0x18}
//   records   0x1868 bytes each; +0x1848 simulation time (double),
//             +0x1858 y, +0x185c x, +0x1864 invalid flag
//   proximity records of the same player closer than 4096 squared units mark
//             both invalid (+0x1864)
//   summary   every 0x42 ticks: "[BT] records=..." and, when the usable window is
//             empty, the long "[BT-CLOSED]" diagnostic
//
// Constants, all resolved:
//   0x180380d80 = 5.0     window seconds
//   0x180380cb0 = 0.5     minimum ping offset
//   0x180380d08 = 1.0     stalled-time threshold
//   0x180380d48 = 3.0     lost-sync threshold
//   0x180380e18 = 30.0    idle-log threshold
//   0x180380cb8 = 0.6     usable fraction
//   0x180380bd0 = 0.015   default interval (seconds)
//   0x180380d38 = 2.0     margin ticks
//   0x180381290 = 4096.0  proximity squared distance
//   0x180381278 = 1000.0  seconds -> milliseconds
//   0x180381120 = 100.0   percent
//   0x180380c50 = 1.5     "worth building" ratio
//   0x180380ec0 = 1000.0  ms scale for logs
//
// 0x1800c7670/0x1800c76d0, the eleven timing queries, the six support predicates,
// the ring grow 0x18022cdc0 and the sentinel constructor 0x180002470 are all read
// in full; their addresses, sizes and constants are part of this header.

#include <algorithm>
#include <cstdint>
#include <vector>

namespace sf {
namespace backtrack {

inline constexpr uint64_t kRoot         = 0x13806d9e35de0023ULL;
inline constexpr uint64_t kGateKey      = 0x402819404e703058ULL; // shared 3.5/3.7/3.8
inline constexpr int      kRecordStride  = 0x1868;
inline constexpr int      kBatchStride   = 0x20;
inline constexpr int      kBatchTickOff  = 0x18;
inline constexpr int      kSummaryPeriod = 0x42;

// Record offsets proven by 0x1800c6c50 (origin subtraction) and 0x1800c9910.
inline constexpr int kRecordPrevXOff    = 0x28;
inline constexpr int kRecordPrevYOff    = 0x2c;
inline constexpr int kRecordPrevZOff    = 0x30;
inline constexpr int kRecordSimTimeOff  = 0x1848;
inline constexpr int kRecordValidOff    = 0x1850;
inline constexpr int kRecordTickOff     = 0x1854;
inline constexpr int kRecordXOff        = 0x1858;
inline constexpr int kRecordYOff        = 0x185c;
inline constexpr int kRecordZOff        = 0x1860;
inline constexpr int kRecordInvalidOff  = 0x1864;

// Bodies.  The extent of 0x1800c6c50 is 0x81e (its cold [BT-HIT] tail runs past
// the recorded 1973-byte size, up to 0x1800c746d; next function at 0x1800c7470).
inline constexpr uint64_t kBodyExtrapBones     = 0x1800c7670;
inline constexpr uint32_t kExtrapBonesSize     = 79;
inline constexpr uint64_t kBodyExtrapDelta     = 0x1800c76d0;
inline constexpr uint32_t kExtrapDeltaSize     = 198;
inline constexpr uint64_t kBodyInterp          = 0x1800c5790;
inline constexpr uint32_t kInterpSize          = 773;
inline constexpr uint64_t kBodyPing            = 0x1800c5aa0;
inline constexpr uint32_t kPingSize            = 122;
inline constexpr uint64_t kBodyUnlagBudget     = 0x1800c5b20;
inline constexpr uint32_t kUnlagBudgetSize     = 217;
inline constexpr uint64_t kBodyUnlagHeadroom   = 0x1800c5c00;
inline constexpr uint32_t kUnlagHeadroomSize   = 130;
inline constexpr uint64_t kBodyBand            = 0x1800c5c90;
inline constexpr uint32_t kBandSize            = 131;
inline constexpr uint64_t kBodyChoke           = 0x1800c5d20;
inline constexpr uint32_t kChokeSize           = 161;
inline constexpr uint64_t kBodyMarginTime      = 0x1800c5dd0;
inline constexpr uint32_t kMarginTimeSize      = 157;
inline constexpr uint64_t kBodyLatency         = 0x1800c5e70;
inline constexpr uint32_t kLatencySize         = 254;
inline constexpr uint64_t kBodyDepthCap        = 0x1800c6530;
inline constexpr uint32_t kDepthCapSize        = 459;
inline constexpr uint64_t kBodyMaxTicks        = 0x1800c6870;
inline constexpr uint32_t kMaxTicksSize        = 185;
inline constexpr uint64_t kBodyTickValid       = 0x1800c60c0;
inline constexpr uint32_t kTickValidSize       = 163;
inline constexpr uint64_t kBodyRecordPredicate = 0x1800c5f70;
inline constexpr uint32_t kRecordPredicateSize = 330;
inline constexpr uint64_t kBodyChokeQuery      = 0x1800c64b0;
inline constexpr uint32_t kChokeQuerySize      = 116;
inline constexpr uint64_t kBodyConfigGate      = 0x1800c6700;
inline constexpr uint32_t kConfigGateSize      = 133;
inline constexpr uint64_t kBodyDepthWindow     = 0x1800c6790;
inline constexpr uint32_t kDepthWindowSize     = 221;
inline constexpr uint64_t kBodyAcceptShift     = 0x1800c6930;
inline constexpr uint32_t kAcceptShiftSize     = 141;
inline constexpr uint64_t kBodyExtrapConfig    = 0x1800c9380;
inline constexpr uint32_t kExtrapConfigSize    = 62;
inline constexpr uint64_t kBodySetExtrap       = 0x1800c93d0;
inline constexpr uint32_t kSetExtrapSize       = 505;
inline constexpr uint64_t kBodyApplyShift      = 0x1800c6c50;
inline constexpr uint32_t kApplyShiftHeaderSize = 1973;
inline constexpr uint32_t kApplyShiftExtent    = 0x81e;
inline constexpr uint64_t kBodyLsac            = 0x1800c7470;
inline constexpr uint32_t kLsacSize            = 508;
inline constexpr uint64_t kBodyRingGrow        = 0x18022cdc0;
inline constexpr uint32_t kRingGrowSize        = 534;
inline constexpr uint64_t kBodyListCtor        = 0x180002470;
inline constexpr uint32_t kListCtorSize        = 55;

// Ring and container data objects.
inline constexpr uint64_t kRingPointers        = 0x1803fac48;
inline constexpr uint64_t kRingCapacity        = 0x1803fac50;
inline constexpr uint64_t kRingHead            = 0x1803fac58;
inline constexpr uint64_t kRingCount           = 0x1803fac60;
inline constexpr uint64_t kListSentinel        = 0x1803fac40;
inline constexpr uint64_t kListInitSlot        = 0x18030cee0;
inline constexpr uint64_t kListAtexit          = 0x180309a40;
inline constexpr uint32_t kListSentinelSize    = 0x10;
inline constexpr uint32_t kRingPointerSize     = 8;
inline constexpr uint32_t kRingInitialCapacity = 0;
inline constexpr uint32_t kRingFirstCapacity   = 8;

// Extrapolation / timing constants, all resolved as float unless marked double.
inline constexpr float  kExtrapBoneMax         = 128.f; // 0x80 bones
inline constexpr int    kExtrapBoneMask        = 0x100;
inline constexpr float  kExtrapDeltaLimit      = 256.f; // 0x1803811cc
inline constexpr float  kExtrapDefaultAmount   = 0.25f; // 0x180380a58
inline constexpr float  kFakepingLow           = 0.001f; // 0x180380964
inline constexpr float  kFakepingHigh          = 1.0f;   // 0x180380bb0
inline constexpr float  kInterpFallback        = 0.1f;   // 0x1803809ec
inline constexpr float  kUpdaterateDefault     = 66.f;   // 0x1803810d4
inline constexpr double kBandBase              = 0.2;    // 0x180380c80
inline constexpr double kBandFloor             = 0.1;    // 0x180380c48
inline constexpr double kBandMargin            = 2.0;    // 0x180380d38
inline constexpr double kBandMarginHigh        = 4.0;    // 0x180380d68
inline constexpr int    kChokeMin              = 0;
inline constexpr int    kChokeMax              = 15;
inline constexpr double kChokeTimeScale        = 0.5;    // 0x180380cb0
inline constexpr double kDepthRequiredOffset   = -2.0;
inline constexpr double kDepthNegOne           = -1.0;   // 0x1803813b0
inline constexpr double kPredicateLower        = -0.1;   // 0x180381398
inline constexpr double kLatencyShortMs        = 200.0;
inline constexpr double kLatencyLongMs         = 1000.0;
inline constexpr double kLatencyStaleTime      = 3000000000.0; // 0x180381050
inline constexpr float  kPoseMinDistance       = 16.f;   // 0x180380fe8

// Every string referenced by a Stage 3.9 body.  length is the byte count before
// the NUL (a trailing newline is included where the binary has one).
struct StringRef
{
    uint64_t address;
    int length;
    const char* role;
};

inline constexpr StringRef kStageStrings[] = {
    {0x18034c850,  98, "depth capped"},
    {0x18034c8c0, 104, "shift refused"},
    {0x18034c930,  22, "aimed at live body"},
    {0x18034c948,  13, "on the record"},
    {0x18034c960, 119, "aim pose"},
    {0x18034c9d8,   3, "IN "},
    {0x18034c9dc,   3, "OUT"},
    {0x18034c9e0, 178, "shift hit"},
    {0x18034caa0,  97, "lsac jump"},
    {0x18034cb10,  81, "lsac budget"},
    {0x18034cb70,  21, "cl_extrapolate_amount"},
    {0x18034cb88,  14, "cl_extrapolate"},
    {0x18034cb98,  44, "extrapolate restored"},
    {0x18034cbd0, 132, "extrapolate zeroed"},
    {0x18034cc60, 148, "idle"},
    {0x18034cd00, 290, "history empty"},
    {0x18034ce30, 207, "history span"},
    {0x18034cf00, 351, "window closed"},
    {0x18034d060,  94, "record summary"},
    {0x18034d0c0,  14, "worth building"},
    {0x18034d0d0,  18, "not worth building"},
    {0x18034d0f0, 124, "animation samples"},
    {0x18034124c,   1, "restore one"},
    {0x180347810,   1, "restore zero"},
};

inline constexpr int kStageStringCount =
    static_cast<int>(sizeof(kStageStrings) / sizeof(kStageStrings[0]));

inline constexpr double kWindowSeconds   = 5.0;     // 0x180380d80
inline constexpr double kMinPingOffset   = 0.5;     // 0x180380cb0
inline constexpr double kStallSeconds    = 1.0;     // 0x180380d08
inline constexpr double kLostSyncSeconds = 3.0;     // 0x180380d48
inline constexpr double kIdleSeconds     = 30.0;    // 0x180380e18
inline constexpr double kUsableFraction  = 0.6;     // 0x180380cb8
inline constexpr double kDefaultInterval = 0.015;   // 0x180380bd0
inline constexpr double kMarginTicks     = 2.0;     // 0x180380d38
inline constexpr float  kProximitySq     = 4096.f;  // 0x180381290
inline constexpr double kMsScale         = 1000.0;  // 0x180381278 / 0x180380ec0
inline constexpr double kPercentScale    = 100.0;   // 0x180381120
inline constexpr double kWorthRatio      = 1.5;     // 0x180380c50

// One captured record. Only the fields the slot-2 body reads are modelled.
struct Record
{
    double simTime = 0.0;   // +0x1848
    float x = 0.f;          // +0x1858
    float y = 0.f;          // +0x185c
    float z = 0.f;          // +0x1860
    float prevX = 0.f;      // +0x28
    float prevY = 0.f;      // +0x2c
    float prevZ = 0.f;      // +0x30
    int tick = 0;           // +0x1854
    bool valid = false;     // +0x1850
    bool invalid = false;   // +0x1864
};

// A ring entry: {begin, end, capacity end, tick number}.
struct Batch
{
    std::vector<Record> records;
    int tickNumber = 0;
};

struct BacktrackFeature
{
    static constexpr uint64_t kVtableRva = 0x33a438;
    static constexpr uint64_t kVfunc01   = 0x1800c9640;
    static constexpr uint64_t kVfunc02   = 0x1800c9910;
    static constexpr uint64_t kVfunc16   = 0x1800c95d0;

    bool enabled = false;          // via the shared gate pair
    bool b8200 = false;            // second gate

    int captures = 0;              // DAT_1803fb0c4
    int changed = 0;               // DAT_1803fb0d8
    int summaryCounter = 0;        // DAT_1803fcf78
    double lastSimTime = 0.0;      // 0x1803e9798
    double lastLimitTime = 0.0;    // 0x1803e78f0
    double lastAnimTime = 0.0;     // 0x1803e97f8

    std::vector<Batch> batches;    // ring contents, oldest first
    double lastRecordTime[0x100] = {};

    static bool Gate(bool configFlag, bool b8200Flag) { return configFlag || b8200Flag; }

    // Capture: identical simulation time counts but is not stored; a changed
    // time is stored and opens a new record. Returns true on a stored record.
    bool Capture(int slot, const Record& rec)
    {
        if (slot - 1u >= 0xffu)
            return false;
        if (rec.simTime == lastRecordTime[slot])
        {
            ++captures;
            return false;
        }
        lastRecordTime[slot] = rec.simTime;
        ++changed;
        return true;
    }

    // Capacity growth in 0x18022cdc0: zero starts at eight slots, then the
    // pointer array doubles (8, 16, 32, ...).  Push below keeps the existing
    // eight-batch test window; the grow query is asserted separately.
    static constexpr int NextRingCapacity(int capacity)
    {
        if (capacity < 0)
            return 0;
        unsigned target = capacity != 0 ? static_cast<unsigned>(capacity) : 1u;
        while (target == static_cast<unsigned>(capacity) || target < 8u)
            target *= 2u;
        return static_cast<int>(target);
    }

    void Push(Batch batch)
    {
        batches.push_back(std::move(batch));
        if (batches.size() > 8)
            batches.erase(batches.begin());
    }

    // Two records of the same player further apart than kProximitySq get both
    // marked invalid; the body compares squared distances.
    static void InvalidateIfFar(Record& a, Record& b)
    {
        const float dx = b.x - a.x;
        const float dy = b.y - a.y;
        if (dx * dx + dy * dy > kProximitySq)
        {
            a.invalid = true;
            b.invalid = true;
        }
    }

    // Shift window across every batch: the min and max tick numbers, and the
    // number of usable ticks between them.
    struct Shift { int floorTick = 0; int ceilingTick = 0; int usable = 0; };

    Shift ComputeShift() const
    {
        Shift s;
        bool first = true;
        for (const Batch& b : batches)
        {
            if (b.records.empty())
                continue;
            if (first)
            {
                s.floorTick = b.tickNumber;
                s.ceilingTick = b.tickNumber;
                first = false;
            }
            if (b.tickNumber < s.floorTick)
                s.floorTick = b.tickNumber;
            if (b.tickNumber > s.ceilingTick)
                s.ceilingTick = b.tickNumber;
        }
        s.usable = s.ceilingTick - s.floorTick + 1;
        return s;
    }

    static bool Closed(int floorTick, int ceilingTick) { return floorTick > ceilingTick; }

    // The summary log fires when the counter is a multiple of 0x42.
    bool TickSummary() { return (++summaryCounter % kSummaryPeriod) == 0; }

    // "worth building" when the change ratio exceeds 1.5.
    static bool WorthBuilding(int capturesCount, int changedCount)
    {
        if (capturesCount <= 0 || changedCount <= 0)
            return false;
        const double ratio = static_cast<double>(capturesCount) / changedCount;
        return ratio > kWorthRatio;
    }

    // Slot 1 (0x1800c9640): std::remove_if over each record span. The predicate
    // is 0x1800c5f70 (keep), the move is 0x1800c7dd0; the body then trims the
    // vector. Modelled as a stable compaction of dropped records.
    static void Compact(std::vector<Record>& records)
    {
        records.erase(std::remove_if(records.begin(), records.end(),
                                     [](const Record& r) { return r.invalid; }),
                      records.end());
    }

    // Slot 16 (0x1800c95d0): restores cl_extrapolate from the saved flags. The
    // value is the string "0" (0x180347810) or "1" (0x18034124c), selected by
    // whether a saved value exists at DAT_1803db380.
    static const char* ExtrapolateValue(bool haveSavedValue)
    {
        return haveSavedValue ? "1" : "0";
    }

    // The restore only runs while both saved flags are set.
    static bool ShouldRestoreExtrapolate(bool flagA, bool flagB)
    {
        return flagA && flagB;
    }
};

} // namespace backtrack
} // namespace sf
