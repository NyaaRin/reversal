#pragma once
// Lua engine — private stack and DrawModelExecute hook (Stage 3.10)
//
// Recovered from the [LUASTACK] and [LUAHOOKS] families:
//
//   Private stack open   0x1800414c0
//     * refuses when the interface or its persist table is null;
//     * reuses the cached stack when the same Lua state asks again;
//     * resolves lua_gettop / lua_newthread / lua_settop from lua_shared.dll
//       lazily (0x1803fcfa0, 0x180425b78, 0x180425540);
//     * hides the new thread via 0x18002d7a0; the hide result must be
//       >= 0x40000000, otherwise the stack is closed again through 0x18002d8c0
//       and the open is refused;
//     * on success stores the state in DAT_1803ff7d0, the thread in
//       DAT_1803ff8a8 and the hide key in DAT_1803e7564.
//   Private stack release 0x180041420
//     * closes the hidden thread when it still belongs to the cached state,
//       logs "[LUASTACK] private stack released", then zeroes the globals and
//       the 8 six-byte bookkeeping entries at 0x1803ff7e0.
//
//   DrawModelExecute re-issue hook 0x180057f20
//     * only for the local interface (state + 8 == argument);
//     * forwards to slot 0xf8 with a boolean: true while the per-model counter
//       DAT_1803ff8b8 is below 8, false after;
//     * the cap warning is emitted once: "[LUAHOOKS] DrawModelExecute re-issue
//       cap (%d per model) hit".
//
// Verbatim strings:
//   "[LUASTACK] private stack created"
//   "[LUASTACK] private stack released"
//   "[LUASTACK] refusing to open: private stack could not be hidden"
//   "[LUASTACK] refusing to open: persist table unavailable"
//   "[LUAHOOKS] DrawModelExecute re-issue cap (%d per model) hit"

#include <cstdint>

namespace sf {
namespace lua {

inline constexpr uint64_t kOpenAddr     = 0x1800414c0;
inline constexpr uint64_t kReleaseAddr  = 0x180041420;
inline constexpr uint64_t kHideThread   = 0x18002d7a0;
inline constexpr uint64_t kCloseThread  = 0x18002d8c0;
inline constexpr uint64_t kHookAddr     = 0x180057f20;

inline constexpr int      kHideSuccessMin = 0x40000000; // iVar3 >= 0x40000000
inline constexpr int      kReissueCap     = 8;          // DAT_1803ff8b8 < 8

struct PrivateStack
{
    enum class Result { Created, Reused, RefusedUnavailable, RefusedUnhidden };

    bool open = false;
    void* luaState = nullptr;   // DAT_1803ff7d0
    void* thread = nullptr;     // DAT_1803ff8a8
    int  hideKey = -1;          // DAT_1803e7564
    int  entries[8][6] = {};    // 0x1803ff7e0 .. 0x1803ff8a0

    static bool HideSucceeded(int hideResult) { return hideResult >= kHideSuccessMin; }

    // hideResult is the value 0x18002d7a0 returns; -1 is its failure sentinel.
    Result Open(void* persistTable, void* state, void* newThread, int hideResult)
    {
        if (persistTable == nullptr || state == nullptr)
            return Result::RefusedUnavailable;

        if (open && luaState == state)
            return Result::Reused;

        if (open)
            Release();

        if (newThread == nullptr)
            return Result::RefusedUnavailable;

        if (!HideSucceeded(hideResult))
        {
            if (hideResult != -1)
                hideKey = hideResult;   // passed to 0x18002d8c0 before giving up
            return Result::RefusedUnhidden;
        }

        open = true;
        luaState = state;
        thread = newThread;
        hideKey = hideResult;
        return Result::Created;
    }

    // Returns true when the release log should be emitted.
    bool Release()
    {
        const bool wasOpen = open && thread != nullptr;
        open = false;
        luaState = nullptr;
        thread = nullptr;
        hideKey = -1;
        for (auto& row : entries)
            for (int& cell : row)
                cell = 0;
        return wasOpen;
    }
};

struct DrawModelExecuteHook
{
    int counter = 0;            // DAT_1803ff8b8
    bool capLogged = false;     // DAT_1804260e8
    bool enabled = false;       // DAT_1803ff8d0
    bool haveCallback = false;  // DAT_1803ff8c8 != null

    // Returns the boolean forwarded to slot 0xf8 and whether the cap log fires.
    bool Invoke(bool& logged)
    {
        logged = false;
        if (enabled && haveCallback)
        {
            if (counter < kReissueCap)
            {
                ++counter;
                return true;
            }
            if (!capLogged)
            {
                capLogged = true;
                logged = true;
            }
        }
        return false;
    }
};

} // namespace lua
} // namespace sf
