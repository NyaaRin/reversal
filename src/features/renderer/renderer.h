#pragma once
// Compiled reconstruction of the recovered Utility-tab renderer 0x1801d5ef0.
//
// The recovered body is a 5,142-line Ghidra function.  This translation keeps
// its top-level order and branch structure: tab clamp -> left child -> Movement
// -> Chat -> Triggerbot -> Anti-Screenshot/Loading screen -> Tools -> Data
// cleaner -> File cloak -> Lua/editor/dumper controls.  Engine-owned state is
// reached through dependencies.h; drawing is reached through RendererUi so the
// same control flow can be executed headlessly by the renderer self-test.

#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include "dependencies.h"

namespace sf {
namespace renderer {

class RendererUi
{
public:
    virtual ~RendererUi() = default;

    virtual bool begin_child(const char* id, float width) = 0;
    virtual void end_child() = 0;
    virtual bool section(const char* label, bool default_open) = 0;
    virtual bool checkbox(const char* label, bool value) = 0;
    virtual int slider_int(const char* label, int value, int minimum, int maximum) = 0;
    virtual float slider_float(const char* label, float value, float minimum,
                               float maximum) = 0;
    virtual int combo(const char* label, int value, const char* const* items,
                      int item_count) = 0;
    virtual bool button(const char* label) = 0;
    virtual bool settings_button(const char* label) = 0;
    virtual void open_popup(const char* id) = 0;
    virtual bool begin_popup(const char* id) = 0;
    virtual void end_popup() = 0;
    virtual void text(const char* text) = 0;
    virtual void tooltip(const char* text) = 0;
    virtual void same_line() = 0;
    virtual void separator() = 0;
    virtual int keybind(const char* id, int key) = 0;
    virtual std::string text_input(const char* id, std::string value,
                                   std::size_t capacity) = 0;
    virtual bool is_hovered() = 0;
};

struct RendererSettings
{
    std::map<std::string, bool> bools;
    std::map<std::string, int> ints;
    std::map<std::string, float> floats;
    std::map<std::string, std::string> strings;
    std::vector<std::string> messages;
    std::vector<std::string> model_entries;
    std::string model_filter;
    std::vector<std::string> cleaner_issues;
    std::vector<std::string> cleaner_log;
    std::map<std::string, bool> cloak_modes;
    dependencies::CleanerPaths cleaner_paths;
    std::uint32_t cleaner_mask =
        dependencies::kCleanData | dependencies::kCleanDownloads |
        dependencies::kCleanCache | dependencies::kCleanCrashes |
        dependencies::kCleanLuaBin | dependencies::kCleanSqlite;
    int active_tab = 0;
    int loading_mode = 0;
    bool lua_editor_open = false;
    bool dumper_enabled = false;
    bool allow_overwrite = false;
    bool clean_execute = false;
};

struct RendererResult
{
    bool early_out = false;
    std::string reason;
    int sections = 0;
    int branches = 0;
    int config_reads = 0;
    int config_writes = 0;
    int ui_calls = 0;
    int cleaner_calls = 0;
    int lua_calls = 0;
    int engine_calls = 0;
    bool chat_event_death = false;
    bool chat_event_hurt = false;
    bool chat_event_waiting = false;
    bool chat_event_blocked = false;
    bool chat_event_cleanup = false;
    bool chat_event_refresh = false;
    bool loading_mode_changed = false;
    bool loading_file_edit = false;
    bool loading_url_edit = false;
    bool tools_set = false;
    bool model_scan = false;
    bool model_list = false;
    bool model_match = false;
    bool model_apply = false;
    bool model_limit = false;
    bool model_empty = false;
    bool model_no_match = false;
    bool cloak_list = false;
    bool cloak_toggle = false;
    bool cloak_add = false;
    bool cloak_restore = false;
    bool cloak_status = false;
    bool cloak_cleanup = false;
    bool cleaner_issues = false;
    bool cleaner_log = false;
    bool final_cleanup = false;
    std::vector<std::string> visited;
};

// 0x1801d5ef0.  Returns branch/early-out accounting so the self-test can
// prove the translated path was actually executed.
RendererResult RenderUtilityTab(RendererUi& ui, RendererSettings& settings);

} // namespace renderer
} // namespace sf
