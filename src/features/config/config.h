#pragma once
// Stage 3.13 — hash-keyed menu configuration.
//
// 0x1801aaa70 saves, 0x1801b2830 loads.  Both speak one line per setting:
//
//   <16 lowercase hex digits>=<value>\n
//
// The key is a 64-bit FNV-1a hash of the original setting name, so the file is
// deliberately not human-editable by name.  Values are decimal for bool/int,
// the default ostream representation for float, and raw text for strings.
//
// The loader builds std::map<uint64_t, std::string>, then applies each known
// key to its global.  A file that still has plaintext (pre-hash) keys is not
// migrated: if any valid hash lines are present alongside them the whole file
// is rejected and defaults are used, exactly as the warning says.

#include "config_keys.h"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <map>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>

namespace sf {
namespace config {

inline constexpr const char* kMayrrFolder = "mayrrX64";
inline constexpr const char* kSettingsFolder = "settings";
inline constexpr const char* kConfigExtension = ".cfg";
inline constexpr const char* kLastConfigFile = "last_config.txt";
inline constexpr const char* kDefaultConfigName = "default";
inline constexpr const char* kConfigHeader1 = "# mayrrX64 menu config\n";
inline constexpr const char* kConfigHeader2 = "# Keep it simple: key=value\n";
inline constexpr std::size_t kHashKeyLength = 16;

// 0x1801a93b0: bytes outside ASCII alnum plus space, '-' and '_' become '_';
// leading/trailing spaces are removed; an empty result becomes "default".
inline std::string SanitizeConfigName(std::string_view name)
{
    std::string out(name);
    for (char& raw : out)
    {
        const unsigned char c = static_cast<unsigned char>(raw);
        if (c >= 0x80)
            continue; // non-ASCII is left alone: the binary only tests c < 0x80
        const bool alnum = (c >= '0' && c <= '9') ||
                           (c >= 'A' && c <= 'Z') ||
                           (c >= 'a' && c <= 'z');
        if (!alnum && c != ' ' && c != '-' && c != '_')
            raw = '_';
    }

    std::size_t begin = 0;
    while (begin < out.size() && out[begin] == ' ')
        ++begin;
    std::size_t end = out.size();
    while (end > begin && out[end - 1] == ' ')
        --end;
    out = out.substr(begin, end - begin);
    if (out.empty())
        out = kDefaultConfigName;
    return out;
}

inline std::string JoinPath(std::string_view dir, std::string_view leaf)
{
    std::string out(dir);
    if (!out.empty() && out.back() != '\\' && out.back() != '/')
        out.push_back('\\');
    out.append(leaf);
    return out;
}

// %USERPROFILE%\Documents\mayrrX64\settings
inline std::string SettingsDirectory(std::string_view documents)
{
    return JoinPath(JoinPath(documents, kMayrrFolder), kSettingsFolder);
}

// %USERPROFILE%\Documents\mayrrX64\settings\<sanitized>.cfg
inline std::string ConfigPath(std::string_view documents, std::string_view name)
{
    return JoinPath(SettingsDirectory(documents),
                    SanitizeConfigName(name) + kConfigExtension);
}

inline std::string LastConfigPath(std::string_view documents)
{
    return JoinPath(SettingsDirectory(documents), kLastConfigFile);
}

inline char AsciiLower(char c)
{
    return (c >= 'A' && c <= 'Z') ? static_cast<char>(c + ('a' - 'A')) : c;
}

inline bool EndsWithIgnoreCase(std::string_view text, std::string_view suffix)
{
    if (suffix.size() > text.size())
        return false;
    const std::size_t offset = text.size() - suffix.size();
    for (std::size_t i = 0; i < suffix.size(); ++i)
        if (AsciiLower(text[offset + i]) != AsciiLower(suffix[i]))
            return false;
    return true;
}

inline bool IsConfigFileName(std::string_view fileName)
{
    return fileName.size() > 4 && EndsWithIgnoreCase(fileName, kConfigExtension);
}

inline std::string ConfigNameFromFile(std::string_view fileName)
{
    if (!IsConfigFileName(fileName))
        return std::string(fileName);
    return std::string(fileName.substr(0, fileName.size() - 4));
}

// ---------------------------------------------------------------- hashing
inline constexpr std::uint64_t kFnvOffsetBasis = 0xcbf29ce484222325ull;

inline constexpr std::uint64_t Fnv1a(std::string_view text)
{
    std::uint64_t hash = kFnvOffsetBasis;
    for (char c : text)
        hash = Fnv1aStep(hash, c);
    return hash;
}

// ------------------------------------------------------------- last config
// 0x1801a8dc0 / 0x1801a8c20.  Line 1 is the Auto-load-last-config toggle; line
// 2 is the selected config name.  The same file is written after every save
// and after every load.
struct LastConfig
{
    bool autoLoad = false;
    std::string name;
};

inline LastConfig ParseLastConfig(std::string_view text)
{
    LastConfig out;
    std::size_t lineStart = 0;
    int line = 0;
    while (lineStart <= text.size() && line < 2)
    {
        std::size_t lineEnd = text.find('\n', lineStart);
        if (lineEnd == std::string_view::npos)
            lineEnd = text.size();
        std::string_view value = text.substr(lineStart, lineEnd - lineStart);
        if (!value.empty() && value.back() == '\r')
            value.remove_suffix(1);

        if (line == 0)
            out.autoLoad = value == "1";
        else
            out.name = std::string(value);

        ++line;
        if (lineEnd == text.size())
            break;
        lineStart = lineEnd + 1;
    }
    return out;
}

inline std::string SerializeLastConfig(const LastConfig& last)
{
    std::string out = last.autoLoad ? "1\n" : "0\n";
    out += last.name;
    out += '\n';
    return out;
}

// ---------------------------------------------------------------- document
enum class ParseDisposition
{
    Applied,             // no plaintext keys: apply whatever hash values exist
    Defaults,            // plaintext keys but no valid hashes: leave defaults
    RejectedOldFormat,   // plaintext keys mixed with hashes: do not apply
};

struct ConfigDocument
{
    std::map<std::uint64_t, std::string> values;
    std::size_t plaintextKeys = 0;
    std::size_t validKeys = 0;
    std::size_t ignoredLines = 0;
    ParseDisposition disposition = ParseDisposition::Applied;
};

inline bool IsHexDigit(char c)
{
    return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') ||
           (c >= 'A' && c <= 'F');
}

inline int HexValue(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;
    return c - 'A' + 10;
}

// strtoull(key, nullptr, 16); the loader first insists on exactly 16 hex
// characters, so a shorter/longer key is a plaintext key.
inline bool ParseHashKey(std::string_view text, std::uint64_t& key)
{
    if (text.size() != kHashKeyLength)
        return false;
    std::uint64_t value = 0;
    for (char c : text)
    {
        if (!IsHexDigit(c))
            return false;
        value = (value << 4) | static_cast<std::uint64_t>(HexValue(c));
    }
    key = value;
    return true;
}

inline ConfigDocument ParseConfigDocument(std::string_view text)
{
    ConfigDocument out;
    std::size_t lineStart = 0;

    while (lineStart <= text.size())
    {
        std::size_t lineEnd = text.find('\n', lineStart);
        if (lineEnd == std::string_view::npos)
            lineEnd = text.size();

        std::string_view line = text.substr(lineStart, lineEnd - lineStart);
        if (!line.empty() && line.back() == '\r')
            line.remove_suffix(1);

        if (!line.empty() && line.front() != '#')
        {
            const std::size_t equals = line.find('=');
            if (equals != std::string_view::npos)
            {
                const std::string_view keyText = line.substr(0, equals);
                std::uint64_t key = 0;
                if (ParseHashKey(keyText, key))
                {
                    out.values[key] = std::string(line.substr(equals + 1));
                    ++out.validKeys;
                }
                else
                {
                    ++out.plaintextKeys;
                }
            }
            else
            {
                ++out.ignoredLines;
            }
        }

        if (lineEnd == text.size())
            break;
        lineStart = lineEnd + 1;
    }

    if (out.plaintextKeys == 0)
        out.disposition = ParseDisposition::Applied;
    else if (out.values.empty())
        out.disposition = ParseDisposition::Defaults;
    else
        out.disposition = ParseDisposition::RejectedOldFormat;
    return out;
}

inline const char* ParseDispositionText(ParseDisposition disposition)
{
    switch (disposition)
    {
    case ParseDisposition::Applied: return "applied";
    case ParseDisposition::Defaults: return "defaults (plaintext-only config)";
    case ParseDisposition::RejectedOldFormat:
        return "defaults (pre-hash config, NOT overwritten)";
    default: return "applied";
    }
}

// ---------------------------------------------------------------- accessors
inline const std::string* FindValue(const ConfigDocument& doc,
                                    std::uint64_t key)
{
    const auto it = doc.values.find(key);
    return it == doc.values.end() ? nullptr : &it->second;
}

// 0x1801aa240 -> 0x1801aa170.  Only the exact lowercase spellings are
// recognised; anything else leaves the caller's default in place.
inline bool ApplyBool(const ConfigDocument& doc, std::uint64_t key,
                      bool fallback)
{
    const std::string* value = FindValue(doc, key);
    if (value == nullptr)
        return fallback;
    if (*value == "1" || *value == "true" || *value == "on")
        return true;
    if (*value == "0" || *value == "false" || *value == "off")
        return false;
    return fallback;
}

// 0x1801aa2a0 uses strtol(value, &end, 10) and only checks end != value, so a
// numeric prefix is accepted and trailing junk is ignored.
inline int ApplyInt(const ConfigDocument& doc, std::uint64_t key, int fallback)
{
    const std::string* value = FindValue(doc, key);
    if (value == nullptr || value->empty())
        return fallback;
    const char* begin = value->c_str();
    char* end = nullptr;
    const long parsed = std::strtol(begin, &end, 10);
    if (end == begin)
        return fallback;
    return static_cast<int>(parsed);
}

// 0x1801aa350 has the same prefix rule with strtof.
inline float ApplyFloat(const ConfigDocument& doc, std::uint64_t key,
                        float fallback)
{
    const std::string* value = FindValue(doc, key);
    if (value == nullptr || value->empty())
        return fallback;
    const char* begin = value->c_str();
    char* end = nullptr;
    const float parsed = std::strtof(begin, &end);
    if (end == begin)
        return fallback;
    return parsed;
}

// 0x1801aa400 copies the value into the 0x200-byte theme path buffer.  The
// reconstructed form returns the value; the caller owns truncation.
inline std::string ApplyString(const ConfigDocument& doc, std::uint64_t key,
                               std::string fallback)
{
    const std::string* value = FindValue(doc, key);
    return value == nullptr ? fallback : *value;
}

// One of the twelve 0x1801aa0f0 groups.  Components are r, g, b, a in order.
inline bool ApplyVec4(const ConfigDocument& doc, std::uint64_t base,
                      float out[4], const float fallback[4])
{
    bool any = false;
    const char components[4] = {'r', 'g', 'b', 'a'};
    for (int i = 0; i < 4; ++i)
    {
        const std::uint64_t key = Vec4Key(base, components[i]);
        out[i] = ApplyFloat(doc, key, fallback[i]);
        any = any || FindValue(doc, key) != nullptr;
    }
    return any;
}

inline const ConfigKey* FindConfigKey(std::uint64_t key)
{
    std::size_t low = 0;
    std::size_t high = kConfigKeyCount;
    while (low < high)
    {
        const std::size_t mid = low + (high - low) / 2;
        if (kConfigKeys[mid].key < key)
            low = mid + 1;
        else
            high = mid;
    }
    if (low < kConfigKeyCount && kConfigKeys[low].key == key)
        return &kConfigKeys[low];
    return nullptr;
}

// ---------------------------------------------------------------- writers
inline std::string FormatHashKey(std::uint64_t key)
{
    static const char digits[] = "0123456789abcdef";
    std::string out(kHashKeyLength, '0');
    for (int i = 15; i >= 0; --i)
    {
        out[static_cast<std::size_t>(i)] = digits[key & 0xf];
        key >>= 4;
    }
    return out;
}

inline void WriteConfigHeader(std::ostream& out)
{
    out << kConfigHeader1 << kConfigHeader2;
}

inline void WriteBool(std::ostream& out, std::uint64_t key, bool value)
{
    out << FormatHashKey(key) << '=' << (value ? 1 : 0) << '\n';
}

inline void WriteInt(std::ostream& out, std::uint64_t key, int value)
{
    out << FormatHashKey(key) << '=' << value << '\n';
}

inline void WriteFloat(std::ostream& out, std::uint64_t key, float value)
{
    out << FormatHashKey(key) << '=' << value << '\n';
}

inline void WriteString(std::ostream& out, std::uint64_t key,
                        std::string_view value)
{
    out << FormatHashKey(key) << '=' << value << '\n';
}

// 0x1801aaa70's header and every direct inline write, plus the twelve vec4
// groups from 0x1801aa470.  The caller supplies the field values.
struct ConfigSnapshot
{
    std::vector<std::pair<std::uint64_t, std::string>> values;
};

inline std::string SerializeConfig(const ConfigSnapshot& snapshot)
{
    std::ostringstream out;
    WriteConfigHeader(out);
    for (const auto& entry : snapshot.values)
    {
        const ConfigKey* schema = FindConfigKey(entry.first);
        if (schema == nullptr)
            continue;
        switch (schema->type)
        {
        case ValueType::Bool:
            WriteBool(out, entry.first, !entry.second.empty() &&
                                            entry.second != "0" &&
                                            entry.second != "false" &&
                                            entry.second != "off");
            break;
        case ValueType::Int:
            WriteInt(out, entry.first, std::atoi(entry.second.c_str()));
            break;
        case ValueType::Float:
            WriteFloat(out, entry.first,
                       std::strtof(entry.second.c_str(), nullptr));
            break;
        case ValueType::String:
            WriteString(out, entry.first, entry.second);
            break;
        }
    }
    return out.str();
}

} // namespace config
} // namespace sf
