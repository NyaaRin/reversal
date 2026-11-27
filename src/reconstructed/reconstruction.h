#pragma once

#include <cstddef>
#include <string_view>

// Machine-checkable translation records for the complete m64.dll function
// inventory.  The hand-translated subsystems under src/features/ are the
// executable reconstruction; these records keep every remaining decompiled
// body readable, hashed and mapped without inventing execution semantics.
//
// Each record carries the full decompiled body, its control-flow lines, call
// targets, data references, string literals and explicit TODO markers for
// facts the decompiler cannot supply (unknown globals, indirect calls, PDB
// types and runtime layouts).  The generator is re/tools/gen_reconstructed_source.py;
// the checker is re/tools/check_reconstructed_source.py.
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
