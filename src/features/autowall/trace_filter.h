#pragma once
// Trace filters (Stage 3.4).
//
// Source Engine trace filters are three-slot vtables. All three classes in the
// image use the same slots 1 and 2 and differ only in slot 0:
//
//   slot 0  ShouldHitEntity(this, entity)   differs per filter
//   slot 1  0x1800139e0                     returns 0 (GetTraceType)
//   slot 2  0x180020010                     returns 0 (ShouldCollide)
//
// Addresses from re/dump/vtable_methods.tsv:
//   CTraceFilter        0 -> 0x180020020
//   CDoubleTraceFilter  0 -> 0x180020030
//   CTripleTraceFilter  0 -> 0x180020050
//
// The filters hold CBaseEntity* pointers at +8, +0x10, +0x18 and skip exactly those
// entities; everything else is traced.

#include <cstddef>
#include <cstdint>

namespace sf {
namespace autowall {

// 0x180020020 — CTraceFilter_vfunc00, 8 bytes.
//   return entity != this->skip1;
class CTraceFilter
{
public:
    explicit CTraceFilter(const void* skip1 = nullptr) : m_skip1(skip1) {}

    bool ShouldHitEntity(const void* entity) const { return entity != m_skip1; }

    // vtable slots 1 and 2, both 0x1800139e0 / 0x180020010.
    int GetTraceType() const { return 0; }
    bool ShouldCollide(const void*) const { return false; }

    static constexpr uint64_t kSlot0 = 0x180020020u;
    static constexpr uint64_t kSlot1 = 0x1800139e0u;
    static constexpr uint64_t kSlot2 = 0x180020010u;

protected:
    const void* m_skip1;
};

// 0x180020030 — CDoubleTraceFilter_vfunc00, 18 bytes.
//   if (entity != skip1 && entity != skip2) return 1;
//   return 0;
class CDoubleTraceFilter
{
public:
    CDoubleTraceFilter(const void* skip1 = nullptr, const void* skip2 = nullptr)
        : m_skip1(skip1), m_skip2(skip2) {}

    bool ShouldHitEntity(const void* entity) const
    {
        return entity != m_skip1 && entity != m_skip2;
    }

    int GetTraceType() const { return 0; }
    bool ShouldCollide(const void*) const { return false; }

    static constexpr uint64_t kSlot0 = 0x180020030u;
    static constexpr uint64_t kSlot1 = 0x1800139e0u;
    static constexpr uint64_t kSlot2 = 0x180020010u;

protected:
    const void* m_skip1;
    const void* m_skip2;
};

// 0x180020050 — CTripleTraceFilter_vfunc00, 24 bytes.
class CTripleTraceFilter
{
public:
    CTripleTraceFilter(const void* skip1 = nullptr, const void* skip2 = nullptr,
                       const void* skip3 = nullptr)
        : m_skip1(skip1), m_skip2(skip2), m_skip3(skip3) {}

    bool ShouldHitEntity(const void* entity) const
    {
        return entity != m_skip1 && entity != m_skip2 && entity != m_skip3;
    }

    int GetTraceType() const { return 0; }
    bool ShouldCollide(const void*) const { return false; }

    static constexpr uint64_t kSlot0 = 0x180020050u;
    static constexpr uint64_t kSlot1 = 0x1800139e0u;
    static constexpr uint64_t kSlot2 = 0x180020010u;

protected:
    const void* m_skip1;
    const void* m_skip2;
    const void* m_skip3;
};

// Common shape the penetration loop uses; the concrete class is chosen by the
// caller (double for the two-entity case, triple when a third must be skipped).
class ITraceFilter
{
public:
    virtual ~ITraceFilter() = default;
    virtual bool ShouldHitEntity(const void* entity) const = 0;
    virtual int GetTraceType() const = 0;
    virtual bool ShouldCollide(const void* other) const = 0;
};

inline bool FilterAccepts(const CTraceFilter& f, const void* e) { return f.ShouldHitEntity(e); }
inline bool FilterAccepts(const CDoubleTraceFilter& f, const void* e) { return f.ShouldHitEntity(e); }
inline bool FilterAccepts(const CTripleTraceFilter& f, const void* e) { return f.ShouldHitEntity(e); }

} // namespace autowall
} // namespace sf
