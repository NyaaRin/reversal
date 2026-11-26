#pragma once
// Netvar store (Stage 3.11)  —  [NWSTORE]
//
//   Manager resolution   0x18006c9b0 (468 bytes)
//     Scans the first 0x100 bytes of the GetNWString code for the byte run
//     'H' 0x75 0x0d (48 75 0D = jne +0x0d). Each hit yields
//     target = 7 + offset + int32(match + 3). At most 8 unique targets are kept
//     (DAT_1803fafe0 is the GetNWString body). The manager is only accepted when
//     exactly one target is unique; the target is then dereferenced and must be
//     readable for 0x30 bytes.
//
//   Native read toggle   0x180103c10 (326 bytes)
//     config root 0x93fd561a96ab0c67 + key 0x1efab65b168823bb; field +0x194d;
//     on enable resolves 0x18006d8f0 into DAT_1803faf30 and clears 0x81 (129)
//     entries with stride 0x50.
//
//   Native probe         0x180103d60 (316 bytes)
//     config root 0x93fd561a96ab0c67 + key 0xf13ca7dd4fb3e293; field +0x194c;
//     when armed, every 5000 ms (GetTickCount) it walks players 1..min(max,0x80)
//     and calls 0x18006d430 for at most two non-local players.
//
//   Per-entity compare   0x18006d430 (657 bytes)
//     Each row is 0xA0 bytes: type at +0x48, length at +0x30, string at +0x20.
//     Only type 4 is compared (length + memcmp against the native read); the
//     counters are agree / mismatch / non-string, logged with the summary only
//     when something changed.
//
// Verbatim strings:
//   "[NWSTORE] manager global @ %p -> mgr=%p (unique rip-global in GetNWString)\n"
//   "[NWSTORE] manager NOT resolved: %d rip-globals in GetNWString, %d of them unique (need exactly 1)\n"
//   "[NWSTORE] native reads %s\n"
//   "[NWSTORE] native probe %s\n"
//   "[NWSTORE] ent=%d: row unreadable (mgr=%p)\n"
//   "[NWSTORE] ent=%d: %d entry(ies)\n"
//   "[NWSTORE]   %-9s '%s' type=%d ref=%d native='%s' lua='%s'\n"
//   "[NWSTORE] ent=%d: %d agree, %d MISMATCH, %d non-string\n"

#include <cstdint>

namespace sf {
namespace resolver {

inline constexpr uint64_t kManagerScan    = 0x18006c9b0;
inline constexpr uint64_t kEntityCompare  = 0x18006d430;
inline constexpr uint64_t kReadToggle     = 0x180103c10;
inline constexpr uint64_t kProbeTick      = 0x180103d60;
inline constexpr uint64_t kNativeReader   = 0x18006d8f0;

inline constexpr uint64_t kRoot           = 0x93fd561a96ab0c67ULL;
inline constexpr uint64_t kReadKey        = 0x1efab65b168823bbULL;
inline constexpr uint64_t kProbeKey       = 0xf13ca7dd4fb3e293ULL;

inline constexpr int kScanWindow     = 0x100;
inline constexpr int kMaxCandidates  = 8;
inline constexpr int kManagerReadSize = 0x30;
inline constexpr int kEntryStride    = 0x50;
inline constexpr int kEntryCount     = 0x81;   // 129
inline constexpr int kMaxProbePlayers = 2;
inline constexpr uint32_t kProbeIntervalMs = 5000;
inline constexpr int kTypeString     = 4;      // row type compared
inline constexpr int kEntryTypeOff   = 0x48;
inline constexpr int kEntryLenOff    = 0x30;
inline constexpr int kEntryStrOff    = 0x20;

struct NetStore
{
    enum class ManagerResult { Resolved, NotFound, NotUnique };

    // candidates: number of unique RIP-globals found in the scan window.
    static ManagerResult Accept(int candidates)
    {
        if (candidates == 0)
            return ManagerResult::NotFound;
        if (candidates != 1)
            return ManagerResult::NotUnique;
        return ManagerResult::Resolved;
    }

    struct Stats
    {
        int agree = 0;
        int mismatch = 0;
        int nonString = 0;
        int lastAgree = 0;      // DAT_1803e9570
        int lastMismatch = 0;   // DAT_1803e6fe8
    };

    // Returns true when the summary line should be emitted.
    static bool Account(Stats& s, int agree, int mismatch, int nonString)
    {
        s.agree = agree;
        s.mismatch = mismatch;
        s.nonString = nonString;
        const bool changed = mismatch != 0 || agree != s.lastAgree || s.lastMismatch != 0;
        if (changed)
        {
            s.lastMismatch = mismatch;
            s.lastAgree = agree;
        }
        return changed;
    }

    // Row comparison for type 4: equal length and equal bytes.
    static bool RowMatches(int type, bool lengthEqual, bool bytesEqual)
    {
        if (type != kTypeString)
            return false;
        return lengthEqual && bytesEqual;
    }

    // The probe fires only when the stored deadline has passed.
    static bool ProbeDue(uint32_t now, uint32_t& deadline)
    {
        if (now < deadline)
            return false;
        deadline = now + kProbeIntervalMs;
        return true;
    }

    static int PlayersToProbe(int maxClients)
    {
        return maxClients < kMaxProbePlayers ? maxClients : kMaxProbePlayers;
    }
};

} // namespace resolver
} // namespace sf
