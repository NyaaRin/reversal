// Self-test for the Lua subsystem (Stage 3.10).
//
// Exercises the two recovered mechanics:
//   1. the private-stack open/reuse/release state machine, including the
//      0x40000000 hidden-thread threshold and both refusal paths;
//   2. the DrawModelExecute re-issue cap of eight per model and its one-shot
//      warning.
// Also asserts the addresses and constants.

#include <cstdio>

#include "stack.h"

namespace {

int g_failures = 0;

void Check(bool condition, const char* what)
{
    std::printf("%s  %s\n", condition ? "PASS" : "FAIL", what);
    if (!condition)
        ++g_failures;
}

void CheckInt(int actual, int expected, const char* what)
{
    const bool ok = actual == expected;
    std::printf("%s  %s (got %d, want %d)\n", ok ? "PASS" : "FAIL", what, actual, expected);
    if (!ok)
        ++g_failures;
}

using namespace sf::lua;

} // namespace

int main()
{
    // ------------------------------------------------------------- stack open
    {
        PrivateStack stack;
        void* persist = reinterpret_cast<void*>(0x1000);
        void* state = reinterpret_cast<void*>(0x2000);
        void* thread = reinterpret_cast<void*>(0x3000);

        Check(stack.Open(nullptr, state, thread, 0x40000000) ==
                  PrivateStack::Result::RefusedUnavailable,
              "no persist table refuses the open");
        Check(stack.Open(persist, nullptr, thread, 0x40000000) ==
                  PrivateStack::Result::RefusedUnavailable,
              "no state refuses the open");
        Check(!stack.open, "a refused open leaves the stack closed");

        Check(stack.Open(persist, state, nullptr, 0x40000000) ==
                  PrivateStack::Result::RefusedUnavailable,
              "a null new thread refuses the open");

        Check(stack.Open(persist, state, thread, 0x3fffffff) ==
                  PrivateStack::Result::RefusedUnhidden,
              "a hide result below 0x40000000 is refused");
        Check(!stack.open, "the unhidden path does not open the stack");

        Check(PrivateStack::HideSucceeded(0x40000000), "0x40000000 is the success floor");
        Check(PrivateStack::HideSucceeded(0x7fffffff), "a high result succeeds");
        Check(!PrivateStack::HideSucceeded(0x3fffffff), "one below the floor fails");
        Check(!PrivateStack::HideSucceeded(-1), "the -1 sentinel fails");

        Check(stack.Open(persist, state, thread, 0x40000000) ==
                  PrivateStack::Result::Created,
              "a hidden thread creates the private stack");
        Check(stack.open && stack.luaState == state && stack.thread == thread,
              "the state, thread and key are stored");

        Check(stack.Open(persist, state, thread, 0x40000000) ==
                  PrivateStack::Result::Reused,
              "the same state reuses the cached stack");
        CheckInt(stack.hideKey, 0x40000000, "the hide key survives the reuse");

        void* other = reinterpret_cast<void*>(0x4000);
        Check(stack.Open(persist, other, thread, 0x40000000) ==
                  PrivateStack::Result::Created,
              "a different state closes the old stack and opens a new one");
        Check(stack.luaState == other, "the new state replaces the old one");
    }

    // ---------------------------------------------------------- stack release
    {
        PrivateStack stack;
        Check(!stack.Release(), "releasing a closed stack logs nothing");

        stack.open = true;
        stack.luaState = reinterpret_cast<void*>(0x2000);
        stack.thread = reinterpret_cast<void*>(0x3000);
        stack.hideKey = 0x40000000;
        stack.entries[3][4] = 7;

        Check(stack.Release(), "releasing an open stack logs");
        Check(!stack.open && stack.luaState == nullptr && stack.thread == nullptr,
              "release clears state, thread and key");
        CheckInt(stack.hideKey, -1, "the hide key returns to the -1 sentinel");
        CheckInt(stack.entries[3][4], 0, "release zeroes the bookkeeping entries");
    }

    // ------------------------------------------------------------- hook cap
    {
        DrawModelExecuteHook hook;
        bool logged = false;

        Check(!hook.Invoke(logged), "a disabled hook forwards false");
        Check(!logged, "a disabled hook does not warn");

        hook.enabled = true;
        Check(!hook.Invoke(logged), "an enabled hook without callback forwards false");

        hook.haveCallback = true;
        int trueCount = 0;
        for (int i = 0; i < 8; ++i)
            if (hook.Invoke(logged))
                ++trueCount;
        CheckInt(trueCount, 8, "the hook forwards true for eight re-issues");
        CheckInt(hook.counter, 8, "the per-model counter reaches eight");
        Check(!logged, "no warning during the first eight");

        Check(!hook.Invoke(logged), "the ninth re-issue forwards false");
        Check(logged, "the ninth re-issue emits the cap warning");
        Check(hook.capLogged, "the warning is marked emitted");

        logged = false;
        Check(!hook.Invoke(logged), "later re-issues still forward false");
        Check(!logged, "the warning is not repeated");
    }

    // -------------------------------------------------------------- constants
    {
        CheckInt(kReissueCap, 8, "the re-issue cap is 8");
        CheckInt(kHideSuccessMin, 0x40000000, "the hide floor is 0x40000000");
        Check(kOpenAddr == 0x1800414c0ULL, "private stack open keeps 0x1800414c0");
        Check(kReleaseAddr == 0x180041420ULL, "private stack release keeps 0x180041420");
        Check(kHookAddr == 0x180057f20ULL, "the hook keeps 0x180057f20");
        Check(kHideThread == 0x18002d7a0ULL, "the hide helper keeps 0x18002d7a0");
        Check(kCloseThread == 0x18002d8c0ULL, "the close helper keeps 0x18002d8c0");
    }

    std::printf("\n%s (%d failure%s)\n",
                g_failures == 0 ? "LUA SELFTEST PASS" : "LUA SELFTEST FAIL",
                g_failures, g_failures == 1 ? "" : "s");
    return g_failures == 0 ? 0 : 1;
}
