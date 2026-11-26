#include "log_writer.h"

#include <mutex>

namespace sf {
namespace renderer {
namespace {

std::mutex g_log_mutex;
bool g_log_to_stdout = false;
std::FILE* g_log_stream = nullptr;

} // namespace

void SetLogToStdout(bool enabled)
{
    std::lock_guard<std::mutex> lock(g_log_mutex);
    g_log_to_stdout = enabled;
}

void SetLogStream(std::FILE* stream)
{
    std::lock_guard<std::mutex> lock(g_log_mutex);
    g_log_stream = stream;
}

void LogV(const char* format, va_list args)
{
    if (format == nullptr)
        return;

    std::lock_guard<std::mutex> lock(g_log_mutex);

    if (g_log_to_stdout)
    {
        va_list stdout_args;
        va_copy(stdout_args, args);
        std::vfprintf(stdout, format, stdout_args);
        va_end(stdout_args);
        std::fflush(stdout);
    }

    if (g_log_stream != nullptr)
    {
        va_list file_args;
        va_copy(file_args, args);
        std::vfprintf(g_log_stream, format, file_args);
        va_end(file_args);
        std::fflush(g_log_stream);
    }
}

void Log(const char* format, ...)
{
    va_list args;
    va_start(args, format);
    LogV(format, args);
    va_end(args);
}

} // namespace renderer
} // namespace sf
