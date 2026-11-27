#include "reconstruction.h"
#include "trace_runtime.h"

#include <cstdint>
#include <cstdio>

// Generated accessors are compiled but never executed: their recovered
// expressions dereference addresses in the original image, which this process
// does not map.  This executable therefore proves the trace runtime's own
// arithmetic and control helpers, which every lowered accessor expression
// depends on, and forces the coverage count to stay in sync with the chunks.
//
// Unproven here: accessor runtime behaviour.  Proving that needs the original
// image (or a reconstructed layout for every referenced global), not a stub.
static_assert(sf::reconstructed::kFunctionCount == 7656,
              "generated reconstruction coverage count changed; regenerate the corpus");

namespace {

int failures = 0;

void check(bool ok, const char* what) {
    if (!ok) {
        std::printf("FAIL %s\n", what);
        ++failures;
    }
}

}  // namespace

int main() {
    using namespace sf::reconstructed;

    const std::uint8_t bytes[8] = {0x78, 0x56, 0x34, 0x12, 0xFF, 0x00, 0xA5, 0x5A};
    check(load_bits32(bytes, 8, 0) == 0x12345678u, "load_bits32 at bit 0");
    check(load_bits32(bytes, 8, 16) == 0x00FF1234u, "load_bits32 at bit 16");
    check(load_bits16(bytes, 8, 0) == 0x5678u, "load_bits16 at bit 0");
    check(load_bits16(bytes, 8, 24) == 0xFF12u, "load_bits16 at bit 24");
    check(load_bits16(bytes, 3, 8) == 0x3456u, "load_bits16 across the count limit");

    check(load_at<std::uint16_t>(bytes, 1) == 0x3456u, "load_at reads the byte-addressed slot");
    const std::uint32_t word = 0x11223344u;
    check(field_address(&word) == reinterpret_cast<std::uintptr_t>(&word),
          "field_address preserves the address");
    check(load_at<std::uint8_t>(&word, 0) == 0x44u, "load_at accepts a pointer base");

    TranslationTrace trace("0x0", "runtime_self_test");
    bool evaluated = false;
    check(trace.checked_condition("c", [&] { evaluated = true; return false; }) == false,
          "checked_condition returns the compiled value");
    check(evaluated, "checked_condition evaluates its lambda");
    evaluated = false;
    check(trace.checked_loop_condition("l", [&] { evaluated = true; return true; }) == false,
          "checked_loop_condition keeps the traced body from running");
    check(evaluated, "checked_loop_condition evaluates its lambda");
    check(trace.checked_switch("s", [&] { return 7u; }) == 7u,
          "checked_switch returns the selector");

    auto loop = trace.loop("for");
    check(loop.next(), "loop runs once");
    check(!loop.next(), "loop stops after one pass");

    trace.statement("x;");
    trace.call_arguments("target", 1, 2);
    trace.call_target("target", &word);
    trace.data_ref("global", bytes);
    trace.string_literal("text");
    trace.case_label("case 0:");

    if (failures != 0) {
        std::printf("%d trace runtime checks failed\n", failures);
        return 1;
    }
    std::printf("trace runtime self-test passed\n");
    return 0;
}
