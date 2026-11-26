// Self-test for the weapon-backend layer and the seed/prediction chain.
//
// Proves:
//   1. dispatch: a base name routes to the backend whose vfunc04 body the image
//      contains, and every distinct body has its own implementation,
//   2. seed chain: command number -> seed is stable, the prediction seed is the
//      31-bit form of it, SWCS uses the decimal-text derivation,
//   3. one shot per distinct body family resolves command -> seed -> spread ->
//      compensated command and lands on the aim,
//   4. families with different cone math disagree for the same command number,
//   5. Octo's body (0x1800779b0) is a genuine no-op.

#include <cmath>
#include <cstdio>
#include <cstring>

#include "../nospread/angle.h"
#include "../seed/seed_chain.h"
#include "../weapon/backend_table.h"
#include "../weapon/backends.h"
#include "shot_pipeline.h"

namespace {

int g_failures = 0;

void Check(bool condition, const char* what)
{
    std::printf("%s  %s\n", condition ? "PASS" : "FAIL", what);
    if (!condition)
        ++g_failures;
}

void CheckNear(float actual, float expected, float tolerance, const char* what)
{
    const bool ok = std::fabs(actual - expected) <= tolerance;
    std::printf("%s  %s (got %.5f, want %.5f)\n", ok ? "PASS" : "FAIL", what, actual, expected);
    if (!ok)
        ++g_failures;
}

struct FamilyCase
{
    const char* representative;
    uint64_t address;
    const char* label;
    sf::weapon::Entropy entropy;
};

const FamilyCase kFamilies[] = {
    { "M9K",              0x1800779c0ull, "generic  0x1800779c0", sf::weapon::Entropy::InImage },
    { "CW2.0",            0x180079040ull, "cw       0x180079040", sf::weapon::Entropy::LuaMathRandom },
    { "Octo",             0x1800779b0ull, "no-op    0x1800779b0", sf::weapon::Entropy::InImage },
    { "SWCS",             0x1800860c0ull, "swcs     0x1800860c0", sf::weapon::Entropy::InImage },
    { "ARC9",             0x180088980ull, "arc9     0x180088980", sf::weapon::Entropy::LuaNamedGlobal },
    { "ArcCW",            0x180082ed0ull, "arcw     0x180082ed0", sf::weapon::Entropy::LuaMathRandom },
    { "TacRP",            0x18008bdf0ull, "tacrp    0x18008bdf0", sf::weapon::Entropy::InImage },
    { "TFA",              0x18007fdb0ull, "tfa      0x18007fdb0", sf::weapon::Entropy::LuaNamedGlobal },
    { "UTSWB",            0x18007c0e0ull, "utswb    0x18007c0e0", sf::weapon::Entropy::LuaMathRandom },
    { "Z-City/Homigrad",  0x18009ebc0ull, "zcity    0x18009ebc0", sf::weapon::Entropy::InImage },
    { "ZS/SunRust",       0x180092570ull, "zs       0x180092570", sf::weapon::Entropy::InImage },
};

constexpr int kFamilyCount = static_cast<int>(sizeof(kFamilies) / sizeof(kFamilies[0]));

sf::weapon::WeaponProfile ProfileFor(int i)
{
    sf::weapon::WeaponProfile p;
    p.baseName = kFamilies[i].representative;
    p.spread = 0.02f;
    p.inaccuracy = 0.05f;
    p.bullets = 1;

    switch (kFamilies[i].address)
    {
    case 0x180088980ull:                 // ARC9: centroid from 0x1800880b0
        p.initialYaw = 0.30f;
        p.initialPitch = -0.20f;
        break;
    case 0x18007fdb0ull:                 // TFA: ComputeBulletDeviation results
        p.initialYaw = 0.80f;
        p.initialPitch = -0.35f;
        break;
    case 0x18007c0e0ull:                 // UTSWB: distance falloff path
        p.ownBody = true;
        p.distanceFalloff = true;
        p.distance = 2000.f;
        p.falloffRadius = 0.4f;
        p.coneScale = 1.f;
        break;
    case 0x18009ebc0ull:                 // Z-City: stored deviation pair
        p.weaponYaw = 0.02f;
        p.weaponPitch = -0.015f;
        break;
    case 0x180092570ull:                 // ZS: stored angles in degrees
        p.weaponYaw = 30.f;
        p.weaponPitch = 1.5f;
        break;
    default:
        break;
    }
    return p;
}

} // namespace

int main()
{
    using namespace sf;
    using namespace sf::weapon;

    std::printf("backends in table: %d\n", kBackendCount);
    Check(kBackendCount == 22, "all 22 backends from RTTI are present");
    Check(DistinctBodyCount() == 11, "22 backends resolve to 11 distinct vfunc04 bodies");

    // ---------------------------------------------------------- dispatch
    const BackendEntry* arc9Entry = FindBackend("ARC9");
    Check(arc9Entry != nullptr && arc9Entry->compensationAddress == 0x180088980ull,
          "ARC9 routes to its own vfunc04 (0x180088980)");

    const BackendEntry* cwEntry = FindBackend("CW2.0");
    Check(cwEntry != nullptr && cwEntry->compensationAddress == 0x180079040ull,
          "CW2.0 routes to the shared CW-family body (0x180079040)");

    const BackendEntry* m9kEntry = FindBackend("M9K");
    Check(m9kEntry != nullptr && m9kEntry->compensationAddress == 0x1800779c0ull,
          "M9K routes to the shared generic body (0x1800779c0)");

    const BackendEntry* octoEntry = FindBackend("Octo");
    Check(octoEntry != nullptr && octoEntry->compensationAddress == 0x1800779b0ull,
          "Octo routes to the shared no-op body (0x1800779b0)");

    const BackendEntry* unknown = FindBackend("SomeWeaponBaseThatDoesNotExist");
    Check(unknown != nullptr && std::strcmp(unknown->baseName, "Generic") == 0,
          "an unknown base falls back to Generic");

    // The generic sampler belongs to exactly one address.
    bool genericIsIsolated = true;
    for (int i = 0; i < kBackendCount; ++i)
    {
        if (kBackends[i].kind == BackendKind::Generic &&
            kBackends[i].compensationAddress != 0x1800779c0ull)
            genericIsIsolated = false;
    }
    Check(genericIsIsolated, "the generic sampler is used only by the generic body's owners");

    // Every family's entropy label matches the trace.
    bool entropyMatches = true;
    for (int i = 0; i < kFamilyCount; ++i)
    {
        const BackendEntry* e = FindBackend(kFamilies[i].representative);
        if (e == nullptr || e->entropy != kFamilies[i].entropy)
            entropyMatches = false;
    }
    Check(entropyMatches, "every body's entropy source matches its traced termination");

    // -------------------------------------------------------- seed chain
    const uint32_t seedA = seed::CommandSeed(1000);
    const uint32_t seedB = seed::CommandSeed(1000);
    const uint32_t seedC = seed::CommandSeed(1001);
    Check(seedA == seedB, "command seed is stable for the same command number");
    Check(seedA != seedC, "command seed changes with the command number");

    const uint32_t prediction = seed::PredictionSeed(1000);
    Check(prediction == (seedA & 0x7fffffffu), "prediction seed is the 31-bit masked command seed");

    const uint32_t spread = seed::SpreadSeed(1000);
    Check(spread != seedA, "spread seed uses the separate decimal-string derivation");
    std::printf("INFO  cmd 1000 -> commandSeed=0x%08x predictionSeed=0x%08x spreadSeed=0x%08x\n",
                seedA, prediction, spread);

    // ------------------------------------------- observed ran1 generator
    {
        seed::Ran1 a(static_cast<int32_t>(spread));
        seed::Ran1 b(static_cast<int32_t>(spread));
        Check(a.Next() == b.Next(), "ran1 stream is deterministic for the same seed");

        bool inRange = true;
        for (int i = 0; i < 64; ++i)
        {
            const float v = a.Float01();
            if (!(v >= 0.f && v < 1.f))
                inRange = false;
        }
        Check(inRange, "ran1 draws normalize into [0,1)");
    }

    // ------------------------------------------ one shot per body family
    const QAngle aim(2.0f, 45.0f, 0.0f);
    constexpr int kCommandNumber = 1000;

    nospread::ConeOffset offsets[kFamilyCount];

    for (int i = 0; i < kFamilyCount; ++i)
    {
        const WeaponProfile profile = ProfileFor(i);
        const ShotOutcome shot = FireShot(profile, aim, kCommandNumber);

        char what[192];
        std::snprintf(what, sizeof(what), "%s: dispatched to its own body", kFamilies[i].label);
        Check(shot.valid && shot.backend != nullptr &&
              shot.backend->compensationAddress == kFamilies[i].address, what);

        offsets[i] = shot.offset;

        std::printf("INFO  %s offset yaw=%.5f pitch=%.5f dz=%.5f compensated=%d\n",
                    kFamilies[i].label, shot.offset.yaw, shot.offset.pitch, shot.deltaZ,
                    shot.compensated ? 1 : 0);

        if (kFamilies[i].address == 0x1800779b0ull)
        {
            CheckNear(shot.offset.yaw, 0.f, 0.f, "Octo: body returns a zero yaw offset");
            CheckNear(shot.offset.pitch, 0.f, 0.f, "Octo: body returns a zero pitch offset");
            Check(!shot.compensated && shot.command.pitch == aim.pitch &&
                  shot.command.yaw == aim.yaw, "Octo: command is left untouched");
            continue;
        }

        std::snprintf(what, sizeof(what), "%s: compensated shot lands on the aim pitch",
                      kFamilies[i].label);
        CheckNear(shot.missPitch, 0.f, 0.01f, what);
        std::snprintf(what, sizeof(what), "%s: compensated shot lands on the aim yaw",
                      kFamilies[i].label);
        CheckNear(shot.missYaw, 0.f, 0.01f, what);
    }

    // ------------------------------------ families must not share one sampler
    struct Pair { int a; int b; const char* what; };
    const Pair kMustDiffer[] = {
        { 0, 1, "generic and CW produce different corrections for the same command" },
        { 0, 3, "generic and SWCS produce different corrections for the same command" },
        { 0, 4, "generic and ARC9 produce different corrections for the same command" },
        { 1, 3, "CW and SWCS produce different corrections for the same command" },
        { 3, 5, "SWCS and ArcCW produce different corrections for the same command" },
        { 4, 6, "ARC9 and TacRP produce different corrections for the same command" },
        { 7, 8, "TFA and UTSWB produce different corrections for the same command" },
        { 9, 10, "Z-City and ZS produce different corrections for the same command" },
    };

    for (const Pair& pair : kMustDiffer)
    {
        const bool differs = std::fabs(offsets[pair.a].yaw - offsets[pair.b].yaw) > 1e-6f ||
                             std::fabs(offsets[pair.a].pitch - offsets[pair.b].pitch) > 1e-6f;
        Check(differs, pair.what);
    }

    int distinctPairs = 0;
    for (int i = 0; i < kFamilyCount; ++i)
    {
        bool unique = true;
        for (int j = 0; j < i; ++j)
        {
            if (std::fabs(offsets[i].yaw - offsets[j].yaw) <= 1e-6f &&
                std::fabs(offsets[i].pitch - offsets[j].pitch) <= 1e-6f)
                unique = false;
        }
        if (unique)
            ++distinctPairs;
    }
    std::printf("INFO  distinct correction pairs across %d families: %d\n", kFamilyCount, distinctPairs);
    Check(distinctPairs == kFamilyCount, "all 11 bodies yield distinct corrections");

    // ------------------------------------------- determinism across calls
    {
        WeaponProfile profile;
        profile.baseName = "SWCS";
        profile.spread = 0.03f;
        profile.inaccuracy = 0.02f;

        const QAngle zero(0.f, 0.f, 0.f);
        const ShotOutcome first = FireShot(profile, zero, 777);
        const ShotOutcome second = FireShot(profile, zero, 777);
        Check(first.valid && second.valid, "repeated shots resolved");
        CheckNear(first.offset.yaw, second.offset.yaw, 0.0f,
                  "same command number produces the same cone (yaw)");
        CheckNear(first.offset.pitch, second.offset.pitch, 0.0f,
                  "same command number produces the same cone (pitch)");
    }

    std::printf("\n%s (%d failure%s)\n", g_failures == 0 ? "SHOT SELFTEST PASS" : "SHOT SELFTEST FAIL",
                g_failures, g_failures == 1 ? "" : "s");
    return g_failures == 0 ? 0 : 1;
}
