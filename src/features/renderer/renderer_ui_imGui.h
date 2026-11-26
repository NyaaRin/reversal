#pragma once
// ImGui-backed implementation of RendererUi for the live runtime path.
// The renderer's control flow is independent of this class; the self-test uses
// a recording implementation of the same interface.

#include "renderer.h"

namespace sf {
namespace renderer {

class ImGuiRendererUi final : public RendererUi
{
public:
    bool begin_child(const char* id, float width) override;
    void end_child() override;
    bool section(const char* label, bool default_open) override;
    bool checkbox(const char* label, bool value) override;
    int slider_int(const char* label, int value, int minimum, int maximum) override;
    float slider_float(const char* label, float value, float minimum,
                       float maximum) override;
    int combo(const char* label, int value, const char* const* items,
              int item_count) override;
    bool button(const char* label) override;
    bool settings_button(const char* label) override;
    void open_popup(const char* id) override;
    bool begin_popup(const char* id) override;
    void end_popup() override;
    void text(const char* text) override;
    void tooltip(const char* text) override;
    void same_line() override;
    void separator() override;
    int keybind(const char* id, int key) override;
    std::string text_input(const char* id, std::string value,
                           std::size_t capacity) override;
    bool is_hovered() override;
};

} // namespace renderer
} // namespace sf
