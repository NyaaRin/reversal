// Custom mayrr/Obsidian menu shell.
//
// Included inside the anonymous namespace of renderer_runtime.cpp.  The palette
// is the recovered theme table at RVA 0x3dc978 (theme 0, Obsidian), and the
// font is the original Arial choice.

// ---------------------------------------------------------------- palette

constexpr ImU32 kMenuBg        = IM_COL32(11, 12, 17, 255);
constexpr ImU32 kMenuPanel     = IM_COL32(15, 17, 23, 255);
constexpr ImU32 kMenuCard      = IM_COL32(19, 21, 28, 255);
constexpr ImU32 kMenuCardAlt   = IM_COL32(24, 27, 36, 255);
constexpr ImU32 kMenuBorder    = IM_COL32(38, 42, 53, 255);
constexpr ImU32 kMenuAccent    = IM_COL32(79, 125, 243, 255);
constexpr ImU32 kMenuAccentDim = IM_COL32(27, 42, 69, 255);
constexpr ImU32 kMenuGreen     = IM_COL32(60, 210, 156, 255);
constexpr ImU32 kMenuOrange    = IM_COL32(255, 180, 71, 255);
constexpr ImU32 kMenuRed       = IM_COL32(192, 64, 78, 255);
constexpr ImU32 kMenuText      = IM_COL32(230, 233, 240, 255);
constexpr ImU32 kMenuMuted     = IM_COL32(138, 144, 160, 255);

ImVec4 V4c(ImU32 color) { return ImGui::ColorConvertU32ToFloat4(color); }

void ApplyMenuStyle()
{
    ImGuiStyle& style = ImGui::GetStyle();
    style.WindowPadding = ImVec2(0.f, 0.f);
    style.WindowRounding = 10.f;
    style.WindowBorderSize = 1.f;
    style.ChildRounding = 8.f;
    style.ChildBorderSize = 1.f;
    style.FrameRounding = 5.f;
    style.FrameBorderSize = 0.f;
    style.PopupRounding = 6.f;
    style.PopupBorderSize = 1.f;
    style.ItemSpacing = ImVec2(8.f, 6.f);
    style.ItemInnerSpacing = ImVec2(6.f, 4.f);
    style.ScrollbarSize = 8.f;
    style.ScrollbarRounding = 4.f;
    style.GrabRounding = 4.f;
    style.Colors[ImGuiCol_WindowBg] = V4c(kMenuBg);
    style.Colors[ImGuiCol_ChildBg] = V4c(kMenuCard);
    style.Colors[ImGuiCol_PopupBg] = V4c(kMenuCard);
    style.Colors[ImGuiCol_Border] = V4c(kMenuBorder);
    style.Colors[ImGuiCol_FrameBg] = V4c(kMenuPanel);
    style.Colors[ImGuiCol_FrameBgHovered] = V4c(kMenuCardAlt);
    style.Colors[ImGuiCol_FrameBgActive] = V4c(kMenuAccentDim);
    style.Colors[ImGuiCol_TitleBg] = V4c(kMenuBg);
    style.Colors[ImGuiCol_TitleBgActive] = V4c(kMenuBg);
    style.Colors[ImGuiCol_MenuBarBg] = V4c(kMenuBg);
    style.Colors[ImGuiCol_ScrollbarBg] = V4c(kMenuBg);
    style.Colors[ImGuiCol_ScrollbarGrab] = V4c(kMenuBorder);
    style.Colors[ImGuiCol_ScrollbarGrabHovered] = V4c(kMenuMuted);
    style.Colors[ImGuiCol_ScrollbarGrabActive] = V4c(kMenuAccent);
    style.Colors[ImGuiCol_CheckMark] = V4c(kMenuAccent);
    style.Colors[ImGuiCol_SliderGrab] = V4c(kMenuAccent);
    style.Colors[ImGuiCol_SliderGrabActive] = V4c(kMenuAccent);
    style.Colors[ImGuiCol_Button] = V4c(kMenuAccentDim);
    style.Colors[ImGuiCol_ButtonHovered] = V4c(kMenuAccent);
    style.Colors[ImGuiCol_ButtonActive] = V4c(kMenuAccent);
    style.Colors[ImGuiCol_Header] = V4c(kMenuAccentDim);
    style.Colors[ImGuiCol_HeaderHovered] = V4c(kMenuAccentDim);
    style.Colors[ImGuiCol_HeaderActive] = V4c(kMenuAccent);
    style.Colors[ImGuiCol_Separator] = V4c(kMenuBorder);
    style.Colors[ImGuiCol_Text] = V4c(kMenuText);
    style.Colors[ImGuiCol_TextDisabled] = V4c(kMenuMuted);
}

// ---------------------------------------------------------------- menu state

int g_menuPage = 0;          // 0 combat, 1 visual, 2 utility, 3 logs, 4 network,
                             // 5 lua, 6 esp, 7 settings
int g_combatTab = 0;
int g_visualTab = 0;
int g_utilityTab = 0;
char g_menuSearch[64] = {};
bool g_configDirty = false;
double g_configDirtyTime = 0.0;

bool g_aimPlayers = true;
bool g_aimNpcs = false;
int g_aimMode = 0;
bool g_stopOnKill = false;
bool g_ignoreGod = false;
bool g_ignoreDormant = true;
bool g_ignoreInvisible = false;
bool g_drawFov = true;
bool g_antiAc = true;
int g_targetPriority = 0;
int g_hitscanMode = 0;
int g_hitboxMode = 0;
int g_hitboxes = 0;
bool g_noVisualRecoil = true;

// Per-feature gear-popup state.  These mirror the sub-settings the original
// Combat page exposes through its "##*_popup" windows.  The runtime-backed
// toggles above are live; these are the menu-side policy switches.
bool g_overrideMovementLocks = true;
bool g_ignoreNotarget = false;
bool g_drawFovFilled = false;
bool g_drawFovDebug = false;
float g_fovColor[3] = { 0.278f, 0.486f, 0.980f };
bool g_antiReversal = true;
bool g_antiMouse = true;
bool g_antiSnap = true;
bool g_antiTickshift = true;
bool g_antiTiming = true;
bool g_antiNova = true;
bool g_antiEvents = true;
bool g_visCache = true;
bool g_multipointNear = true;
bool g_autowall = false;
float g_awMinDamage = 25.f;
int g_awWalls = 1;
bool g_leadUncomped = false;
float g_leadMax = 12.f;
bool g_showScreenRecoil = false;
bool g_eyeSyncBypass = true;
bool g_backtrackWindow = true;
bool g_backtrackVisualize = false;
bool g_backtrackVisValid = true;
bool g_backtrackNoExtrap = false;
bool g_fakePing = false;
int g_fakePingTarget = 80;
bool g_fakePingStrict = true;
bool g_fakePingRewind = true;

enum GearPopupKind
{
    Gear_None = 0,
    Gear_Aimbot,
    Gear_Npc,
    Gear_Fov,
    Gear_AntiAc,
    Gear_Hitscan,
    Gear_Recoil,
    Gear_Backtrack,
};

ImVec2 g_gearPopupPos;
void DrawGearPopupContents(GearPopupKind kind);

const char* const kAimModes[] = { "Silent", "Assist", "Rage" };
const char* const kAutostrafeModes[] = { "WASD", "Viewangle" };
const char* const kTargetPriorities[] = { "Crosshair", "Nearest", "Threat" };
const char* const kHitscanModes[] = { "Ordered", "Nearest", "Random" };
const char* const kHitboxes[] = { "All", "Head", "Chest", "Stomach" };
const char* const kChamsStyles[] = {
    "Flat", "Wireframe", "Metallic", "Brushed metal", "Cloak (refract)",
    "Energy", "Shield", "Spawn glow", "Additive ghost", "Translucent",
    "Flesh", "Warp", "Custom..."
};
const char* const kPitchModes[] = { "Off", "Up", "Down", "Jitter", "Zero" };
const char* const kYawModes[] = { "Off", "Backwards", "Jitter", "Spin", "Target +90",
                                  "Target -90", "Jitter alt", "Body 1", "Body 2", "Body 3" };

void MarkDirty()
{
    g_configDirty = true;
    g_configDirtyTime = ImGui::GetTime();
}

// ---------------------------------------------------------------- primitives

void DrawGear(ImDrawList* dl, ImVec2 center, float radius, ImU32 color)
{
    dl->AddCircle(center, radius * 0.52f, color, 12, 1.4f);
    for (int i = 0; i < 8; ++i)
    {
        const float angle = (float)i * 3.14159265f / 4.f;
        const ImVec2 inner(center.x + std::cos(angle) * radius * 0.62f,
                           center.y + std::sin(angle) * radius * 0.62f);
        const ImVec2 outer(center.x + std::cos(angle) * radius,
                           center.y + std::sin(angle) * radius);
        dl->AddLine(inner, outer, color, 1.4f);
    }
}

void DrawShield(ImDrawList* dl, ImVec2 p, float size, ImU32 color)
{
    const ImVec2 shield[6] = {
        { p.x + size * 0.5f, p.y },
        { p.x + size, p.y + size * 0.18f },
        { p.x + size, p.y + size * 0.58f },
        { p.x + size * 0.5f, p.y + size },
        { p.x, p.y + size * 0.58f },
        { p.x, p.y + size * 0.18f },
    };
    dl->AddConvexPolyFilled(shield, 6, color);
    dl->AddPolyline(shield, 6, IM_COL32(255, 255, 255, 235), 1.4f, ImDrawFlags_Closed);
}

[[maybe_unused]] void DrawLogo(ImDrawList* dl, ImVec2 p, float size)
{
    dl->AddRectFilled(p, ImVec2(p.x + size, p.y + size), IM_COL32(12, 22, 39, 255), 7.f);
    dl->AddRect(p, ImVec2(p.x + size, p.y + size), IM_COL32(32, 47, 74, 255), 7.f);
    const float inset = 6.f;
    const ImVec2 q(p.x + inset, p.y + inset + 1.f);
    const float s = size - inset * 2.f;
    const ImVec2 shield[6] = {
        { q.x + s * 0.5f, q.y },
        { q.x + s, q.y + s * 0.18f },
        { q.x + s, q.y + s * 0.58f },
        { q.x + s * 0.5f, q.y + s },
        { q.x, q.y + s * 0.58f },
        { q.x, q.y + s * 0.18f },
    };
    const ImVec2 left_half[4] = { shield[0], shield[5], shield[4], shield[3] };
    const ImVec2 right_half[4] = { shield[0], shield[1], shield[2], shield[3] };
    dl->AddConvexPolyFilled(left_half, 4, IM_COL32(94, 140, 255, 255));
    dl->AddConvexPolyFilled(right_half, 4, IM_COL32(55, 102, 220, 255));
    dl->AddPolyline(shield, 6, IM_COL32(255, 255, 255, 238), 1.5f, ImDrawFlags_Closed);
}

void DrawNavIcon(ImDrawList* dl, ImVec2 p, int icon, ImU32 color)
{
    const float s = 14.f;
    const ImVec2 c(p.x + s * 0.5f, p.y + s * 0.5f);
    switch (icon)
    {
    case 0: // combat / crosshair
        dl->AddCircle(c, 5.2f, color, 16, 1.4f);
        dl->AddLine(ImVec2(c.x - 8.f, c.y), ImVec2(c.x - 3.f, c.y), color, 1.4f);
        dl->AddLine(ImVec2(c.x + 3.f, c.y), ImVec2(c.x + 8.f, c.y), color, 1.4f);
        dl->AddLine(ImVec2(c.x, c.y - 8.f), ImVec2(c.x, c.y - 3.f), color, 1.4f);
        dl->AddLine(ImVec2(c.x, c.y + 3.f), ImVec2(c.x, c.y + 8.f), color, 1.4f);
        dl->AddCircleFilled(c, 1.4f, color);
        break;
    case 1: // eye
        dl->AddBezierCubic(ImVec2(p.x, c.y), ImVec2(p.x + 4.f, p.y + 1.f),
                           ImVec2(p.x + 10.f, p.y + 1.f), ImVec2(p.x + 14.f, c.y), color, 1.3f);
        dl->AddBezierCubic(ImVec2(p.x, c.y), ImVec2(p.x + 4.f, p.y + 13.f),
                           ImVec2(p.x + 10.f, p.y + 13.f), ImVec2(p.x + 14.f, c.y), color, 1.3f);
        dl->AddCircleFilled(c, 2.2f, color);
        break;
    case 2: // bolt
        dl->AddTriangleFilled(ImVec2(c.x + 2.f, p.y + 1.f), ImVec2(p.x + 2.f, c.y + 1.f),
                              ImVec2(c.x - 1.f, c.y + 1.f), color);
        dl->AddTriangleFilled(ImVec2(c.x - 2.f, p.y + 13.f), ImVec2(p.x + 12.f, c.y - 1.f),
                              ImVec2(c.x + 1.f, c.y - 1.f), color);
        break;
    case 3: // logs
        for (int i = 0; i < 3; ++i)
            dl->AddLine(ImVec2(p.x + 1.f, p.y + 3.f + i * 4.f),
                        ImVec2(p.x + 13.f, p.y + 3.f + i * 4.f), color, 1.3f);
        break;
    case 4: // globe
        dl->AddCircle(c, 6.4f, color, 20, 1.3f);
        dl->AddEllipse(c, ImVec2(3.2f, 6.4f), color, 0.f, 20, 1.1f);
        dl->AddLine(ImVec2(p.x + 1.f, c.y), ImVec2(p.x + 13.f, c.y), color, 1.1f);
        break;
    case 5: // lua / code
        dl->AddLine(ImVec2(p.x + 4.f, p.y + 2.f), ImVec2(p.x, p.y + 7.f), color, 1.4f);
        dl->AddLine(ImVec2(p.x, p.y + 7.f), ImVec2(p.x + 4.f, p.y + 12.f), color, 1.4f);
        dl->AddLine(ImVec2(p.x + 10.f, p.y + 2.f), ImVec2(p.x + 14.f, p.y + 7.f), color, 1.4f);
        dl->AddLine(ImVec2(p.x + 14.f, p.y + 7.f), ImVec2(p.x + 10.f, p.y + 12.f), color, 1.4f);
        break;
    case 6: // esp box
        dl->AddRect(ImVec2(p.x + 1.f, p.y + 2.f), ImVec2(p.x + 13.f, p.y + 12.f), color, 2.f, 0, 1.2f);
        dl->AddLine(ImVec2(p.x + 1.f, p.y + 5.f), ImVec2(p.x + 13.f, p.y + 5.f), color, 1.f);
        break;
    case 7: // settings
        DrawGear(dl, c, 7.f, color);
        break;
    case 8: // target
        dl->AddCircle(c, 5.6f, color, 16, 1.4f);
        dl->AddCircleFilled(c, 1.8f, color);
        break;
    case 9: // users
        dl->AddCircle(ImVec2(c.x - 2.f, p.y + 5.f), 2.8f, color, 12, 1.2f);
        dl->AddCircle(ImVec2(c.x + 5.f, p.y + 6.f), 2.2f, color, 12, 1.2f);
        dl->AddLine(ImVec2(p.x + 1.f, p.y + 13.f), ImVec2(p.x + 7.f, p.y + 10.f), color, 1.2f);
        dl->AddLine(ImVec2(p.x + 7.f, p.y + 10.f), ImVec2(p.x + 13.f, p.y + 13.f), color, 1.2f);
        break;
    case 10: // precision
        dl->AddCircle(c, 4.2f, color, 16, 1.2f);
        dl->AddLine(ImVec2(c.x - 7.f, c.y), ImVec2(c.x - 3.f, c.y), color, 1.2f);
        dl->AddLine(ImVec2(c.x + 3.f, c.y), ImVec2(c.x + 7.f, c.y), color, 1.2f);
        break;
    case 11: // shield
        DrawShield(dl, ImVec2(p.x + 1.f, p.y + 1.f), 12.f, color);
        break;
    default:
        dl->AddCircle(c, 5.f, color, 16, 1.3f);
        break;
    }
}

void DrawCardIcon(ImDrawList* dl, ImVec2 p, int icon)
{
    dl->AddCircleFilled(ImVec2(p.x + 9.f, p.y + 9.f), 9.f, kMenuAccentDim, 20);
    DrawNavIcon(dl, ImVec2(p.x + 2.f, p.y + 2.f), icon, kMenuAccent);
}

void DrawSwitch(ImDrawList* dl, ImVec2 p, float width, float height, bool on)
{
    dl->AddRectFilled(p, ImVec2(p.x + width, p.y + height),
                      on ? kMenuAccent : IM_COL32(45, 52, 67, 255), height * 0.5f);
    const float knob = on ? p.x + width - height * 0.5f : p.x + height * 0.5f;
    dl->AddCircleFilled(ImVec2(knob, p.y + height * 0.5f), height * 0.5f - 2.f,
                        IM_COL32(255, 255, 255, 255), 16);
}

void DrawTabs(const char* const* labels, int count, int* active, ImVec2 pos)
{
    ImDrawList* dl = ImGui::GetWindowDrawList();
    float x = pos.x;
    for (int i = 0; i < count; ++i)
    {
        const ImVec2 textSize = g_menuFont->CalcTextSizeA(14.f, FLT_MAX, 0.f, labels[i]);
        const float width = textSize.x + 24.f;
        ImGui::SetCursorScreenPos(ImVec2(x, pos.y));
        ImGui::PushID(i);
        ImGui::InvisibleButton("##tab", ImVec2(width, 28.f));
        const bool hovered = ImGui::IsItemHovered();
        if (ImGui::IsItemClicked())
            *active = i;
        if (*active == i)
            dl->AddRectFilled(ImVec2(x, pos.y), ImVec2(x + width, pos.y + 28.f), kMenuAccentDim, 14.f);
        else if (hovered)
            dl->AddRectFilled(ImVec2(x, pos.y), ImVec2(x + width, pos.y + 28.f),
                              IM_COL32(255, 255, 255, 8), 14.f);
        dl->AddText(g_menuFont, 14.f, ImVec2(x + 12.f, pos.y + 6.f),
                    *active == i ? kMenuAccent : kMenuMuted, labels[i]);
        ImGui::PopID();
        x += width + 8.f;
    }
}

// ---------------------------------------------------------------- widgets

void BeginCard(const char* id, const char* title, int icon, ImVec2 size, bool scrollable = false)
{
    ImGui::PushStyleColor(ImGuiCol_ChildBg, V4c(kMenuCard));
    ImGui::PushStyleColor(ImGuiCol_Border, V4c(kMenuBorder));
    ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 8.f);
    ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 1.f);
    ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0.f, 0.f));
    ImGui::BeginChild(id, size, true,
                      scrollable ? 0 : (ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse));
    const ImVec2 p = ImGui::GetWindowPos();
    ImDrawList* dl = ImGui::GetWindowDrawList();
    DrawCardIcon(dl, ImVec2(p.x + 16.f, p.y + 14.f), icon);
    dl->AddText(g_menuFontBold, 13.f, ImVec2(p.x + 42.f, p.y + 16.f), kMenuText, title);
    ImGui::SetCursorScreenPos(ImVec2(p.x + 16.f, p.y + 44.f));
}

void EndCard()
{
    ImGui::EndChild();
    ImGui::PopStyleVar(3);
    ImGui::PopStyleColor(2);
}

bool ToggleRow(const char* label, bool* value, GearPopupKind gearKind = Gear_None,
               bool keybind = false, const char* key = "X", float gearOffset = 22.f)
{
    ImGui::PushID(label);
    const ImVec2 p = ImGui::GetCursorScreenPos();
    const float width = ImGui::GetContentRegionAvail().x;
    ImGui::InvisibleButton("##row", ImVec2(width, 24.f));
    const bool hovered = ImGui::IsItemHovered();
    const bool clicked = ImGui::IsItemClicked();
    ImDrawList* dl = ImGui::GetWindowDrawList();
    if (hovered)
        dl->AddRectFilled(p, ImVec2(p.x + width, p.y + 24.f), IM_COL32(255, 255, 255, 8), 4.f);
    dl->AddText(g_menuFont, 13.f, ImVec2(p.x + 2.f, p.y + 5.f), kMenuText, label);

    const float toggleX = p.x + width - 2.f - 34.f;
    bool gearClicked = false;
    float keybindX = 0.f;
    if (keybind)
    {
        keybindX = toggleX - 89.f;
        const ImVec2 kb(keybindX, p.y + 3.f);
        dl->AddRectFilled(kb, ImVec2(kb.x + 34.f, kb.y + 18.f), kMenuPanel, 4.f);
        dl->AddRect(kb, ImVec2(kb.x + 34.f, kb.y + 18.f), kMenuBorder, 4.f);
        dl->AddText(g_menuFontSmall, 12.f, ImVec2(kb.x + 11.f, kb.y + 2.f), kMenuMuted, key);
    }
    if (gearKind != Gear_None)
    {
        // The reference uses a compact "..." settings button between the
        // label and the switch, not a gear next to the switch.
        const float gearX = keybind ? (keybindX - 34.f) : (toggleX - gearOffset);
        const ImVec2 gearCenter(gearX, p.y + 12.f);
        const bool gearHovered = ImGui::IsMouseHoveringRect(
            ImVec2(gearCenter.x - 12.f, gearCenter.y - 12.f),
            ImVec2(gearCenter.x + 12.f, gearCenter.y + 12.f));
        DrawGear(dl, gearCenter, 7.f, gearHovered ? kMenuAccent : kMenuMuted);
        if (gearHovered && ImGui::IsMouseClicked(0))
        {
            g_gearPopupPos = ImVec2(gearCenter.x + 12.f, gearCenter.y + 16.f);
            ImGui::OpenPopup("##gear_popup");
            gearClicked = true;
        }
    }
    DrawSwitch(dl, ImVec2(toggleX, p.y + 4.f), 34.f, 16.f, *value);
    if (clicked && !gearClicked)
    {
        *value = !*value;
        MarkDirty();
    }
    if (gearKind != Gear_None)
    {
        ImGui::SetNextWindowPos(g_gearPopupPos, ImGuiCond_Appearing);
        ImGui::SetNextWindowSize(ImVec2(300.f, 0.f), ImGuiCond_Appearing);
        ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(12.f, 10.f));
        ImGui::PushStyleColor(ImGuiCol_PopupBg, V4c(kMenuCard));
        ImGui::PushStyleColor(ImGuiCol_Border, V4c(kMenuBorder));
        ImGui::PushStyleColor(ImGuiCol_Text, V4c(kMenuText));
        if (ImGui::BeginPopup("##gear_popup", ImGuiWindowFlags_AlwaysAutoResize))
        {
            DrawGearPopupContents(gearKind);
            ImGui::EndPopup();
        }
        ImGui::PopStyleColor(3);
        ImGui::PopStyleVar();
    }
    ImGui::PopID();
    return clicked;
}

bool SliderRow(const char* label, float* value, float minimum, float maximum, const char* format)
{
    ImGui::PushID(label);
    const ImVec2 p = ImGui::GetCursorScreenPos();
    const float width = ImGui::GetContentRegionAvail().x;
    ImGui::InvisibleButton("##slider", ImVec2(width, 38.f));
    ImDrawList* dl = ImGui::GetWindowDrawList();
    dl->AddText(g_menuFont, 15.f, ImVec2(p.x + 2.f, p.y + 2.f), kMenuText, label);
    char buffer[32] = {};
    std::snprintf(buffer, sizeof(buffer), format, *value);
    const ImVec2 valueSize = g_menuFont->CalcTextSizeA(15.f, FLT_MAX, 0.f, buffer);
    dl->AddText(g_menuFont, 15.f, ImVec2(p.x + width - valueSize.x - 2.f, p.y + 2.f),
                kMenuText, buffer);

    const float trackX = p.x + 2.f;
    const float trackY = p.y + 26.f;
    const float trackWidth = width - 4.f;
    dl->AddRectFilled(ImVec2(trackX, trackY), ImVec2(trackX + trackWidth, trackY + 4.f),
                      IM_COL32(45, 52, 67, 255), 2.f);
    float t = (maximum > minimum) ? (*value - minimum) / (maximum - minimum) : 0.f;
    t = std::clamp(t, 0.f, 1.f);
    dl->AddRectFilled(ImVec2(trackX, trackY), ImVec2(trackX + trackWidth * t, trackY + 4.f),
                      kMenuAccent, 2.f);
    dl->AddCircleFilled(ImVec2(trackX + trackWidth * t, trackY + 2.f), 6.f, kMenuAccent, 16);

    if (ImGui::IsItemActive())
    {
        const float mouseX = ImGui::GetIO().MousePos.x;
        const float next = std::clamp((mouseX - trackX) / trackWidth, 0.f, 1.f);
        const float nextValue = minimum + next * (maximum - minimum);
        if (nextValue != *value)
        {
            *value = nextValue;
            MarkDirty();
        }
    }
    ImGui::PopID();
    return false;
}

bool SliderIntRow(const char* label, int* value, int minimum, int maximum, const char* format)
{
    float temp = (float)*value;
    SliderRow(label, &temp, (float)minimum, (float)maximum, format);
    const int next = (int)std::lround(temp);
    if (next != *value)
    {
        *value = next;
        MarkDirty();
    }
    return false;
}

bool DropdownRow(const char* label, int* current, const char* const* items, int count,
                 GearPopupKind gearKind = Gear_None)
{
    ImGui::PushID(label);
    const ImVec2 p = ImGui::GetCursorScreenPos();
    const float width = ImGui::GetContentRegionAvail().x;
    ImGui::InvisibleButton("##dropdown", ImVec2(width, 24.f));
    bool clicked = ImGui::IsItemClicked();
    ImDrawList* dl = ImGui::GetWindowDrawList();
    dl->AddText(g_menuFont, 13.f, ImVec2(p.x + 2.f, p.y + 5.f), kMenuText, label);

    const float fieldWidth = 108.f;
    const ImVec2 field(p.x + width - fieldWidth - 2.f, p.y + 1.f);
    bool gearClicked = false;
    if (gearKind != Gear_None)
    {
        const ImVec2 gearCenter(field.x - 14.f, p.y + 12.f);
        const bool gearHovered = ImGui::IsMouseHoveringRect(
            ImVec2(gearCenter.x - 12.f, gearCenter.y - 12.f),
            ImVec2(gearCenter.x + 12.f, gearCenter.y + 12.f));
        DrawGear(dl, gearCenter, 7.f, gearHovered ? kMenuAccent : kMenuMuted);
        if (gearHovered && ImGui::IsMouseClicked(0))
        {
            g_gearPopupPos = ImVec2(gearCenter.x + 12.f, gearCenter.y + 16.f);
            ImGui::OpenPopup("##gear_popup");
            gearClicked = true;
            clicked = false;
        }
    }
    dl->AddRectFilled(field, ImVec2(field.x + fieldWidth, field.y + 22.f), kMenuPanel, 5.f);
    dl->AddRect(field, ImVec2(field.x + fieldWidth, field.y + 22.f), kMenuBorder, 5.f);
    const char* text = (*current >= 0 && *current < count) ? items[*current] : "";
    dl->AddText(g_menuFontSmall, 12.f, ImVec2(field.x + 8.f, field.y + 5.f), kMenuText, text);
    dl->AddLine(ImVec2(field.x + fieldWidth - 14.f, field.y + 9.f),
                ImVec2(field.x + fieldWidth - 10.f, field.y + 13.f), kMenuMuted, 1.3f);
    dl->AddLine(ImVec2(field.x + fieldWidth - 10.f, field.y + 13.f),
                ImVec2(field.x + fieldWidth - 6.f, field.y + 9.f), kMenuMuted, 1.3f);

    if (clicked)
        ImGui::OpenPopup("##dropdown_popup");
    ImGui::SetNextWindowPos(ImVec2(field.x, field.y + 23.f));
    if (ImGui::BeginPopup("##dropdown_popup"))
    {
        ImGui::PushStyleColor(ImGuiCol_PopupBg, V4c(kMenuCard));
        ImGui::PushStyleColor(ImGuiCol_Header, V4c(kMenuAccentDim));
        ImGui::PushStyleColor(ImGuiCol_HeaderHovered, V4c(kMenuAccentDim));
        ImGui::PushStyleColor(ImGuiCol_HeaderActive, V4c(kMenuAccent));
        ImGui::PushStyleColor(ImGuiCol_Text, V4c(kMenuText));
        for (int i = 0; i < count; ++i)
        {
            if (ImGui::Selectable(items[i], i == *current))
            {
                *current = i;
                MarkDirty();
            }
        }
        ImGui::PopStyleColor(5);
        ImGui::EndPopup();
    }
    if (gearKind != Gear_None)
    {
        ImGui::SetNextWindowPos(g_gearPopupPos, ImGuiCond_Appearing);
        ImGui::SetNextWindowSize(ImVec2(300.f, 0.f), ImGuiCond_Appearing);
        ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(12.f, 10.f));
        ImGui::PushStyleColor(ImGuiCol_PopupBg, V4c(kMenuCard));
        ImGui::PushStyleColor(ImGuiCol_Border, V4c(kMenuBorder));
        ImGui::PushStyleColor(ImGuiCol_Text, V4c(kMenuText));
        if (ImGui::BeginPopup("##gear_popup", ImGuiWindowFlags_AlwaysAutoResize))
        {
            DrawGearPopupContents(gearKind);
            ImGui::EndPopup();
        }
        ImGui::PopStyleColor(3);
        ImGui::PopStyleVar();
    }
    ImGui::PopID();
    (void)gearClicked;
    return false;
}

bool ColorRow(const char* label, float* rgb)
{
    ImGui::PushID(label);
    const ImVec2 p = ImGui::GetCursorScreenPos();
    const float width = ImGui::GetContentRegionAvail().x;
    ImGui::InvisibleButton("##color", ImVec2(width, 28.f));
    ImDrawList* dl = ImGui::GetWindowDrawList();
    dl->AddText(g_menuFont, 15.f, ImVec2(p.x + 2.f, p.y + 5.f), kMenuText, label);
    ImGui::SetCursorScreenPos(ImVec2(p.x + width - 62.f, p.y + 3.f));
    ImGui::SetNextItemWidth(58.f);
    const bool changed = ImGui::ColorEdit3(
        "##rgb", rgb, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel);
    if (changed)
        MarkDirty();
    ImGui::PopID();
    return changed;
}

bool ButtonRow(const char* label)
{
    ImGui::PushStyleColor(ImGuiCol_Button, V4c(kMenuAccentDim));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, V4c(kMenuAccent));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, V4c(kMenuAccent));
    const bool clicked = ImGui::Button(label, ImVec2(-1.f, 28.f));
    ImGui::PopStyleColor(3);
    return clicked;
}

void DrawGearPopupContents(GearPopupKind kind)
{
    ImGui::Dummy(ImVec2(276.f, 0.f));
    const char* title = "Settings";
    switch (kind)
    {
    case Gear_Aimbot: title = "Aimbot settings"; break;
    case Gear_Npc: title = "NPC filter"; break;
    case Gear_Fov: title = "FOV display"; break;
    case Gear_AntiAc: title = "Anti-AC protection"; break;
    case Gear_Hitscan: title = "Hitscan performance"; break;
    case Gear_Recoil: title = "Visual recoil"; break;
    case Gear_Backtrack: title = "Backtrack"; break;
    default: break;
    }
    ImGui::PushFont(g_menuFontBold, 14.f);
    ImGui::TextUnformatted(title);
    ImGui::PopFont();
    ImGui::Dummy(ImVec2(0.f, 4.f));
    switch (kind)
    {
    case Gear_Aimbot:
        ImGui::TextUnformatted("Aim key: X (hold)");
        ImGui::TextWrapped("Auto aim, auto fire and anti-AC are on the Targeting card.");
        break;
    case Gear_Npc:
        ImGui::TextUnformatted("NPC targets use the same eye fallback as players.");
        break;
    case Gear_Fov:
    {
        sf::runtime::Config& cfg = sf::runtime::LiveConfig();
        ToggleRow("Filled", &cfg.drawFovFilled);
        ToggleRow("Debug", &cfg.drawFovDebug);
        float fovColour[3] = { cfg.fovR, cfg.fovG, cfg.fovB };
        ColorRow("FOV colour", fovColour);
        cfg.fovR = fovColour[0];
        cfg.fovG = fovColour[1];
        cfg.fovB = fovColour[2];
        break;
    }
    case Gear_AntiAc:
    {
        sf::runtime::Config& cfg = sf::runtime::LiveConfig();
        ImGui::TextWrapped("Aim updates are skipped so the shot pattern is not perfectly periodic.");
        SliderIntRow("Skip every N commands", &cfg.antiAcRate, 2, 8, "%.0f");
        break;
    }
    case Gear_Hitscan:
        ToggleRow("Cache visibility traces", &g_visCache);
        ToggleRow("Head multipoint only close", &g_multipointNear);
        ToggleRow("Autowall", &g_autowall);
        SliderRow("Min damage", &g_awMinDamage, 0.f, 100.f, "%.0f");
        SliderIntRow("Walls", &g_awWalls, 1, 4, "%.0f");
        ToggleRow("Lead uncompensated bodies", &g_leadUncomped);
        SliderRow("Max lead", &g_leadMax, 0.f, 30.f, "%.0f u");
        break;
    case Gear_Recoil:
    {
        sf::runtime::Config& cfg = sf::runtime::LiveConfig();
        ToggleRow("No visual recoil", &cfg.noVisualRecoil);
        SliderRow("Punch scale", &cfg.recoilScale, 0.f, 1.f, "%.2f");
        ImGui::TextWrapped("0 removes the local punch completely; 1 keeps the engine value.");
        break;
    }
    case Gear_Backtrack:
    {
        sf::runtime::Config& cfg = sf::runtime::LiveConfig();
        ToggleRow("Backtrack", &cfg.backtrack);
        float backtrackTime = cfg.backtrackTime;
        SliderRow("Backtrack time", &backtrackTime, 0.05f, 0.5f, "%.2fs");
        cfg.backtrackTime = backtrackTime;
        ImGui::Dummy(ImVec2(0.f, 4.f));
        ToggleRow("Backtrack window", &g_backtrackWindow);
        ToggleRow("Show records", &g_backtrackVisualize);
        ToggleRow("Only shootable ones", &g_backtrackVisValid);
        ToggleRow("No extrapolation", &g_backtrackNoExtrap);
        ToggleRow("Fake ping", &g_fakePing);
        SliderIntRow("Target ping", &g_fakePingTarget, 0, 200, "%.0f");
        ToggleRow("Strict reliable safety", &g_fakePingStrict);
        ToggleRow("Rewind reliable state", &g_fakePingRewind);
        break;
    }
    default:
        break;
    }
}

void InfoRow(const char* label, const char* value)
{
    const ImVec2 p = ImGui::GetCursorScreenPos();
    const float width = ImGui::GetContentRegionAvail().x;
    ImGui::Dummy(ImVec2(width, 24.f));
    ImDrawList* dl = ImGui::GetWindowDrawList();
    dl->AddText(g_menuFont, 15.f, ImVec2(p.x + 2.f, p.y + 3.f), kMenuMuted, label);
    const ImVec2 valueSize = g_menuFont->CalcTextSizeA(15.f, FLT_MAX, 0.f, value);
    dl->AddText(g_menuFont, 15.f, ImVec2(p.x + width - valueSize.x - 2.f, p.y + 3.f),
                kMenuText, value);
}

const char* PageTitle(int page)
{
    switch (page)
    {
    case 0: return "Combat";
    case 1: return "Visual";
    case 2: return "Utility";
    case 3: return "Logs";
    case 4: return "Network";
    case 5: return "Lua editor";
    case 6: return "ESP editor";
    default: return "Settings";
    }
}

const char* PageSubtitle(int page)
{
    switch (page)
    {
    case 0: return "targeting & accuracy";
    case 1: return "players, world & chams";
    case 2: return "movement & tools";
    case 3: return "runtime output";
    case 4: return "connection & interfaces";
    case 5: return "client & shared scripts";
    case 6: return "element editor";
    default: return "appearance & config";
    }
}

// ---------------------------------------------------------------- pages

void DrawPageHeader(ImVec2, const char*, const char*)
{
    // The 748x518 shell carries the page title and subtitle in the top bar.
}

[[maybe_unused]] void KeybindButton(const char* key)
{
    const ImVec2 p = ImGui::GetCursorScreenPos();
    const float width = ImGui::GetContentRegionAvail().x;
    ImGui::InvisibleButton("##keybind", ImVec2(width, 24.f));
    ImDrawList* dl = ImGui::GetWindowDrawList();
    dl->AddRectFilled(p, ImVec2(p.x + width, p.y + 24.f), kMenuPanel, 5.f);
    dl->AddRect(p, ImVec2(p.x + width, p.y + 24.f), kMenuBorder, 5.f);
    const ImVec2 size = g_menuFontSmall->CalcTextSizeA(12.f, FLT_MAX, 0.f, key);
    dl->AddText(g_menuFontSmall, 12.f,
                ImVec2(p.x + (width - size.x) * 0.5f, p.y + 5.f), kMenuMuted, key);
}

[[maybe_unused]] void AimTypeRow(int* current)
{
    ImGui::PushID("aim_mode");
    const ImVec2 p = ImGui::GetCursorScreenPos();
    const float width = ImGui::GetContentRegionAvail().x;
    ImGui::InvisibleButton("##aim_type", ImVec2(width, 30.f));
    const bool clicked = ImGui::IsItemClicked();
    ImDrawList* dl = ImGui::GetWindowDrawList();
    const ImVec2 field(p.x + 4.f, p.y + 4.f);
    const float fieldWidth = 110.f;
    dl->AddRectFilled(field, ImVec2(field.x + fieldWidth, field.y + 22.f), kMenuPanel, 5.f);
    dl->AddRect(field, ImVec2(field.x + fieldWidth, field.y + 22.f), kMenuBorder, 5.f);
    const char* value = (*current >= 0 && *current < 3) ? kAimModes[*current] : "";
    dl->AddText(g_menuFontSmall, 12.f, ImVec2(field.x + 8.f, field.y + 5.f), kMenuText, value);
    dl->AddLine(ImVec2(field.x + fieldWidth - 14.f, field.y + 9.f),
                ImVec2(field.x + fieldWidth - 10.f, field.y + 13.f), kMenuMuted, 1.3f);
    dl->AddLine(ImVec2(field.x + fieldWidth - 10.f, field.y + 13.f),
                ImVec2(field.x + fieldWidth - 6.f, field.y + 9.f), kMenuMuted, 1.3f);
    dl->AddText(g_menuFontSmall, 12.f, ImVec2(p.x + 134.f, p.y + 9.f), kMenuMuted, "Silent type");
    if (clicked)
        ImGui::OpenPopup("##aim_type_popup");
    ImGui::SetNextWindowPos(ImVec2(field.x, field.y + 23.f));
    if (ImGui::BeginPopup("##aim_type_popup"))
    {
        ImGui::PushStyleColor(ImGuiCol_PopupBg, V4c(kMenuCard));
        ImGui::PushStyleColor(ImGuiCol_Header, V4c(kMenuAccentDim));
        ImGui::PushStyleColor(ImGuiCol_HeaderHovered, V4c(kMenuAccentDim));
        ImGui::PushStyleColor(ImGuiCol_HeaderActive, V4c(kMenuAccent));
        ImGui::PushStyleColor(ImGuiCol_Text, V4c(kMenuText));
        for (int i = 0; i < 3; ++i)
            if (ImGui::Selectable(kAimModes[i], i == *current))
            {
                *current = i;
                MarkDirty();
            }
        ImGui::PopStyleColor(5);
        ImGui::EndPopup();
    }
    ImGui::PopID();
}

bool SliderMsRow(const char* label, float* value, float minimum, float maximum)
{
    ImGui::PushID(label);
    const ImVec2 p = ImGui::GetCursorScreenPos();
    const float width = ImGui::GetContentRegionAvail().x;
    ImGui::InvisibleButton("##slider_ms", ImVec2(width, 38.f));
    ImDrawList* dl = ImGui::GetWindowDrawList();
    dl->AddText(g_menuFont, 13.f, ImVec2(p.x + 2.f, p.y + 2.f), kMenuText, label);
    char buffer[32] = {};
    std::snprintf(buffer, sizeof(buffer), "%.0fms", *value * 1000.f);
    const ImVec2 valueSize = g_menuFont->CalcTextSizeA(13.f, FLT_MAX, 0.f, buffer);
    dl->AddText(g_menuFont, 13.f, ImVec2(p.x + width - valueSize.x - 2.f, p.y + 2.f),
                kMenuText, buffer);
    const float trackX = p.x + 2.f;
    const float trackY = p.y + 26.f;
    const float trackWidth = width - 4.f;
    dl->AddRectFilled(ImVec2(trackX, trackY), ImVec2(trackX + trackWidth, trackY + 4.f),
                      IM_COL32(45, 52, 67, 255), 2.f);
    float t = (maximum > minimum) ? (*value - minimum) / (maximum - minimum) : 0.f;
    t = std::clamp(t, 0.f, 1.f);
    dl->AddRectFilled(ImVec2(trackX, trackY), ImVec2(trackX + trackWidth * t, trackY + 4.f),
                      kMenuAccent, 2.f);
    dl->AddCircleFilled(ImVec2(trackX + trackWidth * t, trackY + 2.f), 6.f, kMenuAccent, 16);
    if (ImGui::IsItemActive())
    {
        const float mouseX = ImGui::GetIO().MousePos.x;
        const float next = std::clamp((mouseX - trackX) / trackWidth, 0.f, 1.f);
        const float nextValue = minimum + next * (maximum - minimum);
        if (nextValue != *value)
        {
            *value = nextValue;
            MarkDirty();
        }
    }
    ImGui::PopID();
    return false;
}

void DrawCombatPage(ImVec2 cp)
{
    sf::runtime::Config& cfg = sf::runtime::LiveConfig();
    const char* tabs[] = { "Aimbot", "HVH" };
    DrawTabs(tabs, 2, &g_combatTab, ImVec2(cp.x + 16.f, cp.y + 24.f));

    const float leftX = cp.x + 16.f;       // 156 in the reference
    const float rightX = leftX + 285.f;    // 441
    const float top = cp.y + 68.f;         // 114

    ImGui::SetCursorScreenPos(ImVec2(leftX, top));
    BeginCard("##targeting", "Targeting", 8, ImVec2(272.f, 238.f));
    ToggleRow("Enable aimbot", &cfg.aimbot, Gear_None, true, "X");
    ToggleRow("Aim at players", &cfg.aimPlayers);
    ToggleRow("Aim at NPCs", &cfg.aimNpcs, Gear_Npc);
    DropdownRow("Aim mode", &cfg.aimMode, kAimModes, 3);
    ToggleRow("Automatic fire", &cfg.triggerbot);
    ToggleRow("Always on aim", &cfg.aimAlways);
    ToggleRow("Stop on kill", &cfg.stopOnKill);
    EndCard();

    ImGui::SetCursorScreenPos(ImVec2(leftX, top + 248.f));
    BeginCard("##filters", "Filters", 1, ImVec2(272.f, 148.f));
    ToggleRow("Ignore god mode", &cfg.ignoreGod);
    ToggleRow("Ignore dormant", &cfg.ignoreDormant);
    ToggleRow("Ignore invisible", &cfg.ignoreInvisible);
    ToggleRow("Aim at teammates", &cfg.aimTeam);
    EndCard();

    const char* priorities[] = { "Crosshair", "Distance", "Health" };
    const char* hitscan[] = { "Ordered", "Nearest", "All" };
    const char* hitboxes[] = { "All", "Head", "Chest" };

    ImGui::SetCursorScreenPos(ImVec2(rightX, top));
    BeginCard("##precision", "Precision & hitscan", 11, ImVec2(291.f, 238.f));
    SliderRow("Smooth", &cfg.aimSmooth, 0.f, 100.f, "%.0f");
    SliderRow("FOV", &cfg.aimFov, 0.f, 180.f, "%.0f");
    ToggleRow("Draw FOV", &cfg.drawFov, Gear_Fov, false, "X", 88.f);
    ToggleRow("Anti-AC", &cfg.antiAc, Gear_AntiAc, false, "X", 88.f);
    DropdownRow("Target priority", &cfg.targetPriority, priorities, 3);
    DropdownRow("Hitscan mode", &g_hitscanMode, hitscan, 3, Gear_Hitscan);
    DropdownRow("Hitboxes", &g_hitboxMode, hitboxes, 3);
    EndCard();

    ImGui::SetCursorScreenPos(ImVec2(rightX, top + 248.f));
    BeginCard("##compensation", "Compensation", 10, ImVec2(291.f, 148.f));
    ToggleRow("No spread", &cfg.nospread);
    ToggleRow("No visual recoil", &cfg.noVisualRecoil, Gear_Recoil, false, "X", 88.f);
    ToggleRow("Backtrack", &cfg.backtrack, Gear_Backtrack, false, "X", 88.f);
    EndCard();
}

void DrawVisualPage(ImVec2 cp)
{
    DrawPageHeader(cp, "Visuals", "Player ESP, world and chams");
    const char* tabs[] = { "Players", "World", "Chams" };
    DrawTabs(tabs, 3, &g_visualTab, ImVec2(cp.x + 16.f, cp.y + 24.f));
    sf::runtime::Config& cfg = sf::runtime::LiveConfig();
    const float leftX = cp.x + 16.f;
    const float top = cp.y + 68.f;

    if (g_visualTab == 0)
    {
        ImGui::SetCursorScreenPos(ImVec2(leftX, top));
        BeginCard("##esp", "ESP", 1, ImVec2(272.f, 280.f));
        ToggleRow("Enable ESP", &cfg.esp);
        ToggleRow("Box", &cfg.espBox);
        ToggleRow("Name", &cfg.espText);
        ToggleRow("Health", &cfg.espHealth);
        ToggleRow("Skeleton", &cfg.espSkeleton);
        ToggleRow("Team", &cfg.espTeam);
        ToggleRow("Off-screen arrows", &cfg.espOffscreen);
        EndCard();

        ImGui::SetCursorScreenPos(ImVec2(leftX + 285.f, top));
        BeginCard("##indicators", "Indicators", 6, ImVec2(291.f, 180.f));
        ToggleRow("Snapline", &cfg.espSnapline);
        ToggleRow("Glow", &cfg.glow);
        ToggleRow("Tracers", &cfg.tracers);
        ToggleRow("Look beam", &cfg.lookbeam);
        EndCard();
    }
    else if (g_visualTab == 1)
    {
        ImGui::SetCursorScreenPos(ImVec2(leftX, top));
        BeginCard("##environment", "Environment", 7, ImVec2(576.f, 238.f));
        ToggleRow("Fullbright", &cfg.fullbright);
        ToggleRow("World tint", &cfg.worldTint);
        float tint[3] = { cfg.tintR, cfg.tintG, cfg.tintB };
        ColorRow("Tint colour", tint);
        cfg.tintR = tint[0]; cfg.tintG = tint[1]; cfg.tintB = tint[2];
        ToggleRow("Sky editor", &cfg.skyEditor);
        ToggleRow("Fog override", &cfg.fogOverride);
        EndCard();

        ImGui::SetCursorScreenPos(ImVec2(leftX, top + 248.f));
        BeginCard("##effects", "Effects", 2, ImVec2(576.f, 180.f));
        ToggleRow("Tracers", &cfg.tracers);
        ToggleRow("Look beam", &cfg.lookbeam);
        ToggleRow("Ghosts", &cfg.ghosts);
        ToggleRow("Glow", &cfg.glow);
        EndCard();
    }
    else
    {
        ImGui::SetCursorScreenPos(ImVec2(leftX, top));
        BeginCard("##chams", "Player chams", 11, ImVec2(576.f, 250.f));
        ToggleRow("Enable chams", &cfg.chams);
        DropdownRow("Material", &cfg.chamsStyle, kChamsStyles, 13);
        if (cfg.chamsStyle == 12)
        {
            char customMaterial[128] = {};
            std::snprintf(customMaterial, sizeof(customMaterial), "%s",
                          cfg.chamsCustomMaterial.c_str());
            ImGui::TextUnformatted("Custom material");
            ImGui::SetNextItemWidth(-1.f);
            if (ImGui::InputText("##chams_custom", customMaterial, sizeof(customMaterial)))
            {
                cfg.chamsCustomMaterial = customMaterial;
                MarkDirty();
            }
        }
        ToggleRow("Through walls", &cfg.chamsIgnoreZ);
        ToggleRow("Include teammates", &cfg.chamsTeam);
        SliderRow("Opacity", &cfg.chamsAlpha, 0.f, 1.f, "%.2f");
        EndCard();

        ImGui::SetCursorScreenPos(ImVec2(leftX, top + 260.f));
        BeginCard("##chams_colors", "Chams colours", 1, ImVec2(576.f, 150.f));
        float hidden[3] = { cfg.chamsHiddenR, cfg.chamsHiddenG, cfg.chamsHiddenB };
        float visible[3] = { cfg.chamsVisibleR, cfg.chamsVisibleG, cfg.chamsVisibleB };
        ColorRow("Hidden / through wall", hidden);
        ColorRow("Visible", visible);
        cfg.chamsHiddenR = hidden[0]; cfg.chamsHiddenG = hidden[1]; cfg.chamsHiddenB = hidden[2];
        cfg.chamsVisibleR = visible[0]; cfg.chamsVisibleG = visible[1]; cfg.chamsVisibleB = visible[2];
        ImGui::Dummy(ImVec2(0.f, 4.f));
        ImGui::Dummy(ImVec2(0.f, 4.f));
        const ImVec2 preview = ImGui::GetCursorScreenPos();
        ImGui::GetWindowDrawList()->AddRectFilled(preview, ImVec2(preview.x + 48.f, preview.y + 20.f),
                                                  IM_COL32((int)(visible[0] * 255.f), (int)(visible[1] * 255.f),
                                                           (int)(visible[2] * 255.f), 255), 4.f);
        ImGui::GetWindowDrawList()->AddText(g_menuFontSmall, 12.f, ImVec2(preview.x + 58.f, preview.y + 4.f),
                                            kMenuMuted, "debug/debugwhite  |  debug/debugdrawflat");
        EndCard();
    }
}

void DrawUtilityPage(ImVec2 cp)
{
    DrawPageHeader(cp, "Misc", "Movement, weapon helpers and utility windows");
    const char* tabs[] = { "Movement", "Combat", "Tools" };
    DrawTabs(tabs, 3, &g_utilityTab, ImVec2(cp.x + 16.f, cp.y + 24.f));
    sf::runtime::Config& cfg = sf::runtime::LiveConfig();
    const float leftX = cp.x + 16.f;
    const float top = cp.y + 68.f;

    if (g_utilityTab == 0)
    {
        ImGui::SetCursorScreenPos(ImVec2(leftX, top));
        BeginCard("##movement", "Movement", 2, ImVec2(272.f, 238.f));
        ToggleRow("Bunnyhop", &cfg.bhop);
        ToggleRow("Autostrafe", &cfg.autostrafe);
        DropdownRow("Autostrafe mode", &cfg.autostrafeMode, kAutostrafeModes, 2);
        ToggleRow("No spread", &cfg.nospread);
        ToggleRow("Backtrack", &cfg.backtrack);
        EndCard();

        ImGui::SetCursorScreenPos(ImVec2(leftX + 285.f, top));
        BeginCard("##triggerbot", "Triggerbot", 10, ImVec2(291.f, 238.f));
        ToggleRow("Enable triggerbot", &cfg.triggerbot);
        SliderRow("FOV", &cfg.triggerFov, 0.f, 30.f, "%.0f");
        SliderIntRow("Delay (ms)", &cfg.triggerDelay, 0, 500, "%.0f");
        ToggleRow("Randomize", &cfg.triggerRandomize);
        EndCard();
    }
    else if (g_utilityTab == 1)
    {
        ImGui::SetCursorScreenPos(ImVec2(leftX, top));
        BeginCard("##utility_combat", "Combat", 0, ImVec2(576.f, 410.f));
        ToggleRow("Aimbot", &cfg.aimbot);
        ToggleRow("Triggerbot", &cfg.triggerbot);
        SliderRow("Aim FOV", &cfg.aimFov, 0.f, 180.f, "%.0f");
        SliderRow("Aim smoothing", &cfg.aimSmooth, 0.f, 100.f, "%.0f");
        ToggleRow("No spread", &cfg.nospread);
        ToggleRow("Anti-aim", &cfg.antiaim);
        DropdownRow("Anti-aim pitch", &cfg.antiaimPitch, kPitchModes, 5);
        DropdownRow("Anti-aim yaw", &cfg.antiaimYaw, kYawModes, 10);
        SliderRow("Anti-aim jitter", &cfg.antiaimJitter, 0.f, 90.f, "%.0f");
        SliderRow("Anti-aim body offset", &cfg.antiaimBodyOffset, 0.f, 60.f, "%.0f");
        EndCard();
    }
    else
    {
        ImGui::SetCursorScreenPos(ImVec2(leftX, top));
        BeginCard("##tools", "Tools", 7, ImVec2(576.f, 410.f));
        if (ButtonRow("Save config now"))
            sf::runtime::SaveLiveConfig();
        ImGui::Dummy(ImVec2(0.f, 4.f));
        if (ButtonRow("Reload config from disk"))
            sf::runtime::RequestConfigReload();
        ImGui::Dummy(ImVec2(0.f, 4.f));
        if (ButtonRow("Dump Lua state"))
            sf::renderer::dependencies::DumpLuaState();
        ImGui::Dummy(ImVec2(0.f, 8.f));
        ImGui::PushFont(g_menuFontSmall, 12.f);
        ImGui::TextWrapped("Config: %%LOCALAPPDATA%%\\skyfall\\skyfall.ini");
        ImGui::TextWrapped("The recovered runtime reads the INI on F5. Menu changes are saved automatically.");
        ImGui::PopFont();
        EndCard();
    }
}

void DrawLogsPage(ImVec2 cp)
{
    static std::string logText;
    static double lastRead = -10.0;
    if (ImGui::GetTime() - lastRead > 2.0)
    {
        lastRead = ImGui::GetTime();
        std::string path = sf::runtime::Config::ConfigPath();
        const std::size_t slash = path.find_last_of("\\/");
        if (slash != std::string::npos)
            path = path.substr(0, slash + 1) + "skyfall.log";
        std::ifstream input(path);
        if (input)
        {
            std::vector<std::string> lines;
            std::string line;
            while (std::getline(input, line))
            {
                lines.push_back(line);
                if (lines.size() > 200)
                    lines.erase(lines.begin());
            }
            logText.clear();
            for (const std::string& entry : lines)
                logText += entry + "\n";
        }
        else
        {
            logText = "Log is currently locked by the runtime (expected while the game is running).\n" + path;
        }
    }

    DrawPageHeader(cp, "Loggers", "Damage and net message logs");
    ImGui::SetCursorScreenPos(ImVec2(cp.x + 16.f, cp.y + 68.f));
    BeginCard("##logs", "Runtime log", 3, ImVec2(576.f, 400.f), true);
    ImGui::PushFont(g_menuFontSmall, 12.f);
    ImGui::TextUnformatted(logText.c_str());
    ImGui::PopFont();
    EndCard();
}

void DrawNetworkPage(ImVec2 cp)
{
    DrawPageHeader(cp, "Network", "Entity list and player list / friends");
    ImGui::SetCursorScreenPos(ImVec2(cp.x + 16.f, cp.y + 68.f));
    BeginCard("##connection", "Connection", 4, ImVec2(576.f, 190.f));
    InfoRow("Client", "Garry's Mod x64");
    InfoRow("Server", "127.0.0.1:27016");
    InfoRow("Transport", "loopback / listen server");
    InfoRow("Menu key", "INSERT or F7");
    EndCard();

    ImGui::SetCursorScreenPos(ImVec2(cp.x + 40.f, cp.y + 286.f));
    BeginCard("##interfaces", "Interfaces", 7, ImVec2(576.f, 210.f));
    InfoRow("Material system", "VMaterialSystem080");
    InfoRow("Model render", "VEngineModel016");
    InfoRow("Render view", "VEngineRenderView014");
    InfoRow("Entity list", "VClientEntityList003");
    InfoRow("Engine client", "VEngineClient015");
    EndCard();
}

void DrawLuaPage(ImVec2 cp)
{
    static char buffer[8192] = "-- client-side Lua\n";
    DrawPageHeader(cp, "Lua editor", "Client & shared scripts");
    ImGui::SetCursorScreenPos(ImVec2(cp.x + 16.f, cp.y + 68.f));
    BeginCard("##lua", "Lua editor", 5, ImVec2(576.f, 400.f));
    ImGui::PushFont(g_menuFontSmall, 12.f);
    ImGui::InputTextMultiline("##lua_buffer", buffer, sizeof(buffer), ImVec2(-1.f, 330.f),
                              ImGuiInputTextFlags_AllowTabInput);
    ImGui::PopFont();
    ImGui::Dummy(ImVec2(0.f, 4.f));
    if (ButtonRow("Dump Lua state"))
        sf::renderer::dependencies::DumpLuaState();
    ImGui::Dummy(ImVec2(0.f, 4.f));
    ImGui::PushFont(g_menuFontSmall, 12.f);
    ImGui::TextWrapped("The editor buffer is local. Lua execution and the shared/client sandbox are owned by the engine boundary.");
    ImGui::PopFont();
    EndCard();
}

void DrawEspEditorPage(ImVec2 cp)
{
    sf::runtime::Config& cfg = sf::runtime::LiveConfig();
    DrawPageHeader(cp, "ESP editor", "Element editor");
    ImGui::SetCursorScreenPos(ImVec2(cp.x + 16.f, cp.y + 68.f));
    BeginCard("##esp_editor", "ESP editor", 6, ImVec2(576.f, 400.f));
    ToggleRow("Box", &cfg.espBox);
    ToggleRow("Name", &cfg.espText);
    ToggleRow("Dynamic name + distance", &cfg.espDynamicText);
    ToggleRow("Health bar", &cfg.espHealth);
    ToggleRow("Armor bar", &cfg.espArmor);
    ToggleRow("Skeleton", &cfg.espSkeleton);
    ToggleRow("Corner box", &cfg.espBBox);
    ToggleRow("Head circle", &cfg.espCircle);
    ToggleRow("Snapline", &cfg.espSnapline);
    ToggleRow("Off-screen arrows", &cfg.espOffscreen);
    EndCard();
}

void DrawSettingsPage(ImVec2 cp)
{
    static int theme = 0;
    static float dpi = 100.f;
    const char* const themes[] = { "Obsidian" };
    DrawPageHeader(cp, "Settings", "Appearance, config and hotkeys");
    ImGui::SetCursorScreenPos(ImVec2(cp.x + 16.f, cp.y + 68.f));
    BeginCard("##settings", "Settings", 7, ImVec2(576.f, 400.f));
    DropdownRow("Theme", &theme, themes, 1);
    SliderRow("DPI scale", &dpi, 75.f, 150.f, "%.0f%%");
    InfoRow("Menu key", "INSERT or F7");
    InfoRow("Config", "%LOCALAPPDATA%\\skyfall\\skyfall.ini");
    ImGui::Dummy(ImVec2(0.f, 6.f));
    if (ButtonRow("Save config now"))
        sf::runtime::SaveLiveConfig();
    ImGui::Dummy(ImVec2(0.f, 4.f));
    if (ButtonRow("Reload config from disk"))
        sf::runtime::RequestConfigReload();
    ImGui::Dummy(ImVec2(0.f, 8.f));
    ImGui::PushFont(g_menuFontSmall, 12.f);
    ImGui::TextWrapped("Obsidian is the recovered theme 0. The palette and Arial font match the original menu; the other recovered themes are not wired into this build.");
    ImGui::PopFont();
    EndCard();
}

// ---------------------------------------------------------------- shell

struct SearchEntry
{
    const char* label;
    int page;
    int tab;
};

const SearchEntry kSearchEntries[] = {
    { "Enable aimbot", 0, 0 }, { "Aim at players", 0, 0 }, { "Aim at NPCs", 0, 0 },
    { "Aim mode", 0, 0 }, { "Automatic fire", 0, 0 }, { "Always on aim", 0, 0 },
    { "Stop on kill", 0, 0 }, { "Smooth", 0, 0 }, { "FOV", 0, 0 },
    { "Draw FOV", 0, 0 }, { "Anti-AC protection", 0, 0 }, { "Target priority", 0, 0 },
    { "Hitscan mode", 0, 0 }, { "Hitboxes", 0, 0 }, { "No spread", 0, 0 },
    { "No visual recoil", 0, 0 }, { "Backtrack", 0, 0 }, { "Anti-aim", 0, 1 },
    { "ESP", 1, 0 }, { "Chams", 1, 2 }, { "Fullbright", 1, 1 },
    { "World tint", 1, 1 }, { "Bunnyhop", 2, 0 }, { "Autostrafe", 2, 0 },
    { "Triggerbot", 2, 0 }, { "Lua editor", 5, 0 }, { "ESP editor", 6, 0 },
    { "Settings", 7, 0 },
};

bool ContainsInsensitive(const char* text, const char* needle)
{
    if (needle[0] == '\0')
        return true;
    std::string haystack(text);
    std::string query(needle);
    for (char& c : haystack) c = (char)std::tolower((unsigned char)c);
    for (char& c : query) c = (char)std::tolower((unsigned char)c);
    return haystack.find(query) != std::string::npos;
}

[[maybe_unused]] void DrawTopBar(ImVec2 pos, ImVec2 size)
{
    ImDrawList* dl = ImGui::GetWindowDrawList();
    dl->AddRectFilled(pos, ImVec2(pos.x + size.x, pos.y + 46.f), kMenuBg);
    dl->AddLine(ImVec2(pos.x, pos.y + 46.f), ImVec2(pos.x + size.x, pos.y + 46.f), kMenuBorder);

    DrawShield(dl, ImVec2(pos.x + 14.f, pos.y + 9.f), 28.f, kMenuAccent);
    dl->AddLine(ImVec2(pos.x + 33.f, pos.y + 15.f), ImVec2(pos.x + 23.f, pos.y + 31.f),
                kMenuText, 1.6f);
    dl->AddText(g_menuFontBold, 16.f, ImVec2(pos.x + 52.f, pos.y + 8.f), kMenuText, "mayrr");
    dl->AddText(g_menuFontSmall, 12.f, ImVec2(pos.x + 52.f, pos.y + 26.f), kMenuMuted, "internal");

    const char* title = PageTitle(g_menuPage);
    const char* subtitle = PageSubtitle(g_menuPage);
    dl->AddText(g_menuFontBold, 16.f, ImVec2(pos.x + 156.f, pos.y + 9.f), kMenuText, title);
    const ImVec2 titleSize = g_menuFontBold->CalcTextSizeA(16.f, FLT_MAX, 0.f, title);
    dl->AddText(g_menuFontSmall, 12.f, ImVec2(pos.x + 156.f + titleSize.x + 12.f, pos.y + 13.f),
                kMenuMuted, subtitle);

    const float searchWidth = 176.f;
    const float searchHeight = 22.f;
    const ImVec2 search(pos.x + size.x - 14.f - searchWidth, pos.y + 12.f);
    dl->AddRectFilled(search, ImVec2(search.x + searchWidth, search.y + searchHeight), kMenuPanel, 6.f);
    dl->AddRect(search, ImVec2(search.x + searchWidth, search.y + searchHeight), kMenuBorder, 6.f);
    dl->AddCircle(ImVec2(search.x + 10.f, search.y + 9.f), 4.f, kMenuMuted, 12, 1.2f);
    dl->AddLine(ImVec2(search.x + 13.f, search.y + 12.f), ImVec2(search.x + 17.f, search.y + 16.f), kMenuMuted, 1.2f);

    ImGui::SetCursorScreenPos(ImVec2(search.x + 24.f, search.y + 1.f));
    ImGui::PushStyleColor(ImGuiCol_FrameBg, IM_COL32(0, 0, 0, 0));
    ImGui::PushStyleColor(ImGuiCol_FrameBgHovered, IM_COL32(0, 0, 0, 0));
    ImGui::PushStyleColor(ImGuiCol_FrameBgActive, IM_COL32(0, 0, 0, 0));
    ImGui::PushStyleColor(ImGuiCol_Border, IM_COL32(0, 0, 0, 0));
    ImGui::PushStyleColor(ImGuiCol_Text, V4c(kMenuText));
    ImGui::PushStyleColor(ImGuiCol_TextDisabled, V4c(kMenuMuted));
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0.f, 2.f));
    ImGui::SetNextItemWidth(searchWidth - 30.f);
    ImGui::InputTextWithHint("##menu_search", "Search options...", g_menuSearch, sizeof(g_menuSearch));
    const bool searchActive = ImGui::IsItemActive();
    ImGui::PopStyleVar();
    ImGui::PopStyleColor(6);

    if (searchActive && g_menuSearch[0] != '\0')
        ImGui::OpenPopup("##menu_search_results");
    ImGui::SetNextWindowPos(ImVec2(search.x, search.y + 26.f));
    if (ImGui::BeginPopup("##menu_search_results"))
    {
        ImGui::PushStyleColor(ImGuiCol_PopupBg, V4c(kMenuCard));
        ImGui::PushStyleColor(ImGuiCol_Header, V4c(kMenuAccentDim));
        ImGui::PushStyleColor(ImGuiCol_HeaderHovered, V4c(kMenuAccentDim));
        ImGui::PushStyleColor(ImGuiCol_Text, V4c(kMenuText));
        bool any = false;
        for (const SearchEntry& entry : kSearchEntries)
        {
            if (!ContainsInsensitive(entry.label, g_menuSearch))
                continue;
            any = true;
            if (ImGui::Selectable(entry.label))
            {
                g_menuPage = entry.page;
                if (entry.page == 0) g_combatTab = entry.tab;
                if (entry.page == 1) g_visualTab = entry.tab;
                g_menuSearch[0] = '\0';
                ImGui::CloseCurrentPopup();
            }
        }
        if (!any)
            ImGui::TextDisabled("No matches");
        ImGui::PopStyleColor(4);
        ImGui::EndPopup();
    }
}

void NavItem(ImVec2 pos, float y, int icon, const char* label, int page)
{
    ImGui::SetCursorScreenPos(ImVec2(pos.x + 8.f, y));
    ImGui::InvisibleButton(label, ImVec2(124.f, 34.f));
    const bool hovered = ImGui::IsItemHovered();
    const bool active = g_menuPage == page;
    ImDrawList* dl = ImGui::GetWindowDrawList();
    if (active)
        dl->AddRectFilled(ImVec2(pos.x + 8.f, y), ImVec2(pos.x + 132.f, y + 34.f), kMenuAccentDim, 7.f);
    else if (hovered)
        dl->AddRectFilled(ImVec2(pos.x + 8.f, y), ImVec2(pos.x + 132.f, y + 34.f),
                          IM_COL32(255, 255, 255, 8), 7.f);
    DrawNavIcon(dl, ImVec2(pos.x + 24.f, y + 10.f), icon, active ? kMenuAccent : kMenuMuted);
    dl->AddText(g_menuFont, 13.f, ImVec2(pos.x + 56.f, y + 10.f),
                active ? kMenuAccent : kMenuMuted, label);
    if (ImGui::IsItemClicked())
        g_menuPage = page;
}

[[maybe_unused]] void QuickButton(ImVec2 pos, const char* label, int icon, int page)
{
    ImGui::SetCursorScreenPos(pos);
    ImGui::InvisibleButton(label, ImVec2(82.f, 28.f));
    const bool hovered = ImGui::IsItemHovered();
    const bool active = g_menuPage == page;
    ImDrawList* dl = ImGui::GetWindowDrawList();
    dl->AddRectFilled(pos, ImVec2(pos.x + 82.f, pos.y + 28.f),
                      active ? kMenuAccentDim : (hovered ? kMenuCardAlt : kMenuPanel), 5.f);
    dl->AddRect(pos, ImVec2(pos.x + 82.f, pos.y + 28.f), kMenuBorder, 5.f);
    DrawNavIcon(dl, ImVec2(pos.x + 10.f, pos.y + 7.f), icon,
                active ? kMenuAccent : kMenuMuted);
    dl->AddText(g_menuFontSmall, 11.f, ImVec2(pos.x + 30.f, pos.y + 8.f),
                active ? kMenuAccent : kMenuText, label);
    if (ImGui::IsItemClicked())
        g_menuPage = page;
}

void DrawSidebar(ImVec2 pos, ImVec2 size)
{
    ImDrawList* dl = ImGui::GetWindowDrawList();
    dl->AddRectFilled(ImVec2(pos.x, pos.y + 46.f), ImVec2(pos.x + 140.f, pos.y + size.y), kMenuBg);
    dl->AddLine(ImVec2(pos.x + 140.f, pos.y + 46.f), ImVec2(pos.x + 140.f, pos.y + size.y), kMenuBorder);

    const char* labels[] = { "Combat", "Visual", "Utility", "Logs", "Network" };
    const int icons[] = { 8, 1, 2, 3, 9 };
    for (int i = 0; i < 5; ++i)
        NavItem(pos, pos.y + 70.f + (float)i * 40.f, icons[i], labels[i], i);

    const float bottomY = pos.y + size.y - 136.f;
    NavItem(pos, bottomY, 5, "Lua editor", 5);
    NavItem(pos, bottomY + 34.f, 6, "ESP editor", 6);
    NavItem(pos, bottomY + 68.f, 7, "Settings", 7);
}

[[maybe_unused]] void DrawCameraPage(ImVec2 cp)
{
    DrawPageHeader(cp, "Camera", "View and third-person camera");
    ImGui::SetCursorScreenPos(ImVec2(cp.x + 16.f, cp.y + 68.f));
    BeginCard("##camera", "Camera", 1, ImVec2(576.f, 400.f));
    InfoRow("Menu key", "INSERT or F7");
    InfoRow("View", "First person (engine camera)");
    InfoRow("Aim FOV circle", "Aimbot / Draw FOV");
    InfoRow("Third person", "Not exposed by the recovered runtime");
    ImGui::Dummy(ImVec2(0.f, 12.f));
    ImGui::PushFont(g_menuFontSmall, 11.f);
    ImGui::TextWrapped("Camera overrides require a CalcView path that is not part of the recovered hook set. The view and FOV circle are drawn from the engine camera.");
    ImGui::PopFont();
    EndCard();
}

void DrawContent(ImVec2 pos, ImVec2 size)
{
    ImGui::SetCursorScreenPos(ImVec2(pos.x + 140.f, pos.y + 46.f));
    ImGui::PushStyleColor(ImGuiCol_ChildBg, V4c(kMenuBg));
    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0.f, 0.f));
    ImGui::BeginChild("##menu_content", ImVec2(size.x - 140.f, size.y - 46.f), false,
                      ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse);
    const ImVec2 cp = ImGui::GetWindowPos();
    switch (g_menuPage)
    {
    case 0: DrawCombatPage(cp); break;
    case 1: DrawVisualPage(cp); break;
    case 2: DrawUtilityPage(cp); break;
    case 3: DrawLogsPage(cp); break;
    case 4: DrawNetworkPage(cp); break;
    case 5: DrawLuaPage(cp); break;
    case 6: DrawEspEditorPage(cp); break;
    default: DrawSettingsPage(cp); break;
    }
    ImGui::EndChild();
    ImGui::PopStyleVar();
    ImGui::PopStyleColor();
}

void DrawMenu()
{
    ImGui::PushFont(g_menuFont, 13.f);
    ImGui::SetNextWindowPos(ImVec2(60.f, 60.f), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowSize(ImVec2(748.f, 518.f), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowBgAlpha(1.f);
    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0.f, 0.f));
    const ImGuiWindowFlags flags =
        ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove |
        ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoNav |
        ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_NoScrollbar |
        ImGuiWindowFlags_NoScrollWithMouse;
    if (ImGui::Begin("##skyfall_menu", nullptr, flags))
    {
        const ImVec2 pos = ImGui::GetWindowPos();
        const ImVec2 size = ImGui::GetWindowSize();
        DrawTopBar(pos, size);
        DrawSidebar(pos, size);
        DrawContent(pos, size);
    }
    ImGui::End();
    ImGui::PopStyleVar();
    ImGui::PopFont();

    if (g_configDirty && ImGui::GetTime() - g_configDirtyTime > 0.75)
    {
        sf::runtime::SaveLiveConfig();
        sf::runtime::ApplyLiveConfig();
        g_configDirty = false;
    }
}
