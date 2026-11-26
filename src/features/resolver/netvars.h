#pragma once
// [NETVARS] table builder  —  0x18002b540 (6758 bytes)
//
// Runs under std::mutex DAT_1803e9140 (`_Mtx_lock`; failures throw C++ error 5,
// and a recursion sentinel DAT_1803e918c == 0x7fffffff is lowered to 0x7ffffffe
// and throws error 6). Every config key is looked up by hashing with FNV-1a
// 64-bit — basis 0x14650fb0739d0383, prime 0x100000001b3 — over the key string,
// then walking the intrusive map at *param_1 (nodes +0x00/+0x10/+0x18/+0x20,
// colour byte +0x19, key hash +0x20).
//
// Keys, in read order:
//   netvars.override.name    (0x80)  -> DAT_1803ebb90
//   netvars.override.group   (0x4000)-> DAT_1803e9ae8
//   netvars.override.job     (0x2000)-> DAT_1803ea258
//   netvars.count            (8)     -> per-source loop
//     path, enabled, tpl_enabled, tpl_first, tpl, keycount, key.<n>
//   netvars.version                  -> migration when < 6
//
// The per-source loop (iVar29 < netvars.count) reads `path`, tests `enabled`
// against "1" (0x18034124c) or "true" (0x18033e5dc), the same pair Stage 3.10's
// extrapolate restore writes, then builds `tpl` and up to 0x10 `key.<n>`
// entries. Version < 6 triggers a migration over every source whose name is
// still empty, re-seeding the NW pseudo-store; the summary is
// "[NETVARS] migrated config v%d -> v%d: %d source(s) added, %d NW pseudo-store(s)
// re-seeded with name keys". It always sets DAT_180423751 = 1 and increments
// DAT_1803e9190. The else branch (no `netvars.count`) calls 0x180029fc0().

#include <cstdint>
#include <cstddef>

namespace sf {
namespace resolver {

inline constexpr uint64_t kNetvarsBuilder = 0x18002b540;
inline constexpr uint64_t kHostScan   = 0x1801f7d00;
inline constexpr uint64_t kPingScan   = 0x1801f7fa0;
inline constexpr uint64_t kSetupPass  = 0x1801f9180;
inline constexpr uint64_t kInterfaceDump = 0x180017150;
inline constexpr uint64_t kMutex         = 0x1803e9140;
inline constexpr int kMutexSentinel      = 0x7fffffff;
inline constexpr uint64_t kNameContainer = 0x1803ebb90;
inline constexpr uint64_t kGroupContainer = 0x1803e9ae8;
inline constexpr uint64_t kJobContainer  = 0x1803ea258;
inline constexpr uint64_t kVersionFlag   = 0x180423751;
inline constexpr uint64_t kRunCounter    = 0x1803e9190;

inline constexpr uint64_t kHashBasis = 0x14650fb0739d0383ULL;
inline constexpr uint64_t kHashPrime = 0x100000001b3ULL;

inline constexpr int kMaxSources = 8;    // clamp at DAT_18033c6a4 (8)
inline constexpr int kMaxKeys    = 0x10; // clamp at DAT_18033c6a8 (0x10)
inline constexpr int kCurrentVersion = 6;

// FNV-1a 64 over a NUL-terminated key, exactly as the map lookup computes it.
inline uint64_t Fnv1a64(const char* text)
{
    uint64_t h = kHashBasis;
    for (const unsigned char* p = reinterpret_cast<const unsigned char*>(text);
         p != nullptr && *p != 0; ++p)
    {
        h = (h ^ *p) * kHashPrime;
    }
    return h;
}

struct NetvarsConfig
{
    int sources = 0;     // netvars.count (0..8)
    int version = 1;     // netvars.version
    bool haveName = false;
    bool haveGroup = false;
    bool haveJob = false;

    // The builder clamps count into [0, 8]; a negative value becomes 0.
    static int ClampSources(int count)
    {
        if (count < 0)
            return 0;
        return count > kMaxSources ? kMaxSources : count;
    }

    static int ClampKeys(int count)
    {
        if (count < 0)
            return 0;
        return count > kMaxKeys ? kMaxKeys : count;
    }

    // "enabled" / "tpl_enabled" / "tpl_first" accept "1" or "true".
    static bool ParseBool(const char* value)
    {
        if (value == nullptr)
            return false;
        if (value[0] == '1' && value[1] == 0)
            return true;
        return value[0] == 't' && value[1] == 'r' && value[2] == 'u' && value[3] == 'e';
    }

    bool NeedsMigration() const { return version < kCurrentVersion; }

    // The migration re-seeds only sources with an empty name row.
    static bool ShouldReseed(bool nameEmpty, bool rowValid)
    {
        return nameEmpty && rowValid;
    }
};

} // namespace resolver
} // namespace sf
