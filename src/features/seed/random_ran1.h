#pragma once
// Random stream used by the spread paths.
//
// Reconstructed from 0x180083d00 (`re/dump/decompile/0x180083d00_FUN_180083d00.c`).
// It is NOT an LCG: it is the Numerical Recipes `ran1` generator, which is a
// Park-Miller minimal-standard generator plus a Bays-Durham shuffle.
//
// Observed in the body:
//   step      : x = x * 0x41a7 + (x / 0x1f31d) * -0x7fffffff   (Schrage form)
//               if (x < 0) x += 0x7fffffff
//   warm-up   : 0x27 = 39 iterations, storing into the shuffle table while the
//               counter is below 0x20 (32 entries)
//   index     : floor(iy / NDIV) with NDIV = 2^26, guarded by "if (index > 0x1f)"
//   output    : iy = table[index]; table[index] = x; return iy
//
// The guard proves the index range: values 0..31 take the fast path, anything
// else is reduced, so the table is 32 entries and NDIV is 2^26
// (0x180381010 holds 2^26; the neighbouring 1.5f at 0x180381014 overlaps the
// 8-byte read the decompiler shows as one double).
//
// Draws are normalized with 1/2^31 (0x180380a08) by the spread callers.

#include <cstdint>

namespace sf {
namespace seed {

class Ran1
{
public:
    Ran1() { Seed(1); }

    explicit Ran1(int32_t seedValue) { Seed(seedValue); }

    // 0x180083d00: a seed below 1 is negated, and a non-positive result becomes 1.
    void Seed(int32_t seedValue)
    {
        int32_t value = seedValue;
        if (value < 1)
        {
            value = -value;
            if (value < 1)
                value = 1;
        }
        m_state = value;
        m_shuffleIndex = 0;

        // Warm-up: 39 iterations (0x27), filling the table while j < 32.
        for (int32_t j = kWarmUp; j >= 0; --j)
        {
            Step();
            if (j < kTableSize)
                m_table[j] = m_state;
        }
        m_y = m_table[0];
    }

    // One Park-Miller step in the Schrage form the body uses.
    int32_t Step()
    {
        const int32_t quotient = m_state / kQ;
        int64_t value = static_cast<int64_t>(m_state) * kA -
                        static_cast<int64_t>(quotient) * kM;
        if (value < 0)
            value += kM;
        m_state = static_cast<int32_t>(value);
        return m_state;
    }

    // Returns the shuffled value, exactly as 0x180083d00 does.
    int32_t Next()
    {
        Step();

        uint32_t index = static_cast<uint32_t>(m_y / kDivisor);
        if (static_cast<int32_t>(index) > kTableSize - 1 || static_cast<int32_t>(index) < 0)
            index %= kTableSize;

        m_y = m_table[index];
        m_table[index] = m_state;
        return m_y;
    }

    // [0,1) with the engine's 1/2^31 normalization (0x180380a08).
    float Float01()
    {
        return static_cast<float>(Next()) * 4.656612875e-10f;
    }

    float Range(float low, float high)
    {
        return low + (high - low) * Float01();
    }

private:
    static constexpr int32_t kA = 16807;         // 0x41a7
    static constexpr int32_t kQ = 127773;        // 0x1f31d
    static constexpr int32_t kM = 2147483647;    // 0x7fffffff
    static constexpr int32_t kWarmUp = 39;       // 0x27
    static constexpr int32_t kTableSize = 32;    // 0x20
    static constexpr int32_t kDivisor = 67108864; // 2^26, 0x180381010

    int32_t m_state = 1;
    int32_t m_y = 0;
    int32_t m_table[kTableSize] = {};
    uint32_t m_shuffleIndex = 0;
};

} // namespace seed
} // namespace sf
