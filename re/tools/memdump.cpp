// 64-bit memory dumper for the manually mapped m64.dll image.
//
// Usage:
//   memdump.exe <pid> <local-dll> <out-dir> [--full]
//
// It locates the mapped image by matching the PE header and the first bytes of
// .text, writes the complete in-memory image, and optionally writes a full
// process minidump (MiniDumpWithFullMemory) for offline analysis.
#define _WIN32_WINNT 0x0601
#include <windows.h>
#include <dbghelp.h>
#include <psapi.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <vector>

#pragma comment(lib, "dbghelp.lib")
#pragma comment(lib, "psapi.lib")

struct Section {
    char name[9];
    uint32_t va;
    uint32_t vsize;
    uint32_t raw;
    uint32_t rsize;
};

static bool ReadFileBytes(const char* path, std::vector<uint8_t>& out) {
    HANDLE f = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ, NULL,
                           OPEN_EXISTING, 0, NULL);
    if (f == INVALID_HANDLE_VALUE) return false;
    LARGE_INTEGER size{};
    if (!GetFileSizeEx(f, &size) || size.QuadPart <= 0 ||
        size.QuadPart > 256ull * 1024 * 1024) {
        CloseHandle(f);
        return false;
    }
    out.resize((size_t)size.QuadPart);
    DWORD read = 0;
    bool ok = ReadFile(f, out.data(), (DWORD)out.size(), &read, NULL) &&
              read == out.size();
    CloseHandle(f);
    return ok;
}

static bool ReadMem(HANDLE p, uint64_t addr, void* buf, size_t size) {
    SIZE_T got = 0;
    return ReadProcessMemory(p, (LPCVOID)(uintptr_t)addr, buf, size, &got) &&
           got == size;
}

static bool Readable(DWORD protect) {
    if (protect & (PAGE_NOACCESS | PAGE_GUARD)) return false;
    switch (protect & 0xFF) {
        case PAGE_READONLY:
        case PAGE_READWRITE:
        case PAGE_WRITECOPY:
        case PAGE_EXECUTE_READ:
        case PAGE_EXECUTE_READWRITE:
        case PAGE_EXECUTE_WRITECOPY:
            return true;
        default:
            return false;
    }
}

static uint32_t U32(const uint8_t* p) {
    uint32_t v;
    memcpy(&v, p, 4);
    return v;
}

static uint16_t U16(const uint8_t* p) {
    uint16_t v;
    memcpy(&v, p, 2);
    return v;
}

static bool ParsePe(const std::vector<uint8_t>& d, uint32_t& size_image,
                    uint32_t& size_headers, uint16_t& sections_count,
                    uint16_t& machine, std::vector<Section>& sections,
                    std::vector<uint8_t>& text_probe) {
    if (d.size() < 0x100 || d[0] != 'M' || d[1] != 'Z') return false;
    uint32_t pe = U32(d.data() + 0x3C);
    if (pe + 0x18 >= d.size() || memcmp(d.data() + pe, "PE\0\0", 4) != 0)
        return false;
    machine = U16(d.data() + pe + 4);
    sections_count = U16(d.data() + pe + 6);
    uint16_t opt_size = U16(d.data() + pe + 20);
    uint32_t opt = pe + 24;
    if (opt + opt_size > d.size() || opt_size < 0x70) return false;
    uint16_t magic = U16(d.data() + opt);
    if (magic != 0x20B) return false;
    size_image = U32(d.data() + opt + 56);
    size_headers = U32(d.data() + opt + 60);
    uint32_t sec_table = opt + opt_size;
    if (sec_table + sections_count * 40 > d.size()) return false;
    sections.clear();
    for (uint16_t i = 0; i < sections_count; ++i) {
        const uint8_t* s = d.data() + sec_table + i * 40;
        Section sec{};
        memcpy(sec.name, s, 8);
        sec.vsize = U32(s + 8);
        sec.va = U32(s + 12);
        sec.rsize = U32(s + 16);
        sec.raw = U32(s + 20);
        sections.push_back(sec);
    }
    text_probe.clear();
    for (const auto& s : sections) {
        if (strcmp(s.name, ".text") == 0 && s.rsize >= 32 &&
            (uint64_t)s.raw + 32 <= d.size()) {
            text_probe.assign(d.begin() + s.raw, d.begin() + s.raw + 32);
            break;
        }
    }
    return true;
}

static bool HeaderMatches(HANDLE p, uint64_t base, uint32_t size_image,
                          uint16_t sections_count, uint16_t machine,
                          const std::vector<Section>& local_sections,
                          const std::vector<uint8_t>& text_probe,
                          uint64_t& text_hits) {
    uint8_t hdr[0x1000] = {};
    if (!ReadMem(p, base, hdr, sizeof(hdr))) return false;
    if (hdr[0] != 'M' || hdr[1] != 'Z') return false;
    uint32_t pe = U32(hdr + 0x3C);
    if (pe + 0x18 >= sizeof(hdr) || memcmp(hdr + pe, "PE\0\0", 4) != 0)
        return false;
    if (U16(hdr + pe + 4) != machine || U16(hdr + pe + 6) != sections_count)
        return false;
    uint16_t opt_size = U16(hdr + pe + 20);
    uint32_t opt = pe + 24;
    if (opt + opt_size > sizeof(hdr) || opt_size < 0x70) return false;
    if (U16(hdr + opt) != 0x20B) return false;
    if (U32(hdr + opt + 56) != size_image) return false;
    uint32_t sec_table = opt + opt_size;
    if (sec_table + sections_count * 40 > sizeof(hdr)) return false;
    text_hits = 0;
    for (uint16_t i = 0; i < sections_count; ++i) {
        const uint8_t* s = hdr + sec_table + i * 40;
        uint32_t va = U32(s + 12);
        uint32_t rsize = U32(s + 16);
        if (strcmp((const char*)s, ".text") == 0 && rsize >= text_probe.size() &&
            text_probe.size() >= 16) {
            std::vector<uint8_t> probe(text_probe.size());
            if (ReadMem(p, base + va, probe.data(), probe.size()) &&
                memcmp(probe.data(), text_probe.data(), probe.size()) == 0) {
                ++text_hits;
            }
        }
    }
    (void)local_sections;
    return text_hits > 0;
}

static bool FindMappedImage(HANDLE p, uint32_t size_image,
                            uint16_t sections_count, uint16_t machine,
                            const std::vector<Section>& local_sections,
                            const std::vector<uint8_t>& text_probe,
                            uint64_t& base_out) {
    uint64_t addr = 0;
    MEMORY_BASIC_INFORMATION mbi{};
    while (VirtualQueryEx(p, (LPCVOID)(uintptr_t)addr, &mbi, sizeof(mbi))) {
        uint64_t region = (uint64_t)(uintptr_t)mbi.BaseAddress;
        uint64_t end = region + mbi.RegionSize;
        if (mbi.State == MEM_COMMIT && Readable(mbi.Protect) &&
            mbi.RegionSize >= 0x1000) {
            uint8_t hdr[2] = {};
            if (ReadMem(p, region, hdr, sizeof(hdr)) &&
                hdr[0] == 'M' && hdr[1] == 'Z') {
                uint64_t hits = 0;
                if (HeaderMatches(p, region, size_image, sections_count, machine,
                                  local_sections, text_probe, hits)) {
                    base_out = region;
                    return true;
                }
            }
        }
        if (end <= addr) break;
        addr = end;
    }

    // Header-stripped manual maps: search committed memory for the .text head.
    if (text_probe.size() < 16) return false;
    addr = 0;
    while (VirtualQueryEx(p, (LPCVOID)(uintptr_t)addr, &mbi, sizeof(mbi))) {
        uint64_t region = (uint64_t)(uintptr_t)mbi.BaseAddress;
        uint64_t end = region + mbi.RegionSize;
        if (mbi.State == MEM_COMMIT && Readable(mbi.Protect) &&
            mbi.RegionSize >= text_probe.size()) {
            const size_t chunk = 1u << 20;
            std::vector<uint8_t> buf(chunk + text_probe.size());
            for (uint64_t off = 0; off < mbi.RegionSize; off += chunk) {
                size_t want = (size_t)((mbi.RegionSize - off) < chunk
                                           ? (mbi.RegionSize - off)
                                           : chunk);
                SIZE_T got = 0;
                if (!ReadProcessMemory(p, (LPCVOID)(uintptr_t)(region + off),
                                       buf.data(), want, &got) ||
                    got < text_probe.size()) {
                    continue;
                }
                for (size_t i = 0; i + text_probe.size() <= got; ++i) {
                    if (memcmp(buf.data() + i, text_probe.data(),
                               text_probe.size()) == 0) {
                        uint64_t candidate = region + off + i -
                                             local_sections[0].va;
                        uint64_t hits = 0;
                        if (HeaderMatches(p, candidate, size_image,
                                          sections_count, machine,
                                          local_sections, text_probe, hits)) {
                            base_out = candidate;
                            return true;
                        }
                    }
                }
            }
        }
        if (end <= addr) break;
        addr = end;
    }
    return false;
}

static bool WriteImage(HANDLE p, uint64_t base, uint32_t size_image,
                       const char* path) {
    HANDLE f = CreateFileA(path, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS,
                           FILE_ATTRIBUTE_NORMAL, NULL);
    if (f == INVALID_HANDLE_VALUE) return false;
    const size_t page = 0x1000;
    std::vector<uint8_t> buf(page);
    bool ok = true;
    for (uint64_t off = 0; off < size_image; off += page) {
        size_t want = (size_t)((size_image - off) < page ? (size_image - off)
                                                          : page);
        SIZE_T got = 0;
        if (!ReadProcessMemory(p, (LPCVOID)(uintptr_t)(base + off), buf.data(),
                               want, &got)) {
            memset(buf.data(), 0, page);
            got = 0;
        }
        DWORD written = 0;
        if (!WriteFile(f, buf.data(), (DWORD)want, &written, NULL) ||
            written != want) {
            ok = false;
            break;
        }
    }
    CloseHandle(f);
    return ok;
}

static bool WriteFullDump(HANDLE p, DWORD pid, const char* path) {
    HANDLE f = CreateFileA(path, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS,
                           FILE_ATTRIBUTE_NORMAL, NULL);
    if (f == INVALID_HANDLE_VALUE) return false;
    MINIDUMP_TYPE type = (MINIDUMP_TYPE)(
        MiniDumpWithFullMemory | MiniDumpWithHandleData |
        MiniDumpWithUnloadedModules | MiniDumpWithThreadInfo);
    BOOL ok = MiniDumpWriteDump(p, pid, f, type, NULL, NULL, NULL);
    CloseHandle(f);
    return ok != FALSE;
}

int main(int argc, char** argv) {
    if (argc < 4) {
        fprintf(stderr,
                "usage: memdump <pid> <local-dll> <out-dir> [--full]\n");
        return 2;
    }
    DWORD pid = (DWORD)strtoul(argv[1], NULL, 10);
    bool full = argc > 4 && strcmp(argv[4], "--full") == 0;
    std::vector<uint8_t> local;
    if (!ReadFileBytes(argv[2], local)) {
        fprintf(stderr, "cannot read %s\n", argv[2]);
        return 1;
    }
    uint32_t size_image = 0, size_headers = 0;
    uint16_t sections_count = 0, machine = 0;
    std::vector<Section> sections;
    std::vector<uint8_t> text_probe;
    if (!ParsePe(local, size_image, size_headers, sections_count, machine,
                 sections, text_probe)) {
        fprintf(stderr, "not a supported 64-bit PE: %s\n", argv[2]);
        return 1;
    }

    HANDLE p = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE,
                           pid);
    if (!p) {
        fprintf(stderr, "OpenProcess(%lu) failed: %lu\n", (unsigned long)pid,
                (unsigned long)GetLastError());
        return 1;
    }

    CreateDirectoryA(argv[3], NULL);
    char image_path[MAX_PATH], full_path[MAX_PATH], info_path[MAX_PATH];
    snprintf(image_path, sizeof(image_path), "%s\\m64_mapped.bin", argv[3]);
    snprintf(full_path, sizeof(full_path), "%s\\gmod_full_%lu.dmp", argv[3],
             (unsigned long)pid);
    snprintf(info_path, sizeof(info_path), "%s\\dump_info.txt", argv[3]);

    uint64_t base = 0;
    bool found = FindMappedImage(p, size_image, sections_count, machine,
                                 sections, text_probe, base);
    if (!found) {
        fprintf(stderr, "mapped image not found in pid %lu\n",
                (unsigned long)pid);
    } else {
        printf("mapped base=0x%llx size=0x%x\n",
               (unsigned long long)base, size_image);
        if (!WriteImage(p, base, size_image, image_path)) {
            fprintf(stderr, "image write failed: %lu\n",
                    (unsigned long)GetLastError());
        } else {
            printf("wrote %s\n", image_path);
        }
    }

    FILE* info = fopen(info_path, "w");
    if (info) {
        fprintf(info, "pid=%lu\n", (unsigned long)pid);
        fprintf(info, "local_dll=%s\n", argv[2]);
        fprintf(info, "size_of_image=0x%x\n", size_image);
        fprintf(info, "sections=%u\n", sections_count);
        fprintf(info, "machine=0x%x\n", machine);
        if (found) fprintf(info, "mapped_base=0x%llx\n",
                           (unsigned long long)base);
        else fprintf(info, "mapped_base=not_found\n");
        fclose(info);
    }

    if (full) {
        printf("writing full dump %s ...\n", full_path);
        if (!WriteFullDump(p, pid, full_path)) {
            fprintf(stderr, "MiniDumpWriteDump failed: %lu\n",
                    (unsigned long)GetLastError());
        } else {
            printf("wrote %s\n", full_path);
        }
    }
    CloseHandle(p);
    return found ? 0 : 3;
}
