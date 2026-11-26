// Skyfall header logo helper.
//
// m64 carries the Skyfall logo as resources but its ImGui header only draws a
// vector shield. This helper runs inside the game after m64, decodes the
// transparent logo from m64's own resource directory, uploads it with m64's
// D3D9 device, and draws it over the header after m64's ImGui draw data has
// been submitted. It does not create a second renderer or overlay window.

#include <windows.h>
#include <cmath>
#include <cstring>
#include <d3d9.h>
#include <gdiplus.h>
#include <shlwapi.h>

#include "imgui.h"

#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "gdiplus.lib")
#pragma comment(lib, "shlwapi.lib")

extern "C" void SkyfallLogoStub();
extern "C" void SkyfallRenderDrawDataStub();
extern "C" void SkyfallRenderDrawDataAfter();
extern "C" unsigned long long SkyfallLogoResume = 0;
extern "C" unsigned long long SkyfallRenderDrawDataTrampoline = 0;
extern "C" unsigned long long SkyfallRenderDrawDataReturn = 0;
extern "C" unsigned long long SkyfallDrawData = 0;

namespace
{
    constexpr DWORD kLogoPngResource = 201;
    constexpr DWORD kLogoJpegResource = 200;
    constexpr ULONG_PTR kM64RenderTextRva = 0x29e990;
    constexpr ULONG_PTR kM64RenderDrawDataRva = 0x2cfbc0;
    constexpr ULONG_PTR kM64DeviceRva = 0x3fa5e0;
    constexpr int kTextureSize = 128;

    IDirect3DTexture9* g_texture = nullptr;

    bool g_logoVisible = false;
    float g_logoX = 0.0f;
    float g_logoY = 0.0f;
    bool g_wordmarkCandidate = false;
    float g_wordmarkX = 0.0f;
    float g_wordmarkY = 0.0f;

    bool ReadSafe(const void* source, void* destination, SIZE_T size)
    {
        SIZE_T read = 0;
        return ReadProcessMemory(GetCurrentProcess(), source, destination, size, &read) &&
            read == size;
    }

    bool IsPeImage(HMODULE base)
    {
        if (!base)
            return false;

        IMAGE_DOS_HEADER dos{};
        if (!ReadSafe(base, &dos, sizeof(dos)) ||
            dos.e_magic != IMAGE_DOS_SIGNATURE || dos.e_lfanew <= 0)
            return false;

        IMAGE_NT_HEADERS nt{};
        if (!ReadSafe(reinterpret_cast<const BYTE*>(base) + dos.e_lfanew, &nt, sizeof(nt)))
            return false;
        return nt.Signature == IMAGE_NT_SIGNATURE;
    }

    HMODULE FindM64()
    {
        static HMODULE cached = nullptr;
        if (cached)
            return cached;

        SYSTEM_INFO info{};
        GetSystemInfo(&info);

        // m64's ImFont::RenderText prologue. Matching the code avoids relying
        // on a string that may also exist in an unrelated buffer.
        constexpr BYTE signature[12] = {
            0x4C, 0x8B, 0xDC, 0x4D, 0x89, 0x4B, 0x20, 0xF3, 0x0F, 0x11, 0x54, 0x24
        };

        auto* address = static_cast<BYTE*>(info.lpMinimumApplicationAddress);
        auto* maximum = static_cast<BYTE*>(info.lpMaximumApplicationAddress);
        constexpr DWORD executable = PAGE_EXECUTE | PAGE_EXECUTE_READ |
            PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY;

        while (address < maximum)
        {
            MEMORY_BASIC_INFORMATION region{};
            if (!VirtualQuery(address, &region, sizeof(region)))
                break;

            auto* start = static_cast<BYTE*>(region.BaseAddress);
            const SIZE_T size = region.RegionSize;

            if (region.State == MEM_COMMIT && !(region.Protect & PAGE_GUARD) &&
                (region.Protect & executable))
            {
                BYTE page[0x1000];
                for (SIZE_T offset = 0; offset < size; offset += sizeof(page))
                {
                    const SIZE_T pageSize = min(sizeof(page), size - offset);
                    if (!ReadSafe(start + offset, page, pageSize))
                        continue;

                    for (SIZE_T i = 0; i + sizeof(signature) <= pageSize; ++i)
                    {
                        if (page[i] != signature[0] ||
                            memcmp(page + i, signature, sizeof(signature)) != 0)
                            continue;

                        auto* base = reinterpret_cast<BYTE*>(
                            reinterpret_cast<ULONG_PTR>(start + offset + i) - kM64RenderTextRva);
                        if (IsPeImage(reinterpret_cast<HMODULE>(base)))
                        {
                            cached = reinterpret_cast<HMODULE>(base);
                            return cached;
                        }
                    }
                }
            }

            address = start + size;
        }

        return nullptr;
    }

    IDirect3DDevice9* GetDevice(HMODULE base)
    {
        __try
        {
            return *reinterpret_cast<IDirect3DDevice9**>(
                reinterpret_cast<BYTE*>(base) + kM64DeviceRva);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            return nullptr;
        }
    }

    IDirect3DTexture9* CreateLogoTexture(HMODULE base, IDirect3DDevice9* device)
    {
        HRSRC resource = FindResourceW(base, MAKEINTRESOURCEW(kLogoPngResource), MAKEINTRESOURCEW(10));
        if (!resource)
            resource = FindResourceW(base, MAKEINTRESOURCEW(kLogoJpegResource), MAKEINTRESOURCEW(10));
        if (!resource)
            return nullptr;

        HGLOBAL loaded = LoadResource(base, resource);
        if (!loaded)
            return nullptr;

        const void* bytes = LockResource(loaded);
        const DWORD size = SizeofResource(base, resource);
        if (!bytes || !size)
            return nullptr;

        Gdiplus::GdiplusStartupInput startupInput{};
        ULONG_PTR token = 0;
        if (Gdiplus::GdiplusStartup(&token, &startupInput, nullptr) != Gdiplus::Ok)
            return nullptr;

        IStream* stream = SHCreateMemStream(static_cast<const BYTE*>(bytes), size);
        if (!stream)
        {
            Gdiplus::GdiplusShutdown(token);
            return nullptr;
        }

        IDirect3DTexture9* texture = nullptr;
        {
            Gdiplus::Bitmap source(stream, FALSE);
            if (source.GetLastStatus() != Gdiplus::Ok)
            {
                stream->Release();
                Gdiplus::GdiplusShutdown(token);
                return nullptr;
            }

            Gdiplus::Bitmap scaled(kTextureSize, kTextureSize, PixelFormat32bppARGB);
            {
                Gdiplus::Graphics graphics(&scaled);
                graphics.SetInterpolationMode(Gdiplus::InterpolationModeHighQualityBicubic);
                graphics.SetPixelOffsetMode(Gdiplus::PixelOffsetModeHighQuality);
                graphics.SetSmoothingMode(Gdiplus::SmoothingModeAntiAlias);
                graphics.Clear(Gdiplus::Color(0, 0, 0, 0));

                // Bake a rounded header tile into the texture so it matches the
                // original shield footprint instead of drawing a hard square.
                const Gdiplus::REAL radius = 26.0f;
                const Gdiplus::REAL inset = 4.0f;
                Gdiplus::GraphicsPath borderPath;
                borderPath.AddArc(0.0f, 0.0f, radius * 2.0f, radius * 2.0f, 180.0f, 90.0f);
                borderPath.AddArc(kTextureSize - radius * 2.0f, 0.0f,
                    radius * 2.0f, radius * 2.0f, 270.0f, 90.0f);
                borderPath.AddArc(kTextureSize - radius * 2.0f,
                    kTextureSize - radius * 2.0f, radius * 2.0f, radius * 2.0f, 0.0f, 90.0f);
                borderPath.AddArc(0.0f, kTextureSize - radius * 2.0f,
                    radius * 2.0f, radius * 2.0f, 90.0f, 90.0f);
                borderPath.CloseFigure();

                Gdiplus::GraphicsPath panelPath;
                const Gdiplus::REAL innerRadius = radius - inset;
                panelPath.AddArc(inset, inset, innerRadius * 2.0f, innerRadius * 2.0f, 180.0f, 90.0f);
                panelPath.AddArc(kTextureSize - inset - innerRadius * 2.0f, inset,
                    innerRadius * 2.0f, innerRadius * 2.0f, 270.0f, 90.0f);
                panelPath.AddArc(kTextureSize - inset - innerRadius * 2.0f,
                    kTextureSize - inset - innerRadius * 2.0f,
                    innerRadius * 2.0f, innerRadius * 2.0f, 0.0f, 90.0f);
                panelPath.AddArc(inset, kTextureSize - inset - innerRadius * 2.0f,
                    innerRadius * 2.0f, innerRadius * 2.0f, 90.0f, 90.0f);
                panelPath.CloseFigure();

                Gdiplus::SolidBrush border(Gdiplus::Color(255, 45, 130, 220));
                Gdiplus::SolidBrush panel(Gdiplus::Color(255, 10, 18, 32));
                graphics.FillPath(&border, &borderPath);
                graphics.FillPath(&panel, &panelPath);

                // The source PNG is 1024x1024 but the skull occupies
                // 227,24..802,999. Crop to those bounds and preserve aspect so
                // the mark sits centered inside the tile.
                const Gdiplus::REAL contentX = 227.0f;
                const Gdiplus::REAL contentY = 24.0f;
                const Gdiplus::REAL contentW = 575.0f;
                const Gdiplus::REAL contentH = 975.0f;
                const Gdiplus::REAL maxW = 88.0f;
                const Gdiplus::REAL maxH = 88.0f;
                const Gdiplus::REAL scale = min(maxW / contentW, maxH / contentH);
                const Gdiplus::REAL drawW = contentW * scale;
                const Gdiplus::REAL drawH = contentH * scale;
                const Gdiplus::REAL drawX = (kTextureSize - drawW) * 0.5f;
                const Gdiplus::REAL drawY = (kTextureSize - drawH) * 0.5f;
                graphics.DrawImage(&source, Gdiplus::RectF(drawX, drawY, drawW, drawH),
                    contentX, contentY, contentW, contentH, Gdiplus::UnitPixel);
            }

            Gdiplus::Rect rect(0, 0, kTextureSize, kTextureSize);
            Gdiplus::BitmapData pixels{};
            if (scaled.LockBits(&rect, Gdiplus::ImageLockModeRead,
                    PixelFormat32bppARGB, &pixels) != Gdiplus::Ok)
            {
                stream->Release();
                Gdiplus::GdiplusShutdown(token);
                return nullptr;
            }

            const HRESULT createResult = device->CreateTexture(kTextureSize, kTextureSize,
                1, D3DUSAGE_DYNAMIC, D3DFMT_A8R8G8B8, D3DPOOL_DEFAULT, &texture, nullptr);
            if (SUCCEEDED(createResult))
            {
                D3DLOCKED_RECT locked{};
                if (SUCCEEDED(texture->LockRect(0, &locked, nullptr, D3DLOCK_DISCARD)))
                {
                    for (int y = 0; y < kTextureSize; ++y)
                    {
                        const int sourceRow = pixels.Stride >= 0
                            ? y * pixels.Stride
                            : (kTextureSize - 1 - y) * -pixels.Stride;
                        memcpy(static_cast<BYTE*>(locked.pBits) + y * locked.Pitch,
                            static_cast<const BYTE*>(pixels.Scan0) + sourceRow,
                            kTextureSize * 4);
                    }
                    texture->UnlockRect(0);
                }
                else
                {
                    texture->Release();
                    texture = nullptr;
                }
            }

            scaled.UnlockBits(&pixels);
        }

        stream->Release();
        Gdiplus::GdiplusShutdown(token);
        return texture;
    }

    struct LogoVertex
    {
        float x, y, z, w;
        float u, v;
    };

    void DrawLogo(IDirect3DDevice9* device, const ImDrawData* drawData)
    {
        if (!device || !drawData || !g_texture || !g_logoVisible)
            return;

        D3DVIEWPORT9 viewport{};
        if (FAILED(device->GetViewport(&viewport)) || viewport.Width == 0 || viewport.Height == 0)
            return;

        float scaleX = 1.0f;
        float scaleY = 1.0f;
        if (drawData->DisplaySize.x > 0.0f)
            scaleX = static_cast<float>(viewport.Width) / drawData->DisplaySize.x;
        if (drawData->DisplaySize.y > 0.0f)
            scaleY = static_cast<float>(viewport.Height) / drawData->DisplaySize.y;

        // The actual m64 header shield is a 34px rounded tile whose top-left
        // sits 42px left of and 4px above the wordmark's text origin.
        const float x = (g_logoX - drawData->DisplayPos.x - 42.0f) * scaleX;
        const float y = (g_logoY - drawData->DisplayPos.y - 4.0f) * scaleY;
        const float width = 34.0f * scaleX;
        const float height = 34.0f * scaleY;
        if (width <= 0.0f || height <= 0.0f)
            return;

        DWORD colorWrite = 0xffffffff;
        DWORD srgbWrite = TRUE;
        DWORD zEnable = TRUE;
        DWORD lighting = TRUE;
        DWORD alphaBlend = FALSE;
        DWORD srcBlend = D3DBLEND_ONE;
        DWORD destBlend = D3DBLEND_ZERO;
        DWORD cullMode = D3DCULL_CCW;
        DWORD alphaTest = FALSE;
        DWORD scissorTest = FALSE;
        DWORD stencil = FALSE;
        DWORD fog = TRUE;
        DWORD minFilter = D3DTEXF_LINEAR;
        DWORD magFilter = D3DTEXF_LINEAR;
        DWORD mipFilter = D3DTEXF_LINEAR;
        DWORD addressU = D3DTADDRESS_WRAP;
        DWORD addressV = D3DTADDRESS_WRAP;
        DWORD colorOp = D3DTOP_MODULATE;
        DWORD colorArg1 = D3DTA_TEXTURE;
        DWORD colorArg2 = D3DTA_DIFFUSE;
        DWORD alphaOp = D3DTOP_MODULATE;
        DWORD alphaArg1 = D3DTA_TEXTURE;
        DWORD alphaArg2 = D3DTA_DIFFUSE;
        DWORD fvf = 0;

        device->GetRenderState(D3DRS_COLORWRITEENABLE, &colorWrite);
        device->GetRenderState(D3DRS_SRGBWRITEENABLE, &srgbWrite);
        device->GetRenderState(D3DRS_ZENABLE, &zEnable);
        device->GetRenderState(D3DRS_LIGHTING, &lighting);
        device->GetRenderState(D3DRS_ALPHABLENDENABLE, &alphaBlend);
        device->GetRenderState(D3DRS_SRCBLEND, &srcBlend);
        device->GetRenderState(D3DRS_DESTBLEND, &destBlend);
        device->GetRenderState(D3DRS_CULLMODE, &cullMode);
        device->GetRenderState(D3DRS_ALPHATESTENABLE, &alphaTest);
        device->GetRenderState(D3DRS_SCISSORTESTENABLE, &scissorTest);
        device->GetRenderState(D3DRS_STENCILENABLE, &stencil);
        device->GetRenderState(D3DRS_FOGENABLE, &fog);
        device->GetSamplerState(0, D3DSAMP_MINFILTER, &minFilter);
        device->GetSamplerState(0, D3DSAMP_MAGFILTER, &magFilter);
        device->GetSamplerState(0, D3DSAMP_MIPFILTER, &mipFilter);
        device->GetSamplerState(0, D3DSAMP_ADDRESSU, &addressU);
        device->GetSamplerState(0, D3DSAMP_ADDRESSV, &addressV);
        device->GetTextureStageState(0, D3DTSS_COLOROP, &colorOp);
        device->GetTextureStageState(0, D3DTSS_COLORARG1, &colorArg1);
        device->GetTextureStageState(0, D3DTSS_COLORARG2, &colorArg2);
        device->GetTextureStageState(0, D3DTSS_ALPHAOP, &alphaOp);
        device->GetTextureStageState(0, D3DTSS_ALPHAARG1, &alphaArg1);
        device->GetTextureStageState(0, D3DTSS_ALPHAARG2, &alphaArg2);
        device->GetFVF(&fvf);

        IDirect3DBaseTexture9* oldTexture = nullptr;
        IDirect3DVertexShader9* oldVertexShader = nullptr;
        IDirect3DPixelShader9* oldPixelShader = nullptr;
        IDirect3DVertexDeclaration9* oldDeclaration = nullptr;
        device->GetTexture(0, &oldTexture);
        device->GetVertexShader(&oldVertexShader);
        device->GetPixelShader(&oldPixelShader);
        device->GetVertexDeclaration(&oldDeclaration);

        const HRESULT beginResult = device->BeginScene();
        const bool beganScene = SUCCEEDED(beginResult);

        device->SetRenderState(D3DRS_ZENABLE, FALSE);
        device->SetRenderState(D3DRS_LIGHTING, FALSE);
        device->SetRenderState(D3DRS_ALPHABLENDENABLE, TRUE);
        device->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
        device->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
        device->SetRenderState(D3DRS_CULLMODE, D3DCULL_NONE);
        device->SetRenderState(D3DRS_ALPHATESTENABLE, FALSE);
        device->SetRenderState(D3DRS_SCISSORTESTENABLE, FALSE);
        device->SetRenderState(D3DRS_STENCILENABLE, FALSE);
        device->SetRenderState(D3DRS_FOGENABLE, FALSE);
        device->SetRenderState(D3DRS_COLORWRITEENABLE, 0xffffffff);
        device->SetRenderState(D3DRS_SRGBWRITEENABLE, FALSE);
        device->SetSamplerState(0, D3DSAMP_MINFILTER, D3DTEXF_LINEAR);
        device->SetSamplerState(0, D3DSAMP_MAGFILTER, D3DTEXF_LINEAR);
        device->SetSamplerState(0, D3DSAMP_MIPFILTER, D3DTEXF_NONE);
        device->SetSamplerState(0, D3DSAMP_ADDRESSU, D3DTADDRESS_CLAMP);
        device->SetSamplerState(0, D3DSAMP_ADDRESSV, D3DTADDRESS_CLAMP);
        device->SetTextureStageState(0, D3DTSS_COLOROP, D3DTOP_MODULATE);
        device->SetTextureStageState(0, D3DTSS_COLORARG1, D3DTA_TEXTURE);
        device->SetTextureStageState(0, D3DTSS_COLORARG2, D3DTA_DIFFUSE);
        device->SetTextureStageState(0, D3DTSS_ALPHAOP, D3DTOP_MODULATE);
        device->SetTextureStageState(0, D3DTSS_ALPHAARG1, D3DTA_TEXTURE);
        device->SetTextureStageState(0, D3DTSS_ALPHAARG2, D3DTA_DIFFUSE);
        device->SetTexture(0, g_texture);
        device->SetVertexShader(nullptr);
        device->SetPixelShader(nullptr);
        device->SetVertexDeclaration(nullptr);
        device->SetFVF(D3DFVF_XYZRHW | D3DFVF_TEX1);

        const LogoVertex vertices[4] = {
            { x, y, 0.0f, 1.0f, 0.0f, 0.0f },
            { x + width, y, 0.0f, 1.0f, 1.0f, 0.0f },
            { x + width, y + height, 0.0f, 1.0f, 1.0f, 1.0f },
            { x, y + height, 0.0f, 1.0f, 0.0f, 1.0f },
        };
        device->DrawPrimitiveUP(D3DPT_TRIANGLEFAN, 2, vertices, sizeof(LogoVertex));

        device->SetTexture(0, oldTexture);
        device->SetFVF(fvf);
        device->SetVertexShader(oldVertexShader);
        device->SetPixelShader(oldPixelShader);
        device->SetVertexDeclaration(oldDeclaration);
        device->SetRenderState(D3DRS_COLORWRITEENABLE, colorWrite);
        device->SetRenderState(D3DRS_SRGBWRITEENABLE, srgbWrite);
        device->SetRenderState(D3DRS_ZENABLE, zEnable);
        device->SetRenderState(D3DRS_LIGHTING, lighting);
        device->SetRenderState(D3DRS_ALPHABLENDENABLE, alphaBlend);
        device->SetRenderState(D3DRS_SRCBLEND, srcBlend);
        device->SetRenderState(D3DRS_DESTBLEND, destBlend);
        device->SetRenderState(D3DRS_CULLMODE, cullMode);
        device->SetRenderState(D3DRS_ALPHATESTENABLE, alphaTest);
        device->SetRenderState(D3DRS_SCISSORTESTENABLE, scissorTest);
        device->SetRenderState(D3DRS_STENCILENABLE, stencil);
        device->SetRenderState(D3DRS_FOGENABLE, fog);
        device->SetSamplerState(0, D3DSAMP_MINFILTER, minFilter);
        device->SetSamplerState(0, D3DSAMP_MAGFILTER, magFilter);
        device->SetSamplerState(0, D3DSAMP_MIPFILTER, mipFilter);
        device->SetSamplerState(0, D3DSAMP_ADDRESSU, addressU);
        device->SetSamplerState(0, D3DSAMP_ADDRESSV, addressV);
        device->SetTextureStageState(0, D3DTSS_COLOROP, colorOp);
        device->SetTextureStageState(0, D3DTSS_COLORARG1, colorArg1);
        device->SetTextureStageState(0, D3DTSS_COLORARG2, colorArg2);
        device->SetTextureStageState(0, D3DTSS_ALPHAOP, alphaOp);
        device->SetTextureStageState(0, D3DTSS_ALPHAARG1, alphaArg1);
        device->SetTextureStageState(0, D3DTSS_ALPHAARG2, alphaArg2);

        if (oldTexture)
            oldTexture->Release();
        if (oldVertexShader)
            oldVertexShader->Release();
        if (oldPixelShader)
            oldPixelShader->Release();
        if (oldDeclaration)
            oldDeclaration->Release();

        if (beganScene)
            device->EndScene();

        g_logoVisible = false;
    }

    void InstallRenderTextHook(HMODULE base)
    {
        auto* target = reinterpret_cast<BYTE*>(base) + kM64RenderTextRva;
        if (target[0] != 0x4C || target[1] != 0x8B || target[2] != 0xDC)
            return;

        // mov r11,rsp (3); mov [r11+0x20],r9 (4);
        // movss [rsp+0x18],xmm2 (6): 13 bytes total.
        constexpr SIZE_T prologueSize = 13;
        DWORD oldProtect = 0;
        if (!VirtualProtect(target, prologueSize, PAGE_EXECUTE_READWRITE, &oldProtect))
            return;

        SkyfallLogoResume = reinterpret_cast<unsigned long long>(target + prologueSize);
        BYTE patch[prologueSize] = { 0x48, 0xB8, 0, 0, 0, 0, 0, 0, 0, 0, 0xFF, 0xE0, 0x90 };
        *reinterpret_cast<void**>(patch + 2) = reinterpret_cast<void*>(&SkyfallLogoStub);
        memcpy(target, patch, sizeof(patch));

        DWORD ignored = 0;
        VirtualProtect(target, prologueSize, oldProtect, &ignored);
        FlushInstructionCache(GetCurrentProcess(), target, prologueSize);
    }

    void InstallRenderDrawDataHook(HMODULE base)
    {
        auto* target = reinterpret_cast<BYTE*>(base) + kM64RenderDrawDataRva;
        constexpr BYTE expected[20] = {
            0x4C, 0x8B, 0xDC, 0x55, 0x41, 0x57, 0x49, 0x8D, 0xAB, 0x68,
            0xFF, 0xFF, 0xFF, 0x48, 0x81, 0xEC, 0x88, 0x01, 0x00, 0x00
        };
        if (memcmp(target, expected, sizeof(expected)) != 0)
            return;

        // The entry is 13 bytes of whole instructions. Copy them into a
        // trampoline that resumes at +13, and route the entry through the
        // return-address hook.
        constexpr SIZE_T prologueSize = 13;
        auto* trampoline = static_cast<BYTE*>(VirtualAlloc(nullptr, 64,
            MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE));
        if (!trampoline)
            return;

        memcpy(trampoline, target, prologueSize);
        trampoline[prologueSize] = 0x48;
        trampoline[prologueSize + 1] = 0xB8;
        *reinterpret_cast<void**>(trampoline + prologueSize + 2) =
            reinterpret_cast<void*>(target + prologueSize);
        trampoline[prologueSize + 10] = 0xFF;
        trampoline[prologueSize + 11] = 0xE0;
        SkyfallRenderDrawDataTrampoline = reinterpret_cast<unsigned long long>(trampoline);

        DWORD oldProtect = 0;
        if (!VirtualProtect(target, prologueSize, PAGE_EXECUTE_READWRITE, &oldProtect))
            return;

        BYTE patch[prologueSize] = { 0x48, 0xB8, 0, 0, 0, 0, 0, 0, 0, 0, 0xFF, 0xE0, 0x90 };
        *reinterpret_cast<void**>(patch + 2) =
            reinterpret_cast<void*>(&SkyfallRenderDrawDataStub);
        memcpy(target, patch, sizeof(patch));

        DWORD ignored = 0;
        VirtualProtect(target, prologueSize, oldProtect, &ignored);
        FlushInstructionCache(GetCurrentProcess(), target, prologueSize);
    }

    DWORD WINAPI Worker(LPVOID)
    {
        HMODULE base = nullptr;
        for (int attempt = 0; attempt < 100 && !base; ++attempt)
        {
            base = FindM64();
            if (!base)
                Sleep(200);
        }
        if (!base)
            return 0;

        IDirect3DDevice9* device = nullptr;
        for (int attempt = 0; attempt < 100 && !device; ++attempt)
        {
            device = GetDevice(base);
            if (!device)
                Sleep(200);
        }
        if (!device)
            return 0;

        g_texture = CreateLogoTexture(base, device);
        if (!g_texture)
            return 0;

        InstallRenderTextHook(base);
        InstallRenderDrawDataHook(base);
        return 0;
    }
}

extern "C" void SkyfallLogoOnText(void* drawList, const float* position,
    unsigned int sizeBits, const char* text, const char* textEnd)
{
    (void)drawList;
    if (!position || !text)
        return;

    float size = 0.0f;
    memcpy(&size, &sizeBits, sizeof(size));
    if (size < 12.0f || size > 24.0f)
        return;

    const auto equals = [&](const char* value, size_t length)
    {
        return textEnd
            ? (static_cast<size_t>(textEnd - text) == length && memcmp(text, value, length) == 0)
            : (strlen(text) == length && memcmp(text, value, length) == 0);
    };

    if (equals("Skyfall", 7))
    {
        g_wordmarkCandidate = true;
        g_wordmarkX = position[0];
        g_wordmarkY = position[1];
        return;
    }

    // The header draws the wordmark and then "internal" one line below it.
    // Requiring the pair keeps the logo from appearing on unrelated Skyfall
    // labels or the loading-screen watermark.
    if (g_wordmarkCandidate && equals("internal", 8) &&
        fabsf(position[0] - g_wordmarkX) < 1.5f &&
        fabsf(position[1] - (g_wordmarkY + 14.0f)) < 2.5f)
    {
        g_logoX = g_wordmarkX;
        g_logoY = g_wordmarkY;
        g_logoVisible = true;
        g_wordmarkCandidate = false;
    }
}

extern "C" void SkyfallLogoAfterRender()
{
    HMODULE base = FindM64();
    IDirect3DDevice9* device = base ? GetDevice(base) : nullptr;
    const auto* drawData = reinterpret_cast<const ImDrawData*>(SkyfallDrawData);
    if (device && drawData)
        DrawLogo(device, drawData);
    else
        g_logoVisible = false;
}

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, LPVOID)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(instance);
        CreateThread(nullptr, 0, Worker, nullptr, 0, nullptr);
    }
    return TRUE;
}
