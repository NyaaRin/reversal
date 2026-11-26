#include "renderer_runtime.h"

#include <windows.h>
#include <windowsx.h>
#include <d3d9.h>

#include "imgui.h"
#include "imgui_impl_dx9.h"
#include "../../runtime/config.h"
#include "../../runtime/runtime_bridge.h"
#include "../../runtime/visual_overlay.h"
#include "renderer.h"
#include "renderer_ui_imGui.h"

#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>

namespace sf {
namespace renderer {
namespace {

ImGuiRendererUi g_ui;
RendererSettings g_settings;
IDirect3DDevice9* g_device = nullptr;
HWND g_window = nullptr;
WNDPROC g_original_wndproc = nullptr;
POINT g_virtual_cursor = {640, 360};
bool g_virtual_cursor_valid = false;
bool g_mouse_down[3] = {};
bool g_menu_open = true;
bool g_menu_capture = false;
bool g_frame_ready = false;
bool g_backend_ready = false;
bool g_owns_context = false;

ImFont* g_menuFont = nullptr;
ImFont* g_menuFontSmall = nullptr;
ImFont* g_menuFontBold = nullptr;

#include "menu_ui.inc"

void ClampVirtualCursor()
{
    if (g_window == nullptr)
        return;
    RECT client = {};
    if (!GetClientRect(g_window, &client))
        return;
    const int width = client.right - client.left;
    const int height = client.bottom - client.top;
    if (width <= 0 || height <= 0)
        return;
    if (!g_virtual_cursor_valid)
    {
        g_virtual_cursor.x = width / 2;
        g_virtual_cursor.y = height / 2;
        g_virtual_cursor_valid = true;
    }
    if (g_virtual_cursor.x < 0) g_virtual_cursor.x = 0;
    if (g_virtual_cursor.y < 0) g_virtual_cursor.y = 0;
    if (g_virtual_cursor.x >= width) g_virtual_cursor.x = width - 1;
    if (g_virtual_cursor.y >= height) g_virtual_cursor.y = height - 1;
}

void SetSdlRelativeMouse(bool relative);
void UpdateMenuCapture(bool open);

LRESULT CALLBACK OverlayWndProc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam)
{
    static bool insert_down = false;
    static bool f7_down = false;
    if (message == WM_KEYDOWN && wparam == VK_F5)
    {
        const bool repeated = (lparam & 0x40000000) != 0;
        if (!repeated)
            sf::runtime::RequestConfigReload();
        return 0;
    }
    if (message == WM_KEYDOWN && wparam == VK_INSERT)
    {
        const bool repeated = (lparam & 0x40000000) != 0;
        if (!repeated && !insert_down)
        {
            insert_down = true;
            g_menu_open = !g_menu_open;
            if (!g_menu_open && g_configDirty)
            {
                sf::runtime::SaveLiveConfig();
                g_configDirty = false;
            }
            g_mouse_down[0] = g_mouse_down[1] = g_mouse_down[2] = false;
            UpdateMenuCapture(g_menu_open);
        }
        return 0;
    }
    if (message == WM_KEYUP && wparam == VK_INSERT)
    {
        insert_down = false;
        return 0;
    }
    if (message == WM_KEYDOWN && wparam == VK_F7)
    {
        const bool repeated = (lparam & 0x40000000) != 0;
        if (!repeated && !f7_down)
        {
            f7_down = true;
            g_menu_open = !g_menu_open;
            if (!g_menu_open && g_configDirty)
            {
                sf::runtime::SaveLiveConfig();
                g_configDirty = false;
            }
            g_mouse_down[0] = g_mouse_down[1] = g_mouse_down[2] = false;
            UpdateMenuCapture(g_menu_open);
        }
        return 0;
    }
    if (message == WM_KEYUP && wparam == VK_F7)
    {
        f7_down = false;
        return 0;
    }
    if (message == WM_INPUT && g_menu_open)
    {
        // The menu uses the real captured mouse. Do not feed raw deltas into a
        // virtual cursor and do not let the game act on raw input while open.
        return 0;
    }
    else if (message == WM_MOUSEMOVE && g_menu_open)
    {
        g_virtual_cursor.x = GET_X_LPARAM(lparam);
        g_virtual_cursor.y = GET_Y_LPARAM(lparam);
        g_virtual_cursor_valid = true;
        ClampVirtualCursor();
        return 0;
    }
    else if (message == WM_SETCURSOR && g_menu_open)
    {
        SetCursor(nullptr);
        return TRUE;
    }
    else if (message == WM_MOUSEWHEEL && g_menu_open)
    {
        if (ImGui::GetCurrentContext() != nullptr)
            ImGui::GetIO().AddMouseWheelEvent(0.f, GET_WHEEL_DELTA_WPARAM(wparam) / 120.f);
        return 0;
    }
    else if (message == WM_LBUTTONDOWN || message == WM_LBUTTONUP ||
             message == WM_RBUTTONDOWN || message == WM_RBUTTONUP ||
             message == WM_MBUTTONDOWN || message == WM_MBUTTONUP)
    {
        if (g_menu_open)
        {
            g_virtual_cursor.x = GET_X_LPARAM(lparam);
            g_virtual_cursor.y = GET_Y_LPARAM(lparam);
            g_virtual_cursor_valid = true;
            ClampVirtualCursor();
            const int button = message == WM_LBUTTONDOWN || message == WM_LBUTTONUP
                                   ? 0
                                   : (message == WM_RBUTTONDOWN || message == WM_RBUTTONUP ? 1 : 2);
            const bool down = message == WM_LBUTTONDOWN || message == WM_RBUTTONDOWN ||
                              message == WM_MBUTTONDOWN;
            g_mouse_down[button] = down;
            return 0;
        }
    }
    else if (message == WM_KILLFOCUS || message == WM_ACTIVATEAPP ||
             message == WM_ACTIVATE)
    {
        g_mouse_down[0] = g_mouse_down[1] = g_mouse_down[2] = false;
    }
    return g_original_wndproc != nullptr
               ? CallWindowProcA(g_original_wndproc, hwnd, message, wparam, lparam)
               : DefWindowProcA(hwnd, message, wparam, lparam);
}

BOOL CALLBACK FindGameWindowProc(HWND hwnd, LPARAM context)
{
    DWORD window_pid = 0;
    GetWindowThreadProcessId(hwnd, &window_pid);
    if (window_pid != GetCurrentProcessId() || !IsWindowVisible(hwnd))
        return TRUE;
    char class_name[64] = {};
    GetClassNameA(hwnd, class_name, sizeof(class_name));
    if (lstrcmpA(class_name, "Valve001") != 0)
        return TRUE;
    *reinterpret_cast<HWND*>(context) = hwnd;
    return FALSE;
}

HWND FindGameWindow()
{
    HWND found = nullptr;
    EnumWindows(&FindGameWindowProc, reinterpret_cast<LPARAM>(&found));
    return found;
}

void SetSdlRelativeMouse(bool relative)
{
    HMODULE sdl = GetModuleHandleA("SDL2.dll");
    if (sdl == nullptr)
        return;
    using SetRelativeFn = int (*)(int);
    auto set_relative = reinterpret_cast<SetRelativeFn>(
        GetProcAddress(sdl, "SDL_SetRelativeMouseMode"));
    if (set_relative != nullptr)
        set_relative(relative ? 1 : 0);
}

void UpdateMenuCapture(bool open)
{
    if (g_window == nullptr)
        return;
    if (open)
    {
        SetSdlRelativeMouse(false);
        RECT client = {};
        if (GetClientRect(g_window, &client))
        {
            POINT top_left = { client.left, client.top };
            ClientToScreen(g_window, &top_left);
            RECT clip = { top_left.x, top_left.y,
                          top_left.x + (client.right - client.left),
                          top_left.y + (client.bottom - client.top) };
            ClipCursor(&clip);
            POINT center = { (client.right - client.left) / 2,
                             (client.bottom - client.top) / 2 };
            ClientToScreen(g_window, &center);
            SetCursorPos(center.x, center.y);
            g_virtual_cursor.x = (client.right - client.left) / 2;
            g_virtual_cursor.y = (client.bottom - client.top) / 2;
            g_virtual_cursor_valid = true;
            SetCapture(g_window);
            g_menu_capture = true;
        }
    }
    else
    {
        if (g_menu_capture && GetCapture() == g_window)
            ReleaseCapture();
        g_menu_capture = false;
        ClipCursor(nullptr);
        SetSdlRelativeMouse(true);
        SetCursor(nullptr);
    }
}

void InstallInputWindow()
{
    HWND game_window = FindGameWindow();
    if (game_window != nullptr)
        g_window = game_window;
    if (g_window == nullptr || g_original_wndproc != nullptr)
        return;
    SetLastError(0);
    g_original_wndproc = reinterpret_cast<WNDPROC>(SetWindowLongPtrA(
        g_window, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(&OverlayWndProc)));
    // Leave raw-input registration to GMod/SDL. The menu reads the real OS
    // cursor and window mouse messages instead of stealing raw input.
    UpdateMenuCapture(g_menu_open);
}

void UpdateDisplaySize()
{
    if (g_window == nullptr)
        return;
    RECT client = {};
    if (!GetClientRect(g_window, &client))
        return;
    const float width = static_cast<float>(client.right - client.left);
    const float height = static_cast<float>(client.bottom - client.top);
    if (width > 1.0f && height > 1.0f)
        ImGui::GetIO().DisplaySize = ImVec2(width, height);
}

void UpdateInput()
{
    if (g_window == nullptr)
        return;

    ImGuiIO& io = ImGui::GetIO();
    if (GetForegroundWindow() != g_window)
    {
        io.AddMousePosEvent(-FLT_MAX, -FLT_MAX);
        return;
    }

    POINT cursor = {};
    if (GetCursorPos(&cursor) && ScreenToClient(g_window, &cursor))
    {
        g_virtual_cursor = cursor;
        g_virtual_cursor_valid = true;
    }
    ClampVirtualCursor();
    io.AddMousePosEvent(static_cast<float>(g_virtual_cursor.x),
                        static_cast<float>(g_virtual_cursor.y));
    io.AddMouseButtonEvent(0, g_mouse_down[0] ||
                                  (GetAsyncKeyState(VK_LBUTTON) & 0x8000) != 0);
    io.AddMouseButtonEvent(1, g_mouse_down[1] ||
                                  (GetAsyncKeyState(VK_RBUTTON) & 0x8000) != 0);
    io.AddMouseButtonEvent(2, g_mouse_down[2] ||
                                  (GetAsyncKeyState(VK_MBUTTON) & 0x8000) != 0);
    io.MouseDrawCursor = true;

    struct KeyMap
    {
        int vk;
        ImGuiKey key;
        char character;
    };
    static const KeyMap keys[] = {
        {VK_TAB, ImGuiKey_Tab, 0},
        {VK_LEFT, ImGuiKey_LeftArrow, 0},
        {VK_RIGHT, ImGuiKey_RightArrow, 0},
        {VK_UP, ImGuiKey_UpArrow, 0},
        {VK_DOWN, ImGuiKey_DownArrow, 0},
        {VK_PRIOR, ImGuiKey_PageUp, 0},
        {VK_NEXT, ImGuiKey_PageDown, 0},
        {VK_HOME, ImGuiKey_Home, 0},
        {VK_END, ImGuiKey_End, 0},
        {VK_INSERT, ImGuiKey_Insert, 0},
        {VK_DELETE, ImGuiKey_Delete, 0},
        {VK_BACK, ImGuiKey_Backspace, 0},
        {VK_SPACE, ImGuiKey_Space, ' '},
        {VK_RETURN, ImGuiKey_Enter, 0},
        {VK_ESCAPE, ImGuiKey_Escape, 0},
        {VK_LCONTROL, ImGuiKey_LeftCtrl, 0},
        {VK_RCONTROL, ImGuiKey_RightCtrl, 0},
        {VK_LSHIFT, ImGuiKey_LeftShift, 0},
        {VK_RSHIFT, ImGuiKey_RightShift, 0},
        {VK_OEM_PERIOD, ImGuiKey_Period, '.'},
        {VK_OEM_COMMA, ImGuiKey_Comma, ','},
        {VK_OEM_MINUS, ImGuiKey_Minus, '-'},
        {VK_OEM_PLUS, ImGuiKey_Equal, '='},
    };
    for (const KeyMap& mapping : keys)
        io.AddKeyEvent(mapping.key, (GetAsyncKeyState(mapping.vk) & 0x8000) != 0);

    const bool shift = (GetAsyncKeyState(VK_SHIFT) & 0x8000) != 0;
    for (int vk = 'A'; vk <= 'Z'; ++vk)
    {
        const bool down = (GetAsyncKeyState(vk) & 0x8000) != 0;
        static bool previous[26] = {};
        const int index = vk - 'A';
        if (down && !previous[index])
            io.AddInputCharacter(static_cast<unsigned int>(
                shift ? static_cast<char>(vk) : static_cast<char>(vk - 'A' + 'a')));
        previous[index] = down;
    }
    for (int vk = '0'; vk <= '9'; ++vk)
    {
        const bool down = (GetAsyncKeyState(vk) & 0x8000) != 0;
        static bool previous[10] = {};
        const int index = vk - '0';
        if (down && !previous[index])
            io.AddInputCharacter(static_cast<unsigned int>(vk));
        previous[index] = down;
    }
}

void EnsureFrameContext()
{
    if (g_frame_ready)
        return;

    if (ImGui::GetCurrentContext() == nullptr)
    {
        ImGui::CreateContext();
        g_owns_context = true;
    }

    ImGuiIO& io = ImGui::GetIO();
    io.IniFilename = nullptr;
    io.LogFilename = nullptr;
    io.DisplaySize = ImVec2(1920.0f, 1080.0f);
    io.DeltaTime = 1.0f / 60.0f;
    if (g_menuFont == nullptr && !io.Fonts->IsBuilt())
    {
        ImFontConfig fontConfig;
        fontConfig.OversampleH = 2;
        fontConfig.OversampleV = 2;
        fontConfig.PixelSnapH = true;
        g_menuFont = io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\arial.ttf", 13.0f, &fontConfig);
        g_menuFontSmall = io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\arial.ttf", 11.0f, &fontConfig);
        g_menuFontBold = io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\arialbd.ttf", 14.0f, &fontConfig);
        if (g_menuFont == nullptr)
            g_menuFont = io.Fonts->AddFontDefault();
        if (g_menuFontSmall == nullptr)
            g_menuFontSmall = g_menuFont;
        if (g_menuFontBold == nullptr)
            g_menuFontBold = g_menuFont;
    }
    if (g_menuFont == nullptr)
    {
        if (io.Fonts->Fonts.Size == 0)
            io.Fonts->AddFontDefault();
        g_menuFont = io.Fonts->Fonts[0];
        g_menuFontSmall = g_menuFont;
        g_menuFontBold = g_menuFont;
    }
    if (!io.Fonts->IsBuilt())
        io.Fonts->Build();
    ImGui::StyleColorsDark();
    ApplyMenuStyle();
    g_frame_ready = true;
}

} // namespace

void InitializeRendererD3d(void* device)
{
    if (device == nullptr)
        return;
    EnsureFrameContext();

    IDirect3DDevice9* direct3d_device = static_cast<IDirect3DDevice9*>(device);
    if (g_backend_ready && g_device == direct3d_device)
        return;
    if (g_backend_ready)
        ImGui_ImplDX9_Shutdown();

    g_device = direct3d_device;
    D3DDEVICE_CREATION_PARAMETERS parameters = {};
    if (SUCCEEDED(g_device->GetCreationParameters(&parameters)))
    {
        g_window = parameters.hFocusWindow;
        HWND root = GetAncestor(g_window, GA_ROOT);
        if (root != nullptr)
            g_window = root;
    }
    InstallInputWindow();
    g_backend_ready = ImGui_ImplDX9_Init(g_device);
}

void RenderUtilityFrame()
{
    static bool released = false;
    if (g_menu_open)
    {
        SetSdlRelativeMouse(false);
        released = false;
    }
    else if (!released)
    {
        released = true;
        SetSdlRelativeMouse(true);
    }

    EnsureFrameContext();
    UpdateDisplaySize();
    UpdateInput();
    if (g_backend_ready)
        ImGui_ImplDX9_NewFrame();

    ImGui::NewFrame();

    // Keep ESP/FOV/tint under the menu. The foreground draw list is always
    // submitted over every window, which put ESP boxes and names on top of the
    // menu; the background list is the correct layer while the menu is open.
    const ImVec2 display = ImGui::GetIO().DisplaySize;
    sf::runtime::DrawRuntimeVisuals(g_menu_open ? ImGui::GetBackgroundDrawList()
                                                : ImGui::GetForegroundDrawList(),
                                    static_cast<int>(display.x),
                                    static_cast<int>(display.y));
    if (g_menu_open)
        DrawMenu();
    ImGui::Render();
}


void RenderRendererD3d()
{
    ImDrawData* draw = ImGui::GetDrawData();
    if (!g_backend_ready || g_device == nullptr || draw == nullptr)
        return;

    // At Present the engine may still have an off-screen render target and
    // color writes disabled. VenomHook's working Present path forces both back
    // to the back buffer before ImGui draws; do the same here or the overlay is
    // submitted to a texture that is never presented.
    IDirect3DSurface9* original_target = nullptr;
    IDirect3DSurface9* back_buffer = nullptr;
    const bool restore_target =
        SUCCEEDED(g_device->GetRenderTarget(0, &original_target));
    if (SUCCEEDED(g_device->GetBackBuffer(0, 0, D3DBACKBUFFER_TYPE_MONO,
                                         &back_buffer)))
        g_device->SetRenderTarget(0, back_buffer);

    DWORD color_write = 0xffffffff;
    const bool restore_color_write =
        SUCCEEDED(g_device->GetRenderState(D3DRS_COLORWRITEENABLE, &color_write));
    g_device->SetRenderState(D3DRS_COLORWRITEENABLE, 0xffffffff);

    // The recovered palette is authored in display sRGB.  GMod's scene render
    // leaves sRGB write enabled, which would encode the menu a second time and
    // wash the dark navy cards out to mid grey.  Draw the overlay with the
    // write disabled so #0a0b10 / #13141c reach the backbuffer unchanged.
    DWORD srgb_write = TRUE;
    const bool restore_srgb =
        SUCCEEDED(g_device->GetRenderState(D3DRS_SRGBWRITEENABLE, &srgb_write));
    g_device->SetRenderState(D3DRS_SRGBWRITEENABLE, FALSE);

    ImGui_ImplDX9_RenderDrawData(draw);

    g_device->SetRenderState(D3DRS_SRGBWRITEENABLE, restore_srgb ? srgb_write : TRUE);
    g_device->SetRenderState(D3DRS_COLORWRITEENABLE,
                             restore_color_write ? color_write : 0xffffffff);
    if (restore_target && original_target != nullptr)
        g_device->SetRenderTarget(0, original_target);
    if (back_buffer != nullptr)
        back_buffer->Release();
    if (original_target != nullptr)
        original_target->Release();
}

void ResetRendererD3d()
{
    if (!g_backend_ready)
        return;
    ImGui_ImplDX9_InvalidateDeviceObjects();
    ImGui_ImplDX9_CreateDeviceObjects();
}

void ShutdownRendererFrame()
{
    if (g_backend_ready)
    {
        ImGui_ImplDX9_Shutdown();
        g_backend_ready = false;
        g_device = nullptr;
    }
    if (g_frame_ready && g_owns_context)
        ImGui::DestroyContext();
    g_frame_ready = false;
    g_owns_context = false;
}

} // namespace renderer
} // namespace sf
