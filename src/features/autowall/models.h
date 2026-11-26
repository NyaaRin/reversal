#pragma once
// The eleven Features::Autowall::* classes and their per-backend configuration.
//
// Every address below is the target of that class's vtable slot, read from
// re/dump/vtable_methods.tsv. The vtable RVA in the second column is from
// re/dump/rtti_classes.tsv.
//
// All eleven derive from Features::Autowall::IPenetrationModel, whose slots are:
//   0  constructed-object thunk
//   1  identifier (returns the base name literal for most models)
//   2  primary parameter accessor
//   3  penetration parameter accessor (reads the model's Lua/config keys)
//   4  secondary parameter accessor
//   5..11  shared defaults, overridden by SWCS/TFA/ARC9 where noted.
//
// Slots 5, 6, 10 and the parameter-less stubs are shared bodies:
//   0x1800ae8a0  returns *(u32*)(this+0xc) and writes *(u8*)(this+0x10)
//   0x1800ae8b0  returns *(u32*)(this+8)
//   0x1800acea0  returns 8192.0f (0x1803812a4)  — the range clamp
//   0x1800aceb0  returns 4                      — the hard layer cap
//   0x1800acec0  returns its argument unchanged — identity/clamp
//   0x18001e3e0  empty stub
//
// The Lua keys are the string literals each slot-3 body references, so they are
// observed, not invented. Where a model's slot 3 has no key string it uses the
// shared body and the key list is empty.

#include <cstdint>
#include <cstring>

#include "penetration.h"

namespace sf {
namespace autowall {

struct ModelInfo
{
    const char* className;
    uint64_t vtableRva;
    uint64_t slot[5];              // slots 0..4
    const char* const* keys;       // Lua keys read by slot 3 (may be empty)
    int keyCount;
};

// --------------------------------------------------------------- key tables
inline constexpr const char* kKeysArc9[] = {
    "arc9_mod_penetration", "Penetration", "PenetrationDelta",
    "MaxPenetrationLayers", "Damage_Max", "GetProcessedValue"
};
inline constexpr const char* kKeysArcCW[] = {
    "arccw_enable_penetration", "arccw_mult_penetration"
};
inline constexpr const char* kKeysM9K[] = {
    "M9KDamageMultiplier", "M9KDisablePenetration", "Penetration"
};
inline constexpr const char* kKeysSwcs[] = {
    "swcs_penetration_type", "GetDamage", "GetPenetration", "GetRange",
    "GetRangeModifier"
};
inline constexpr const char* kKeysTfa[] = {
    "sv_tfa_bullet_penetration", "sv_tfa_bullet_penetration_power_mul",
    "sv_tfa_penetration_hardlimit", "GetStatL", "Primary.Damage",
    "Primary.MaxSurfacePenetrationCount", "Primary.PenetrationMultiplier",
    "Primary.PenetrationPower"
};
inline constexpr const char* kKeysTacRP[] = { "tacrp_penetration" };
// 0x1800b0bd0 (CW20 and SWB share this body) and 0x1800b10e0 (FAS2) read
// their names directly from the weapon table; they do not go through the
// 64-bit config map at all. The earlier "empty key list" was a scan error.
inline constexpr const char* kKeysCw20[] = {
    "PenStr", "PenMod", "PenetrativeRange", "CanPenetrate", "Damage"
};
inline constexpr const char* kKeysFas2[] = {
    "PenStr", "PenMod", "PenetrationEnabled", "Damage"
};

// -------------------------------------------------------------- class table
inline constexpr ModelInfo kModels[] = {
    { "Features::Autowall::ARC9Autowall",     0x33e378u,
      { 0x18021ec70u, 0x180086cc0u, 0x1800aecc0u, 0x1800aecf0u, 0x1800aeeb0u },
      kKeysArc9, 6 },
    { "Features::Autowall::ArcCWAutowall",    0x33aa28u,
      { 0x18021ec40u, 0x180081350u, 0x1800ae6b0u, 0x1800ae6e0u, 0x1800ae870u },
      kKeysArcCW, 2 },
    { "Features::Autowall::AutowallFeature",  0x386028u,
      { 0x18001e3e0u, 0x18001e3e0u, 0x18001e3e0u, 0x18001e3e0u, 0x18001e3e0u },
      nullptr, 0 },
    { "Features::Autowall::CW20Autowall",     0x3392c8u,
      { 0x18021eca0u, 0x1800b0b70u, 0x1800b0b80u, 0x1800b0bd0u, 0x1800b0d30u },
      kKeysCw20, 5 },
    { "Features::Autowall::FAS2Autowall",     0x33b868u,
      { 0x18021ed00u, 0x1800b10a0u, 0x1800b10b0u, 0x1800b10e0u, 0x1800b1200u },
      kKeysFas2, 4 },
    { "Features::Autowall::HomigradAutowall", 0x33d5d8u,
      { 0x180013760u, 0x1800b1220u, 0x1800b1230u, 0x18001e3e0u, 0x1800b1260u },
      nullptr, 0 },
    { "Features::Autowall::M9KAutowall",      0x33a0f8u,
      { 0x18021ec70u, 0x18007cd20u, 0x1800b0760u, 0x1800b0790u, 0x1800b09d0u },
      kKeysM9K, 3 },
    { "Features::Autowall::SWBAutowall",      0x3390e8u,
      { 0x18021eca0u, 0x18007ad70u, 0x1800b1050u, 0x1800b0bd0u, 0x1800b0d30u },
      kKeysCw20, 5 },
    { "Features::Autowall::SWCSAutowall",     0x30ff60u,
      { 0x18021ecd0u, 0x180083ef0u, 0x1800af860u, 0x1800af890u, 0x1800afa80u },
      kKeysSwcs, 5 },
    { "Features::Autowall::TacRPAutowall",    0x33c6c0u,
      { 0x18021eca0u, 0x180089500u, 0x1800af190u, 0x1800af1c0u, 0x1800af2a0u },
      kKeysTacRP, 1 },
    { "Features::Autowall::TFAAutowall",      0x33cdd0u,
      { 0x18021ecd0u, 0x18007f2a0u, 0x1800aff60u, 0x1800aff90u, 0x1800b02c0u },
      kKeysTfa, 8 },
};

inline constexpr int kModelCount = static_cast<int>(sizeof(kModels) / sizeof(kModels[0]));

// 0x180241610 is a 36-byte nested-map lookup, not a hash: 0x180241a30 finds
// the node and the wrapper returns `*node + 0x28`. 0x1801fcfc0 / 0x1802029c0
// are the std::any bool/int casts used by every Lua-config reader.
inline constexpr uint64_t kConfigLookup   = 0x180241610ULL;
inline constexpr uint64_t kConfigBoolCast = 0x1801fcfc0ULL;
inline constexpr uint64_t kConfigIntCast  = 0x1802029c0ULL;

inline const ModelInfo* FindModel(const char* className)
{
    if (className == nullptr)
        return nullptr;
    for (int i = 0; i < kModelCount; ++i)
        if (std::strcmp(kModels[i].className, className) == 0)
            return &kModels[i];
    return nullptr;
}

// ------------------------------------------------------------- C++ classes
// Each model is its own type so the dispatch is explicit and edits to one backend
// cannot silently change another, mirroring the image's per-class vtables.
class IPenetrationModel
{
public:
    virtual ~IPenetrationModel() = default;
    virtual const char* ClassName() const = 0;
    virtual const ModelInfo& Info() const = 0;
    virtual PenetrationParams Defaults() const { return PenetrationParams{}; }
};

#define SF_AUTOWALL_MODEL(CLASS, TABLE_INDEX, NICE_NAME)                       \
class CLASS : public IPenetrationModel                                          \
{                                                                               \
public:                                                                         \
    const char* ClassName() const override { return NICE_NAME; }                \
    const ModelInfo& Info() const override { return kModels[TABLE_INDEX]; }     \
}

SF_AUTOWALL_MODEL(Arc9AutowallModel, 0, "Features::Autowall::ARC9Autowall");
SF_AUTOWALL_MODEL(ArcCWAutowallModel, 1, "Features::Autowall::ArcCWAutowall");
SF_AUTOWALL_MODEL(AutowallFeatureModel, 2, "Features::Autowall::AutowallFeature");
SF_AUTOWALL_MODEL(Cw20AutowallModel, 3, "Features::Autowall::CW20Autowall");
SF_AUTOWALL_MODEL(Fas2AutowallModel, 4, "Features::Autowall::FAS2Autowall");
SF_AUTOWALL_MODEL(HomigradAutowallModel, 5, "Features::Autowall::HomigradAutowall");
SF_AUTOWALL_MODEL(M9kAutowallModel, 6, "Features::Autowall::M9KAutowall");
SF_AUTOWALL_MODEL(SwbAutowallModel, 7, "Features::Autowall::SWBAutowall");
SF_AUTOWALL_MODEL(SwcsAutowallModel, 8, "Features::Autowall::SWCSAutowall");
SF_AUTOWALL_MODEL(TacRpAutowallModel, 9, "Features::Autowall::TacRPAutowall");
SF_AUTOWALL_MODEL(TfaAutowallModel, 10, "Features::Autowall::TFAAutowall");

#undef SF_AUTOWALL_MODEL

// Route by class name, mirroring the model registry the feature uses.
inline IPenetrationModel* MakeAutowallModel(const char* className)
{
    if (className == nullptr)
        return nullptr;
    if (std::strcmp(className, "Features::Autowall::ARC9Autowall") == 0) return new Arc9AutowallModel();
    if (std::strcmp(className, "Features::Autowall::ArcCWAutowall") == 0) return new ArcCWAutowallModel();
    if (std::strcmp(className, "Features::Autowall::AutowallFeature") == 0) return new AutowallFeatureModel();
    if (std::strcmp(className, "Features::Autowall::CW20Autowall") == 0) return new Cw20AutowallModel();
    if (std::strcmp(className, "Features::Autowall::FAS2Autowall") == 0) return new Fas2AutowallModel();
    if (std::strcmp(className, "Features::Autowall::HomigradAutowall") == 0) return new HomigradAutowallModel();
    if (std::strcmp(className, "Features::Autowall::M9KAutowall") == 0) return new M9kAutowallModel();
    if (std::strcmp(className, "Features::Autowall::SWBAutowall") == 0) return new SwbAutowallModel();
    if (std::strcmp(className, "Features::Autowall::SWCSAutowall") == 0) return new SwcsAutowallModel();
    if (std::strcmp(className, "Features::Autowall::TacRPAutowall") == 0) return new TacRpAutowallModel();
    if (std::strcmp(className, "Features::Autowall::TFAAutowall") == 0) return new TfaAutowallModel();
    return nullptr;
}

} // namespace autowall
} // namespace sf
