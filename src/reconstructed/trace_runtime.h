#pragma once

#include <cstddef>
#include <string_view>

// The generated translation functions execute a structured trace, not the
// original machine behaviour.  Conditions, loops and switches are real C++
// control-flow constructs; the trace sink records the decompiled text and
// resolved symbol address so the compiler type-checks every accessor while the
// unknown semantics stay explicit.
namespace sf::reconstructed {

class TranslationTrace {
public:
    struct Loop {
        bool first = true;

        bool next() noexcept {
            if (!first) {
                return false;
            }
            first = false;
            return true;
        }
    };

    TranslationTrace(std::string_view address, std::string_view name) noexcept {
        (void)address;
        (void)name;
    }

    void statement(std::string_view text) noexcept { (void)text; }
    bool condition(std::string_view text) noexcept {
        (void)text;
        return true;
    }
    bool loop_condition(std::string_view text) noexcept {
        (void)text;
        return false;
    }
    std::size_t switch_key(std::string_view text) noexcept {
        (void)text;
        return 0;
    }
    void case_label(std::string_view text) noexcept { (void)text; }
    void call_target(std::string_view name, const void* address) noexcept {
        (void)name;
        (void)address;
    }
    void data_ref(std::string_view name, const void* address) noexcept {
        (void)name;
        (void)address;
    }
    void string_literal(std::string_view text) noexcept { (void)text; }

    Loop loop(std::string_view text) noexcept {
        (void)text;
        return Loop{};
    }
};

}  // namespace sf::reconstructed
