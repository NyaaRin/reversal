#pragma once
// Renderer helpers whose recovered bodies are closed over the CRT/MSVC STL
// layer rather than engine interfaces.  They are exercised alongside the
// pinned Dear ImGui 1.92.8 context in renderer_selftest.

#include <cstdarg>
#include <cstddef>
#include <string>

namespace sf {
namespace renderer {

// 0x180012ac0: __stdio_common_vsprintf with the standard snprintf option bit.
int FormatV(char* buffer, std::size_t size, const char* format, va_list args);
int Format(char* buffer, std::size_t size, const char* format, ...);

// 0x18001d080: MSVC std::string assignment from an explicit byte range.
void AssignString(std::string& out, const char* data, std::size_t size);

// 0x180140b70: filter five control/quote/semicolon bytes, cap at 120 bytes,
// then trim ASCII spaces from both ends.
std::string FilterAndTrim(std::string input);

// 0x1802d8350: malloc + _callnewh retry loop, then the normal C++ throw.
void* AllocateOrThrow(std::size_t size);

} // namespace renderer
} // namespace sf
