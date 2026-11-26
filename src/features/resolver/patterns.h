#pragma once
// Pattern scans (Stage 3.11)  —  [PAT] / [PAT-WARN] / [MH]
//
//   CBeamSegDraw   0x1800200b0 (464 bytes)
//     three signatures resolved in client.dll through 0x180015f40:
//       Start    "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30 48 89 91 28 03 00 00"
//       NextSeg  "4C 8B DC 49 89 5B 18 49 89 6B 20 57 48 81 EC 90 00 00 00 8B 81 14 03 00 00"
//       End      "48 83 79 10 00 74 09 48 C7 41 10 00 00 00 00 C3 48 83 C1 20"
//     results DAT_1803f9268 / DAT_1803f9270 / DAT_1803f9260, ready flag
//     DAT_1803f9259; one-shot guard DAT_1803f925a.
//
//   GMod net read/write   0x1800713d0 (427 bytes)
//     "48 89 5C 24 08 48 89 74 24 10 57 48 8B F9"        (engine.dll)
//     "48 89 5C 24 08 57 48 83 EC 20 48 8B 01 48 8B FA 48 8B D9 FF 50 38 41 B1 01 41 B8 06 00 00 00 8B D0 48 8B CF E8 ? ? ? ? 8B 53 20 41 B1 01 41 B8 14"
//     hooked through MinHook 0x180242fc0; DAT_1803fe370 = 0x18006e130.
//
//   NET_SetTimeForTimescale   0x1801f7a80 (639 bytes)
//     "48 83 EC 38 48 8B 0D ? ? ? ? 48 8D 15 ? ? ? ? 0F 29 74 24 20 0F 28 F0 F2 0F 5C 35 ? ? ? ?"
//     copies collected by 0x180016410 with a limit of 4; the global
//     net_time_for_scale resolves to match + 8 + rel32(match + 4), stored at
//     DAT_1803fa398; at most the first two copies are hooked (#0, #1).
//
// Verbatim strings:
//   "[PAT] BeamSeg Start=%p NextSeg=%p End=%p\n"
//   "[PAT-WARN] CBeamSegDraw x64 incomplete\n"
//   "[PAT] GMod NetRead(in)   = %p %s\n"
//   "[PAT] GMod NetWrite(out) = %p %s\n"
//   "[MH] GMod NetRead: %s\n"
//   "[MH] GMod NetWrite: %s\n"
//   "[PAT] NET_SetTimeForTimescale = %zu copy(ies)\n"
//   "[PAT] net_time_for_scale      = %p\n"
//   "[SPEED] net-time compensation disabled (missing signature)\n"
//   "[SPEED] NET_SetTimeForTimescale #%d @ %p hook=%s\n"

#include <cstdint>

namespace sf {
namespace resolver {

inline constexpr uint64_t kBeamScanAddr  = 0x1800200b0;
inline constexpr uint64_t kNetScanAddr   = 0x1800713d0;
inline constexpr uint64_t kTimeScanAddr  = 0x1801f7a80;
inline constexpr uint64_t kScanHelper    = 0x180015f40;  // signature -> address
inline constexpr uint64_t kMultiScan     = 0x180016410;  // signature -> copies
inline constexpr uint64_t kHookCreate    = 0x180242fc0;  // MinHook create
inline constexpr uint64_t kHookStatus    = 0x1802436b0;

inline constexpr int kBeamSignatureCount = 3;
inline constexpr int kTimeCopyLimit      = 4;
inline constexpr int kMaxTimeHooks       = 2;

struct BeamPatterns
{
    bool start = false;
    bool nextSeg = false;
    bool end = false;
    bool ready = false;       // DAT_1803f9259
    bool scanned = false;     // DAT_1803f925a one-shot
    bool incompleteWarned = false;

    void Set(bool haveStart, bool haveNext, bool haveEnd)
    {
        start = haveStart;
        nextSeg = haveNext;
        end = haveEnd;
        scanned = true;
        ready = haveStart && haveNext && haveEnd;
        incompleteWarned = !ready;
    }
};

// 0x1801f7d00 — Host_AccumulateTime / frametime globals (667 bytes)
//   signatures: Host_AccumulateTime 0x4f bytes; host_frametime 0x3e bytes;
//   host_frametime_unbounded 0x19 bytes. Each global resolves as
//   match + 8 + rel32(match + 4); the code refuses to hook unless the two
//   globals are exactly 4 bytes apart. Sets DAT_180423572 = (hook == 0), which
//   is the "hooks" flag Stage 3.7's [SPEED] log reads.
//   Verbatim:
//     [PAT] Host_AccumulateTime      = %p %s
//     [PAT] host_frametime           = %p
//     [PAT] host_frametime_unbounded = %p
//     [SPEED] frametime globals are not adjacent (%p / %p) - refusing to hook
//     [SPEED] Host_AccumulateTime hook=%s
//     [SPEED] speedhack disabled (missing signature)
struct HostTimeScan
{
    static constexpr uint64_t kScanAddr = 0x1801f7d00;
    static constexpr uint64_t kAccumulateGlobal = 0x1803fa428;
    static constexpr uint64_t kUnboundedGlobal  = 0x1803fa480;
    static constexpr int kGlobalGap = 4;

    bool accumulate = false;
    bool frametime = false;
    bool unbounded = false;
    bool hooked = false;
    bool hooksFlag = false;    // DAT_180423572

    // Adjacency check before hooking: both present and exactly 4 bytes apart.
    static bool Adjacent(uint64_t frametime, uint64_t unbounded)
    {
        if (frametime == 0 || unbounded == 0)
            return true;   // the body only refuses on a non-zero, non-4 gap
        return unbounded - frametime == static_cast<uint64_t>(kGlobalGap);
    }

    bool Ready() const { return accumulate && frametime && unbounded; }
};

// 0x1801f7fa0 — CNetChan ProcessPacket / SendDatagram fake-ping scans (476 bytes)
//   Verbatim:
//     [PAT] CNetChan::ProcessPacket = %p %s
//     [PAT] CNetChan::SendDatagram  = %p %s
//     [MH] ProcessPacket: %s | SendDatagram: %s
//     [FAKEPING] signature missing; fakeping disabled this session
//   Both hooks created (0x1801f7680 / 0x1801f76e0) set DAT_1803facfa = 1;
//   otherwise it is cleared.
struct FakePingScan
{
    static constexpr uint64_t kScanAddr = 0x1801f7fa0;
    static constexpr uint64_t kProcessPacketHook = 0x1801f7680;
    static constexpr uint64_t kSendDatagramHook  = 0x1801f76e0;
    static constexpr uint64_t kEnabledFlag = 0x1803facfa;

    bool processPacket = false;
    bool sendDatagram = false;
    bool enabled = false;

    bool Apply(bool haveProcess, bool haveSend)
    {
        processPacket = haveProcess;
        sendDatagram = haveSend;
        enabled = haveProcess && haveSend;
        return enabled;
    }
};

struct TimePattern
{
    int copies = 0;            // collected, capped at 4
    uint64_t netTimeForScale = 0;  // DAT_1803fa398
    bool disabled = true;

    int Collect(int foundCopies)
    {
        copies = foundCopies > kTimeCopyLimit ? kTimeCopyLimit : foundCopies;
        return copies;
    }

    // match + 8 + *(int32*)(match + 4)
    static uint64_t ResolveNetTime(uint64_t match)
    {
        if (match == 0)
            return 0;
        const int32_t rel = *reinterpret_cast<const int32_t*>(match + 4);
        return match + 8 + static_cast<uint64_t>(static_cast<int64_t>(rel));
    }

    static int HooksToInstall(int copies) { return copies < kMaxTimeHooks ? copies : kMaxTimeHooks; }
};

} // namespace resolver
} // namespace sf
