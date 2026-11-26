// Self-test for Stage 3.13: hash-keyed config, last_config.txt and the
// SQLite maintenance decisions.

#include <cmath>
#include <cstdio>
#include <string>
#include <vector>

#include "config.h"
#include "sqlite.h"
#include "ui_hash.h"

namespace {

int g_failures = 0;

void Check(bool condition, const char* what)
{
    std::printf("%s  %s\n", condition ? "PASS" : "FAIL", what);
    if (!condition)
        ++g_failures;
}

void CheckInt(long long actual, long long expected, const char* what)
{
    const bool ok = actual == expected;
    std::printf("%s  %s (got %lld, want %lld)\n", ok ? "PASS" : "FAIL",
                what, actual, expected);
    if (!ok)
        ++g_failures;
}

void CheckU64(std::uint64_t actual, std::uint64_t expected, const char* what)
{
    const bool ok = actual == expected;
    std::printf("%s  %s (got %llu, want %llu)\n", ok ? "PASS" : "FAIL",
                what, static_cast<unsigned long long>(actual),
                static_cast<unsigned long long>(expected));
    if (!ok)
        ++g_failures;
}

void CheckFloat(float actual, float expected, const char* what)
{
    const bool ok = std::fabs(actual - expected) < 0.0001f;
    std::printf("%s  %s (got %.4f, want %.4f)\n", ok ? "PASS" : "FAIL",
                what, actual, expected);
    if (!ok)
        ++g_failures;
}

void CheckText(const std::string& actual, const std::string& expected,
               const char* what)
{
    const bool ok = actual == expected;
    std::printf("%s  %s\n", ok ? "PASS" : "FAIL", what);
    if (!ok)
    {
        std::printf("      got  \"%s\"\n", actual.c_str());
        std::printf("      want \"%s\"\n", expected.c_str());
        ++g_failures;
    }
}

std::string MakeSqliteHeader(std::uint32_t pageSize, std::uint8_t reserved,
                             std::size_t size = 100)
{
    std::string header(size, '\0');
    for (std::size_t i = 0; i < 16; ++i)
        header[i] = sf::sqlite::kMagic[i];
    const std::uint16_t encoded =
        pageSize == 65536 ? 1 : static_cast<std::uint16_t>(pageSize);
    header[16] = static_cast<char>((encoded >> 8) & 0xff);
    header[17] = static_cast<char>(encoded & 0xff);
    header[20] = static_cast<char>(reserved);
    return header;
}

} // namespace

int main()
{
    using namespace sf::config;

    // -------------------------------------------------------------- schema
    {
        CheckInt(static_cast<long long>(kConfigKeyCount), 528,
                 "the saved/loaded schema has 528 keys");
        CheckInt(static_cast<long long>(kBoolKeyCount), 221, "221 bool keys");
        CheckInt(static_cast<long long>(kIntKeyCount), 115, "115 int keys");
        CheckInt(static_cast<long long>(kFloatKeyCount), 184, "184 float keys");
        CheckInt(static_cast<long long>(kStringKeyCount), 8, "8 string keys");
        CheckInt(static_cast<long long>(kBoolKeyCount + kIntKeyCount +
                                        kFloatKeyCount + kStringKeyCount),
                 static_cast<long long>(kConfigKeyCount),
                 "the type counts add up to the schema size");

        bool sorted = true;
        bool unique = true;
        for (std::size_t i = 1; i < kConfigKeyCount; ++i)
        {
            if (kConfigKeys[i - 1].key >= kConfigKeys[i].key)
                sorted = false;
        }
        for (std::size_t i = 0; i < kConfigKeyCount && unique; ++i)
            for (std::size_t j = i + 1; j < kConfigKeyCount; ++j)
                if (kConfigKeys[i].key == kConfigKeys[j].key)
                {
                    unique = false;
                    break;
                }
        Check(sorted, "the generated key table is strictly ascending");
        Check(unique, "no key appears twice");

        const ConfigKey* first = FindConfigKey(0x00ef60858204b8ccull);
        const ConfigKey* last = FindConfigKey(0xffdc1899996e4618ull);
        Check(first != nullptr && first->type == ValueType::Bool,
              "the first generated key is present and is a bool");
        Check(last != nullptr && last->type == ValueType::Bool,
              "the last generated key is present and is a bool");
        Check(FindConfigKey(0x1111111111111111ull) == nullptr,
              "an unknown key is not in the schema");

        const ConfigKey* stringKey = FindConfigKey(0xfdd8851398083335ull);
        Check(stringKey != nullptr && stringKey->type == ValueType::String,
              "the string-key sample is present");
    }

    // --------------------------------------------------------------- hash
    {
        CheckU64(Fnv1a(""), 0xcbf29ce484222325ull, "FNV-1a offset basis");
        CheckU64(Fnv1a("a"), 0xaf63dc4c8601ec8cull, "FNV-1a of a");
        CheckU64(Fnv1a("foobar"), 0x85944171f73967e8ull, "FNV-1a of foobar");

        const std::uint64_t base = 0x48e79057e40ce6c9ull;
        CheckU64(Vec4Key(base, 'r'), (base ^ 0x72ull) * kFnvPrime,
                 "the r component is a single FNV step");
        CheckU64(Vec4Key(base, 'g'), (base ^ 0x67ull) * kFnvPrime,
                 "the g component is a single FNV step");
        bool vec4Present = true;
        for (char component : std::string("rgba"))
        {
            const ConfigKey* key = FindConfigKey(Vec4Key(base, component));
            if (key == nullptr || key->type != ValueType::Float)
                vec4Present = false;
        }
        Check(vec4Present, "all four vec4 keys are float schema entries");
    }

    // ------------------------------------------------------------- names
    {
        CheckText(SanitizeConfigName(" my config "), "my config",
                  "spaces around a config name are trimmed");
        CheckText(SanitizeConfigName("a/b:c*?"), "a_b_c__",
                  "ASCII punctuation becomes underscore");
        CheckText(SanitizeConfigName("a b-c_d"), "a b-c_d",
                  "space, hyphen and underscore are kept");
        CheckText(SanitizeConfigName(""), "default",
                  "an empty name becomes default");
        CheckText(SanitizeConfigName("   "), "default",
                  "a blank name becomes default");
        CheckText(SanitizeConfigName("\xC3\xA9"), "\xC3\xA9",
                  "non-ASCII bytes are preserved");
    }

    // -------------------------------------------------------------- paths
    {
        CheckText(SettingsDirectory("C:\\Users\\x\\Documents"),
                  "C:\\Users\\x\\Documents\\mayrrX64\\settings",
                  "the settings directory is mayrrX64\\settings");
        CheckText(ConfigPath("C:\\Users\\x\\Documents", "my:cfg"),
                  "C:\\Users\\x\\Documents\\mayrrX64\\settings\\my_cfg.cfg",
                  "the config path sanitizes the file name");
        Check(IsConfigFileName("foo.cfg"), "a .cfg file is recognised");
        Check(IsConfigFileName("FOO.CFG"), "the extension is case-insensitive");
        Check(!IsConfigFileName("foo.cfg.bak"),
              "a backup extension is not a config");
        Check(!IsConfigFileName(".cfg"), "a bare extension is not a config");
        CheckText(ConfigNameFromFile("my cfg.cfg"), "my cfg",
                  "the extension is removed from the display name");
    }

    // --------------------------------------------------------- last config
    {
        LastConfig last = ParseLastConfig("1\nmy cfg\n");
        Check(last.autoLoad, "last_config line 1 enables auto-load");
        CheckText(last.name, "my cfg", "last_config line 2 is the name");

        last = ParseLastConfig("0\n");
        Check(!last.autoLoad, "line 1 of 0 disables auto-load");
        CheckText(last.name, "", "a missing second line is an empty name");

        CheckText(SerializeLastConfig({true, "my cfg"}), "1\nmy cfg\n",
                  "last_config is written as two lines");
    }

    // ------------------------------------------------------------- parsing
    {
        ConfigDocument doc = ParseConfigDocument(
            "# mayrrX64 menu config\n"
            "# Keep it simple: key=value\n"
            "\n"
            "00ef60858204b8cc=1\n"
            "0143DBBF47063DAB=1.5\n"
            "024b6cc6650e79f0=42\n"
            "fdd8851398083335=hello world\n");
        CheckInt(static_cast<long long>(doc.validKeys), 4, "four hashed keys parse");
        CheckInt(static_cast<long long>(doc.plaintextKeys), 0,
                 "hashed lines are not plaintext keys");
        Check(doc.disposition == ParseDisposition::Applied,
              "a hashed-only document is applied");
        Check(FindValue(doc, 0x00ef60858204b8ccull) != nullptr,
              "the bool key is in the map");
        CheckText(ApplyString(doc, 0xfdd8851398083335ull, ""), "hello world",
                  "spaces in a value are preserved");

        ConfigDocument upper = ParseConfigDocument("ABCDEF0123456789=7\n");
        CheckInt(static_cast<long long>(upper.validKeys), 1,
                 "uppercase hex keys are accepted");
        Check(FindValue(upper, 0xabcdef0123456789ull) != nullptr,
              "uppercase hex parses to the same key");

        ConfigDocument noEquals = ParseConfigDocument("not a setting\n");
        Check(noEquals.disposition == ParseDisposition::Applied,
              "a line without '=' is ignored, not counted as old-format");
        CheckInt(static_cast<long long>(noEquals.ignoredLines), 1,
                 "the ignored line is counted");

        ConfigDocument shortKey =
            ParseConfigDocument("1234=1\n0000000000000001=2\n");
        CheckInt(static_cast<long long>(shortKey.plaintextKeys), 1,
                 "a short key is a plaintext key");
        Check(shortKey.disposition == ParseDisposition::RejectedOldFormat,
              "mixed plaintext and hashed keys are rejected");

        ConfigDocument plainOnly = ParseConfigDocument("aim_enabled=1\n");
        CheckInt(static_cast<long long>(plainOnly.plaintextKeys), 1,
                 "a name key is plaintext");
        Check(plainOnly.disposition == ParseDisposition::Defaults,
              "a plaintext-only file falls back to defaults");

        ConfigDocument noEqualsOnly = ParseConfigDocument("junk\n");
        Check(noEqualsOnly.disposition == ParseDisposition::Applied,
              "a file with no key lines is applied (no-op)");
    }

    // ---------------------------------------------------------- accessors
    {
        ConfigDocument doc = ParseConfigDocument(
            "00ef60858204b8cc=true\n"
            "0000000000000002=on\n"
            "0000000000000003=0\n"
            "0000000000000004=false\n"
            "0000000000000005=off\n"
            "0000000000000006=True\n"
            "0000000000000007=12junk\n"
            "0000000000000008=-7\n"
            "0000000000000009=junk\n"
            "000000000000000a=2.5x\n"
            "000000000000000b=\n");
        Check(ApplyBool(doc, 0x00ef60858204b8ccull, false),
              "true is accepted");
        Check(ApplyBool(doc, 0x0000000000000002ull, false), "on is accepted");
        Check(!ApplyBool(doc, 0x0000000000000003ull, true), "0 is accepted");
        Check(!ApplyBool(doc, 0x0000000000000004ull, true), "false is accepted");
        Check(!ApplyBool(doc, 0x0000000000000005ull, true), "off is accepted");
        Check(ApplyBool(doc, 0x0000000000000006ull, false) == false,
              "bool matching is case-sensitive");
        CheckInt(ApplyInt(doc, 0x0000000000000007ull, 0), 12,
                 "a numeric prefix is accepted");
        CheckInt(ApplyInt(doc, 0x0000000000000008ull, 0), -7,
                 "negative integers parse");
        CheckInt(ApplyInt(doc, 0x0000000000000009ull, 77), 77,
                 "a non-numeric value leaves the default");
        CheckFloat(ApplyFloat(doc, 0x000000000000000aull, 0.0f), 2.5f,
                   "a float prefix is accepted");
        CheckInt(ApplyInt(doc, 0x000000000000000bull, 9), 9,
                 "an empty value leaves the int default");
        Check(ApplyBool(doc, 0xffffffffffffffffull, true),
              "a missing bool leaves the fallback");
    }

    // -------------------------------------------------------------- write
    {
        CheckText(FormatHashKey(1), "0000000000000001",
                  "keys are exactly 16 lowercase hex digits");
        CheckText(FormatHashKey(0xabcdef0123456789ull),
                  "abcdef0123456789", "keys are lowercase hex");

        std::ostringstream out;
        WriteConfigHeader(out);
        WriteBool(out, 0x00ef60858204b8ccull, true);
        WriteInt(out, 0x024b6cc6650e79f0ull, -4);
        WriteFloat(out, 0x0143dbbf47063dabull, 1.5f);
        WriteString(out, 0xfdd8851398083335ull, "x y");
        const std::string text = out.str();
        Check(text.find("# mayrrX64 menu config\n") == 0,
              "the header starts with the recovered comment");
        Check(text.find("# Keep it simple: key=value\n") != std::string::npos,
              "the second header line is recovered");
        Check(text.find("00ef60858204b8cc=1\n") != std::string::npos,
              "bool writes 1");
        Check(text.find("024b6cc6650e79f0=-4\n") != std::string::npos,
              "int writes decimal");
        Check(text.find("0143dbbf47063dab=1.5\n") != std::string::npos,
              "float uses the stream representation");
        Check(text.find("fdd8851398083335=x y\n") != std::string::npos,
              "string writes the raw value");
    }

    // ----------------------------------------------------------- roundtrip
    {
        ConfigSnapshot snapshot;
        snapshot.values.push_back({0x00ef60858204b8ccull, "1"});
        snapshot.values.push_back({0x024b6cc6650e79f0ull, "42"});
        snapshot.values.push_back({0x0143dbbf47063dabull, "1.5"});
        snapshot.values.push_back({0xfdd8851398083335ull, "hello"});
        const ConfigDocument doc = ParseConfigDocument(SerializeConfig(snapshot));
        Check(doc.disposition == ParseDisposition::Applied,
              "a serialized config is applied");
        Check(ApplyBool(doc, 0x00ef60858204b8ccull, false),
              "the bool survives the roundtrip");
        CheckInt(ApplyInt(doc, 0x024b6cc6650e79f0ull, 0), 42,
                 "the int survives the roundtrip");
        CheckFloat(ApplyFloat(doc, 0x0143dbbf47063dabull, 0.0f), 1.5f,
                   "the float survives the roundtrip");
        CheckText(ApplyString(doc, 0xfdd8851398083335ull, ""), "hello",
                  "the string survives the roundtrip");
    }

    // ------------------------------------------------------------- vec4
    {
        const std::uint64_t base = 0x48e79057e40ce6c9ull;
        const std::uint64_t r = Vec4Key(base, 'r');
        ConfigDocument theme;
        theme.values[r] = "0.25";
        theme.values[Vec4Key(base, 'a')] = "1.0";
        float out[4] = {0, 0, 0, 0};
        const float fallback[4] = {0.1f, 0.2f, 0.3f, 0.4f};
        Check(ApplyVec4(theme, base, out, fallback),
              "a present vec4 key reports a hit");
        CheckFloat(out[0], 0.25f, "the red component is applied");
        CheckFloat(out[1], 0.2f, "the missing green keeps its fallback");
        CheckFloat(out[3], 1.0f, "the alpha component is applied");
    }

    // ------------------------------------------------------------ sqlite
    {
        using namespace sf::sqlite;

        const std::string header = MakeSqliteHeader(4096, 0);
        Validation valid = ValidateHeader(header, 4096u * 3);
        Check(valid.error == Error::None, "a normal SQLite header validates");
        CheckInt(static_cast<long long>(valid.header.pageSize), 4096,
                 "the page size is big-endian at offset 16");
        CheckInt(static_cast<long long>(valid.header.pageCount), 3,
                 "the page count comes from the file size");
        CheckInt(static_cast<long long>(valid.header.usableBytes), 4096,
                 "a zero reserved byte leaves the whole page usable");

        Validation big = ValidateHeader(MakeSqliteHeader(65536, 0), 65536ull);
        Check(big.error == Error::None && big.header.pageSize == 65536,
              "encoded page size 1 means 65536");

        Validation small = ValidateHeader(MakeSqliteHeader(256, 0), 4096);
        Check(small.error == Error::BadPageSize,
              "a page size below 512 is rejected");
        Validation odd =
            ValidateHeader(MakeSqliteHeader(1000, 0), 4000);
        Check(odd.error == Error::BadPageSize,
              "a non-power-of-two page size is rejected");
        Validation reserved = ValidateHeader(MakeSqliteHeader(512, 33), 1024);
        Check(reserved.error == Error::BadReservedSize,
              "a reserved tail leaving less than 480 bytes is rejected");

        std::string badMagic = header;
        badMagic[0] = 'X';
        Check(ValidateHeader(badMagic, 4096).error == Error::NotDatabase,
              "a wrong magic is not a database");
        Check(ValidateHeader(std::string(15, '\0'), 4096).error ==
                  Error::Truncated,
              "a short header is truncated");
        Check(ValidateHeader(header, 4095).error == Error::Truncated,
              "a partial first page is truncated");
        Check(!IsReadableSize(0x1ff), "files below 0x200 bytes are not read");
        Check(IsReadableSize(0x200), "0x200 bytes is the read floor");
        Check(IsReadableSize(kMaxDatabaseBytes), "the 256 MiB ceiling is inclusive");
        Check(!IsReadableSize(kMaxDatabaseBytes + 1),
              "files above 256 MiB are rejected as too large");

        std::string leaf(512, '\0');
        leaf[100] = static_cast<char>(kLeafTablePage);
        leaf[103] = 0;
        leaf[104] = 2;
        leaf[105] = 0x01;
        leaf[106] = static_cast<char>(0x80);
        leaf[107] = 3;
        BtreePage page;
        Check(ParseBtreePage(leaf, 1, page),
              "a leaf table page with a valid pointer array parses");
        CheckInt(page.cellCount, 2, "the cell count is at +3");
        CheckInt(page.cellContent, 0x0180, "the cell content offset is at +5");
        CheckInt(page.headerOffset, 100, "page 1's b-tree header follows the 100-byte header");
        CheckInt(page.cellPointerOffset, 108, "a leaf pointer array starts at header+8");

        std::string interior(512, '\0');
        interior[0] = static_cast<char>(kInteriorTablePage);
        interior[3] = 0;
        interior[4] = 1;
        interior[8] = 0;
        interior[9] = 0;
        interior[10] = 0;
        interior[11] = 42;
        Check(ParseBtreePage(interior, 2, page),
              "an interior table page parses");
        CheckInt(page.cellPointerOffset, 12, "an interior pointer array starts at +12");
        CheckInt(static_cast<long long>(page.rightMost), 42,
                 "the right-most child is at +8");
        Check(!ParseBtreePage(std::string(512, '\0'), 2, page),
              "an unknown page type is not a table page");

        CheckInt(FindKeyColumn("CREATE TABLE t (name TEXT, \"key\" TEXT, score INTEGER)"),
                 1, "the quoted key column is found at ordinal 1");
        CheckInt(FindKeyColumn("CREATE TABLE t (id INTEGER PRIMARY KEY, key TEXT)"),
                 1, "the unquoted key column is found at ordinal 1");
        CheckInt(FindKeyColumn("CREATE TABLE t (a TEXT, b INTEGER)"), -1,
                 "a table without a key column returns -1");
        CheckInt(FindKeyColumn("CREATE TABLE t (a TEXT CHECK (a IN ('x','y')), key TEXT)"),
                 1, "commas inside a CHECK expression do not shift the ordinal");

        Check(ShouldDropTable("players"), "ordinary tables are dropped");
        Check(!ShouldDropTable("cookies"), "cookies survive the table sweep");
        Check(!ShouldDropTable("sqlite_sequence"), "sqlite_ tables survive");
        CheckText(DropTableSql("players"), "DROP TABLE IF EXISTS [players]",
                  "the drop statement quotes the table");
        CheckText(kListTablesSql, "SELECT name FROM sqlite_master WHERE type='table'",
                  "the table-list query is verbatim");
        CheckText(kCookieCountSql, "SELECT COUNT(*) FROM cookies",
                  "the cookie count query is verbatim");
        CheckText(kFreelistCountSql, "PRAGMA freelist_count",
                  "the freelist probe is verbatim");

        Check(IsDatabaseFileName("cl.db"), "cl.db is a database file");
        Check(IsDatabaseFileName("CL.DB"), "database extensions are case-insensitive");
        Check(IsDatabaseFileName("x.db-journal"), "a journal is a database sidecar");
        Check(IsDatabaseFileName("x.db-wal"), "a WAL is a database sidecar");
        Check(IsDatabaseFileName("x.sqlite"), "a .sqlite file is a database");
        Check(!IsDatabaseFileName("x.db.bak"), "a backup is not a database");
        Check(ActionForFile(true) == FileAction::NeverTruncate,
              "a database is never truncated");
        Check(ActionForFile(false) == FileAction::CanTruncate,
              "a non-database file can be truncated");

        MarkerReport markers =
            ScanMarkers({"players", "vcmod_cl_usersettings_1", "devicecookie"}, 4);
        CheckInt(markers.banTables, 1, "a client-side BAN table is counted");
        CheckInt(markers.deviceCookies, 1, "a device cookie is counted");
        CheckText(MarkerMessage("cl.db", markers),
                  "cl.db: 1 client-side BAN table(s) present (vcmod_cl_usersettings_*)",
                  "the BAN marker message is verbatim");

        MarkerReport clean = ScanMarkers({"players"}, 2);
        CheckText(MarkerMessage("mn.db", clean),
                  "mn.db: 1 table(s), 2 cookie(s) - no known AC marker",
                  "the clean marker message is verbatim");

        WipeResult wipe = PlanWipe({"players", "cookies", "sqlite_sequence"}, 4, 0);
        CheckInt(wipe.droppedTables, 1, "only ordinary tables are counted as dropped");
        CheckInt(wipe.cookiesCleared, 4, "cookie rows are counted");
        CheckInt(wipe.freedPages, 0, "a zero freelist needs no refill");
        CheckText(WipeMessage("client.dll", wipe),
                  "client.dll: 1 table(s) dropped, 4 cookie(s) cleared, 0 freed page(s) overwritten",
                  "the wipe success message is verbatim");

        WipeResult refill = PlanWipe({}, 0, 5000);
        CheckInt(refill.freedPages, 1024, "the refill is capped at 1024 pages");
        WipeResult smallRefill = PlanWipe({}, 0, 7);
        CheckInt(smallRefill.freedPages, 7, "the refill matches the freelist");

        CleanupCounts cleanup;
        AddCleanupResult(cleanup, true, false, false);
        AddCleanupResult(cleanup, false, true, true);
        AddCleanupResult(cleanup, false, true, false);
        CheckInt(cleanup.removed, 1, "a removal is counted");
        CheckInt(cleanup.truncated, 1, "a successful truncation is counted");
        CheckInt(cleanup.failed, 1, "a failed cleanup is counted");

        CheckU64(ImGuiHash("hello", 5), 0x9a71bb4cu,
                 "ImGuiHash matches CRC-32C for a bounded label");
        CheckU64(ImGuiHash("abc"), 0x364b3fb7u,
                 "ImGuiHash hashes a NUL-terminated label");
        CheckU64(ImGuiHash("b"), 0xd280b0c4u,
                 "ImGuiHash uses the binary's CRC-32C table");
        CheckU64(kImGuiHashTable[1], 0xf26b8303u,
                 "the generated table matches m64.dll table[1]");
        CheckU64(kImGuiHashTable[255], 0xad7d5351u,
                 "the generated table matches m64.dll table[255]");
        CheckU64(ImGuiHash("a###b"), ImGuiHash("b"),
                 "a triple hash restarts the ImGui ID hash");
        CheckU64(ImGuiHash("###x"), ImGuiHash("x"),
                 "a leading triple hash is skipped");
    }

    std::printf("\n%s (%d failure%s)\n",
                g_failures == 0 ? "CONFIG SELFTEST PASS" : "CONFIG SELFTEST FAIL",
                g_failures, g_failures == 1 ? "" : "s");
    return g_failures == 0 ? 0 : 1;
}
