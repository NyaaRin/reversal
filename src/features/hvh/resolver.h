#pragma once
// Features::HVH::Resolver::ResolverFeature  (Stage 3.8)
// vtable 0x33bc60, slot 1 = 0x1800bc9e0, slot 11 = 0x1800bcc10.
//
// Slot 1 walks every client slot 1..maxClients (capped at 0x80) twice per tick:
//
//   pass A (armed by 0x1800bc930): skip null/bad/dormant/!alive, then
//          0x1800b5be0(entity, origin) — the LBY/animation probe.
//   pass B (armed by 0x1800b81b0): compare the cached alive state at
//          (&DAT_180561252)[slot * 0x168]; a true→false edge calls
//          0x1800b8740(slot), a false→true edge calls 0x1800b8c50(slot, entity).
//          0x1800bc360 closes the pass.
//
// Slot 11 (0x1800bcc10) is the aim-record fix: when the entity argument equals
// the local player, 0x1800bace0(param+4, param+0x10) rewrites the record.
//
// The cache array, the two pass keys and the three helpers live outside this
// family; this header models the state machine they drive, with the entity
// access behind a table so the edge logic is testable.

#include <cstdint>

namespace sf {
namespace hvh {

inline constexpr uint64_t kResolverRoot = 0x2d8f695138585a77ULL; // same root as lag comp
inline constexpr int kMaxClientsCap = 0x80;                      // loop guard i < 0x81
inline constexpr int kResolverSlotStride = 0x168;                // &DAT_180561252[i*0x168]

// The alive cache is one static block, not a free-standing byte array. The
// initializer at 0x1800bc790 walks &DAT_1805610f0 to &DAT_18056c658 in 0x168
// byte steps (0x5a dwords), clearing each record and calling 0x1800b8590 /
// 0x1800b89a0. (0x18056c658 - 0x1805610f0) / 0x168 = 0x81 records / 0xB568
// bytes, so slots 0..0x80 are all backed. DAT_180561252 is offset +0x162 (the
// alive byte) inside each record.
inline constexpr uint64_t kResolverCacheBase = 0x1805610f0ULL;
inline constexpr uint64_t kResolverCacheEnd = 0x18056c658ULL;
inline constexpr int kResolverCacheRecords = 0x81;
inline constexpr int kResolverCacheBytes = 0xB568;
inline constexpr uint64_t kAliveFlag = 0x180561252ULL;
inline constexpr int kAliveFlagOffset = 0x162;
inline constexpr uint64_t kCacheInitializer = 0x1800bc790ULL;

struct ResolverFeature
{
    static constexpr int kMaxClientsCap = ::sf::hvh::kMaxClientsCap;
    static constexpr int kResolverSlotStride = ::sf::hvh::kResolverSlotStride;
    static constexpr uint64_t kCacheBase = ::sf::hvh::kResolverCacheBase;
    static constexpr uint64_t kCacheEnd = ::sf::hvh::kResolverCacheEnd;
    static constexpr int kCacheRecords = ::sf::hvh::kResolverCacheRecords;
    static constexpr int kCacheBytes = ::sf::hvh::kResolverCacheBytes;
    static constexpr uint64_t kAliveFlag = ::sf::hvh::kAliveFlag;
    static constexpr int kAliveFlagOffset = ::sf::hvh::kAliveFlagOffset;
    static constexpr uint64_t kCacheInitializer = ::sf::hvh::kCacheInitializer;
    static constexpr uint64_t kVtableRva = 0x33bc60;
    static constexpr uint64_t kVfunc01    = 0x1800bc9e0;
    static constexpr uint64_t kVfunc11    = 0x1800bcc10;
    static constexpr uint64_t kPassA      = 0x1800bc930;
    static constexpr uint64_t kPassB      = 0x1800b81b0;
    static constexpr uint64_t kProbe      = 0x1800b5be0;
    static constexpr uint64_t kOnDeath    = 0x1800b8740;
    static constexpr uint64_t kOnAlive    = 0x1800b8c50;
    static constexpr uint64_t kClosePass  = 0x1800bc360;
    static constexpr uint64_t kAimRecord  = 0x1800bace0;

    struct Player
    {
        bool present = false;
        bool readable = true;
        bool dormant = false;
        bool alive = false;
        float origin[3] = { 0.f, 0.f, 0.f };
    };

    // Mirrors (&DAT_180561252)[slot * 0x168] for the slots the engine exposes.
    bool aliveCache[kMaxClientsCap + 1] = {};

    int probed = 0;
    int deaths = 0;
    int revivals = 0;

    void Tick(const Player* players, int maxClients, bool passA, bool passB)
    {
        if (passA)
        {
            for (int i = 1; i <= maxClients && i <= kMaxClientsCap; ++i)
            {
                const Player& p = players[i];
                if (!p.present || !p.readable || p.dormant || !p.alive)
                    continue;
                Probe(i, p);
            }
        }

        if (!passB)
            return;

        for (int i = 1; i <= maxClients && i <= kMaxClientsCap; ++i)
        {
            const Player& p = players[i];
            if (!p.present || !p.readable || p.dormant)
                continue;

            const bool wasAlive = aliveCache[i];
            if (wasAlive && !p.alive)
                OnDeath(i);
            aliveCache[i] = p.alive;
            if (!p.alive)
                continue;
            OnAlive(i, p);
        }
    }

    void Probe(int slot, const Player& p) { (void)slot; (void)p; ++probed; }
    void OnDeath(int slot) { (void)slot; ++deaths; }
    void OnAlive(int slot, const Player& p) { (void)slot; (void)p; ++revivals; }

    // Slot 11: only the local player's record is touched.
    static bool ShouldFixAimRecord(bool entityIsLocalPlayer) { return entityIsLocalPlayer; }
};

} // namespace hvh
} // namespace sf
