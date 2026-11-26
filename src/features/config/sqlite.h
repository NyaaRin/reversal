#pragma once
// Stage 3.13 — the SQLite side of the config/maintenance feature.
//
// 0x18014c6b0  Features::Sqlite::Read(path): header and page validation
// 0x18014d5a0  module DB wipe through the engine's own sqlite3_exec
// 0x18014d1a0  refill the freelist with junk (SQLITE_OMIT_VACUUM)
// 0x18014eb90  truncate a non-database file, never a live .db
// 0x18014eda0  recursive file cleanup and its removed/truncated/failed counts
// 0x180150550  AC-marker report over a database file
// 0x180150310  run the wipe for client.dll and menusystem.dll
//
// The bodies use the engine's sqlite3_exec pointer, so this reconstruction
// models the decisions and exact statements, not a linked sqlite3.

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace sf {
namespace sqlite {

// ---------------------------------------------------------------- header
inline constexpr char kMagic[16] = {
    'S', 'Q', 'L', 'i', 't', 'e', ' ', 'f',
    'o', 'r', 'm', 'a', 't', ' ', '3', '\0'};
inline constexpr std::uint32_t kMaxPageSize = 65536;
inline constexpr std::uint32_t kMinPageSize = 512;
inline constexpr std::uint32_t kMinUsablePage = 480;
inline constexpr std::size_t kHeaderBytes = 100;
inline constexpr std::uint64_t kMaxDatabaseBytes = 0x10000000ull;
inline constexpr std::uint64_t kMinDatabaseBytes = 0x200ull;
inline constexpr std::uint8_t kInteriorTablePage = 0x05;
inline constexpr std::uint8_t kLeafTablePage = 0x0d;
inline constexpr std::uint32_t kMaxPageWalk = 0x100000;
inline constexpr int kFreelistChunkCap = 0x400;
inline constexpr std::size_t kJunkChunkBytes = 0x2000;
inline constexpr char kJunkFill = '0';

enum class Error
{
    None = 0,
    Unreadable,
    NotDatabase,
    Truncated,
    BadPageSize,
    BadReservedSize,
    InterfaceNotFound,
    NoDatabaseOpen,
    SelfTestFailed,
    SchemaQueryFailed,
};

inline constexpr const char* ErrorText(Error error)
{
    switch (error)
    {
    case Error::None: return "";
    case Error::Unreadable: return "not readable right now";
    case Error::NotDatabase: return "not a database";
    case Error::Truncated: return "truncated";
    case Error::BadPageSize: return "bad page size";
    case Error::BadReservedSize: return "bad reserved size";
    case Error::InterfaceNotFound: return "sql interface not found";
    case Error::NoDatabaseOpen: return "no database open";
    case Error::SelfTestFailed: return "self-test failed";
    case Error::SchemaQueryFailed: return "schema query failed";
    default: return "";
    }
}

struct Header
{
    std::uint32_t pageSize = 0;
    std::uint8_t reserved = 0;
    std::uint32_t pageCount = 0;
    std::uint32_t usableBytes = 0;
};

inline std::uint16_t ReadBe16(const unsigned char* p)
{
    return static_cast<std::uint16_t>((static_cast<std::uint16_t>(p[0]) << 8) |
                                      p[1]);
}

inline std::uint32_t ReadBe32(const unsigned char* p)
{
    return (static_cast<std::uint32_t>(p[0]) << 24) |
           (static_cast<std::uint32_t>(p[1]) << 16) |
           (static_cast<std::uint32_t>(p[2]) << 8) |
           static_cast<std::uint32_t>(p[3]);
}

inline constexpr bool IsPowerOfTwo(std::uint32_t value)
{
    return value >= 2 && (value & (value - 1)) == 0;
}

struct Validation
{
    Error error = Error::None;
    Header header;
};

// 0x18014c6b0.  The header says "SQLite format 3", the page size is 1 for
// 65536 or a power of two >= 512, the reserved-byte tail must leave at least
// 480 usable bytes, and the file must contain a whole number of pages.
inline Validation ValidateHeader(std::string_view headerBytes,
                                 std::uint64_t fileSize)
{
    Validation out;
    if (headerBytes.size() < 16)
    {
        out.error = Error::Truncated;
        return out;
    }
    for (std::size_t i = 0; i < 16; ++i)
    {
        if (static_cast<unsigned char>(headerBytes[i]) !=
            static_cast<unsigned char>(kMagic[i]))
        {
            out.error = Error::NotDatabase;
            return out;
        }
    }
    if (headerBytes.size() < kHeaderBytes)
    {
        out.error = Error::Truncated;
        return out;
    }

    const auto* raw =
        reinterpret_cast<const unsigned char*>(headerBytes.data());
    const std::uint16_t encodedPageSize = ReadBe16(raw + 16);
    std::uint32_t pageSize = encodedPageSize;
    if (encodedPageSize == 1)
        pageSize = kMaxPageSize;
    else if (pageSize < kMinPageSize || !IsPowerOfTwo(pageSize))
    {
        out.error = Error::BadPageSize;
        return out;
    }

    const std::uint8_t reserved = raw[20];
    const std::uint32_t usable = pageSize - reserved;
    if (usable < kMinUsablePage)
    {
        out.error = Error::BadReservedSize;
        return out;
    }

    if (fileSize < pageSize)
    {
        out.error = Error::Truncated;
        return out;
    }
    const std::uint64_t pages = fileSize / pageSize;
    if (pages == 0 || pages > 0xffffffffull)
    {
        out.error = Error::Truncated;
        return out;
    }

    out.header.pageSize = pageSize;
    out.header.reserved = reserved;
    out.header.pageCount = static_cast<std::uint32_t>(pages);
    out.header.usableBytes = usable;
    return out;
}

// 0x18014be40 reads at most 0x10000000 bytes in 0x100000 chunks; a file
// under 0x200 bytes never reaches the header parser.
inline bool IsReadableSize(std::uint64_t fileSize)
{
    return fileSize >= kMinDatabaseBytes && fileSize <= kMaxDatabaseBytes;
}

// 0x18014bff0 walks the b-tree from page 1.  Page 1 carries the 100-byte
// database header; every page has an 8-byte table-b-tree header (12-byte for
// interior pages).  The cell pointer array follows that header.
struct BtreePage
{
    std::uint8_t type = 0;
    std::uint16_t cellCount = 0;
    std::uint16_t cellContent = 0;
    std::uint8_t fragmented = 0;
    std::uint32_t rightMost = 0;
    std::uint32_t headerOffset = 0;
    std::uint32_t cellPointerOffset = 0;
};

inline bool ParseBtreePage(std::string_view page, std::uint32_t pageNumber,
                           BtreePage& out)
{
    if (page.empty())
        return false;
    const std::uint32_t headerOffset = pageNumber == 1 ? 100u : 0u;
    if (page.size() < headerOffset + 8)
        return false;

    const auto* raw = reinterpret_cast<const unsigned char*>(page.data());
    const std::uint8_t type = raw[headerOffset];
    if (type != kInteriorTablePage && type != kLeafTablePage)
        return false;

    out.type = type;
    out.cellCount = ReadBe16(raw + headerOffset + 3);
    out.cellContent = ReadBe16(raw + headerOffset + 5);
    out.fragmented = raw[headerOffset + 7];
    out.headerOffset = headerOffset;
    out.rightMost = 0;
    out.cellPointerOffset = headerOffset + 8;

    if (type == kInteriorTablePage)
    {
        if (page.size() < headerOffset + 12)
            return false;
        out.rightMost = ReadBe32(raw + headerOffset + 8);
        out.cellPointerOffset = headerOffset + 12;
    }

    const std::size_t arrayBytes = 2u * out.cellCount;
    if (out.cellPointerOffset + arrayBytes > page.size())
        return false;
    return true;
}

// -------------------------------------------------------- varint / records
// 0x18014b840.  A varint is 1..8 bytes of 7 data bits each, or 9 bytes where
// the last byte contributes all 8 bits.  The function returns 0 on any
// truncation; it does not require a canonical/minimal encoding.
inline bool ReadVarint(const unsigned char* data, std::size_t size,
                       std::uint64_t& value, std::size_t& consumed)
{
    if (data == nullptr || size == 0)
        return false;

    std::uint64_t v = static_cast<std::uint64_t>(data[0] & 0x7f);
    if ((data[0] & 0x80) == 0)
    {
        value = v;
        consumed = 1;
        return true;
    }

    for (std::size_t i = 1; i < 8; ++i)
    {
        if (size <= i)
            return false;
        v = (v << 7) | static_cast<std::uint64_t>(data[i] & 0x7f);
        if ((data[i] & 0x80) == 0)
        {
            value = v;
            consumed = i + 1;
            return true;
        }
    }

    if (size < 9)
        return false;
    value = (v << 8) | static_cast<std::uint64_t>(data[8]);
    consumed = 9;
    return true;
}

// 0x18014b9d0's serial-type width table.  Unlike the published format this
// makes no text/blob distinction here: (N-12)>>1 is exactly (N-13)/2 for odd
// N and (N-12)/2 for even N, and 10/11 are accepted with zero body bytes.
inline std::uint64_t SerialTypeLength(std::uint64_t serialType)
{
    switch (serialType)
    {
    case 0:
    case 8:
    case 9:
    case 10:
    case 11: return 0;
    case 1: return 1;
    case 2: return 2;
    case 3: return 3;
    case 4: return 4;
    case 5: return 6;
    case 6:
    case 7: return 8;
    default: return (serialType - 12u) >> 1;
    }
}

struct Column
{
    std::uint64_t serialType = 0;
    std::uint64_t offset = 0;
    std::uint64_t length = 0;
};

// 0x18014b9d0.  The header-size varint is authoritative; each serial-type
// varint must fit inside that header.  The body check is per field against the
// bytes after the header, not cumulative across fields -- that is the binary's
// actual rule and is deliberately preserved (see the stage sheet).
inline bool ParseRecord(std::string_view payload,
                        std::vector<Column>& columns)
{
    columns.clear();

    std::uint64_t headerSize = 0;
    std::size_t headerBytes = 0;
    if (!ReadVarint(reinterpret_cast<const unsigned char*>(payload.data()),
                    payload.size(), headerSize, headerBytes))
        return false;
    if (headerSize == 0 || headerSize < headerBytes ||
        headerSize > payload.size())
        return false;

    std::uint64_t offset = headerSize;
    std::uint64_t cursor = headerBytes;
    while (cursor < headerSize)
    {
        std::uint64_t serialType = 0;
        std::size_t serialBytes = 0;
        const std::size_t available = static_cast<std::size_t>(headerSize - cursor);
        if (!ReadVarint(
                reinterpret_cast<const unsigned char*>(payload.data() + cursor),
                available, serialType, serialBytes))
            return false;

        const std::uint64_t length = SerialTypeLength(serialType);
        if (static_cast<std::uint64_t>(payload.size()) - headerSize < length)
            return false;

        Column column;
        column.serialType = serialType;
        column.offset = offset;
        column.length = length;
        columns.push_back(column);

        cursor += serialBytes;
        offset += length;
    }
    return true;
}

inline bool ColumnBytes(std::string_view payload, const Column& column,
                        std::string_view& out)
{
    const std::uint64_t size = static_cast<std::uint64_t>(payload.size());
    if (column.offset > size || column.length > size - column.offset)
        return false;
    out = payload.substr(static_cast<std::size_t>(column.offset),
                         static_cast<std::size_t>(column.length));
    return true;
}

enum class ValueKind
{
    Null,
    Integer,
    Real,
    Text,
    Blob,
};

struct Value
{
    ValueKind kind = ValueKind::Null;
    std::int64_t integer = 0;
    double real = 0.0;
    std::string bytes;
};

// Typed view of one serial value.  Serial 8/9 are the zero/one constants,
// 10/11 are the transient NULL forms, and 12/13+ are BLOB/TEXT.
inline bool DecodeValue(std::string_view payload, const Column& column,
                        Value& out)
{
    out = Value{};
    std::string_view bytes;
    if (!ColumnBytes(payload, column, bytes))
        return false;

    const std::uint64_t serial = column.serialType;
    if (serial == 0 || serial == 10 || serial == 11)
    {
        out.kind = ValueKind::Null;
        return true;
    }
    if (serial == 8 || serial == 9)
    {
        out.kind = ValueKind::Integer;
        out.integer = serial == 9 ? 1 : 0;
        return true;
    }
    if (serial == 7)
    {
        if (bytes.size() != 8)
            return false;
        std::uint64_t bits = 0;
        for (int i = 0; i < 8; ++i)
            bits = (bits << 8) |
                   static_cast<unsigned char>(bytes[static_cast<std::size_t>(i)]);
        std::memcpy(&out.real, &bits, sizeof(out.real));
        out.kind = ValueKind::Real;
        return true;
    }
    if (serial >= 1 && serial <= 6)
    {
        std::size_t width = static_cast<std::size_t>(serial);
        if (serial == 5)
            width = 6;
        else if (serial == 6)
            width = 8;
        std::uint64_t raw = 0;
        for (std::size_t i = 0; i < width; ++i)
            raw = (raw << 8) |
                  static_cast<unsigned char>(bytes[i]);
        if (width < 8)
        {
            const std::uint64_t signBit = 1ull << (width * 8 - 1);
            if ((raw & signBit) != 0)
                raw |= ~((1ull << (width * 8)) - 1ull);
        }
        out.kind = ValueKind::Integer;
        out.integer = static_cast<std::int64_t>(raw);
        return true;
    }
    if (serial >= 12)
    {
        out.kind = (serial & 1u) != 0 ? ValueKind::Text : ValueKind::Blob;
        out.bytes.assign(bytes.data(), bytes.size());
        return true;
    }
    return false;
}

// 0x18014bba0 copies any serial >= 12 as bytes; it never treats a numeric
// serial as a key string.
inline bool DecodeColumnText(std::string_view payload, const Column& column,
                             std::string_view& out)
{
    if (column.serialType < 12)
        return false;
    return ColumnBytes(payload, column, out);
}

// The root-page field in sqlite_schema: serial 1..6 are signed integers, 8/9
// are the constants, anything else is not an integer cell.
inline bool DecodeColumnInteger(std::string_view payload, const Column& column,
                                std::int64_t& out)
{
    Value value;
    if (!DecodeValue(payload, column, value) ||
        value.kind != ValueKind::Integer)
        return false;
    out = value.integer;
    return true;
}

// ------------------------------------------------------ payload / page walk
struct DatabaseImage
{
    std::string_view bytes;
    Header header;
};

inline const unsigned char* PageAt(const DatabaseImage& db, std::uint32_t page,
                                   std::size_t& size)
{
    if (page == 0 || page > db.header.pageCount || db.header.pageSize == 0)
        return nullptr;
    const std::uint64_t offset =
        static_cast<std::uint64_t>(page - 1) * db.header.pageSize;
    if (offset > db.bytes.size() ||
        db.header.pageSize > db.bytes.size() - offset)
        return nullptr;
    size = db.header.pageSize;
    return reinterpret_cast<const unsigned char*>(db.bytes.data() +
                                                  static_cast<std::size_t>(offset));
}

// 0x18014c530.  It chooses the table-leaf local payload size, copies that
// prefix, then follows the 4-byte overflow chain.  A zero next-page while bytes
// remain and a next-page beyond the page count both make it return false; a
// self/cyclic chain is bounded by the remaining payload and 0x100000 links.
inline bool AssemblePayload(const DatabaseImage& db, std::uint64_t payloadSize,
                            std::string_view cell, std::size_t available,
                            std::string& out)
{
    out.clear();
    if (payloadSize > 0x2000000ull)
        return false;

    const std::uint64_t usable = db.header.usableBytes;
    if (usable < 4)
        return false;

    std::uint64_t local = payloadSize;
    if (usable - 0x23 < payloadSize)
    {
        local = (usable * 0x20ull - 0x180ull) / 0xffull - 0x17ull;
        const std::uint64_t candidate =
            local + (payloadSize - local) % (usable - 4);
        if (candidate <= usable - 0x23)
            local = candidate;
    }

    if (local > available || local > cell.size())
        return false;
    if (local != 0)
        out.append(cell.data(), static_cast<std::size_t>(local));
    if (local == payloadSize)
        return true;

    if (local + 4 > available || local + 4 > cell.size())
        return false;
    std::uint32_t next = ReadBe32(
        reinterpret_cast<const unsigned char*>(cell.data() + local));
    std::uint64_t remaining = payloadSize - local;
    std::uint64_t links = 0;

    for (;;)
    {
        if (remaining == 0)
            return true;
        if (next == 0 || db.header.pageCount < next)
            return false;
        if (++links > 0x100000ull)
            return false;

        std::size_t pageBytes = 0;
        const unsigned char* page = PageAt(db, next, pageBytes);
        if (page == nullptr || pageBytes < 4)
            return false;

        std::uint64_t chunk = usable - 4;
        if (remaining < chunk)
            chunk = remaining;
        out.append(reinterpret_cast<const char*>(page + 4),
                   static_cast<std::size_t>(chunk));
        next = ReadBe32(page);
        remaining -= chunk;
    }
}

// 0x18014bff0.  Table pages only (0x0d leaf, 0x05 interior); unknown types and
// out-of-range cell pointers are skipped, not fatal, exactly as the binary
// does.  The stack means interior children are visited right-to-left.
template <typename OnRow>
bool WalkBtree(const DatabaseImage& db, std::uint32_t rootPage, OnRow&& onRow)
{
    if (rootPage == 0 || rootPage > db.header.pageCount)
        return false;

    std::vector<std::uint32_t> pending;
    pending.push_back(rootPage);
    std::vector<std::uint8_t> visited(
        static_cast<std::size_t>(db.header.pageCount) + 1, 0);
    std::uint64_t iterations = 0;

    while (!pending.empty())
    {
        if (++iterations > kMaxPageWalk)
            return false;

        const std::uint32_t pageNumber = pending.back();
        pending.pop_back();
        if (pageNumber == 0 || pageNumber > db.header.pageCount ||
            visited[pageNumber] != 0)
            continue;
        visited[pageNumber] = 1;

        std::size_t pageBytes = 0;
        const unsigned char* page = PageAt(db, pageNumber, pageBytes);
        if (page == nullptr)
            continue;
        const std::uint32_t headerOffset = pageNumber == 1 ? 100u : 0u;
        if (headerOffset + 8 > pageBytes ||
            headerOffset + 8 > db.header.usableBytes)
            continue;

        const std::uint8_t type = page[headerOffset];
        if (type != kInteriorTablePage && type != kLeafTablePage)
            continue;
        const std::uint32_t headerBytes = type == kInteriorTablePage ? 12u : 8u;
        if (headerOffset + headerBytes > pageBytes)
            continue;

        const std::uint16_t cellCount = ReadBe16(page + headerOffset + 3);
        if (static_cast<std::uint64_t>(headerOffset) + headerBytes +
                static_cast<std::uint64_t>(cellCount) * 2u >
            db.header.usableBytes)
            continue;

        if (type == kInteriorTablePage)
        {
            const std::uint32_t rightMost = ReadBe32(page + headerOffset + 8);
            if (rightMost >= 1 && rightMost <= db.header.pageCount)
                pending.push_back(rightMost);
        }

        for (std::uint16_t i = 0; i < cellCount; ++i)
        {
            const std::size_t pointerOffset =
                headerOffset + headerBytes + static_cast<std::size_t>(i) * 2u;
            const std::uint16_t cellOffset = ReadBe16(page + pointerOffset);
            if (cellOffset < headerOffset + headerBytes ||
                cellOffset >= db.header.usableBytes)
                continue;

            const unsigned char* cell = page + cellOffset;
            const std::size_t remaining =
                static_cast<std::size_t>(db.header.usableBytes - cellOffset);
            if (type == kInteriorTablePage)
            {
                if (remaining >= 4)
                {
                    const std::uint32_t child = ReadBe32(cell);
                    if (child >= 1 && child <= db.header.pageCount)
                        pending.push_back(child);
                }
                continue;
            }

            std::uint64_t payloadSize = 0;
            std::size_t payloadBytes = 0;
            if (!ReadVarint(cell, remaining, payloadSize, payloadBytes))
                continue;
            if (payloadBytes > remaining)
                continue;
            std::uint64_t rowid = 0;
            std::size_t rowidBytes = 0;
            if (!ReadVarint(cell + payloadBytes, remaining - payloadBytes,
                            rowid, rowidBytes))
                continue;
            const std::size_t bodyOffset = payloadBytes + rowidBytes;
            if (bodyOffset > remaining)
                continue;

            const std::string_view body(
                reinterpret_cast<const char*>(cell + bodyOffset),
                remaining - bodyOffset);
            std::string payload;
            if (AssemblePayload(db, payloadSize, body, remaining - bodyOffset,
                                payload))
                onRow(static_cast<std::int64_t>(rowid), payload);
        }
    }
    return true;
}

inline int FindKeyColumn(std::string_view createSql);
inline bool EqualsIgnoreCase(std::string_view a, std::string_view b);

struct TableInfo
{
    std::string name;
    std::uint32_t rootPage = 0;
    std::string sql;
    int keyColumn = -1;
};

// Reads sqlite_schema through the same page walker.  A real table row is
// type='table', name non-empty, rootpage integer, sql text.
inline bool ReadTables(const DatabaseImage& db, std::vector<TableInfo>& tables)
{
    tables.clear();
    return WalkBtree(db, 1, [&tables](std::int64_t, const std::string& payload) {
        std::vector<Column> columns;
        if (!ParseRecord(payload, columns) || columns.size() < 5)
            return;

        std::string_view type;
        if (!DecodeColumnText(payload, columns[0], type) ||
            !EqualsIgnoreCase(type, "table"))
            return;
        std::string_view name;
        if (!DecodeColumnText(payload, columns[1], name) || name.empty())
            return;

        std::int64_t root = 0;
        DecodeColumnInteger(payload, columns[3], root);
        std::string_view sql;
        DecodeColumnText(payload, columns[4], sql);

        TableInfo table;
        table.name = std::string(name);
        table.rootPage = static_cast<std::uint32_t>(root);
        table.sql = std::string(sql);
        table.keyColumn = FindKeyColumn(table.sql);
        tables.push_back(std::move(table));
    });
}

struct DecodedRow
{
    std::int64_t rowid = 0;
    std::vector<Value> values;
    std::string key;
};

// Decodes every column of every row.  The key is copied only for the column
// named by FindKeyColumn, using 0x18014bba0's rule (serial >= 12, bytes copied).
inline bool ReadTableRows(const DatabaseImage& db, std::uint32_t rootPage,
                          int keyColumn, std::vector<DecodedRow>& rows)
{
    rows.clear();
    return WalkBtree(db, rootPage,
                     [&rows, keyColumn](std::int64_t rowid,
                                        const std::string& payload) {
        std::vector<Column> columns;
        if (!ParseRecord(payload, columns))
            return;

        DecodedRow row;
        row.rowid = rowid;
        row.values.reserve(columns.size());
        for (const Column& column : columns)
        {
            Value value;
            if (!DecodeValue(payload, column, value))
                return;
            row.values.push_back(std::move(value));
        }
        if (keyColumn >= 0 &&
            static_cast<std::size_t>(keyColumn) < columns.size())
        {
            std::string_view key;
            if (DecodeColumnText(payload, columns[static_cast<std::size_t>(keyColumn)],
                                 key))
                row.key = std::string(key);
        }
        rows.push_back(std::move(row));
    });
}

inline bool EqualsIgnoreCase(std::string_view a, std::string_view b)
{
    if (a.size() != b.size())
        return false;
    for (std::size_t i = 0; i < a.size(); ++i)
    {
        char x = a[i];
        char y = b[i];
        if (x >= 'A' && x <= 'Z')
            x = static_cast<char>(x + ('a' - 'A'));
        if (y >= 'A' && y <= 'Z')
            y = static_cast<char>(y + ('a' - 'A'));
        if (x != y)
            return false;
    }
    return true;
}

// 0x18014bc10 searches the CREATE TABLE text for the column named key at
// parenthesis depth 1, returning its ordinal or -1.  It ignores commas inside
// nested parentheses, quoted names and the rest of the column definition.
inline int FindKeyColumn(std::string_view createSql)
{
    const std::size_t open = createSql.find('(');
    if (open == std::string_view::npos)
        return -1;

    const auto isKey = [](std::string_view part) {
        const std::size_t first = part.find_first_not_of(" \t\r\n");
        if (first == std::string_view::npos)
            return false;
        std::size_t end = first;
        while (end < part.size() && part[end] != ' ' && part[end] != '\t' &&
               part[end] != '\r' && part[end] != '\n' && part[end] != '(')
            ++end;
        std::string_view name = part.substr(first, end - first);
        if (name.size() >= 2 &&
            ((name.front() == '"' && name.back() == '"') ||
             (name.front() == '`' && name.back() == '`') ||
             (name.front() == '[' && name.back() == ']')))
            name = name.substr(1, name.size() - 2);
        return EqualsIgnoreCase(name, "key");
    };

    int depth = 1;
    int column = 0;
    std::size_t start = open + 1;
    for (std::size_t i = start; i <= createSql.size(); ++i)
    {
        const char c = i < createSql.size() ? createSql[i] : ',';
        if (c == '(')
        {
            ++depth;
        }
        else if (c == ')')
        {
            --depth;
            if (depth == 0)
            {
                if (isKey(createSql.substr(start, i - start)))
                    return column;
                break;
            }
        }
        else if (c == ',' && depth == 1)
        {
            if (isKey(createSql.substr(start, i - start)))
                return column;
            ++column;
            start = i + 1;
        }
    }
    return -1;
}

// ------------------------------------------------------------- database
inline constexpr const char* kListTablesSql =
    "SELECT name FROM sqlite_master WHERE type='table'";
inline constexpr const char* kCookieCountSql = "SELECT COUNT(*) FROM cookies";
inline constexpr const char* kDeleteCookiesSql = "DELETE FROM cookies";
inline constexpr const char* kFreelistCountSql = "PRAGMA freelist_count";
inline constexpr const char* kDropPrefix = "DROP TABLE IF EXISTS [";
inline constexpr const char* kCookieTable = "cookies";
inline constexpr const char* kSqliteTablePrefix = "sqlite_";

inline bool HasSqlitePrefix(std::string_view table)
{
    return table.size() >= 7 && table.substr(0, 7) == kSqliteTablePrefix;
}

// 0x18014d5a0: cookies and sqlite_* survive the sweep; everything else is
// dropped.  Cookies are cleared separately with DELETE FROM cookies.
inline bool ShouldDropTable(std::string_view table)
{
    return table != kCookieTable && !HasSqlitePrefix(table);
}

inline std::string DropTableSql(std::string_view table)
{
    std::string sql(kDropPrefix);
    sql.append(table);
    sql.push_back(']');
    return sql;
}

enum class FileAction
{
    NeverTruncate,
    CanTruncate,
};

inline bool EndsWithIgnoreCase(std::string_view text, std::string_view suffix)
{
    if (suffix.size() > text.size())
        return false;
    const std::size_t offset = text.size() - suffix.size();
    for (std::size_t i = 0; i < suffix.size(); ++i)
    {
        char a = text[offset + i];
        char b = suffix[i];
        if (a >= 'A' && a <= 'Z')
            a = static_cast<char>(a + ('a' - 'A'));
        if (b >= 'A' && b <= 'Z')
            b = static_cast<char>(b + ('a' - 'A'));
        if (a != b)
            return false;
    }
    return true;
}

// 0x18014eb90's extension set.  These are the files that are never truncated
// in place, because a live sqlite handle would see a corrupt database.
inline bool IsDatabaseFileName(std::string_view fileName)
{
    return EndsWithIgnoreCase(fileName, ".db") ||
           EndsWithIgnoreCase(fileName, ".db-journal") ||
           EndsWithIgnoreCase(fileName, ".db-wal") ||
           EndsWithIgnoreCase(fileName, ".sqlite");
}

inline constexpr FileAction ActionForFile(bool isDatabase)
{
    return isDatabase ? FileAction::NeverTruncate : FileAction::CanTruncate;
}

// ------------------------------------------------------------- AC markers
inline std::string LowerAscii(std::string_view text)
{
    std::string out(text);
    for (char& c : out)
        if (c >= 'A' && c <= 'Z')
            c = static_cast<char>(c + ('a' - 'A'));
    return out;
}

inline constexpr const char* kBanMarker = "vcmod_cl_usersettings";
inline constexpr const char* kDeviceCookieMarker = "devicecookie";

inline bool HasClientBanMarker(std::string_view table)
{
    return LowerAscii(table).find(kBanMarker) != std::string::npos;
}

inline bool HasDeviceCookieMarker(std::string_view table)
{
    return LowerAscii(table).find(kDeviceCookieMarker) != std::string::npos;
}

struct MarkerReport
{
    int banTables = 0;
    int deviceCookies = 0;
    int cookieRows = 0;
    int tableCount = 0;
};

inline MarkerReport ScanMarkers(const std::vector<std::string>& tables,
                                int cookieRows)
{
    MarkerReport out;
    out.cookieRows = cookieRows;
    out.tableCount = static_cast<int>(tables.size());
    for (const std::string& table : tables)
    {
        if (HasClientBanMarker(table))
            ++out.banTables;
        if (HasDeviceCookieMarker(table))
            ++out.deviceCookies;
    }
    return out;
}

inline std::string MarkerMessage(std::string_view databaseName,
                                 const MarkerReport& report)
{
    std::string out(databaseName);
    if (report.banTables > 0)
    {
        out += ": " + std::to_string(report.banTables) +
               " client-side BAN table(s) present (vcmod_cl_usersettings_*)";
        return out;
    }
    if (report.deviceCookies > 0)
    {
        out += ": " + std::to_string(report.deviceCookies) +
               " AC device cookie(s) present";
        return out;
    }
    if (report.tableCount > 0 || report.cookieRows > 0)
    {
        out += ": " + std::to_string(report.tableCount) + " table(s), " +
               std::to_string(report.cookieRows) +
               " cookie(s) - no known AC marker";
        return out;
    }
    return out;
}

inline std::string UnreadableMessage(std::string_view databaseName,
                                     Error error)
{
    return std::string(databaseName) + ": not readable right now (" +
           ErrorText(error) + ")";
}

// ---------------------------------------------------------------- wipe
struct WipeResult
{
    Error error = Error::None;
    int droppedTables = 0;
    int cookiesCleared = 0;
    int freedPages = 0;
};

// 0x18014d1a0.  Each INSERT consumes one freelist page, so the number of
// chunks written equals the pages reclaimed, capped at 0x400.
inline int FreedPagesToRefill(int freelistCount)
{
    if (freelistCount <= 0)
        return 0;
    return std::min(freelistCount, kFreelistChunkCap);
}

// 0x18014d5a0.  With a non-zero freelist the connection is emptied by the
// refill path; otherwise tables are dropped and cookies deleted first.  The
// actual sqlite3_exec calls are the caller's responsibility.
inline WipeResult PlanWipe(const std::vector<std::string>& tables,
                           int cookieRows, int freelistCount)
{
    WipeResult out;
    if (freelistCount > 0)
    {
        out.freedPages = FreedPagesToRefill(freelistCount);
        return out;
    }

    for (const std::string& table : tables)
        if (ShouldDropTable(table))
            ++out.droppedTables;
    out.cookiesCleared = cookieRows;
    out.freedPages = FreedPagesToRefill(freelistCount);
    return out;
}

inline std::string WipeMessage(std::string_view databaseName,
                               const WipeResult& result)
{
    if (result.error != Error::None)
        return "sql wipe (" + std::string(databaseName) + "): " +
               ErrorText(result.error);
    return std::string(databaseName) + ": " +
           std::to_string(result.droppedTables) + " table(s) dropped, " +
           std::to_string(result.cookiesCleared) + " cookie(s) cleared, " +
           std::to_string(result.freedPages) +
           " freed page(s) overwritten";
}

inline constexpr const char* kModules[] = {"client.dll", "menusystem.dll"};
inline constexpr const char* kDatabaseFiles[] = {"cl.db", "mn.db", "sv.db"};

// 0x18014eda0's counters.
struct CleanupCounts
{
    int removed = 0;
    int truncated = 0;
    int failed = 0;
};

inline void AddCleanupResult(CleanupCounts& counts, bool removed,
                             bool truncateAttempted, bool truncateSucceeded)
{
    if (removed)
        ++counts.removed;
    else if (truncateAttempted && truncateSucceeded)
        ++counts.truncated;
    else
        ++counts.failed;
}

} // namespace sqlite
} // namespace sf
