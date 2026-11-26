#pragma once
// VMT hooks (Stage 3.11)  —  [VMT] / [VMT-FAIL]
//   installer 0x1801ecae0 (727 bytes)
//
// Two interfaces are hooked in one pass:
//
//   CHLClient  (DAT_1803f9278)  slot 0x23 (35) FrameStageNotify
//              original stored at DAT_1803ff900, stub 0x1801ec910,
//              vtable byte offset 0x118
//   CPrediction (DAT_1803f9290) slot 0x11 (17) RunCommand
//              original stored at DAT_1803ff8f8, stub 0x1801ec9d0,
//              vtable byte offset 0x88
//
// Each slot is first validated as code by 0x1801eca80(vtable, slot). The
// installer allocates a 0x30-byte node (0x1802d8350) with a self-linked list
// header and a 0x0101 tag, inserts it into the per-hook container, then swaps
// the pointer under VirtualProtect(PAGE_EXECUTE_READWRITE = 0x40) and restores
// the old protection.
//
// Verbatim strings:
//   "[VMT-FAIL] CHLClient slot %d is not code; Pre/PostFrameStageNotify disabled\n"
//   "[VMT] CHLClient: FrameStageNotify(%d)=%p\n"
//   "[VMT-FAIL] CPrediction slot %d is not code; Pre/PostRunCommand disabled\n"
//   "[VMT] CPrediction: RunCommand(%d)=%p\n"

#include <cstdint>

namespace sf {
namespace resolver {

inline constexpr uint64_t kInstallAddr   = 0x1801ecae0;
inline constexpr uint64_t kIsCodeCheck   = 0x1801eca80;
inline constexpr uint64_t kAllocNode     = 0x1802d8350;
inline constexpr uint64_t kInsertHook    = 0x1801ecdc0;
inline constexpr uint64_t kSwapAt        = 0x180208e00;
inline constexpr uint64_t kChlStub       = 0x1801ec910;
inline constexpr uint64_t kPredStub      = 0x1801ec9d0;
inline constexpr uint64_t kChlClient     = 0x1803f9278;
inline constexpr uint64_t kPrediction    = 0x1803f9290;
inline constexpr uint64_t kChlOriginal   = 0x1803ff900;
inline constexpr uint64_t kPredOriginal  = 0x1803ff8f8;

inline constexpr int kChlSlot        = 0x23;   // FrameStageNotify
inline constexpr int kPredSlot       = 0x11;   // RunCommand
inline constexpr int kChlSlotOffset  = 0x118;
inline constexpr int kPredSlotOffset = 0x88;
inline constexpr uint32_t kPageExecuteReadWrite = 0x40;
inline constexpr int kNodeSize       = 0x30;
inline constexpr uint16_t kNodeTag   = 0x0101;

// Full hook table installed by 0x1801f9180 (7719 bytes), the setup pass that
// also logs the interface dump and drives every pattern scan. Each entry is
// {interface global, slot, vtable byte offset, stub, original-pointer global}.
struct HookEntry
{
    uint64_t interfaceGlobal;
    int slot;
    int byteOffset;
    uint64_t stub;
    uint64_t originalGlobal;
};

inline constexpr HookEntry kHookTable[] = {
    { 0x1803fa5e0, 0x25, 0x128, 0x1801f5ad0, 0x1803fa370 }, // D3D Reset/RT
    { 0x1803fa5e0, 0x22, 0x110, 0x1801ebcd0, 0x1803fa4f8 }, // D3D Present/Stretch
    { 0x1803fa5e0, 0x20, 0x100, 0x180118fa0, 0x1804235a0 }, // D3D GRTD
    { 0x1803fa5e0, 0x11, 0x088, 0x1801ebf30, 0x1803fa4e0 }, // D3D
    { 0x1803fa5e0, 0x10, 0x080, 0x1801ebe00, 0x1803fa4d8 }, // D3D
    { 0x1803fa640, 0x14, 0x0a0, 0x1801ed5d0, 0x1803fa3d8 }, // MaterialSystem
    { 0x1803f9278, 0x1a, 0x0d0, 0x1801f6a20, 0x1803fa440 }, // CHLClient VR
    { 0x1803f9278, 0x17, 0x0b8, 0x1801f3490, 0x1803fa438 }, // CHLClient WU
    { 0x1803f9278, 0x0b, 0x058, 0x1801f6950, 0x1803fa388 }, // CHLClient HU
    { 0x1803f9278, 0x05, 0x028, 0x1801f6840, 0x1803fa410 }, // CHLClient LI
    { 0x1803f9278, 0x07, 0x038, 0x1801f68d0, 0x1803fa420 }, // CHLClient LS
    { 0x1803fa638, 0x15, 0x0a8, 0x1801ee530, 0x1803fa3d0 }, // ClientMode
    { 0x1803fa600, 0x29, 0x148, 0x1801ed360, 0x1803fa508 }, // Panel
    { 0x1803fa680, 0x06, 0x030, 0x1801f1b80, 0x1803fa478 }, // ViewRender
    { 0x1803fa680, 0x25, 0x128, 0x1801f32a0, 0x1803fa3a0 }, // ViewRender PreHUD
    { 0x1803fa680, 0x28, 0x140, 0x1801f73b0, 0x1803fa498 }, // ViewRender DVM
    { 0x1803fa668, 0x14, -1,    0x1801f3360, 0x1803fa380 }, // Engine SVA (FUN_180209520)
    { 0x1803fa668, 0x13, -1,    0x1801f3440, 0x1803fa3f0 }, // Engine GVA (FUN_180209520)
    { 0x1803fa598, 0x14, 0x0a0, 0x1801f5340, 0x1803fa378 }, // ModelRender DME
    { 0x1803fa678, 0x05, 0x028, 0x1801f6f60, 0x1803fa3c0 }, // LuaShared
    { 0x1803fa5a8, 0x0f, 0x078, 0x1801f7440, 0x1803fa3c8 }, // InputSystem
};

inline constexpr int kHookTableCount =
    static_cast<int>(sizeof(kHookTable) / sizeof(kHookTable[0]));

struct VmtHook
{
    struct Target
    {
        bool present = false;
        bool isCode = false;
        void* original = nullptr;
        bool installed = false;
    };

    Target chl;
    Target pred;
    int nodeTag = kNodeTag;

    // Returns true when the CHL hook was installed; `logFail` mirrors the
    // [VMT-FAIL] line.
    bool InstallChl(bool& logFail)
    {
        logFail = false;
        if (!chl.present || !chl.isCode)
        {
            logFail = true;
            return false;
        }
        chl.original = reinterpret_cast<void*>(0x1000);   // slot[0x23] read
        chl.installed = true;
        return true;
    }

    bool InstallPred(bool& logFail)
    {
        logFail = false;
        if (!pred.present || !pred.isCode)
        {
            logFail = true;
            return false;
        }
        pred.original = reinterpret_cast<void*>(0x2000);
        pred.installed = true;
        return true;
    }

    static uint32_t ProtectFlag() { return kPageExecuteReadWrite; }
};

} // namespace resolver
} // namespace sf
