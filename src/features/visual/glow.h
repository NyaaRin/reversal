#pragma once
// Glow and chams (Stage 3.6).
//
// Reconstructed from:
//   Features::ChamsGlow::ChamsGlowFeature vtable RVA 0x33e458
//     slot 5   0x18010cc70   tick: reads the style, logs the toggle, enables glow
//     slot 16  0x18010ceb0   teardown
//   0x180106ec0  [CHAMS] custom material resolution (two literals)
//   0x1801070a0  [CHAMS] material unavailable on this mount
//
// The `[GLOW]` and `[CHAMS]` tags belong to this feature, not to the ESP element
// classes: no element vtable slot contains either literal.

#include <cstdint>
#include <cstring>
#include <string>

namespace sf {
namespace visual {

// Config keys, in the order 0x18010cc70 reads them. The root token is
// 0x93fd561a96ab0c67 (the same token Stage 3.5 saw used as a section root).
inline constexpr uint64_t kGlowRoot        = 0x93fd561a96ab0c67ULL;
inline constexpr uint64_t kGlowThroughWall = 0x28549c2b3ea27228ULL;  // int
inline constexpr uint64_t kGlowBlur        = 0x928aca364203258fULL;  // float
inline constexpr uint64_t kGlowSharp       = 0x3db4763925009906ULL;  // bool, blur vs sharp
inline constexpr uint64_t kGlowEnable      = 0x44e346faced5d1ceULL;  // bool inside the style branch

// 0x18010cc70's log has three string arguments, and the literal tables at
// DAT_1803449c4 / DAT_18034b584 are the *toggle* pair, not a style pair:
//   0x1803449c4 = "off"   (bytes 6f 66 66 00)
//   0x18034b584 = "ON"    (bytes 4f 4e 00 00)
// The style literal is chosen from kGlowSharp: 0 -> "blur", non-zero -> "sharp".
// Stage 3.6 originally recorded these as Soft/Hard style names; corrected here.
inline constexpr const char* kToggleOff = "off";   // 0x1803449c4
inline constexpr const char* kToggleOn  = "ON";    // 0x18034b584
inline constexpr const char* kStyleBlur = "blur";  // chosen when kGlowSharp == 0
inline constexpr const char* kStyleSharp = "sharp";

inline const char* ToggleName(bool enabled)
{
    return enabled ? kToggleOn : kToggleOff;
}

inline const char* StyleName(bool sharp)
{
    return sharp ? kStyleSharp : kStyleBlur;
}

struct GlowConfig
{
    bool  enabled = false;
    bool  throughWalls = false;
    bool  sharp = false;          // kGlowSharp; false = blur
    float blur = 0.f;             // kGlowBlur
};

inline bool IsSharp(const GlowConfig& cfg) { return cfg.sharp; }

// The exact toggle line from 0x18010cc70.
inline constexpr const char* kGlowToggleLog =
    "[GLOW] toggle -> %s (through walls=%d, style=%s, blur=%.1f, sharp=%dpx)\n";
inline constexpr const char* kGlowDiagLog =
    "[GLOW] diag: outline=%d model=%d through=%d seen=%d drew=%d subview=%d "
    "filtered=%d noMat=%d noCtx=%d\n";

// Behaviour of 0x18010cc70: the style is recomputed only when the enable flag
// changes; the glow is only switched on when the feature is enabled, the style
// branch resolves and kGlowEnable reads true.
struct GlowState
{
    bool lastEnabled = false;     // DAT_180409654
    bool glowActive = false;      // DAT_180409670
};

// Returns true when the toggle line should be emitted this tick.
inline bool UpdateGlow(GlowState& state, const GlowConfig& cfg, bool styleResolves,
                       bool enableKey)
{
    bool logToggle = false;
    if (cfg.enabled != state.lastEnabled)
    {
        state.lastEnabled = cfg.enabled;
        logToggle = true;
    }

    const bool wantGlow = cfg.enabled && styleResolves && enableKey;
    if (state.glowActive && !wantGlow)
    {
        // 0x18010cc70 calls FUN_180109680 here: disable/restore.
        state.glowActive = false;
    }
    else if (wantGlow)
    {
        state.glowActive = true;
    }
    return logToggle;
}

// ------------------------------------------------------------- chams material
// 0x180106ec0 / 0x1801070a0. Three outcomes, each with its own literal.
enum class MaterialResult : int
{
    Resolved = 0,        // "[CHAMS] custom material '%s' resolved"
    NotFoundFallback,    // "'%s' not found -> falling back to Flat"
    UnavailableFallback, // "'%s' unavailable on this mount -> falling back to Flat"
};

inline constexpr const char* kMaterialResolvedLog =
    "[CHAMS] custom material '%s' resolved\n";
inline constexpr const char* kMaterialMissingLog =
    "[CHAMS] custom material '%s' not found -> falling back to Flat\n";
inline constexpr const char* kMaterialUnavailableLog =
    "[CHAMS] material '%s' unavailable on this mount -> falling back to Flat\n";

inline const char* MaterialResultLog(MaterialResult result)
{
    switch (result)
    {
    case MaterialResult::Resolved:            return kMaterialResolvedLog;
    case MaterialResult::NotFoundFallback:    return kMaterialMissingLog;
    case MaterialResult::UnavailableFallback: return kMaterialUnavailableLog;
    }
    return kMaterialMissingLog;
}

// Returns the material actually used: the requested one when it resolves, else
// "Flat", which is the literal every fallback arm names.
inline const char* ResolveMaterial(const char* requested, MaterialResult& result)
{
    static const char* kFlat = "Flat";
    if (requested == nullptr || requested[0] == '\0')
    {
        result = MaterialResult::NotFoundFallback;
        return kFlat;
    }
    if (std::strcmp(requested, "Flat") == 0)
    {
        result = MaterialResult::Resolved;
        return kFlat;
    }
    result = MaterialResult::Resolved;
    return requested;
}

// 0x18010ceb0 (97 bytes): teardown restores the glow state.
struct ChamsGlowFeature
{
    static constexpr uint64_t kVtableRva = 0x33e458;
    static constexpr uint64_t kVfunc05   = 0x18010cc70;
    static constexpr uint64_t kVfunc16   = 0x18010ceb0;
    static constexpr uint64_t kChamsResolve   = 0x180106ec0;
    static constexpr uint64_t kChamsUnavailable = 0x1801070a0;
};

} // namespace visual
} // namespace sf
