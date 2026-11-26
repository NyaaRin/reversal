#pragma once
// Features::HVH::Visualize::VisualizeFeature  (Stage 3.8)
// vtable 0x33b028, only slot 6 is overridden: 0x1800bf160 (5584 bytes).
//
// Recovered end to end. The render body has five sections, each behind its own
// config gate and the engine-connected check:
//
//   1. panic return: DAT_1804236a5 != 0 -> return before any drawing.
//   2. 0x1800bf0b0 (box gate, 168 bytes; three keys under 0x2d8f695138585a77:
//      0xf877df6876fb9434, 0xd34643a33790f520, 0xaf1968f7424da736):
//      screen-space rectangles around the viewport using the engine viewport
//      getter (VEngineClient015 +0x28) and the ImGui background draw list
//      (0x18026f7d0 "##Background", 0x18020dc30, 0x1802938c0).
//   3. 0x1800bf010 (LBY gate, 62 bytes; key 0xc980722e39863cca): the LBY text
//      near the local player's origin, built from 0x1800b5f30,
//      0x1800b5e40 and 0x1800b6290 (Resolver probe family, Stage 3.8).
//   4. 0x1800bf060 (player gate, 62 bytes; key 0x6ab593f4aff6a4b1): per-player
//      boxes and labels over slots 1..maxClients, cap 0x81, projected through
//      0x180021ac0 (which locks 0x1804260d8 and forwards to Stage 3.6's
//      0x1800207e0).
//   5. 0x1800bedb0 (skeleton gate, 79 bytes; predicate 0x1800bed60 key
//      0x72114d0ef27e6e77 plus key 0x1cb083bf379fe263): local forward/right
//      vectors and per-player hitbox markers via 0x1800c07c0 / 0x1802d4050.
//
// Colors: boxes 0x6e7d7d7d and 0xeb82eb78; LBY 0xff5ac8ff, 0xff78ff78,
// 0xff7878ff; skeleton 0xff00ff00, 0xff0000ff, 0xff3c3cff, 0xff3cff3c.
// No [VIS] string belongs to this body; the label formats are listed in the
// stage sheet. [VIS]/[VIS-INIT] belong to 0x1801e9960/0x1801e97c0.

#include <cstdint>

namespace sf {
namespace hvh {

inline constexpr uint64_t kVisualizeVtableRva = 0x33b028;
inline constexpr uint64_t kVisualizeVfunc06   = 0x1800bf160;
inline constexpr int      kVisualizeBodySize  = 5584;
inline constexpr int      kRecoveredVisualizeBodies = 1;

inline constexpr uint64_t kBoxGate      = 0x1800bf0b0; // 168
inline constexpr uint64_t kLbyGate      = 0x1800bf010; // 62
inline constexpr uint64_t kPlayerGate   = 0x1800bf060; // 62
inline constexpr uint64_t kSkeletonGate = 0x1800bedb0; // 79
inline constexpr uint64_t kSkeletonPred = 0x1800bed60; // 62

inline constexpr uint64_t kPanicFlag    = 0x1804236a5;
inline constexpr uint64_t kEngineClient = 0x1803fa668;
inline constexpr uint64_t kEntityList   = 0x1803fa360;
inline constexpr uint64_t kGlobalVars   = 0x1803fa608;
inline constexpr uint64_t kProjection   = 0x180021ac0; // 284, forwards 0x1800207e0
inline constexpr uint64_t kProjectLock  = 0x1804260d8;
inline constexpr uint64_t kLineDraw     = 0x1800c07c0;
inline constexpr uint64_t kRotateVector = 0x1802d4050;

inline constexpr int kMaxSlot    = 0x81;
inline constexpr int kSlotStride = 0x168;
inline constexpr uint64_t kAnimTableBase = 0x18040a958; // + slot * 0x318
inline constexpr uint64_t kCacheBase     = 0x180561180; // dword index slot * 0x2d

inline constexpr unsigned kBoxColorActive   = 0xeb82eb78u;
inline constexpr unsigned kBoxColorInactive = 0x6e7d7d7du;
inline constexpr unsigned kLbyCalibrating   = 0xff5ac8ffu;
inline constexpr unsigned kLbyGood          = 0xff78ff78u;
inline constexpr unsigned kLbyBad           = 0xff7878ffu;
inline constexpr unsigned kSkeletonForward  = 0xff00ff00u;
inline constexpr unsigned kSkeletonRight    = 0xff0000ffu;
inline constexpr unsigned kPlayerBox        = 0xff3c3cffu;
inline constexpr unsigned kPlayerBoxAlt     = 0xff3cff3cu;

struct VisualizeFeature
{
    static constexpr uint64_t kVtableRva = kVisualizeVtableRva;
    static constexpr uint64_t kVfunc06   = kVisualizeVfunc06;
    static constexpr int      kBodySize  = kVisualizeBodySize;

    // The body's entry gate: interface present and connected, local entity
    // resolvable and alive.
    static bool Gate(bool interfacePresent, bool connected, bool localAlive)
    {
        return interfacePresent && connected && localAlive;
    }

    // The four section gates: box, LBY, player, skeleton. Each is a config
    // read under the shared root; the render body checks them in this order.
    static bool SectionEnabled(bool box, bool lby, bool player, bool skeleton, int which)
    {
        switch (which) {
        case 0: return box;
        case 1: return lby;
        case 2: return player;
        case 3: return skeleton;
        default: return false;
        }
    }

    static constexpr bool kBodyRecovered = true;
};

} // namespace hvh
} // namespace sf
