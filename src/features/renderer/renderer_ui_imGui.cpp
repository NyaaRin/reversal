#include "renderer_ui_imGui.h"

#include <algorithm>
#include <vector>

#include "imgui.h"
#include "ui_widgets.h"

namespace sf {
namespace renderer {

bool ImGuiRendererUi::begin_child(const char* id, float width)
{
    return ImGui::BeginChild(id, ImVec2(width, 0.0f), true);
}

void ImGuiRendererUi::end_child()
{
    ImGui::EndChild();
}

bool ImGuiRendererUi::section(const char* label, bool default_open)
{
    const ImGuiTreeNodeFlags flags =
        default_open ? ImGuiTreeNodeFlags_DefaultOpen : 0;
    return ImGui::CollapsingHeader(label, flags);
}

bool ImGuiRendererUi::checkbox(const char* label, bool value)
{
    ImGui::Checkbox(label, &value);
    return value;
}

int ImGuiRendererUi::slider_int(const char* label, int value, int minimum,
                                int maximum)
{
    ImGui::SliderInt(label, &value, minimum, maximum);
    return value;
}

float ImGuiRendererUi::slider_float(const char* label, float value,
                                    float minimum, float maximum)
{
    ImGui::SliderFloat(label, &value, minimum, maximum);
    return value;
}

int ImGuiRendererUi::combo(const char* label, int value,
                           const char* const* items, int item_count)
{
    ImGui::Combo(label, &value, items, item_count);
    return value;
}

bool ImGuiRendererUi::button(const char* label)
{
    return ImGui::Button(label);
}

bool ImGuiRendererUi::settings_button(const char* label)
{
    return ImGui::SmallButton(label);
}

void ImGuiRendererUi::open_popup(const char* id)
{
    ImGui::OpenPopup(id);
}

bool ImGuiRendererUi::begin_popup(const char* id)
{
    return ImGui::BeginPopup(id);
}

void ImGuiRendererUi::end_popup()
{
    ImGui::EndPopup();
}

void ImGuiRendererUi::text(const char* text)
{
    ImGui::TextUnformatted(text != nullptr ? text : "");
}

void ImGuiRendererUi::tooltip(const char* text)
{
    if (ImGui::IsItemHovered())
        ImGui::SetTooltip("%s", text != nullptr ? text : "");
}

void ImGuiRendererUi::same_line()
{
    ImGui::SameLine();
}

void ImGuiRendererUi::separator()
{
    ImGui::Separator();
}

int ImGuiRendererUi::keybind(const char* id, int key)
{
    int value = key;
    DrawKeybindRow(id, &value, 120.0f);
    return value;
}

std::string ImGuiRendererUi::text_input(const char* id, std::string value,
                                        std::size_t capacity)
{
    const std::size_t size = std::max<std::size_t>(capacity, 1);
    std::vector<char> buffer(size + 1, '\0');
    const std::size_t copied = std::min(value.size(), size);
    std::copy_n(value.data(), copied, buffer.data());
    if (ImGui::InputText(id, buffer.data(), buffer.size()))
        value.assign(buffer.data());
    return value;
}

bool ImGuiRendererUi::is_hovered()
{
    return ImGui::IsItemHovered();
}

} // namespace renderer
} // namespace sf
