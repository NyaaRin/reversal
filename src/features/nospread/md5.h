#pragma once
// Compact MD5 (RFC 1321) for the SWCS spread-seed fold.
//
// The original formats the command number into a decimal string, hashes it, and
// folds one digest byte into the seed. That is why the seed is stable across
// machines for a given command number but not derivable without the same hash.

#include <cstdint>
#include <cstring>

namespace sf {

class MD5
{
public:
    MD5() { Reset(); }

    void Reset()
    {
        m_state[0] = 0x67452301u;
        m_state[1] = 0xefcdab89u;
        m_state[2] = 0x98badcfeu;
        m_state[3] = 0x10325476u;
        m_length = 0;
        m_bufferLength = 0;
    }

    void Update(const void* data, size_t size)
    {
        const auto* bytes = static_cast<const uint8_t*>(data);
        m_length += size;

        while (size > 0)
        {
            const size_t take = (size < 64 - m_bufferLength) ? size : 64 - m_bufferLength;
            std::memcpy(m_buffer + m_bufferLength, bytes, take);
            m_bufferLength += take;
            bytes += take;
            size -= take;
            if (m_bufferLength == 64)
            {
                Transform(m_buffer);
                m_bufferLength = 0;
            }
        }
    }

    void Final(uint8_t digest[16])
    {
        const uint64_t bitLength = m_length * 8;

        static const uint8_t padding[64] = { 0x80 };
        uint8_t lengthBytes[8];
        for (int i = 0; i < 8; ++i)
            lengthBytes[i] = static_cast<uint8_t>((bitLength >> (8 * i)) & 0xff);

        const size_t padLength = (m_bufferLength < 56) ? 56 - m_bufferLength : 120 - m_bufferLength;
        Update(padding, padLength);
        Update(lengthBytes, 8);

        for (int i = 0; i < 4; ++i)
        {
            digest[i * 4 + 0] = static_cast<uint8_t>(m_state[i]);
            digest[i * 4 + 1] = static_cast<uint8_t>(m_state[i] >> 8);
            digest[i * 4 + 2] = static_cast<uint8_t>(m_state[i] >> 16);
            digest[i * 4 + 3] = static_cast<uint8_t>(m_state[i] >> 24);
        }
    }

private:
    static uint32_t Rotate(uint32_t x, uint32_t c) { return (x << c) | (x >> (32 - c)); }

    static void Transform(uint32_t state[4], const uint8_t block[64]);

    void Transform(const uint8_t block[64]) { Transform(m_state, block); }

    uint32_t m_state[4];
    uint64_t m_length;
    uint8_t m_buffer[64];
    size_t m_bufferLength;
};

inline void MD5::Transform(uint32_t state[4], const uint8_t block[64])
{
    uint32_t x[16];
    for (int i = 0; i < 16; ++i)
    {
        x[i] = static_cast<uint32_t>(block[i * 4]) |
               (static_cast<uint32_t>(block[i * 4 + 1]) << 8) |
               (static_cast<uint32_t>(block[i * 4 + 2]) << 16) |
               (static_cast<uint32_t>(block[i * 4 + 3]) << 24);
    }

    uint32_t a = state[0], b = state[1], c = state[2], d = state[3];

    auto f = [](uint32_t bb, uint32_t cc, uint32_t dd) { return (bb & cc) | (~bb & dd); };
    auto g = [](uint32_t bb, uint32_t cc, uint32_t dd) { return (bb & dd) | (cc & ~dd); };
    auto h = [](uint32_t bb, uint32_t cc, uint32_t dd) { return bb ^ cc ^ dd; };
    auto i = [](uint32_t bb, uint32_t cc, uint32_t dd) { return cc ^ (bb | ~dd); };

    static const uint32_t K[64] = {
        0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee, 0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501,
        0x698098d8, 0x8b44f7af, 0xffff5bb1, 0x895cd7be, 0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821,
        0xf61e2562, 0xc040b340, 0x265e5a51, 0xe9b6c7aa, 0xd62f105d, 0x02441453, 0xd8a1e681, 0xe7d3fbc8,
        0x21e1cde6, 0xc33707d6, 0xf4d50d87, 0x455a14ed, 0xa9e3e905, 0xfcefa3f8, 0x676f02d9, 0x8d2a4c8a,
        0xfffa3942, 0x8771f681, 0x6d9d6122, 0xfde5380c, 0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 0xbebfbc70,
        0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 0x04881d05, 0xd9d4d039, 0xe6db99e5, 0x1fa27cf8, 0xc4ac5665,
        0xf4292244, 0x432aff97, 0xab9423a7, 0xfc93a039, 0x655b59c3, 0x8f0ccc92, 0xffeff47d, 0x85845dd1,
        0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 0x4e0811a1, 0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 0xeb86d391
    };

    static const uint32_t SHIFT[4][4] = {
        { 7, 12, 17, 22 }, { 5, 9, 14, 20 }, { 4, 11, 16, 23 }, { 6, 10, 15, 21 }
    };

    for (uint32_t n = 0; n < 64; ++n)
    {
        uint32_t t, m;
        uint32_t r;
        if (n < 16)
        {
            t = f(b, c, d);
            m = x[n];
            r = n;
        }
        else if (n < 32)
        {
            t = g(b, c, d);
            m = x[(5 * n + 1) & 15];
            r = n;
        }
        else if (n < 48)
        {
            t = h(b, c, d);
            m = x[(3 * n + 5) & 15];
            r = n;
        }
        else
        {
            t = i(b, c, d);
            m = x[(7 * n) & 15];
            r = n;
        }

        const uint32_t tmp = d;
        d = c;
        c = b;
        b = b + Rotate(a + t + K[n] + m, SHIFT[r / 16][r % 4]);
        a = tmp;
    }

    state[0] += a;
    state[1] += b;
    state[2] += c;
    state[3] += d;
}

} // namespace sf
