#pragma once
// The 22 weapon backends present in the image.
//
// Base names are observed (each backend's vfunc00 returns the literal below).
// Compensation addresses are observed: vtable slot 4 targets from
// `re/dump/vtable_methods.tsv`, each with a corpus file under
// `re/dump/decompile/<VA>_*.c` that was read for this stage.
//
// Addresses group exactly as the binary does: eight backends share 0x1800779c0,
// four share 0x180079040, two share 0x1800779b0, and eight have their own body.
// No entry is routed to the generic sampler.
//
// `entropy` records where that body's draw actually terminates, which is what
// this stage traced:
//   InImage          the draw math is inside m64.dll and is reproduced exactly.
//   LuaMathRandom    the body calls Lua's math.random; seeding, bounds, order and
//                    scaling are observed, LuaJIT's PRNG is another module.
//   LuaNamedGlobal   the body calls a named Lua global the game supplies.
//   EngineRandomFloat the body calls the engine's RandomFloat through a resolved
//                    vtable/pointer; the bounds are observed, the PRNG is not here.

#include <cstdint>
#include <cstring>

namespace sf {
namespace weapon {

enum class BackendKind
{
    Generic,          // 0x1800779c0
    Cw,               // 0x180079040
    NoCompensation,   // 0x1800779b0
    Swcs,             // 0x1800860c0
    Arc9,             // 0x180088980
    ArcCW,            // 0x180082ed0
    TacRP,            // 0x18008bdf0
    Tfa,              // 0x18007fdb0
    Utswb,            // 0x18007c0e0
    ZCity,            // 0x18009ebc0
    Zs,               // 0x180092570
};

enum class Entropy
{
    InImage,
    LuaMathRandom,
    LuaNamedGlobal,
    EngineRandomFloat,
};

struct BackendEntry
{
    const char* baseName;            // observed via vfunc00
    uint64_t compensationAddress;    // observed vtable slot 4 target (full VA)
    BackendKind kind;                // implementation that owns this address
    Entropy entropy;                 // where the body's draw terminates
};

inline constexpr BackendEntry kBackends[] = {
    { "ARC9",            0x180088980ull, BackendKind::Arc9,           Entropy::LuaNamedGlobal },
    { "ArcCW",           0x180082ed0ull, BackendKind::ArcCW,          Entropy::LuaMathRandom },
    { "CombineWeaponry", 0x1800779c0ull, BackendKind::Generic,        Entropy::InImage },
    { "CSGO",            0x1800779c0ull, BackendKind::Generic,        Entropy::InImage },
    { "CW20",            0x180079040ull, BackendKind::Cw,             Entropy::LuaMathRandom },
    { "CW2.0",           0x180079040ull, BackendKind::Cw,             Entropy::LuaMathRandom },
    { "FAS2",            0x180079040ull, BackendKind::Cw,             Entropy::LuaMathRandom },
    { "Generic",         0x1800779c0ull, BackendKind::Generic,        Entropy::InImage },
    { "HL2",             0x1800779c0ull, BackendKind::Generic,        Entropy::InImage },
    { "HVH2/CSS",        0x1800779c0ull, BackendKind::Generic,        Entropy::InImage },
    { "M9K",             0x1800779c0ull, BackendKind::Generic,        Entropy::InImage },
    { "Octo",            0x1800779b0ull, BackendKind::NoCompensation, Entropy::InImage },
    { "ORP/TPIK camera", 0x1800779b0ull, BackendKind::NoCompensation, Entropy::InImage },
    { "PTP",             0x1800779c0ull, BackendKind::Generic,        Entropy::InImage },
    { "SWB",             0x180079040ull, BackendKind::Cw,             Entropy::LuaMathRandom },
    { "SWCS",            0x1800860c0ull, BackendKind::Swcs,           Entropy::InImage },
    { "TacRP",           0x18008bdf0ull, BackendKind::TacRP,          Entropy::InImage },
    { "TFA",             0x18007fdb0ull, BackendKind::Tfa,            Entropy::LuaNamedGlobal },
    { "TTT",             0x1800779c0ull, BackendKind::Generic,        Entropy::InImage },
    { "UTSWB",           0x18007c0e0ull, BackendKind::Utswb,          Entropy::LuaMathRandom },
    { "Z-City/Homigrad", 0x18009ebc0ull, BackendKind::ZCity,          Entropy::InImage },
    { "ZS/SunRust",      0x180092570ull, BackendKind::Zs,             Entropy::InImage },
};

inline constexpr int kBackendCount = static_cast<int>(sizeof(kBackends) / sizeof(kBackends[0]));

// Route lookup on the base name the weapon's own backend reports. An unknown
// base resolves to "Generic", which is the observed catch-all entry.
inline const BackendEntry* FindBackend(const char* baseName)
{
    if (baseName != nullptr && baseName[0] != '\0')
    {
        for (int i = 0; i < kBackendCount; ++i)
        {
            if (std::strcmp(kBackends[i].baseName, baseName) == 0)
                return &kBackends[i];
        }
    }

    for (int i = 0; i < kBackendCount; ++i)
    {
        if (std::strcmp(kBackends[i].baseName, "Generic") == 0)
            return &kBackends[i];
    }
    return nullptr;
}

inline int DistinctBodyCount()
{
    int distinct = 0;
    for (int i = 0; i < kBackendCount; ++i)
    {
        bool seen = false;
        for (int j = 0; j < i; ++j)
            if (kBackends[j].compensationAddress == kBackends[i].compensationAddress)
                seen = true;
        if (!seen)
            ++distinct;
    }
    return distinct;
}

} // namespace weapon
} // namespace sf
