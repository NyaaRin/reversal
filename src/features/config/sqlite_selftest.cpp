// Stage 3.13 SQLite decode self-test.
//
// The fixture is built as raw SQLite pages by the independent builder below; it
// does not call the reader's record/page structs.  The reader then opens the
// bytes through ValidateHeader, walks page 1 (sqlite_schema), follows the root
// interior page and all leaf/overflow pages, and decodes every serial type.
//
// The 528 generated config keys are all present, plus rows for every serial
// type and a 2200-byte blob that spills into four overflow pages.

#include "config_keys.h"
#include "sqlite.h"

#include <cmath>
#include <cstdio>
#include <cstring>
#include <map>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace {

int g_failures = 0;

void Check(bool condition, const char* what)
{
    if (!condition)
    {
        std::printf("FAIL: %s\n", what);
        ++g_failures;
    }
}

void CheckInt(long long actual, long long expected, const char* what)
{
    if (actual != expected)
    {
        std::printf("FAIL: %s (expected %lld, got %lld)\n", what, expected,
                    actual);
        ++g_failures;
    }
}

void CheckText(std::string_view actual, std::string_view expected,
               const char* what)
{
    if (actual != expected)
    {
        std::printf("FAIL: %s (expected \"%.*s\", got \"%.*s\")\n", what,
                    static_cast<int>(expected.size()), expected.data(),
                    static_cast<int>(actual.size()), actual.data());
        ++g_failures;
    }
}

// ---------------------------------------------------------------- fixture
namespace fixture {

using Bytes = std::vector<unsigned char>;

constexpr std::size_t kPageSize = 512;
constexpr std::size_t kUsable = 512;

void WriteBe16(Bytes& out, std::size_t offset, std::uint16_t value)
{
    out[offset] = static_cast<unsigned char>(value >> 8);
    out[offset + 1] = static_cast<unsigned char>(value & 0xff);
}

void WriteBe32(Bytes& out, std::size_t offset, std::uint32_t value)
{
    out[offset] = static_cast<unsigned char>(value >> 24);
    out[offset + 1] = static_cast<unsigned char>(value >> 16);
    out[offset + 2] = static_cast<unsigned char>(value >> 8);
    out[offset + 3] = static_cast<unsigned char>(value);
}

Bytes EncodeVarint(std::uint64_t value)
{
    Bytes out;
    if (value < (1ull << 56))
    {
        unsigned char groups[8] = {};
        std::size_t count = 0;
        do
        {
            groups[count++] = static_cast<unsigned char>(value & 0x7f);
            value >>= 7;
        } while (value != 0);

        for (std::size_t i = count; i > 0; --i)
        {
            unsigned char byte = groups[i - 1];
            if (i > 1)
                byte = static_cast<unsigned char>(byte | 0x80);
            out.push_back(byte);
        }
        return out;
    }

    out.resize(9);
    out[8] = static_cast<unsigned char>(value & 0xff);
    value >>= 8;
    for (int i = 7; i >= 0; --i)
    {
        out[static_cast<std::size_t>(i)] =
            static_cast<unsigned char>((value & 0x7f) | 0x80);
        value >>= 7;
    }
    return out;
}

std::size_t VarintSize(std::uint64_t value)
{
    return EncodeVarint(value).size();
}

struct Field
{
    std::uint64_t serial = 0;
    Bytes body;
};

Field Serial(std::uint64_t serial, Bytes body = {})
{
    Field field;
    field.serial = serial;
    field.body = std::move(body);
    return field;
}

Field Text(std::string_view text)
{
    Field field;
    field.serial = 13ull + 2ull * text.size();
    field.body.assign(text.begin(), text.end());
    return field;
}

Field Blob(const Bytes& blob)
{
    Field field;
    field.serial = 12ull + 2ull * blob.size();
    field.body = blob;
    return field;
}

Field Integer(std::int64_t value, int width)
{
    static const std::uint64_t serialForWidth[9] = {
        0, 1, 2, 3, 4, 0, 5, 0, 6};
    Bytes body(static_cast<std::size_t>(width), 0);
    const std::uint64_t bits = static_cast<std::uint64_t>(value);
    for (int i = 0; i < width; ++i)
    {
        body[static_cast<std::size_t>(width - 1 - i)] =
            static_cast<unsigned char>((bits >> (8 * i)) & 0xff);
    }
    return Serial(serialForWidth[width], std::move(body));
}

Field Real(double value)
{
    std::uint64_t bits = 0;
    std::memcpy(&bits, &value, sizeof(bits));
    Bytes body(8, 0);
    for (int i = 0; i < 8; ++i)
        body[static_cast<std::size_t>(7 - i)] =
            static_cast<unsigned char>((bits >> (8 * i)) & 0xff);
    return Serial(7, std::move(body));
}

Bytes MakeRecord(const std::vector<Field>& fields)
{
    Bytes serials;
    for (const Field& field : fields)
    {
        const Bytes encoded = EncodeVarint(field.serial);
        serials.insert(serials.end(), encoded.begin(), encoded.end());
    }

    std::size_t headerSize = 1 + serials.size();
    Bytes header = EncodeVarint(headerSize);
    if (header.size() + serials.size() != headerSize)
    {
        headerSize = header.size() + serials.size();
        header = EncodeVarint(headerSize);
    }

    Bytes out = header;
    out.insert(out.end(), serials.begin(), serials.end());
    for (const Field& field : fields)
        out.insert(out.end(), field.body.begin(), field.body.end());
    return out;
}

struct Expected
{
    enum class Kind { Null, Int, Real, Text, Blob };

    Kind kind = Kind::Null;
    std::int64_t integer = 0;
    double real = 0.0;
    Bytes bytes;
};

Expected ExpectedNull()
{
    return Expected{};
}

Expected ExpectedInt(std::int64_t value)
{
    Expected out;
    out.kind = Expected::Kind::Int;
    out.integer = value;
    return out;
}

Expected ExpectedReal(double value)
{
    Expected out;
    out.kind = Expected::Kind::Real;
    out.real = value;
    return out;
}

Expected ExpectedText(std::string_view value)
{
    Expected out;
    out.kind = Expected::Kind::Text;
    out.bytes.assign(value.begin(), value.end());
    return out;
}

Expected ExpectedBlob(const Bytes& value)
{
    Expected out;
    out.kind = Expected::Kind::Blob;
    out.bytes = value;
    return out;
}

struct RowSpec
{
    std::int64_t rowid = 0;
    std::string key;
    Bytes payload;
    std::size_t local = 0;
    std::uint32_t firstOverflow = 0;
    Expected expected;
};

struct LeafSpec
{
    std::uint32_t page = 0;
    std::vector<std::size_t> rows;
};

struct Built
{
    Bytes bytes;
    std::vector<RowSpec> rows;
    std::uint32_t pageCount = 0;
    std::uint32_t leafCount = 0;
    std::uint32_t overflowPages = 0;
    std::uint32_t tableRoot = 2;
};

std::string HexKey(std::uint64_t value)
{
    char text[17] = {};
    std::snprintf(text, sizeof(text), "%016llx",
                  static_cast<unsigned long long>(value));
    return std::string(text);
}

RowSpec MakeRow(std::string key, Field value, Expected expected)
{
    RowSpec row;
    row.key = std::move(key);
    row.payload = MakeRecord({Text(row.key), std::move(value)});
    row.expected = std::move(expected);
    return row;
}

std::size_t LocalPayload(std::size_t payload)
{
    if (payload <= kUsable - 35)
        return payload;
    const std::size_t minimum = ((kUsable - 12) * 32 / 255) - 23;
    const std::size_t candidate =
        minimum + (payload - minimum) % (kUsable - 4);
    return candidate <= kUsable - 35 ? candidate : minimum;
}

Bytes MakeCell(const RowSpec& row)
{
    Bytes cell = EncodeVarint(row.payload.size());
    const Bytes rowid = EncodeVarint(static_cast<std::uint64_t>(row.rowid));
    cell.insert(cell.end(), rowid.begin(), rowid.end());
    cell.insert(cell.end(), row.payload.begin(),
                row.payload.begin() + static_cast<std::ptrdiff_t>(row.local));
    if (row.local < row.payload.size())
    {
        const std::size_t at = cell.size();
        cell.resize(at + 4);
        WriteBe32(cell, at, row.firstOverflow);
    }
    return cell;
}

void BuildLeaf(Bytes& page, std::uint32_t pageNumber,
               const std::vector<RowSpec>& rows,
               const std::vector<std::size_t>& indexes)
{
    const std::size_t base = pageNumber == 1 ? 100u : 0u;
    page[base] = 0x0d;
    page[base + 1] = 0;
    page[base + 2] = 0;
    WriteBe16(page, base + 3, static_cast<std::uint16_t>(indexes.size()));
    page[base + 7] = 0;

    std::size_t cursor = kUsable;
    for (std::size_t i = 0; i < indexes.size(); ++i)
    {
        const Bytes cell = MakeCell(rows[indexes[i]]);
        cursor -= cell.size();
        std::memcpy(page.data() + cursor, cell.data(), cell.size());
        WriteBe16(page, base + 8 + i * 2,
                  static_cast<std::uint16_t>(cursor));
    }
    WriteBe16(page, base + 5, static_cast<std::uint16_t>(cursor));
}

void BuildInterior(Bytes& page, const std::vector<LeafSpec>& leaves,
                   const std::vector<RowSpec>& rows)
{
    page[0] = 0x05;
    page[1] = 0;
    page[2] = 0;
    const std::size_t cellCount = leaves.size() - 1;
    WriteBe16(page, 3, static_cast<std::uint16_t>(cellCount));
    WriteBe32(page, 8, leaves.back().page);
    page[7] = 0;

    std::size_t cursor = kUsable;
    for (std::size_t i = 0; i < cellCount; ++i)
    {
        const LeafSpec& leaf = leaves[i];
        const std::int64_t lastRowid = rows[leaf.rows.back()].rowid;
        Bytes cell(4, 0);
        WriteBe32(cell, 0, leaf.page);
        const Bytes key = EncodeVarint(static_cast<std::uint64_t>(lastRowid));
        cell.insert(cell.end(), key.begin(), key.end());

        cursor -= cell.size();
        std::memcpy(page.data() + cursor, cell.data(), cell.size());
        WriteBe16(page, 12 + i * 2, static_cast<std::uint16_t>(cursor));
    }
    WriteBe16(page, 5, static_cast<std::uint16_t>(cursor));
}

void BuildOverflow(Bytes& page, const Bytes& payload, std::size_t offset)
{
    const std::size_t remaining = payload.size() - offset;
    const std::size_t chunk = remaining < kUsable - 4 ? remaining : kUsable - 4;
    page[0] = 0;
    page[1] = 0;
    page[2] = 0;
    page[3] = 0;
    std::memcpy(page.data() + 4, payload.data() + offset,
                static_cast<std::size_t>(chunk));
    // The next-page number is patched by Build() because it depends on the
    // following overflow page's number.
}

Built Build()
{
    Built built;
    std::vector<RowSpec>& rows = built.rows;

    for (std::size_t i = 0; i < sf::config::kConfigKeyCount; ++i)
    {
        const sf::config::ConfigKey& key = sf::config::kConfigKeys[i];
        const std::string name = HexKey(key.key);
        switch (key.type)
        {
        case sf::config::ValueType::Bool:
        {
            const bool on = (i % 2) != 0;
            rows.push_back(MakeRow(name, Serial(on ? 9 : 8),
                                   ExpectedInt(on ? 1 : 0)));
            break;
        }
        case sf::config::ValueType::Int:
        {
            static const int widths[6] = {1, 2, 3, 4, 6, 8};
            static const std::int64_t values[6] = {
                -5, 1000, -100000, 100000000, -1000000000000ll,
                -1234567890123456ll};
            const int slot = static_cast<int>(i % 6);
            rows.push_back(MakeRow(name, Integer(values[slot], widths[slot]),
                                   ExpectedInt(values[slot])));
            break;
        }
        case sf::config::ValueType::Float:
        {
            const double value = static_cast<double>(i) + 0.25;
            rows.push_back(MakeRow(name, Real(value), ExpectedReal(value)));
            break;
        }
        case sf::config::ValueType::String:
        {
            const std::string value = "string-" + std::to_string(i);
            rows.push_back(MakeRow(name, Text(value), ExpectedText(value)));
            break;
        }
        }
    }

    rows.push_back(MakeRow("special:null", Serial(0), ExpectedNull()));
    rows.push_back(MakeRow("special:int1", Integer(-5, 1), ExpectedInt(-5)));
    rows.push_back(MakeRow("special:int2", Integer(0x1234, 2),
                           ExpectedInt(0x1234)));
    rows.push_back(MakeRow("special:int3", Integer(-0x123456, 3),
                           ExpectedInt(-0x123456)));
    rows.push_back(MakeRow("special:int4", Integer(0x12345678, 4),
                           ExpectedInt(0x12345678)));
    rows.push_back(MakeRow("special:int6", Integer(-0x123456789abcll, 6),
                           ExpectedInt(-0x123456789abcll)));
    rows.push_back(MakeRow("special:int8", Integer(-0x123456789abcdefll, 8),
                           ExpectedInt(-0x123456789abcdefll)));
    rows.push_back(MakeRow("special:zero", Serial(8), ExpectedInt(0)));
    rows.push_back(MakeRow("special:one", Serial(9), ExpectedInt(1)));
    rows.push_back(MakeRow("special:real", Real(3.25), ExpectedReal(3.25)));
    rows.push_back(
        MakeRow("special:text", Text("hello, sqlite"), ExpectedText("hello, sqlite")));
    rows.push_back(MakeRow("special:emptytext", Text(""), ExpectedText("")));

    Bytes blob;
    for (int i = 0; i < 16; ++i)
        blob.push_back(static_cast<unsigned char>(i * 17));
    rows.push_back(MakeRow("special:blob", Blob(blob), ExpectedBlob(blob)));
    rows.push_back(MakeRow("special:emptyblob", Blob({}), ExpectedBlob({})));

    Bytes bigBlob(2200);
    for (std::size_t i = 0; i < bigBlob.size(); ++i)
        bigBlob[i] = static_cast<unsigned char>((i * 7 + 3) & 0xff);
    rows.push_back(
        MakeRow("special:bigblob", Blob(bigBlob), ExpectedBlob(bigBlob)));

    for (std::size_t i = 0; i < rows.size(); ++i)
    {
        rows[i].rowid = static_cast<std::int64_t>(i + 1);
        rows[i].local = LocalPayload(rows[i].payload.size());
    }

    std::vector<LeafSpec> leaves;
    std::size_t used = 0;
    for (std::size_t i = 0; i < rows.size(); ++i)
    {
        const std::size_t cellSize =
            VarintSize(rows[i].payload.size()) +
            VarintSize(static_cast<std::uint64_t>(rows[i].rowid)) +
            rows[i].local + (rows[i].local < rows[i].payload.size() ? 4u : 0u);
        const std::size_t nextCount =
            leaves.empty() ? 1 : leaves.back().rows.size() + 1;
        if (!leaves.empty() &&
            8 + nextCount * 2 + used + cellSize > kUsable)
        {
            leaves.push_back(LeafSpec{});
            used = 0;
        }
        if (leaves.empty())
            leaves.push_back(LeafSpec{});
        leaves.back().rows.push_back(i);
        used += cellSize;
    }

    built.leafCount = static_cast<std::uint32_t>(leaves.size());
    const std::uint32_t firstOverflowPage = 3 + built.leafCount;
    std::uint32_t nextOverflowPage = firstOverflowPage;
    for (RowSpec& row : rows)
    {
        if (row.local < row.payload.size())
        {
            row.firstOverflow = nextOverflowPage;
            const std::size_t bytes = row.payload.size() - row.local;
            nextOverflowPage += static_cast<std::uint32_t>(
                (bytes + (kUsable - 4) - 1) / (kUsable - 4));
        }
    }
    built.overflowPages = nextOverflowPage - firstOverflowPage;
    built.pageCount = nextOverflowPage - 1;

    std::vector<Bytes> pages(built.pageCount, Bytes(kPageSize, 0));

    std::memcpy(pages[0].data(), "SQLite format 3\0", 16);
    WriteBe16(pages[0], 16, static_cast<std::uint16_t>(kPageSize));
    pages[0][18] = 1;
    pages[0][19] = 1;
    pages[0][20] = 0;
    WriteBe32(pages[0], 24, 1);
    WriteBe32(pages[0], 28, built.pageCount);
    WriteBe32(pages[0], 40, 1);
    WriteBe32(pages[0], 56, 1);
    WriteBe32(pages[0], 92, 1);
    WriteBe32(pages[0], 96, 3045000);

    RowSpec schema;
    schema.rowid = 1;
    schema.payload = MakeRecord({
        Text("TABLE"),
        Text("settings"),
        Text("settings"),
        Integer(2, 1),
        Text("CREATE TABLE settings(key TEXT, value)"),
    });
    schema.local = schema.payload.size();
    BuildLeaf(pages[0], 1, {schema}, {0});

    for (std::size_t i = 0; i < leaves.size(); ++i)
    {
        leaves[i].page = 3 + static_cast<std::uint32_t>(i);
        const std::size_t pageNumber = static_cast<std::size_t>(leaves[i].page);
        BuildLeaf(pages[pageNumber - 1], leaves[i].page, rows, leaves[i].rows);
    }
    BuildInterior(pages[1], leaves, rows);

    for (const RowSpec& row : rows)
    {
        if (row.local >= row.payload.size())
            continue;
        std::uint32_t pageNumber = row.firstOverflow;
        std::size_t offset = row.local;
        while (offset < row.payload.size())
        {
            Bytes& page = pages[pageNumber - 1];
            BuildOverflow(page, row.payload, offset);
            const std::size_t chunk =
                row.payload.size() - offset < kUsable - 4
                    ? row.payload.size() - offset
                    : kUsable - 4;
            offset += chunk;
            if (offset < row.payload.size())
            {
                WriteBe32(page, 0, pageNumber + 1);
                ++pageNumber;
            }
        }
    }

    built.bytes.reserve(built.pageCount * kPageSize);
    for (const Bytes& page : pages)
        built.bytes.insert(built.bytes.end(), page.begin(), page.end());
    return built;
}

} // namespace fixture

// ---------------------------------------------------------------- assertions
bool SameValue(const sf::sqlite::Value& actual,
               const fixture::Expected& expected)
{
    using Kind = fixture::Expected::Kind;
    switch (expected.kind)
    {
    case Kind::Null:
        return actual.kind == sf::sqlite::ValueKind::Null;
    case Kind::Int:
        return actual.kind == sf::sqlite::ValueKind::Integer &&
               actual.integer == expected.integer;
    case Kind::Real:
        return actual.kind == sf::sqlite::ValueKind::Real &&
               actual.real == expected.real;
    case Kind::Text:
        return actual.kind == sf::sqlite::ValueKind::Text &&
               actual.bytes == std::string(expected.bytes.begin(),
                                           expected.bytes.end());
    case Kind::Blob:
        return actual.kind == sf::sqlite::ValueKind::Blob &&
               actual.bytes == std::string(expected.bytes.begin(),
                                           expected.bytes.end());
    }
    return false;
}

void TestVarints()
{
    using sf::sqlite::ReadVarint;

    const unsigned char one[] = {0x7f};
    std::uint64_t value = 0;
    std::size_t used = 0;
    Check(ReadVarint(one, sizeof(one), value, used) && value == 0x7f &&
              used == 1,
          "a one-byte varint");

    const unsigned char known[] = {0x81, 0x91, 0xd1, 0xac, 0x78};
    Check(ReadVarint(known, sizeof(known), value, used) &&
              value == 0x12345678 && used == 5,
          "the SQLite 0x12345678 varint vector");

    const unsigned char known2[] = {0x81, 0x81, 0x81, 0x81, 0x01};
    Check(ReadVarint(known2, sizeof(known2), value, used) &&
              value == 0x10204081 && used == 5,
          "the SQLite 0x10204081 varint vector");

    const unsigned char nonCanonical[] = {0x80, 0x7f};
    Check(ReadVarint(nonCanonical, sizeof(nonCanonical), value, used) &&
              value == 0x7f && used == 2,
          "a non-minimal two-byte varint is accepted");

    const unsigned char truncated[] = {0x80};
    Check(!ReadVarint(truncated, sizeof(truncated), value, used),
          "a truncated continuation is rejected");

    const unsigned char nine[] = {0xff, 0xff, 0xff, 0xff, 0xff,
                                  0xff, 0xff, 0xff, 0xff};
    Check(ReadVarint(nine, sizeof(nine), value, used) &&
              value == 0xffffffffffffffffull && used == 9,
          "the ninth byte contributes all eight bits");

    std::uint64_t roundTrip = 0x123456789abcdefull;
    const fixture::Bytes encoded = fixture::EncodeVarint(roundTrip);
    Check(ReadVarint(encoded.data(), encoded.size(), value, used) &&
              value == roundTrip && used == encoded.size(),
          "the fixture encoder round-trips through the binary decoder");
}

void TestRecordParsing()
{
    using namespace sf::sqlite;

    std::vector<Column> columns;
    Check(!ParseRecord(std::string(1, '\0'), columns),
          "a zero header size is rejected");
    Check(!ParseRecord(std::string{'\x02', static_cast<char>(0x80)}, columns),
          "a truncated serial varint is rejected");

    const std::string headerOnly = std::string{'\x01'};
    Check(ParseRecord(headerOnly, columns) && columns.empty(),
          "a one-byte header describes zero columns");

    const std::string tooLong = std::string{'\x02', '\x0e'};
    Check(!ParseRecord(tooLong, columns),
          "a field longer than the post-header body is rejected");

    // The binary checks each field against payload.size()-headerSize, not
    // against offset+length.  Two one-byte blobs after a two-byte header parse
    // successfully even though the second body byte is past the payload.
    const std::string cumulative =
        std::string{'\x03', '\x0e', '\x0e', '\x00'};
    Check(ParseRecord(cumulative, columns) && columns.size() == 2 &&
              columns[0].offset == 3 && columns[1].offset == 4,
          "the binary's per-field (not cumulative) body check is preserved");
    Value second;
    Check(!DecodeValue(cumulative, columns[1], second),
          "the reconstruction refuses the out-of-bounds extraction the binary performs");

    const std::string serial10 = std::string{'\x02', '\x0a'};
    Check(ParseRecord(serial10, columns) && columns.size() == 1 &&
              columns[0].serialType == 10 && columns[0].length == 0,
          "serial type 10 is accepted as a zero-length column");
    Check(DecodeValue(serial10, columns[0], second) &&
              second.kind == ValueKind::Null,
          "serial type 10 decodes as NULL");

    const std::string serial11 = std::string{'\x02', '\x0b'};
    Check(ParseRecord(serial11, columns) && columns.size() == 1 &&
              columns[0].serialType == 11 && columns[0].length == 0,
          "serial type 11 is accepted as a zero-length column");
    Check(DecodeValue(serial11, columns[0], second) &&
              second.kind == ValueKind::Null,
          "serial type 11 decodes as NULL");
}

void TestPayloadAssembler()
{
    using namespace sf::sqlite;

    DatabaseImage db;
    db.header.pageSize = 512;
    db.header.usableBytes = 512;
    db.header.pageCount = 4;

    std::string out;
    Check(!AssemblePayload(db, 0x2000001ull, std::string_view(), 0, out),
          "payloads above 0x2000000 are refused");

    fixture::Bytes cell(96, 0);
    // U=512: payload 600 uses 92 local bytes; the next four bytes are the
    // overflow pointer and are zero, so the chain ends prematurely.
    Check(!AssemblePayload(db, 600, std::string_view(
                                      reinterpret_cast<const char*>(cell.data()),
                                      cell.size()),
                            cell.size(), out),
          "a zero overflow pointer with bytes remaining is refused");

    fixture::Bytes good(512, 0);
    fixture::WriteBe32(good, 0, 0);
    Check(!AssemblePayload(db, 600,
                           std::string_view(
                               reinterpret_cast<const char*>(good.data()), 40),
                           40, out),
          "a payload whose local prefix exceeds the cell is refused");
}

void TestDatabase(const fixture::Built& built)
{
    using namespace sf::sqlite;

    Check(built.leafCount >= 3, "the fixture has a multi-leaf table");
    Check(built.overflowPages >= 1, "the fixture has an overflow chain");

    CheckInt(static_cast<long long>(built.rows.size()),
             static_cast<long long>(sf::config::kConfigKeyCount) + 15,
             "the fixture holds all 528 config keys plus fifteen serial rows");

    BtreePage rootPage;
    Check(ParseBtreePage(std::string_view(
                             reinterpret_cast<const char*>(built.bytes.data() +
                                                          512),
                             512),
                         2, rootPage) &&
              rootPage.type == kInteriorTablePage,
          "the table root is an interior table page");
    CheckInt(rootPage.cellCount,
             static_cast<long long>(built.leafCount) - 1,
             "the interior page has one separator per non-rightmost leaf");
    CheckInt(rootPage.rightMost,
             static_cast<long long>(built.leafCount) + 2,
             "the right-most child is the last leaf");

    const std::string_view image(
        reinterpret_cast<const char*>(built.bytes.data()), built.bytes.size());
    const Validation validation = ValidateHeader(image, built.bytes.size());
    Check(validation.error == Error::None,
          "the generated database header validates");
    CheckInt(static_cast<long long>(validation.header.pageCount),
             static_cast<long long>(built.pageCount),
             "the page count comes from the generated file size");

    DatabaseImage db;
    db.bytes = image;
    db.header = validation.header;

    std::vector<TableInfo> tables;
    Check(ReadTables(db, tables), "sqlite_schema walks successfully");
    CheckInt(static_cast<long long>(tables.size()), 1,
             "the fixture has one settings table");
    if (tables.size() == 1)
    {
        CheckText(tables[0].name, "settings", "the table name decodes");
        CheckInt(tables[0].rootPage, 2, "the root page decodes from column 3");
        CheckInt(tables[0].keyColumn, 0, "the key column is column 0");
        CheckText(tables[0].sql, "CREATE TABLE settings(key TEXT, value)",
                  "the CREATE TABLE text decodes");
    }

    std::vector<DecodedRow> rows;
    Check(ReadTableRows(db, 2, 0, rows),
          "the table root and all leaves/overflow pages walk successfully");
    CheckInt(static_cast<long long>(rows.size()),
             static_cast<long long>(built.rows.size()),
             "every row is enumerated");

    std::map<std::string, const DecodedRow*> byKey;
    for (const DecodedRow& row : rows)
        byKey[row.key] = &row;

    for (const fixture::RowSpec& expected : built.rows)
    {
        const auto found = byKey.find(expected.key);
        if (found == byKey.end())
        {
            std::printf("FAIL: missing row %s\n", expected.key.c_str());
            ++g_failures;
            continue;
        }
        const DecodedRow& row = *found->second;
        if (row.rowid != expected.rowid)
        {
            std::printf("FAIL: rowid mismatch for %s (expected %lld, got %lld)\n",
                        expected.key.c_str(),
                        static_cast<long long>(expected.rowid),
                        static_cast<long long>(row.rowid));
            ++g_failures;
        }
        if (row.values.size() != 2)
        {
            std::printf("FAIL: row %s has %zu values\n", expected.key.c_str(),
                        row.values.size());
            ++g_failures;
            continue;
        }
        Check(row.values[0].kind == ValueKind::Text,
              "the key column decodes as text");
        CheckText(row.values[0].bytes, expected.key,
                  "the key column bytes round-trip");
        if (!SameValue(row.values[1], expected.expected))
        {
            std::printf("FAIL: value mismatch for %s (kind %d/%d int %lld/%lld)\n",
                        expected.key.c_str(),
                        static_cast<int>(row.values[1].kind),
                        static_cast<int>(expected.expected.kind),
                        static_cast<long long>(row.values[1].integer),
                        static_cast<long long>(expected.expected.integer));
            ++g_failures;
        }
    }

    // The 2200-byte value is the one that actually crosses the overflow path.
    const auto big = byKey.find("special:bigblob");
    Check(big != byKey.end(), "the overflow row is present");
    if (big != byKey.end() && big->second->values.size() == 2)
    {
        Check(big->second->values[1].kind == ValueKind::Blob,
              "the overflow value decodes as a blob");
        CheckInt(static_cast<long long>(big->second->values[1].bytes.size()),
                 2200, "the overflow blob length is exact");
    }

    // A corrupted page type is skipped, not fatal, by 0x18014bff0.
    fixture::Bytes corrupt = built.bytes;
    corrupt[512] = 0x0a;
    const std::string_view corruptImage(
        reinterpret_cast<const char*>(corrupt.data()), corrupt.size());
    const Validation corruptValidation =
        ValidateHeader(corruptImage, corrupt.size());
    Check(corruptValidation.error == Error::None,
          "the corrupted page-type fixture still has a valid header");
    DatabaseImage corruptDb;
    corruptDb.bytes = corruptImage;
    corruptDb.header = corruptValidation.header;
    std::vector<DecodedRow> corruptRows;
    Check(ReadTableRows(corruptDb, 2, 0, corruptRows),
          "the walker reports success when the root page type is unknown");
    CheckInt(static_cast<long long>(corruptRows.size()), 0,
             "the unknown page type yields no rows");

    fixture::Bytes badMagic = built.bytes;
    badMagic[0] = 'X';
    Check(ValidateHeader(std::string_view(
                             reinterpret_cast<const char*>(badMagic.data()),
                             badMagic.size()),
                         badMagic.size())
                  .error == Error::NotDatabase,
          "a corrupted magic is not a database");

    const std::string_view shortImage(
        reinterpret_cast<const char*>(built.bytes.data()), 511);
    Check(ValidateHeader(shortImage, 511).error == Error::Truncated,
          "a file shorter than one page is truncated");
}

} // namespace

int main()
{
    using namespace sf::sqlite;

    TestVarints();
    TestRecordParsing();
    TestPayloadAssembler();

    const fixture::Built built = fixture::Build();
    TestDatabase(built);

    std::printf("\n%s (%d failure%s)\n",
                g_failures == 0 ? "SQLITE SELFTEST PASS" : "SQLITE SELFTEST FAIL",
                g_failures, g_failures == 1 ? "" : "s");
    return g_failures == 0 ? 0 : 1;
}
