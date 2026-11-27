#pragma once

#include <cstddef>
#include <cstdint>
#include <string_view>

// Machine-checkable compiled translation records for the complete m64.dll
// function inventory.  The hand-translated subsystems under src/features/ are
// the executable reconstruction; the generated accessors compile real C++
// control-flow traces and resolved references without claiming behavioural
// equivalence.
//
// Each record carries the full decompiled body as a SHA-256-verified audit
// payload plus its control-flow lines, call targets, data references, string
// literals and explicit TODO markers for facts the decompiler cannot supply
// (unknown globals, runtime pages, indirect calls, calling conventions, PDB
// types and runtime layouts).  The generator is
// re/tools/gen_reconstructed_source.py; the checker is
// re/tools/check_reconstructed_source.py.
namespace sf::reconstructed {

// Ghidra's recovered primitive spelling.  These aliases make recovered
// expressions and local declarations type-check without pretending that the
// unknown globals or aggregate layouts are known.
using undefined = std::uint8_t;
using undefined1 = std::uint8_t;
using undefined2 = std::uint16_t;
using undefined4 = std::uint32_t;
using undefined8 = std::uint64_t;
using byte = std::uint8_t;
using uchar = std::uint8_t;
using ushort = std::uint16_t;
using uint = std::uint32_t;
using ulong = std::uint32_t;
using ulonglong = std::uint64_t;
using longlong = std::int64_t;
using BOOL = int;
using HMODULE = std::uintptr_t;
using HANDLE = void*;
using FARPROC = void*;
using FILE = void*;
using code = void*;

struct FunctionTranslation {
    std::string_view address;
    std::string_view name;
    std::string_view signature;
    std::string_view body;
    std::string_view body_sha256;
    std::string_view calls;
    std::string_view data_refs;
    std::string_view strings;
    std::string_view control_flow;
    std::string_view todos;
};

inline constexpr std::size_t kFunctionCount = 7656;

}  // namespace sf::reconstructed
