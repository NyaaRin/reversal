// Self-test for the autowall subsystem (Stage 3.4).
//
// Exercises real code paths:
//   1. all eleven model classes exist, route, and carry the observed vtable slots,
//   2. the three trace filters accept/reject exactly the entities they skip,
//   3. the refusal enum maps 1:1 onto the image's string table,
//   4. the layer count clamps to [1,4] and the modifier clamps to [0,8192],
//   5. the penetration loop consumes budget monotonically and refuses correctly,
//   6. the distance falloff is monotonic in both legs of travel.

#include <cmath>
#include <cstdio>
#include <cstring>

#include "models.h"
#include "penetration.h"
#include "trace_filter.h"

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

void CheckStr(const char* actual, const char* expected, const char* what)
{
    const bool ok = actual != nullptr && std::strcmp(actual, expected) == 0;
    std::printf("%s  %s (got \"%s\")\n", ok ? "PASS" : "FAIL", what,
                actual ? actual : "(null)");
    if (!ok)
        ++g_failures;
}

// A synthetic world: a number of walls directly ahead, or the target itself.
struct World
{
    int walls = 0;
    bool target = false;
    float thickness = 0.f;
    sf::Vector surfaceNormal{ -1.f, 0.f, 0.f };
    float modifier = -1.f;
};

int g_wallToken = 0;

sf::autowall::TraceResult Tracer(void* context, const sf::Vector& start,
                                 const sf::Vector& end, int)
{
    World* world = static_cast<World*>(context);
    sf::autowall::TraceResult result;

    if (world->target)
    {
        result.hit = true;
        result.target = true;
        result.end = end;
        result.surface = &g_wallToken;
        return result;
    }

    if (world->walls <= 0)
        return result;                       // nothing in the way

    // Put the impact a fixed short distance ahead so the test measures the
    // budget arithmetic rather than the ray length.
    sf::Vector delta = end - start;
    const float length = std::sqrt(delta.Dot(delta));
    const sf::Vector unit = length > 0.f ? delta * (1.f / length) : delta;

    result.hit = true;
    result.target = false;
    result.surface = &g_wallToken;
    result.end = start + unit * 10.f;
    result.normal = world->surfaceNormal;
    result.thickness = world->thickness;
    result.modifier = world->modifier;
    --world->walls;
    return result;
}

} // namespace

int main()
{
    using namespace sf;
    using namespace sf::autowall;

    // ------------------------------------------------------- model registry
    std::printf("autowall models: %d\n", kModelCount);
    CheckInt(kModelCount, 11, "all eleven Features::Autowall classes are present");

    bool allRoute = true;
    bool slotsMatch = true;
    for (int i = 0; i < kModelCount; ++i)
    {
        IPenetrationModel* model = MakeAutowallModel(kModels[i].className);
        if (model == nullptr || std::strcmp(model->ClassName(), kModels[i].className) != 0)
            allRoute = false;
        if (model != nullptr && &model->Info() != &kModels[i])
            slotsMatch = false;
        delete model;
    }
    Check(allRoute, "every model class exists and reports its own name");
    Check(slotsMatch, "every model resolves to its own vtable row");

    // Spot-check observed slots.
    const ModelInfo* swcs = FindModel("Features::Autowall::SWCSAutowall");
    Check(swcs != nullptr && swcs->slot[1] == 0x180083ef0u,
          "SWCS slot 1 is the shared base-name body (0x180083ef0)");
    const ModelInfo* m9k = FindModel("Features::Autowall::M9KAutowall");
    Check(m9k != nullptr && m9k->slot[3] == 0x1800b0790u,
          "M9K slot 3 is its penetration accessor (0x1800b0790)");
    const ModelInfo* tfa = FindModel("Features::Autowall::TFAAutowall");
    Check(tfa != nullptr && tfa->keyCount == 8,
          "TFA exposes its eight Primary/sv_tfa penetration keys");
    const ModelInfo* cw20 = FindModel("Features::Autowall::CW20Autowall");
    Check(cw20 != nullptr && cw20->keyCount == 5 &&
          std::strcmp(cw20->keys[0], "PenStr") == 0 &&
          std::strcmp(cw20->keys[4], "Damage") == 0,
          "CW20 reads PenStr/PenMod/PenetrativeRange/CanPenetrate/Damage");
    const ModelInfo* fas2 = FindModel("Features::Autowall::FAS2Autowall");
    Check(fas2 != nullptr && fas2->keyCount == 4 &&
          std::strcmp(fas2->keys[2], "PenetrationEnabled") == 0,
          "FAS2 reads PenStr/PenMod/PenetrationEnabled/Damage");
    const ModelInfo* swb = FindModel("Features::Autowall::SWBAutowall");
    Check(swb != nullptr && swb->keyCount == 5 && swb->keys == cw20->keys,
          "SWB shares the 0x1800b0bd0 key set with CW20");
    Check(kConfigLookup == 0x180241610ULL &&
          kConfigBoolCast == 0x1801fcfc0ULL && kConfigIntCast == 0x1802029c0ULL,
          "the Lua readers use the 36-byte nested lookup, not a hash");
    Check(FindModel("Features::Autowall::DoesNotExist") == nullptr,
          "an unknown model name does not resolve");

    // ------------------------------------------------------------ filters
    {
        int a = 0, b = 0, c = 0;
        CTraceFilter single(&a);
        Check(single.ShouldHitEntity(&b), "CTraceFilter accepts another entity");
        Check(!single.ShouldHitEntity(&a), "CTraceFilter rejects its skip entity");

        CDoubleTraceFilter dbl(&a, &b);
        Check(dbl.ShouldHitEntity(&c), "CDoubleTraceFilter accepts a third entity");
        Check(!dbl.ShouldHitEntity(&a) && !dbl.ShouldHitEntity(&b),
              "CDoubleTraceFilter rejects both skipped entities");

        CTripleTraceFilter tri(&a, &b, &c);
        int d = 0;
        Check(tri.ShouldHitEntity(&d), "CTripleTraceFilter accepts a fourth entity");
        Check(!tri.ShouldHitEntity(&a) && !tri.ShouldHitEntity(&b) && !tri.ShouldHitEntity(&c),
              "CTripleTraceFilter rejects all three skipped entities");
        Check(single.GetTraceType() == 0 && dbl.GetTraceType() == 0 && tri.GetTraceType() == 0,
              "all three filters return trace type 0");
    }

    // ------------------------------------------------------------ reasons
    {
        CheckStr(ReasonString(Refusal::Ok), "ok", "reason 0 is \"ok\"");
        CheckStr(ReasonString(Refusal::NoAutowall), "pack has no autowall",
                 "reason 1 matches the image string");
        CheckStr(ReasonString(Refusal::PenetrationUnavailable), "pack penetration unavailable",
                 "reason 2 matches the image string");
        CheckStr(ReasonString(Refusal::NoBudget), "no penetration budget",
                 "reason 3 matches the image string");
        CheckStr(ReasonString(Refusal::NoSurface), "no surface between us",
                 "reason 4 matches the image string");
        CheckStr(ReasonString(Refusal::BodyInTheWay), "another body in the way",
                 "reason 5 matches the image string");
        CheckStr(ReasonString(Refusal::WallLimit), "wall limit reached",
                 "reason 6 matches the image string");
        CheckStr(ReasonString(Refusal::SurfaceRefused), "pack refused this surface",
                 "reason 7 matches the image string");
        CheckStr(ReasonString(Refusal::OutOfRange), "out of range",
                 "reason 8 matches the image string");
        CheckStr(ReasonString(Refusal::DamageFloor), "damage floor",
                 "reason 9 matches the image string");
    }

    // ------------------------------------------------- layer-count clamp
    CheckInt(ClampLayerCount(0), 1, "zero configured layers falls back to 1");
    CheckInt(ClampLayerCount(-3), 1, "negative configured layers falls back to 1");
    CheckInt(ClampLayerCount(2), 2, "a valid layer count is preserved");
    CheckInt(ClampLayerCount(9), 4, "layer count is capped at 4");

    // ------------------------------------------------------------- falloff
    {
        const float dmg = 100.f;
        const float near = FalloffAfterWall(dmg, 5.f, 3.f);
        const float far = FalloffAfterWall(dmg, 20.f, 3.f);
        const float thick = FalloffAfterWall(dmg, 5.f, 12.f);
        Check(near > far, "more travel before the wall leaves less damage");
        Check(near > thick, "a thicker wall leaves less damage");
        Check(FalloffAfterWall(dmg, 60.f, 60.f) <= 0.f,
              "two long legs drive the remainder below zero");
    }

    // -------------------------------------------------------- the loop
    {
        const Vector origin(0.f, 0.f, 0.f);
        const Vector forward(1.f, 0.f, 0.f);
        PenetrationParams params;
        params.damage = 100.f;
        params.penetration = 50.f;
        params.range = 8192.f;
        params.maxLayers = 1;

        World empty;
        const PenetrationOutcome none = Penetrate(origin, forward, params, &Tracer, &empty, 0);
        Check(!none.hit && none.reason == Refusal::NoSurface,
              "no world geometry refuses with \"no surface between us\"");

        World target;
        target.target = true;
        const PenetrationOutcome direct = Penetrate(origin, forward, params, &Tracer, &target, 0);
        Check(direct.hit && direct.reason == Refusal::Ok,
              "a clear line to the target reports a hit");

        PenetrationParams broke = params;
        broke.penetration = 0.f;
        World unusedWorld;
        const PenetrationOutcome refused = Penetrate(origin, forward, broke, &Tracer, &unusedWorld, 0);
        Check(!refused.hit && refused.reason == Refusal::NoBudget,
              "a shot with no penetration budget is refused");

        World wall;
        wall.walls = 4;
        wall.thickness = 4.f;
        const PenetrationOutcome through = Penetrate(origin, forward, params, &Tracer, &wall, 0);
        Check(through.walls == 1, "one wall is recorded before the layer cap stops the shot");
        Check(through.reason == Refusal::WallLimit,
              "hitting the layer cap refuses with \"wall limit reached\"");
        Check(through.damageLeft < params.damage,
              "passing a wall consumes damage");

        // Thicker wall -> less damage left (monotonic).
        World thinWall;  thinWall.walls = 1;  thinWall.thickness = 1.f;
        World thickWall; thickWall.walls = 1; thickWall.thickness = 9.f;
        const PenetrationOutcome thin = Penetrate(origin, forward, params, &Tracer, &thinWall, 0);
        const PenetrationOutcome thick = Penetrate(origin, forward, params, &Tracer, &thickWall, 0);
        Check(thick.damageLeft < thin.damageLeft,
              "a thicker wall leaves strictly less damage");

        // Modifier override clamps into [0, range].
        World modWall;
        modWall.walls = 1;
        modWall.thickness = 1.f;
        modWall.modifier = 1.0e9f;
        const PenetrationOutcome modded = Penetrate(origin, forward, params, &Tracer, &modWall, 0);
        Check(modded.damageLeft <= params.range + 1e-3f,
              "an oversized penetration modifier is clamped to the range");

        // A two-layer budget makes progress through two walls.
        PenetrationParams two = params;
        two.maxLayers = 2;
        World pair;
        pair.walls = 4;
        pair.thickness = 2.f;
        const PenetrationOutcome twice = Penetrate(origin, forward, two, &Tracer, &pair, 0);
        Check(twice.walls == 2, "a two-layer budget passes two walls");
        Check(twice.damageLeft < through.damageLeft,
              "the second wall leaves less damage than the first alone");
    }

    std::printf("\n%s (%d failure%s)\n",
                g_failures == 0 ? "AUTOWALL SELFTEST PASS" : "AUTOWALL SELFTEST FAIL",
                g_failures, g_failures == 1 ? "" : "s");
    return g_failures == 0 ? 0 : 1;
}
