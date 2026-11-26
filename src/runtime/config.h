#pragma once
// Skyfall runtime configuration.
//
// The recovered product's config was a hashed SQLite tree (Stage 3.13). That
// tree is not needed to make the reconstructed hooks usable: the runtime keeps
// the small, readable subset it can actually honour in an INI file. Unknown
// keys are ignored, so the schema can grow without breaking existing files.

#include <string>
#include <string_view>

namespace sf {
namespace runtime {

struct Config
{
    bool enabled = true;       // master switch; false means hooks pass through
    bool esp = true;           // draw players through IVDebugOverlay
    bool espTeam = false;      // include teammates
    bool espBox = true;        // 3D box
    bool espText = true;       // name / health text
    bool espBBox = false;      // corner-style box
    bool espCircle = false;    // head circle
    bool espDynamicText = false; // name + distance
    bool espHealth = false;    // health bar
    bool espArmor = false;     // armor bar
    bool espSnapline = false;  // bottom-centre snapline
    bool espSkeleton = false;  // head/spine/legs skeleton
    bool espOffscreen = false; // edge arrow for off-screen players
    bool chams = false;        // model chams via material override
    int chamsMode = 0;         // 0 = solid, 1 = outline (reserved)
    int chamsStyle = 0;        // recovered material table index 0..11, 12 = custom
    std::string chamsCustomMaterial = "debug/debugwhite"; // style 12 material
    float chamsHiddenR = 0.278f;  // through-wall colour
    float chamsHiddenG = 0.486f;
    float chamsHiddenB = 0.980f;
    float chamsVisibleR = 0.651f; // visible colour
    float chamsVisibleG = 0.800f;
    float chamsVisibleB = 1.000f;
    float chamsAlpha = 1.0f;
    bool chamsIgnoreZ = true;  // draw through walls
    bool chamsTeam = false;    // include teammates
    bool glow = false;         // screen-space glow halo
    bool tracers = false;      // shot/aim tracer lines
    bool lookbeam = false;     // forward look beam
    bool ghosts = false;       // last-known dead-player ghosts
    bool worldTint = false;    // full-screen tint
    float tintR = 1.f;
    float tintG = 0.f;
    float tintB = 0.f;
    float tintA = 0.20f;
    bool fogOverride = false;
    float fogStart = 200.f;
    float fogEnd = 3000.f;
    int fogR = 255;
    int fogG = 40;
    int fogB = 40;
    bool ambientOverride = false;
    float ambientBrightness = 0.60f;
    bool waterOverride = false;
    bool skyboxOverride = false;
    bool skyNameSwap = false;
    bool skyEditor = false;
    std::string skyName = "space";
    bool bhop = true;          // hold-jump bunnyhop
    bool autostrafe = false;   // rotate the movement basis while jump is held
    int autostrafeMode = 0;    // recovered AutostrafeFeature mode
    bool aimbot = false;       // target selection + smoothing in CreateMove
    bool aimAlways = false;    // aim without requiring IN_ATTACK / the X key
    bool stopOnKill = false;   // stop aiming until the attack key is released
    bool aimTeam = false;      // allow teammates as aim targets
    bool aimPlayers = true;    // include player / fake-client entities
    bool aimNpcs = false;      // include FL_NPC entities
    bool ignoreDormant = true; // skip dormant entities in aim/trigger/ESP
    bool ignoreInvisible = false; // skip EF_NODRAW entities
    bool ignoreGod = false;       // skip m_takedamage == 0 entities
    int aimMode = 0;           // 0 silent, 1 assist, 2 rage
    int targetPriority = 0;    // 0 crosshair, 1 distance, 2 health
    bool antiAc = false;       // skip aim ticks (humanization)
    int antiAcRate = 2;        // skip every N-th command while anti-AC is on
    float aimFov = 22.f;       // target acceptance cone in degrees
    float aimSmooth = 0.f;     // 0 = instant, otherwise the recovered smoother
    bool drawFov = true;       // draw the aim cone on screen
    bool drawFovFilled = false;
    bool drawFovDebug = false;
    float fovR = 0.278f;
    float fovG = 0.486f;
    float fovB = 0.980f;
    bool triggerbot = false;   // fire when a target is under the crosshair
    float triggerFov = 3.f;    // angular hit-confirmation cone
    int triggerDelay = 0;      // milliseconds before a confirmed target fires
    bool triggerRandomize = false;
    bool noVisualRecoil = false; // zero the local punch angle
    float recoilScale = 0.f;   // punch multiplier while no visual recoil is on
    bool nospread = false;     // compensate the configured weapon backend
    std::string weaponBackend = "Generic";
    float weaponSpread = 0.02f;
    float weaponInaccuracy = 0.05f;
    bool antiaim = false;      // edit command angles + fake GetViewAngles
    int antiaimPitch = 0;      // 0..4, recovered AntiAimFeature pitch modes
    int antiaimYaw = 0;        // 0..9, recovered AntiAimFeature yaw modes
    float antiaimJitter = 0.f; // degrees
    float antiaimAmplitude = 0.f;
    float antiaimBodyOffset = 0.f; // 0..60, body-desync offset for yaw modes 7..9
    bool backtrack = false;    // record and select recent target positions
    float backtrackTime = 0.20f; // rewind window in seconds
    bool fullbright = false;   // OverrideConfig fullbright byte
    bool log = true;           // write %LOCALAPPDATA%\skyfall\skyfall.log

    std::string sourcePath;

    // Parses one `key=value` line. Returns false only for a malformed value
    // (unknown keys are accepted and ignored).
    static bool ParseLine(Config& config, std::string_view line, std::string* error);

    // Reads the INI, creating it with defaults when it does not exist.
    static Config LoadOrCreate();

    static std::string ConfigPath();

    std::string ToIni() const;
};

} // namespace runtime
} // namespace sf
