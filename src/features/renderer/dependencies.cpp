#include "dependencies.h"

#include <algorithm>
#include <cctype>
#include <filesystem>
#include <mutex>
#include <set>
#include <system_error>
#include <utility>

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <commdlg.h>

#include "log_writer.h"

namespace sf {
namespace renderer {
namespace dependencies {
namespace {

std::mutex g_state_mutex;
std::string g_status_string;
std::string g_cleaner_string;
std::vector<std::string> g_cleaner_paths;
std::vector<std::string> g_cleaner_issues;
std::vector<std::string> g_cleaner_log;

std::mutex g_addon_mutex;
std::vector<AddonEntry> g_addon_cache;
bool g_addon_initialized = false;

std::mutex g_engine_mutex;
EngineHost g_engine_host;
LuaDumpSource g_lua_dump_source;
SqliteExecutor g_sqlite_executor;
ModelScanSource g_model_scan_source;

std::mutex g_cleaner_mutex;
CleanerPlan g_cleaner_plan;

std::string LowerAscii(std::string value)
{
    for (char& character : value)
    {
        if (character >= 'A' && character <= 'Z')
            character = static_cast<char>(character - 'A' + 'a');
    }
    return value;
}

bool IsDatabasePath(const std::string& path)
{
    const std::string lower = LowerAscii(path);
    return lower.size() >= 3 &&
           (lower.compare(lower.size() - 3, 3, ".db") == 0 ||
            lower.size() >= 10 &&
                lower.compare(lower.size() - 10, 10, ".db-journal") == 0 ||
            lower.size() >= 7 &&
                lower.compare(lower.size() - 7, 7, ".db-wal") == 0 ||
            lower.size() >= 7 &&
                lower.compare(lower.size() - 7, 7, ".sqlite") == 0);
}

void CollectFiles(const std::string& root, std::vector<std::string>& out)
{
    if (root.empty())
        return;

    std::error_code ec;
    if (!std::filesystem::is_directory(root, ec) || ec)
        return;

    std::filesystem::recursive_directory_iterator it(
        root, std::filesystem::directory_options::skip_permission_denied, ec);
    const std::filesystem::recursive_directory_iterator end;
    while (it != end)
    {
        if (ec)
        {
            ec.clear();
            it.increment(ec);
            continue;
        }

        std::error_code file_ec;
        if (it->is_regular_file(file_ec) && !file_ec)
            out.push_back(it->path().string());

        it.increment(ec);
    }
}

void AddDirectEntries(const std::string& root, std::uint32_t kind,
                      std::vector<AddonEntry>& out)
{
    if (root.empty() || out.size() >= 64)
        return;

    std::error_code ec;
    if (!std::filesystem::is_directory(root, ec) || ec)
        return;

    std::filesystem::directory_iterator it(
        root, std::filesystem::directory_options::skip_permission_denied, ec);
    const std::filesystem::directory_iterator end;
    while (it != end && out.size() < 64)
    {
        if (ec)
        {
            ec.clear();
            it.increment(ec);
            continue;
        }

        std::error_code type_ec;
        const bool regular = it->is_regular_file(type_ec);
        type_ec.clear();
        const bool directory = it->is_directory(type_ec);
        if (!type_ec && (regular || directory))
            out.push_back(AddonEntry{it->path().string(), kind});

        it.increment(ec);
    }
}

void AddLuaFiles(const std::string& root, std::vector<AddonEntry>& out)
{
    if (root.empty() || out.size() >= 64)
        return;

    std::error_code ec;
    if (!std::filesystem::is_directory(root, ec) || ec)
        return;

    std::filesystem::directory_iterator it(
        root, std::filesystem::directory_options::skip_permission_denied, ec);
    const std::filesystem::directory_iterator end;
    while (it != end && out.size() < 64)
    {
        if (ec)
        {
            ec.clear();
            it.increment(ec);
            continue;
        }

        std::error_code file_ec;
        if (it->is_regular_file(file_ec) && !file_ec)
        {
            const std::string extension = LowerAscii(it->path().extension().string());
            if (extension == ".lua")
                out.push_back(AddonEntry{it->path().string(), 0});
        }

        it.increment(ec);
    }
}

EngineHost CopyEngineHost()
{
    std::lock_guard<std::mutex> lock(g_engine_mutex);
    return g_engine_host;
}

bool TruncateFile(const std::string& path)
{
    HANDLE handle = CreateFileA(path.c_str(), GENERIC_WRITE,
                                FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
                                nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (handle == INVALID_HANDLE_VALUE)
    {
        SetFileAttributesA(path.c_str(), FILE_ATTRIBUTE_NORMAL);
        handle = CreateFileA(path.c_str(), GENERIC_WRITE,
                             FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
                             nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
    }
    if (handle == INVALID_HANDLE_VALUE)
        return false;

    LARGE_INTEGER zero;
    zero.QuadPart = 0;
    const bool moved = SetFilePointerEx(handle, zero, nullptr, FILE_BEGIN) != 0;
    const bool truncated = moved && SetEndOfFile(handle) != 0;
    CloseHandle(handle);
    return truncated;
}

void AddUnique(std::vector<std::string>& values, const std::string& value)
{
    if (std::find(values.begin(), values.end(), value) == values.end())
        values.push_back(value);
}

} // namespace

// ---------------------------------------------------------------- config store

void ConfigStore::Clear()
{
    values_.clear();
}

void ConfigStore::SetBool(std::uint64_t key, bool value)
{
    values_[key] = value;
}

void ConfigStore::SetInt(std::uint64_t key, int value)
{
    values_[key] = value;
}

void ConfigStore::SetFloat(std::uint64_t key, float value)
{
    values_[key] = value;
}

void ConfigStore::SetString(std::uint64_t key, std::string value)
{
    values_[key] = std::move(value);
}

bool ConfigStore::GetBool(std::uint64_t key, bool fallback) const
{
    const std::any* value = Find(key);
    if (value == nullptr)
        return fallback;
    if (const bool* typed = AnyCast<bool>(*value))
        return *typed;
    return fallback;
}

int ConfigStore::GetInt(std::uint64_t key, int fallback) const
{
    const std::any* value = Find(key);
    if (value == nullptr)
        return fallback;
    if (const int* typed = AnyCast<int>(*value))
        return *typed;
    return fallback;
}

float ConfigStore::GetFloat(std::uint64_t key, float fallback) const
{
    const std::any* value = Find(key);
    if (value == nullptr)
        return fallback;
    if (const float* typed = AnyCast<float>(*value))
        return *typed;
    return fallback;
}

std::string ConfigStore::GetString(std::uint64_t key,
                                   std::string fallback) const
{
    const std::any* value = Find(key);
    if (value == nullptr)
        return fallback;
    if (const std::string* typed = AnyCast<std::string>(*value))
        return *typed;
    return fallback;
}

const std::any* ConfigStore::Find(std::uint64_t key) const
{
    const auto found = values_.find(key);
    return found == values_.end() ? nullptr : &found->second;
}

bool ConfigStore::Erase(std::uint64_t key)
{
    return values_.erase(key) != 0;
}

std::size_t ConfigStore::Size() const
{
    return values_.size();
}

ConfigStore& Store()
{
    static ConfigStore store;
    return store;
}

void ResetStoreForTest()
{
    Store().Clear();
}

bool FeatureGate()
{
    return Store().GetBool(kFeatureFirstKey) &&
           Store().GetBool(kFeatureSecondKey);
}

const std::any* Lookup(std::uint64_t key)
{
    return Store().Find(key);
}

// ------------------------------------------------------------ engine boundary

void SetEngineHost(EngineHost host)
{
    std::lock_guard<std::mutex> lock(g_engine_mutex);
    g_engine_host = std::move(host);
}

void ResetEngineHostForTest()
{
    std::lock_guard<std::mutex> lock(g_engine_mutex);
    g_engine_host = EngineHost{};
}

int MaxUsrCmdProcessTicks()
{
    const EngineHost host = CopyEngineHost();
    if (!host.convar_int)
        return 0x18;

    const int value = host.convar_int("sv_maxusrcmdprocessticks");
    if (value < 1)
        return 0xf;
    if (value > 0x40)
        return 0x40;
    return value;
}

bool PlayerDeathSubscribed()
{
    const EngineHost host = CopyEngineHost();
    return host.event_subscribed && host.event_subscribed("player_death");
}

bool PlayerHurtSubscribed()
{
    const EngineHost host = CopyEngineHost();
    return host.event_subscribed && host.event_subscribed("player_hurt");
}

void ConsoleOutput(const char* cvar_name, const char* value)
{
    if (cvar_name == nullptr || cvar_name[0] == '\0')
    {
        Log("no cvar name\n");
        return;
    }

    const EngineHost host = CopyEngineHost();
    if (host.console_print)
    {
        std::string text(cvar_name);
        if (value != nullptr && value[0] != '\0')
        {
            text.push_back(' ');
            text.append(value);
        }
        host.console_print(text.c_str());
        return;
    }

    Log("%s %s\n", cvar_name, value != nullptr ? value : "");
}

bool ConnectionReady()
{
    const EngineHost host = CopyEngineHost();
    if (!host.connected_ready || !host.connected_ready())
        return false;

    SetStatusString("Ready");
    return true;
}

bool SendChat(const char* message)
{
    const std::string text = message != nullptr ? message : "";
    if (text.empty())
    {
        SetStatusString("Ready: nothing to send");
        return false;
    }

    const EngineHost host = CopyEngineHost();
    if (host.chat_send && host.chat_send(text.c_str()))
    {
        SetStatusString(text + " queued");
        return true;
    }

    SetStatusString("Not in a server - " + text + " refused");
    return false;
}

bool ConVarRead(const char* name, std::string& value)
{
    const EngineHost host = CopyEngineHost();
    if (name == nullptr || name[0] == '\0' || !host.convar_read)
    {
        SetStatusString("ConVar read host unavailable");
        return false;
    }
    if (!host.convar_read(name, value))
    {
        SetStatusString(std::string("ConVar read failed: ") + name);
        return false;
    }
    SetStatusString(std::string("ConVar read: ") + name);
    return true;
}

bool ConVarClearFlags(const char* name)
{
    const EngineHost host = CopyEngineHost();
    if (name == nullptr || name[0] == '\0' || !host.convar_clear_flags)
    {
        SetStatusString("ConVar flag host unavailable");
        return false;
    }
    if (!host.convar_clear_flags(name))
    {
        SetStatusString(std::string("ConVar flags failed: ") + name);
        return false;
    }
    SetStatusString(std::string("ConVar flags cleared: ") + name);
    return true;
}

bool ConVarForce(const char* name, const char* value)
{
    const EngineHost host = CopyEngineHost();
    if (name == nullptr || name[0] == '\0' || !host.convar_force)
    {
        SetStatusString("ConVar force host unavailable");
        return false;
    }
    if (!host.convar_force(name, value != nullptr ? value : ""))
    {
        SetStatusString(std::string("ConVar force failed: ") + name);
        return false;
    }
    SetStatusString(std::string("ConVar forced: ") + name);
    return true;
}

std::string PickLoadingScreenPage(void* owner)
{
    wchar_t file_buffer[1024] = {};
    OPENFILENAMEW dialog = {};
    dialog.lStructSize = sizeof(dialog);
    dialog.hwndOwner = static_cast<HWND>(owner);
    dialog.lpstrFilter = L"Web pages\0*.html;*.htm\0All files\0*.*\0\0";
    dialog.lpstrFile = file_buffer;
    dialog.nMaxFile = static_cast<DWORD>(sizeof(file_buffer) / sizeof(file_buffer[0]));
    dialog.lpstrTitle = L"Pick a loading screen page";
    dialog.Flags = OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST | OFN_NOCHANGEDIR;

    if (GetOpenFileNameW(&dialog) == FALSE || file_buffer[0] == L'\0')
        return std::string();

    const int bytes = WideCharToMultiByte(CP_UTF8, 0, file_buffer, -1, nullptr, 0,
                                          nullptr, nullptr);
    if (bytes <= 1)
        return std::string();

    std::string result(static_cast<std::size_t>(bytes - 1), '\0');
    WideCharToMultiByte(CP_UTF8, 0, file_buffer, -1, &result[0], bytes, nullptr,
                        nullptr);
    return result;
}

// --------------------------------------------------------------- path/global

std::string NormalizeModelPath(std::string path)
{
    constexpr std::uint64_t kDropMask = 0x0800000400002401ull;
    std::string normalized;
    normalized.reserve(path.size());

    for (unsigned char byte : path)
    {
        if (byte <= 0x3b && ((kDropMask >> (byte & 0x3f)) & 1u) != 0)
            continue;
        if (byte == '\\')
            byte = '/';
        normalized.push_back(static_cast<char>(byte));
    }

    std::size_t first = 0;
    while (first < normalized.size() && normalized[first] == ' ')
        ++first;
    std::size_t last = normalized.size();
    while (last > first && normalized[last - 1] == ' ')
        --last;
    normalized = normalized.substr(first, last - first);

    if (normalized.size() > 0xf0)
        normalized.resize(0xf0);
    if (normalized.empty())
        return normalized;

    if (normalized.rfind("models/", 0) != 0)
        normalized.insert(0, "models/");
    if (normalized.size() < 4 ||
        normalized.compare(normalized.size() - 4, 4, ".mdl") != 0)
        normalized.append(".mdl");
    return normalized;
}

std::string CopyStatusString()
{
    std::lock_guard<std::mutex> lock(g_state_mutex);
    return g_status_string;
}

void SetStatusString(std::string value)
{
    std::lock_guard<std::mutex> lock(g_state_mutex);
    g_status_string = std::move(value);
}

std::string CopyCleanerString()
{
    std::lock_guard<std::mutex> lock(g_state_mutex);
    return g_cleaner_string;
}

void SetCleanerString(std::string value)
{
    std::lock_guard<std::mutex> lock(g_state_mutex);
    g_cleaner_string = std::move(value);
}

std::vector<std::string> CopyCleanerPaths()
{
    std::lock_guard<std::mutex> lock(g_state_mutex);
    return g_cleaner_paths;
}

void SetCleanerPaths(std::vector<std::string> paths)
{
    std::lock_guard<std::mutex> lock(g_state_mutex);
    g_cleaner_paths = std::move(paths);
}

std::vector<std::string> CopyCleanerIssues()
{
    std::lock_guard<std::mutex> lock(g_state_mutex);
    return g_cleaner_issues;
}

std::vector<std::string> CopyCleanerLog()
{
    std::lock_guard<std::mutex> lock(g_state_mutex);
    return g_cleaner_log;
}

void CleanupGlobalState()
{
    {
        std::lock_guard<std::mutex> lock(g_state_mutex);
        g_status_string.clear();
        g_cleaner_string.clear();
        g_cleaner_paths.clear();
        g_cleaner_issues.clear();
        g_cleaner_log.clear();
    }
    CleanerReset();
    ResetAddonCache();
}

// ---------------------------------------------------------------- addon cache

std::vector<AddonEntry> ScanAddonCache(const std::string& root)
{
    std::vector<AddonEntry> entries;
    if (root.empty())
        return entries;

    const std::filesystem::path base(root);
    AddDirectEntries((base / "addons").string(), 1, entries);
    AddDirectEntries((base / "lua" / "bin").string(), 0, entries);
    AddLuaFiles((base / "lua").string(), entries);
    return entries;
}

bool InitAddonCache(const std::string& root)
{
    std::lock_guard<std::mutex> lock(g_addon_mutex);
    if (g_addon_initialized)
        return !g_addon_cache.empty();

    g_addon_cache = ScanAddonCache(root);
    g_addon_initialized = true;
    return !g_addon_cache.empty();
}

bool UpdateAddonCache(const std::string& path, std::uint32_t kind)
{
    if (path.empty())
        return false;

    std::lock_guard<std::mutex> lock(g_addon_mutex);
    for (AddonEntry& entry : g_addon_cache)
    {
        if (entry.path == path)
        {
            entry.kind = kind;
            return true;
        }
    }

    if (g_addon_cache.size() >= 0x40)
        return false;

    g_addon_cache.push_back(AddonEntry{path, kind});
    g_addon_initialized = true;
    return true;
}

void ResetAddonCache()
{
    std::lock_guard<std::mutex> lock(g_addon_mutex);
    g_addon_cache.clear();
    g_addon_initialized = false;
}

std::vector<AddonEntry> SnapshotAddonCache()
{
    std::lock_guard<std::mutex> lock(g_addon_mutex);
    return g_addon_cache;
}

// --------------------------------------------------------------- cleaner

CleanerPlan BuildCleanerPlan(const CleanerPaths& paths, std::uint32_t mask)
{
    CleanerPlan plan;
    std::vector<std::string> candidates;

    if ((mask & kCleanData) != 0)
        CollectFiles(paths.data, candidates);
    if ((mask & kCleanDownloads) != 0)
        CollectFiles(paths.downloads, candidates);
    if ((mask & kCleanCache) != 0)
        CollectFiles(paths.cache, candidates);
    if ((mask & kCleanCrashes) != 0)
        CollectFiles(paths.crashes, candidates);
    if ((mask & kCleanLuaBin) != 0)
        CollectFiles(paths.lua_bin, candidates);

    std::set<std::string> seen;
    for (const std::string& file : candidates)
    {
        if (!seen.insert(file).second)
            continue;
        if (IsDatabasePath(file))
        {
            if ((mask & kCleanSqlite) != 0)
                plan.sqlite_files.push_back(file);
            continue;
        }
        plan.remove_files.push_back(file);
    }

    if ((mask & kCleanSqlite) != 0)
    {
        for (const std::string& database : paths.databases)
        {
            if (!database.empty() && seen.insert(database).second)
                plan.sqlite_files.push_back(database);
        }
    }

    std::sort(plan.remove_files.begin(), plan.remove_files.end());
    std::sort(plan.sqlite_files.begin(), plan.sqlite_files.end());
    return plan;
}

void SetSqliteExecutor(SqliteExecutor executor)
{
    std::lock_guard<std::mutex> lock(g_engine_mutex);
    g_sqlite_executor = std::move(executor);
}

void ResetSqliteExecutorForTest()
{
    std::lock_guard<std::mutex> lock(g_engine_mutex);
    g_sqlite_executor = SqliteExecutor{};
}

bool ExecuteCleanerPlan(const CleanerPlan& plan, bool dry_run,
                        std::string* error)
{
    if (dry_run)
        return true;

    bool success = true;
    for (const std::string& file : plan.remove_files)
    {
        std::error_code ec;
        std::filesystem::remove(file, ec);
        if (!ec)
            continue;
        if (!TruncateFile(file))
        {
            success = false;
            if (error != nullptr && error->empty())
                *error = file + ": " + ec.message();
        }
    }

    // The database files are executed through the engine-owned sqlite3 handle,
    // never deleted or truncated here.
    SqliteExecutor executor;
    {
        std::lock_guard<std::mutex> lock(g_engine_mutex);
        executor = g_sqlite_executor;
    }
    for (const std::string& database : plan.sqlite_files)
    {
        if (!executor || !executor(database))
        {
            success = false;
            if (error != nullptr && error->empty())
                *error = database + ": sql interface not found";
        }
    }
    return success;
}

bool CleanerRescan(const CleanerPaths& paths, std::uint32_t mask)
{
    const CleanerPlan plan = BuildCleanerPlan(paths, mask);
    {
        std::lock_guard<std::mutex> lock(g_cleaner_mutex);
        g_cleaner_plan = plan;
    }

    std::vector<std::string> display;
    std::vector<std::string> issues;
    for (const std::string& file : plan.remove_files)
    {
        display.push_back(file);
        issues.push_back("delete " + file);
    }
    for (const std::string& database : plan.sqlite_files)
        issues.push_back("wipe " + database);
    SetCleanerPaths(std::move(display));
    {
        std::lock_guard<std::mutex> lock(g_state_mutex);
        g_cleaner_issues = std::move(issues);
        g_cleaner_log.clear();
        g_cleaner_log.push_back("rescan complete");
    }
    SetCleanerString(plan.remove_files.empty() ? "Nothing selected" : "Cleaning...");
    return !plan.remove_files.empty() || !plan.sqlite_files.empty();
}

bool CleanerPostExit(const CleanerPaths& paths, std::uint32_t mask)
{
    CleanerPlan plan;
    {
        std::lock_guard<std::mutex> lock(g_cleaner_mutex);
        plan = g_cleaner_plan;
    }
    if (plan.remove_files.empty() && plan.sqlite_files.empty())
        plan = BuildCleanerPlan(paths, mask);

    std::string error;
    const bool success = ExecuteCleanerPlan(plan, false, &error);
    SetCleanerString(success ? "Cleaning..." : "[DATA] post-exit cleaner failed: game root unresolved");
    if (!success && error.empty())
        SetCleanerString("[DATA] post-exit cleaner failed: game root unresolved");
    return success;
}

std::vector<std::string> ScanModels(const std::string& root, bool all)
{
    ModelScanSource source;
    {
        std::lock_guard<std::mutex> lock(g_engine_mutex);
        source = g_model_scan_source;
    }
    if (!source)
        return {};
    return source(root, all);
}

void SetModelScanSource(ModelScanSource source)
{
    std::lock_guard<std::mutex> lock(g_engine_mutex);
    g_model_scan_source = std::move(source);
}

void ResetModelScanSourceForTest()
{
    std::lock_guard<std::mutex> lock(g_engine_mutex);
    g_model_scan_source = nullptr;
}

void CleanerReset()
{
    {
        std::lock_guard<std::mutex> lock(g_cleaner_mutex);
        g_cleaner_plan = CleanerPlan{};
    }
    SetCleanerString("Nothing selected");
    SetCleanerPaths({});
    {
        std::lock_guard<std::mutex> lock(g_state_mutex);
        g_cleaner_issues.clear();
        g_cleaner_log.clear();
    }
}

// ---------------------------------------------------------------- Lua boundary

void SetLuaDumpSource(LuaDumpSource source)
{
    std::lock_guard<std::mutex> lock(g_engine_mutex);
    g_lua_dump_source = std::move(source);
}

void ResetLuaDumpSourceForTest()
{
    std::lock_guard<std::mutex> lock(g_engine_mutex);
    g_lua_dump_source = LuaDumpSource{};
}

bool DumpLuaState()
{
    LuaDumpSource source;
    {
        std::lock_guard<std::mutex> lock(g_engine_mutex);
        source = g_lua_dump_source;
    }

    if (!source)
    {
        Log("[DUMP] Lua dumper unavailable\n");
        return false;
    }

    const std::string path = source();
    if (path.empty())
    {
        Log("[DUMP] Lua dumper unavailable\n");
        return false;
    }

    Log("[DUMP] Lua dumper enabled -> %s\n", path.c_str());
    return true;
}

} // namespace dependencies
} // namespace renderer
} // namespace sf
