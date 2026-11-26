#pragma once
// Seed and prediction chain.
//
// Reconstructed from three functions that were read in full from the corpus:
//
//   0x180015e50  CommandSeed(cmdNumber)      - MD5 over the 4-byte command number
//   0x180024f00  prediction hook             - writes the seed into the engine and
//                                              calls vstdlib!RandomSeed
//   0x1800859c0  SWCS per-shot draw          - MD5 over the decimal command number,
//                                              folded into an LCG stream
//
// The chain is: command number -> 31-bit seed -> two independent streams
// (prediction and per-shot spread) -> the draws the cone solver consumes.
//
// The two seed derivations differ on purpose. Prediction seeds the engine's
// shared RNG from a hash of the four raw bytes; the SWCS spread path seeds its
// own local stream from a hash of the decimal text, so the numbers are stable
// across machines without touching engine state.

#include <cstdint>
#include <cstdio>
#include <cstring>

#include "../nospread/md5.h"
#include "random_ran1.h"

namespace sf {
namespace seed {

// ------------------------------------------------------------ command seed
//
// 0x180015e50 hashes exactly four bytes (the command number, little endian)
// with a single MD5 block: the buffer is {cmd32, 0x80, zeros...} with a 32-bit
// length field, so it is plain MD5 of those four bytes.
//
// The returned value is not a digest word: the original assembles it from two
// 16-bit halves of the post-transform state (state[2] low half, shifted up by
// 16, or'd with state[1] high half). That is reproduced exactly below, since a
// different extraction would still look like a seed but would not match the
// engine's stream.
inline uint32_t CommandSeed(uint32_t commandNumber)
{
    uint8_t block[4];
    block[0] = static_cast<uint8_t>(commandNumber);
    block[1] = static_cast<uint8_t>(commandNumber >> 8);
    block[2] = static_cast<uint8_t>(commandNumber >> 16);
    block[3] = static_cast<uint8_t>(commandNumber >> 24);

    MD5 md5;
    md5.Update(block, sizeof(block));
    uint8_t digest[16];
    md5.Final(digest);

    // digest is the four state words in little endian order.
    const uint32_t state1 = static_cast<uint32_t>(digest[4]) |
                            (static_cast<uint32_t>(digest[5]) << 8) |
                            (static_cast<uint32_t>(digest[6]) << 16) |
                            (static_cast<uint32_t>(digest[7]) << 24);
    const uint32_t state2 = static_cast<uint32_t>(digest[8]) |
                            (static_cast<uint32_t>(digest[9]) << 8) |
                            (static_cast<uint32_t>(digest[10]) << 16) |
                            (static_cast<uint32_t>(digest[11]) << 24);

    return ((state2 & 0xffffu) << 16) | ((state1 >> 16) & 0xffffu);
}

// 0x180024f00 masks the seed into 31 bits before handing it to the engine, and
// does it for both consumers: m_pPredictionRandomSeed and vstdlib!RandomSeed.
inline constexpr uint32_t kSeedMask = 0x7fffffffu;

inline uint32_t PredictionSeed(uint32_t commandNumber)
{
    return CommandSeed(commandNumber) & kSeedMask;
}

// -------------------------------------------------------------- spread seed
//
// 0x1800859c0 formats the command number with "%d" (0x18033f570) and hashes the
// text, then folds one digest byte with ~(byte & maxSeed). maxSeed is
// swcs_weapon_max_spread_seed (default 0xff). The byte index is 7, taken from a
// 64-bit load shifted right by 56.
inline uint32_t SpreadSeed(int commandNumber, uint32_t maxSeed = 0xff)
{
    char text[24];
    std::snprintf(text, sizeof(text), "%d", commandNumber);

    MD5 md5;
    md5.Update(text, std::strlen(text));
    uint8_t digest[16];
    md5.Final(digest);

    const uint32_t folded = digest[7];
    return ~(folded & maxSeed);
}

// -------------------------------------------------------------------- stream
//
// The per-shot stream is the observed `ran1` generator in random_ran1.h
// (0x180083d00), not an LCG. RandomStream stays as the name the callers use.
using RandomStream = Ran1;

} // namespace seed
} // namespace sf
