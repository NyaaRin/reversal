#pragma once
// Entity-lifecycle ghost tracking — the real owner of the `[ESP]` tag (Stage 3.6).
//
// Class: Features::Visual::ESP::CGhostEntityListener, vtable RVA 0x33bbb8.
//   slot 0  0x1801911e0   slot 1  0x180191320
//
// The tagged code is the entity-listener registration and the ghost-preservation
// path (0x1801913f0, 0x180191540, 0x1801918f0, 0x180191a10, 0x180191fa0,
// 0x180192700). None of the eight Editor::Elements classes contains an `[ESP]`
// literal; the tag is lifecycle bookkeeping, not rendering.

#include <cstdint>
#include <cstring>
#include <string>
#include <vector>

namespace sf {
namespace visual {

inline constexpr const char* kListenerRegisteredLog =
    "[ESP] Entity lifecycle listener registered (delete + transmit/PVS tracking on)\n";
inline constexpr const char* kListenerRetryLog =
    "[ESP] CClientEntityList RTTI adjustment unavailable - listener retry deferred\n";
inline constexpr const char* kListenerSignatureMissingLog =
    "[ESP] AddListenerEntity signature not found - preserving ghosts conservatively\n";
inline constexpr const char* kListenerRegisterThrowLog =
    "[ESP] Entity delete listener registration threw - preserving ghosts conservatively\n";
inline constexpr const char* kListenerUnregisteredLog =
    "[ESP] entity lifecycle listener unregistered (slot %d of %d)\n";
inline constexpr const char* kListenerBaseMissingLog =
    "[ESP] listener unregister: CClientEntityList base unavailable\n";
inline constexpr const char* kListenerVectorWrongLog =
    "[ESP] listener unregister: vector looks wrong (data=%p size=%d)\n";
inline constexpr const char* kListenerNotInListLog =
    "[ESP] listener unregister: our entry is not in the list (%d entries)\n";
inline constexpr const char* kListenerUnregisterThrowLog =
    "[ESP] listener unregister threw\n";
inline constexpr const char* kFootprintReleasedLog =
    "[ESP] lifecycle footprint released: listener=%s transmit=%d recreate=%d\n";
inline constexpr const char* kStreamOutLog =
    "[ESP] Entity List kept stream-out idx=%d class=%s dt=%llums\n";
inline constexpr const char* kErasedDeleteLog =
    "[ESP] Entity List erased delete idx=%d class=%s txKnown=%d tx=%d coverage=%d\n";
inline constexpr const char* kErasedSerialLog =
    "[ESP] Entity List erased serial reuse idx=%d class=%s old=%08X new=%08X\n";
inline constexpr const char* kErasedOccupiedLog =
    "[ESP] Entity List erased occupied slot idx=%d class=%s old=%08X new=%08X\n";

// Registration outcomes named by the literals above. The listener can fail to
// register and still leave ghost preservation on ("conservatively"), which is why
// the tag exists at all: a skipped removal would draw a stale entity.
enum class ListenerState : int
{
    Unregistered = 0,
    Registered,
    Deferred,            // RTTI adjustment missing, retry later
    Conservative,        // signature missing or registration threw
};

struct GhostListener
{
    ListenerState state = ListenerState::Unregistered;
    int  slot = -1;
    int  slotCount = 0;
    bool transmitsTracked = false;
    bool recreateTracked = false;

    // 0x1801913f0 / 0x180191540: registration path. `rttiAvailable` is the
    // CClientEntityList RTTI adjustment; `signatureFound` is AddListenerEntity.
    void Register(bool rttiAvailable, bool signatureFound, bool threw)
    {
        if (!rttiAvailable)
        {
            state = ListenerState::Deferred;
            return;
        }
        if (!signatureFound || threw)
        {
            state = ListenerState::Conservative;
            return;
        }
        state = ListenerState::Registered;
        transmitsTracked = true;
        recreateTracked = true;
    }

    // 0x1801918f0 / 0x180191fa0: unregister path.
    bool Unregister(bool baseAvailable, bool vectorSane, bool foundInList, bool threw)
    {
        if (!baseAvailable || !vectorSane || !foundInList || threw)
        {
            if (state == ListenerState::Registered)
                state = ListenerState::Conservative;   // keep ghosts rather than drop
            return false;
        }
        state = ListenerState::Unregistered;
        transmitsTracked = false;
        recreateTracked = false;
        slot = -1;
        return true;
    }

    bool PreservesGhosts() const { return state != ListenerState::Unregistered; }
};

// 0x180192700: entity-list removal classification. Three cases are logged
// distinctly, and a stream-out inside the grace window is *kept*.
enum class RemovalKind : int
{
    None = 0,
    StreamOut,       // kept, transient
    Delete,          // erased
    SerialReuse,     // erased, handle reused
    OccupiedSlot,    // erased, slot taken by another entity
};

struct RemovalInputs
{
    bool removed = false;
    bool streamOut = false;
    uint64_t deltaMs = 0;
    bool transmitKnown = false;
    int  transmit = 0;
    int  coverage = 0;
    uint32_t oldSerial = 0;
    uint32_t newSerial = 0;
    bool slotOccupied = false;
};

// 0x180191fa0 compares the record age against 0xfa before deciding to keep a
// stream-out: `0xfa < *(u64*)(record + 10) - age`. This was a placeholder in the
// first 3.6 pass and is now read from the body.
inline constexpr uint64_t kStreamOutGraceMs = 0xfa;   // 250 ms, 0x180191fa0

inline RemovalKind ClassifyRemoval(const RemovalInputs& in)
{
    if (!in.removed)
        return RemovalKind::None;
    if (in.streamOut && in.deltaMs <= kStreamOutGraceMs)
        return RemovalKind::StreamOut;
    if (in.oldSerial != 0 && in.newSerial != 0 && in.oldSerial != in.newSerial)
        return RemovalKind::SerialReuse;
    if (in.slotOccupied)
        return RemovalKind::OccupiedSlot;
    return RemovalKind::Delete;
}

} // namespace visual
} // namespace sf
