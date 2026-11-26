#pragma once
// Renderer-layer reconstructions of the eleven first-party UI wrappers whose
// callee closures terminate in ImGui/public data.  The original wrappers are
// named in the dependency map; this module keeps their control/state behaviour
// in one compiled unit so the renderer self-test can exercise it.

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

#include "imgui.h"

namespace sf {
namespace renderer {

struct UiRecord
{
    std::string label;
    ImGuiID id = 0;
    int style = 0;
    float value = 0.0f;
};

struct UiState
{
    std::vector<UiRecord> records;
    std::string pending_popup;
    int selected_tab = -1;
    int keybind_key = 0;
    bool capturing_key = false;
    bool records_enabled = true;
    bool debug_popup = false;
    float scale = 1.0f;
    ImVec4 tint = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
};

struct UiLabelStyle
{
    ImVec4 text = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
    ImVec4 selected_text = ImVec4(1.0f, 0.8f, 0.2f, 1.0f);
    ImVec4 frame = ImVec4(0.2f, 0.2f, 0.2f, 1.0f);
};

UiState& UiStateForTest();
void ResetUiStateForTest();

// 0x18019a460: append a UI record and reject empty/ID-prefixed labels.
void QueueUiRecord(const char* label, ImGuiID id, int style, float value);

// 0x18019a680: consume a pending popup label and open it.
bool PopupUiLabel(const char* label);

// 0x18019cb40 / 0x18019d4d0 / 0x18019dc00: draw a card and return hover.
bool DrawCardButton(const char* label, float height, const ImVec4& color,
                    bool selected);
bool DrawSiblingActivityRow(const char* label, float* activity);
bool DrawControlCard(const char* label, const ImVec4& color);

// 0x18019fbc0: foreground color editor.
bool DrawForegroundEditor(const char* label, ImVec4* color);

// 0x1801a0b60 / 0x1801a16e0 / 0x1802d31a0: theme color, swatch and key capture.
bool DrawThemeColorButton(const char* label, const ImVec4& color);
bool DrawThemeSwatchRow(const char* label, float* value);
bool DrawKeybindRow(const char* id, int* key, float width);
bool DrawSpamKeybindRow(const char* label, const char* description, int* key);

// 0x1801a7a20 / 0x1801a85a0: formatted text/hint wrappers.
int FormatFloatHint(char* out, std::size_t size, const char* format,
                    double value);
int FormatIntHint(char* out, std::size_t size, const char* format, int value);
int DrawFloatHint(const char* label, const char* format, float value);
int DrawIntHint(const char* label, const char* format, int value);

// 0x1801df5d0: selected styled label.
void DrawStyledLabel(const UiLabelStyle& style, const char* label, int id);

} // namespace renderer
} // namespace sf
