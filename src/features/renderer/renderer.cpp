#include "renderer.h"

#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <utility>

namespace sf {
namespace renderer {
namespace {

std::uint64_t KeyFor(const char* name)
{
    std::uint64_t hash = 1469598103934665603ull;
    if (name == nullptr)
        return hash;
    for (const unsigned char* character =
             reinterpret_cast<const unsigned char*>(name);
         *character != 0; ++character)
    {
        hash ^= *character;
        hash *= 1099511628211ull;
    }
    return hash;
}

struct Context
{
    RendererUi& ui;
    RendererSettings& settings;
    RendererResult& result;

    bool GetBool(const char* name, bool fallback)
    {
        ++result.config_reads;
        const auto found = settings.bools.find(name);
        const bool initial = found != settings.bools.end() ? found->second : fallback;
        const bool value = dependencies::Store().GetBool(KeyFor(name), initial);
        settings.bools[name] = value;
        return value;
    }

    void SetBool(const char* name, bool value)
    {
        settings.bools[name] = value;
        dependencies::Store().SetBool(KeyFor(name), value);
        ++result.config_writes;
    }

    int GetInt(const char* name, int fallback)
    {
        ++result.config_reads;
        const auto found = settings.ints.find(name);
        const int initial = found != settings.ints.end() ? found->second : fallback;
        const int value = dependencies::Store().GetInt(KeyFor(name), initial);
        settings.ints[name] = value;
        return value;
    }

    void SetInt(const char* name, int value)
    {
        settings.ints[name] = value;
        dependencies::Store().SetInt(KeyFor(name), value);
        ++result.config_writes;
    }

    float GetFloat(const char* name, float fallback)
    {
        ++result.config_reads;
        const auto found = settings.floats.find(name);
        const float initial = found != settings.floats.end() ? found->second : fallback;
        const float value = dependencies::Store().GetFloat(KeyFor(name), initial);
        settings.floats[name] = value;
        return value;
    }

    void SetFloat(const char* name, float value)
    {
        settings.floats[name] = value;
        dependencies::Store().SetFloat(KeyFor(name), value);
        ++result.config_writes;
    }

    std::string GetString(const char* name, const char* fallback)
    {
        ++result.config_reads;
        const auto found = settings.strings.find(name);
        const std::string initial =
            found != settings.strings.end() ? found->second : std::string(fallback);
        const std::string value =
            dependencies::Store().GetString(KeyFor(name), initial);
        settings.strings[name] = value;
        return value;
    }

    void SetString(const char* name, std::string value)
    {
        settings.strings[name] = value;
        dependencies::Store().SetString(KeyFor(name), std::move(value));
        ++result.config_writes;
    }

    bool Checkbox(const char* label, bool fallback)
    {
        const bool previous = GetBool(label, fallback);
        ++result.ui_calls;
        const bool value = ui.checkbox(label, previous);
        if (value != previous)
        {
            SetBool(label, value);
            ++result.branches;
        }
        return value;
    }

    int SliderInt(const char* label, int fallback, int minimum, int maximum)
    {
        const int previous = GetInt(label, fallback);
        ++result.ui_calls;
        const int value = ui.slider_int(label, previous, minimum, maximum);
        if (value != previous)
        {
            SetInt(label, value);
            ++result.branches;
        }
        return value;
    }

    float SliderFloat(const char* label, float fallback, float minimum,
                      float maximum)
    {
        const float previous = GetFloat(label, fallback);
        ++result.ui_calls;
        const float value = ui.slider_float(label, previous, minimum, maximum);
        if (value != previous)
        {
            SetFloat(label, value);
            ++result.branches;
        }
        return value;
    }

    int Combo(const char* label, int fallback, const char* const* items,
              int count)
    {
        const int previous = GetInt(label, fallback);
        ++result.ui_calls;
        const int value = ui.combo(label, previous, items, count);
        if (value != previous)
        {
            SetInt(label, value);
            ++result.branches;
        }
        return value;
    }

    int Keybind(const char* label, int fallback)
    {
        const int previous = GetInt(label, fallback);
        ++result.ui_calls;
        const int value = ui.keybind(label, previous);
        if (value != previous)
        {
            SetInt(label, value);
            ++result.branches;
        }
        return value;
    }

    std::string TextInput(const char* label, const char* fallback,
                          std::size_t capacity)
    {
        const std::string previous = GetString(label, fallback);
        ++result.ui_calls;
        std::string value = ui.text_input(label, previous, capacity);
        if (value != previous)
        {
            SetString(label, value);
            ++result.branches;
        }
        return value;
    }

    bool Button(const char* label)
    {
        ++result.ui_calls;
        const bool clicked = ui.button(label);
        if (clicked)
            ++result.branches;
        return clicked;
    }

    bool SettingsButton(const char* label, const char* popup)
    {
        ++result.ui_calls;
        const bool clicked = ui.settings_button(label);
        if (clicked)
        {
            ui.open_popup(popup);
            ++result.branches;
        }
        return clicked;
    }

    bool BeginPopup(const char* id)
    {
        ++result.ui_calls;
        const bool open = ui.begin_popup(id);
        if (open)
            ++result.branches;
        return open;
    }

    bool Section(const char* label, bool default_open)
    {
        ++result.sections;
        ++result.ui_calls;
        const bool open = ui.section(label, default_open);
        if (open)
        {
            result.visited.push_back(label);
            ++result.branches;
        }
        return open;
    }

    void Text(const char* text)
    {
        ++result.ui_calls;
        ui.text(text);
    }

    void Tooltip(const char* text)
    {
        if (ui.is_hovered())
        {
            ++result.ui_calls;
            ui.tooltip(text);
        }
    }

    void SameLine()
    {
        ++result.ui_calls;
        ui.same_line();
    }

    void Separator()
    {
        ++result.ui_calls;
        ui.separator();
    }
};

void DrawMovement(Context& context)
{
    if (!context.Section("Movement", true))
        return;

    context.Checkbox("BunnyHop", false);
    const bool edge = context.Checkbox("Edge jump", false);
    if (edge)
        context.Tooltip("Auto-jumps on the last tick before you walk off a ledge.");

    const bool strafe = context.Checkbox("Auto strafing", false);
    context.SameLine();
    context.SettingsButton("##strafe_opts", "strafe_opts");
    if (context.BeginPopup("strafe_opts"))
    {
        static const char* const directions[] = {"View", "Movement", "Left", "Right"};
        context.Combo("Direction", 0, directions, 4);
        context.SliderInt("Circle tightness", 10, 0, 60);
        context.SliderInt("Turn sharpness", 2, 0, 10);
        context.Checkbox("Groundstrafe", false);
        context.ui.end_popup();
    }
    if (strafe)
        context.Text("Auto strafing");

    const bool jumpBug = context.Checkbox("Jump bug", false);
    context.SettingsButton("##jumpbug_opts", "jumpbug_opts");
    if (context.BeginPopup("jumpbug_opts"))
    {
        context.SliderInt("Arm above", 0, 0, 100);
        context.Keybind("##jumpbug_hotkey", 0);
        context.ui.end_popup();
    }
    if (jumpBug)
        context.Text("Jump bug");

    context.Checkbox("Fakeduck", false);
    context.Keybind("##fakeduck_hotkey", 0);

    const bool airstuck = context.Checkbox("Airstuck", false);
    context.SettingsButton("##airstuck_opts", "airstuck_opts");
    if (context.BeginPopup("airstuck_opts"))
    {
        static const char* const methods[] = {"Freeze", "Slow-fall"};
        context.Combo("Method##airstuck_method", 0, methods, 2);
        context.SliderInt("Slow-fall", 0, 0, 20);
        const bool autoTune = context.Checkbox("Auto-tune interval", false);
        if (autoTune)
        {
            context.SliderInt("Release every", 100, 0, 1000);
            char line[64] = {};
            std::snprintf(line, sizeof(line), "Current: %d ms",
                          context.GetInt("Release every", 100));
            context.Text(line);
        }
        context.ui.end_popup();
    }
    if (airstuck)
        context.Text("Airstuck");

    const bool warp = context.Checkbox("Warp", false);
    context.SettingsButton("##warp_opts", "warp_opts");
    if (context.BeginPopup("warp_opts"))
    {
        context.SliderInt("Charge ticks", 2, 0, 64);
        context.Checkbox("Cap at server limit", true);
        context.Checkbox("Auto-repeat while held", false);
        context.Checkbox("Tap mode (tap to arm, tap to teleport)", false);
        context.ui.end_popup();
    }
    if (warp)
        context.Text("Warp");

    const bool speedhack = context.Checkbox("Speedhack", false);
    context.SettingsButton("##speedhack_opts", "speedhack_opts");
    if (context.BeginPopup("speedhack_opts"))
    {
        context.SliderFloat("Factor", 1.0f, 0.05f, 3.0f);
        context.Keybind("##speedhack_hotkey", 0);
        context.ui.end_popup();
    }
    if (speedhack)
        context.Text("Speedhack");

    const bool fakelag = context.Checkbox("Fakelag", false);
    context.SettingsButton("##fakelag_opts", "fakelag_opts");
    if (context.BeginPopup("fakelag_opts"))
    {
        static const char* const modes[] = {"Off", "Static", "Adaptive", "Random"};
        context.Combo("Mode##fakelag_mode", 0, modes, 4);
        context.SliderInt("Variance", 0, 0, 20);
        context.Checkbox("Break lag compensation on rage shots", false);
        context.Checkbox("Flush on big moves", false);
        context.ui.end_popup();
    }
    if (fakelag)
        context.Text("Fakelag");

    const bool doubleTap = context.Checkbox("Double tap", false);
    context.SettingsButton("##dt_opts", "dt_opts");
    if (context.BeginPopup("dt_opts"))
    {
        context.SliderInt("Charge ticks", 2, 0, 32);
        context.Keybind("##dt_hotkey", 0);
        context.ui.end_popup();
    }
    if (doubleTap)
        context.Text("Double tap");

    if (!dependencies::FeatureGate())
        context.Text("Movement gate closed");
}

void DrawChatEventStatus(Context& context)
{
    const bool death = dependencies::PlayerDeathSubscribed();
    const bool hurt = dependencies::PlayerHurtSubscribed();
    const bool gate = dependencies::FeatureGate();
    context.result.chat_event_death = death;
    context.result.chat_event_hurt = hurt;

    if (death)
    {
        context.Text("player_death: live -- exact kills only. The damage poll is OFF.");
        context.result.chat_event_cleanup = true;
    }
    else if (hurt)
    {
        context.Text("player_hurt: live -- a lethal hit the server reported IS the kill.");
        if (gate)
            context.Text("player_death is not up, which costs nothing here: a kill is a kill either way.");
        else
        {
            context.Text("player_death: blocked by Anti-AC -> \"Block Event Subscriptions\".");
            context.result.chat_event_blocked = true;
        }
        context.result.chat_event_cleanup = true;
    }
    else if (!gate)
    {
        context.Text("player_death: blocked by Anti-AC -> \"Block Event Subscriptions\". Kills come from the passive health poll instead.");
        context.result.chat_event_blocked = true;
        context.result.chat_event_cleanup = true;
    }
    else
    {
        context.Text("player_death is not up, which costs nothing here: a kill is a kill either way.");
        context.result.chat_event_waiting = true;
        context.result.chat_event_cleanup = true;
    }

    if (context.Button("Refresh##chat_event"))
    {
        const bool refreshed_death = dependencies::PlayerDeathSubscribed();
        const bool refreshed_hurt = dependencies::PlayerHurtSubscribed();
        context.result.chat_event_refresh = true;
        context.result.chat_event_death = refreshed_death;
        context.result.chat_event_hurt = refreshed_hurt;
        context.Text(refreshed_death
                         ? "player_death: live (refreshed)."
                         : refreshed_hurt
                               ? "player_hurt: live (refreshed)."
                               : "No event subscription is live.");
        ++context.result.engine_calls;
    }
}

void DrawChat(Context& context)
{
    if (!context.Section("Chat", false))
        return;

    context.Checkbox("Kill Say##chat_kill", false);
    context.Checkbox("Spam##chat_spam", false);
    context.Checkbox("Say on timer", false);
    context.SliderFloat("Message interval", 1.0f, 0.1f, 10.0f);
    context.SettingsButton("##chat_opts", "chat_opts");
    if (context.BeginPopup("chat_opts"))
    {
        context.Text("Message templates");
        context.Text("gg {name}, killed by {myrpname} with {weapon}");
        context.ui.end_popup();
    }
    if (context.Button("Add##chat_add"))
    {
        context.settings.messages.push_back("gg {name}");
        context.SetString("last chat message", "gg {name}");
    }
    if (context.settings.messages.empty())
        context.Text("No messages yet. Add one below.");
    for (const std::string& message : context.settings.messages)
        context.Text(message.c_str());
    DrawChatEventStatus(context);
}

void DrawTriggerbot(Context& context)
{
    if (!context.Section("Triggerbot", false))
        return;

    context.Checkbox("Auto reload", false);
    // The section header already owns the plain "Triggerbot" ID.
    const bool trigger = context.Checkbox("Triggerbot##tb_enable", false);
    context.SettingsButton("##tb_opts", "tb_opts");
    if (context.BeginPopup("tb_opts"))
    {
        context.SliderInt("Fire delay", 0, 0, 500);
        context.Keybind("##triggerbot_hotkey", 0);
        context.ui.end_popup();
    }
    if (trigger)
        context.Text("Triggerbot");
}

void DrawAntiScreenshot(Context& context)
{
    if (!context.Section("Anti-Screenshot", false))
        return;

    // The section header already owns the plain "Anti-Screenshot" ID.
    context.Checkbox("Anti-Screenshot##antiss_enable", false);
    context.SettingsButton("##antiss_opts", "antiss_opts");
    if (context.BeginPopup("antiss_opts"))
    {
        context.Checkbox("Route through Stream-proof", false);
        context.ui.end_popup();
    }

    const bool loading = context.Checkbox("Loading screen", false);
    context.SettingsButton("##loadurl_opts", "loadurl_opts");
    if (context.BeginPopup("loadurl_opts"))
    {
        static const char* const modes[] = {"Built-in mayrr screen", "Your own file",
                                            "URL"};
        const int previous_mode = context.settings.loading_mode;
        ++context.result.ui_calls;
        const int mode = context.ui.combo("Mode##loadurl_mode", previous_mode, modes, 3);
        if (mode != previous_mode)
        {
            context.settings.loading_mode = mode;
            context.result.loading_mode_changed = true;
            ++context.result.branches;
        }

        if (mode == 1)
        {
            const std::string previous = context.GetString("##loadurl_file", "C:\\pages\\loading.html");
            const std::string path = context.TextInput("##loadurl_file", "C:\\pages\\loading.html", 512);
            if (path != previous)
                context.result.loading_file_edit = true;
            if (context.Button("Browse##loadurl_browse"))
            {
                const std::string picked = dependencies::PickLoadingScreenPage(nullptr);
                if (!picked.empty())
                {
                    context.SetString("##loadurl_file", picked);
                    context.result.loading_file_edit = true;
                }
            }
            context.Text(context.GetString("##loadurl_file", "C:\\pages\\loading.html").c_str());
        }
        else if (mode == 2)
        {
            const std::string previous = context.GetString("##loadurl_input", "https://example.com/loading");
            const std::string url = context.TextInput("##loadurl_input", "https://example.com/loading", 512);
            if (url != previous)
                context.result.loading_url_edit = true;
            context.Text(url.c_str());
        }
        else
        {
            context.Text("Built-in mayrr loading screen.");
        }
        context.Checkbox("Hide the engine's progress box", false);
        context.ui.end_popup();
    }
    if (loading)
        context.Text("Loading screen");
}

void DrawTools(Context& context)
{
    if (!context.Section("Tools", false))
        return;

    context.SettingsButton("Player tools##player_tools", "player_tools_popup");
    if (context.BeginPopup("player_tools_popup"))
    {
        context.Checkbox("E / Use##tools_use", false);
        context.Keybind("##tools_use_bind", 0);
        context.Checkbox("Primary##tools_primary", false);
        context.Keybind("##tools_primary_bind", 0);
        context.Checkbox("Secondary##tools_secondary", false);
        context.Keybind("##tools_secondary_bind", 0);
        context.Checkbox("Flashlight##tools_flash", false);
        context.Keybind("##tools_flash_bind", 0);
        context.ui.end_popup();
    }

    context.TextInput("##tools_cvar_name", "sv_cheats", 128);
    context.TextInput("##tools_cvar_value", "1", 128);
    const std::string cvar_name = context.GetString("##tools_cvar_name", "sv_cheats");
    const std::string cvar_value = context.GetString("##tools_cvar_value", "1");
    if (context.Button("Set##tools_cvar_set"))
    {
        context.result.tools_set = true;
        dependencies::ConsoleOutput(cvar_name.c_str(), cvar_value.c_str());
        ++context.result.engine_calls;
    }
    if (context.Button("Read##tools_cvar_read"))
    {
        std::string value;
        if (dependencies::ConVarRead(cvar_name.c_str(), value))
        {
            context.SetString("##tools_cvar_value", value);
            ++context.result.engine_calls;
        }
    }
    if (context.Button("Unlock (clear blocking flags)##tools_cvar_flags") &&
        dependencies::ConVarClearFlags(cvar_name.c_str()))
        ++context.result.engine_calls;
    if (context.Button("Force value (never touches flags)##tools_cvar_force") &&
        dependencies::ConVarForce(cvar_name.c_str(), cvar_value.c_str()))
        ++context.result.engine_calls;

    context.Checkbox("Enable local model##tools_model_enable", false);
    context.TextInput("##tools_model_path", "models/player/...mdl", 256);
    if (context.Button("Apply##tools_model_apply"))
    {
        context.SetString("applied model",
                          dependencies::NormalizeModelPath(
                              context.GetString("##tools_model_path", "")));
    }
    if (context.Button("Restore##tools_model_restore"))
        context.SetString("applied model", "");
    context.Text(context.GetString("applied model", "").c_str());

    if (context.Section("Model browser", false))
    {
        context.result.model_list = true;
        const bool all = context.Checkbox("All models##tools_scan_all", false);
        if (context.Button("Scan mounted models##tools_scan"))
        {
            context.result.model_scan = true;
            context.settings.model_entries = dependencies::ScanModels("models", all);
            ++context.result.engine_calls;
        }
        context.TextInput("##tools_model_filter", "", 128);
        const std::string filter = context.GetString("##tools_model_filter", "");
        bool matched = false;
        int shown = 0;
        for (std::size_t index = 0; index < context.settings.model_entries.size(); ++index)
        {
            const std::string& entry = context.settings.model_entries[index];
            if (!filter.empty() && entry.find(filter) == std::string::npos)
                continue;
            matched = true;
            context.Text(entry.c_str());
            const std::string apply = "Apply##model_" + std::to_string(index);
            if (context.Button(apply.c_str()))
            {
                context.SetString("##tools_model_path", entry);
                context.SetString("applied model", dependencies::NormalizeModelPath(entry));
                context.result.model_apply = true;
            }
            ++shown;
            if (shown >= 500)
            {
                context.result.model_limit = true;
                context.Text("...more hidden, refine the filter");
                break;
            }
        }
        context.result.model_match = matched;
        if (context.settings.model_entries.empty())
        {
            context.result.model_empty = true;
            context.Text("Nothing found.");
        }
        else if (!matched)
        {
            context.result.model_no_match = true;
            context.Text("No match.");
        }
    }

    context.Checkbox("Override skin##setskin_en", false);
    context.SliderInt("##setskin_skin", 0, 0, 100);
    context.Checkbox("Override bodygroups##setskin_body_en", false);
    context.SliderInt("##setskin_body", 0, 0, 100);
}

void DrawCleaner(Context& context)
{
    if (!context.Section("Data cleaner", false))
        return;

    const bool running = context.GetBool("cleaner running", false);
    if (context.Button(running ? "Cleaning...##clean_run" : "Clean now##clean_run") &&
        !running)
    {
        ++context.result.cleaner_calls;
        context.SetBool("cleaner running", true);
        dependencies::SetCleanerString("Cleaning...");
        dependencies::CleanerRescan(context.settings.cleaner_paths,
                                    context.settings.cleaner_mask);
        if (context.settings.clean_execute)
            dependencies::CleanerPostExit(context.settings.cleaner_paths,
                                          context.settings.cleaner_mask);
        context.SetBool("cleaner running", false);
    }
    if (context.Button("Rescan##clean_scan"))
    {
        ++context.result.cleaner_calls;
        dependencies::CleanerRescan(context.settings.cleaner_paths,
                                    context.settings.cleaner_mask);
    }
    context.settings.cleaner_issues = dependencies::CopyCleanerIssues();
    context.settings.cleaner_log = dependencies::CopyCleanerLog();
    context.result.cleaner_issues = !context.settings.cleaner_issues.empty();
    context.result.cleaner_log = !context.settings.cleaner_log.empty();
    for (const std::string& issue : context.settings.cleaner_issues)
        context.Text(issue.c_str());
    for (const std::string& line : context.settings.cleaner_log)
        context.Text(line.c_str());

    context.SettingsButton("##clean_opts", "clean_opts");
    if (context.BeginPopup("clean_opts"))
    {
        const auto toggle = [&context](const char* label, std::uint32_t bit,
                                       bool fallback) {
            const bool previous = context.GetBool(label, fallback);
            const bool value = context.Checkbox(label, fallback);
            if (value != previous)
            {
                if (value)
                    context.settings.cleaner_mask |= bit;
                else
                    context.settings.cleaner_mask &= ~bit;
            }
        };
        toggle("Run on game exit##clean_on_exit", 0, false);
        context.Separator();
        context.Text("Files");
        toggle("Wipe data folder##clean_data", dependencies::kCleanData, true);
        toggle("Downloads##clean_downloads", dependencies::kCleanDownloads, true);
        toggle("Lua / Workshop cache##clean_cache", dependencies::kCleanCache, true);
        toggle("Crash dumps##clean_crashes", dependencies::kCleanCrashes, true);
        toggle("Disable lua/bin DLLs##clean_luabin", dependencies::kCleanLuaBin, true);
        context.Separator();
        context.Text("SQLite + ConVars");
        toggle("Wipe databases##clean_sql", dependencies::kCleanSqlite, true);
        toggle("Reset flagged ConVars##clean_convars", dependencies::kCleanConvars, false);
        context.Separator();
        context.Text("Fingerprint");
        toggle("Re-roll file times##clean_filetimes", dependencies::kCleanFileTimes, false);
        toggle("Re-roll install age##clean_install_age", dependencies::kCleanInstallAge, false);
        context.ui.end_popup();
    }
    context.Text("Everything off by default. A file the game holds open cannot be deleted; it gets emptied in place instead.");
}

void DrawFileCloak(Context& context)
{
    if (!context.Section("File cloak", false))
        return;

    const bool cloak = context.Checkbox("Hide folders from Lua##fscloak", false);
    context.SettingsButton("##fscloak_opts", "fscloak_opts");
    if (context.BeginPopup("fscloak_opts"))
    {
        context.Checkbox("Scrub Lua file paths (debug info)##fscloak_dbg", false);
        context.Checkbox("Hide workshop addons (engine.GetAddons)##fscloak_ws", false);
        context.Checkbox("Hide other mounted games (engine.GetGames)##fscloak_games", false);
        context.Checkbox("Also the main-menu realm##fscloak_menu", false);
        if (context.Button("Add##fscloak_add"))
        {
            const std::string path =
                context.TextInput("##fscloak_path", "lua/bin, addons/x...", 256);
            if (!path.empty() && dependencies::UpdateAddonCache(path, 1))
                context.result.cloak_add = true;
        }
        if (context.Button("Restore defaults##fscloak_defaults"))
        {
            dependencies::ResetAddonCache();
            context.result.cloak_restore = true;
        }

        const std::vector<dependencies::AddonEntry> entries =
            dependencies::SnapshotAddonCache();
        context.result.cloak_list = true;
        for (std::size_t index = 0; index < entries.size(); ++index)
        {
            const dependencies::AddonEntry& entry = entries[index];
            const bool previous_empty = context.settings.cloak_modes[entry.path];
            const std::string mode_label = "##fsmode_" + std::to_string(index);
            const bool empty = context.Checkbox(mode_label.c_str(), previous_empty);
            if (empty != previous_empty)
            {
                context.settings.cloak_modes[entry.path] = empty;
                dependencies::UpdateAddonCache(entry.path, empty ? 1u : 0u);
                context.result.cloak_toggle = true;
            }
            context.Text(entry.path.c_str());
        }
        if (entries.empty())
            context.Text("Nothing cloaked. Add a path below.");
        context.ui.end_popup();
    }
    if (cloak)
        context.Text("File cloak");
    context.result.cloak_status = true;
    context.result.cloak_cleanup = true;
}

void DrawLuaControls(Context& context)
{
    if (context.Button(context.settings.lua_editor_open ? "Close Lua editor##lua"
                                                        : "Lua editor##lua"))
        context.settings.lua_editor_open = !context.settings.lua_editor_open;

    if (context.Button(context.settings.dumper_enabled ? "Stop Lua Dumper##dumper"
                                                       : "Start Lua Dumper##dumper"))
    {
        if (!context.settings.dumper_enabled)
        {
            ++context.result.lua_calls;
            dependencies::DumpLuaState();
            context.settings.dumper_enabled = true;
        }
        else
        {
            context.settings.dumper_enabled = false;
        }
    }
    context.settings.allow_overwrite =
        context.Checkbox("Allow overwrite##dumper_ow", context.settings.allow_overwrite);
    context.Checkbox("Show spectator list##spectators", false);
    context.Checkbox("Show hotkeys##hotkeys", false);
}

} // namespace

RendererResult RenderUtilityTab(RendererUi& ui, RendererSettings& settings)
{
    RendererResult result;

    // 0x1801d5ef0 begins by selecting/clamping the active tab.  An invalid
    // index is the recovered early-out boundary; the valid path continues.
    if (settings.active_tab < 0 || settings.active_tab > 4)
    {
        result.early_out = true;
        result.reason = "active tab outside 0..4";
        return result;
    }
    ++result.branches;

    const float scale = settings.floats.count("ui scale") != 0
                            ? settings.floats["ui scale"]
                            : 1.0f;
    if (!ui.begin_child("##misc_left", 410.0f * scale))
    {
        ui.end_child();
        result.early_out = true;
        result.reason = "left child clipped";
        return result;
    }
    ++result.branches;

    Context context{ui, settings, result};

    context.Separator();
    DrawMovement(context);
    context.Separator();
    DrawChat(context);
    context.Separator();
    DrawTriggerbot(context);
    context.Separator();
    DrawAntiScreenshot(context);
    context.Separator();
    DrawTools(context);
    context.Separator();
    DrawCleaner(context);
    context.Separator();
    DrawFileCloak(context);
    context.Separator();
    DrawLuaControls(context);
    context.Separator();

    ui.end_child();
    result.final_cleanup = true;
    return result;
}

} // namespace renderer
} // namespace sf
