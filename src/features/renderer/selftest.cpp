// Renderer helper self-test.  The first four rows are the CRT/STL-closed
// helpers from the 0x1801d5ef0 dependency map; the test also creates the
// pinned Dear ImGui 1.92.8 context that those helpers will run beside.

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <map>
#include <new>
#include <set>
#include <string>
#include <system_error>

#include "dependencies.h"
#include "imgui.h"
#include "renderer.h"
#include "log_writer.h"
#include "ui_helpers.h"
#include "ui_widgets.h"

namespace {

int g_failures = 0;

void Check(bool condition, const char* what)
{
    std::printf("%s  %s\n", condition ? "PASS" : "FAIL", what);
    if (!condition)
        ++g_failures;
}

void CheckInt(long long actual, long long expected, const char* what)
{
    const bool ok = actual == expected;
    std::printf("%s  %s (got %lld, want %lld)\n", ok ? "PASS" : "FAIL",
                what, actual, expected);
    if (!ok)
        ++g_failures;
}

void CheckText(const std::string& actual, const std::string& expected,
               const char* what)
{
    const bool ok = actual == expected;
    std::printf("%s  %s\n", ok ? "PASS" : "FAIL", what);
    if (!ok)
    {
        std::printf("      got  \"%s\" (%zu bytes)\n", actual.c_str(),
                    actual.size());
        std::printf("      want \"%s\" (%zu bytes)\n", expected.c_str(),
                    expected.size());
        ++g_failures;
    }
}

class RecordingUi final : public sf::renderer::RendererUi
{
public:
    bool allow_child = true;
    bool hovered = true;
    bool child_ended = false;
    std::set<std::string> open_sections;
    std::set<std::string> clicked;
    std::set<std::string> open_popups;
    std::map<std::string, bool> next_bool;
    std::map<std::string, int> next_combo;
    std::map<std::string, std::string> next_text;
    std::vector<std::string> checks;
    std::vector<std::string> sliders;
    std::vector<std::string> texts;
    std::vector<std::string> sections;

    bool begin_child(const char*, float) override { return allow_child; }
    void end_child() override { child_ended = true; }
    bool section(const char* label, bool) override
    {
        sections.push_back(label != nullptr ? label : "");
        return open_sections.count(label != nullptr ? label : "") != 0;
    }
    bool checkbox(const char* label, bool value) override
    {
        checks.push_back(label != nullptr ? label : "");
        const auto found = next_bool.find(label != nullptr ? label : "");
        return found != next_bool.end() ? found->second : value;
    }
    int slider_int(const char* label, int value, int, int) override
    {
        sliders.push_back(label != nullptr ? label : "");
        return value;
    }
    float slider_float(const char* label, float value, float, float) override
    {
        sliders.push_back(label != nullptr ? label : "");
        return value;
    }
    int combo(const char* label, int value, const char* const*, int) override
    {
        sliders.push_back(label != nullptr ? label : "");
        const auto found = next_combo.find(label != nullptr ? label : "");
        return found != next_combo.end() ? found->second : value;
    }
    bool button(const char* label) override
    {
        return clicked.count(label != nullptr ? label : "") != 0;
    }
    bool settings_button(const char* label) override
    {
        return clicked.count(label != nullptr ? label : "") != 0;
    }
    void open_popup(const char* id) override
    {
        open_popups.insert(id != nullptr ? id : "");
    }
    bool begin_popup(const char* id) override
    {
        return open_popups.count(id != nullptr ? id : "") != 0;
    }
    void end_popup() override {}
    void text(const char* text) override
    {
        texts.push_back(text != nullptr ? text : "");
    }
    void tooltip(const char* text) override
    {
        texts.push_back(text != nullptr ? text : "");
    }
    void same_line() override {}
    void separator() override {}
    int keybind(const char*, int key) override { return key; }
    std::string text_input(const char* id, std::string value, std::size_t) override
    {
        const auto found = next_text.find(id != nullptr ? id : "");
        return found != next_text.end() ? found->second : value;
    }
    bool is_hovered() override { return hovered; }
};

bool Contains(const std::vector<std::string>& values, const char* needle)
{
    for (const std::string& value : values)
    {
        if (value == needle)
            return true;
    }
    return false;
}

} // namespace

int main()
{
    using namespace sf::renderer;

    Check(ImGui::CreateContext() != nullptr,
          "the pinned Dear ImGui context is created");
    Check(std::strcmp(ImGui::GetVersion(), "1.92.8") == 0,
          "the vendored ImGui version is 1.92.8");
    ImGui::GetIO().DisplaySize = ImVec2(1280.0f, 720.0f);
    Check(ImGui::GetIO().DisplaySize.x == 1280.0f,
          "the vendored ImGui IO block is writable");

    const ImU32 original_text = ImGui::GetColorU32(ImGuiCol_Text);
    ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(1, 2, 3, 255));
    Check(ImGui::GetColorU32(ImGuiCol_Text) == IM_COL32(1, 2, 3, 255),
          "the vendored ImGui style-color stack accepts a pushed color");
    ImGui::PopStyleColor();
    Check(ImGui::GetColorU32(ImGuiCol_Text) == original_text,
          "the vendored ImGui style-color stack restores the color");

    ImGui::PushStyleVar(ImGuiStyleVar_Alpha, 0.5f);
    Check(ImGui::GetStyle().Alpha == 0.5f,
          "the vendored ImGui style-variable stack is active");
    ImGui::PopStyleVar();

    char formatted[64] = {};
    CheckInt(Format(formatted, sizeof(formatted), "ui/%08X", 0x2au), 11,
             "FormatV reports the formatted length");
    CheckText(formatted, "ui/0000002A",
              "FormatV uses the recovered standard-snprintf path");

    char truncated[4] = {};
    CheckInt(Format(truncated, sizeof(truncated), "%s", "hello"), 5,
             "FormatV returns the required length on truncation");
    CheckText(truncated, "hel",
              "FormatV NUL-terminates a truncated standard-snprintf result");

    std::string assigned;
    AssignString(assigned, "hello", 5);
    CheckText(assigned, "hello", "AssignString handles an SSO buffer");

    const char heap_text[] =
        "0123456789abcdef0123456789abcdef01234567";
    AssignString(assigned, heap_text, sizeof(heap_text) - 1);
    CheckInt(static_cast<long long>(assigned.size()), 40,
             "AssignString handles a heap-sized buffer");
    CheckText(assigned, heap_text, "AssignString preserves the heap bytes");

    const char embedded[] = {'a', '\0', 'b'};
    AssignString(assigned, embedded, sizeof(embedded));
    CheckInt(static_cast<long long>(assigned.size()), 3,
             "AssignString preserves an embedded NUL");
    Check(assigned[1] == '\0' && assigned[2] == 'b',
          "AssignString copies the exact byte range");

    AssignString(assigned, "x", 1);
    CheckText(assigned, "x",
              "AssignString shrinks an existing heap buffer to SSO");

    CheckText(FilterAndTrim(" a;b\"c\nd\r e "), "abcd e",
              "FilterAndTrim removes NUL/LF/CR/quote/semicolon and trims spaces");
    CheckText(FilterAndTrim("a'b\tc"), "a'b\tc",
              "FilterAndTrim keeps apostrophe and tab");
    CheckText(FilterAndTrim("  a b  "), "a b",
              "FilterAndTrim trims only outer ASCII spaces");
    CheckText(FilterAndTrim("   "), "",
              "FilterAndTrim reduces all-space input to empty");

    std::string with_nul("a\0b", 3);
    CheckText(FilterAndTrim(with_nul), "ab",
              "FilterAndTrim removes an embedded NUL");

    std::string high_bytes;
    high_bytes.push_back('A');
    high_bytes.push_back(static_cast<char>(0x80));
    high_bytes.push_back('B');
    high_bytes.push_back(';');
    CheckText(FilterAndTrim(high_bytes), std::string("A\x80" "B", 3),
              "FilterAndTrim keeps bytes above 0x3b");

    std::string long_text(130, 'a');
    CheckInt(static_cast<long long>(FilterAndTrim(long_text).size()), 120,
             "FilterAndTrim caps the retained text at 120 bytes");

    std::string edge = std::string(119, 'a') + "   b";
    const std::string edge_filtered = FilterAndTrim(edge);
    CheckInt(static_cast<long long>(edge_filtered.size()), 119,
             "FilterAndTrim truncates before trimming trailing spaces");
    Check(edge_filtered.back() == 'a',
          "FilterAndTrim leaves the last retained byte after truncation");

    void* allocation = AllocateOrThrow(64);
    Check(allocation != nullptr, "AllocateOrThrow returns a normal allocation");
    if (allocation != nullptr)
    {
        std::memset(allocation, 0x5a, 64);
        Check(static_cast<unsigned char*>(allocation)[63] == 0x5a,
              "AllocateOrThrow allocation is writable");
        std::free(allocation);
    }

    bool allocation_threw = false;
    try
    {
        void* impossible = AllocateOrThrow(static_cast<std::size_t>(-1));
        std::printf("FAIL  AllocateOrThrow huge request returned %p\n",
                    impossible);
        std::free(impossible);
    }
    catch (const std::bad_alloc&)
    {
        allocation_threw = true;
    }
    Check(allocation_threw,
          "AllocateOrThrow propagates a huge-allocation bad_alloc");

    {
        using namespace sf::renderer::dependencies;

        ResetStoreForTest();
        Store().SetBool(kFeatureFirstKey, true);
        Store().SetBool(kFeatureSecondKey, true);
        Store().SetInt(0x101, 7);
        Store().SetFloat(0x102, 1.5f);
        Store().SetString(0x103, "stored");
        Check(FeatureGate(), "the two-key config feature gate opens");
        Store().SetBool(kFeatureSecondKey, false);
        Check(!FeatureGate(), "the feature gate requires both bool keys");
        CheckInt(Store().GetInt(0x101), 7, "the config store reads an int");
        Check(Store().GetFloat(0x102) == 1.5f,
              "the config store reads a float");
        CheckText(Store().GetString(0x103), "stored",
                  "the config store reads a string");
        CheckInt(Store().GetInt(0x103, 9), 9,
                 "a wrong std::any type uses the typed fallback");
        CheckInt(static_cast<long long>(Store().Size()), 5,
                 "the config store keeps one value per key");
        Check(Lookup(0x101) != nullptr && Lookup(0x999) == nullptr,
              "the map lookup distinguishes present and absent keys");

        EngineHost host;
        host.convar_int = [](const char* name) {
            return std::strcmp(name, "sv_maxusrcmdprocessticks") == 0 ? 100 : 0;
        };
        host.event_subscribed = [](const char* name) {
            return std::strcmp(name, "player_death") == 0;
        };
        std::string console_text;
        host.console_print = [&console_text](const char* text) {
            console_text = text != nullptr ? text : "";
        };
        host.connected_ready = [] { return true; };
        host.chat_send = [](const char* message) {
            return message != nullptr && std::strcmp(message, "hello") == 0;
        };
        host.convar_read = [](const char* name, std::string& value) {
            if (name == nullptr)
                return false;
            value = "1";
            return true;
        };
        host.convar_clear_flags = [](const char* name) { return name != nullptr; };
        host.convar_force = [](const char* name, const char* value) {
            return name != nullptr && value != nullptr;
        };
        SetEngineHost(host);
        CheckInt(MaxUsrCmdProcessTicks(), 0x40,
                 "the ConVar clamp caps values above 0x40");
        Check(PlayerDeathSubscribed() && !PlayerHurtSubscribed(),
              "event subscriptions are routed to the engine host");
        ConsoleOutput("sv_test", "1");
        CheckText(console_text, "sv_test 1",
                  "console output forwards the name and value");
        Check(ConnectionReady(), "the ready query reaches the engine host");
        CheckText(CopyStatusString(), "Ready",
                  "the ready query records the Ready status");
        Check(SendChat("hello"), "chat send accepts the host send");
        CheckText(CopyStatusString(), "hello queued",
                  "chat send records the queued status");
        Check(!SendChat("refused"),
              "chat send reports a host refusal");
        CheckText(CopyStatusString(), "Not in a server - refused refused",
                  "chat send records the refused status");
        std::string read_value;
        Check(ConVarRead("sv_test", read_value) && read_value == "1",
              "the ConVar read reaches the engine host");
        Check(ConVarClearFlags("sv_test"),
              "the ConVar flag clear reaches the engine host");
        Check(ConVarForce("sv_test", "1"),
              "the ConVar force reaches the engine host");
        ResetEngineHostForTest();
        CheckInt(MaxUsrCmdProcessTicks(), 0x18,
                 "a missing ConVar host uses the 0x18 fallback");

        CheckText(NormalizeModelPath(" models\\props\\crate "),
                  "models/props/crate.mdl",
                  "the model path builder normalizes, trims and suffixes");
        CheckText(NormalizeModelPath("props/crate.mdl"),
                  "models/props/crate.mdl",
                  "the model path builder prepends models/");
        CheckText(NormalizeModelPath("models/keep.mdl"),
                  "models/keep.mdl",
                  "the model path builder preserves an existing prefix/suffix");

        SetStatusString("status");
        SetCleanerString("cleaner");
        SetCleanerPaths({"one", "two"});
        CheckText(CopyStatusString(), "status",
                  "the global status string round-trips");
        CheckText(CopyCleanerString(), "cleaner",
                  "the cleaner status string round-trips");
        CheckInt(static_cast<long long>(CopyCleanerPaths().size()), 2,
                 "the cleaner path vector round-trips");

        std::error_code ec;
        const std::filesystem::path temp =
            std::filesystem::temp_directory_path(ec) /
            "sf_renderer_dependency_test";
        std::filesystem::remove_all(temp, ec);
        std::filesystem::create_directories(temp / "addons" / "one", ec);
        std::filesystem::create_directories(temp / "lua" / "bin", ec);
        std::filesystem::create_directories(temp / "data", ec);
        std::filesystem::create_directories(temp / "downloads", ec);
        {
            std::ofstream(temp / "lua" / "bin" / "module.dll") << "x";
            std::ofstream(temp / "lua" / "script.lua") << "return 1";
            std::ofstream(temp / "data" / "remove.txt") << "x";
            std::ofstream(temp / "data" / "keep.db") << "db";
            std::ofstream(temp / "downloads" / "remove.bin") << "x";
            std::ofstream(temp / "cl.db") << "db";
        }

        const std::vector<AddonEntry> entries = ScanAddonCache(temp.string());
        CheckInt(static_cast<long long>(entries.size()), 3,
                 "the addon cache scans addons/, lua/bin and lua/*.lua");
        Check(InitAddonCache(temp.string()),
              "the one-time addon cache init succeeds");
        Check(UpdateAddonCache(entries[0].path, 7),
              "the addon cache updates an existing entry");
        Check(UpdateAddonCache((temp / "new.entry").string(), 2),
              "the addon cache appends a new entry");
        CheckInt(static_cast<long long>(SnapshotAddonCache().size()), 4,
                 "the addon cache snapshot sees the append");

        CleanerPaths paths;
        paths.data = (temp / "data").string();
        paths.downloads = (temp / "downloads").string();
        paths.databases.push_back((temp / "cl.db").string());
        const CleanerPlan plan = BuildCleanerPlan(
            paths, kCleanData | kCleanDownloads | kCleanSqlite);
        CheckInt(static_cast<long long>(plan.remove_files.size()), 2,
                 "the cleaner plan selects non-database files");
        CheckInt(static_cast<long long>(plan.sqlite_files.size()), 2,
                 "the cleaner plan routes databases to the SQLite list");
        Check(ExecuteCleanerPlan(plan, true), "a dry-run cleaner plan succeeds");
        Check(std::filesystem::exists(temp / "data" / "remove.txt", ec),
              "a dry-run does not delete a file");
        SetSqliteExecutor([](const std::string&) { return true; });
        Check(ExecuteCleanerPlan(plan, false),
              "the cleaner executes files and SQLite with a host executor");
        Check(!std::filesystem::exists(temp / "data" / "remove.txt", ec),
              "the cleaner removes a selected file");
        Check(std::filesystem::exists(temp / "data" / "keep.db", ec),
              "the cleaner never deletes a database file");
        Check(CleanerRescan(paths, kCleanData | kCleanSqlite),
              "the cleaner rescan records a plan");
        CleanerReset();
        CheckText(CopyCleanerString(), "Nothing selected",
                  "the cleaner reset restores the empty status");

        SetLuaDumpSource([] { return std::string("lua_dump.txt"); });
        Check(DumpLuaState(), "the Lua dump host boundary reports a path");
        ResetLuaDumpSourceForTest();
        Check(!DumpLuaState(),
              "the Lua dump boundary reports an absent host");
        ResetSqliteExecutorForTest();
        ResetAddonCache();
        CleanupGlobalState();
        std::filesystem::remove_all(temp, ec);
    }

    {
        using namespace sf::renderer;

        dependencies::ResetStoreForTest();
        RendererSettings settings;
        RecordingUi ui;

        settings.active_tab = 9;
        RendererResult result = RenderUtilityTab(ui, settings);
        Check(result.early_out && result.reason == "active tab outside 0..4",
              "0x1801d5ef0 rejects an out-of-range tab before drawing");

        settings.active_tab = 0;
        ui.allow_child = false;
        result = RenderUtilityTab(ui, settings);
        Check(result.early_out && result.reason == "left child clipped",
              "0x1801d5ef0 early-outs when the left child is clipped");
        Check(ui.child_ended,
              "the clipped-child early-out still balances EndChild");

        ui.allow_child = true;
        ui.child_ended = false;
        ui.checks.clear();
        ui.sliders.clear();
        ui.texts.clear();
        result = RenderUtilityTab(ui, settings);
        Check(!result.early_out && result.sections >= 7 && result.final_cleanup,
              "0x1801d5ef0 walks all top-level sections and final cleanup");
        Check(!Contains(ui.checks, "BunnyHop"),
              "a closed Movement section skips its children");

        ui.open_sections.insert("Movement");
        ui.clicked.insert("##strafe_opts");
        settings.bools["Auto strafing"] = true;
        ui.checks.clear();
        ui.sliders.clear();
        result = RenderUtilityTab(ui, settings);
        Check(Contains(ui.checks, "Auto strafing"),
              "the Movement branch reads the Auto strafing toggle");
        Check(Contains(ui.sliders, "Circle tightness") &&
                  Contains(ui.sliders, "Turn sharpness"),
              "the Auto strafing popup reaches its direction/slider children");
        Check(result.branches > 0,
              "the translated Movement path records taken branches");

        dependencies::Store().SetBool(dependencies::kFeatureFirstKey, true);
        dependencies::Store().SetBool(dependencies::kFeatureSecondKey, false);
        ui.texts.clear();
        RenderUtilityTab(ui, settings);
        Check(Contains(ui.texts, "Movement gate closed"),
              "the Movement feature gate is a real branch");

        dependencies::Store().SetBool(dependencies::kFeatureSecondKey, true);
        std::error_code ec;
        const std::filesystem::path renderer_temp =
            std::filesystem::temp_directory_path(ec) /
            "sf_renderer_entry_test";
        std::filesystem::remove_all(renderer_temp, ec);
        std::filesystem::create_directories(renderer_temp / "data", ec);
        {
            std::ofstream(renderer_temp / "data" / "remove.txt") << "x";
        }
        ui.open_sections.insert("Data cleaner");
        ui.clicked.insert("Clean now##clean_run");
        settings.cleaner_paths.data = (renderer_temp / "data").string();
        settings.cleaner_mask = dependencies::kCleanData;
        settings.clean_execute = true;
        result = RenderUtilityTab(ui, settings);
        Check(result.cleaner_calls > 0,
              "the Data cleaner branch invokes the cleaner dependency");
        Check(!std::filesystem::exists(renderer_temp / "data" / "remove.txt", ec),
              "the Data cleaner branch executes the selected file plan");
        Check(result.cleaner_issues && result.cleaner_log,
              "the Data cleaner issue/log branches execute");

        dependencies::EngineHost tools_host;
        tools_host.convar_read = [](const char*, std::string& value) {
            value = "1";
            return true;
        };
        tools_host.convar_clear_flags = [](const char*) { return true; };
        tools_host.convar_force = [](const char*, const char*) { return true; };
        dependencies::SetEngineHost(tools_host);
        ui.open_sections.insert("Tools");
        ui.clicked.insert("Set##tools_cvar_set");
        ui.clicked.insert("Read##tools_cvar_read");
        ui.clicked.insert("Unlock (clear blocking flags)##tools_cvar_flags");
        ui.clicked.insert("Force value (never touches flags)##tools_cvar_force");
        result = RenderUtilityTab(ui, settings);
        Check(result.engine_calls >= 3 && result.tools_set,
              "the Tools ConVar set/read/unlock/force branches execute");
        dependencies::ResetEngineHostForTest();

        dependencies::EngineHost chat_host;
        chat_host.event_subscribed = [](const char* name) {
            return name != nullptr && std::strcmp(name, "player_death") == 0;
        };
        dependencies::SetEngineHost(chat_host);
        ui.open_sections.insert("Chat");
        ui.clicked.insert("Refresh##chat_event");
        result = RenderUtilityTab(ui, settings);
        Check(result.chat_event_death && result.chat_event_cleanup &&
                  result.chat_event_refresh,
              "the Chat player_death/refresh branches execute");
        chat_host.event_subscribed = [](const char* name) {
            return name != nullptr && std::strcmp(name, "player_hurt") == 0;
        };
        dependencies::SetEngineHost(chat_host);
        result = RenderUtilityTab(ui, settings);
        Check(result.chat_event_hurt,
              "the Chat player_hurt branch executes");
        dependencies::Store().SetBool(dependencies::kFeatureFirstKey, false);
        result = RenderUtilityTab(ui, settings);
        Check(result.chat_event_blocked,
              "the Chat blocked-event branch executes");
        dependencies::ResetEngineHostForTest();
        dependencies::Store().SetBool(dependencies::kFeatureFirstKey, true);
        result = RenderUtilityTab(ui, settings);
        Check(result.chat_event_waiting,
              "the Chat waiting-for-event branch executes");

        ui.open_sections.insert("Anti-Screenshot");
        ui.clicked.insert("##loadurl_opts");
        settings.loading_mode = 0;
        ui.next_combo["Mode##loadurl_mode"] = 1;
        ui.next_text["##loadurl_file"] = "C:/pages/loading.html";
        result = RenderUtilityTab(ui, settings);
        Check(result.loading_mode_changed && result.loading_file_edit,
              "the loading-screen file branch executes");
        settings.loading_mode = 1;
        ui.next_combo["Mode##loadurl_mode"] = 2;
        ui.next_text["##loadurl_input"] = "https://example.com/other";
        result = RenderUtilityTab(ui, settings);
        Check(result.loading_url_edit,
              "the loading-screen URL branch executes");
        ui.next_combo.clear();
        ui.next_text.clear();

        dependencies::SetModelScanSource([](const std::string&, bool) {
            return std::vector<std::string>{"models/player/a.mdl", "models/player/b.mdl"};
        });
        ui.open_sections.insert("Tools");
        ui.open_sections.insert("Model browser");
        ui.clicked.insert("Scan mounted models##tools_scan");
        ui.clicked.insert("Apply##model_0");
        result = RenderUtilityTab(ui, settings);
        Check(result.model_scan && result.model_list && result.model_match &&
                  result.model_apply,
              "the model-browser scan/list/apply branches execute");
        settings.strings["##tools_model_filter"] = "zzz";
        result = RenderUtilityTab(ui, settings);
        Check(result.model_no_match,
              "the model-browser no-match branch executes");
        dependencies::SetModelScanSource([](const std::string&, bool) {
            return std::vector<std::string>{};
        });
        result = RenderUtilityTab(ui, settings);
        Check(result.model_empty,
              "the model-browser empty branch executes");
        std::vector<std::string> many_models;
        for (int index = 0; index < 501; ++index)
            many_models.push_back("models/player/" + std::to_string(index) + ".mdl");
        dependencies::SetModelScanSource([many_models](const std::string&, bool) {
            return many_models;
        });
        settings.strings["##tools_model_filter"] = "";
        result = RenderUtilityTab(ui, settings);
        Check(result.model_limit,
              "the model-browser 500-entry limit branch executes");
        dependencies::ResetModelScanSourceForTest();

        dependencies::ResetAddonCache();
        dependencies::UpdateAddonCache("lua/bin", 1);
        ui.open_sections.insert("File cloak");
        ui.clicked.insert("##fscloak_opts");
        ui.next_bool["##fsmode_0"] = true;
        result = RenderUtilityTab(ui, settings);
        Check(result.cloak_list && result.cloak_toggle,
              "the File-cloak list/toggle branch executes");
        ui.clicked.insert("Add##fscloak_add");
        ui.next_text["##fscloak_path"] = "addons/x";
        result = RenderUtilityTab(ui, settings);
        Check(result.cloak_add,
              "the File-cloak add branch executes");
        ui.clicked.insert("Restore defaults##fscloak_defaults");
        result = RenderUtilityTab(ui, settings);
        Check(result.cloak_restore && result.cloak_status && result.cloak_cleanup,
              "the File-cloak restore/status/cleanup branches execute");
        ui.next_bool.clear();
        ui.next_text.clear();

        dependencies::SetLuaDumpSource([] { return std::string("renderer_dump.txt"); });
        settings.dumper_enabled = false;
        ui.clicked.insert("Start Lua Dumper##dumper");
        result = RenderUtilityTab(ui, settings);
        Check(result.lua_calls > 0 && settings.dumper_enabled,
              "the Lua dumper branch calls the Lua host boundary");
        dependencies::ResetLuaDumpSourceForTest();
        dependencies::CleanerReset();
        std::filesystem::remove_all(renderer_temp, ec);
    }

    ResetUiStateForTest();
    ImGui::GetIO().Fonts->AddFontDefault();
    ImGui::GetIO().Fonts->Build();
    ImGui::NewFrame();
    ImGui::Begin("renderer-widget-test");
    ImDrawList* widget_draw = ImGui::GetWindowDrawList();
    const int widget_vertices_before = widget_draw->VtxBuffer.Size;

    QueueUiRecord("record", 0x1234u, 3, 0.75f);
    CheckInt(static_cast<long long>(UiStateForTest().records.size()), 1,
             "QueueUiRecord appends exactly one record");
    CheckText(UiStateForTest().records[0].label, "record",
              "QueueUiRecord preserves the label");
    CheckInt(static_cast<long long>(UiStateForTest().records[0].id), 0x1234,
             "QueueUiRecord preserves the ImGui ID");
    CheckInt(UiStateForTest().records[0].style, 3,
             "QueueUiRecord preserves the style slot");
    UiStateForTest().records_enabled = false;
    QueueUiRecord("disabled", 0x5678u, 0, 0.0f);
    CheckInt(static_cast<long long>(UiStateForTest().records.size()), 1,
             "QueueUiRecord honours the module record gate");
    UiStateForTest().records_enabled = true;

    Check(PopupUiLabel("popup"), "PopupUiLabel opens an available popup");
    Check(ImGui::IsPopupOpen("popup"),
          "PopupUiLabel leaves the ImGui popup open");

    float activity = 0.5f;
    Check(!DrawSiblingActivityRow("activity", &activity),
          "DrawSiblingActivityRow reports no edit without input");
    CheckInt(static_cast<long long>(UiStateForTest().records.size()), 2,
             "DrawSiblingActivityRow records its activity value");
    Check(!DrawCardButton("card", 40.0f, ImVec4(0.2f, 0.3f, 0.4f, 1.0f), false),
          "DrawCardButton reports no hover without input");
    CheckInt(static_cast<long long>(UiStateForTest().records.size()), 3,
             "DrawCardButton records its card state");
    Check(!DrawControlCard("control", ImVec4(0.2f, 0.3f, 0.4f, 1.0f)),
          "DrawControlCard reports no hover without input");
    CheckInt(static_cast<long long>(UiStateForTest().records.size()), 4,
             "DrawControlCard records its control state");

    ImVec4 foreground(0.1f, 0.2f, 0.3f, 1.0f);
    Check(!DrawForegroundEditor("foreground", &foreground),
          "DrawForegroundEditor reports no edit without input");
    CheckInt(static_cast<long long>(UiStateForTest().records.size()), 5,
             "DrawForegroundEditor records the edited foreground");
    Check(!DrawThemeColorButton("swatch", foreground),
          "DrawThemeColorButton reports no press without input");
    CheckInt(static_cast<long long>(UiStateForTest().records.size()), 6,
             "DrawThemeColorButton records the theme colour");
    float swatch = 0.25f;
    Check(!DrawThemeSwatchRow("swatch_row", &swatch),
          "DrawThemeSwatchRow reports no edit without input");
    CheckInt(static_cast<long long>(UiStateForTest().records.size()), 7,
             "DrawThemeSwatchRow records the swatch value");
    int captured_key = 0;
    Check(!DrawKeybindRow("keybind_test", &captured_key, 122.0f),
          "DrawKeybindRow reports no capture without input");
    CheckInt(captured_key, 0,
             "DrawKeybindRow preserves the unbound key without input");
    int spam_key = 0;
    Check(!DrawSpamKeybindRow("spam", "Spam", &spam_key),
          "DrawSpamKeybindRow reports no capture without input");
    CheckInt(spam_key, 0,
             "DrawSpamKeybindRow preserves the unbound key without input");

    char hint[64] = {};
    CheckInt(FormatFloatHint(hint, sizeof(hint), "%.2f", 1.25), 4,
             "FormatFloatHint reports the formatted length");
    CheckText(hint, "1.25", "FormatFloatHint formats the recovered bytes");
    CheckInt(DrawFloatHint("float_hint", "%.1f", 2.5f), 3,
             "DrawFloatHint reports the formatted length");
    CheckInt(static_cast<long long>(UiStateForTest().records.size()), 8,
             "DrawFloatHint records the formatted value");
    CheckInt(DrawIntHint("int_hint", "%d", 42), 2,
             "DrawIntHint reports the formatted length");
    CheckInt(static_cast<long long>(UiStateForTest().records.size()), 9,
             "DrawIntHint records the formatted integer");
    CheckInt(static_cast<int>(UiStateForTest().records[8].value), 42,
             "DrawIntHint preserves the integer value");

    UiLabelStyle label_style;
    UiStateForTest().selected_tab = -1;
    DrawStyledLabel(label_style, "styled", 7);
    CheckInt(UiStateForTest().selected_tab, 7,
             "DrawStyledLabel updates the selected tab");
    Check(widget_draw->VtxBuffer.Size > widget_vertices_before,
          "the reconstructed widgets emit draw vertices");

    ImGui::End();
    ImGui::Render();

    std::FILE* log_file = nullptr;
    const errno_t log_open = tmpfile_s(&log_file);
    Check(log_open == 0 && log_file != nullptr,
          "the reconstructed logger gets a CRT stream");
    if (log_file != nullptr)
    {
        SetLogToStdout(false);
        SetLogStream(log_file);
        Log(nullptr);
        Log("log %d %s", 42, "ok");
        std::fflush(log_file);
        std::rewind(log_file);

        char log_text[64] = {};
        const std::size_t log_size =
            std::fread(log_text, 1, sizeof(log_text) - 1, log_file);
        CheckText(std::string(log_text, log_size), "log 42 ok",
                  "LogV writes the exact formatted bytes to its CRT stream");

        SetLogStream(nullptr);
        std::fclose(log_file);
    }

    ImGui::DestroyContext();

    std::printf("\n%s (%d failure%s)\n",
                g_failures == 0 ? "RENDERER SELFTEST PASS"
                                : "RENDERER SELFTEST FAIL",
                g_failures, g_failures == 1 ? "" : "s");
    return g_failures == 0 ? 0 : 1;
}
