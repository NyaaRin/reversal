#include "config.h"

#include <Windows.h>

#include <cctype>
#include <cstdlib>
#include <fstream>
#include <sstream>

namespace sf {
namespace runtime {
namespace {

std::string Trim(std::string_view value)
{
    std::size_t first = 0;
    while (first < value.size() && std::isspace(static_cast<unsigned char>(value[first])))
        ++first;
    std::size_t last = value.size();
    while (last > first && std::isspace(static_cast<unsigned char>(value[last - 1])))
        --last;
    return std::string(value.substr(first, last - first));
}

std::string Lower(std::string value)
{
    for (char& c : value)
        c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
    return value;
}

bool ParseBool(const std::string& value, bool& out)
{
    const std::string lower = Lower(value);
    if (lower == "1" || lower == "true" || lower == "yes" || lower == "on")
    {
        out = true;
        return true;
    }
    if (lower == "0" || lower == "false" || lower == "no" || lower == "off")
    {
        out = false;
        return true;
    }
    return false;
}

bool ParseInt(const std::string& value, int& out)
{
    char* end = nullptr;
    const long parsed = std::strtol(value.c_str(), &end, 10);
    if (end == value.c_str() || *end != '\0')
        return false;
    out = static_cast<int>(parsed);
    return true;
}

bool ParseFloat(const std::string& value, float& out)
{
    char* end = nullptr;
    const double parsed = std::strtod(value.c_str(), &end);
    if (end == value.c_str() || *end != '\0')
        return false;
    out = static_cast<float>(parsed);
    return true;
}

std::string LocalAppData()
{
    char buffer[MAX_PATH] = {};
    const DWORD size = GetEnvironmentVariableA("LOCALAPPDATA", buffer, MAX_PATH);
    if (size > 0 && size < MAX_PATH)
        return buffer;

    char module[MAX_PATH] = {};
    const DWORD moduleSize = GetModuleFileNameA(nullptr, module, MAX_PATH);
    if (moduleSize > 0 && moduleSize < MAX_PATH)
    {
        std::string path(module, moduleSize);
        const std::size_t slash = path.find_last_of("\\/");
        if (slash != std::string::npos)
            return path.substr(0, slash);
    }
    return ".";
}

} // namespace

std::string Config::ToIni() const
{
    std::ostringstream out;
    out << "; Skyfall reconstruction runtime\n";
    out << "; Saved in %LOCALAPPDATA%\\skyfall\\skyfall.ini\n";
    out << "[skyfall]\n";
    out << "enabled=" << (enabled ? 1 : 0) << "\n";
    out << "esp=" << (esp ? 1 : 0) << "\n";
    out << "esp_team=" << (espTeam ? 1 : 0) << "\n";
    out << "esp_box=" << (espBox ? 1 : 0) << "\n";
    out << "esp_text=" << (espText ? 1 : 0) << "\n";
    out << "esp_bbox=" << (espBBox ? 1 : 0) << "\n";
    out << "esp_circle=" << (espCircle ? 1 : 0) << "\n";
    out << "esp_dynamic_text=" << (espDynamicText ? 1 : 0) << "\n";
    out << "esp_health=" << (espHealth ? 1 : 0) << "\n";
    out << "esp_armor=" << (espArmor ? 1 : 0) << "\n";
    out << "esp_snapline=" << (espSnapline ? 1 : 0) << "\n";
    out << "esp_skeleton=" << (espSkeleton ? 1 : 0) << "\n";
    out << "esp_offscreen=" << (espOffscreen ? 1 : 0) << "\n";
    out << "chams=" << (chams ? 1 : 0) << "\n";
    out << "chams_mode=" << chamsMode << "\n";
    out << "chams_style=" << chamsStyle << "\n";
    out << "chams_custom=" << chamsCustomMaterial << "\n";
    out << "chams_thr.r=" << chamsHiddenR << "\n";
    out << "chams_thr.g=" << chamsHiddenG << "\n";
    out << "chams_thr.b=" << chamsHiddenB << "\n";
    out << "chams_vis.r=" << chamsVisibleR << "\n";
    out << "chams_vis.g=" << chamsVisibleG << "\n";
    out << "chams_vis.b=" << chamsVisibleB << "\n";
    out << "chams_alpha=" << chamsAlpha << "\n";
    out << "chams_ignorez=" << (chamsIgnoreZ ? 1 : 0) << "\n";
    out << "chams_team=" << (chamsTeam ? 1 : 0) << "\n";
    out << "glow=" << (glow ? 1 : 0) << "\n";
    out << "tracers=" << (tracers ? 1 : 0) << "\n";
    out << "lookbeam=" << (lookbeam ? 1 : 0) << "\n";
    out << "ghosts=" << (ghosts ? 1 : 0) << "\n";
    out << "world_tint=" << (worldTint ? 1 : 0) << "\n";
    out << "tint_r=" << tintR << "\n";
    out << "tint_g=" << tintG << "\n";
    out << "tint_b=" << tintB << "\n";
    out << "tint_a=" << tintA << "\n";
    out << "fog_override=" << (fogOverride ? 1 : 0) << "\n";
    out << "fog_start=" << fogStart << "\n";
    out << "fog_end=" << fogEnd << "\n";
    out << "fog_r=" << fogR << "\n";
    out << "fog_g=" << fogG << "\n";
    out << "fog_b=" << fogB << "\n";
    out << "ambient_override=" << (ambientOverride ? 1 : 0) << "\n";
    out << "ambient_brightness=" << ambientBrightness << "\n";
    out << "water_override=" << (waterOverride ? 1 : 0) << "\n";
    out << "skybox_override=" << (skyboxOverride ? 1 : 0) << "\n";
    out << "sky_name_swap=" << (skyNameSwap ? 1 : 0) << "\n";
    out << "sky_editor=" << (skyEditor ? 1 : 0) << "\n";
    out << "sky_name=" << skyName << "\n";
    out << "bhop=" << (bhop ? 1 : 0) << "\n";
    out << "autostrafe=" << (autostrafe ? 1 : 0) << "\n";
    out << "autostrafe_mode=" << autostrafeMode << "\n";
    out << "aimbot=" << (aimbot ? 1 : 0) << "\n";
    out << "aim_always=" << (aimAlways ? 1 : 0) << "\n";
    out << "stop_on_kill=" << (stopOnKill ? 1 : 0) << "\n";
    out << "aim_team=" << (aimTeam ? 1 : 0) << "\n";
    out << "aim_players=" << (aimPlayers ? 1 : 0) << "\n";
    out << "aim_npcs=" << (aimNpcs ? 1 : 0) << "\n";
    out << "ignore_dormant=" << (ignoreDormant ? 1 : 0) << "\n";
    out << "ignore_invisible=" << (ignoreInvisible ? 1 : 0) << "\n";
    out << "ignore_god=" << (ignoreGod ? 1 : 0) << "\n";
    out << "aim_mode=" << aimMode << "\n";
    out << "target_priority=" << targetPriority << "\n";
    out << "anti_ac=" << (antiAc ? 1 : 0) << "\n";
    out << "anti_ac_rate=" << antiAcRate << "\n";
    out << "draw_fov=" << (drawFov ? 1 : 0) << "\n";
    out << "draw_fov_filled=" << (drawFovFilled ? 1 : 0) << "\n";
    out << "draw_fov_debug=" << (drawFovDebug ? 1 : 0) << "\n";
    out << "fov_r=" << fovR << "\n";
    out << "fov_g=" << fovG << "\n";
    out << "fov_b=" << fovB << "\n";
    out << "aim_fov=" << aimFov << "\n";
    out << "aim_smooth=" << aimSmooth << "\n";
    out << "triggerbot=" << (triggerbot ? 1 : 0) << "\n";
    out << "trigger_fov=" << triggerFov << "\n";
    out << "trigger_delay=" << triggerDelay << "\n";
    out << "trigger_randomize=" << (triggerRandomize ? 1 : 0) << "\n";
    out << "no_visual_recoil=" << (noVisualRecoil ? 1 : 0) << "\n";
    out << "recoil_scale=" << recoilScale << "\n";
    out << "nospread=" << (nospread ? 1 : 0) << "\n";
    out << "weapon_backend=" << weaponBackend << "\n";
    out << "weapon_spread=" << weaponSpread << "\n";
    out << "weapon_inaccuracy=" << weaponInaccuracy << "\n";
    out << "antiaim=" << (antiaim ? 1 : 0) << "\n";
    out << "antiaim_pitch=" << antiaimPitch << "\n";
    out << "antiaim_yaw=" << antiaimYaw << "\n";
    out << "antiaim_jitter=" << antiaimJitter << "\n";
    out << "antiaim_amplitude=" << antiaimAmplitude << "\n";
    out << "antiaim_body_offset=" << antiaimBodyOffset << "\n";
    out << "backtrack=" << (backtrack ? 1 : 0) << "\n";
    out << "backtrack_time=" << backtrackTime << "\n";
    out << "fullbright=" << (fullbright ? 1 : 0) << "\n";
    out << "log=" << (log ? 1 : 0) << "\n";
    return out.str();
}

bool Config::ParseLine(Config& config, std::string_view line, std::string* error)
{
    const std::string trimmed = Trim(line);
    if (trimmed.empty() || trimmed[0] == ';' || trimmed[0] == '#' || trimmed[0] == '[')
        return true;

    const std::size_t equals = trimmed.find('=');
    if (equals == std::string::npos)
        return true; // tolerate section headers / comments without '='

    const std::string key = Lower(Trim(std::string_view(trimmed).substr(0, equals)));
    const std::string value = Trim(std::string_view(trimmed).substr(equals + 1));

    auto fail = [&](const char* name) {
        if (error != nullptr)
            *error = std::string("invalid value for ") + name + ": " + value;
        return false;
    };

    if (key == "enabled")
        return ParseBool(value, config.enabled) ? true : fail("enabled");
    if (key == "esp")
        return ParseBool(value, config.esp) ? true : fail("esp");
    if (key == "esp_team")
        return ParseBool(value, config.espTeam) ? true : fail("esp_team");
    if (key == "esp_box")
        return ParseBool(value, config.espBox) ? true : fail("esp_box");
    if (key == "esp_text")
        return ParseBool(value, config.espText) ? true : fail("esp_text");
    if (key == "esp_bbox")
        return ParseBool(value, config.espBBox) ? true : fail("esp_bbox");
    if (key == "esp_circle")
        return ParseBool(value, config.espCircle) ? true : fail("esp_circle");
    if (key == "esp_dynamic_text")
        return ParseBool(value, config.espDynamicText) ? true : fail("esp_dynamic_text");
    if (key == "esp_health")
        return ParseBool(value, config.espHealth) ? true : fail("esp_health");
    if (key == "esp_armor")
        return ParseBool(value, config.espArmor) ? true : fail("esp_armor");
    if (key == "esp_snapline")
        return ParseBool(value, config.espSnapline) ? true : fail("esp_snapline");
    if (key == "esp_skeleton")
        return ParseBool(value, config.espSkeleton) ? true : fail("esp_skeleton");
    if (key == "esp_offscreen")
        return ParseBool(value, config.espOffscreen) ? true : fail("esp_offscreen");
    if (key == "chams")
        return ParseBool(value, config.chams) ? true : fail("chams");
    if (key == "chams_mode")
        return ParseInt(value, config.chamsMode) ? true : fail("chams_mode");
    if (key == "chams_style")
        return ParseInt(value, config.chamsStyle) ? true : fail("chams_style");
    if (key == "chams_custom")
    {
        config.chamsCustomMaterial = value;
        return true;
    }
    if (key == "chams_thr.r")
        return ParseFloat(value, config.chamsHiddenR) ? true : fail("chams_thr.r");
    if (key == "chams_thr.g")
        return ParseFloat(value, config.chamsHiddenG) ? true : fail("chams_thr.g");
    if (key == "chams_thr.b")
        return ParseFloat(value, config.chamsHiddenB) ? true : fail("chams_thr.b");
    if (key == "chams_vis.r")
        return ParseFloat(value, config.chamsVisibleR) ? true : fail("chams_vis.r");
    if (key == "chams_vis.g")
        return ParseFloat(value, config.chamsVisibleG) ? true : fail("chams_vis.g");
    if (key == "chams_vis.b")
        return ParseFloat(value, config.chamsVisibleB) ? true : fail("chams_vis.b");
    if (key == "chams_alpha")
        return ParseFloat(value, config.chamsAlpha) ? true : fail("chams_alpha");
    if (key == "chams_ignorez")
        return ParseBool(value, config.chamsIgnoreZ) ? true : fail("chams_ignorez");
    if (key == "chams_team")
        return ParseBool(value, config.chamsTeam) ? true : fail("chams_team");
    if (key == "glow")
        return ParseBool(value, config.glow) ? true : fail("glow");
    if (key == "tracers")
        return ParseBool(value, config.tracers) ? true : fail("tracers");
    if (key == "lookbeam")
        return ParseBool(value, config.lookbeam) ? true : fail("lookbeam");
    if (key == "ghosts")
        return ParseBool(value, config.ghosts) ? true : fail("ghosts");
    if (key == "world_tint")
        return ParseBool(value, config.worldTint) ? true : fail("world_tint");
    if (key == "tint_r")
        return ParseFloat(value, config.tintR) ? true : fail("tint_r");
    if (key == "tint_g")
        return ParseFloat(value, config.tintG) ? true : fail("tint_g");
    if (key == "tint_b")
        return ParseFloat(value, config.tintB) ? true : fail("tint_b");
    if (key == "tint_a")
        return ParseFloat(value, config.tintA) ? true : fail("tint_a");
    if (key == "fog_override")
        return ParseBool(value, config.fogOverride) ? true : fail("fog_override");
    if (key == "fog_start")
        return ParseFloat(value, config.fogStart) ? true : fail("fog_start");
    if (key == "fog_end")
        return ParseFloat(value, config.fogEnd) ? true : fail("fog_end");
    if (key == "fog_r")
        return ParseInt(value, config.fogR) ? true : fail("fog_r");
    if (key == "fog_g")
        return ParseInt(value, config.fogG) ? true : fail("fog_g");
    if (key == "fog_b")
        return ParseInt(value, config.fogB) ? true : fail("fog_b");
    if (key == "ambient_override")
        return ParseBool(value, config.ambientOverride) ? true : fail("ambient_override");
    if (key == "ambient_brightness")
        return ParseFloat(value, config.ambientBrightness) ? true : fail("ambient_brightness");
    if (key == "water_override")
        return ParseBool(value, config.waterOverride) ? true : fail("water_override");
    if (key == "skybox_override")
        return ParseBool(value, config.skyboxOverride) ? true : fail("skybox_override");
    if (key == "sky_name_swap")
        return ParseBool(value, config.skyNameSwap) ? true : fail("sky_name_swap");
    if (key == "sky_editor")
        return ParseBool(value, config.skyEditor) ? true : fail("sky_editor");
    if (key == "sky_name")
    {
        config.skyName = value;
        return true;
    }
    if (key == "bhop")
        return ParseBool(value, config.bhop) ? true : fail("bhop");
    if (key == "autostrafe")
        return ParseBool(value, config.autostrafe) ? true : fail("autostrafe");
    if (key == "autostrafe_mode")
        return ParseInt(value, config.autostrafeMode) ? true : fail("autostrafe_mode");
    if (key == "aimbot")
        return ParseBool(value, config.aimbot) ? true : fail("aimbot");
    if (key == "aim_always")
        return ParseBool(value, config.aimAlways) ? true : fail("aim_always");
    if (key == "stop_on_kill")
        return ParseBool(value, config.stopOnKill) ? true : fail("stop_on_kill");
    if (key == "aim_team")
        return ParseBool(value, config.aimTeam) ? true : fail("aim_team");
    if (key == "aim_players")
        return ParseBool(value, config.aimPlayers) ? true : fail("aim_players");
    if (key == "aim_npcs")
        return ParseBool(value, config.aimNpcs) ? true : fail("aim_npcs");
    if (key == "ignore_dormant")
        return ParseBool(value, config.ignoreDormant) ? true : fail("ignore_dormant");
    if (key == "ignore_invisible")
        return ParseBool(value, config.ignoreInvisible) ? true : fail("ignore_invisible");
    if (key == "ignore_god")
        return ParseBool(value, config.ignoreGod) ? true : fail("ignore_god");
    if (key == "aim_mode")
        return ParseInt(value, config.aimMode) ? true : fail("aim_mode");
    if (key == "target_priority")
        return ParseInt(value, config.targetPriority) ? true : fail("target_priority");
    if (key == "anti_ac")
        return ParseBool(value, config.antiAc) ? true : fail("anti_ac");
    if (key == "anti_ac_rate")
        return ParseInt(value, config.antiAcRate) ? true : fail("anti_ac_rate");
    if (key == "draw_fov")
        return ParseBool(value, config.drawFov) ? true : fail("draw_fov");
    if (key == "draw_fov_filled")
        return ParseBool(value, config.drawFovFilled) ? true : fail("draw_fov_filled");
    if (key == "draw_fov_debug")
        return ParseBool(value, config.drawFovDebug) ? true : fail("draw_fov_debug");
    if (key == "fov_r")
        return ParseFloat(value, config.fovR) ? true : fail("fov_r");
    if (key == "fov_g")
        return ParseFloat(value, config.fovG) ? true : fail("fov_g");
    if (key == "fov_b")
        return ParseFloat(value, config.fovB) ? true : fail("fov_b");
    if (key == "aim_fov")
        return ParseFloat(value, config.aimFov) ? true : fail("aim_fov");
    if (key == "aim_smooth")
        return ParseFloat(value, config.aimSmooth) ? true : fail("aim_smooth");
    if (key == "triggerbot")
        return ParseBool(value, config.triggerbot) ? true : fail("triggerbot");
    if (key == "trigger_fov")
        return ParseFloat(value, config.triggerFov) ? true : fail("trigger_fov");
    if (key == "trigger_delay")
        return ParseInt(value, config.triggerDelay) ? true : fail("trigger_delay");
    if (key == "trigger_randomize")
        return ParseBool(value, config.triggerRandomize) ? true : fail("trigger_randomize");
    if (key == "no_visual_recoil")
        return ParseBool(value, config.noVisualRecoil) ? true : fail("no_visual_recoil");
    if (key == "recoil_scale")
        return ParseFloat(value, config.recoilScale) ? true : fail("recoil_scale");
    if (key == "nospread")
        return ParseBool(value, config.nospread) ? true : fail("nospread");
    if (key == "weapon_backend")
    {
        config.weaponBackend = value;
        return true;
    }
    if (key == "weapon_spread")
        return ParseFloat(value, config.weaponSpread) ? true : fail("weapon_spread");
    if (key == "weapon_inaccuracy")
        return ParseFloat(value, config.weaponInaccuracy) ? true : fail("weapon_inaccuracy");
    if (key == "antiaim")
        return ParseBool(value, config.antiaim) ? true : fail("antiaim");
    if (key == "antiaim_pitch")
        return ParseInt(value, config.antiaimPitch) ? true : fail("antiaim_pitch");
    if (key == "antiaim_yaw")
        return ParseInt(value, config.antiaimYaw) ? true : fail("antiaim_yaw");
    if (key == "antiaim_jitter")
        return ParseFloat(value, config.antiaimJitter) ? true : fail("antiaim_jitter");
    if (key == "antiaim_amplitude")
        return ParseFloat(value, config.antiaimAmplitude) ? true : fail("antiaim_amplitude");
    if (key == "antiaim_body_offset")
        return ParseFloat(value, config.antiaimBodyOffset) ? true : fail("antiaim_body_offset");
    if (key == "backtrack")
        return ParseBool(value, config.backtrack) ? true : fail("backtrack");
    if (key == "backtrack_time")
        return ParseFloat(value, config.backtrackTime) ? true : fail("backtrack_time");
    if (key == "fullbright")
        return ParseBool(value, config.fullbright) ? true : fail("fullbright");
    if (key == "log")
        return ParseBool(value, config.log) ? true : fail("log");

    return true;
}

std::string Config::ConfigPath()
{
    std::string dir = LocalAppData() + "\\skyfall";
    CreateDirectoryA(dir.c_str(), nullptr);
    return dir + "\\skyfall.ini";
}

Config Config::LoadOrCreate()
{
    Config config;
    config.sourcePath = ConfigPath();

    std::ifstream input(config.sourcePath);
    if (!input)
    {
        std::ofstream output(config.sourcePath, std::ios::binary | std::ios::trunc);
        if (output)
            output << config.ToIni();
        return config;
    }

    std::string line;
    std::string ignoredError;
    while (std::getline(input, line))
        ParseLine(config, line, &ignoredError);
    return config;
}

} // namespace runtime
} // namespace sf
