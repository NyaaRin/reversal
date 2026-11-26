#pragma once
// Stage 3.13 — the ImGui label/ID hash recovered at 0x180268980.
//
// The body is a CRC-32C table hash.  It negates the seed, skips a triple '#'
// and restarts from the negated seed, then negates the result.  That is the
// exact rule used for ImGui IDs such as "Clean now##clean_run"; a zero size
// means "hash until NUL", matching ImHashStr's two call forms.  The table at
// binary VA 0x180331380 starts 0x00000000, 0xf26b8303, 0xe13b70f7; that is
// the Castagnoli polynomial used by ImGui 1.92.8 (0x82f63b78 reflected), not
// the older zlib CRC-32 table.

#include <array>
#include <cstddef>
#include <cstdint>

namespace sf {
namespace config {

constexpr std::array<std::uint32_t, 256> MakeImGuiHashTable()
{
    std::array<std::uint32_t, 256> table{};
    for (std::uint32_t i = 0; i < 256; ++i)
    {
        std::uint32_t value = i;
        for (int bit = 0; bit < 8; ++bit)
            value = (value & 1u) ? (0x82f63b78u ^ (value >> 1)) : (value >> 1);
        table[i] = value;
    }
    return table;
}

inline constexpr std::array<std::uint32_t, 256> kImGuiHashTable =
    MakeImGuiHashTable();

// 0x180268980.  A non-zero size bounds the scan.  A zero size scans to NUL.
inline std::uint32_t ImGuiHash(const char* data, std::size_t size = 0,
                               std::uint32_t seed = 0)
{
    const std::uint32_t start = ~seed;
    std::uint32_t crc = start;

    const unsigned char* p =
        reinterpret_cast<const unsigned char*>(data);

    if (size != 0)
    {
        const unsigned char* end = p + size;
        while (p != end)
        {
            if (p[0] == '#' && (end - p) >= 3 && p[1] == '#' && p[2] == '#')
            {
                p += 3;
                crc = start;
            }
            else
            {
                crc = (crc >> 8) ^
                      kImGuiHashTable[(crc & 0xffu) ^ *p];
                ++p;
            }
        }
    }
    else
    {
        while (*p != 0)
        {
            if (p[0] == '#' && p[1] == '#' && p[2] == '#')
            {
                p += 3;
                crc = start;
            }
            else
            {
                crc = (crc >> 8) ^
                      kImGuiHashTable[(crc & 0xffu) ^ *p];
                ++p;
            }
        }
    }

    return ~crc;
}

} // namespace config
} // namespace sf
