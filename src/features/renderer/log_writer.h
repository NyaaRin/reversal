#pragma once
// 0x180014410: a thread-safe CRT logger.  The recovered body locks a CRT
// mutex, optionally writes to stdout, and optionally writes to a global FILE*.
// Both destinations are plain process data, so this is reconstructed without
// any engine interface.

#include <cstdarg>
#include <cstdio>

namespace sf {
namespace renderer {

// The recovered globals DAT_1803fa567 (stdout gate) and DAT_1803f9240 (file).
// These setters expose the same two inputs for the self-test and callers.
void SetLogToStdout(bool enabled);
void SetLogStream(std::FILE* stream);

void LogV(const char* format, va_list args);
void Log(const char* format, ...);

} // namespace renderer
} // namespace sf
