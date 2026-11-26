#pragma once
// Stage 3.13 renderer dependency layer.
//
// The 0x1801d5ef0 body calls 26 helpers that were still absent from the
// standalone build: six config-store/std::any helpers, seven first-party
// file/global-state helpers, four file+SQLite maintenance helpers, eight
// engine-interface helpers and one Lua-VM helper.  This module supplies the
// first-party bodies directly and keeps the engine/Lua-owned operations behind
// explicit host callbacks.  It is deliberately independent of the recovered
// renderer's Ghidra types so the implementations can be built and tested.

#include <any>
#include <cstddef>
#include <cstdint>
#include <functional>
#include <map>
#include <string>
#include <vector>

namespace sf {
namespace renderer {
namespace dependencies {

// ---------------------------------------------------------------- config store
// 0x18006b0e0 reads this root and two bool children through the map lookup
// 0x180241610 and the std::any bool cast 0x1801fcfc0.
inline constexpr std::uint64_t kFeatureRootKey = 0xf7521f28977a3033ull;
inline constexpr std::uint64_t kFeatureFirstKey = 0x9653fa4f0c4e1755ull;
inline constexpr std::uint64_t kFeatureSecondKey = 0x527acabecbc8e53bull;

struct ConfigStore
{
    void Clear();
    void SetBool(std::uint64_t key, bool value);
    void SetInt(std::uint64_t key, int value);
    void SetFloat(std::uint64_t key, float value);
    void SetString(std::uint64_t key, std::string value);

    bool GetBool(std::uint64_t key, bool fallback = false) const;
    int GetInt(std::uint64_t key, int fallback = 0) const;
    float GetFloat(std::uint64_t key, float fallback = 0.0f) const;
    std::string GetString(std::uint64_t key,
                          std::string fallback = std::string()) const;

    const std::any* Find(std::uint64_t key) const;
    bool Erase(std::uint64_t key);
    std::size_t Size() const;

private:
    std::map<std::uint64_t, std::any> values_;
};

ConfigStore& Store();
void ResetStoreForTest();

// 0x18006b0e0: both bool children must be true.
bool FeatureGate();

// 0x1801fcfc0 / 0x1802029c0 / 0x1802028c0 / 0x180202dc0: checked std::any
// casts.  The typed getters above use these; this template is the same check
// for callers that need the payload address.
template <typename T>
const T* AnyCast(const std::any& value) noexcept
{
    return std::any_cast<T>(&value);
}

// 0x180241a30: map lookup.  The recovered body is std::map<uint64_t, node>;
// the store exposes the same lookup through a real std::map.
const std::any* Lookup(std::uint64_t key);

// ------------------------------------------------------------ engine boundary
// The eight engine rows are host-owned operations: ConVar lookup, game-event
// subscription, console output, connection readiness and chat send.  The
// renderer layer owns the exact clamping/status behaviour; the host supplies
// the live engine call.  This is a real boundary, not an empty stub: callers
// install the callbacks from the runtime.
struct EngineHost
{
    std::function<int(const char* name)> convar_int;
    std::function<bool(const char* event_name)> event_subscribed;
    std::function<void(const char* text)> console_print;
    std::function<bool()> connected_ready;
    std::function<bool(const char* message)> chat_send;
    std::function<bool(const char* name, std::string& value)> convar_read;
    std::function<bool(const char* name)> convar_clear_flags;
    std::function<bool(const char* name, const char* value)> convar_force;
};

void SetEngineHost(EngineHost host);
void ResetEngineHostForTest();

// 0x1800b3740: sv_maxusrcmdprocessticks, clamp 0x18..0x40; a failed lookup
// returns 0x18 and a non-positive ConVar value returns 0xf.
int MaxUsrCmdProcessTicks();

// 0x180142570 / 0x1801425f0.
bool PlayerDeathSubscribed();
bool PlayerHurtSubscribed();

// 0x180144d80.
void ConsoleOutput(const char* cvar_name, const char* value);

// 0x180145a20.
bool ConnectionReady();

// 0x180145f40.
bool SendChat(const char* message);

// ConVar tools used by the Tools section.  The live ConVar object is
// engine-owned; these wrappers keep the read/clear/force operations typed
// instead of silently dropping the button press.
bool ConVarRead(const char* name, std::string& value);
bool ConVarClearFlags(const char* name);
bool ConVarForce(const char* name, const char* value);

// 0x180220c70: the Win32 file picker used by the loading-screen control.
std::string PickLoadingScreenPage(void* owner);

// --------------------------------------------------------------- path/global
// 0x180145c40: normalize separators, filter control bytes, cap at 0xf0,
// trim outer spaces, prepend models/ and append .mdl.
std::string NormalizeModelPath(std::string path);

// 0x180144cf0 / 0x18014e010: thread-safe copies of the first-party global
// status strings.
std::string CopyStatusString();
void SetStatusString(std::string value);
std::string CopyCleanerString();
void SetCleanerString(std::string value);

// 0x18014e0a0: snapshot of the first-party global path vector.
std::vector<std::string> CopyCleanerPaths();
void SetCleanerPaths(std::vector<std::string> paths);

// 0x18014e130: clear the first-party global maintenance state.
void CleanupGlobalState();

// Data-cleaner issue/log snapshots used by the renderer's Data cleaner
// section.  They are rebuilt by CleanerRescan and cleared by CleanerReset.
std::vector<std::string> CopyCleanerIssues();
std::vector<std::string> CopyCleanerLog();

// Model-browser scan boundary.  The live game owns the mounted model list;
// the renderer owns filtering/selection.  A missing host returns an empty list.
using ModelScanSource = std::function<std::vector<std::string>(const std::string& root,
                                                              bool all)>;
void SetModelScanSource(ModelScanSource source);
void ResetModelScanSourceForTest();
std::vector<std::string> ScanModels(const std::string& root, bool all);

// ---------------------------------------------------------------- addon cache
struct AddonEntry
{
    std::string path;
    std::uint32_t kind = 0;
};

// 0x1801582f0: scan addons/, lua/bin and lua/*.lua into the first-party cache.
std::vector<AddonEntry> ScanAddonCache(const std::string& root);

// 0x180158560: one-time scan guard.
bool InitAddonCache(const std::string& root);

// 0x1801585e0: update an existing entry or append until the 0x40 cap.
bool UpdateAddonCache(const std::string& path, std::uint32_t kind);

// Cache reset/snapshot used by the cleaner and by the renderer.
void ResetAddonCache();
std::vector<AddonEntry> SnapshotAddonCache();

// --------------------------------------------------------------- cleaner
enum CleanerFlag : std::uint32_t
{
    kCleanData = 1u << 0,
    kCleanDownloads = 1u << 1,
    kCleanCache = 1u << 2,
    kCleanCrashes = 1u << 3,
    kCleanLuaBin = 1u << 4,
    kCleanSqlite = 1u << 5,
    kCleanConvars = 1u << 6,
    kCleanFileTimes = 1u << 7,
    kCleanInstallAge = 1u << 8,
};

struct CleanerPaths
{
    std::string data;
    std::string downloads;
    std::string cache;
    std::string crashes;
    std::string lua_bin;
    std::vector<std::string> databases;
};

struct CleanerPlan
{
    std::vector<std::string> remove_files;
    std::vector<std::string> sqlite_files;
};

// 0x180151970 / 0x1801542d0: enumerate the selected roots.  Database files are
// never put in remove_files; they go to the SQLite execution list.
CleanerPlan BuildCleanerPlan(const CleanerPaths& paths, std::uint32_t mask);

// 0x1801544e0: execute a plan.  dry_run reports what would happen without
// touching the filesystem.  Non-database files that cannot be removed are
// truncated; .db/.sqlite files are always left to the SQLite path.  The
// engine supplies the sqlite3_exec-equivalent through this callback.
using SqliteExecutor = std::function<bool(const std::string& path)>;
void SetSqliteExecutor(SqliteExecutor executor);
void ResetSqliteExecutorForTest();
bool ExecuteCleanerPlan(const CleanerPlan& plan, bool dry_run,
                        std::string* error = nullptr);

// 0x180151970 and 0x1801542d0: rescan/post-exit entry points.  These are
// explicit calls; the DLL never starts a cleaner thread at load time.
bool CleanerRescan(const CleanerPaths& paths, std::uint32_t mask);
bool CleanerPostExit(const CleanerPaths& paths, std::uint32_t mask);

// 0x180154460: clear the pending plan and the global maintenance state.
void CleanerReset();

// ---------------------------------------------------------------- Lua boundary
// 0x1801996a0: the Lua dump walks a live lua_State.  The VM is engine-owned;
// the runtime supplies a source that returns the dump path (or an empty string
// when no Lua interface is available).  The renderer layer owns the log line.
using LuaDumpSource = std::function<std::string()>;
void SetLuaDumpSource(LuaDumpSource source);
void ResetLuaDumpSourceForTest();
bool DumpLuaState();

} // namespace dependencies
} // namespace renderer
} // namespace sf
