// Skyfall GMod auth gate.
//
// The loader manual-maps this DLL first and passes the same
// username=...;inject=...;hwid=...;url=... parameter it gives the payload.
// This DLL redeems the one-time inject ticket with AuthServer, publishes a
// process-local event, and keeps the game session alive. Only after the OK
// event does the loader map the real m64 payload. The m64 image itself is a
// closed binary, so this gate is the auth boundary rather than a patched
// in-binary login prompt.
#include <windows.h>
#include <cstdio>
#include <string>
#include <thread>

#include "../../VenomHook/Auth.h"

static HANDLE g_ok_event = nullptr;
static HANDLE g_fail_event = nullptr;
static HANDLE g_revoked_event = nullptr;

static HANDLE PublishEvent(const char *suffix)
{
    char name[160] = {};
    sprintf_s(name, "Local\\SkyfallAuth_%lu_%s", GetCurrentProcessId(), suffix);
    HANDLE event = CreateEventA(nullptr, TRUE, FALSE, name);
    if (event) SetEvent(event);
    return event;
}

static void Worker()
{
    std::string user;
    std::string error;
    int days = 0;
    if (!Auth::Handshake(user, days, error))
    {
        g_fail_event = PublishEvent("FAIL");
        OutputDebugStringA(("[SkyfallGate] authentication failed: " + error + "\n").c_str());
        return;
    }

    g_ok_event = PublishEvent("OK");
    OutputDebugStringA(("[SkyfallGate] authenticated " + user + "; " +
                        std::to_string(days) + " days left\n").c_str());

    // Keep the ticket's game session alive while the cheat is loaded. The
    // loader only maps m64 after the OK event, so a revoked session can never
    // authorize a fresh launch. Existing loaded games are left running; m64
    // has no code path that can consume a revocation signal without patching
    // its closed entry point.
    for (;;)
    {
        Sleep(10 * 60 * 1000);
        std::string validateError;
        if (!Auth::Validate(validateError))
        {
            g_revoked_event = PublishEvent("REVOKED");
            OutputDebugStringA(("[SkyfallGate] session ended: " + validateError + "\n").c_str());
            return;
        }
    }
}

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(module);
        // Handshake reads Auth's parameter buffer. Copy it there synchronously
        // while the mapper's remote buffer is still alive.
        if (reserved)
            Auth::SetInjectParameter((const char *)reserved);
        std::thread(Worker).detach();
    }
    return TRUE;
}
