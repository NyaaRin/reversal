#include "ui_widgets.h"

#include "ui_helpers.h"

namespace sf {
namespace renderer {
namespace {

UiState g_ui_state;

void AppendRecord(const char* label, ImGuiID id, int style, float value)
{
    if (!g_ui_state.records_enabled)
        return;
    if (label == nullptr || label[0] == '\0' || label[0] == '#')
        return;
    g_ui_state.records.push_back(UiRecord{label, id, style, value});
}

void DrawFrame(const ImVec4& color)
{
    ImDrawList* draw = ImGui::GetWindowDrawList();
    if (draw == nullptr)
        return;
    const ImVec2 min = ImGui::GetItemRectMin();
    const ImVec2 max = ImGui::GetItemRectMax();
    draw->AddRectFilled(min, max, ImGui::GetColorU32(color), 4.0f);
}

} // namespace

UiState& UiStateForTest()
{
    return g_ui_state;
}

void ResetUiStateForTest()
{
    g_ui_state = UiState{};
}

void QueueUiRecord(const char* label, ImGuiID id, int style, float value)
{
    AppendRecord(label, id, style, value);
}

bool PopupUiLabel(const char* label)
{
    if (label == nullptr || label[0] == '\0')
        return false;

    if (g_ui_state.debug_popup)
    {
        AppendRecord(label, 0, 2, 0.0f);
        return true;
    }

    if (g_ui_state.pending_popup == label)
        g_ui_state.pending_popup.clear();

    ImGui::OpenPopup(label);
    return ImGui::IsPopupOpen(label);
}

bool DrawCardButton(const char* label, float height, const ImVec4& color,
                    bool selected)
{
    ImGui::PushID(label);
    const bool clicked = ImGui::InvisibleButton("##card", ImVec2(220.0f, height));
    const bool hovered = ImGui::IsItemHovered();
    DrawFrame(selected ? ImVec4(color.x, color.y, color.z, 1.0f) : color);
    ImGui::GetWindowDrawList()->AddText(ImGui::GetItemRectMin(),
                                        ImGui::GetColorU32(ImVec4(1, 1, 1, 1)),
                                        label != nullptr ? label : "");
    QueueUiRecord(label, ImGui::GetID(label), selected ? 1 : 0,
                  hovered ? 1.0f : 0.0f);
    ImGui::PopID();
    return clicked || hovered;
}

bool DrawSiblingActivityRow(const char* label, float* activity)
{
    if (activity == nullptr)
        return false;
    const bool changed = ImGui::SliderFloat(label, activity, 0.0f, 1.0f);
    QueueUiRecord(label, ImGui::GetID(label), 0, *activity);
    return changed;
}

bool DrawControlCard(const char* label, const ImVec4& color)
{
    ImGui::PushID(label);
    const bool clicked = ImGui::InvisibleButton("##control", ImVec2(220.0f, 32.0f));
    const bool hovered = ImGui::IsItemHovered();
    DrawFrame(color);
    QueueUiRecord(label, ImGui::GetID(label), 0, hovered ? 1.0f : 0.0f);
    ImGui::PopID();
    return clicked || hovered;
}

bool DrawForegroundEditor(const char* label, ImVec4* color)
{
    if (color == nullptr)
        return false;
    const bool changed = ImGui::ColorEdit4(label, &color->x,
                                           ImGuiColorEditFlags_NoInputs);
    QueueUiRecord(label, ImGui::GetID(label), 0, color->x);
    return changed;
}

bool DrawThemeColorButton(const char* label, const ImVec4& color)
{
    const bool pressed = ImGui::ColorButton(
        label, color, ImGuiColorEditFlags_NoTooltip, ImVec2(18.0f, 18.0f));
    QueueUiRecord(label, ImGui::GetID(label), 0, color.x);
    return pressed;
}

bool DrawKeybindRow(const char* id, int* key, float width)
{
    if (id == nullptr || key == nullptr)
        return false;

    char name[32] = {};
    if (g_ui_state.capturing_key)
        Format(name, sizeof(name), "%s", "Press a key");
    else if (*key == 0)
        Format(name, sizeof(name), "%s", "None");
    else if (*key == 0x1b)
        Format(name, sizeof(name), "%s", "Escape");
    else
        Format(name, sizeof(name), "Key %d", *key);

    char label[96] = {};
    Format(label, sizeof(label), "[%s]###%s", name, id);
    const bool pressed = ImGui::Button(label, ImVec2(width, 0.0f));
    if (pressed)
        g_ui_state.capturing_key = true;

    bool changed = false;
    if (g_ui_state.capturing_key)
    {
        for (int candidate = 1; candidate < 256; ++candidate)
        {
            if (ImGui::IsKeyPressed(static_cast<ImGuiKey>(candidate), false))
            {
                *key = candidate == 0x1b ? 0 : candidate;
                g_ui_state.capturing_key = false;
                changed = true;
                break;
            }
        }
    }
    return changed;
}

bool DrawSpamKeybindRow(const char* label, const char* description, int* key)
{
    if (!PopupUiLabel(label))
        return false;

    ImGui::Text("%s bind", description != nullptr ? description : "");
    ImGui::SetNextItemWidth(g_ui_state.scale * 122.0f);
    const bool changed = DrawKeybindRow("##spam_bind", key,
                                        g_ui_state.scale * 122.0f);
    ImGui::TextUnformatted(
        "Unbound: spams whenever the switch is on.\nBound: spams only while "
        "the key is held.");
    return changed;
}

bool DrawThemeSwatchRow(const char* label, float* value)
{
    if (value == nullptr)
        return false;
    const bool changed = ImGui::SliderFloat(label, value, 0.0f, 1.0f);
    const bool key_changed = DrawKeybindRow(label, &g_ui_state.keybind_key,
                                            *value * 122.0f);
    QueueUiRecord(label, ImGui::GetID(label), 0, *value);
    return changed || key_changed;
}

int FormatFloatHint(char* out, std::size_t size, const char* format,
                    double value)
{
    if (out == nullptr || size == 0 || format == nullptr)
        return -1;
    return Format(out, size, format, value);
}

int FormatIntHint(char* out, std::size_t size, const char* format, int value)
{
    if (out == nullptr || size == 0 || format == nullptr)
        return -1;
    return Format(out, size, format, value);
}

int DrawFloatHint(const char* label, const char* format, float value)
{
    char text[64] = {};
    const int length = FormatFloatHint(text, sizeof(text), format, value);
    if (length > 0)
        ImGui::TextUnformatted(text);
    QueueUiRecord(label, ImGui::GetID(label), 0, value);
    return length;
}

int DrawIntHint(const char* label, const char* format, int value)
{
    char text[64] = {};
    const int length = FormatIntHint(text, sizeof(text), format, value);
    if (length > 0)
        ImGui::TextUnformatted(text);
    QueueUiRecord(label, ImGui::GetID(label), 1, static_cast<float>(value));
    return length;
}

void DrawStyledLabel(const UiLabelStyle& style, const char* label, int id)
{
    if (label == nullptr || label[0] == '\0')
        return;

    const bool selected = g_ui_state.selected_tab == id;
    ImGui::PushStyleColor(ImGuiCol_Text, selected ? style.selected_text
                                                   : style.text);
    ImGui::TextUnformatted(label);
    ImGui::PopStyleColor();

    const ImVec2 min = ImGui::GetItemRectMin();
    const ImVec2 max = ImGui::GetItemRectMax();
    ImGui::GetWindowDrawList()->AddRect(min, max,
                                        ImGui::GetColorU32(style.frame));
    g_ui_state.selected_tab = id;
}

} // namespace renderer
} // namespace sf
