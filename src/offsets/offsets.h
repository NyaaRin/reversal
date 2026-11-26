#pragma once
// Compile-time view of the recovered offset/signature database.
//
// The JSON next to this header is the readable record; this header is what the
// runtime actually compiles against. Every address below is an RVA in the
// original m64.dll image (base 0x180000000) and every signature is the exact
// byte string recovered from the decompilation corpus. See
// docs/stage-04-offsets.md for the evidence rows.
//
// The 21-entry table is the setup pass at 0x1801f9180 (7719 bytes). The three
// core rows below add FrameStageNotify, CPrediction::RunCommand and the
// ClientMode CreateMove entry that the core table shares with row 11. The
// runtime install path covers all 23 unique descriptors; the ClientMode row is
// counted twice because offsets.json records it in both tables. Optional rows
// (D3D, MaterialSystem, Panel, ViewRender, ModelRender, LuaShared and
// InputSystem) are attempted only when their interface or device is present and
// are logged by name otherwise.

#include <cstdint>

namespace sf {
namespace offsets {

// ---------------------------------------------------------------- hooks
enum class HookId : std::uint8_t
{
    D3dSetRenderTarget = 0,
    D3dStretchRect,
    D3dGetRenderTargetData,
    D3dPresent,
    D3dReset,
    MaterialSystem,
    ChlVr,
    ChlWriteUsercmd,
    ChlHudUpdate,
    ChlLevelInit,
    ChlLevelShutdown,
    ClientMode,
    Panel,
    ViewRender,
    ViewRenderPreHud,
    ViewRenderDrawModel,
    EngineServerViewAngles,
    EngineGetViewAngles,
    ModelRenderDrawModelExecute,
    LuaShared,
    InputSystem,
};

struct HookDescriptor
{
    HookId id;
    const char* interfaceName;
    std::uint64_t interfaceGlobal;
    int slot;
    int vtableOffset;
    std::uint64_t stub;
    std::uint64_t originalGlobal;
    const char* purpose;
    bool runtimeImplemented;
    const char* abi;
    const char* feature;
};

// Exactly the rows of 0x1801f9180, in its install order. Slot 37/34/32 are the
// D3D9 SetRenderTarget/StretchRect/GetRenderTargetData entries; the original
// setup log labeled them RT/Stretch/GRTD. Slots 16/17 are Reset/Present.
inline constexpr HookDescriptor kHooks[] = {
    { HookId::D3dSetRenderTarget,       "D3D",           0x1803fa5e0ULL, 0x25, 0x128, 0x1801f5ad0ULL, 0x1803fa370ULL,
      "SetRenderTarget",                true,  "HRESULT(void*,DWORD,void*)",                 "tracks the active render target and the back buffer" },
    { HookId::D3dStretchRect,           "D3D",           0x1803fa5e0ULL, 0x22, 0x110, 0x1801ebcd0ULL, 0x1803fa4f8ULL,
      "StretchRect",                    true,  "HRESULT(void*,void*,const RECT*,void*,const RECT*,int)", "tracks back-buffer copies" },
    { HookId::D3dGetRenderTargetData,   "D3D",           0x1803fa5e0ULL, 0x20, 0x100, 0x180118fa0ULL, 0x1804235a0ULL,
      "GetRenderTargetData",            true,  "HRESULT(void*,void*,void*)",                 "render-target read tracking" },
    { HookId::D3dPresent,               "D3D",           0x1803fa5e0ULL, 0x11, 0x088, 0x1801ebf30ULL, 0x1803fa4e0ULL,
      "Present",                        true,  "HRESULT(void*,const RECT*,const RECT*,HWND,const RGNDATA*)", "present counter" },
    { HookId::D3dReset,                 "D3D",           0x1803fa5e0ULL, 0x10, 0x080, 0x1801ebe00ULL, 0x1803fa4d8ULL,
      "Reset",                          true,  "HRESULT(void*,D3DPRESENT_PARAMETERS*)",      "resize / device-state reset" },
    { HookId::MaterialSystem,           "MaterialSystem",0x1803fa640ULL, 0x14, 0x0a0, 0x1801ed5d0ULL, 0x1803fa3d8ULL,
      "OverrideConfig",                 true,  "bool(void*,void*,bool)",                     "fullbright config byte at +0x49" },
    { HookId::ChlVr,                    "CHLClient",     0x1803f9278ULL, 0x1a, 0x0d0, 0x1801f6a20ULL, 0x1803fa440ULL,
      "View_Render",                    true,  "void(void*,void*)",                          "view-render counter" },
    { HookId::ChlWriteUsercmd,          "CHLClient",     0x1803f9278ULL, 0x17, 0x0b8, 0x1801f3490ULL, 0x1803fa438ULL,
      "WriteUsercmdDeltaToBuffer",      true,  "bool(void*,void*,int,int,bool)",             "command-write counter" },
    { HookId::ChlHudUpdate,             "CHLClient",     0x1803f9278ULL, 0x0b, 0x058, 0x1801f6950ULL, 0x1803fa388ULL,
      "HudUpdate",                      true,  "void(void*,bool)",                           "HUD-update counter" },
    { HookId::ChlLevelInit,             "CHLClient",     0x1803f9278ULL, 0x05, 0x028, 0x1801f6840ULL, 0x1803fa410ULL,
      "LevelInitPreEntity",             true,  "void(void*,const char*)",                    "resets aim/trigger/backtrack/antiaim state" },
    { HookId::ChlLevelShutdown,         "CHLClient",     0x1803f9278ULL, 0x07, 0x038, 0x1801f68d0ULL, 0x1803fa420ULL,
      "LevelShutdown",                  true,  "void(void*)",                                "resets aim/trigger/backtrack/antiaim state" },
    { HookId::ClientMode,               "ClientMode",    0x1803fa638ULL, 0x15, 0x0a8, 0x1801ee530ULL, 0x1803fa3d0ULL,
      "CreateMove",                     true,  "bool(void*,float,CUserCmd*)",                "bunnyhop, autostrafe, aimbot, triggerbot, anti-aim, no-spread, backtrack" },
    { HookId::Panel,                    "Panel",         0x1803fa600ULL, 0x29, 0x148, 0x1801ed360ULL, 0x1803fa508ULL,
      "PaintTraverse",                  true,  "void(void*,unsigned int,bool,bool)",         "paint counter" },
    { HookId::ViewRender,               "ViewRender",    0x1803fa680ULL, 0x06, 0x030, 0x1801f1b80ULL, 0x1803fa478ULL,
      "RenderView",                     true,  "void(void*,void*,int,int)",                  "render-view counter" },
    { HookId::ViewRenderPreHud,          "ViewRender",    0x1803fa680ULL, 0x25, 0x128, 0x1801f32a0ULL, 0x1803fa3a0ULL,
      "PreHUD",                         true,  "void(void*,void*)",                          "pre-HUD stage" },
    { HookId::ViewRenderDrawModel,       "ViewRender",    0x1803fa680ULL, 0x28, 0x140, 0x1801f73b0ULL, 0x1803fa498ULL,
      "DrawModel",                      true,  "void(void*,void*)",                          "view draw-model stage" },
    { HookId::EngineServerViewAngles,   "Engine",        0x1803fa668ULL, 0x14, -1,    0x1801f3360ULL, 0x1803fa380ULL,
      "SetViewAngles",                  true,  "void(void*,QAngle*)",                        "blocks non-finite view angles" },
    { HookId::EngineGetViewAngles,      "Engine",        0x1803fa668ULL, 0x13, -1,    0x1801f3440ULL, 0x1803fa3f0ULL,
      "GetViewAngles",                  true,  "void(void*,QAngle*)",                        "anti-aim fake view angles" },
    { HookId::ModelRenderDrawModelExecute, "ModelRender", 0x1803fa598ULL, 0x14, 0x0a0, 0x1801f5340ULL, 0x1803fa378ULL,
      "DrawModelExecute",               true,  "void(void*,const void*,const void*,void*)",  "model pass-through" },
    { HookId::LuaShared,                "LuaShared",     0x1803fa678ULL, 0x05, 0x028, 0x1801f6f60ULL, 0x1803fa3c0ULL,
      "CloseLuaInterface",              true,  "void(void*,void*)",                          "Lua interface close tracking" },
    { HookId::InputSystem,              "InputSystem",   0x1803fa5a8ULL, 0x0f, 0x078, 0x1801f7440ULL, 0x1803fa3c8ULL,
      "IsButtonDown",                   true,  "bool(void*,int)",                            "input state pass-through" },
};
inline constexpr int kHookCount = static_cast<int>(sizeof(kHooks) / sizeof(kHooks[0]));
static_assert(kHookCount == 21, "the recovered setup pass installs exactly 21 hooks");

// The two hooks installed outside the 21-entry table by 0x1801ecae0, plus the
// ClientMode/CreateMove row already present above.
enum class CoreHook : std::uint8_t
{
    ClientModeCreateMove = 0,
    FrameStageNotify,
    PredictionRunCommand,
};

struct CoreHookDescriptor
{
    CoreHook id;
    const char* interfaceName;
    std::uint64_t interfaceGlobal;
    int slot;
    int vtableOffset;
    std::uint64_t stub;
    std::uint64_t originalGlobal;
    const char* purpose;
    const char* abi;
    const char* feature;
    bool runtimeImplemented;
};

inline constexpr CoreHookDescriptor kCoreHooks[] = {
    { CoreHook::ClientModeCreateMove, "ClientMode",  0x1803fa638ULL, 0x15, 0x0a8, 0x1801ee530ULL, 0x1803fa3d0ULL, "CreateMove",
      "bool(void*,float,CUserCmd*)", "bunnyhop, autostrafe, aimbot, triggerbot, anti-aim, no-spread, backtrack", true },
    { CoreHook::FrameStageNotify,     "CHLClient",   0x1803f9278ULL, 0x23, 0x118, 0x1801ec910ULL, 0x1803ff900ULL, "FrameStageNotify",
      "void(void*,int)", "ESP at FRAME_RENDER_START", true },
    { CoreHook::PredictionRunCommand, "CPrediction", 0x1803f9290ULL, 0x11, 0x088, 0x1801ec9d0ULL, 0x1803ff8f8ULL, "RunCommand",
      "void(void*,void*,CUserCmd*,void*)", "pass-through command stage", true },
};
inline constexpr int kCoreHookCount =
    static_cast<int>(sizeof(kCoreHooks) / sizeof(kCoreHooks[0]));
static_assert(kCoreHookCount == 3, "the core descriptor table has three rows");

// The canonical feature inventory. The runtime feature composition and the
// stage docs use these names; per-hook feature strings below say which row
// carries each feature.
inline constexpr const char* kLiveFeatures[] = {
    "bunnyhop",
    "autostrafe",
    "aimbot",
    "triggerbot",
    "no-spread",
    "anti-aim",
    "backtrack",
    "fullbright",
    "esp",
};
inline constexpr int kLiveFeatureCount =
    static_cast<int>(sizeof(kLiveFeatures) / sizeof(kLiveFeatures[0]));
static_assert(kLiveFeatureCount == 9, "the live feature inventory has nine entries");

// Canonical unsupported/verification boundary. The reasons are deliberately
// evidence-specific; they are repeated in offsets.json and the stage docs.
struct UnsupportedItem
{
    const char* item;
    const char* reason;
};

inline constexpr UnsupportedItem kUnsupported[] = {
    { "in-game hook execution",
      "No live GMod/client.dll process is available in this workspace; hooks are verified against fake vtables and ABI fixtures only." },
    { "no-spread against a real weapon profile",
      "Weapon base name, spread and inaccuracy are Lua/weapon-object values; the runtime exposes them as config values and uses the reconstructed Generic backend, not a live weapon read." },
    { "triggerbot visibility trace",
      "Closed: 0x180017150 resolves EngineTraceClient003 into the engine-trace global, and 0x1800e2580 calls slot 4 (TraceRay) with mask 0x46004003 and a CDoubleTraceFilter skipping the local player. The runtime now resolves that interface and uses the trace; the angular gate remains only as a fallback when the interface is absent." },
    { "backtrack rewind / bone history",
      "The recorder stores entity origins; per-bone history and server-time rewind require the missing lag-compensation path." },
    { "anti-aim body desync modes 7-9 (live body clock)",
      "Modes 7-9 use a reconstructed 12-tick alternator plus the configured body offset; the live clock/direction probe in 0x1800bd8d0 is not available in this self-contained build." },
};
inline constexpr int kUnsupportedCount =
    static_cast<int>(sizeof(kUnsupported) / sizeof(kUnsupported[0]));
static_assert(kUnsupportedCount == 5, "the unsupported inventory has five entries");

// 21 recovered rows + 3 core rows. The ClientMode slot is shared by row 11 and
// core row 0, so the runtime install path covers 23 unique VMT slots and reports
// the duplicate row explicitly; optional interface rows are conditional.
inline constexpr int kRuntimeHookRowCount = kHookCount + kCoreHookCount;
inline constexpr int kUniqueRuntimeHookSlots = kRuntimeHookRowCount - 1;

// ---------------------------------------------------------------- signatures
enum class SignatureId : std::uint8_t
{
    BeamSegStart = 0,
    BeamSegNext,
    BeamSegEnd,
    GmodNetRead,
    GmodNetWrite,
    NetSetTimeForTimescale,
};

struct SignaturePattern
{
    SignatureId id;
    const char* moduleName;
    const char* name;
    const char* bytes;
};

// Byte strings exactly as recorded in docs/stage-03.11-resolver.md.
inline constexpr SignaturePattern kSignatures[] = {
    { SignatureId::BeamSegStart, "client.dll", "CBeamSegDraw::Start",
      "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30 48 89 91 28 03 00 00" },
    { SignatureId::BeamSegNext, "client.dll", "CBeamSegDraw::NextSeg",
      "4C 8B DC 49 89 5B 18 49 89 6B 20 57 48 81 EC 90 00 00 00 8B 81 14 03 00 00" },
    { SignatureId::BeamSegEnd, "client.dll", "CBeamSegDraw::End",
      "48 83 79 10 00 74 09 48 C7 41 10 00 00 00 00 C3 48 83 C1 20" },
    { SignatureId::GmodNetRead, "engine.dll", "GMod NetRead(in)",
      "48 89 5C 24 08 48 89 74 24 10 57 48 8B F9" },
    { SignatureId::GmodNetWrite, "engine.dll", "GMod NetWrite(out)",
      "48 89 5C 24 08 57 48 83 EC 20 48 8B 01 48 8B FA 48 8B D9 FF 50 38 41 B1 01 41 B8 06 00 00 00 8B D0 48 8B CF E8 ? ? ? ? 8B 53 20 41 B1 01 41 B8 14" },
    { SignatureId::NetSetTimeForTimescale, "engine.dll", "NET_SetTimeForTimescale",
      "48 83 EC 38 48 8B 0D ? ? ? ? 48 8D 15 ? ? ? ? 0F 29 74 24 20 0F 28 F0 F2 0F 5C 35 ? ? ? ?" },
};
inline constexpr int kSignatureCount =
    static_cast<int>(sizeof(kSignatures) / sizeof(kSignatures[0]));
static_assert(kSignatureCount == 6, "six signature strings are verified");

// ---------------------------------------------------------------- globals
// Interface globals from 0x180017150, used by the resolver and the runtime.
inline constexpr std::uint64_t kChlClientGlobal      = 0x1803f9278ULL;
inline constexpr std::uint64_t kPredictionGlobal     = 0x1803f9290ULL;
inline constexpr std::uint64_t kClientModeGlobal     = 0x1803fa638ULL;
inline constexpr std::uint64_t kEngineClientGlobal   = 0x1803fa668ULL;
inline constexpr std::uint64_t kEntityListGlobal     = 0x1803fa360ULL;
inline constexpr std::uint64_t kViewRenderGlobal     = 0x1803fa680ULL;
inline constexpr std::uint64_t kInputSystemGlobal    = 0x1803fa5a8ULL;
inline constexpr std::uint64_t kMaterialSystemGlobal = 0x1803fa640ULL;
inline constexpr std::uint64_t kModelRenderGlobal    = 0x1803fa598ULL;
inline constexpr std::uint64_t kDebugOverlayGlobal   = 0x1803fa650ULL;

// The runtime's live interface names. These are the strings 0x180017150 asks
// CreateInterface for, not the m64 global addresses (those move with the image).
inline constexpr const char* kChlClientInterface      = "VClient017";
inline constexpr const char* kPredictionInterface     = "VClientPrediction001";
inline constexpr const char* kEntityListInterface     = "VClientEntityList003";
inline constexpr const char* kEngineClientInterface   = "VEngineClient015";
inline constexpr const char* kEngineTraceInterface    = "EngineTraceClient003";
inline constexpr const char* kDebugOverlayInterface   = "VDebugOverlay003";
inline constexpr const char* kMaterialSystemInterface = "VMaterialSystem080";
inline constexpr const char* kPanelInterface          = "VGUI_Panel009";
inline constexpr const char* kViewRenderInterface     = "VEngineRenderView014";
inline constexpr const char* kModelRenderInterface    = "VEngineModel016";
inline constexpr const char* kInputSystemInterface    = "InputSystemVersion001";
inline constexpr const char* kLuaSharedInterface      = "LUASHARED003";

// Vtable slots used by the runtime, named so the hook code cannot drift.
inline constexpr int kClientModeCreateMoveSlot = 0x15;
inline constexpr int kFrameStageNotifySlot     = 0x23;
inline constexpr int kPredictionRunCommandSlot = 0x11;

// GMod x64 CUserCmd layout (verified by the live SDK, 316 bytes).
inline constexpr int kCmdViewAngles = 0x08;
inline constexpr int kCmdForwardMove = 0x14;
inline constexpr int kCmdSideMove = 0x18;
inline constexpr int kCmdUpMove = 0x1c;
inline constexpr int kCmdButtons = 0x20;
inline constexpr int kCmdSize = 316;

} // namespace offsets
} // namespace sf
