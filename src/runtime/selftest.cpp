#include "config.h"
#include "gmod_sdk.h"
#include "hooks.h"
#include "runtime_features.h"
#include "../offsets/offsets.h"

#include <cmath>
#include <cstddef>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>

namespace {

int failures = 0;

void Check(bool condition, const char* what)
{
    if (condition)
        return;
    ++failures;
    std::cerr << "FAIL: " << what << "\n";
}

bool g_traceAvailable = true;
bool g_traceStartSolid = false;
void* g_traceEntity = nullptr;

bool FakeTraceRay(void*, const gmod::Vector&, const gmod::Vector&, gmod::TraceHit& hit)
{
    if (!g_traceAvailable)
        return false;
    hit.entity = g_traceEntity;
    hit.fraction = g_traceEntity != nullptr ? 0.5f : 1.f;
    hit.hitGroup = 1;
    hit.startSolid = g_traceStartSolid;
    return true;
}

void FakeEngineTrace(void*, const gmod::Ray_t*, unsigned int, gmod::ITraceFilter*,
                     gmod::TraceResult* result)
{
    if (result == nullptr)
        return;
    const float fraction = 0.5f;
    std::memcpy(result->data + 0x2c, &fraction, sizeof(fraction));
    std::memcpy(result->data + 0x58, &g_traceEntity, sizeof(g_traceEntity));
}

void CoverageCheck(bool condition, const std::string& what)
{
    std::cout << (condition ? "HOOK PASS " : "HOOK FAIL ") << what << "\n";
    if (condition)
        return;
    ++failures;
    std::cerr << "FAIL: " << what << "\n";
}

std::string InterfaceSlot(const char* interfaceName, int slot)
{
    std::ostringstream out;
    out << interfaceName << "/0x" << std::hex << slot;
    return out.str();
}

const char* ResultLabel(sf::runtime::HookReturn result)
{
    switch (result)
    {
    case sf::runtime::HookReturn::Void:
        return "void-return (ABI+args; no return to preserve)";
    case sf::runtime::HookReturn::Bool:
        return "bool-return (ABI+args+return preserved)";
    case sf::runtime::HookReturn::HResult:
        return "HRESULT-return (ABI+args+return preserved)";
    }
    return "unknown-return";
}

// ------------------------------------------------------------- D3D fixtures
int resetCalls = 0;
int presentCalls = 0;
int grtdCalls = 0;
int stretchCalls = 0;
int targetCalls = 0;
int resetReturn = 0x1111;
D3DPRESENT_PARAMETERS* resetParameters = nullptr;
const RECT* presentSource = nullptr;
const RECT* presentDestination = nullptr;
HWND presentWindow = nullptr;
const RGNDATA* presentDirty = nullptr;
void* grtdSource = nullptr;
void* grtdDestination = nullptr;
void* stretchSource = nullptr;
void* stretchDestination = nullptr;
const RECT* stretchSourceRect = nullptr;
const RECT* stretchDestinationRect = nullptr;
int stretchFilter = 0;
DWORD targetIndex = 99;
void* targetSurface = nullptr;

HRESULT __fastcall FakeD3dReset(void*, D3DPRESENT_PARAMETERS* parameters)
{
    ++resetCalls;
    resetParameters = parameters;
    return static_cast<HRESULT>(resetReturn);
}

HRESULT __fastcall FakeD3dPresent(void*, const RECT* source, const RECT* destination,
                                  HWND window, const RGNDATA* dirty)
{
    ++presentCalls;
    presentSource = source;
    presentDestination = destination;
    presentWindow = window;
    presentDirty = dirty;
    return static_cast<HRESULT>(0x2222);
}

HRESULT __fastcall FakeD3dGrtd(void*, void* source, void* destination)
{
    ++grtdCalls;
    grtdSource = source;
    grtdDestination = destination;
    return static_cast<HRESULT>(0x3333);
}

HRESULT __fastcall FakeD3dStretchRect(void*, void* source, const RECT* sourceRect,
                                      void* destination, const RECT* destinationRect, int filter)
{
    ++stretchCalls;
    stretchSource = source;
    stretchDestination = destination;
    stretchSourceRect = sourceRect;
    stretchDestinationRect = destinationRect;
    stretchFilter = filter;
    return static_cast<HRESULT>(0x4444);
}

HRESULT __fastcall FakeD3dSetRenderTarget(void*, DWORD index, void* target)
{
    ++targetCalls;
    targetIndex = index;
    targetSurface = target;
    return static_cast<HRESULT>(0x5555);
}

// ------------------------------------------------------- interface fixtures
int configCalls = 0;
void* lastConfig = nullptr;
bool lastForce = false;
unsigned char lastFullbright = 0;
bool configReturn = true;

bool __fastcall FakeOverrideConfig(void*, void* config, bool force)
{
    ++configCalls;
    lastConfig = config;
    lastForce = force;
    lastFullbright = static_cast<unsigned char*>(config)[0x49];
    return configReturn;
}

int viewRenderCalls = 0;
void* lastView = nullptr;
void __fastcall FakeViewRender(void*, void* view)
{
    ++viewRenderCalls;
    lastView = view;
}

int writeCalls = 0;
void* lastWriteBuffer = nullptr;
int lastFrom = 0;
int lastTo = 0;
bool lastNewCommand = false;
bool writeReturn = true;

bool __fastcall FakeWriteUsercmd(void*, void* buffer, int from, int to, bool isNewCommand)
{
    ++writeCalls;
    lastWriteBuffer = buffer;
    lastFrom = from;
    lastTo = to;
    lastNewCommand = isNewCommand;
    return writeReturn;
}

int hudCalls = 0;
bool lastHudActive = false;
void __fastcall FakeHudUpdate(void*, bool active)
{
    ++hudCalls;
    lastHudActive = active;
}

int levelInitCalls = 0;
const char* lastLevel = nullptr;
void __fastcall FakeLevelInit(void*, const char* name)
{
    ++levelInitCalls;
    lastLevel = name;
}

int levelShutdownCalls = 0;
void __fastcall FakeLevelShutdown(void*)
{
    ++levelShutdownCalls;
}

int paintCalls = 0;
unsigned int lastPanel = 0;
bool lastForceRepaint = false;
bool lastAllowForce = false;
void __fastcall FakePaintTraverse(void*, unsigned int panel, bool forceRepaint, bool allowForce)
{
    ++paintCalls;
    lastPanel = panel;
    lastForceRepaint = forceRepaint;
    lastAllowForce = allowForce;
}

int renderViewCalls = 0;
int lastClearFlags = 0;
int lastWhatToDraw = 0;
void __fastcall FakeRenderView(void*, void* view, int clearFlags, int whatToDraw)
{
    ++renderViewCalls;
    lastView = view;
    lastClearFlags = clearFlags;
    lastWhatToDraw = whatToDraw;
}

int preHudCalls = 0;
void __fastcall FakePreHud(void*, void* view)
{
    ++preHudCalls;
    lastView = view;
}

int viewDrawCalls = 0;
void __fastcall FakeViewDrawModel(void*, void* renderable)
{
    ++viewDrawCalls;
    lastView = renderable;
}

int setViewCalls = 0;
gmod::QAngle lastSetView;
void __fastcall FakeSetViewAngles(void*, gmod::QAngle* angles)
{
    ++setViewCalls;
    lastSetView = *angles;
}

int getViewCalls = 0;
void __fastcall FakeGetViewAngles(void*, gmod::QAngle* angles)
{
    ++getViewCalls;
    *angles = gmod::QAngle(1.f, 2.f, 3.f);
}

int dmeCalls = 0;
const void* lastModelState = nullptr;
const void* lastModelInfo = nullptr;
void* lastBones = nullptr;
void __fastcall FakeDrawModelExecute(void*, const void* modelState, const void* info, void* bones)
{
    ++dmeCalls;
    lastModelState = modelState;
    lastModelInfo = info;
    lastBones = bones;
}

int luaCalls = 0;
void* lastLuaInterface = nullptr;
void __fastcall FakeCloseLuaInterface(void*, void* interfacePointer)
{
    ++luaCalls;
    lastLuaInterface = interfacePointer;
}

int buttonCalls = 0;
int lastButtonCode = 0;
bool buttonReturn = false;
bool __fastcall FakeIsButtonDown(void*, int code)
{
    ++buttonCalls;
    lastButtonCode = code;
    return buttonReturn;
}

int createMoveCalls = 0;
float lastSampleTime = 0.f;
gmod::CUserCmd* lastCreateMoveCommand = nullptr;
bool createMoveReturn = true;
bool __fastcall FakeCreateMove(void*, float sampleTime, gmod::CUserCmd* command)
{
    ++createMoveCalls;
    lastSampleTime = sampleTime;
    lastCreateMoveCommand = command;
    return createMoveReturn;
}

int frameStageCalls = 0;
int lastStage = -1;
void __fastcall FakeFrameStage(void*, int stage)
{
    ++frameStageCalls;
    lastStage = stage;
}

int runCommandCalls = 0;
gmod::CUserCmd* lastRunCommand = nullptr;
void* lastRunPlayer = nullptr;
void* lastRunMoveHelper = nullptr;
void __fastcall FakeRunCommand(void*, void* player, gmod::CUserCmd* command, void* moveHelper)
{
    ++runCommandCalls;
    lastRunPlayer = player;
    lastRunCommand = command;
    lastRunMoveHelper = moveHelper;
}

int FakeDetour(void*)
{
    return 7;
}

int FakeOriginal(void*)
{
    return 9;
}

bool __fastcall FakeDormant(void*)
{
    return true;
}

// ------------------------------------------------------------ feature helpers
sf::runtime::CommandInputs MakeInputs(gmod::CUserCmd& command)
{
    sf::runtime::CommandInputs inputs;
    inputs.command = &command;
    inputs.alive = true;
    inputs.onGround = true;
    inputs.localTeam = 2;
    inputs.localEye = gmod::Vector(0.f, 0.f, 0.f);
    inputs.classId = 2;
    inputs.moveType = 0;
    inputs.simTime = 10.0;
    return inputs;
}

sf::runtime::TargetInfo MakeTarget(void* entity, int index, float x, float y, int team)
{
    sf::runtime::TargetInfo target;
    target.entity = entity;
    target.index = index;
    target.origin = gmod::Vector(x, y, 0.f);
    target.eye = gmod::Vector(x, y, 0.f);
    target.team = team;
    target.health = 100;
    target.alive = true;
    target.simTime = 10.0;
    return target;
}

// ------------------------------------------------------ per-hook coverage
// Every descriptor row gets exactly one coverage function. Each function
// exercises the handler with its recovered parameter list and a fake original,
// then checks the pass-through values and (for non-void hooks) the returned
// value. The table below is checked against kHooks/kHookAbi and offsets.json's
// compiled mirror before the suite can pass.

bool CoverD3dSetRenderTarget()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.d3dSetRenderTarget = &FakeD3dSetRenderTarget;
    targetCalls = 0;
    targetIndex = 99;
    targetSurface = nullptr;
    int target = 0;
    const HRESULT result = sf::runtime::HandleD3dSetRenderTarget(state, &state, 7, &target);
    return result == static_cast<HRESULT>(0x5555) && targetCalls == 1 &&
           targetIndex == 7 && targetSurface == &target;
}

bool CoverD3dStretchRect()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.d3dStretchRect = &FakeD3dStretchRect;
    stretchCalls = 0;
    stretchSource = nullptr;
    stretchDestination = nullptr;
    stretchSourceRect = nullptr;
    stretchDestinationRect = nullptr;
    stretchFilter = 0;
    int source = 1;
    int destination = 2;
    RECT sourceRect{};
    RECT destinationRect{};
    state.backBuffer = &source;
    const HRESULT result = sf::runtime::HandleD3dStretchRect(
        state, &state, &source, &sourceRect, &destination, &destinationRect, 3);
    return result == static_cast<HRESULT>(0x4444) && stretchCalls == 1 &&
           stretchSource == &source && stretchDestination == &destination &&
           stretchSourceRect == &sourceRect &&
           stretchDestinationRect == &destinationRect && stretchFilter == 3 &&
           state.backBuffer == &destination;
}

bool CoverD3dGetRenderTargetData()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.d3dGrtd = &FakeD3dGrtd;
    grtdCalls = 0;
    grtdSource = nullptr;
    grtdDestination = nullptr;
    int source = 3;
    int destination = 4;
    const HRESULT result = sf::runtime::HandleD3dGrtd(state, &state, &source, &destination);
    return result == static_cast<HRESULT>(0x3333) && grtdCalls == 1 &&
           grtdSource == &source && grtdDestination == &destination;
}

bool CoverD3dPresent()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.d3dPresent = &FakeD3dPresent;
    presentCalls = 0;
    presentSource = nullptr;
    presentDestination = nullptr;
    presentWindow = nullptr;
    presentDirty = nullptr;
    RECT source{};
    RECT destination{};
    const HWND window = reinterpret_cast<HWND>(0x44);
    const HRESULT result = sf::runtime::HandleD3dPresent(
        state, &state, &source, &destination, window, nullptr);
    return result == static_cast<HRESULT>(0x2222) && presentCalls == 1 &&
           presentSource == &source && presentDestination == &destination &&
           presentWindow == window && presentDirty == nullptr;
}

bool CoverD3dReset()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.d3dReset = &FakeD3dReset;
    resetCalls = 0;
    resetParameters = nullptr;
    resetReturn = 0x1111;
    D3DPRESENT_PARAMETERS parameters{};
    const HRESULT result = sf::runtime::HandleD3dReset(state, &state, &parameters);
    return result == static_cast<HRESULT>(0x1111) && resetCalls == 1 &&
           resetParameters == &parameters;
}

bool CoverMaterialSystem()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.config.fullbright = false;
    state.original.overrideConfig = &FakeOverrideConfig;
    configCalls = 0;
    lastConfig = nullptr;
    lastForce = false;
    configReturn = true;
    unsigned char config[0x180] = {};
    const bool first = sf::runtime::HandleOverrideConfig(state, &state, config, true);
    configReturn = false;
    const bool second = sf::runtime::HandleOverrideConfig(state, &state, config, false);
    return first && !second && configCalls == 2 && lastConfig == config && !lastForce;
}

bool CoverChlViewRender()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.viewRender = &FakeViewRender;
    viewRenderCalls = 0;
    lastView = nullptr;
    int view = 0;
    sf::runtime::HandleViewRender(state, &state, &view);
    return viewRenderCalls == 1 && lastView == &view;
}

bool CoverChlWriteUsercmd()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.writeUsercmd = &FakeWriteUsercmd;
    writeCalls = 0;
    lastWriteBuffer = nullptr;
    lastFrom = 0;
    lastTo = 0;
    lastNewCommand = false;
    writeReturn = true;
    int buffer = 0;
    const bool first = sf::runtime::HandleWriteUsercmd(state, &state, &buffer, 4, 5, true);
    writeReturn = false;
    const bool second = sf::runtime::HandleWriteUsercmd(state, &state, &buffer, 6, 7, false);
    return first && !second && writeCalls == 2 && lastWriteBuffer == &buffer &&
           lastFrom == 6 && lastTo == 7 && !lastNewCommand;
}

bool CoverChlHudUpdate()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.hudUpdate = &FakeHudUpdate;
    hudCalls = 0;
    lastHudActive = false;
    sf::runtime::HandleHudUpdate(state, &state, true);
    return hudCalls == 1 && lastHudActive;
}

bool CoverChlLevelInit()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.levelInit = &FakeLevelInit;
    levelInitCalls = 0;
    lastLevel = nullptr;
    sf::runtime::HandleLevelInit(state, &state, "gm_construct");
    return levelInitCalls == 1 && lastLevel != nullptr &&
           std::strcmp(lastLevel, "gm_construct") == 0;
}

bool CoverChlLevelShutdown()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.levelShutdown = &FakeLevelShutdown;
    levelShutdownCalls = 0;
    sf::runtime::HandleLevelShutdown(state, &state);
    return levelShutdownCalls == 1;
}

bool CoverCreateMove()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.createMove = &FakeCreateMove;
    createMoveCalls = 0;
    lastSampleTime = 0.f;
    lastCreateMoveCommand = nullptr;
    gmod::CUserCmd command{};
    createMoveReturn = true;
    const bool first = sf::runtime::HandleCreateMovePassThrough(state, &state, 0.015f, &command);
    createMoveReturn = false;
    const bool second = sf::runtime::HandleCreateMovePassThrough(state, &state, 0.025f, &command);
    return first && !second && createMoveCalls == 2 && lastSampleTime == 0.025f &&
           lastCreateMoveCommand == &command;
}

bool CoverPanel()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.paintTraverse = &FakePaintTraverse;
    paintCalls = 0;
    lastPanel = 0;
    lastForceRepaint = false;
    lastAllowForce = false;
    sf::runtime::HandlePaintTraverse(state, &state, 9, true, false);
    return paintCalls == 1 && lastPanel == 9 && lastForceRepaint && !lastAllowForce;
}

bool CoverViewRender()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.renderView = &FakeRenderView;
    renderViewCalls = 0;
    lastView = nullptr;
    lastClearFlags = 0;
    lastWhatToDraw = 0;
    int view = 0;
    sf::runtime::HandleRenderView(state, &state, &view, 2, 3);
    return renderViewCalls == 1 && lastView == &view && lastClearFlags == 2 &&
           lastWhatToDraw == 3;
}

bool CoverViewRenderPreHud()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.preHud = &FakePreHud;
    preHudCalls = 0;
    lastView = nullptr;
    int view = 0;
    sf::runtime::HandlePreHud(state, &state, &view);
    return preHudCalls == 1 && lastView == &view;
}

bool CoverViewRenderDrawModel()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.viewDrawModel = &FakeViewDrawModel;
    viewDrawCalls = 0;
    lastView = nullptr;
    int renderable = 0;
    sf::runtime::HandleViewDrawModel(state, &state, &renderable);
    return viewDrawCalls == 1 && lastView == &renderable;
}

bool CoverEngineSetViewAngles()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.setViewAngles = &FakeSetViewAngles;
    setViewCalls = 0;
    lastSetView = gmod::QAngle{};
    gmod::QAngle angles(10.f, 20.f, 30.f);
    sf::runtime::HandleSetViewAngles(state, &state, &angles);
    return setViewCalls == 1 && lastSetView.pitch == 10.f && lastSetView.yaw == 20.f &&
           lastSetView.roll == 30.f;
}

bool CoverEngineGetViewAngles()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.getViewAngles = &FakeGetViewAngles;
    getViewCalls = 0;
    gmod::QAngle angles{};
    sf::runtime::HandleGetViewAngles(state, &state, &angles);
    return getViewCalls == 1 && angles.pitch == 1.f && angles.yaw == 2.f && angles.roll == 3.f;
}

bool CoverModelRenderDrawModelExecute()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.drawModelExecute = &FakeDrawModelExecute;
    dmeCalls = 0;
    lastModelState = nullptr;
    lastModelInfo = nullptr;
    lastBones = nullptr;
    int modelState = 0;
    int info = 0;
    int bones = 0;
    sf::runtime::HandleDrawModelExecute(state, &state, &modelState, &info, &bones);
    return dmeCalls == 1 && lastModelState == &modelState && lastModelInfo == &info &&
           lastBones == &bones;
}

bool CoverLuaShared()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.closeLuaInterface = &FakeCloseLuaInterface;
    luaCalls = 0;
    lastLuaInterface = nullptr;
    int lua = 0;
    sf::runtime::HandleCloseLuaInterface(state, &state, &lua);
    return luaCalls == 1 && lastLuaInterface == &lua;
}

bool CoverInputSystem()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.isButtonDown = &FakeIsButtonDown;
    buttonCalls = 0;
    lastButtonCode = 0;
    buttonReturn = false;
    const bool first = sf::runtime::HandleIsButtonDown(state, &state, 0x6b);
    buttonReturn = true;
    const bool second = sf::runtime::HandleIsButtonDown(state, &state, 0x6c);
    return !first && second && buttonCalls == 2 && lastButtonCode == 0x6c;
}

bool CoverFrameStageNotify()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.frameStageNotify = &FakeFrameStage;
    frameStageCalls = 0;
    lastStage = -1;
    sf::runtime::HandleFrameStageNotifyPassThrough(state, &state, 6);
    return frameStageCalls == 1 && lastStage == 6;
}

bool CoverPredictionRunCommand()
{
    sf::runtime::HookState state;
    state.config = sf::runtime::Config{};
    state.original.runCommand = &FakeRunCommand;
    runCommandCalls = 0;
    lastRunPlayer = nullptr;
    lastRunCommand = nullptr;
    lastRunMoveHelper = nullptr;
    int player = 0;
    int moveHelper = 0;
    gmod::CUserCmd command{};
    sf::runtime::HandleRunCommandPassThrough(state, &state, &player, &command, &moveHelper);
    return runCommandCalls == 1 && lastRunPlayer == &player &&
           lastRunCommand == &command && lastRunMoveHelper == &moveHelper;
}

struct HookCoverage
{
    sf::offsets::HookId id;
    const char* interfaceName;
    int slot;
    int parameters;
    sf::runtime::HookReturn result;
    const char* handlerName;
    bool (*run)();
};

inline constexpr HookCoverage kHookCoverage[] = {
    { sf::offsets::HookId::D3dSetRenderTarget, "D3D", 37, 2, sf::runtime::HookReturn::HResult, "CoverD3dSetRenderTarget", &CoverD3dSetRenderTarget },
    { sf::offsets::HookId::D3dStretchRect, "D3D", 34, 5, sf::runtime::HookReturn::HResult, "CoverD3dStretchRect", &CoverD3dStretchRect },
    { sf::offsets::HookId::D3dGetRenderTargetData, "D3D", 32, 2, sf::runtime::HookReturn::HResult, "CoverD3dGetRenderTargetData", &CoverD3dGetRenderTargetData },
    { sf::offsets::HookId::D3dPresent, "D3D", 17, 4, sf::runtime::HookReturn::HResult, "CoverD3dPresent", &CoverD3dPresent },
    { sf::offsets::HookId::D3dReset, "D3D", 16, 1, sf::runtime::HookReturn::HResult, "CoverD3dReset", &CoverD3dReset },
    { sf::offsets::HookId::MaterialSystem, "MaterialSystem", 20, 2, sf::runtime::HookReturn::Bool, "CoverMaterialSystem", &CoverMaterialSystem },
    { sf::offsets::HookId::ChlVr, "CHLClient", 26, 1, sf::runtime::HookReturn::Void, "CoverChlViewRender", &CoverChlViewRender },
    { sf::offsets::HookId::ChlWriteUsercmd, "CHLClient", 23, 4, sf::runtime::HookReturn::Bool, "CoverChlWriteUsercmd", &CoverChlWriteUsercmd },
    { sf::offsets::HookId::ChlHudUpdate, "CHLClient", 11, 1, sf::runtime::HookReturn::Void, "CoverChlHudUpdate", &CoverChlHudUpdate },
    { sf::offsets::HookId::ChlLevelInit, "CHLClient", 5, 1, sf::runtime::HookReturn::Void, "CoverChlLevelInit", &CoverChlLevelInit },
    { sf::offsets::HookId::ChlLevelShutdown, "CHLClient", 7, 0, sf::runtime::HookReturn::Void, "CoverChlLevelShutdown", &CoverChlLevelShutdown },
    { sf::offsets::HookId::ClientMode, "ClientMode", 21, 2, sf::runtime::HookReturn::Bool, "CoverCreateMove", &CoverCreateMove },
    { sf::offsets::HookId::Panel, "Panel", 41, 3, sf::runtime::HookReturn::Void, "CoverPanel", &CoverPanel },
    { sf::offsets::HookId::ViewRender, "ViewRender", 6, 3, sf::runtime::HookReturn::Void, "CoverViewRender", &CoverViewRender },
    { sf::offsets::HookId::ViewRenderPreHud, "ViewRender", 37, 1, sf::runtime::HookReturn::Void, "CoverViewRenderPreHud", &CoverViewRenderPreHud },
    { sf::offsets::HookId::ViewRenderDrawModel, "ViewRender", 40, 1, sf::runtime::HookReturn::Void, "CoverViewRenderDrawModel", &CoverViewRenderDrawModel },
    { sf::offsets::HookId::EngineServerViewAngles, "Engine", 20, 1, sf::runtime::HookReturn::Void, "CoverEngineSetViewAngles", &CoverEngineSetViewAngles },
    { sf::offsets::HookId::EngineGetViewAngles, "Engine", 19, 1, sf::runtime::HookReturn::Void, "CoverEngineGetViewAngles", &CoverEngineGetViewAngles },
    { sf::offsets::HookId::ModelRenderDrawModelExecute, "ModelRender", 20, 3, sf::runtime::HookReturn::Void, "CoverModelRenderDrawModelExecute", &CoverModelRenderDrawModelExecute },
    { sf::offsets::HookId::LuaShared, "LuaShared", 5, 1, sf::runtime::HookReturn::Void, "CoverLuaShared", &CoverLuaShared },
    { sf::offsets::HookId::InputSystem, "InputSystem", 15, 1, sf::runtime::HookReturn::Bool, "CoverInputSystem", &CoverInputSystem },
};
inline constexpr int kHookCoverageCount =
    static_cast<int>(sizeof(kHookCoverage) / sizeof(kHookCoverage[0]));
static_assert(kHookCoverageCount == sf::offsets::kHookCount,
              "per-hook coverage must match the hook table");

struct CoreHookCoverage
{
    sf::offsets::CoreHook id;
    const char* interfaceName;
    int slot;
    int parameters;
    sf::runtime::HookReturn result;
    const char* handlerName;
    bool (*run)();
};

inline constexpr CoreHookCoverage kCoreHookCoverage[] = {
    { sf::offsets::CoreHook::ClientModeCreateMove, "ClientMode", 21, 2, sf::runtime::HookReturn::Bool, "CoverCreateMove", &CoverCreateMove },
    { sf::offsets::CoreHook::FrameStageNotify, "CHLClient", 35, 1, sf::runtime::HookReturn::Void, "CoverFrameStageNotify", &CoverFrameStageNotify },
    { sf::offsets::CoreHook::PredictionRunCommand, "CPrediction", 17, 3, sf::runtime::HookReturn::Void, "CoverPredictionRunCommand", &CoverPredictionRunCommand },
};
inline constexpr int kCoreHookCoverageCount =
    static_cast<int>(sizeof(kCoreHookCoverage) / sizeof(kCoreHookCoverage[0]));
static_assert(kCoreHookCoverageCount == sf::offsets::kCoreHookCount,
              "core coverage must match the core hook table");

} // namespace

int main()
{
    using namespace sf;
    using namespace sf::runtime;

    Config config;
    Check(config.enabled && config.esp && config.bhop, "defaults are enabled");
    Check(!config.aimbot && !config.triggerbot && !config.nospread && !config.antiaim,
          "gameplay extensions default off");

    std::string error;
    Check(Config::ParseLine(config, "enabled=0", &error), "parse enabled");
    Check(!config.enabled, "enabled=0 applied");
    Check(Config::ParseLine(config, "; comment", &error), "comment accepted");
    Check(Config::ParseLine(config, "[skyfall]", &error), "section accepted");
    Check(Config::ParseLine(config, "bhop=off", &error), "parse bhop off");
    Check(!config.bhop, "bhop=off applied");
    Check(Config::ParseLine(config, "esp_team=true", &error), "parse esp_team");
    Check(config.espTeam, "esp_team=true applied");
    Check(Config::ParseLine(config, "unknown=7", &error), "unknown key ignored");
    Check(!Config::ParseLine(config, "esp=maybe", &error), "invalid bool rejected");
    Check(!error.empty(), "invalid bool explains itself");
    Check(Config::ParseLine(config, "aimbot=1", &error) && config.aimbot,
          "aimbot parsed");
    Check(Config::ParseLine(config, "aim_fov=22.5", &error) && config.aimFov == 22.5f,
          "aim_fov parsed");
    Check(Config::ParseLine(config, "ignore_dormant=0", &error) && !config.ignoreDormant,
          "ignore_dormant parsed");
    Check(Config::ParseLine(config, "target_priority=2", &error) &&
              config.targetPriority == 2,
          "target_priority parsed");
    Check(Config::ParseLine(config, "ignore_invisible=1", &error) &&
              config.ignoreInvisible,
          "ignore_invisible parsed");
    Check(Config::ParseLine(config, "ignore_god=1", &error) && config.ignoreGod,
          "ignore_god parsed");
    Check(Config::ParseLine(config, "stop_on_kill=1", &error) && config.stopOnKill,
          "stop_on_kill parsed");
    Check(Config::ParseLine(config, "trigger_delay=7", &error) && config.triggerDelay == 7,
          "trigger_delay parsed");
    Check(Config::ParseLine(config, "antiaim_yaw=4", &error) && config.antiaimYaw == 4,
          "antiaim_yaw parsed");
    Check(Config::ParseLine(config, "antiaim_body_offset=40", &error) &&
              config.antiaimBodyOffset == 40.f,
          "antiaim_body_offset parsed");
    Check(Config::ParseLine(config, "weapon_backend=SWCS", &error) &&
              config.weaponBackend == "SWCS",
          "weapon_backend parsed");
    Check(Config::ParseLine(config, "chams_custom=models/test/custom", &error) &&
              config.chamsCustomMaterial == "models/test/custom",
          "chams_custom parsed");
    Check(Config::ParseLine(config, "autostrafe=1", &error) && config.autostrafe,
          "autostrafe parsed");
    Check(Config::ParseLine(config, "backtrack=1", &error) && config.backtrack,
          "backtrack parsed");

    const std::string ini = config.ToIni();
    Check(ini.find("enabled=0") != std::string::npos, "ini contains enabled");
    Check(ini.find("bhop=0") != std::string::npos, "ini contains bhop");
    Check(ini.find("esp_team=1") != std::string::npos, "ini contains esp_team");
    Check(ini.find("aim_fov=22.5") != std::string::npos, "ini contains aim_fov");
    Check(ini.find("chams_custom=models/test/custom") != std::string::npos,
          "ini contains chams_custom");
    Check(ini.find("antiaim_body_offset=40") != std::string::npos,
          "ini contains antiaim_body_offset");
    Check(ini.find("ignore_dormant=0") != std::string::npos,
          "ini contains ignore_dormant");
    Check(ini.find("target_priority=2") != std::string::npos,
          "ini contains target_priority");
    Check(ini.find("ignore_invisible=1") != std::string::npos,
          "ini contains ignore_invisible");
    Check(ini.find("ignore_god=1") != std::string::npos,
          "ini contains ignore_god");
    Check(ini.find("stop_on_kill=1") != std::string::npos,
          "ini contains stop_on_kill");

    Check(offsets::kHookCount == 21, "21 recovered hook descriptors");
    Check(offsets::kCoreHookCount == 3, "3 runtime core hooks");
    Check(offsets::kRuntimeHookRowCount == 24, "24 descriptor rows");
    Check(offsets::kUniqueRuntimeHookSlots == 23, "23 unique runtime slots");
    Check(offsets::kSignatureCount == 6, "6 verified signature strings");
    Check(offsets::kLiveFeatureCount == 9, "9 live features");
    Check(offsets::kUnsupportedCount == 5, "5 unsupported items");
    Check(offsets::kHooks[11].id == offsets::HookId::ClientMode, "ClientMode row is present");
    Check(offsets::kHooks[11].slot == offsets::kClientModeCreateMoveSlot,
          "ClientMode slot is CreateMove");
    Check(offsets::kHooks[11].runtimeImplemented, "ClientMode is runtime implemented");
    Check(offsets::kCoreHooks[1].id == offsets::CoreHook::FrameStageNotify,
          "FrameStageNotify is core hook 1");
    Check(offsets::kCoreHooks[2].id == offsets::CoreHook::PredictionRunCommand,
          "RunCommand is core hook 2");

    std::set<int> hookIds;
    for (const auto& hook : offsets::kHooks)
        hookIds.insert(static_cast<int>(hook.id));
    Check(hookIds.size() == static_cast<std::size_t>(offsets::kHookCount),
          "hook ids are unique");
    for (int i = 0; i < offsets::kHookCount; ++i)
    {
        const auto& hook = offsets::kHooks[i];
        const auto& abi = kHookAbi[i];
        Check(abi.id == hook.id, "ABI row follows offsets row");
        Check(std::strcmp(abi.interfaceName, hook.interfaceName) == 0,
              "ABI interface matches offsets row");
        Check(abi.slot == hook.slot, "ABI slot matches offsets row");
        Check(std::strcmp(abi.name, hook.purpose) == 0, "ABI name matches purpose");
        Check(std::strcmp(abi.abi, hook.abi) == 0, "ABI signature matches offsets row");
        Check(std::strcmp(abi.feature, hook.feature) == 0, "ABI feature matches offsets row");
        Check(hook.abi != nullptr && hook.abi[0] != '\0', "hook has an ABI string");
        Check(hook.feature != nullptr && hook.feature[0] != '\0', "hook has a feature string");
        Check(hook.runtimeImplemented, "hook is installed by the runtime");
        if (hook.vtableOffset >= 0)
            Check(hook.vtableOffset == hook.slot * 8, "vtable offset matches slot");
    }
    for (int i = 0; i < offsets::kCoreHookCount; ++i)
    {
        Check(kCoreHookAbi[i].id == offsets::kCoreHooks[i].id, "core ABI id matches");
        Check(std::strcmp(kCoreHookAbi[i].interfaceName, offsets::kCoreHooks[i].interfaceName) == 0,
              "core ABI interface matches");
        Check(kCoreHookAbi[i].slot == offsets::kCoreHooks[i].slot, "core ABI slot matches");
        Check(std::strcmp(kCoreHookAbi[i].abi, offsets::kCoreHooks[i].abi) == 0,
              "core ABI signature matches");
        Check(std::strcmp(kCoreHookAbi[i].feature, offsets::kCoreHooks[i].feature) == 0,
              "core ABI feature matches");
        Check(offsets::kCoreHooks[i].runtimeImplemented, "core hook is runtime implemented");
    }
    for (const char* feature : offsets::kLiveFeatures)
        Check(feature != nullptr && feature[0] != '\0', "live feature has a name");
    for (const auto& item : offsets::kUnsupported)
    {
        Check(item.item != nullptr && item.item[0] != '\0', "unsupported item has a name");
        Check(item.reason != nullptr && item.reason[0] != '\0', "unsupported item has a reason");
    }

    Check(kHookAbi[0].parameters == 2 && kHookAbi[1].parameters == 5 &&
              kHookAbi[2].parameters == 2 && kHookAbi[3].parameters == 4 &&
              kHookAbi[4].parameters == 1,
          "D3D parameter counts match the recovered ABI");
    Check(kHookAbi[5].result == HookReturn::Bool, "OverrideConfig returns bool");
    Check(kHookAbi[7].result == HookReturn::Bool, "WriteUsercmd returns bool");
    Check(kHookAbi[11].result == HookReturn::Bool, "CreateMove returns bool");
    Check(kHookAbi[20].result == HookReturn::Bool, "IsButtonDown returns bool");

    // Every row, not just the D3D block: the handler calls above are also a
    // compile-time check of the argument types, while these pin the recovered
    // parameter count and return class for the whole table.
    const int expectedParameters[] = {
        2, 5, 2, 4, 1, 2, 1, 4, 1, 1, 0, 2, 3, 3, 1, 1, 1, 1, 3, 1, 1,
    };
    const HookReturn expectedReturns[] = {
        HookReturn::HResult, HookReturn::HResult, HookReturn::HResult,
        HookReturn::HResult, HookReturn::HResult, HookReturn::Bool,
        HookReturn::Void, HookReturn::Bool, HookReturn::Void,
        HookReturn::Void, HookReturn::Void, HookReturn::Bool,
        HookReturn::Void, HookReturn::Void, HookReturn::Void,
        HookReturn::Void, HookReturn::Void, HookReturn::Void,
        HookReturn::Void, HookReturn::Void, HookReturn::Bool,
    };
    for (int i = 0; i < kHookAbiCount; ++i)
    {
        Check(kHookAbi[i].parameters == expectedParameters[i],
              "hook ABI parameter count matches the recovered signature");
        Check(kHookAbi[i].result == expectedReturns[i],
              "hook ABI return class matches the recovered signature");
    }
    Check(kCoreHookAbi[0].parameters == 2 &&
              kCoreHookAbi[0].result == HookReturn::Bool &&
              kCoreHookAbi[1].parameters == 1 &&
              kCoreHookAbi[1].result == HookReturn::Void &&
              kCoreHookAbi[2].parameters == 3 &&
              kCoreHookAbi[2].result == HookReturn::Void,
          "core hook ABI shapes match CreateMove/FrameStageNotify/RunCommand");

    for (const auto& signature : offsets::kSignatures)
    {
        Check(signature.name != nullptr && signature.name[0] != '\0', "signature has a name");
        Check(signature.bytes != nullptr && signature.bytes[0] != '\0', "signature has bytes");
        Check(signature.moduleName != nullptr && signature.moduleName[0] != '\0',
              "signature has a module");
    }

    Check(sizeof(gmod::CUserCmd) == 316, "CUserCmd stays 316 bytes");
    Check(offsetof(gmod::CUserCmd, viewangles) == 0x08, "viewangles at 0x08");
    Check(offsetof(gmod::CUserCmd, forwardmove) == 0x14, "forwardmove at 0x14");
    Check(offsetof(gmod::CUserCmd, buttons) == 0x20, "buttons at 0x20");
    Check(offsetof(gmod::CUserCmd, random_seed) == 0x2c, "random_seed at 0x2c");

    Check(gmod::NormalizeYaw(370.f) == 10.f, "yaw wraps above 180");
    Check(gmod::NormalizeYaw(-190.f) == 170.f, "yaw wraps below -180");
    Check(gmod::NormalizeYaw(0.f) == 0.f, "yaw keeps zero");

    // ------------------------------------------------------- VMT install/restore
    static void* fakeVtable[4] = {
        reinterpret_cast<void*>(&FakeOriginal),
        reinterpret_cast<void*>(&FakeOriginal),
        reinterpret_cast<void*>(&FakeOriginal),
        reinterpret_cast<void*>(&FakeOriginal),
    };
    struct FakeObject { void** vtable; } object{ fakeVtable };
    void* original = nullptr;
    Check(InstallVmt(&object, 2, reinterpret_cast<void*>(&FakeDetour), &original),
          "InstallVmt succeeds on a readable table");
    Check(fakeVtable[2] == reinterpret_cast<void*>(&FakeDetour), "InstallVmt writes slot");
    Check(original == reinterpret_cast<void*>(&FakeOriginal), "InstallVmt preserves original");
    Check(UninstallVmt(&object, 2, reinterpret_cast<void*>(&FakeDetour), original),
          "UninstallVmt restores the slot");
    Check(fakeVtable[2] == original, "UninstallVmt leaves the original in place");
    Check(!UninstallVmt(&object, 2, reinterpret_cast<void*>(&FakeDetour), original),
          "UninstallVmt refuses a slot it does not own");

    // --------------------------------------------------------- hook pass-through
    HookState state;
    state.config = Config{};
    state.original.d3dReset = &FakeD3dReset;
    state.original.d3dPresent = &FakeD3dPresent;
    state.original.d3dGrtd = &FakeD3dGrtd;
    state.original.d3dStretchRect = &FakeD3dStretchRect;
    state.original.d3dSetRenderTarget = &FakeD3dSetRenderTarget;

    D3DPRESENT_PARAMETERS parameters{};
    parameters.BackBufferWidth = 1920;
    parameters.BackBufferHeight = 1080;
    resetReturn = 0x1111;
    Check(HandleD3dReset(state, &state, &parameters) == static_cast<HRESULT>(0x1111),
          "Reset preserves HRESULT");
    Check(resetCalls == 1 && resetParameters == &parameters, "Reset passes parameters");
    Check(state.resizeCount.load() == 1, "Reset updates resize counter");

    RECT sourceRect{};
    RECT destinationRect{};
    Check(HandleD3dPresent(state, &state, &sourceRect, &destinationRect,
                           reinterpret_cast<HWND>(0x44), nullptr) ==
              static_cast<HRESULT>(0x2222),
          "Present preserves HRESULT");
    Check(presentCalls == 1 && presentSource == &sourceRect &&
              presentDestination == &destinationRect &&
              presentWindow == reinterpret_cast<HWND>(0x44) && presentDirty == nullptr,
          "Present passes all five arguments");
    Check(state.presentCount.load() == 1, "Present updates frame counter");

    int surfaceA = 1;
    int surfaceB = 2;
    Check(HandleD3dGrtd(state, &state, &surfaceA, &surfaceB) == static_cast<HRESULT>(0x3333),
          "GetRenderTargetData preserves HRESULT");
    Check(grtdCalls == 1 && grtdSource == &surfaceA && grtdDestination == &surfaceB,
          "GetRenderTargetData passes both surfaces");

    state.backBuffer = &surfaceA;
    Check(HandleD3dStretchRect(state, &state, &surfaceA, &sourceRect, &surfaceB,
                               &destinationRect, 3) == static_cast<HRESULT>(0x4444),
          "StretchRect preserves HRESULT");
    Check(stretchCalls == 1 && stretchSource == &surfaceA &&
              stretchDestination == &surfaceB && stretchSourceRect == &sourceRect &&
              stretchDestinationRect == &destinationRect && stretchFilter == 3,
          "StretchRect passes all six arguments");
    Check(state.backBuffer == &surfaceB, "StretchRect follows the back-buffer copy");

    Check(HandleD3dSetRenderTarget(state, &state, 0, &surfaceA) ==
              static_cast<HRESULT>(0x5555),
          "SetRenderTarget preserves HRESULT");
    Check(targetCalls == 1 && targetIndex == 0 && targetSurface == &surfaceA,
          "SetRenderTarget passes index and surface");
    Check(state.renderTarget == &surfaceA, "SetRenderTarget tracks slot zero");

    state.original.overrideConfig = &FakeOverrideConfig;
    unsigned char materialConfig[0x180] = {};
    materialConfig[0x49] = 0;
    Check(HandleOverrideConfig(state, &state, materialConfig, true), "OverrideConfig returns bool");
    Check(configCalls == 1 && lastConfig == materialConfig && lastForce && lastFullbright == 0,
          "OverrideConfig passes through when fullbright is off");
    state.config.fullbright = true;
    Check(HandleOverrideConfig(state, &state, materialConfig, false), "fullbright path returns bool");
    Check(configCalls == 2 && lastConfig != materialConfig && !lastForce && lastFullbright == 1,
          "fullbright path copies and edits byte +0x49");

    state.original.viewRender = &FakeViewRender;
    HandleViewRender(state, &state, &surfaceA);
    Check(viewRenderCalls == 1 && lastView == &surfaceA, "View_Render passes its view");
    Check(state.renderViewCount.load() == 1, "View_Render updates counter");

    state.original.writeUsercmd = &FakeWriteUsercmd;
    Check(HandleWriteUsercmd(state, &state, &surfaceA, 4, 5, true), "WriteUsercmd preserves true");
    Check(writeCalls == 1 && lastWriteBuffer == &surfaceA && lastFrom == 4 && lastTo == 5 &&
              lastNewCommand, "WriteUsercmd passes all four arguments");
    writeReturn = false;
    Check(!HandleWriteUsercmd(state, &state, &surfaceA, 4, 5, false), "WriteUsercmd preserves false");
    Check(state.commandWrites.load() == 2, "WriteUsercmd updates counter");

    state.original.hudUpdate = &FakeHudUpdate;
    HandleHudUpdate(state, &state, true);
    Check(hudCalls == 1 && lastHudActive, "HudUpdate passes the active flag");

    state.original.levelInit = &FakeLevelInit;
    state.original.levelShutdown = &FakeLevelShutdown;

    Config antiaim;
    antiaim.antiaim = true;
    antiaim.antiaimPitch = 1;
    antiaim.antiaimYaw = 1;
    gmod::CUserCmd fakeCommand{};
    fakeCommand.command_number = 3;
    fakeCommand.viewangles = gmod::QAngle(0.f, 10.f, 0.f);
    CommandInputs fakeInputs = MakeInputs(fakeCommand);
    state.features.OnCreateMove(antiaim, fakeInputs);
    gmod::QAngle fake;
    Check(state.features.FakeViewAngles(fake), "anti-aim publishes a fake view");

    HandleLevelInit(state, &state, "gm_construct");
    Check(levelInitCalls == 1 && std::strcmp(lastLevel, "gm_construct") == 0,
          "LevelInit passes the level name");
    Check(!state.features.FakeViewAngles(fake), "LevelInit resets anti-aim state");

    state.features.OnCreateMove(antiaim, fakeInputs);
    HandleLevelShutdown(state, &state);
    Check(levelShutdownCalls == 1, "LevelShutdown reaches the original");
    Check(!state.features.FakeViewAngles(fake), "LevelShutdown resets anti-aim state");

    state.original.paintTraverse = &FakePaintTraverse;
    HandlePaintTraverse(state, &state, 9, true, false);
    Check(paintCalls == 1 && lastPanel == 9 && lastForceRepaint && !lastAllowForce,
          "PaintTraverse passes its three arguments");

    state.original.renderView = &FakeRenderView;
    HandleRenderView(state, &state, &surfaceA, 2, 3);
    Check(renderViewCalls == 1 && lastView == &surfaceA && lastClearFlags == 2 &&
              lastWhatToDraw == 3, "RenderView passes view and both flags");

    state.original.preHud = &FakePreHud;
    HandlePreHud(state, &state, &surfaceA);
    Check(preHudCalls == 1 && lastView == &surfaceA, "PreHUD passes its view");

    state.original.viewDrawModel = &FakeViewDrawModel;
    HandleViewDrawModel(state, &state, &surfaceB);
    Check(viewDrawCalls == 1 && lastView == &surfaceB, "DrawModel passes its renderable");

    state.original.setViewAngles = &FakeSetViewAngles;
    gmod::QAngle finiteView(10.f, 20.f, 30.f);
    HandleSetViewAngles(state, &state, &finiteView);
    Check(setViewCalls == 1 && lastSetView.yaw == 20.f, "SetViewAngles passes finite angles");
    gmod::QAngle badView(std::nanf(""), 0.f, 0.f);
    HandleSetViewAngles(state, &state, &badView);
    Check(setViewCalls == 1 && state.blockedViewAngles.load() == 1,
          "SetViewAngles blocks non-finite angles");

    state.original.getViewAngles = &FakeGetViewAngles;
    gmod::QAngle readView{};
    HandleGetViewAngles(state, &state, &readView);
    Check(getViewCalls == 1 && readView.yaw == 2.f, "GetViewAngles falls back to the original");

    {
        // Fail-safe live vfunc read: a syntactically valid slot must run, while
        // null and unreadable slots must read as "not dormant" instead of
        // dereferencing garbage. The fake entity is a vtable pointer only.
        struct FakeEntity { void** vtable; };
        void* dormantVtable[0x41] = {};
        dormantVtable[0x40] = reinterpret_cast<void*>(&FakeDormant);
        FakeEntity valid{ dormantVtable };
        Check(gmod::IsDormant(&valid), "IsDormant calls a validated vfunc slot");
        FakeEntity nullTable{ nullptr };
        Check(!gmod::IsDormant(&nullTable), "IsDormant rejects a null vtable");
        FakeEntity badTable{ reinterpret_cast<void**>(0x1) };
        Check(!gmod::IsDormant(&badTable), "IsDormant rejects an unreadable vtable");
        dormantVtable[0x40] = nullptr;
        Check(!gmod::IsDormant(&valid), "IsDormant rejects a null vfunc slot");
    }

    {
        // The netvar resolver walks engine-owned recv tables. A corrupt name
        // pointer must be skipped, not passed to strcmp.
        gmod::RawRecvProp prop{};
        prop.name = reinterpret_cast<const char*>(0x1);
        prop.offset = 8;
        gmod::RawRecvTable table{};
        table.props = &prop;
        table.nProps = 1;
        Check(gmod::FindProp(&table, "m_iHealth") == -1,
              "FindProp skips an unreadable netvar name");
        prop.name = "m_iHealth";
        Check(gmod::FindProp(&table, "m_iHealth") == 8,
              "FindProp still resolves a readable netvar name");
    }

    state.features.OnCreateMove(antiaim, fakeInputs);
    HandleGetViewAngles(state, &state, &readView);
    Check(getViewCalls == 1 && readView.yaw == gmod::NormalizeYaw(10.f + 180.f),
          "GetViewAngles returns the anti-aim fake view");

    state.features.OnLevelShutdown();
    Config assist;
    assist.aimbot = true;
    assist.aimAlways = true;
    assist.aimMode = 1;
    assist.aimFov = 90.f;
    gmod::CUserCmd assistCommand{};
    assistCommand.command_number = 60;
    CommandInputs assistInputs = MakeInputs(assistCommand);
    assistInputs.targets.push_back(MakeTarget(reinterpret_cast<void*>(9), 1, 100.f, 100.f, 3));
    state.features.OnCreateMove(assist, assistInputs);
    gmod::QAngle assistView{};
    HandleGetViewAngles(state, &state, &assistView);
    Check(getViewCalls == 1 && assistView.yaw > 0.5f && assistView.yaw < 45.f &&
              std::fabs(assistView.yaw - assistCommand.viewangles.yaw) < 0.01f,
          "GetViewAngles exposes the assist-mode aim angles");

    state.features.OnLevelShutdown();
    Config combined;
    combined.aimbot = true;
    combined.aimAlways = true;
    combined.aimMode = 1;
    combined.aimFov = 90.f;
    combined.antiaim = true;
    combined.antiaimPitch = 1;
    combined.antiaimYaw = 1;
    gmod::CUserCmd combinedCommand{};
    combinedCommand.command_number = 62;
    CommandInputs combinedInputs = MakeInputs(combinedCommand);
    combinedInputs.targets.push_back(
        MakeTarget(reinterpret_cast<void*>(11), 1, 100.f, 100.f, 3));
    state.features.OnCreateMove(combined, combinedInputs);
    gmod::QAngle combinedView{};
    HandleGetViewAngles(state, &state, &combinedView);
    gmod::QAngle assistOnly{};
    Check(state.features.AimViewAngles(assistOnly) && assistOnly.yaw > 0.5f &&
              assistOnly.yaw < 45.f,
          "assist still records its own aim view while anti-aim is active");
    Check(getViewCalls == 1 &&
              std::fabs(combinedView.yaw - combinedCommand.viewangles.yaw) < 0.01f &&
              std::fabs(combinedView.yaw - assistOnly.yaw) > 1.f,
          "anti-aim wins over assist in GetViewAngles");

    state.features.OnLevelShutdown();
    Config silent;
    silent.aimbot = true;
    silent.aimAlways = true;
    silent.aimMode = 0;
    silent.aimFov = 90.f;
    gmod::CUserCmd silentCommand{};
    silentCommand.command_number = 61;
    CommandInputs silentInputs = MakeInputs(silentCommand);
    silentInputs.targets.push_back(MakeTarget(reinterpret_cast<void*>(10), 1, 100.f, 100.f, 3));
    state.features.OnCreateMove(silent, silentInputs);
    gmod::QAngle silentView{};
    HandleGetViewAngles(state, &state, &silentView);
    Check(getViewCalls == 2 && std::fabs(silentView.yaw - 2.f) < 0.01f,
          "silent aim leaves the engine view alone");

    state.original.drawModelExecute = &FakeDrawModelExecute;
    HandleDrawModelExecute(state, &state, &surfaceA, &surfaceB, &surfaceA);
    Check(dmeCalls == 1 && lastModelState == &surfaceA && lastModelInfo == &surfaceB &&
              lastBones == &surfaceA, "DrawModelExecute passes state/info/bones");

    state.original.closeLuaInterface = &FakeCloseLuaInterface;
    HandleCloseLuaInterface(state, &state, &surfaceB);
    Check(luaCalls == 1 && lastLuaInterface == &surfaceB, "CloseLuaInterface passes the interface");

    state.original.isButtonDown = &FakeIsButtonDown;
    Check(!HandleIsButtonDown(state, &state, 0x6b), "IsButtonDown preserves false");
    buttonReturn = true;
    Check(HandleIsButtonDown(state, &state, 0x6b), "IsButtonDown preserves true");
    Check(buttonCalls == 2 && lastButtonCode == 0x6b, "IsButtonDown passes the code");

    state.original.createMove = &FakeCreateMove;
    createMoveReturn = true;
    Check(HandleCreateMovePassThrough(state, &state, 0.015f, &fakeCommand),
          "CreateMove pass-through preserves true");
    Check(createMoveCalls == 1 && lastSampleTime == 0.015f &&
              lastCreateMoveCommand == &fakeCommand, "CreateMove passes time and command");
    createMoveReturn = false;
    Check(!HandleCreateMovePassThrough(state, &state, 0.015f, &fakeCommand),
          "CreateMove pass-through preserves false");

    state.original.frameStageNotify = &FakeFrameStage;
    HandleFrameStageNotifyPassThrough(state, &state, 6);
    Check(frameStageCalls == 1 && lastStage == 6, "FrameStageNotify passes the stage");

    state.original.runCommand = &FakeRunCommand;
    HandleRunCommandPassThrough(state, &state, &surfaceA, &fakeCommand, &surfaceB);
    Check(runCommandCalls == 1 && lastRunPlayer == &surfaceA &&
              lastRunCommand == &fakeCommand && lastRunMoveHelper == &surfaceB,
          "RunCommand passes player/command/helper");

    // ------------------------------------------------ per-hook coverage rows
    struct HandlerCoverage
    {
        const char* name;
        const char* hookName;
        const char* interfaceName;
        int slot;
        sf::runtime::HookReturn result;
        int descriptorRows;
        bool ok;
    };
    std::map<bool (*)(), HandlerCoverage> handlers;
    const int failuresBeforeCoverage = failures;
    int descriptorPasses = 0;

    auto verifyDescriptor = [&](const char* rowKind, const char* hookName,
                                const char* interfaceName, int slot,
                                sf::runtime::HookReturn result,
                                const char* handlerName, bool (*run)(), bool shape) {
        const bool exercised = run != nullptr && run();
        const bool ok = shape && exercised;
        const std::string label = std::string(rowKind) + " " + hookName + " [" +
                                  InterfaceSlot(interfaceName, slot) + "] " +
                                  ResultLabel(result);
        CoverageCheck(ok, label);
        if (ok)
            ++descriptorPasses;

        auto found = handlers.find(run);
        if (found == handlers.end())
        {
            handlers.emplace(run, HandlerCoverage{handlerName, hookName, interfaceName,
                                                  slot, result, 1, ok});
        }
        else
        {
            ++found->second.descriptorRows;
            found->second.ok = found->second.ok && ok;
        }
    };

    for (int i = 0; i < offsets::kHookCount; ++i)
    {
        const auto& hook = offsets::kHooks[i];
        const auto& abi = kHookAbi[i];
        const auto& coverage = kHookCoverage[i];
        const bool shape = coverage.id == hook.id &&
                           std::strcmp(coverage.interfaceName, hook.interfaceName) == 0 &&
                           coverage.slot == hook.slot &&
                           coverage.id == abi.id &&
                           std::strcmp(coverage.interfaceName, abi.interfaceName) == 0 &&
                           coverage.slot == abi.slot &&
                           std::strcmp(abi.abi, hook.abi) == 0 &&
                           coverage.parameters == abi.parameters &&
                           coverage.result == abi.result;
        verifyDescriptor("hook", hook.purpose, hook.interfaceName, hook.slot,
                         coverage.result, coverage.handlerName, coverage.run, shape);
    }
    for (int i = 0; i < offsets::kCoreHookCount; ++i)
    {
        const auto& hook = offsets::kCoreHooks[i];
        const auto& abi = kCoreHookAbi[i];
        const auto& coverage = kCoreHookCoverage[i];
        const bool shape = coverage.id == hook.id &&
                           std::strcmp(coverage.interfaceName, hook.interfaceName) == 0 &&
                           coverage.slot == hook.slot &&
                           coverage.id == abi.id &&
                           std::strcmp(coverage.interfaceName, abi.interfaceName) == 0 &&
                           coverage.slot == abi.slot &&
                           std::strcmp(abi.abi, hook.abi) == 0 &&
                           coverage.parameters == abi.parameters &&
                           coverage.result == abi.result;
        verifyDescriptor("core", hook.purpose, hook.interfaceName, hook.slot,
                         coverage.result, coverage.handlerName, coverage.run, shape);
    }

    int handlerPasses = 0;
    for (const auto& entry : handlers)
    {
        const auto& handler = entry.second;
        std::string label = std::string("handler ") + handler.name + " (" +
                            handler.hookName + ") [" +
                            InterfaceSlot(handler.interfaceName, handler.slot) + "] " +
                            ResultLabel(handler.result);
        if (handler.descriptorRows > 1)
            label += " shared by " + std::to_string(handler.descriptorRows) +
                     " descriptor rows";
        CoverageCheck(handler.ok, label);
        if (handler.ok)
            ++handlerPasses;
    }

    const int descriptorRows = offsets::kHookCount + offsets::kCoreHookCount;
    const int coverageFailures = failures - failuresBeforeCoverage;
    const bool coverageOk = coverageFailures == 0 &&
                            descriptorPasses == descriptorRows &&
                            handlerPasses == static_cast<int>(handlers.size());
    std::cout << "HOOK COVERAGE " << (coverageOk ? "PASS" : "FAIL") << " ("
              << descriptorPasses << "/" << descriptorRows << " descriptor rows, "
              << handlerPasses << "/" << handlers.size() << " unique handlers, "
              << (coverageOk ? "Exclusions: none (0 hooks)." : std::to_string(coverageFailures) + " coverage failures;")
              << " void rows have no return value)\n";

    // ----------------------------------------------------------- feature gates
    {
        FeatureRuntime runtime;
        Config cfg;
        gmod::CUserCmd command{};
        command.command_number = 1;
        command.buttons = static_cast<int>(gmod::kInJump);
        CommandInputs inputs = MakeInputs(command);
        inputs.onGround = false;
        inputs.verticalSpeed = -100.f;
        cfg.bhop = true;
        runtime.OnCreateMove(cfg, inputs);
        Check((command.buttons & static_cast<int>(gmod::kInJump)) == 0,
              "bunnyhop clears jump while falling");
        Check(runtime.Stats().bhopTicks == 1, "bunnyhop handler ran");

        FeatureRuntime disabled;
        gmod::CUserCmd untouched{};
        untouched.command_number = 1;
        untouched.buttons = static_cast<int>(gmod::kInJump);
        CommandInputs off = MakeInputs(untouched);
        off.onGround = false;
        off.verticalSpeed = -100.f;
        Config noBhop;
        noBhop.bhop = false;
        disabled.OnCreateMove(noBhop, off);
        Check((untouched.buttons & static_cast<int>(gmod::kInJump)) != 0,
              "bunnyhop gate keeps disabled commands untouched");
    }

    {
        FeatureRuntime runtime;
        Config cfg;
        cfg.aimbot = true;
        cfg.aimAlways = true;
        cfg.aimFov = 45.f;
        cfg.aimSmooth = 0.f;
        gmod::CUserCmd command{};
        command.command_number = 12;
        CommandInputs inputs = MakeInputs(command);
        inputs.targets.push_back(MakeTarget(reinterpret_cast<void*>(1), 1, 100.f, 0.f, 3));
        runtime.OnCreateMove(cfg, inputs);
        Check(std::fabs(command.viewangles.yaw) < 0.01f,
              "aimbot selects a target on the view axis");
        Check(runtime.Stats().aimTicks == 1, "aimbot handler ran");

        FeatureRuntime teamRuntime;
        gmod::CUserCmd teamCommand{};
        teamCommand.command_number = 12;
        teamCommand.viewangles = gmod::QAngle(0.f, 45.f, 0.f);
        CommandInputs teamInputs = MakeInputs(teamCommand);
        teamInputs.localTeam = 2;
        teamInputs.targets.push_back(MakeTarget(reinterpret_cast<void*>(2), 1, 100.f, 0.f, 2));
        teamRuntime.OnCreateMove(cfg, teamInputs);
        Check(std::fabs(teamCommand.viewangles.yaw - 45.f) < 0.01f,
              "aimbot skips teammates by default");

        FeatureRuntime fovRuntime;
        gmod::CUserCmd fovCommand{};
        fovCommand.command_number = 12;
        fovCommand.viewangles = gmod::QAngle(0.f, 0.f, 0.f);
        CommandInputs fovInputs = MakeInputs(fovCommand);
        fovInputs.targets.push_back(MakeTarget(reinterpret_cast<void*>(3), 1, 100.f, 100.f, 3));
        Config narrow;
        narrow.aimbot = true;
        narrow.aimAlways = true;
        narrow.aimFov = 10.f;
        fovRuntime.OnCreateMove(narrow, fovInputs);
        Check(std::fabs(fovCommand.viewangles.yaw) < 0.01f,
              "aimbot rejects a target outside its FOV");
    }

    {
        FeatureRuntime runtime;
        Config cfg;
        cfg.triggerbot = true;
        cfg.triggerDelay = 0;
        cfg.triggerFov = 3.f;
        gmod::CUserCmd command{};
        command.command_number = 20;
        CommandInputs inputs = MakeInputs(command);
        inputs.targets.push_back(MakeTarget(reinterpret_cast<void*>(4), 1, 100.f, 0.f, 3));
        runtime.OnCreateMove(cfg, inputs);
        Check((command.buttons & static_cast<int>(gmod::kInAttack)) != 0,
              "triggerbot fires on a confirmed target");
        Check(runtime.Stats().triggerFires == 1, "triggerbot handler ran");
    }

    {
        static_assert(offsetof(gmod::Ray_t, delta) == 0x10, "Ray_t delta layout");
        static_assert(sizeof(gmod::Ray_t) == 0x50, "Ray_t size");
        gmod::TraceResult result;
        result.Clear();
        Check(result.Fraction() == 0.f && result.HitEntity() == nullptr &&
              result.HitGroup() == 0 && !result.StartSolid() && !result.AllSolid(),
              "trace result starts zeroed");
        gmod::DoubleTraceFilter filter(reinterpret_cast<void*>(1), reinterpret_cast<void*>(2));
        Check(!filter.ShouldHitEntity(reinterpret_cast<void*>(1), 0) &&
              !filter.ShouldHitEntity(reinterpret_cast<void*>(2), 0) &&
              filter.ShouldHitEntity(reinterpret_cast<void*>(3), 0),
              "double trace filter skips both configured entities");

        void* fakeVtable[5] = {};
        fakeVtable[4] = reinterpret_cast<void*>(&FakeEngineTrace);
        struct FakeEngine { void** vtable; } fakeEngine{ fakeVtable };
        g_traceEntity = reinterpret_cast<void*>(0x1234);
        gmod::TraceResult fakeResult;
        gmod::DoubleTraceFilter fakeFilter;
        Check(gmod::TraceRay(&fakeEngine, gmod::Ray_t{}, 0x46004003u, fakeFilter, fakeResult),
              "trace wrapper calls the recovered slot");
        Check(std::fabs(fakeResult.Fraction() - 0.5f) < 0.001f &&
              fakeResult.HitEntity() == g_traceEntity,
              "trace wrapper preserves the engine result layout");

        FeatureRuntime runtime;
        Config cfg;
        cfg.triggerbot = true;
        cfg.triggerDelay = 0;
        cfg.triggerFov = 3.f;
        gmod::CUserCmd command{};
        command.command_number = 22;
        CommandInputs inputs = MakeInputs(command);
        void* target = reinterpret_cast<void*>(9);
        inputs.targets.push_back(MakeTarget(target, 1, 100.f, 0.f, 3));
        inputs.traceRay = &FakeTraceRay;
        inputs.traceContext = reinterpret_cast<void*>(1);
        g_traceAvailable = true;
        g_traceStartSolid = false;
        g_traceEntity = target;
        runtime.OnCreateMove(cfg, inputs);
        Check((command.buttons & static_cast<int>(gmod::kInAttack)) != 0,
              "triggerbot fires when the world trace hits the target");

        FeatureRuntime blockedRuntime;
        gmod::CUserCmd blockedCommand{};
        blockedCommand.command_number = 23;
        CommandInputs blockedInputs = MakeInputs(blockedCommand);
        blockedInputs.targets.push_back(MakeTarget(target, 1, 100.f, 0.f, 3));
        blockedInputs.traceRay = &FakeTraceRay;
        blockedInputs.traceContext = reinterpret_cast<void*>(1);
        g_traceEntity = nullptr;
        blockedRuntime.OnCreateMove(cfg, blockedInputs);
        Check((blockedCommand.buttons & static_cast<int>(gmod::kInAttack)) == 0,
              "triggerbot refuses an angular hit when the trace hits the world");

        FeatureRuntime fallbackRuntime;
        gmod::CUserCmd fallbackCommand{};
        fallbackCommand.command_number = 24;
        CommandInputs fallbackInputs = MakeInputs(fallbackCommand);
        fallbackInputs.targets.push_back(MakeTarget(target, 1, 100.f, 0.f, 3));
        fallbackInputs.traceRay = &FakeTraceRay;
        fallbackInputs.traceContext = reinterpret_cast<void*>(1);
        g_traceAvailable = false;
        fallbackRuntime.OnCreateMove(cfg, fallbackInputs);
        Check((fallbackCommand.buttons & static_cast<int>(gmod::kInAttack)) != 0,
              "triggerbot falls back to the angular gate when trace is unavailable");

        FeatureRuntime solidRuntime;
        gmod::CUserCmd solidCommand{};
        solidCommand.command_number = 25;
        CommandInputs solidInputs = MakeInputs(solidCommand);
        solidInputs.targets.push_back(MakeTarget(target, 1, 100.f, 0.f, 3));
        solidInputs.traceRay = &FakeTraceRay;
        solidInputs.traceContext = reinterpret_cast<void*>(1);
        g_traceAvailable = true;
        g_traceStartSolid = true;
        g_traceEntity = target;
        solidRuntime.OnCreateMove(cfg, solidInputs);
        Check((solidCommand.buttons & static_cast<int>(gmod::kInAttack)) == 0,
              "triggerbot refuses a trace that starts solid");
    }

    {
        // Triggerbot must evaluate the real aim angles before anti-aim spoofs
        // the command; otherwise the fake view suppresses the shot.
        FeatureRuntime runtime;
        Config cfg;
        cfg.bhop = false;
        cfg.aimbot = true;
        cfg.aimAlways = true;
        cfg.aimFov = 45.f;
        cfg.triggerbot = true;
        cfg.triggerDelay = 0;
        cfg.triggerFov = 3.f;
        cfg.antiaim = true;
        cfg.antiaimPitch = 1;
        cfg.antiaimYaw = 1;
        gmod::CUserCmd command{};
        command.command_number = 21;
        CommandInputs inputs = MakeInputs(command);
        inputs.targets.push_back(MakeTarget(reinterpret_cast<void*>(8), 1, 100.f, 0.f, 3));
        runtime.OnCreateMove(cfg, inputs);
        Check(runtime.Stats().triggerFires == 1,
              "triggerbot sees the real aim before anti-aim spoofs it");
        Check(std::fabs(command.viewangles.pitch - 89.f) < 0.01f,
              "anti-aim still runs after the triggerbot");
    }

    {
        FeatureRuntime runtime;
        Config cfg;
        cfg.bhop = false;
        cfg.aimbot = true;
        cfg.aimAlways = true;
        cfg.aimFov = 90.f;
        cfg.aimMode = 0;
        cfg.targetPriority = 2;
        gmod::CUserCmd command{};
        command.command_number = 64;
        CommandInputs inputs = MakeInputs(command);
        TargetInfo healthy = MakeTarget(reinterpret_cast<void*>(14), 1, 100.f, 10.f, 3);
        TargetInfo weak = MakeTarget(reinterpret_cast<void*>(15), 2, 100.f, 20.f, 3);
        weak.health = 10;
        inputs.targets.push_back(healthy);
        inputs.targets.push_back(weak);
        runtime.OnCreateMove(cfg, inputs);
        const float expected = std::atan2(20.f, 100.f) * 180.f / 3.14159265f;
        Check(std::fabs(command.viewangles.yaw - expected) < 0.1f,
              "target_priority=2 selects the lowest-health target");
    }

    {
        FeatureRuntime runtime;
        Config cfg;
        cfg.bhop = false;
        cfg.aimbot = true;
        cfg.aimAlways = true;
        cfg.aimFov = 90.f;
        cfg.ignoreDormant = true;
        gmod::CUserCmd command{};
        command.command_number = 62;
        CommandInputs inputs = MakeInputs(command);
        TargetInfo dormant = MakeTarget(reinterpret_cast<void*>(13), 1, 100.f, 0.f, 3);
        dormant.dormant = true;
        inputs.targets.push_back(dormant);
        runtime.OnCreateMove(cfg, inputs);
        Check(runtime.Stats().aimTicks == 0, "ignore_dormant skips a dormant target");

        cfg.ignoreDormant = false;
        gmod::CUserCmd allowed{};
        allowed.command_number = 63;
        CommandInputs allowedInputs = MakeInputs(allowed);
        allowedInputs.targets.push_back(dormant);
        runtime.OnCreateMove(cfg, allowedInputs);
        Check(runtime.Stats().aimTicks == 1, "ignore_dormant=0 accepts a dormant target");
    }

    {
        FeatureRuntime runtime;
        Config cfg;
        cfg.bhop = false;
        cfg.aimbot = true;
        cfg.aimAlways = true;
        cfg.aimFov = 90.f;
        cfg.stopOnKill = true;
        gmod::CUserCmd command{};
        command.command_number = 67;
        CommandInputs inputs = MakeInputs(command);
        TargetInfo target = MakeTarget(reinterpret_cast<void*>(17), 1, 100.f, 0.f, 3);
        inputs.targets.push_back(target);
        runtime.OnCreateMove(cfg, inputs);
        Check(runtime.Stats().aimTicks == 1, "stop_on_kill aims at a live target");

        target.health = 0;
        gmod::CUserCmd killed{};
        killed.command_number = 68;
        CommandInputs killedInputs = MakeInputs(killed);
        killedInputs.targets.push_back(target);
        runtime.OnCreateMove(cfg, killedInputs);
        Check(runtime.Stats().aimTicks == 2, "stop_on_kill observes the killing tick");

        target.health = 100;
        gmod::CUserCmd held{};
        held.command_number = 69;
        CommandInputs heldInputs = MakeInputs(held);
        heldInputs.attackHeld = true;
        heldInputs.targets.push_back(target);
        runtime.OnCreateMove(cfg, heldInputs);
        Check(runtime.Stats().aimTicks == 2, "stop_on_kill holds while attack is held");

        gmod::CUserCmd released{};
        released.command_number = 70;
        CommandInputs releasedInputs = MakeInputs(released);
        releasedInputs.attackHeld = false;
        releasedInputs.targets.push_back(target);
        runtime.OnCreateMove(cfg, releasedInputs);
        Check(runtime.Stats().aimTicks == 3, "stop_on_kill resumes after release");
    }

    {
        // Target switches and target disappearance must not be mistaken for a
        // kill; only an observed zero-health target latches the hold.
        FeatureRuntime runtime;
        Config cfg;
        cfg.bhop = false;
        cfg.aimbot = true;
        cfg.aimAlways = true;
        cfg.aimFov = 90.f;
        cfg.stopOnKill = true;

        TargetInfo a = MakeTarget(reinterpret_cast<void*>(18), 1, 100.f, 0.f, 3);
        gmod::CUserCmd first{};
        first.command_number = 71;
        CommandInputs firstInputs = MakeInputs(first);
        firstInputs.targets.push_back(a);
        firstInputs.attackHeld = true;
        runtime.OnCreateMove(cfg, firstInputs);
        Check(runtime.Stats().aimTicks == 1, "stop_on_kill starts on a live target");

        TargetInfo b = MakeTarget(reinterpret_cast<void*>(19), 2, 0.f, 100.f, 3);
        gmod::CUserCmd switched{};
        switched.command_number = 72;
        CommandInputs switchedInputs = MakeInputs(switched);
        switchedInputs.targets.push_back(b);
        switchedInputs.attackHeld = true;
        runtime.OnCreateMove(cfg, switchedInputs);
        Check(runtime.Stats().aimTicks == 2, "a target switch does not latch stop-on-kill");

        gmod::CUserCmd stillHeld{};
        stillHeld.command_number = 73;
        CommandInputs stillHeldInputs = MakeInputs(stillHeld);
        stillHeldInputs.targets.push_back(b);
        stillHeldInputs.attackHeld = true;
        runtime.OnCreateMove(cfg, stillHeldInputs);
        Check(runtime.Stats().aimTicks == 3, "the switched target keeps aiming while held");

        b.health = 0;
        gmod::CUserCmd killed{};
        killed.command_number = 74;
        CommandInputs killedInputs = MakeInputs(killed);
        killedInputs.targets.push_back(b);
        killedInputs.attackHeld = true;
        runtime.OnCreateMove(cfg, killedInputs);
        Check(runtime.Stats().aimTicks == 4, "the observed zero-health tick is recorded");

        gmod::CUserCmd gone{};
        gone.command_number = 75;
        CommandInputs goneInputs = MakeInputs(gone);
        goneInputs.attackHeld = true;
        runtime.OnCreateMove(cfg, goneInputs);
        Check(runtime.Stats().aimTicks == 4, "a disappeared killed target stays stopped");

        gmod::CUserCmd released{};
        released.command_number = 76;
        CommandInputs releasedInputs = MakeInputs(released);
        releasedInputs.attackHeld = false;
        runtime.OnCreateMove(cfg, releasedInputs);
        Check(runtime.Stats().aimTicks == 4, "release clears the hold with no target");

        a.health = 100;
        gmod::CUserCmd resumed{};
        resumed.command_number = 77;
        CommandInputs resumedInputs = MakeInputs(resumed);
        resumedInputs.targets.push_back(a);
        resumedInputs.attackHeld = false;
        runtime.OnCreateMove(cfg, resumedInputs);
        Check(runtime.Stats().aimTicks == 5, "a fresh target is acquired after release");
    }

    {
        FeatureRuntime runtime;
        Config cfg;
        cfg.bhop = false;
        cfg.aimbot = true;
        cfg.aimAlways = true;
        cfg.aimFov = 90.f;
        cfg.ignoreInvisible = true;
        cfg.ignoreGod = true;
        gmod::CUserCmd command{};
        command.command_number = 65;
        CommandInputs inputs = MakeInputs(command);
        TargetInfo filtered = MakeTarget(reinterpret_cast<void*>(16), 1, 100.f, 0.f, 3);
        filtered.noDraw = true;
        filtered.godmode = true;
        inputs.targets.push_back(filtered);
        runtime.OnCreateMove(cfg, inputs);
        Check(runtime.Stats().aimTicks == 0,
              "ignore_invisible/ignore_god skip a filtered target");

        cfg.ignoreInvisible = false;
        cfg.ignoreGod = false;
        gmod::CUserCmd allowed{};
        allowed.command_number = 66;
        CommandInputs allowedInputs = MakeInputs(allowed);
        allowedInputs.targets.push_back(filtered);
        runtime.OnCreateMove(cfg, allowedInputs);
        Check(runtime.Stats().aimTicks == 1,
              "disabling the visibility/god filters accepts the target");
    }

    {
        FeatureRuntime runtime;
        Config cfg;
        cfg.bhop = false;
        cfg.aimbot = true;
        cfg.aimAlways = false;
        cfg.aimFov = 90.f;
        cfg.triggerbot = true;
        gmod::CUserCmd command{};
        command.command_number = 22;
        CommandInputs inputs = MakeInputs(command);
        inputs.attackHeld = false;
        inputs.targets.push_back(MakeTarget(reinterpret_cast<void*>(11), 1, 100.f, 100.f, 3));
        runtime.OnCreateMove(cfg, inputs);
        Check(runtime.Stats().aimTicks == 1,
              "triggerbot auto-fire enables aim acquisition without IN_ATTACK");
    }

    {
        FeatureRuntime runtime;
        Config cfg;
        cfg.antiaim = true;
        cfg.antiaimPitch = 1;
        cfg.antiaimYaw = 1;
        gmod::CUserCmd command{};
        command.command_number = 2;
        command.viewangles = gmod::QAngle(0.f, 10.f, 0.f);
        CommandInputs inputs = MakeInputs(command);
        runtime.OnCreateMove(cfg, inputs);
        Check(std::fabs(command.viewangles.pitch - 89.f) < 0.01f,
              "anti-aim pitch mode 1 writes +89");
        Check(std::fabs(command.viewangles.yaw - gmod::NormalizeYaw(190.f)) < 0.01f,
              "anti-aim yaw mode 1 writes a half turn");
        gmod::QAngle fakeViewResult;
        Check(runtime.FakeViewAngles(fakeViewResult) &&
                  fakeViewResult.yaw == command.viewangles.yaw,
              "anti-aim publishes the command angles as the fake view");
    }

    {
        FeatureRuntime runtime;
        Config cfg;
        cfg.autostrafe = true;
        cfg.autostrafeMode = 1;
        gmod::CUserCmd command{};
        command.command_number = 4;
        command.viewangles = gmod::QAngle(0.f, 0.f, 0.f);
        command.buttons = static_cast<int>(gmod::kInJump);
        CommandInputs inputs = MakeInputs(command);
        inputs.jumpHeld = true;
        inputs.localVelocity = gmod::Vector(100.f, 0.f, 0.f);
        runtime.OnCreateMove(cfg, inputs);
        Check(std::fabs(command.sidemove - 450.f) < 0.01f,
              "autostrafe applies a perpendicular side move");
        Check(std::fabs(command.forwardmove) < 0.01f,
              "autostrafe clears forward movement");
        Check(std::fabs(command.viewangles.yaw - 90.f) < 0.01f,
              "viewangle autostrafe puts the view ninety degrees off the velocity");
        Check(runtime.Stats().strafeTicks == 1, "autostrafe handler ran");
    }

    {
        FeatureRuntime runtime;
        Config cfg;
        cfg.autostrafe = true;
        cfg.autostrafeMode = 0;
        gmod::CUserCmd command{};
        command.command_number = 5;
        command.viewangles = gmod::QAngle(0.f, 33.f, 0.f);
        command.buttons = static_cast<int>(gmod::kInJump);
        command.forwardmove = 200.f;
        command.sidemove = -100.f;
        CommandInputs inputs = MakeInputs(command);
        inputs.localVelocity = gmod::Vector(100.f, 0.f, 0.f);
        runtime.OnCreateMove(cfg, inputs);
        Check(std::fabs(command.viewangles.yaw - 33.f) < 0.01f,
              "WASD autostrafe keeps the view yaw");
        Check(std::fabs(command.sidemove + 450.f) < 0.01f,
              "WASD autostrafe uses the side input sign");
        Check(std::fabs(command.forwardmove - 200.f) < 0.01f,
              "WASD autostrafe preserves forward movement");
        Check(runtime.Stats().strafeTicks == 1, "WASD autostrafe handler ran");
    }

    {
        gmod::Vector punch(2.f, -3.f, 0.5f);
        gmod::Vector last{};
        bool hasLast = false;
        Check(ScalePunchOnce(punch, 0.5f, last, hasLast),
              "punch scale applies to a fresh server value");
        Check(std::fabs(punch.x - 1.f) < 1e-6f && std::fabs(punch.y + 1.5f) < 1e-6f &&
                  std::fabs(punch.z - 0.25f) < 1e-6f,
              "punch scale multiplies every axis");
        Check(!ScalePunchOnce(punch, 0.5f, last, hasLast),
              "punch scale does not compound on the next frame");
        punch = gmod::Vector(4.f, 0.f, 0.f);
        Check(ScalePunchOnce(punch, 0.5f, last, hasLast),
              "punch scale applies when the server writes a new value");
        Check(std::fabs(punch.x - 2.f) < 1e-6f,
              "the new server punch is scaled from its own value");
        gmod::Vector unscaled(4.f, 2.f, 0.f);
        Check(!ScalePunchOnce(unscaled, 1.f, last, hasLast),
              "punch scale 1 leaves the value alone");
    }

    {
        FeatureRuntime runtime;
        Config cfg;
        cfg.nospread = true;
        cfg.weaponBackend = "Generic";
        cfg.weaponSpread = 0.02f;
        cfg.weaponInaccuracy = 0.05f;
        gmod::CUserCmd command{};
        command.command_number = 30;
        command.buttons = static_cast<int>(gmod::kInAttack);
        CommandInputs inputs = MakeInputs(command);
        runtime.OnCreateMove(cfg, inputs);
        Check(runtime.Stats().nospreadShots == 1,
              "nospread runs the reconstructed Generic backend");
    }

    {
        FeatureRuntime runtime;
        Config cfg;
        cfg.backtrack = true;
        gmod::CUserCmd command{};
        command.command_number = 7;
        CommandInputs inputs = MakeInputs(command);
        inputs.simTime = 10.0;
        inputs.targets.push_back(MakeTarget(reinterpret_cast<void*>(5), 1, 100.f, 0.f, 3));
        runtime.OnCreateMove(cfg, inputs);
        Check(runtime.Stats().backtrackRecords == 1, "backtrack records a target");
        inputs.command->command_number = 8;
        inputs.simTime = 10.1;
        inputs.targets[0].simTime = 10.1;
        inputs.targets[0].origin = gmod::Vector(110.f, 0.f, 0.f);
        inputs.targets[0].eye = gmod::Vector(110.f, 0.f, 0.f);
        runtime.OnCreateMove(cfg, inputs);
        Check(runtime.Stats().backtrackRecords == 2, "backtrack stores a changed sample");
    }

    {
        // Each feature's off/gate path must leave the command untouched.
        FeatureRuntime runtime;
        Config cfg;
        cfg.bhop = false;
        cfg.aimbot = true;
        cfg.aimAlways = false;
        cfg.aimFov = 45.f;
        gmod::CUserCmd command{};
        command.command_number = 40;
        command.viewangles = gmod::QAngle(0.f, 10.f, 0.f);
        CommandInputs inputs = MakeInputs(command);
        inputs.attackHeld = false;
        inputs.targets.push_back(MakeTarget(reinterpret_cast<void*>(6), 1, 100.f, 0.f, 3));
        runtime.OnCreateMove(cfg, inputs);
        Check(std::fabs(command.viewangles.yaw - 10.f) < 0.01f &&
                  runtime.Stats().aimTicks == 0,
              "aimbot waits for IN_ATTACK when aim_always is off");

        FeatureRuntime trigger;
        Config triggerCfg;
        triggerCfg.bhop = false;
        triggerCfg.triggerbot = true;
        gmod::CUserCmd triggerCommand{};
        triggerCommand.command_number = 41;
        CommandInputs triggerInputs = MakeInputs(triggerCommand);
        trigger.OnCreateMove(triggerCfg, triggerInputs);
        Check((triggerCommand.buttons & static_cast<int>(gmod::kInAttack)) == 0 &&
                  trigger.Stats().triggerFires == 0,
              "triggerbot does not fire without a confirmed target");

        FeatureRuntime spread;
        Config spreadCfg;
        spreadCfg.bhop = false;
        spreadCfg.nospread = false;
        gmod::CUserCmd spreadCommand{};
        spreadCommand.command_number = 42;
        spreadCommand.viewangles = gmod::QAngle(0.f, 12.f, 0.f);
        spreadCommand.buttons = static_cast<int>(gmod::kInAttack);
        CommandInputs spreadInputs = MakeInputs(spreadCommand);
        spread.OnCreateMove(spreadCfg, spreadInputs);
        Check(std::fabs(spreadCommand.viewangles.yaw - 12.f) < 0.01f &&
                  spread.Stats().nospreadShots == 0,
              "nospread gate leaves the command alone");

        FeatureRuntime strafe;
        Config strafeCfg;
        strafeCfg.bhop = false;
        strafeCfg.autostrafe = true;
        strafeCfg.autostrafeMode = 1;
        gmod::CUserCmd strafeCommand{};
        strafeCommand.command_number = 43;
        strafeCommand.buttons = static_cast<int>(gmod::kInJump);
        CommandInputs strafeInputs = MakeInputs(strafeCommand);
        strafeInputs.onGround = false;
        strafeInputs.moveType = 2;
        strafeInputs.jumpHeld = true;
        strafeInputs.localVelocity = gmod::Vector(100.f, 0.f, 0.f);
        strafe.OnCreateMove(strafeCfg, strafeInputs);
        Check(std::fabs(strafeCommand.sidemove) < 0.01f &&
                  strafe.Stats().strafeTicks == 0,
              "autostrafe class/move-type gate rejects the command");

        FeatureRuntime anti;
        Config antiCfg;
        antiCfg.bhop = false;
        antiCfg.antiaim = false;
        gmod::CUserCmd antiCommand{};
        antiCommand.command_number = 44;
        antiCommand.viewangles = gmod::QAngle(0.f, 15.f, 0.f);
        CommandInputs antiInputs = MakeInputs(antiCommand);
        anti.OnCreateMove(antiCfg, antiInputs);
        gmod::QAngle antiView;
        Check(std::fabs(antiCommand.viewangles.yaw - 15.f) < 0.01f &&
                  !anti.FakeViewAngles(antiView),
              "anti-aim gate leaves the command and fake view alone");

        FeatureRuntime backtrack;
        Config backtrackCfg;
        backtrackCfg.bhop = false;
        backtrackCfg.backtrack = false;
        gmod::CUserCmd backtrackCommand{};
        backtrackCommand.command_number = 45;
        CommandInputs backtrackInputs = MakeInputs(backtrackCommand);
        backtrackInputs.targets.push_back(
            MakeTarget(reinterpret_cast<void*>(7), 1, 100.f, 0.f, 3));
        backtrack.OnCreateMove(backtrackCfg, backtrackInputs);
        Check(backtrack.Stats().backtrackRecords == 0,
              "backtrack gate records nothing when disabled");
    }

    {
        // The second command sees the target at (100, 0), but the recorded
        // earlier position is (100, 100). A working backtrack aim must still
        // point at the historical position (yaw 45), not the live one (yaw 0).
        FeatureRuntime runtime;
        Config cfg;
        cfg.bhop = false;
        cfg.backtrack = true;
        cfg.backtrackTime = 0.2f;
        cfg.aimbot = true;
        cfg.aimAlways = true;
        cfg.aimFov = 90.f;
        cfg.aimMode = 0;

        gmod::CUserCmd first{};
        first.command_number = 50;
        CommandInputs firstInputs = MakeInputs(first);
        firstInputs.simTime = 10.0;
        firstInputs.targets.push_back(
            MakeTarget(reinterpret_cast<void*>(12), 1, 100.f, 100.f, 3));
        runtime.OnCreateMove(cfg, firstInputs);

        gmod::CUserCmd second{};
        second.command_number = 51;
        CommandInputs secondInputs = MakeInputs(second);
        secondInputs.simTime = 10.1;
        secondInputs.targets.push_back(
            MakeTarget(reinterpret_cast<void*>(12), 1, 100.f, 0.f, 3));
        runtime.OnCreateMove(cfg, secondInputs);
        Check(std::fabs(second.viewangles.yaw - 45.f) < 0.1f,
              "backtrack aim uses the recorded earlier target position");
    }

    {
        FeatureRuntime runtime;
        Config cfg;
        cfg.bhop = false;
        cfg.antiaim = true;
        cfg.antiaimYaw = 7;
        cfg.antiaimBodyOffset = 40.f;
        gmod::CUserCmd command{};
        command.command_number = 60;
        command.viewangles = gmod::QAngle(0.f, 0.f, 0.f);
        CommandInputs inputs = MakeInputs(command);
        runtime.OnCreateMove(cfg, inputs);
        // command 60 is in the positive half of the 12-tick alternator:
        // 180 + 60 + (40 * 0.5) = 260, normalized to -100.
        Check(std::fabs(command.viewangles.yaw - gmod::NormalizeYaw(260.f)) < 0.01f,
              "anti-aim body mode 7 adds the clock and half offset");
    }

    {
        FeatureRuntime runtime;
        Config cfg;
        cfg.bhop = false;
        cfg.antiaim = true;
        cfg.antiaimYaw = 3;
        cfg.antiaimAmplitude = 99.f;
        gmod::CUserCmd command{};
        command.command_number = 46;
        command.viewangles = gmod::QAngle(0.f, 10.f, 0.f);
        CommandInputs inputs = MakeInputs(command);
        runtime.OnCreateMove(cfg, inputs);
        Check(std::fabs(command.viewangles.yaw - 28.f) < 0.01f,
              "anti-aim mode 3 clamps amplitude to 18 and walks the base yaw");
        command.command_number = 47;
        command.viewangles = gmod::QAngle(0.f, 10.f, 0.f);
        inputs.command = &command;
        runtime.OnCreateMove(cfg, inputs);
        Check(std::fabs(command.viewangles.yaw - 46.f) < 0.01f,
              "anti-aim mode 3 keeps its own base yaw across commands");
    }

    std::cout << "RUNTIME SELFTEST " << (failures == 0 ? "PASS" : "FAIL")
              << " (" << failures << " failures)\n";
    return failures == 0 ? 0 : 1;
}
