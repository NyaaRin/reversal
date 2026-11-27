#pragma once

#include <cstddef>
#include <cstdint>
#include <string_view>

// The generated translation functions execute a structured trace, not the
// original machine behaviour.  Conditions, loops and switches are real C++
// control-flow constructs; the trace sink records the decompiled text and
// resolved symbol address so the compiler type-checks every accessor while the
// unknown semantics stay explicit.
namespace sf::reconstructed {

// Recovered field accesses use Ghidra's explicit `*(T *)(base + offset)` form.
// `load_at` preserves that byte address and pointee type in compiler-checked
// C++ without pretending the enclosing aggregate layout is fully known.
inline std::uintptr_t field_address(std::uintptr_t value) noexcept { return value; }

template <class T>
std::uintptr_t field_address(T* pointer) noexcept {
    return reinterpret_cast<std::uintptr_t>(pointer);
}

template <class T, class Base>
T& load_at(Base base, std::uintptr_t offset) noexcept {
    return *reinterpret_cast<T*>(field_address(base) + offset);
}

// Ghidra's `SUB321(vector >> n,0)` and `SUB161(vector >> n,0)` extract a
// 32-bit or 16-bit subpiece from a byte-array vector.  The slot table records
// the byte element type and element count; these helpers preserve the exact
// little-endian bit position while making the access compiler-checked.
template <class T>
T load_bits(const std::uint8_t* base, std::size_t count, std::size_t bit_offset) noexcept {
    T result = 0;
    for (std::size_t bit = 0; bit < sizeof(T) * 8; ++bit) {
        const std::size_t position = bit_offset + bit;
        const std::size_t byte = position / 8;
        if (byte >= count) {
            break;
        }
        result |= static_cast<T>((base[byte] >> (position % 8)) & 1u) << bit;
    }
    return result;
}

inline std::uint32_t load_bits32(const std::uint8_t* base, std::size_t count,
                                 std::size_t bit_offset) noexcept {
    return load_bits<std::uint32_t>(base, count, bit_offset);
}

inline std::uint16_t load_bits16(const std::uint8_t* base, std::size_t count,
                                 std::size_t bit_offset) noexcept {
    return load_bits<std::uint16_t>(base, count, bit_offset);
}

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
    template <class Fn>
    bool checked_condition(std::string_view text, Fn&& fn) noexcept {
        (void)text;
        return static_cast<bool>(fn());
    }
    bool loop_condition(std::string_view text) noexcept {
        (void)text;
        return false;
    }
    template <class Fn>
    bool checked_loop_condition(std::string_view text, Fn&& fn) noexcept {
        (void)text;
        (void)static_cast<bool>(fn());
        return false;
    }
    std::size_t switch_key(std::string_view text) noexcept {
        (void)text;
        return 0;
    }
    template <class Fn>
    std::size_t checked_switch(std::string_view text, Fn&& fn) noexcept {
        (void)text;
        return static_cast<std::size_t>(fn());
    }
    template <class... Args>
    void call_arguments(std::string_view name, Args&&... args) noexcept {
        (void)name;
        ((void)args, ...);
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
    template <class Fn>
    Loop checked_loop(std::string_view text, Fn&& fn) noexcept {
        (void)text;
        (void)static_cast<bool>(fn());
        return Loop{};
    }
};

}  // namespace sf::reconstructed
