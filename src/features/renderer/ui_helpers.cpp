#include "ui_helpers.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <new>

namespace sf {
namespace renderer {

int FormatV(char* buffer, std::size_t size, const char* format, va_list args)
{
    const int result = std::vsnprintf(buffer, size, format, args);
    return result < 0 ? -1 : result;
}

int Format(char* buffer, std::size_t size, const char* format, ...)
{
    va_list args;
    va_start(args, format);
    const int result = FormatV(buffer, size, format, args);
    va_end(args);
    return result;
}

void AssignString(std::string& out, const char* data, std::size_t size)
{
    out.assign(data, size);
}

std::string FilterAndTrim(std::string input)
{
    // Exact bit mask from 0x180140b70: bits 0, 10, 13, 34 and 59.
    // Bytes above 0x3b bypass the mask, so 0x80..0xff are retained.
    constexpr std::uint64_t kDropMask = 0x0800000400002401ull;
    std::string out;
    out.reserve(input.size());
    for (unsigned char byte : input)
    {
        if (byte > 0x3b || ((kDropMask >> (byte & 0x3f)) & 1u) == 0)
            out.push_back(static_cast<char>(byte));
    }

    if (out.size() > 120)
        out.resize(120);

    std::size_t first = 0;
    while (first < out.size() && out[first] == ' ')
        ++first;

    std::size_t last = out.size();
    while (last > first && out[last - 1] == ' ')
        --last;

    return out.substr(first, last - first);
}

void* AllocateOrThrow(std::size_t size)
{
    for (;;)
    {
        void* memory = std::malloc(size);
        if (memory != nullptr)
            return memory;
        if (!_callnewh(size))
            break;
    }

    if (size == static_cast<std::size_t>(-1))
        throw std::bad_array_new_length();
    throw std::bad_alloc();
}

} // namespace renderer
} // namespace sf
