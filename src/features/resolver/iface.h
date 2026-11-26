#pragma once
// Interface verification (Stage 3.11)  —  [IFACE] / [IFACE-WARN] / [IFACE-FAIL]
//
//   g_pViewrender   0x180018770 (538 bytes)
//     * the candidate is read from a pointer-to-pointer; it must lie inside the
//       module's [lo, hi) range and be readable for 0x130 bytes;
//     * three vtable slots at +0x28, +0x30 and +0x128 must each be code
//       (0x1800186d0);
//     * the object's RTTI locator at lp - 8 points to a type descriptor whose
//       decorated name is compared with ".?AVCViewRender@@" (0x180310118);
//     * on success DAT_1803f9258 = 1 and DAT_1803fa680 = the slot address, and
//       the log prints the client-relative Render / RenderView / PreHUD offsets.
//
//   The other [IFACE] emitters (0x180017150, 0x1801f9180) resolve the remaining
//   interfaces (MoveHelper, ViewRenderBeams, BaseClientState, D3D, Panel, MdlR,
//   LuaSh, VGui, Input, Globals, CMode) and are recorded in the stage sheet.
//
// Verbatim string:
//   "[IFACE] g_pViewrender verified via %s 0x%llX -> %p (vt=%p Render=client+0x%llX RenderView=client+0x%llX PreHUD=client+0x%llX)\n"

#include <cstdint>

namespace sf {
namespace resolver {

inline constexpr uint64_t kViewRenderVerify = 0x180018770;
inline constexpr uint64_t kIsCodeSlot       = 0x1800186d0;
inline constexpr uint64_t kViewRenderName   = 0x180310118; // ".?AVCViewRender@@"
inline constexpr int      kObjectSize        = 0x130;
inline constexpr int      kSlotRender        = 0x28;
inline constexpr int      kSlotRenderView    = 0x30;
inline constexpr int      kSlotPreHud        = 0x128;
inline constexpr int      kRttiBackOffset    = 8;

struct ViewRenderCheck
{
    bool inRange = false;
    bool readable = false;
    bool slotsAreCode = false;
    bool nameMatches = false;

    bool Verified() const { return inRange && readable && slotsAreCode && nameMatches; }

    // lp is the object pointer; lo/hi bound the module; the name comparison is
    // supplied by the RTTI walk.
    static ViewRenderCheck Check(uintptr_t lp, uintptr_t lo, uintptr_t hi,
                                 bool readableForSize, bool slotsCode, bool nameOk)
    {
        ViewRenderCheck c;
        c.inRange = lp >= lo && lp + kObjectSize <= hi;
        c.readable = readableForSize;
        c.slotsAreCode = slotsCode;
        c.nameMatches = nameOk;
        return c;
    }

    // The three slot RVAs the verify log prints, relative to the client base.
    struct SlotOffsets { uintptr_t render; uintptr_t renderView; uintptr_t preHud; };

    static SlotOffsets Offsets(uintptr_t vtable, uintptr_t clientBase)
    {
        SlotOffsets o{};
        if (vtable == 0 || clientBase == 0)
            return o;
        o.render = *reinterpret_cast<uintptr_t*>(vtable + kSlotRender) - clientBase;
        o.renderView = *reinterpret_cast<uintptr_t*>(vtable + kSlotRenderView) - clientBase;
        o.preHud = *reinterpret_cast<uintptr_t*>(vtable + kSlotPreHud) - clientBase;
        return o;
    }
};

} // namespace resolver
} // namespace sf
