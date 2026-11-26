// imclass_host.exe — maps m64.dll at its preferred image base in a bare process.
//
// ImClass (https://github.com/codabro/ImClass) is a live-process memory viewer:
// it attaches with ReadProcessMemory and resolves RTTI from the target image.
// Loading m64.dll with LoadLibrary would run DllMain, which expects the Source
// engine, so this host instead copies the sections into a VirtualAlloc at the
// PE's ImageBase (0x180000000) without executing anything. RTTI columns and
// vtable pointers are stored as preferred-base VAs in the file, so at that base
// every VA equals 0x180000000 + RVA from the static corpus, with no fixups.
//
// Usage:
//   imclass_host.exe <dll> [--seconds N | --hold]
//
// The process prints its PID and the mapped base, then idles; attach ImClass to
// "imclass_host.exe" and use the address bar with 0x180000000 + RVA.

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <vector>

static bool ReadFileBytes(const char* path, std::vector<uint8_t>& out) {
    HANDLE f = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ, nullptr,
                           OPEN_EXISTING, 0, nullptr);
    if (f == INVALID_HANDLE_VALUE) {
        return false;
    }

    LARGE_INTEGER size{};
    bool ok = GetFileSizeEx(f, &size) && size.QuadPart > 0 &&
              size.QuadPart <= 256ll * 1024 * 1024;
    if (ok) {
        out.resize(static_cast<size_t>(size.QuadPart));
        DWORD got = 0;
        ok = ReadFile(f, out.data(), static_cast<DWORD>(out.size()), &got, nullptr) &&
             got == out.size();
    }

    CloseHandle(f);
    return ok;
}

int main(int argc, char** argv) {
    const char* dllPath = argc > 1 ? argv[1] : "Gmod/Skyfall/m64.dll";
    long holdSeconds = 120;

    for (int i = 2; i < argc; ++i) {
        if (_stricmp(argv[i], "--hold") == 0) {
            holdSeconds = -1;
        } else if (_stricmp(argv[i], "--seconds") == 0 && i + 1 < argc) {
            holdSeconds = atol(argv[++i]);
        }
    }

    std::vector<uint8_t> file;
    if (!ReadFileBytes(dllPath, file)) {
        fprintf(stderr, "cannot read %s\n", dllPath);
        return 2;
    }

    auto dos = reinterpret_cast<const IMAGE_DOS_HEADER*>(file.data());
    if (dos->e_magic != IMAGE_DOS_SIGNATURE) {
        fprintf(stderr, "%s is not a PE file\n", dllPath);
        return 2;
    }

    auto nt = reinterpret_cast<const IMAGE_NT_HEADERS*>(file.data() + dos->e_lfanew);
    if (nt->Signature != IMAGE_NT_SIGNATURE ||
        nt->OptionalHeader.Magic != IMAGE_NT_OPTIONAL_HDR64_MAGIC) {
        fprintf(stderr, "%s is not a PE32+ image\n", dllPath);
        return 2;
    }

    const uintptr_t base = static_cast<uintptr_t>(nt->OptionalHeader.ImageBase);
    const DWORD imageSize = nt->OptionalHeader.SizeOfImage;

    void* image = VirtualAlloc(reinterpret_cast<void*>(base), imageSize,
                               MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
    if (!image) {
        fprintf(stderr, "VirtualAlloc at 0x%llX failed (error %lu)\n",
                static_cast<unsigned long long>(base), GetLastError());
        return 3;
    }

    size_t headerBytes = nt->OptionalHeader.SizeOfHeaders;
    if (headerBytes > file.size()) {
        headerBytes = file.size();
    }
    memcpy(image, file.data(), headerBytes);

    auto section = IMAGE_FIRST_SECTION(nt);
    for (WORD i = 0; i < nt->FileHeader.NumberOfSections; ++i, ++section) {
        if (!section->Misc.VirtualSize) {
            continue;
        }

        uint8_t* dst = static_cast<uint8_t*>(image) + section->VirtualAddress;
        size_t copy = section->SizeOfRawData < section->Misc.VirtualSize
                          ? section->SizeOfRawData
                          : section->Misc.VirtualSize;
        if (copy && section->PointerToRawData + copy <= file.size()) {
            memcpy(dst, file.data() + section->PointerToRawData, copy);
        }

        DWORD protect = PAGE_READONLY;
        if (section->Characteristics & IMAGE_SCN_MEM_EXECUTE) {
            protect = (section->Characteristics & IMAGE_SCN_MEM_WRITE)
                          ? PAGE_EXECUTE_READWRITE
                          : PAGE_EXECUTE_READ;
        } else if (section->Characteristics & IMAGE_SCN_MEM_WRITE) {
            protect = PAGE_READWRITE;
        }

        DWORD oldProtect = 0;
        VirtualProtect(dst, section->Misc.VirtualSize, protect, &oldProtect);
    }

    printf("imclass-host pid=%lu base=0x%llX size=0x%lX image=%s\n",
           GetCurrentProcessId(), static_cast<unsigned long long>(base),
           imageSize, dllPath);
    fflush(stdout);

    if (holdSeconds < 0) {
        for (;;) {
            Sleep(1000);
        }
    }

    const DWORD deadline = GetTickCount() + static_cast<DWORD>(holdSeconds) * 1000;
    while (static_cast<int32_t>(GetTickCount() - deadline) < 0) {
        Sleep(200);
    }

    VirtualFree(image, 0, MEM_RELEASE);
    return 0;
}
