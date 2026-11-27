#pragma once

#include <cstddef>
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
