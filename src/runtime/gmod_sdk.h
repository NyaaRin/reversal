#pragma once
// Minimal GMod x64 ABI for the Skyfall runtime.
//
// This is deliberately self-contained. The reconstructed DLL should not need
// the VenomHook project to build, and it should not need a full Source SDK to
// install the recovered VMT hook table. Only the layouts and virtual slots the
// runtime actually calls are defined here, with the evidence noted next to
// each one.
//
// The CUserCmd layout is the live 316-byte x64 command (command_number 0x00,
// tick_count 0x04, viewangles 0x08, forward/side/up 0x14/0x18/0x1c, buttons
// 0x20, random_seed 0x2c). It is the same layout the movement reconstruction in
// src/features/movement/cmd.h documents.

#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <Windows.h>

#include <cmath>
#include <cstdint>
#include <cstring>

namespace gmod {

constexpr std::uint32_t kInAttack = 1u << 0;
constexpr std::uint32_t kInJump = 1u << 1;
constexpr std::uint32_t kInDuck = 1u << 2;
constexpr std::uint32_t kInForward = 1u << 3;
constexpr std::uint32_t kInBack = 1u << 4;
constexpr std::uint32_t kInMoveLeft = 1u << 9;
constexpr std::uint32_t kInMoveRight = 1u << 10;

constexpr std::uint32_t kFlagOnGround = 1u << 0;
constexpr std::uint32_t kFlagDucking = 1u << 1;
constexpr std::uint32_t kFlagClient = 1u << 7;
constexpr std::uint32_t kFlagFakeClient = 1u << 8;
constexpr std::uint32_t kFlagNpc = 1u << 9;

struct Vector
{
    float x = 0.f;
    float y = 0.f;
    float z = 0.f;

    Vector() = default;
    Vector(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}

    Vector operator+(const Vector& other) const { return { x + other.x, y + other.y, z + other.z }; }
    Vector operator-(const Vector& other) const { return { x - other.x, y - other.y, z - other.z }; }
    Vector operator*(float scale) const { return { x * scale, y * scale, z * scale }; }

    float Dot(const Vector& other) const { return x * other.x + y * other.y + z * other.z; }
    float Length() const { return std::sqrt(x * x + y * y + z * z); }
    float Length2D() const { return std::sqrt(x * x + y * y); }
};

struct QAngle
{
    float pitch = 0.f;
    float yaw = 0.f;
    float roll = 0.f;

    QAngle() = default;
    QAngle(float p, float y, float r = 0.f) : pitch(p), yaw(y), roll(r) {}
};

struct CUserCmd
{
    int command_number;       // 0x00
    int tick_count;           // 0x04
    QAngle viewangles;        // 0x08
    float forwardmove;        // 0x14
    float sidemove;           // 0x18
    float upmove;             // 0x1c
    int buttons;              // 0x20
    int weaponselect;         // 0x24
    int weaponsubtype;        // 0x28
    int random_seed;          // 0x2c
    short mousedx;            // 0x30
    short mousedy;            // 0x32
    bool hasbeenpredicted;    // 0x34
    unsigned char impulse;    // 0x35
    bool is_typing;           // 0x36
    unsigned char pad_0001[6];
    signed char scroll_wheel_speed;
    bool context_menu;
    Vector context_normal;
    unsigned char pad_0002[240];
};
static_assert(sizeof(CUserCmd) == 316, "GMod x64 CUserCmd must stay 316 bytes");
static_assert(offsetof(CUserCmd, viewangles) == 0x08, "CUserCmd viewangles moved");
static_assert(offsetof(CUserCmd, forwardmove) == 0x14, "CUserCmd forwardmove moved");
static_assert(offsetof(CUserCmd, buttons) == 0x20, "CUserCmd buttons moved");
static_assert(offsetof(CUserCmd, random_seed) == 0x2c, "CUserCmd random_seed moved");

struct PlayerInfo
{
    char name[128];
    int userID;
    char guid[33];
    unsigned int friendsid;
    char friendsname[128];
    bool fakeplayer;
    bool ishltv;
    unsigned int customfiles[4];
    unsigned char filesdownloaded;
};

// ---------------------------------------------------------------- memory

inline bool Readable(const void* pointer, std::size_t size)
{
    if (pointer == nullptr || size == 0)
        return false;
    MEMORY_BASIC_INFORMATION info{};
    if (VirtualQuery(pointer, &info, sizeof(info)) == 0)
        return false;
    if (info.State != MEM_COMMIT || (info.Protect & (PAGE_NOACCESS | PAGE_GUARD)) != 0)
        return false;
    const std::uintptr_t start = reinterpret_cast<std::uintptr_t>(pointer);
    const std::uintptr_t end = reinterpret_cast<std::uintptr_t>(info.BaseAddress) + info.RegionSize;
    if (end < start)
        return false;
    return size <= end - start;
}

inline bool Executable(const void* pointer)
{
    if (pointer == nullptr)
        return false;
    MEMORY_BASIC_INFORMATION info{};
    if (VirtualQuery(pointer, &info, sizeof(info)) == 0)
        return false;
    if (info.State != MEM_COMMIT)
        return false;
    const DWORD protect = info.Protect & 0xff;
    return protect == PAGE_EXECUTE || protect == PAGE_EXECUTE_READ ||
           protect == PAGE_EXECUTE_READWRITE || protect == PAGE_EXECUTE_WRITECOPY;
}

template <typename T>
inline bool ReadField(const void* base, int offset, T& out)
{
    if (offset < 0 || base == nullptr)
        return false;
    const void* address = static_cast<const char*>(base) + offset;
    if (!Readable(address, sizeof(T)))
        return false;
    std::memcpy(&out, address, sizeof(T));
    return true;
}

// ---------------------------------------------------------------- vtables

template <typename T>
inline T* GetVMT(void* instance, int index, std::uintptr_t displacement)
{
    if (instance == nullptr || index < 0)
        return nullptr;

    auto vtable = *reinterpret_cast<std::uintptr_t**>(instance);
    if (!Readable(vtable + index, sizeof(std::uintptr_t)))
        return nullptr;

    const std::uintptr_t instruction = vtable[index] + displacement;
    if (!Readable(reinterpret_cast<const void*>(instruction + 3), sizeof(std::int32_t)))
        return nullptr;

    std::int32_t relative = 0;
    std::memcpy(&relative, reinterpret_cast<const void*>(instruction + 3), sizeof(relative));
    const std::uintptr_t real = instruction + 7 + static_cast<std::intptr_t>(relative);
    if (!Readable(reinterpret_cast<const void*>(real), sizeof(std::uintptr_t)))
        return nullptr;

    return *reinterpret_cast<T**>(real);
}

template <typename T, typename... Args>
inline T CallVirtual(void* instance, int index, Args... args)
{
    using Fn = T(__fastcall*)(void*, Args...);
    auto vtable = *reinterpret_cast<void***>(instance);
    return reinterpret_cast<Fn>(vtable[index])(instance, args...);
}

template <typename Fn>
inline Fn GetVirtual(void* instance, int index)
{
    auto vtable = *reinterpret_cast<void***>(instance);
    return reinterpret_cast<Fn>(vtable[index]);
}

// ---------------------------------------------------------------- interfaces

typedef void* (*CreateInterfaceFn)(const char* name, int* returnCode);

inline void* GetInterface(const char* moduleName, const char* interfaceName)
{
    HMODULE module = GetModuleHandleA(moduleName);
    if (module == nullptr)
        return nullptr;
    auto createInterface = reinterpret_cast<CreateInterfaceFn>(GetProcAddress(module, "CreateInterface"));
    return createInterface != nullptr ? createInterface(interfaceName, nullptr) : nullptr;
}

// The engine, entity list, and debug overlay are called by vtable slot because
// the headers for them are large and version-fragile. These are the slots the
// recovered code and the live GMod x64 SDK agree on.
using GetLocalPlayerFn = int(__fastcall*)(void*);
using GetScreenSizeFn = void(__fastcall*)(void*, int&, int&);
using ClientCmdFn = void(__fastcall*)(void*, const char*);
using GetPlayerInfoFn = bool(__fastcall*)(void*, int, PlayerInfo*);

using GetClientEntityFn = void*(__fastcall*)(void*, int);
using GetHighestEntityIndexFn = int(__fastcall*)(void*);

using AddBoxOverlayFn = void*(__fastcall*)(void*, const Vector&, const Vector&, const Vector&,
                                           const QAngle&, int, int, int, int, float);
using AddTextOverlayFn = void*(__fastcall*)(void*, const Vector&, int, float, const char*);

// C_BasePlayer virtual slots used here. The first four are stable Source
// indices; GetAbsOrigin is slot 9 in the live x64 client.
enum : int
{
    kEntityGetCollideable = 3,
    kEntityGetAbsOrigin = 9,
    kEntityGetAbsAngles = 10,
};

// CCollisionProperty slots 3 and 4 return the OBB bounds.
enum : int
{
    kCollideOBBMins = 3,
    kCollideOBBMaxs = 4,
};

inline Vector EntityOrigin(void* entity)
{
    return CallVirtual<Vector&>(entity, kEntityGetAbsOrigin);
}

// IClientEntity::IsDormant is vfunc 0x40 in the live x64 client; the aim gate
// reconstruction (0x1800c5030) reads the same slot. Validate the entity, the
// vtable slot and the code page before the indirect call; a stale or partially
// constructed entity must read as "not dormant" rather than crash the client.
__declspec(noinline) inline bool IsDormant(void* entity)
{
    if (entity == nullptr || !Readable(entity, sizeof(void*)))
        return false;
    void** vtable = *reinterpret_cast<void***>(entity);
    if (vtable == nullptr || !Readable(vtable + 0x40, sizeof(void*)))
        return false;
    void* slot = vtable[0x40];
    if (!Executable(slot))
        return false;
    using Fn = bool(__fastcall*)(void*);
#ifdef _MSC_VER
    __try
    {
        return reinterpret_cast<Fn>(slot)(entity);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
#else
    return reinterpret_cast<Fn>(slot)(entity);
#endif
}

inline QAngle EntityAngles(void* entity)
{
    return CallVirtual<QAngle&>(entity, kEntityGetAbsAngles);
}

inline bool EntityBounds(void* entity, Vector& mins, Vector& maxs)
{
    void* collideable = CallVirtual<void*>(entity, kEntityGetCollideable);
    if (collideable == nullptr)
        return false;
    mins = CallVirtual<Vector&>(collideable, kCollideOBBMins);
    maxs = CallVirtual<Vector&>(collideable, kCollideOBBMaxs);
    return maxs.z > mins.z;
}

// ---------------------------------------------------------------- netvars

struct RawRecvProp
{
    const char* name;
    int recvType;
    int flags;
    int stringBufferSize;
    bool insideArray;
    char pad0[3];
    const void* extraData;
    RawRecvProp* arrayProp;
    void* arrayLengthProxy;
    void* proxyFn;
    void* dataTableProxyFn;
    struct RawRecvTable* dataTable;
    int offset;
    int elementStride;
    int nElements;
    int pad1;
    const char* parentArrayPropName;
};
static_assert(offsetof(RawRecvProp, flags) == 0x0c, "RawRecvProp flags layout drifted");
static_assert(offsetof(RawRecvProp, insideArray) == 0x14, "RawRecvProp insideArray layout drifted");
static_assert(offsetof(RawRecvProp, extraData) == 0x18, "RawRecvProp extraData layout drifted");
static_assert(offsetof(RawRecvProp, arrayProp) == 0x20, "RawRecvProp arrayProp layout drifted");
static_assert(offsetof(RawRecvProp, proxyFn) == 0x30, "RawRecvProp proxyFn layout drifted");
static_assert(offsetof(RawRecvProp, dataTable) == 0x40, "RawRecvProp dataTable layout drifted");
static_assert(offsetof(RawRecvProp, offset) == 0x48, "RawRecvProp offset layout drifted");
static_assert(offsetof(RawRecvProp, parentArrayPropName) == 0x58,
              "RawRecvProp parentArrayPropName layout drifted");
static_assert(sizeof(RawRecvProp) == 0x60, "RawRecvProp size drifted");

struct RawRecvTable
{
    RawRecvProp* props;
    int nProps;
    int pad0;
    void* decoder;
    const char* name;
    bool initialized;
    bool inMainList;
};

struct RawClientClass
{
    void* createFn;
    void* createEventFn;
    const char* networkName;
    RawRecvTable* recvTable;
    RawClientClass* next;
    int classId;
};

inline bool PropNameEquals(const char* name, const char* target)
{
    if (name == nullptr || target == nullptr || !Readable(name, 128))
        return false;
    return std::strncmp(name, target, 127) == 0;
}

inline int FindPropRec(RawRecvTable* table, const char* target, int baseOffset, int depth,
                       RawRecvTable** seen, int seenCount)
{
    if (table == nullptr || target == nullptr || depth > 10 || seenCount >= 24)
        return -1;
    if (!Readable(table, sizeof(RawRecvTable)))
        return -1;
    for (int i = 0; i < seenCount; ++i)
    {
        if (seen[i] == table)
            return -1;
    }
    seen[seenCount++] = table;

    if (table->props == nullptr || table->nProps <= 0 || table->nProps > 4096)
        return -1;
    if (!Readable(table->props, static_cast<std::size_t>(table->nProps) * sizeof(RawRecvProp)))
        return -1;

    for (int i = 0; i < table->nProps; ++i)
    {
        const RawRecvProp& prop = table->props[i];
        if (PropNameEquals(prop.name, target) && prop.offset > 0)
            return baseOffset + prop.offset;
        if (prop.dataTable != nullptr && prop.offset >= 0)
        {
            const int nested = FindPropRec(prop.dataTable, target, baseOffset + prop.offset,
                                           depth + 1, seen, seenCount);
            if (nested > 0)
                return nested;
        }
    }
    return -1;
}

inline int FindProp(RawRecvTable* table, const char* target)
{
    RawRecvTable* seen[24] = {};
    return FindPropRec(table, target, 0, 0, seen, 0);
}

struct Netvars
{
    int flags = -1;
    int team = -1;
    int lifeState = -1;
    int health = -1;
    int takedamage = -1;
    int velocity = -1;
    int viewOffset = -1;
    int armor = -1;
    int waterLevel = -1;
    int punchAngle = -1;
    bool resolved = false;
    const char* detail = "not resolved";

    bool Resolve(void* classList)
    {
        auto* first = reinterpret_cast<RawClientClass*>(classList);
        int checked = 0;
        for (RawClientClass* cls = first; cls != nullptr && checked < 512; cls = cls->next, ++checked)
        {
            if (!Readable(cls, sizeof(RawClientClass)))
                break;
            RawRecvTable* table = cls->recvTable;
            if (table == nullptr || !Readable(table, sizeof(RawRecvTable)))
                continue;

            // The player table is the one that carries the punch angle. This
            // picks DT_BasePlayer instead of an NPC/weapon table that also has
            // m_iHealth.
            int punch = FindProp(table, "m_vecPunchAngle");
            if (punch <= 0)
                punch = FindProp(table, "m_vecPunchAngle[0]");
            if (punch <= 0)
                continue;

            const int candidateFlags = FindProp(table, "m_fFlags");
            const int candidateTeam = FindProp(table, "m_iTeamNum");
            const int candidateLife = FindProp(table, "m_lifeState");
            const int candidateHealth = FindProp(table, "m_iHealth");
            const int candidateTakeDamage = FindProp(table, "m_takedamage");
            // GMod's player table names vector array props with a [0] suffix;
            // the bare name is kept as a fallback for builds that expose it.
            const int candidateArmor = FindProp(table, "m_ArmorValue");
            const int candidateWaterLevel = FindProp(table, "m_nWaterLevel");
            int candidateVelocity = FindProp(table, "m_vecVelocity[0]");
            if (candidateVelocity <= 0)
                candidateVelocity = FindProp(table, "m_vecVelocity");
            int candidateViewOffset = FindProp(table, "m_vecViewOffset[0]");
            if (candidateViewOffset <= 0)
                candidateViewOffset = FindProp(table, "m_vecViewOffset");

            const bool plausible =
                candidateFlags > 0 && candidateFlags < 0x2000 &&
                candidateTeam > 0 && candidateTeam < 0x1000 &&
                candidateLife > 0 && candidateLife < 0x1000 &&
                candidateHealth > 0 && candidateHealth < 0x1000 &&
                candidateViewOffset > 0 && candidateViewOffset < 0x1000;
            if (!plausible)
                continue;

            flags = candidateFlags;
            team = candidateTeam;
            lifeState = candidateLife;
            punchAngle = punch;
            health = candidateHealth;
            takedamage = candidateTakeDamage;
            velocity = candidateVelocity;
            viewOffset = candidateViewOffset;
            armor = candidateArmor;
            waterLevel = candidateWaterLevel;
            resolved = true;
            detail = "DT_BasePlayer";
            return true;
        }
        detail = "player table not found";
        return false;
    }
};

// ---------------------------------------------------------------- helpers

// ---------------------------------------------------------------- trace
// Recovered from 0x1800e2580 (triggerbot) and 0x1800bd3e0 (direction probe).
// The engine exposes EngineTraceClient003 through the engine.dll CreateInterface
// export; 0x180017150 stores that pointer at 0x1803fa610 and the trigger body
// calls slot 4 (vtable +0x20) with MASK_SHOT 0x46004003.

struct alignas(16) Ray_t
{
    Vector start;             // +0x00
    float pad0 = 0.f;
    Vector delta;             // +0x10
    float pad1 = 0.f;
    Vector startOffset;       // +0x20
    float pad2 = 0.f;
    Vector extents;           // +0x30
    float pad3 = 0.f;
    bool isRay = true;        // +0x40
    bool isSwept = true;      // +0x41
    unsigned char pad4[14] = {};
};
static_assert(offsetof(Ray_t, start) == 0x00, "Ray_t start drifted");
static_assert(offsetof(Ray_t, delta) == 0x10, "Ray_t delta drifted");
static_assert(offsetof(Ray_t, startOffset) == 0x20, "Ray_t startOffset drifted");
static_assert(offsetof(Ray_t, extents) == 0x30, "Ray_t extents drifted");
static_assert(offsetof(Ray_t, isRay) == 0x40, "Ray_t flags drifted");
static_assert(sizeof(Ray_t) == 0x50, "Ray_t size drifted");

// trace_t from the same call sites. The trigger body reads fraction at +0x2c,
// allsolid/startsolid at +0x36/+0x37, hitgroup at +0x50 and m_pEnt at +0x58.
struct TraceResult
{
    unsigned char data[0x68] = {};

    void Clear() { std::memset(data, 0, sizeof(data)); }

    float Fraction() const
    {
        float value = 0.f;
        std::memcpy(&value, data + 0x2c, sizeof(value));
        return value;
    }
    bool AllSolid() const { return data[0x37] != 0; }
    bool StartSolid() const { return data[0x36] != 0; }
    int HitGroup() const
    {
        int value = 0;
        std::memcpy(&value, data + 0x50, sizeof(value));
        return value;
    }
    void* HitEntity() const
    {
        void* value = nullptr;
        std::memcpy(&value, data + 0x58, sizeof(value));
        return value;
    }
};
static_assert(sizeof(TraceResult) >= 0x68, "TraceResult must hold the engine trace_t");

struct ITraceFilter
{
    virtual bool ShouldHitEntity(void* entity, int contentsMask) = 0;
    virtual int GetTraceType() const = 0;
};

// vftable_CDoubleTraceFilter (0x18033cda0): skip the local player and one
// optional second entity. The original returns true for every other entity.
struct DoubleTraceFilter final : ITraceFilter
{
    void* skip0 = nullptr;   // +0x08
    void* skip1 = nullptr;   // +0x10

    DoubleTraceFilter() = default;
    DoubleTraceFilter(void* first, void* second) : skip0(first), skip1(second) {}

    bool ShouldHitEntity(void* entity, int) override
    {
        return entity != nullptr && entity != skip0 && entity != skip1;
    }
    int GetTraceType() const override { return 0; }
};

struct TraceHit
{
    void* entity = nullptr;
    float fraction = 0.f;
    int hitGroup = 0;
    bool startSolid = false;
};

// Slot 4 of IEngineTrace. Validate the interface, the slot and the code page
// before the indirect call; SEH turns a stale interface into a clean fallback.
__declspec(noinline) inline bool TraceRay(void* engineTrace, const Ray_t& ray,
                                           unsigned int mask, ITraceFilter& filter,
                                           TraceResult& result)
{
    if (engineTrace == nullptr || !Readable(engineTrace, sizeof(void*)) ||
        !Readable(&ray, sizeof(ray)) || !Readable(&filter, sizeof(filter)) ||
        !Readable(&result, sizeof(result)))
        return false;
    void** vtable = *reinterpret_cast<void***>(engineTrace);
    if (vtable == nullptr || !Readable(vtable + 4, sizeof(void*)))
        return false;
    void* slot = vtable[4];
    if (!Executable(slot))
        return false;

    using Fn = void(__fastcall*)(void*, const Ray_t*, unsigned int,
                                 ITraceFilter*, TraceResult*);
#ifdef _MSC_VER
    __try
    {
        reinterpret_cast<Fn>(slot)(engineTrace, &ray, mask, &filter, &result);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
#else
    reinterpret_cast<Fn>(slot)(engineTrace, &ray, mask, &filter, &result);
#endif
    return true;
}

// ---------------------------------------------------------------- helpers

inline float NormalizeYaw(float yaw)
{
    if (!std::isfinite(yaw))
        return 0.f;
    yaw = std::fmod(yaw, 360.f);
    if (yaw > 180.f)
        yaw -= 360.f;
    else if (yaw < -180.f)
        yaw += 360.f;
    return yaw;
}

inline const char* SafePlayerName(void* engine, int index, char (&buffer)[128])
{
    buffer[0] = '\0';
    if (engine == nullptr || index <= 0)
        return buffer;
    PlayerInfo info{};
    auto getPlayerInfo = GetVirtual<GetPlayerInfoFn>(engine, 8);
    if (getPlayerInfo == nullptr || !getPlayerInfo(engine, index, &info))
        return buffer;
    std::memcpy(buffer, info.name, sizeof(info.name) - 1);
    buffer[sizeof(buffer) - 1] = '\0';
    return buffer;
}

} // namespace gmod
