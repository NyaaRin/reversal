// Skyfall reconstruction runtime.
//
// m64 installs 21 VMT hooks from 0x1801f9180 and the FrameStageNotify /
// RunCommand pair from 0x1801ecae0. This runtime's install path covers all 23
// unique slots (24 descriptor rows; ClientMode is recorded in both tables)
// after the client has a live local player; optional rows are attempted only
// when their interface/device is present. Every detour preserves the original return value and
// calls the original with the exact recovered ABI. The command-stage features
// consume the reconstructed helpers in src/features through runtime_features.h.
//
// D3D hooks are installed only when the shaderapidx9 device is found with the
// same x64 pattern 0x180017150 uses. MaterialSystem, Panel, ViewRender,
// ModelRender, InputSystem and LuaShared are optional; an absent interface
// leaves its rows uninstalled and is reported explicitly.
//
// The runtime remains self-contained: no link or embedded copy of m64.dll or
// VenomHook is used.  The reconstructed renderer uses the vendored ImGui core
// only for its live drawing backend; its control flow is in renderer.cpp.

#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <Windows.h>

#include <algorithm>
#include <atomic>
#include <cfloat>
#include <chrono>
#include <cmath>
#include <cstdarg>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <mutex>
#include <string>
#include <thread>
#include <utility>
#include <vector>

#include "imgui.h"

#include "config.h"
#include "visual_overlay.h"
#include "gmod_sdk.h"
#include "hooks.h"
#include "runtime_bridge.h"
#include "runtime_features.h"
#include "../features/renderer/dependencies.h"
#include "../features/renderer/renderer_runtime.h"
#include "../offsets/offsets.h"

namespace {

HMODULE g_module = nullptr;
sf::runtime::Config g_config;
sf::runtime::HookState g_state;
gmod::Vector g_lastPunchWritten{};
bool g_hasLastPunch = false;

void* g_chlClient = nullptr;
void* g_prediction = nullptr;
void* g_clientMode = nullptr;
void* g_engine = nullptr;
void* g_engineTrace = nullptr;
void* g_entityList = nullptr;
void* g_debugOverlay = nullptr;
void* g_materialSystem = nullptr;
void* g_panel = nullptr;
void* g_viewRender = nullptr;
void* g_modelRender = nullptr;
void* g_inputSystem = nullptr;
void* g_luaShared = nullptr;
void* g_d3dDevice = nullptr;

gmod::Netvars g_netvars;
std::atomic<bool> g_ready{ false };
std::atomic<bool> g_stop{ false };
std::atomic<bool> g_reloadConfig{ false };

bool g_createMoveInstalled = false;
bool g_frameStageInstalled = false;
bool g_runCommandInstalled = false;
int g_installedRows = 0;
int g_installedSlots = 0;

std::mutex g_logMutex;
FILE* g_logFile = nullptr;

struct InstalledSlot
{
    void* instance = nullptr;
    int slot = 0;
    void* detour = nullptr;
    void* original = nullptr;
};

std::vector<InstalledSlot> g_slots;

const char* HookState(bool installed)
{
    return installed ? "installed" : "not installed";
}

void Log(const char* format, ...);
void ApplyVisualOverrides();

void InstallRendererDependencyHost()
{
    sf::renderer::dependencies::EngineHost host;
    host.console_print = [](const char* text) {
        Log("%s\n", text != nullptr ? text : "");
    };
    host.connected_ready = [] {
        return g_engine != nullptr && gmod::CallVirtual<bool>(g_engine, 26);
    };
    host.chat_send = [](const char* message) {
        if (g_engine == nullptr || message == nullptr)
            return false;
        auto clientCmd = gmod::GetVirtual<gmod::ClientCmdFn>(g_engine, 7);
        if (clientCmd == nullptr)
            return false;
        std::string command = "say \"";
        for (const char* character = message; *character != '\0'; ++character)
            command.push_back(*character == '"' ? '\'' : *character);
        command.push_back('"');
        clientCmd(g_engine, command.c_str());
        return true;
    };
    sf::renderer::dependencies::SetEngineHost(std::move(host));
}

void Log(const char* format, ...)
{
    char message[2048] = {};
    va_list args;
    va_start(args, format);
    std::vsnprintf(message, sizeof(message), format, args);
    va_end(args);

    OutputDebugStringA("[Skyfall] ");
    OutputDebugStringA(message);
    OutputDebugStringA("\n");

    if (!g_config.log)
        return;

    std::lock_guard<std::mutex> lock(g_logMutex);
    if (g_logFile == nullptr)
    {
        std::string path = g_config.sourcePath;
        const std::size_t slash = path.find_last_of("\\/");
        if (slash != std::string::npos)
            path = path.substr(0, slash + 1) + "skyfall.log";
        else
            path = "skyfall.log";
        fopen_s(&g_logFile, path.c_str(), "a");
    }
    if (g_logFile != nullptr)
    {
        std::fprintf(g_logFile, "%s\n", message);
        std::fflush(g_logFile);
    }
}

void ResetPunchCache()
{
    g_lastPunchWritten = {};
    g_hasLastPunch = false;
}

bool AlreadyInstalled(void* instance, int slot)
{
    for (const InstalledSlot& installed : g_slots)
        if (installed.instance == instance && installed.slot == slot)
            return true;
    return false;
}

bool InstallSpec(const char* name, void* instance, int slot, void* detour, void** original)
{
    if (instance == nullptr)
    {
        Log("hook %s: interface missing", name);
        return false;
    }
    if (AlreadyInstalled(instance, slot))
        return true;

    void* previous = nullptr;
    if (!sf::runtime::InstallVmt(instance, slot, detour, &previous))
    {
        Log("hook %s: VMT install failed (instance=%p slot=%d)", name, instance, slot);
        return false;
    }

    *original = previous;
    g_slots.push_back(InstalledSlot{ instance, slot, detour, previous });
    Log("hook %s: %s original=%p", name, HookState(true), previous);
    return true;
}

void UninstallHooks()
{
    for (auto it = g_slots.rbegin(); it != g_slots.rend(); ++it)
    {
        if (!sf::runtime::UninstallVmt(it->instance, it->slot, it->detour, it->original))
            Log("hook restore failed (instance=%p slot=%d)", it->instance, it->slot);
    }
    g_slots.clear();
    g_state.original = {};
    g_createMoveInstalled = false;
    g_frameStageInstalled = false;
    g_runCommandInstalled = false;
    g_installedRows = 0;
    g_installedSlots = 0;
    g_ready.store(false, std::memory_order_release);
}

int LocalPlayerIndex()
{
    if (g_engine == nullptr)
        return -1;
    return gmod::CallVirtual<int>(g_engine, 12);
}

void* LocalPlayer()
{
    if (g_entityList == nullptr)
        return nullptr;
    const int index = LocalPlayerIndex();
    if (index <= 0)
        return nullptr;
    return gmod::CallVirtual<void*>(g_entityList, 3, index);
}

int ReadFlags(void* entity)
{
    int flags = 0;
    if (entity == nullptr || !gmod::ReadField(entity, g_netvars.flags, flags))
        return 0;
    return flags;
}

int ReadHealth(void* entity)
{
    int health = 0;
    if (entity == nullptr || !gmod::ReadField(entity, g_netvars.health, health))
        return 0;
    return health;
}

int ReadTeam(void* entity)
{
    int team = 0;
    if (entity == nullptr || !gmod::ReadField(entity, g_netvars.team, team))
        return 0;
    return team;
}

bool ReadAlive(void* entity)
{
    if (entity == nullptr)
        return false;
    unsigned char life = 0;
    if (g_netvars.lifeState > 0 && gmod::ReadField(entity, g_netvars.lifeState, life))
        return life == 0;
    return ReadHealth(entity) > 0;
}

gmod::Vector ReadVelocity(void* entity)
{
    gmod::Vector velocity{};
    if (entity != nullptr)
        gmod::ReadField(entity, g_netvars.velocity, velocity);
    return velocity;
}

bool ReadViewOffset(void* entity, gmod::Vector& offset)
{
    if (entity == nullptr || g_netvars.viewOffset <= 0)
        return false;
    return gmod::ReadField(entity, g_netvars.viewOffset, offset);
}

double EngineTime()
{
    if (g_engine == nullptr)
        return 0.0;
    auto time = gmod::GetVirtual<float(__fastcall*)(void*)>(g_engine, 14);
    return time != nullptr ? static_cast<double>(time(g_engine)) : 0.0;
}

// EngineTraceClient003, recovered at 0x180017150 line 262. The trigger body at
// 0x1800e2580 calls slot 4 with MASK_SHOT and a CDoubleTraceFilter that skips
// the local player. Keep the call behind the validated/SEH-guarded wrapper.
bool TraceCommandRay(void* context, const gmod::Vector& start,
                     const gmod::Vector& end, gmod::TraceHit& hit)
{
    if (context == nullptr)
        return false;

    gmod::Ray_t ray;
    ray.start = start;
    ray.delta = end - start;
    ray.startOffset = {};
    ray.extents = {};
    ray.isRay = true;
    ray.isSwept = ray.delta.Length() > 0.f;

    gmod::DoubleTraceFilter filter(LocalPlayer(), nullptr);
    gmod::TraceResult result;
    if (!gmod::TraceRay(context, ray, 0x46004003u, filter, result))
        return false;

    hit.entity = result.HitEntity();
    hit.fraction = result.Fraction();
    hit.hitGroup = result.HitGroup();
    hit.startSolid = result.StartSolid();
    return true;
}

bool IsInGame()
{
    if (g_engine == nullptr)
        return false;
    auto isInGame = gmod::GetVirtual<bool(__fastcall*)(void*)>(g_engine, 26);
    return isInGame != nullptr && isInGame(g_engine);
}

// The same shaderapidx9 x64 pattern 0x180017150 uses. The displacement at
// match+0x19 resolves the device global at match+0x1d.
bool MatchBytes(const unsigned char* bytes, const unsigned char* pattern, std::size_t count)
{
    for (std::size_t i = 0; i < count; ++i)
        if (bytes[i] != pattern[i])
            return false;
    return true;
}

void* FindD3DDevice()
{
    HMODULE shader = GetModuleHandleA("shaderapidx9.dll");
    if (shader == nullptr)
        return nullptr;

    const auto* base = reinterpret_cast<const unsigned char*>(shader);
    if (!gmod::Readable(base, sizeof(IMAGE_DOS_HEADER)))
        return nullptr;
    const auto* dos = reinterpret_cast<const IMAGE_DOS_HEADER*>(base);
    if (dos->e_lfanew <= 0 || dos->e_lfanew > 0x100000)
        return nullptr;

    const auto* nt = reinterpret_cast<const IMAGE_NT_HEADERS*>(base + dos->e_lfanew);
    if (!gmod::Readable(nt, sizeof(IMAGE_NT_HEADERS)))
        return nullptr;
    if (nt->Signature != IMAGE_NT_SIGNATURE || nt->FileHeader.NumberOfSections > 96)
        return nullptr;

    static const unsigned char kPattern[] = {
        0x48, 0x89, 0x6C, 0x24, 0x18, 0x48, 0x89, 0x7C, 0x24, 0x20,
        0x41, 0x56, 0x48, 0x83, 0xEC, 0x30, 0x48, 0x8B, 0xF9, 0x45,
        0x33, 0xF6, 0x48, 0x8B, 0x0D
    };

    const IMAGE_SECTION_HEADER* section = IMAGE_FIRST_SECTION(nt);
    for (unsigned int s = 0; s < nt->FileHeader.NumberOfSections; ++s, ++section)
    {
        if ((section->Characteristics & IMAGE_SCN_MEM_EXECUTE) == 0)
            continue;
        const std::size_t length = section->Misc.VirtualSize;
        if (length < sizeof(kPattern))
            continue;
        const unsigned char* start = base + section->VirtualAddress;
        if (!gmod::Readable(start, length))
            continue;

        for (std::size_t i = 0; i + sizeof(kPattern) <= length; ++i)
        {
            if (!MatchBytes(start + i, kPattern, sizeof(kPattern)))
                continue;

            std::int32_t displacement = 0;
            std::memcpy(&displacement, start + i + 0x19, sizeof(displacement));
            const unsigned char* slot = start + i + 0x1d + displacement;
            if (!gmod::Readable(slot, sizeof(void*)))
                continue;
            return *reinterpret_cast<void* const*>(slot);
        }
    }
    return nullptr;
}

void ApplyCommand(gmod::CUserCmd* command)
{
    if (command == nullptr || !g_config.enabled || !g_ready.load(std::memory_order_acquire))
        return;

    void* player = LocalPlayer();
    if (player == nullptr || !ReadAlive(player))
        return;

    sf::runtime::CommandInputs inputs;
    inputs.command = command;
    inputs.alive = true;
    inputs.onGround = (ReadFlags(player) & gmod::kFlagOnGround) != 0;
    inputs.localTeam = ReadTeam(player);
    inputs.localVelocity = ReadVelocity(player);
    inputs.verticalSpeed = inputs.localVelocity.z;
    inputs.attackHeld = (command->buttons & static_cast<int>(gmod::kInAttack)) != 0 ||
                        (GetAsyncKeyState('X') & 0x8000) != 0;
    inputs.jumpHeld = (command->buttons & static_cast<int>(gmod::kInJump)) != 0;
    inputs.simTime = EngineTime();
    inputs.traceRay = &TraceCommandRay;
    inputs.traceContext = g_engineTrace;
    inputs.classId = 2; // recovered human-player class gate
    inputs.moveType = 0;

    static bool previousJump = false;
    inputs.previousJumpHeld = previousJump;
    previousJump = inputs.jumpHeld;

    gmod::Vector localOrigin = gmod::EntityOrigin(player);
    gmod::Vector localViewOffset{};
    const bool eyeResolved = ReadViewOffset(player, localViewOffset);
    inputs.localEye = localOrigin;
    if (eyeResolved)
        inputs.localEye = localOrigin + localViewOffset;
    else
        inputs.localEye = localOrigin + gmod::Vector(0.f, 0.f, 64.f);

    if (g_config.aimbot || g_config.triggerbot || g_config.backtrack)
    {
        const int highest = gmod::CallVirtual<int>(g_entityList, 6);
        // The recovered player arrays cover 0x81 entries. Capping at 64
        // silently dropped every player above the 64th slot on full servers.
        const int limit = highest > 128 ? 128 : highest;
        for (int index = 1; index <= limit; ++index)
        {
            void* entity = gmod::CallVirtual<void*>(g_entityList, 3, index);
            if (entity == nullptr || entity == player)
                continue;
            const int flags = ReadFlags(entity);
            const bool isPlayer =
                (flags & (gmod::kFlagClient | gmod::kFlagFakeClient)) != 0;
            const bool isNpc = (flags & gmod::kFlagNpc) != 0;
            if (!isPlayer && !isNpc)
                continue;
            if (isPlayer && !g_config.aimPlayers)
                continue;
            if (!isPlayer && !g_config.aimNpcs)
                continue;
            if (!ReadAlive(entity))
                continue;
            if (!g_config.aimTeam && inputs.localTeam > 0 &&
                ReadTeam(entity) == inputs.localTeam)
                continue;

            gmod::Vector targetOffset{};
            // Bots and some script-spawned players do not network the view
            // offset.  Fall back to the standing player eye height instead of
            // dropping the target from the aim/trigger list entirely.
            if (!ReadViewOffset(entity, targetOffset))
                targetOffset = gmod::Vector(0.f, 0.f, 64.f);

            sf::runtime::TargetInfo target;
            target.entity = entity;
            target.index = index;
            target.origin = gmod::EntityOrigin(entity);
            target.eye = target.origin + targetOffset;
            target.velocity = ReadVelocity(entity);
            target.team = ReadTeam(entity);
            target.health = ReadHealth(entity);
            target.alive = true;
            target.dormant = gmod::IsDormant(entity);
            target.noDraw = (flags & 0x40) != 0;
            int takeDamage = 1;
            if (g_netvars.takedamage > 0)
                gmod::ReadField(entity, g_netvars.takedamage, takeDamage);
            target.godmode = takeDamage == 0;
            target.simTime = inputs.simTime;
            inputs.targets.push_back(target);
        }
    }

    static std::size_t lastTargetCount = 0;
    if (inputs.targets.size() != lastTargetCount)
    {
        lastTargetCount = inputs.targets.size();
        Log("aim targets: %zu (local team=%d eye=%d)", inputs.targets.size(),
            inputs.localTeam, eyeResolved ? 1 : 0);
    }

    g_state.features.OnCreateMove(g_config, inputs);

    const sf::runtime::FeatureStats& stats = g_state.features.Stats();
    static sf::runtime::FeatureStats lastStats{};
    if (stats.aimTicks != lastStats.aimTicks || stats.triggerFires != lastStats.triggerFires ||
        stats.strafeTicks != lastStats.strafeTicks || stats.nospreadShots != lastStats.nospreadShots ||
        stats.antiaimTicks != lastStats.antiaimTicks || stats.backtrackRecords != lastStats.backtrackRecords ||
        stats.bhopTicks != lastStats.bhopTicks)
    {
        lastStats = stats;
        Log("features: aim=%d trigger=%d strafe=%d antiaim=%d nospread=%d backtrack=%d bhop=%d",
            stats.aimTicks, stats.triggerFires, stats.strafeTicks, stats.antiaimTicks,
            stats.nospreadShots, stats.backtrackRecords, stats.bhopTicks);
    }
}

// --------------------------------------------------------- visual overlay

ImU32 Rgba(float red, float green, float blue, float alpha)
{
    const auto channel = [](float value) {
        return static_cast<ImU32>(std::clamp((int)std::lround(value * 255.f), 0, 255));
    };
    return IM_COL32(channel(red), channel(green), channel(blue), channel(alpha));
}

struct ViewMatrix
{
    float m[4][4] = {};
};

struct Ghost
{
    gmod::Vector origin{};
    float time = 0.f;
    int team = 0;
};

struct TrackedPlayer
{
    int index = 0;
    gmod::Vector origin{};
    float time = 0.f;
    int team = 0;
    bool seen = false;
};

std::vector<Ghost> g_ghosts;
std::vector<TrackedPlayer> g_tracked;

void ResetVisualState()
{
    g_ghosts.clear();
    g_tracked.clear();
}

bool WorldToScreen(const gmod::Vector& point, const ViewMatrix& view, int width, int height,
                   ImVec2& out)
{
    const float w = point.x * view.m[3][0] + point.y * view.m[3][1] +
                    point.z * view.m[3][2] + view.m[3][3];
    if (!std::isfinite(w) || w < 0.001f)
        return false;
    const float x = (point.x * view.m[0][0] + point.y * view.m[0][1] +
                     point.z * view.m[0][2] + view.m[0][3]) / w;
    const float y = (point.x * view.m[1][0] + point.y * view.m[1][1] +
                     point.z * view.m[1][2] + view.m[1][3]) / w;
    out = ImVec2(width * 0.5f * x + width * 0.5f, height * 0.5f - height * 0.5f * y);
    return std::isfinite(out.x) && std::isfinite(out.y);
}

bool EntityScreenBox(void* entity, const ViewMatrix& view, int width, int height,
                     ImVec2& minimum, ImVec2& maximum)
{
    gmod::Vector origin = gmod::EntityOrigin(entity);
    gmod::Vector mins(-16.f, -16.f, 0.f);
    gmod::Vector maxs(16.f, 16.f, 72.f);
    gmod::Vector collisionMins{};
    gmod::Vector collisionMaxs{};
    if (gmod::EntityBounds(entity, collisionMins, collisionMaxs))
    {
        mins = collisionMins;
        maxs = collisionMaxs;
    }
    minimum = ImVec2(FLT_MAX, FLT_MAX);
    maximum = ImVec2(-FLT_MAX, -FLT_MAX);
    int valid = 0;
    for (int corner = 0; corner < 8; ++corner)
    {
        const gmod::Vector point(origin.x + ((corner & 1) ? maxs.x : mins.x),
                                 origin.y + ((corner & 2) ? maxs.y : mins.y),
                                 origin.z + ((corner & 4) ? maxs.z : mins.z));
        ImVec2 screen;
        if (!WorldToScreen(point, view, width, height, screen))
            continue;
        minimum.x = std::min(minimum.x, screen.x);
        minimum.y = std::min(minimum.y, screen.y);
        maximum.x = std::max(maximum.x, screen.x);
        maximum.y = std::max(maximum.y, screen.y);
        ++valid;
    }
    return valid >= 2 && maximum.x > minimum.x && maximum.y > minimum.y;
}

// ------------------------------------------------------------- model chams
//
// The original applies chams inside DrawModelExecute, not in screen space:
// resolve one of the recovered materials, set MATERIAL_VAR_IGNOREZ for the
// through-wall pass, override the model material, modulate the render-view
// colour, draw, then repeat with the depth test enabled and the visible colour.
// The two passes are the same shape as FUN_1801f49a0's non-outline branch.

using ChamsFindMaterialFn = void*(__fastcall*)(void*, const char*, const char*, bool, const char*);
using ChamsIsErrorFn = bool(__fastcall*)(void*);
using ChamsAddRefFn = void(__fastcall*)(void*);
using ChamsReleaseFn = void(__fastcall*)(void*);
using ChamsSetFlagFn = void(__fastcall*)(void*, int, bool);
using ChamsSetBlendFn = void(__fastcall*)(void*, float);
using ChamsSetColorFn = void(__fastcall*)(void*, const float*);
using ChamsOverrideFn = void(__fastcall*)(void*, void*, int);

const char* const kChamsMaterials[12][3] = {
    // Recovered Flat entry: debugwhite is the original first choice.  The
    // material is kept referenced per frame below because the engine releases
    // the override after each model draw, which otherwise leaves it at 0.
    { "models/debug/debugwhite", "debug/debugdrawflat", "vgui/white" },
    { "models/wireframe", "models/debug/debugmrmwireframe", nullptr },
    { "models/shiny", "models/props_combine/metal_combinebridge001", "models/props_pipes/pipemetal001a" },
    { "models/props_canal/metalwall005b", "models/props_pipes/guttermetal01a", "models/props_pipes/pipemetal001a" },
    { "models/shadertest/predator", "models/shadertest/shader3", nullptr },
    { "models/props_combine/portalball001_sheet", "models/effects/comball_sphere", nullptr },
    { "models/props_combine/stasisshield_sheet", "models/props_combine/com_shield001a", "models/effects/comball_tape" },
    { "models/spawn_effect", "models/effects/vol_light001", nullptr },
    { "vgui/white_additive", "models/effects/comball_tape", nullptr },
    { "debug/debugtranslucentsinglecolor", "models/props_c17/frostedglass_01a", nullptr },
    { "models/flesh", "models/gibs/hgibs", nullptr },
    { "models/props_lab/warp_sheet", "models/shadertest/shader3", nullptr },
};

void* g_chamsMaterial = nullptr;
int g_chamsMaterialStyle = -1;
std::string g_chamsCustomMaterial;

void* ResolveChamsMaterial(int style)
{
    if (style < 0 || style > 12)
        style = 0;
    const bool custom = style == 12;
    const std::string& customName = g_config.chamsCustomMaterial;
    if (g_chamsMaterial != nullptr && g_chamsMaterialStyle == style &&
        (!custom || g_chamsCustomMaterial == customName))
        return g_chamsMaterial;
    if (g_materialSystem == nullptr)
        return nullptr;

    if (g_chamsMaterial != nullptr)
    {
        auto release = gmod::GetVirtual<ChamsReleaseFn>(g_chamsMaterial, 13);
        if (release != nullptr)
            release(g_chamsMaterial);
        g_chamsMaterial = nullptr;
        g_chamsMaterialStyle = -1;
        g_chamsCustomMaterial.clear();
    }

    auto findMaterial = gmod::GetVirtual<ChamsFindMaterialFn>(g_materialSystem, 75);
    if (findMaterial == nullptr)
        return nullptr;

    const char* candidates[4] = {};
    if (custom)
    {
        // "Custom..." uses the configured material name, then falls back to
        // the recovered Flat chain when the name does not resolve.
        candidates[0] = customName.c_str();
        candidates[1] = kChamsMaterials[0][0];
        candidates[2] = kChamsMaterials[0][1];
        candidates[3] = kChamsMaterials[0][2];
    }
    else
    {
        for (int i = 0; i < 3; ++i)
            candidates[i] = kChamsMaterials[style][i];
    }

    for (const char* name : candidates)
    {
        if (name == nullptr || *name == '\0')
            continue;
        void* material = findMaterial(g_materialSystem, name, "Model textures", false, nullptr);
        if (material == nullptr)
            continue;
        auto isError = gmod::GetVirtual<ChamsIsErrorFn>(material, 42);
        if (isError != nullptr && isError(material))
            continue;
        // The original calls IMaterial::IncrementReferenceCount (slot 12)
        // before caching.  Without this the material is bound at refcount 0
        // and the engine substitutes its error material (a flat pink block).
        auto addRef = gmod::GetVirtual<ChamsAddRefFn>(material, 12);
        if (addRef != nullptr)
            addRef(material);
        g_chamsMaterial = material;
        g_chamsMaterialStyle = style;
        g_chamsCustomMaterial = custom ? customName : std::string();
        Log("chams: style %d material %s (%p)", style, name, material);
        return material;
    }
    Log("chams: no usable material for style %d", style);
    return nullptr;
}

bool ApplyChams(void* self, const void* modelState, const void* info, void* bones)
{
    if (!g_config.enabled || !g_config.chams || info == nullptr ||
        g_state.original.drawModelExecute == nullptr)
        return false;
    if (g_entityList == nullptr || g_materialSystem == nullptr ||
        g_modelRender == nullptr || g_viewRender == nullptr)
        return false;

    int index = 0;
    std::memcpy(&index, static_cast<const unsigned char*>(info) + 0x44, sizeof(index));
    if (index <= 0 || index == LocalPlayerIndex())
        return false;

    void* entity = gmod::CallVirtual<void*>(g_entityList, 3, index);
    if (entity == nullptr)
        return false;
    if ((ReadFlags(entity) & (gmod::kFlagClient | gmod::kFlagFakeClient)) == 0)
        return false;
    if (!ReadAlive(entity))
        return false;
    if (!g_config.chamsTeam)
    {
        void* local = LocalPlayer();
        const int localTeam = local != nullptr ? ReadTeam(local) : 0;
        if (localTeam > 0 && ReadTeam(entity) == localTeam)
            return false;
    }

    void* material = ResolveChamsMaterial(g_config.chamsStyle);
    if (material == nullptr)
        return false;

    auto setFlag = gmod::GetVirtual<ChamsSetFlagFn>(material, 29);
    auto setBlend = gmod::GetVirtual<ChamsSetBlendFn>(g_viewRender, 4);
    auto setColor = gmod::GetVirtual<ChamsSetColorFn>(g_viewRender, 6);
    auto overrideMaterial = gmod::GetVirtual<ChamsOverrideFn>(g_modelRender, 1);
    auto addRef = gmod::GetVirtual<ChamsAddRefFn>(material, 12);
    auto release = gmod::GetVirtual<ChamsReleaseFn>(material, 13);
    if (setFlag == nullptr || setBlend == nullptr || setColor == nullptr ||
        overrideMaterial == nullptr)
        return false;

    const float hidden[3] = { g_config.chamsHiddenR, g_config.chamsHiddenG, g_config.chamsHiddenB };
    const float visible[3] = { g_config.chamsVisibleR, g_config.chamsVisibleG, g_config.chamsVisibleB };
    const float white[3] = { 1.f, 1.f, 1.f };
    const float alpha = std::clamp(g_config.chamsAlpha, 0.f, 1.f);

    // Each pass balances its own AddRef with a Release. The cached material
    // keeps one reference, so repeated frames no longer grow the count forever.
    const auto drawPass = [&](bool ignoreZ, const float* color) {
        if (addRef != nullptr)
            addRef(material);
        setFlag(material, 0x8000, ignoreZ);
        overrideMaterial(g_modelRender, material, 0);
        setBlend(g_viewRender, alpha);
        setColor(g_viewRender, color);
        g_state.original.drawModelExecute(self, modelState, info, bones);
        if (release != nullptr)
            release(material);
    };

    // The recovered feature only draws the through-wall silhouette when the
    // configured ignore-Z flag is on; the visible pass always runs.
    if (g_config.chamsIgnoreZ)
        drawPass(true, hidden);
    drawPass(false, visible);

    overrideMaterial(g_modelRender, nullptr, 0);
    setColor(g_viewRender, white);
    setBlend(g_viewRender, 1.f);
    return true;
}

void DrawVisualOverlay(ImDrawList* draw, int width, int height)
{
    if (draw == nullptr || !g_config.enabled || width <= 1 || height <= 1)
        return;
    if (g_config.drawFov)
    {
        const ImVec2 center((float)width * 0.5f, (float)height * 0.5f);
        // A 180-degree FOV has a 90-degree half angle, whose tangent is
        // infinite. Keep the circle finite; 89.5 degrees already covers the
        // whole viewport at any normal aspect ratio.
        const float halfFov = std::clamp(g_config.aimFov, 0.f, 179.f) * 0.5f;
        const float radius = std::tan(halfFov * 3.14159265f / 180.f) /
                             std::tan(45.f * 3.14159265f / 180.f) *
                             ((float)height * 0.5f);
        const ImU32 color = Rgba(g_config.fovR, g_config.fovG, g_config.fovB, 0.85f);
        if (g_config.drawFovFilled)
            draw->AddCircleFilled(center, radius, Rgba(g_config.fovR, g_config.fovG,
                                                       g_config.fovB, 0.10f), 96);
        draw->AddCircle(center, radius, color, 96, 1.25f);
        if (g_config.drawFovDebug)
        {
            char label[32] = {};
            std::snprintf(label, sizeof(label), "FOV %.0f", g_config.aimFov);
            draw->AddText(ImVec2(center.x + 8.f, center.y + 8.f), color, label);
        }
    }
    // World effects are independent visual toggles. The ESP switch below only
    // owns the player overlay, so turning ESP off must not hide the tint, sky,
    // water or look beam.
    if (g_config.skyEditor)
    {
        const float horizon = (float)height * 0.58f;
        const ImU32 top = Rgba(0.01f, 0.02f, 0.08f, 0.96f);
        const ImU32 bottom = Rgba(0.10f, 0.18f, 0.30f, 0.80f);
        draw->AddRectFilledMultiColor(ImVec2(0.f, 0.f), ImVec2((float)width, horizon),
                                      top, top, bottom, bottom);
        for (int star = 0; star < 80; ++star)
        {
            const float sx = std::fmod((float)star * 97.13f, 1.f) * (float)width;
            const float sy = std::fmod((float)star * 53.71f, 1.f) * horizon;
            const float radius = (star % 7 == 0) ? 1.6f : 0.8f;
            draw->AddCircleFilled(ImVec2(sx, sy), radius, Rgba(1.f, 1.f, 1.f, 0.75f));
        }
    }
    if (g_config.worldTint)
        draw->AddRectFilled(ImVec2(0, 0), ImVec2((float)width, (float)height),
                            Rgba(g_config.tintR, g_config.tintG, g_config.tintB,
                                 g_config.tintA));
    if (g_config.waterOverride)
    {
        int level = 0;
        void* local = LocalPlayer();
        if (local != nullptr && g_netvars.waterLevel >= 0)
            gmod::ReadField(local, g_netvars.waterLevel, level);
        if (level > 0)
            draw->AddRectFilled(ImVec2(0, 0), ImVec2((float)width, (float)height),
                                Rgba(0.05f, 0.35f, 0.65f, 0.38f));
    }
    if (g_config.lookbeam)
        draw->AddLine(ImVec2((float)width * 0.5f, (float)height * 0.85f),
                      ImVec2((float)width * 0.5f, (float)height * 0.5f),
                      Rgba(0.2f, 1.f, 0.6f, 0.85f), 2.f);

    if (!g_config.esp)
        return;
    if (!IsInGame() || g_engine == nullptr || g_entityList == nullptr)
        return;
    auto matrixFn = gmod::GetVirtual<ViewMatrix*(__fastcall*)(void*)>(g_engine, 36);
    auto sizeFn = gmod::GetVirtual<void(__fastcall*)(void*, int&, int&)>(g_engine, 5);
    if (matrixFn == nullptr || sizeFn == nullptr)
        return;
    const ViewMatrix* view = matrixFn(g_engine);
    if (view == nullptr)
        return;
    int engineWidth = width;
    int engineHeight = height;
    sizeFn(g_engine, engineWidth, engineHeight);
    if (engineWidth > 1 && engineHeight > 1)
    {
        width = engineWidth;
        height = engineHeight;
    }

    const float now = (float)EngineTime();
    for (TrackedPlayer& tracked : g_tracked)
        tracked.seen = false;
    for (std::size_t i = 0; i < g_ghosts.size();)
    {
        if (now - g_ghosts[i].time > 8.f)
        {
            g_ghosts.erase(g_ghosts.begin() + (std::ptrdiff_t)i);
            continue;
        }
        ++i;
    }

    void* local = LocalPlayer();
    if (local == nullptr)
        return;
    const gmod::Vector localOrigin = gmod::EntityOrigin(local);
    const int localTeam = ReadTeam(local);
    gmod::QAngle viewAngles{};
    auto viewAnglesFn = gmod::GetVirtual<void(__fastcall*)(void*, gmod::QAngle*)>(g_engine, 19);
    if (viewAnglesFn != nullptr)
        viewAnglesFn(g_engine, &viewAngles);
    const auto drawOffscreenArrow = [&](float targetYaw) {
        float relative = targetYaw - viewAngles.yaw;
        while (relative > 180.f)
            relative -= 360.f;
        while (relative < -180.f)
            relative += 360.f;
        const float radians = relative * 3.14159265f / 180.f;
        const ImVec2 direction(std::sin(radians), -std::cos(radians));
        const ImVec2 perpendicular(-direction.y, direction.x);
        const float radius = 0.42f * (float)std::min(width, height);
        const ImVec2 center((float)width * 0.5f, (float)height * 0.5f);
        const ImVec2 tip(center.x + direction.x * radius, center.y + direction.y * radius);
        const ImVec2 base(tip.x - direction.x * 18.f, tip.y - direction.y * 18.f);
        const ImVec2 left(base.x + perpendicular.x * 10.f, base.y + perpendicular.y * 10.f);
        const ImVec2 right(base.x - perpendicular.x * 10.f, base.y - perpendicular.y * 10.f);
        draw->AddTriangleFilled(tip, left, right, Rgba(1.f, 0.2f, 0.2f, 0.95f));
    };
    const int highest = gmod::CallVirtual<int>(g_entityList, 6);
    if (highest <= 0)
        return;

    for (int index = 1; index <= (highest > 2048 ? 2048 : highest); ++index)
    {
        void* entity = gmod::CallVirtual<void*>(g_entityList, 3, index);
        if (entity == nullptr || entity == local)
            continue;
        const int flags = ReadFlags(entity);
        if ((flags & (gmod::kFlagClient | gmod::kFlagFakeClient)) == 0)
            continue;
        if (g_config.ignoreDormant && gmod::IsDormant(entity))
            continue;
        if (g_config.ignoreInvisible && (flags & 0x40) != 0)
            continue;
        int takeDamage = 1;
        if (g_netvars.takedamage > 0)
            gmod::ReadField(entity, g_netvars.takedamage, takeDamage);
        if (g_config.ignoreGod && takeDamage == 0)
            continue;
        const int team = ReadTeam(entity);
        if (!g_config.espTeam && localTeam > 0 && team == localTeam)
            continue;
        const gmod::Vector origin = gmod::EntityOrigin(entity);
        if (!std::isfinite(origin.x) || !std::isfinite(origin.y) || !std::isfinite(origin.z))
            continue;

        if (ReadAlive(entity))
        {
            bool tracked = false;
            for (TrackedPlayer& entry : g_tracked)
            {
                if (entry.index == index)
                {
                    entry.origin = origin;
                    entry.time = now;
                    entry.team = team;
                    entry.seen = true;
                    tracked = true;
                    break;
                }
            }
            if (!tracked)
                g_tracked.push_back(TrackedPlayer{ index, origin, now, team, true });
        }

        if (!ReadAlive(entity))
        {
            if (g_config.ghosts)
            {
                bool known = false;
                for (const Ghost& ghost : g_ghosts)
                    if (std::fabs(ghost.origin.x - origin.x) < 1.f &&
                        std::fabs(ghost.origin.y - origin.y) < 1.f &&
                        std::fabs(ghost.origin.z - origin.z) < 1.f)
                        known = true;
                if (!known)
                {
                    g_ghosts.push_back(Ghost{ origin, now, team });
                }
            }
            continue;
        }

        ImVec2 minimum, maximum;
        const bool projected = EntityScreenBox(entity, *view, width, height, minimum, maximum);
        const bool onScreen = projected && maximum.x >= 0.f && minimum.x <= (float)width &&
                              maximum.y >= 0.f && minimum.y <= (float)height;
        if (!onScreen)
        {
            if (g_config.espOffscreen)
            {
                const float dx = origin.x - localOrigin.x;
                const float dy = origin.y - localOrigin.y;
                drawOffscreenArrow(std::atan2(dy, dx) * 180.f / 3.14159265f);
            }
            continue;
        }

        const ImU32 color = team == 3 ? Rgba(0.3f, 0.6f, 1.f, 0.95f)
                                      : Rgba(1.f, 0.3f, 0.3f, 0.95f);
        const float boxWidth = maximum.x - minimum.x;
        const float boxHeight = maximum.y - minimum.y;
        if (g_config.glow)
        {
            for (int layer = 3; layer >= 1; --layer)
            {
                const float expand = (float)layer * 2.5f;
                draw->AddRect(ImVec2(minimum.x - expand, minimum.y - expand),
                              ImVec2(maximum.x + expand, maximum.y + expand),
                              Rgba(0.2f, 0.9f, 1.f, 0.10f + 0.06f * (float)(3 - layer)),
                              0.f, 0, 1.f);
            }
        }
        if (g_config.espBox)
            draw->AddRect(minimum, maximum, color, 0.f, 0, 1.6f);
        if (g_config.espBBox)
        {
            const float length = std::min(boxWidth, boxHeight) * 0.25f;
            const ImU32 cornerColor = Rgba(1.f, 0.85f, 0.2f, 0.95f);
            draw->AddLine(ImVec2(minimum.x, minimum.y), ImVec2(minimum.x + length, minimum.y), cornerColor, 2.f);
            draw->AddLine(ImVec2(minimum.x, minimum.y), ImVec2(minimum.x, minimum.y + length), cornerColor, 2.f);
            draw->AddLine(ImVec2(maximum.x, minimum.y), ImVec2(maximum.x - length, minimum.y), cornerColor, 2.f);
            draw->AddLine(ImVec2(maximum.x, minimum.y), ImVec2(maximum.x, minimum.y + length), cornerColor, 2.f);
            draw->AddLine(ImVec2(minimum.x, maximum.y), ImVec2(minimum.x + length, maximum.y), cornerColor, 2.f);
            draw->AddLine(ImVec2(minimum.x, maximum.y), ImVec2(minimum.x, maximum.y - length), cornerColor, 2.f);
            draw->AddLine(ImVec2(maximum.x, maximum.y), ImVec2(maximum.x - length, maximum.y), cornerColor, 2.f);
            draw->AddLine(ImVec2(maximum.x, maximum.y), ImVec2(maximum.x, maximum.y - length), cornerColor, 2.f);
        }
        if (g_config.espCircle)
            draw->AddCircle(ImVec2((minimum.x + maximum.x) * 0.5f, minimum.y),
                            std::max(4.f, boxWidth * 0.35f), Rgba(1.f, 1.f, 1.f, 0.9f), 16, 1.5f);
        if (g_config.espSnapline)
            draw->AddLine(ImVec2((float)width * 0.5f, (float)height),
                          ImVec2((minimum.x + maximum.x) * 0.5f, maximum.y), color, 1.2f);
        if (g_config.espSkeleton)
        {
            const float cx = (minimum.x + maximum.x) * 0.5f;
            const ImU32 skel = Rgba(1.f, 1.f, 1.f, 0.85f);
            draw->AddCircle(ImVec2(cx, minimum.y + boxHeight * 0.12f), boxWidth * 0.18f, skel, 12, 1.4f);
            draw->AddLine(ImVec2(cx, minimum.y + boxHeight * 0.24f),
                          ImVec2(cx, minimum.y + boxHeight * 0.62f), skel, 1.4f);
            draw->AddLine(ImVec2(minimum.x + boxWidth * 0.15f, minimum.y + boxHeight * 0.40f),
                          ImVec2(maximum.x - boxWidth * 0.15f, minimum.y + boxHeight * 0.40f), skel, 1.4f);
            draw->AddLine(ImVec2(cx, minimum.y + boxHeight * 0.62f),
                          ImVec2(minimum.x + boxWidth * 0.25f, maximum.y), skel, 1.4f);
            draw->AddLine(ImVec2(cx, minimum.y + boxHeight * 0.62f),
                          ImVec2(maximum.x - boxWidth * 0.25f, maximum.y), skel, 1.4f);
        }
        if (g_config.espText || g_config.espDynamicText)
        {
            char name[128] = {};
            gmod::SafePlayerName(g_engine, index, name);
            if (name[0] == '\0')
                std::snprintf(name, sizeof(name), "player %d", index);
            char text[192] = {};
            if (g_config.espDynamicText)
                std::snprintf(text, sizeof(text), "%s [%d] %.0fm", name, ReadHealth(entity),
                              (origin - localOrigin).Length() * 0.01905f);
            else
                std::snprintf(text, sizeof(text), "%s [%d]", name, ReadHealth(entity));
            draw->AddText(ImVec2(minimum.x, minimum.y - 15.f), Rgba(1.f, 1.f, 1.f, 1.f), text);
        }
        if (g_config.espHealth)
        {
            const int health = ReadHealth(entity);
            const float fraction = std::clamp((float)health / 100.f, 0.f, 1.f);
            const float barHeight = boxHeight * fraction;
            draw->AddRectFilled(ImVec2(minimum.x - 7.f, maximum.y - barHeight),
                                ImVec2(minimum.x - 3.f, maximum.y),
                                Rgba(1.f - fraction, fraction, 0.f, 0.95f));
        }
        if (g_config.espArmor)
        {
            int armor = 0;
            gmod::ReadField(entity, g_netvars.armor, armor);
            const float fraction = std::clamp((float)armor / 100.f, 0.f, 1.f);
            draw->AddRectFilled(ImVec2(maximum.x + 3.f, maximum.y - boxHeight * fraction),
                                ImVec2(maximum.x + 7.f, maximum.y),
                                Rgba(0.2f, 0.7f, 1.f, 0.95f));
        }
        if (g_config.tracers)
            draw->AddLine(ImVec2((float)width * 0.5f, (float)height),
                          ImVec2((minimum.x + maximum.x) * 0.5f, (minimum.y + maximum.y) * 0.5f),
                          Rgba(1.f, 1.f, 0.2f, 0.9f), 1.5f);
    }

    if (g_config.ghosts)
    {
        for (std::size_t i = 0; i < g_tracked.size();)
        {
            if (!g_tracked[i].seen)
            {
                bool known = false;
                for (const Ghost& ghost : g_ghosts)
                    if (std::fabs(ghost.origin.x - g_tracked[i].origin.x) < 1.f &&
                        std::fabs(ghost.origin.y - g_tracked[i].origin.y) < 1.f &&
                        std::fabs(ghost.origin.z - g_tracked[i].origin.z) < 1.f)
                        known = true;
                if (!known)
                    g_ghosts.push_back(Ghost{ g_tracked[i].origin, now, g_tracked[i].team });
                g_tracked.erase(g_tracked.begin() + (std::ptrdiff_t)i);
                continue;
            }
            ++i;
        }
        for (const Ghost& ghost : g_ghosts)
        {
            ImVec2 point;
            if (!WorldToScreen(ghost.origin, *view, width, height, point))
                continue;
            draw->AddRect(ImVec2(point.x - 20.f, point.y - 40.f),
                          ImVec2(point.x + 20.f, point.y + 40.f),
                          Rgba(0.5f, 0.5f, 0.5f, 0.7f), 0.f, 0, 1.f);
            draw->AddText(ImVec2(point.x - 20.f, point.y - 56.f),
                          Rgba(0.7f, 0.7f, 0.7f, 0.9f), "ghost");
        }
    }

}

void DrawEsp()
{
    if (!g_config.enabled || !g_config.esp || !g_ready.load(std::memory_order_acquire))
        return;
    if (g_engine == nullptr || g_entityList == nullptr || g_debugOverlay == nullptr)
        return;
    if (!g_netvars.resolved)
        return;

    if (!IsInGame())
        return;

    void* local = LocalPlayer();
    const int localTeam = local != nullptr ? ReadTeam(local) : 0;
    const int highest = gmod::CallVirtual<int>(g_entityList, 6);
    if (highest <= 0)
        return;

    auto addBox = gmod::GetVirtual<gmod::AddBoxOverlayFn>(g_debugOverlay, 1);
    // Slot 4 is AddTextOverlay(Vector, duration, text); slot 5 is the
    // (Vector, lineOffset, duration, text) overload this label needs.
    auto addText = gmod::GetVirtual<gmod::AddTextOverlayFn>(g_debugOverlay, 5);
    if (addBox == nullptr)
        return;

    int drawn = 0;
    const int limit = highest > 2048 ? 2048 : highest;
    for (int index = 1; index <= limit; ++index)
    {
        void* entity = gmod::CallVirtual<void*>(g_entityList, 3, index);
        if (entity == nullptr || entity == local)
            continue;

        const int flags = ReadFlags(entity);
        if ((flags & (gmod::kFlagClient | gmod::kFlagFakeClient)) == 0)
            continue;
        if (g_config.ignoreDormant && gmod::IsDormant(entity))
            continue;
        if (g_config.ignoreInvisible && (flags & 0x40) != 0)
            continue;
        int takeDamage = 1;
        if (g_netvars.takedamage > 0)
            gmod::ReadField(entity, g_netvars.takedamage, takeDamage);
        if (g_config.ignoreGod && takeDamage == 0)
            continue;
        if (!ReadAlive(entity))
            continue;

        const int team = ReadTeam(entity);
        if (!g_config.espTeam && localTeam > 0 && team == localTeam)
            continue;

        const int health = ReadHealth(entity);
        gmod::Vector origin = gmod::EntityOrigin(entity);
        if (!std::isfinite(origin.x) || !std::isfinite(origin.y) || !std::isfinite(origin.z))
            continue;

        gmod::Vector mins(-16.f, -16.f, 0.f);
        gmod::Vector maxs(16.f, 16.f, 72.f);
        gmod::Vector collisionMins{};
        gmod::Vector collisionMaxs{};
        if (gmod::EntityBounds(entity, collisionMins, collisionMaxs) &&
            std::isfinite(collisionMins.x) && std::isfinite(collisionMaxs.x))
        {
            mins = collisionMins;
            maxs = collisionMaxs;
        }

        int red = 255;
        int green = 80;
        int blue = 80;
        if (team == 3)
        {
            red = 80;
            green = 140;
            blue = 255;
        }
        else if (team == 0)
        {
            red = 240;
            green = 200;
            blue = 60;
        }

        if (g_config.espBox)
        {
            // A zero duration is fine for text but the box overlay is discarded
            // before the debug renderer consumes it; keep it alive for a frame.
            addBox(g_debugOverlay, origin, mins, maxs, gmod::QAngle{},
                   red, green, blue, 255, 0.12f);
        }

        if (g_config.espText && addText != nullptr)
        {
            char name[128] = {};
            gmod::SafePlayerName(g_engine, index, name);
            if (name[0] == '\0')
                std::snprintf(name, sizeof(name), "player %d", index);

            const gmod::Vector label = origin + gmod::Vector(0.f, 0.f, maxs.z + 8.f);
            char text[192] = {};
            std::snprintf(text, sizeof(text), "%s [%d]", name, health);
            addText(g_debugOverlay, label, 0, 0.0f, text);
        }

        ++drawn;
    }

    static int lastDrawn = -1;
    if (drawn != lastDrawn)
    {
        lastDrawn = drawn;
        Log("ESP drawing %d player(s)", drawn);
    }
}

// ---------------------------------------------------------------- detours

HRESULT __fastcall HookD3dReset(void* self, D3DPRESENT_PARAMETERS* parameters)
{
    ResetPunchCache();
    ResetVisualState();
    const HRESULT result = sf::runtime::HandleD3dReset(g_state, self, parameters);
    if (SUCCEEDED(result))
        sf::renderer::ResetRendererD3d();
    return result;
}

HRESULT __fastcall HookD3dPresent(void* self, const RECT* source, const RECT* destination,
                                  HWND window, const RGNDATA* dirty)
{
    // Draw into the back buffer before the original Present. Drawing after
    // Present targets the next back buffer, which the engine clears or
    // overwrites before it is ever presented.
    if (g_state.original.d3dPresent != nullptr)
        sf::renderer::RenderRendererD3d();
    return sf::runtime::HandleD3dPresent(g_state, self, source, destination, window,
                                         dirty);
}

HRESULT __fastcall HookD3dGrtd(void* self, void* source, void* destination)
{
    return sf::runtime::HandleD3dGrtd(g_state, self, source, destination);
}

HRESULT __fastcall HookD3dStretchRect(void* self, void* source, const RECT* sourceRect,
                                      void* destination, const RECT* destinationRect, int filter)
{
    return sf::runtime::HandleD3dStretchRect(g_state, self, source, sourceRect, destination,
                                             destinationRect, filter);
}

HRESULT __fastcall HookD3dSetRenderTarget(void* self, DWORD index, void* target)
{
    return sf::runtime::HandleD3dSetRenderTarget(g_state, self, index, target);
}

bool __fastcall HookOverrideConfig(void* self, void* config, bool force)
{
    return sf::runtime::HandleOverrideConfig(g_state, self, config, force);
}

void __fastcall HookViewRender(void* self, void* view)
{
    sf::runtime::HandleViewRender(g_state, self, view);
}

bool __fastcall HookWriteUsercmd(void* self, void* buffer, int from, int to, bool isNewCommand)
{
    return sf::runtime::HandleWriteUsercmd(g_state, self, buffer, from, to, isNewCommand);
}

void __fastcall HookHudUpdate(void* self, bool active)
{
    sf::runtime::HandleHudUpdate(g_state, self, active);
}

void __fastcall HookLevelInit(void* self, const char* levelName)
{
    ResetPunchCache();
    ResetVisualState();
    sf::runtime::HandleLevelInit(g_state, self, levelName);
    if (g_ready.load(std::memory_order_acquire))
        ApplyVisualOverrides();
}

void __fastcall HookLevelShutdown(void* self)
{
    ResetPunchCache();
    ResetVisualState();
    sf::runtime::HandleLevelShutdown(g_state, self);
}

bool __fastcall HookCreateMove(void* self, float sampleTime, gmod::CUserCmd* command)
{
    const bool result = sf::runtime::HandleCreateMovePassThrough(g_state, self, sampleTime, command);
    if (g_state.original.createMove != nullptr)
        ApplyCommand(command);
    return result;
}

void __fastcall HookFrameStageNotify(void* self, int stage)
{
    sf::runtime::HandleFrameStageNotifyPassThrough(g_state, self, stage);

    // ClientFrameStage_t::FRAME_RENDER_START is 6. The world matrices and
    // entity origins are valid here; IVDebugOverlay keeps the boxes for the
    // current frame.
    if (stage == 6)
    {
        // No visual recoil: scale the local punch angle immediately before the
        // frame is rendered. The server can still write the networked value,
        // but the camera never consumes an unscaled punch. ScalePunchOnce keeps
        // the multiplier from compounding across frames.
        if (!g_config.noVisualRecoil)
        {
            g_hasLastPunch = false;
        }
        else if (g_netvars.punchAngle > 0)
        {
            void* local = LocalPlayer();
            gmod::Vector punch{};
            if (local != nullptr &&
                gmod::ReadField(local, g_netvars.punchAngle, punch) &&
                sf::runtime::ScalePunchOnce(punch, g_config.recoilScale, g_lastPunchWritten,
                                            g_hasLastPunch))
            {
                std::memcpy(reinterpret_cast<unsigned char*>(local) + g_netvars.punchAngle,
                            &punch, sizeof(punch));
            }
        }
        // The 2D ImGui overlay is the shipped ESP.  DrawEsp()'s
        // IVDebugOverlay box is a filled 3D box and was painting a solid red
        // slab over the player model (and duplicating the name text), so it is
        // no longer called.  The function is kept for the ABI/self-tests.
        sf::renderer::RenderUtilityFrame();
    }
}

void __fastcall HookPaintTraverse(void* self, unsigned int panel, bool forceRepaint,
                                  bool allowForce)
{
    sf::runtime::HandlePaintTraverse(g_state, self, panel, forceRepaint, allowForce);
}

void __fastcall HookRenderView(void* self, void* view, int clearFlags, int whatToDraw)
{
    sf::runtime::HandleRenderView(g_state, self, view, clearFlags, whatToDraw);
}

void __fastcall HookPreHud(void* self, void* view)
{
    sf::runtime::HandlePreHud(g_state, self, view);
}

void __fastcall HookViewDrawModel(void* self, void* renderable)
{
    sf::runtime::HandleViewDrawModel(g_state, self, renderable);
}

void __fastcall HookSetViewAngles(void* self, gmod::QAngle* angles)
{
    sf::runtime::HandleSetViewAngles(g_state, self, angles);
}

void __fastcall HookGetViewAngles(void* self, gmod::QAngle* angles)
{
    sf::runtime::HandleGetViewAngles(g_state, self, angles);
}

void __fastcall HookDrawModelExecute(void* self, const void* modelState, const void* info,
                                     void* bones)
{
    if (ApplyChams(self, modelState, info, bones))
        return;
    sf::runtime::HandleDrawModelExecute(g_state, self, modelState, info, bones);
}

void __fastcall HookCloseLuaInterface(void* self, void* interfacePointer)
{
    sf::runtime::HandleCloseLuaInterface(g_state, self, interfacePointer);
}

bool __fastcall HookIsButtonDown(void* self, int code)
{
    return sf::runtime::HandleIsButtonDown(g_state, self, code);
}

void __fastcall HookRunCommand(void* self, void* player, gmod::CUserCmd* command,
                               void* moveHelper)
{
    sf::runtime::HandleRunCommandPassThrough(g_state, self, player, command, moveHelper);
}

// ------------------------------------------------------------- resolution

bool ResolveInterfaces()
{
    g_chlClient = gmod::GetInterface("client.dll", sf::offsets::kChlClientInterface);
    g_prediction = gmod::GetInterface("client.dll", sf::offsets::kPredictionInterface);
    g_entityList = gmod::GetInterface("client.dll", sf::offsets::kEntityListInterface);
    g_engine = gmod::GetInterface("engine.dll", sf::offsets::kEngineClientInterface);
    g_engineTrace = gmod::GetInterface("engine.dll", sf::offsets::kEngineTraceInterface);
    g_debugOverlay = gmod::GetInterface("engine.dll", sf::offsets::kDebugOverlayInterface);
    g_materialSystem = gmod::GetInterface("materialsystem.dll", sf::offsets::kMaterialSystemInterface);
    g_panel = gmod::GetInterface("vgui2.dll", sf::offsets::kPanelInterface);
    g_viewRender = gmod::GetInterface("engine.dll", sf::offsets::kViewRenderInterface);
    g_modelRender = gmod::GetInterface("engine.dll", sf::offsets::kModelRenderInterface);
    g_inputSystem = gmod::GetInterface("inputsystem.dll", sf::offsets::kInputSystemInterface);
    g_luaShared = gmod::GetInterface("lua_shared.dll", sf::offsets::kLuaSharedInterface);
    g_d3dDevice = FindD3DDevice();
    if (g_d3dDevice != nullptr)
        sf::renderer::InitializeRendererD3d(g_d3dDevice);

    if (g_chlClient == nullptr || g_prediction == nullptr ||
        g_entityList == nullptr || g_engine == nullptr)
        return false;

    if (g_clientMode == nullptr)
        g_clientMode = gmod::GetVMT<void>(g_chlClient, 10, 0);
    if (g_clientMode == nullptr)
        return false;

    if (g_debugOverlay == nullptr)
        Log("VDebugOverlay003 missing; ESP will stay disabled");
    if (g_engineTrace == nullptr)
        Log("EngineTraceClient003 missing; triggerbot uses the angular fallback");

    if (!g_netvars.resolved)
    {
        void* classList = gmod::CallVirtual<void*>(g_chlClient, 8);
        if (!g_netvars.Resolve(classList))
            Log("netvars: %s", g_netvars.detail);
    }

    return true;
}

bool InstallHooks()
{
    UninstallHooks();

    // Optional interfaces can come up after the first successful resolve (the
    // D3D device in particular is created by the renderer, not at menu load).
    // Retry them at the install point so a late-created device/module is not
    // silently left out of the recovered table.
    if (g_d3dDevice == nullptr)
        g_d3dDevice = FindD3DDevice();
    if (g_d3dDevice != nullptr)
        sf::renderer::InitializeRendererD3d(g_d3dDevice);
    if (g_debugOverlay == nullptr)
        g_debugOverlay = gmod::GetInterface("engine.dll", sf::offsets::kDebugOverlayInterface);
    if (g_engineTrace == nullptr)
        g_engineTrace = gmod::GetInterface("engine.dll", sf::offsets::kEngineTraceInterface);
    if (g_materialSystem == nullptr)
        g_materialSystem = gmod::GetInterface("materialsystem.dll", sf::offsets::kMaterialSystemInterface);
    if (g_panel == nullptr)
        g_panel = gmod::GetInterface("vgui2.dll", sf::offsets::kPanelInterface);
    if (g_viewRender == nullptr)
        g_viewRender = gmod::GetInterface("engine.dll", sf::offsets::kViewRenderInterface);
    if (g_modelRender == nullptr)
        g_modelRender = gmod::GetInterface("engine.dll", sf::offsets::kModelRenderInterface);
    if (g_inputSystem == nullptr)
        g_inputSystem = gmod::GetInterface("inputsystem.dll", sf::offsets::kInputSystemInterface);
    if (g_luaShared == nullptr)
        g_luaShared = gmod::GetInterface("lua_shared.dll", sf::offsets::kLuaSharedInterface);

    g_state.materialSystem = g_materialSystem;
    g_state.modelRender = g_modelRender;

    // The slots and interface names are not repeated here: every row is read
    // from sf::offsets::kHooks, the same table the self-test audits against the
    // ABI descriptors. This switch only supplies the live instance and the
    // detour/original pair for each recovered id.
    struct Binding
    {
        void* instance;
        void* detour;
        void** original;
    };

    auto bindingFor = [](sf::offsets::HookId id) -> Binding {
        switch (id)
        {
        case sf::offsets::HookId::D3dSetRenderTarget:
            return { g_d3dDevice, reinterpret_cast<void*>(&HookD3dSetRenderTarget), reinterpret_cast<void**>(&g_state.original.d3dSetRenderTarget) };
        case sf::offsets::HookId::D3dStretchRect:
            return { g_d3dDevice, reinterpret_cast<void*>(&HookD3dStretchRect), reinterpret_cast<void**>(&g_state.original.d3dStretchRect) };
        case sf::offsets::HookId::D3dGetRenderTargetData:
            return { g_d3dDevice, reinterpret_cast<void*>(&HookD3dGrtd), reinterpret_cast<void**>(&g_state.original.d3dGrtd) };
        case sf::offsets::HookId::D3dPresent:
            return { g_d3dDevice, reinterpret_cast<void*>(&HookD3dPresent), reinterpret_cast<void**>(&g_state.original.d3dPresent) };
        case sf::offsets::HookId::D3dReset:
            return { g_d3dDevice, reinterpret_cast<void*>(&HookD3dReset), reinterpret_cast<void**>(&g_state.original.d3dReset) };
        case sf::offsets::HookId::MaterialSystem:
            return { g_materialSystem, reinterpret_cast<void*>(&HookOverrideConfig), reinterpret_cast<void**>(&g_state.original.overrideConfig) };
        case sf::offsets::HookId::ChlVr:
            return { g_chlClient, reinterpret_cast<void*>(&HookViewRender), reinterpret_cast<void**>(&g_state.original.viewRender) };
        case sf::offsets::HookId::ChlWriteUsercmd:
            return { g_chlClient, reinterpret_cast<void*>(&HookWriteUsercmd), reinterpret_cast<void**>(&g_state.original.writeUsercmd) };
        case sf::offsets::HookId::ChlHudUpdate:
            return { g_chlClient, reinterpret_cast<void*>(&HookHudUpdate), reinterpret_cast<void**>(&g_state.original.hudUpdate) };
        case sf::offsets::HookId::ChlLevelInit:
            return { g_chlClient, reinterpret_cast<void*>(&HookLevelInit), reinterpret_cast<void**>(&g_state.original.levelInit) };
        case sf::offsets::HookId::ChlLevelShutdown:
            return { g_chlClient, reinterpret_cast<void*>(&HookLevelShutdown), reinterpret_cast<void**>(&g_state.original.levelShutdown) };
        case sf::offsets::HookId::ClientMode:
            return { g_clientMode, reinterpret_cast<void*>(&HookCreateMove), reinterpret_cast<void**>(&g_state.original.createMove) };
        case sf::offsets::HookId::Panel:
            return { g_panel, reinterpret_cast<void*>(&HookPaintTraverse), reinterpret_cast<void**>(&g_state.original.paintTraverse) };
        case sf::offsets::HookId::ViewRender:
            return { g_viewRender, reinterpret_cast<void*>(&HookRenderView), reinterpret_cast<void**>(&g_state.original.renderView) };
        case sf::offsets::HookId::ViewRenderPreHud:
            return { g_viewRender, reinterpret_cast<void*>(&HookPreHud), reinterpret_cast<void**>(&g_state.original.preHud) };
        case sf::offsets::HookId::ViewRenderDrawModel:
            return { g_viewRender, reinterpret_cast<void*>(&HookViewDrawModel), reinterpret_cast<void**>(&g_state.original.viewDrawModel) };
        case sf::offsets::HookId::EngineServerViewAngles:
            return { g_engine, reinterpret_cast<void*>(&HookSetViewAngles), reinterpret_cast<void**>(&g_state.original.setViewAngles) };
        case sf::offsets::HookId::EngineGetViewAngles:
            return { g_engine, reinterpret_cast<void*>(&HookGetViewAngles), reinterpret_cast<void**>(&g_state.original.getViewAngles) };
        case sf::offsets::HookId::ModelRenderDrawModelExecute:
            return { g_modelRender, reinterpret_cast<void*>(&HookDrawModelExecute), reinterpret_cast<void**>(&g_state.original.drawModelExecute) };
        case sf::offsets::HookId::LuaShared:
            return { g_luaShared, reinterpret_cast<void*>(&HookCloseLuaInterface), reinterpret_cast<void**>(&g_state.original.closeLuaInterface) };
        case sf::offsets::HookId::InputSystem:
            return { g_inputSystem, reinterpret_cast<void*>(&HookIsButtonDown), reinterpret_cast<void**>(&g_state.original.isButtonDown) };
        }
        return { nullptr, nullptr, nullptr };
    };

    int installedRows = 0;
    for (const auto& hook : sf::offsets::kHooks)
    {
        const Binding binding = bindingFor(hook.id);
        if (binding.detour == nullptr || binding.original == nullptr)
        {
            Log("hook %s: no detour binding", hook.purpose);
            continue;
        }
        if (InstallSpec(hook.purpose, binding.instance, hook.slot, binding.detour, binding.original))
            ++installedRows;
    }
    g_installedSlots = static_cast<int>(g_slots.size());
    g_createMoveInstalled = g_state.original.createMove != nullptr;
    g_installedRows = installedRows;

    g_frameStageInstalled = InstallSpec(sf::offsets::kCoreHooks[1].purpose, g_chlClient, sf::offsets::kCoreHooks[1].slot,
        reinterpret_cast<void*>(&HookFrameStageNotify),
        reinterpret_cast<void**>(&g_state.original.frameStageNotify));
    g_runCommandInstalled = InstallSpec(sf::offsets::kCoreHooks[2].purpose, g_prediction, sf::offsets::kCoreHooks[2].slot,
        reinterpret_cast<void*>(&HookRunCommand),
        reinterpret_cast<void**>(&g_state.original.runCommand));

    if (g_frameStageInstalled)
        ++g_installedRows;
    if (g_runCommandInstalled)
        ++g_installedRows;
    if (g_createMoveInstalled)
        ++g_installedRows; // core_hooks also records ClientMode

    g_installedSlots = static_cast<int>(g_slots.size());

    Log("hooks installed: %d of %d descriptor rows (%d unique interface/slot entries); ClientMode is recorded once in hooks[] and once in core_hooks[]",
        g_installedRows, sf::offsets::kRuntimeHookRowCount, g_installedSlots);

    return g_createMoveInstalled && g_frameStageInstalled && g_runCommandInstalled;
}

void RunClientCommand(const char* command)
{
    if (g_engine == nullptr || command == nullptr)
        return;
    auto clientCmd = gmod::GetVirtual<gmod::ClientCmdFn>(g_engine, 7);
    if (clientCmd != nullptr)
        clientCmd(g_engine, command);
}

void ApplyVisualOverrides()
{
    if (g_engine == nullptr)
        return;
    auto clientCmd = gmod::GetVirtual<gmod::ClientCmdFn>(g_engine, 7);
    if (clientCmd == nullptr)
        return;
    if (g_config.fogOverride)
    {
        char command[160] = {};
        std::snprintf(command, sizeof(command), "fog_color %d %d %d",
                      g_config.fogR, g_config.fogG, g_config.fogB);
        clientCmd(g_engine, "fog_override 1");
        clientCmd(g_engine, "fog_enable 1");
        clientCmd(g_engine, command);
        std::snprintf(command, sizeof(command), "fog_start %.1f", g_config.fogStart);
        clientCmd(g_engine, command);
        std::snprintf(command, sizeof(command), "fog_end %.1f", g_config.fogEnd);
        clientCmd(g_engine, command);
    }
    else
    {
        clientCmd(g_engine, "fog_override 0");
    }
    if (g_config.ambientOverride)
    {
        clientCmd(g_engine, "r_ambientboost 1");
        char command[128] = {};
        std::snprintf(command, sizeof(command), "r_ambientmin %.2f", g_config.ambientBrightness);
        clientCmd(g_engine, command);
    }
    else
    {
        clientCmd(g_engine, "r_ambientboost 0");
        clientCmd(g_engine, "r_ambientmin 0");
    }
    if (g_config.waterOverride)
    {
        clientCmd(g_engine, "r_waterdrawreflection 0");
        clientCmd(g_engine, "r_waterforceexpensive 0");
        clientCmd(g_engine, "r_waterdrawrefraction 0");
    }
    else
    {
        clientCmd(g_engine, "r_waterdrawreflection 1");
        clientCmd(g_engine, "r_waterforceexpensive 0");
        clientCmd(g_engine, "r_waterdrawrefraction 1");
    }
    if (g_config.skyboxOverride || g_config.skyEditor)
        clientCmd(g_engine, "r_skybox 0");
    else
        clientCmd(g_engine, "r_skybox 1");
    static bool skyNameWasSwapped = false;
    if (g_config.skyNameSwap && !g_config.skyName.empty())
    {
        const std::string command = "lua_run RunConsoleCommand('sv_skyname','" +
                                    g_config.skyName + "')";
        RunClientCommand(command.c_str());
        skyNameWasSwapped = true;
    }
    else if (skyNameWasSwapped)
    {
        RunClientCommand("lua_run RunConsoleCommand('sv_skyname','painted')");
        skyNameWasSwapped = false;
    }
    Log("visual overrides: tint=%d fog=%d ambient=%d water=%d sky=%d sky_name_swap=%d sky_editor=%d",
        g_config.worldTint, g_config.fogOverride, g_config.ambientOverride,
        g_config.waterOverride, g_config.skyboxOverride, g_config.skyNameSwap, g_config.skyEditor);
}

void Worker()
{
    Log("Skyfall reconstruction runtime starting (config: %s)", g_config.sourcePath.c_str());
    Log("master=%d esp=%d bhop=%d aimbot=%d triggerbot=%d nospread=%d antiaim=%d autostrafe=%d backtrack=%d",
        g_config.enabled, g_config.esp, g_config.bhop, g_config.aimbot, g_config.triggerbot,
        g_config.nospread, g_config.antiaim, g_config.autostrafe, g_config.backtrack);

    bool resolved = false;
    for (int attempt = 0; attempt < 600 && !g_stop.load(); ++attempt)
    {
        if (ResolveInterfaces())
        {
            resolved = true;
            break;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
    }

    if (!resolved)
    {
        Log("client interfaces not found; runtime idle (client.dll=%p)",
            reinterpret_cast<void*>(GetModuleHandleA("client.dll")));
        return;
    }

    Log("interfaces: CHLClient=%p ClientMode=%p Prediction=%p EntityList=%p Engine=%p DebugOverlay=%p",
        g_chlClient, g_clientMode, g_prediction, g_entityList, g_engine, g_debugOverlay);
    Log("interfaces: EngineTrace=%p", g_engineTrace);
    Log("interfaces: MaterialSystem=%p Panel=%p ViewRender=%p ModelRender=%p Input=%p Lua=%p D3D=%p",
        g_materialSystem, g_panel, g_viewRender, g_modelRender, g_inputSystem, g_luaShared,
        g_d3dDevice);

    // Wait for the user to join a map instead of giving up after five minutes.
    // Injecting at the main menu is the normal path, and a player can take
    // longer than 300 seconds to connect.
    bool live = false;
    while (!g_stop.load(std::memory_order_acquire))
    {
        if (IsInGame() && LocalPlayerIndex() > 0)
        {
            live = true;
            break;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    if (!live)
        return;

    for (int attempt = 0; attempt < 40 && !g_netvars.resolved && !g_stop.load(); ++attempt)
    {
        ResolveInterfaces();
        if (!g_netvars.resolved)
            std::this_thread::sleep_for(std::chrono::milliseconds(250));
    }

    Log("netvars: flags=%d team=%d life=%d health=%d velocity=%d viewOffset=%d (%s)",
        g_netvars.flags, g_netvars.team, g_netvars.lifeState, g_netvars.health,
        g_netvars.velocity, g_netvars.viewOffset, g_netvars.detail);

    InstallRendererDependencyHost();

    if (!InstallHooks())
    {
        Log("required hook installation failed; runtime idle");
        return;
    }

    g_ready.store(true, std::memory_order_release);
    ApplyVisualOverrides();
    if (g_engine != nullptr)
    {
        auto clientCmd = gmod::GetVirtual<gmod::ClientCmdFn>(g_engine, 7);
        if (clientCmd != nullptr)
        {
            clientCmd(g_engine, "echo [Skyfall] reconstruction runtime loaded");
        }
    }

    Log("Skyfall ready; %d of %d recovered hook descriptor rows installed (%d unique interface/slot entries)",
        g_installedRows, sf::offsets::kRuntimeHookRowCount, g_installedSlots);

    // Keep the worker alive so F5 can re-read the INI and apply live feature
    // changes without a second injection. The hooks themselves stay installed.
    while (!g_stop.load(std::memory_order_acquire))
    {
        if (g_reloadConfig.exchange(false, std::memory_order_acq_rel))
        {
            sf::runtime::Config reloaded = sf::runtime::Config::LoadOrCreate();
            g_config = reloaded;
            g_state.config = reloaded;
            ApplyVisualOverrides();
            Log("config reloaded: esp=%d box=%d chams=%d fullbright=%d fog=%d ambient=%d water=%d sky=%d",
                g_config.esp, g_config.espBox, g_config.chams, g_config.fullbright,
                g_config.fogOverride, g_config.ambientOverride, g_config.waterOverride,
                g_config.skyboxOverride || g_config.skyEditor);
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

} // namespace

namespace sf {
namespace runtime {

void DrawRuntimeVisuals(ImDrawList* draw, int width, int height)
{
    DrawVisualOverlay(draw, width, height);
}

void RequestConfigReload()
{
    g_reloadConfig.store(true, std::memory_order_release);
}

Config& LiveConfig()
{
    return g_config;
}

void ApplyLiveConfig()
{
    g_state.config = g_config;
    ApplyVisualOverrides();
}

void SaveLiveConfig()
{
    if (g_config.sourcePath.empty())
        g_config.sourcePath = Config::ConfigPath();
    std::ofstream output(g_config.sourcePath, std::ios::binary | std::ios::trunc);
    if (output)
        output << g_config.ToIni();
}

} // namespace runtime
} // namespace sf

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved)
{
    (void)reserved;
    if (reason == DLL_PROCESS_ATTACH)
    {
        g_module = module;
        DisableThreadLibraryCalls(module);
        g_stop.store(false);
        g_config = sf::runtime::Config::LoadOrCreate();
        g_state.config = g_config;
        try
        {
            std::thread(Worker).detach();
        }
        catch (...)
        {
            // A failed worker start must not take the host process down.
        }
    }
    else if (reason == DLL_PROCESS_DETACH)
    {
        g_stop.store(true);
        UninstallHooks();
        sf::renderer::ShutdownRendererFrame();
        std::lock_guard<std::mutex> lock(g_logMutex);
        if (g_logFile != nullptr)
        {
            std::fclose(g_logFile);
            g_logFile = nullptr;
        }
    }
    return TRUE;
}
