#pragma once
// Hook ABI table, VMT install/restore primitives and testable pass-through
// handlers. The m64 setup pass at 0x1801f9180 is the source of every slot below;
// the signatures come from the stub bodies, the interface vtables in
// re/dump/vtable_methods.tsv and the recovered CHLClient/engine headers.

#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <Windows.h>
#include <d3d9.h>

#include <atomic>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <cstring>

#include "config.h"
#include "gmod_sdk.h"
#include "runtime_features.h"
#include "../offsets/offsets.h"

namespace sf {
namespace runtime {

// ---------------------------------------------------------------- signatures
using D3dResetFn = HRESULT(__fastcall*)(void*, D3DPRESENT_PARAMETERS*);
using D3dPresentFn = HRESULT(__fastcall*)(void*, const RECT*, const RECT*, HWND,
                                          const RGNDATA*);
using D3dGrtdFn = HRESULT(__fastcall*)(void*, void*, void*);
using D3dStretchRectFn = HRESULT(__fastcall*)(void*, void*, const RECT*, void*,
                                              const RECT*, int);
using D3dSetRenderTargetFn = HRESULT(__fastcall*)(void*, DWORD, void*);
using OverrideConfigFn = bool(__fastcall*)(void*, void*, bool);
using ViewRenderFn = void(__fastcall*)(void*, void*);
using WriteUsercmdFn = bool(__fastcall*)(void*, void*, int, int, bool);
using HudUpdateFn = void(__fastcall*)(void*, bool);
using LevelInitFn = void(__fastcall*)(void*, const char*);
using LevelShutdownFn = void(__fastcall*)(void*);
using PaintTraverseFn = void(__fastcall*)(void*, unsigned int, bool, bool);
using RenderViewFn = void(__fastcall*)(void*, void*, int, int);
using PreHudFn = void(__fastcall*)(void*, void*);
using ViewDrawModelFn = void(__fastcall*)(void*, void*);
using SetViewAnglesFn = void(__fastcall*)(void*, gmod::QAngle*);
using GetViewAnglesFn = void(__fastcall*)(void*, gmod::QAngle*);
using DrawModelExecuteFn = void(__fastcall*)(void*, const void*, const void*, void*);
using CloseLuaInterfaceFn = void(__fastcall*)(void*, void*);
using IsButtonDownFn = bool(__fastcall*)(void*, int);
using CreateMoveFn = bool(__fastcall*)(void*, float, gmod::CUserCmd*);
using FrameStageNotifyFn = void(__fastcall*)(void*, int);
using RunCommandFn = void(__fastcall*)(void*, void*, gmod::CUserCmd*, void*);

struct HookOriginals
{
    D3dResetFn d3dReset = nullptr;
    D3dPresentFn d3dPresent = nullptr;
    D3dGrtdFn d3dGrtd = nullptr;
    D3dStretchRectFn d3dStretchRect = nullptr;
    D3dSetRenderTargetFn d3dSetRenderTarget = nullptr;
    OverrideConfigFn overrideConfig = nullptr;
    ViewRenderFn viewRender = nullptr;
    WriteUsercmdFn writeUsercmd = nullptr;
    HudUpdateFn hudUpdate = nullptr;
    LevelInitFn levelInit = nullptr;
    LevelShutdownFn levelShutdown = nullptr;
    CreateMoveFn createMove = nullptr;
    PaintTraverseFn paintTraverse = nullptr;
    RenderViewFn renderView = nullptr;
    PreHudFn preHud = nullptr;
    ViewDrawModelFn viewDrawModel = nullptr;
    SetViewAnglesFn setViewAngles = nullptr;
    GetViewAnglesFn getViewAngles = nullptr;
    DrawModelExecuteFn drawModelExecute = nullptr;
    CloseLuaInterfaceFn closeLuaInterface = nullptr;
    IsButtonDownFn isButtonDown = nullptr;
    FrameStageNotifyFn frameStageNotify = nullptr;
    RunCommandFn runCommand = nullptr;
};

struct HookState
{
    Config config;
    FeatureRuntime features;
    HookOriginals original;
    void* d3dDevice = nullptr;
    void* materialSystem = nullptr;
    void* modelRender = nullptr;
    void* backBuffer = nullptr;
    void* renderTarget = nullptr;
    std::atomic<unsigned long long> presentCount{ 0 };
    std::atomic<unsigned long long> resizeCount{ 0 };
    std::atomic<unsigned long long> renderViewCount{ 0 };
    std::atomic<unsigned long long> paintCount{ 0 };
    std::atomic<unsigned long long> commandWrites{ 0 };
    std::atomic<unsigned long long> hudUpdates{ 0 };
    std::atomic<unsigned long long> blockedViewAngles{ 0 };
};

// ---------------------------------------------------------- VMT primitives

inline bool InstallVmt(void* instance, int slot, void* detour, void** original)
{
    if (instance == nullptr || detour == nullptr || original == nullptr || slot < 0)
        return false;

    void** vtable = *reinterpret_cast<void***>(instance);
    if (vtable == nullptr || !gmod::Readable(vtable + slot, sizeof(void*)))
        return false;

    DWORD oldProtection = 0;
    if (VirtualProtect(&vtable[slot], sizeof(void*), PAGE_EXECUTE_READWRITE,
                       &oldProtection) == FALSE)
        return false;

    *original = vtable[slot];
    vtable[slot] = detour;
    DWORD restored = 0;
    VirtualProtect(&vtable[slot], sizeof(void*), oldProtection, &restored);
    return true;
}

inline bool UninstallVmt(void* instance, int slot, void* detour, void* original)
{
    if (instance == nullptr || detour == nullptr || original == nullptr || slot < 0)
        return false;

    void** vtable = *reinterpret_cast<void***>(instance);
    if (vtable == nullptr || !gmod::Readable(vtable + slot, sizeof(void*)))
        return false;
    if (vtable[slot] != detour)
        return false;

    DWORD oldProtection = 0;
    if (VirtualProtect(&vtable[slot], sizeof(void*), PAGE_EXECUTE_READWRITE,
                       &oldProtection) == FALSE)
        return false;
    vtable[slot] = original;
    DWORD restored = 0;
    VirtualProtect(&vtable[slot], sizeof(void*), oldProtection, &restored);
    return true;
}

// ------------------------------------------------------------- ABI records

enum class HookReturn : std::uint8_t { Void, Bool, HResult };

struct HookAbiDescriptor
{
    offsets::HookId id;
    const char* name;
    const char* interfaceName;
    int slot;
    int parameters;     // excluding `this`
    HookReturn result;
    const char* abi;
    const char* feature;
};

inline constexpr HookAbiDescriptor kHookAbi[] = {
    { offsets::HookId::D3dSetRenderTarget,      "SetRenderTarget",           "D3D",           37, 2, HookReturn::HResult,
      "HRESULT(void*,DWORD,void*)", "tracks the active render target and the back buffer" },
    { offsets::HookId::D3dStretchRect,          "StretchRect",               "D3D",           34, 5, HookReturn::HResult,
      "HRESULT(void*,void*,const RECT*,void*,const RECT*,int)", "tracks back-buffer copies" },
    { offsets::HookId::D3dGetRenderTargetData,  "GetRenderTargetData",       "D3D",           32, 2, HookReturn::HResult,
      "HRESULT(void*,void*,void*)", "render-target read tracking" },
    { offsets::HookId::D3dPresent,              "Present",                   "D3D",           17, 4, HookReturn::HResult,
      "HRESULT(void*,const RECT*,const RECT*,HWND,const RGNDATA*)", "present counter" },
    { offsets::HookId::D3dReset,                "Reset",                     "D3D",           16, 1, HookReturn::HResult,
      "HRESULT(void*,D3DPRESENT_PARAMETERS*)", "resize / device-state reset" },
    { offsets::HookId::MaterialSystem,           "OverrideConfig",           "MaterialSystem", 20, 2, HookReturn::Bool,
      "bool(void*,void*,bool)", "fullbright config byte at +0x49" },
    { offsets::HookId::ChlVr,                    "View_Render",              "CHLClient",      26, 1, HookReturn::Void,
      "void(void*,void*)", "view-render counter" },
    { offsets::HookId::ChlWriteUsercmd,          "WriteUsercmdDeltaToBuffer","CHLClient",      23, 4, HookReturn::Bool,
      "bool(void*,void*,int,int,bool)", "command-write counter" },
    { offsets::HookId::ChlHudUpdate,             "HudUpdate",                "CHLClient",      11, 1, HookReturn::Void,
      "void(void*,bool)", "HUD-update counter" },
    { offsets::HookId::ChlLevelInit,             "LevelInitPreEntity",       "CHLClient",       5, 1, HookReturn::Void,
      "void(void*,const char*)", "resets aim/trigger/backtrack/antiaim state" },
    { offsets::HookId::ChlLevelShutdown,         "LevelShutdown",            "CHLClient",       7, 0, HookReturn::Void,
      "void(void*)", "resets aim/trigger/backtrack/antiaim state" },
    { offsets::HookId::ClientMode,               "CreateMove",               "ClientMode",     21, 2, HookReturn::Bool,
      "bool(void*,float,CUserCmd*)", "bunnyhop, autostrafe, aimbot, triggerbot, anti-aim, no-spread, backtrack" },
    { offsets::HookId::Panel,                    "PaintTraverse",            "Panel",          41, 3, HookReturn::Void,
      "void(void*,unsigned int,bool,bool)", "paint counter" },
    { offsets::HookId::ViewRender,               "RenderView",               "ViewRender",      6, 3, HookReturn::Void,
      "void(void*,void*,int,int)", "render-view counter" },
    { offsets::HookId::ViewRenderPreHud,         "PreHUD",                   "ViewRender",     37, 1, HookReturn::Void,
      "void(void*,void*)", "pre-HUD stage" },
    { offsets::HookId::ViewRenderDrawModel,      "DrawModel",                "ViewRender",     40, 1, HookReturn::Void,
      "void(void*,void*)", "view draw-model stage" },
    { offsets::HookId::EngineServerViewAngles,   "SetViewAngles",            "Engine",         20, 1, HookReturn::Void,
      "void(void*,QAngle*)", "blocks non-finite view angles" },
    { offsets::HookId::EngineGetViewAngles,      "GetViewAngles",            "Engine",         19, 1, HookReturn::Void,
      "void(void*,QAngle*)", "anti-aim fake view angles" },
    { offsets::HookId::ModelRenderDrawModelExecute,"DrawModelExecute",       "ModelRender",    20, 3, HookReturn::Void,
      "void(void*,const void*,const void*,void*)", "model pass-through" },
    { offsets::HookId::LuaShared,                "CloseLuaInterface",        "LuaShared",       5, 1, HookReturn::Void,
      "void(void*,void*)", "Lua interface close tracking" },
    { offsets::HookId::InputSystem,              "IsButtonDown",             "InputSystem",    15, 1, HookReturn::Bool,
      "bool(void*,int)", "input state pass-through" },
};
inline constexpr int kHookAbiCount =
    static_cast<int>(sizeof(kHookAbi) / sizeof(kHookAbi[0]));
static_assert(kHookAbiCount == offsets::kHookCount, "every hook needs an ABI row");

struct CoreHookAbiDescriptor
{
    offsets::CoreHook id;
    const char* name;
    const char* interfaceName;
    int slot;
    int parameters;
    HookReturn result;
    const char* abi;
    const char* feature;
};

inline constexpr CoreHookAbiDescriptor kCoreHookAbi[] = {
    { offsets::CoreHook::ClientModeCreateMove, "CreateMove",       "ClientMode",  21, 2, HookReturn::Bool,
      "bool(void*,float,CUserCmd*)", "bunnyhop, autostrafe, aimbot, triggerbot, anti-aim, no-spread, backtrack" },
    { offsets::CoreHook::FrameStageNotify,     "FrameStageNotify", "CHLClient",   35, 1, HookReturn::Void,
      "void(void*,int)", "ESP at FRAME_RENDER_START" },
    { offsets::CoreHook::PredictionRunCommand, "RunCommand",       "CPrediction", 17, 3, HookReturn::Void,
      "void(void*,void*,CUserCmd*,void*)", "pass-through command stage" },
};
inline constexpr int kCoreHookAbiCount =
    static_cast<int>(sizeof(kCoreHookAbi) / sizeof(kCoreHookAbi[0]));
static_assert(kCoreHookAbiCount == offsets::kCoreHookCount, "core hook ABI table drift");

// -------------------------------------------------------------- handlers

inline HRESULT HandleD3dReset(HookState& state, void* self, D3DPRESENT_PARAMETERS* parameters)
{
    state.features.OnLevelShutdown();
    state.backBuffer = nullptr;
    state.renderTarget = nullptr;
    ++state.resizeCount;
    if (state.original.d3dReset == nullptr)
        return D3DERR_INVALIDCALL;
    return state.original.d3dReset(self, parameters);
}

inline HRESULT HandleD3dPresent(HookState& state, void* self, const RECT* source,
                                const RECT* destination, HWND window,
                                const RGNDATA* dirty)
{
    ++state.presentCount;
    if (state.original.d3dPresent == nullptr)
        return D3DERR_INVALIDCALL;
    return state.original.d3dPresent(self, source, destination, window, dirty);
}

inline HRESULT HandleD3dGrtd(HookState& state, void* self, void* source, void* destination)
{
    if (state.original.d3dGrtd == nullptr)
        return D3DERR_INVALIDCALL;
    return state.original.d3dGrtd(self, source, destination);
}

inline HRESULT HandleD3dStretchRect(HookState& state, void* self, void* source,
                                    const RECT* sourceRect, void* destination,
                                    const RECT* destinationRect, int filter)
{
    if (source == state.backBuffer)
        state.backBuffer = destination;
    if (state.original.d3dStretchRect == nullptr)
        return D3DERR_INVALIDCALL;
    return state.original.d3dStretchRect(self, source, sourceRect, destination,
                                         destinationRect, filter);
}

inline HRESULT HandleD3dSetRenderTarget(HookState& state, void* self, DWORD index,
                                        void* target)
{
    if (index == 0)
        state.renderTarget = target;
    if (state.original.d3dSetRenderTarget == nullptr)
        return D3DERR_INVALIDCALL;
    return state.original.d3dSetRenderTarget(self, index, target);
}

inline bool HandleOverrideConfig(HookState& state, void* self, void* config, bool force)
{
    if (config == nullptr || !state.config.fullbright)
        return state.original.overrideConfig != nullptr &&
               state.original.overrideConfig(self, config, force);

    // The body copies 0x180 bytes and edits the byte at +0x49 (bFullbright).
    unsigned char copy[0x180] = {};
    std::memcpy(copy, config, sizeof(copy));
    copy[0x49] = 1;
    return state.original.overrideConfig != nullptr &&
           state.original.overrideConfig(self, copy, force);
}

inline void HandleViewRender(HookState& state, void* self, void* view)
{
    ++state.renderViewCount;
    if (state.original.viewRender != nullptr)
        state.original.viewRender(self, view);
}

inline bool HandleWriteUsercmd(HookState& state, void* self, void* buffer, int from,
                               int to, bool isNewCommand)
{
    ++state.commandWrites;
    return state.original.writeUsercmd != nullptr &&
           state.original.writeUsercmd(self, buffer, from, to, isNewCommand);
}

inline void HandleHudUpdate(HookState& state, void* self, bool active)
{
    ++state.hudUpdates;
    if (state.original.hudUpdate != nullptr)
        state.original.hudUpdate(self, active);
}

inline void HandleLevelInit(HookState& state, void* self, const char* levelName)
{
    state.features.OnLevelInit();
    if (state.original.levelInit != nullptr)
        state.original.levelInit(self, levelName);
}

inline void HandleLevelShutdown(HookState& state, void* self)
{
    state.features.OnLevelShutdown();
    if (state.original.levelShutdown != nullptr)
        state.original.levelShutdown(self);
}

inline void HandlePaintTraverse(HookState& state, void* self, unsigned int panel,
                                bool forceRepaint, bool allowForce)
{
    ++state.paintCount;
    if (state.original.paintTraverse != nullptr)
        state.original.paintTraverse(self, panel, forceRepaint, allowForce);
}

inline void HandleRenderView(HookState& state, void* self, void* view, int clearFlags,
                             int whatToDraw)
{
    ++state.renderViewCount;
    if (state.original.renderView != nullptr)
        state.original.renderView(self, view, clearFlags, whatToDraw);
}

inline void HandlePreHud(HookState& state, void* self, void* view)
{
    if (state.original.preHud != nullptr)
        state.original.preHud(self, view);
}

inline void HandleViewDrawModel(HookState& state, void* self, void* renderable)
{
    if (state.original.viewDrawModel != nullptr)
        state.original.viewDrawModel(self, renderable);
}

inline void HandleSetViewAngles(HookState& state, void* self, gmod::QAngle* angles)
{
    if (angles == nullptr)
        return;
    const bool finite = std::isfinite(angles->pitch) && std::isfinite(angles->yaw) &&
                        std::isfinite(angles->roll);
    if (!finite)
    {
        ++state.blockedViewAngles;
        return;
    }
    if (state.original.setViewAngles != nullptr)
        state.original.setViewAngles(self, angles);
}

inline void HandleGetViewAngles(HookState& state, void* self, gmod::QAngle* angles)
{
    if (angles == nullptr)
        return;
    if (state.features.FakeViewAngles(*angles))
        return;
    if (state.features.AimViewAngles(*angles))
        return;
    if (state.original.getViewAngles != nullptr)
        state.original.getViewAngles(self, angles);
}

inline void HandleDrawModelExecute(HookState& state, void* self, const void* modelState,
                                   const void* info, void* bones)
{
    if (state.original.drawModelExecute != nullptr)
        state.original.drawModelExecute(self, modelState, info, bones);
}

inline void HandleCloseLuaInterface(HookState& state, void* self, void* interfacePointer)
{
    if (state.original.closeLuaInterface != nullptr)
        state.original.closeLuaInterface(self, interfacePointer);
}

inline bool HandleIsButtonDown(HookState& state, void* self, int code)
{
    return state.original.isButtonDown != nullptr &&
           state.original.isButtonDown(self, code);
}

inline bool HandleCreateMovePassThrough(HookState& state, void* self, float sampleTime,
                                        gmod::CUserCmd* command)
{
    return state.original.createMove != nullptr &&
           state.original.createMove(self, sampleTime, command);
}

inline void HandleFrameStageNotifyPassThrough(HookState& state, void* self, int stage)
{
    if (state.original.frameStageNotify != nullptr)
        state.original.frameStageNotify(self, stage);
}

inline void HandleRunCommandPassThrough(HookState& state, void* self, void* player,
                                        gmod::CUserCmd* command, void* moveHelper)
{
    if (state.original.runCommand != nullptr)
        state.original.runCommand(self, player, command, moveHelper);
}

} // namespace runtime
} // namespace sf