// imclass_dump.exe — runs ImClass's memory reader against the mapped image.
//
// ImClass is GUI-only, so this harness links its memory.h (the exact reader the
// viewer uses: OpenProcess + ReadProcessMemory) and walks every class in the
// static RTTI table at the live vtable address. For each row it resolves the
// RTTI chain with ImClass's own mem::rttiInfo, falls back to a full-length
// descriptor read when ImClass's fixed 60-byte TypeDescriptor truncates a long
// name, and writes the live table plus a copy-paste address index for the GUI.
//
// Usage:
//   imclass_dump.exe <pid> <imageBase> <rtti_classes.tsv> <outDir>

#define WIN32_LEAN_AND_MEAN
#include "memory.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <string>
#include <vector>

struct ClassRow {
    std::string name;
    uint32_t vtableRva = 0;
    uint32_t vtableCount = 0;
};

static std::vector<std::string> SplitTabs(const std::string& line) {
    std::vector<std::string> fields;
    std::string current;
    for (char c : line) {
        if (c == '\t') {
            fields.push_back(current);
            current.clear();
        } else if (c != '\r' && c != '\n') {
            current += c;
        }
    }
    fields.push_back(current);
    return fields;
}

static std::string Demangle(const std::string& decorated) {
    // MSVC type descriptor: ".?AVFeature@@..." -> after the prefix it is the
    // reversed scope chain, e.g. "AimbotFeature@Aimbot@Features".
    std::vector<std::string> parts;
    std::string current;
    for (char c : decorated) {
        if (c == '@') {
            parts.push_back(current);
            current.clear();
        } else {
            current += c;
        }
    }
    parts.push_back(current);

    std::string result;
    for (auto it = parts.rbegin(); it != parts.rend(); ++it) {
        if (it->empty()) {
            continue;
        }
        if (!result.empty()) {
            result += "::";
        }
        result += *it;
    }
    return result;
}

// Full-length variant of ImClass's rttiInfo: the real TypeDescriptor name is a
// flexible array, so names longer than 59 characters fail its fixed 60-byte
// struct. Reads the same locator/hierarchy/base-array chain with mem::read.
static bool FullRttiChain(uintptr_t vtableAddress, std::string& chain) {
    const uintptr_t locatorPtr = Read<uintptr_t>(vtableAddress - sizeof(void*));
    if (!locatorPtr) {
        return false;
    }

    const auto locator = Read<RTTICompleteObjectLocator>(locatorPtr);
    const uintptr_t moduleBase = locatorPtr - locator.selfOffset;
    const auto hierarchy = Read<RTTIClassHierarchyDescriptor>(
        moduleBase + locator.hierarchyDescriptorOffset);
    if (!hierarchy.numBaseClasses || hierarchy.numBaseClasses > 32) {
        return false;
    }

    const uintptr_t classArray = moduleBase + hierarchy.pBaseClassArray;
    std::string built;

    for (DWORD i = 0; i < hierarchy.numBaseClasses; ++i) {
        const uintptr_t classDescriptor =
            moduleBase + Read<DWORD>(classArray + i * sizeof(DWORD));
        const DWORD typeOffset = Read<DWORD>(classDescriptor);

        char name[512] = {};
        if (!mem::read(moduleBase + typeOffset + offsetof(TypeDescriptor, name),
                       name, sizeof(name) - 1)) {
            return false;
        }

        const std::string decorated(name);
        if (decorated.size() < 6 || !decorated.ends_with("@@")) {
            return false;
        }

        const std::string demangled =
            Demangle(decorated.substr(4, decorated.size() - 4 - 2));
        if (!built.empty()) {
            built += " : ";
        }
        built += demangled;
    }

    chain = built;
    return !chain.empty();
}

static bool TextRange(uintptr_t base, uintptr_t& lo, uintptr_t& hi) {
    const IMAGE_DOS_HEADER dos = Read<IMAGE_DOS_HEADER>(base);
    if (dos.e_magic != IMAGE_DOS_SIGNATURE) return false;
    const IMAGE_NT_HEADERS nt = Read<IMAGE_NT_HEADERS>(base + dos.e_lfanew);
    uintptr_t section = base + dos.e_lfanew + sizeof(DWORD) +
                        sizeof(IMAGE_FILE_HEADER) + nt.FileHeader.SizeOfOptionalHeader;
    for (WORD i = 0; i < nt.FileHeader.NumberOfSections; ++i, section += sizeof(IMAGE_SECTION_HEADER)) {
        const IMAGE_SECTION_HEADER s = Read<IMAGE_SECTION_HEADER>(section);
        if (strncmp(reinterpret_cast<const char*>(s.Name), ".text", 5) == 0) {
            lo = base + s.VirtualAddress;
            hi = lo + s.Misc.VirtualSize;
            return true;
        }
    }
    return false;
}

static std::string TrimChain(const std::string& chain) {
    std::string out = chain;
    while (!out.empty() && (out.front() == ' ' || out.front() == ':')) {
        out.erase(out.begin());
    }
    return out;
}

static std::string FirstScope(const std::string& chain) {
    const size_t pos = chain.find(" : ");
    return pos == std::string::npos ? chain : chain.substr(0, pos);
}

int main(int argc, char** argv) {
    if (argc < 5) {
        fprintf(stderr,
                "usage: imclass_dump.exe <pid> <imageBase> <rtti_classes.tsv> <outDir>\n");
        return 2;
    }

    const DWORD pid = static_cast<DWORD>(strtoul(argv[1], nullptr, 0));
    const uintptr_t base = static_cast<uintptr_t>(strtoull(argv[2], nullptr, 0));
    const std::filesystem::path tsvPath = argv[3];
    const std::filesystem::path outDir = argv[4];

    if (!mem::openHandle(pid) || mem::memHandle == INVALID_HANDLE_VALUE) {
        fprintf(stderr, "cannot open pid %lu (error %lu)\n", pid, GetLastError());
        return 3;
    }
    mem::g_pid = pid;

    std::ifstream in(tsvPath);
    if (!in) {
        fprintf(stderr, "cannot read %s\n", tsvPath.string().c_str());
        return 3;
    }

    std::vector<ClassRow> rows;
    std::string line;
    bool first = true;
    while (std::getline(in, line)) {
        if (line.empty()) {
            continue;
        }
        if (first && line.rfind("class\t", 0) == 0) {
            first = false;
            continue;
        }
        first = false;

        const auto fields = SplitTabs(line);
        if (fields.size() < 3 || fields[0].empty()) {
            continue;
        }

        ClassRow row;
        row.name = fields[0];
        row.vtableRva = static_cast<uint32_t>(strtoul(fields[1].c_str(), nullptr, 0));
        row.vtableCount =
            static_cast<uint32_t>(strtoul(fields[2].c_str(), nullptr, 0));
        rows.push_back(row);
    }

    if (rows.empty()) {
        fprintf(stderr, "no class rows parsed from %s\n", tsvPath.string().c_str());
        return 3;
    }

    std::filesystem::create_directories(outDir);

    int exact = 0;
    int full = 0;
    int failed = 0;

    std::ofstream tsv(outDir / "rtti_live.tsv");
    tsv << "class\tvtable_rva\tvtable_va\tvtable_slots\tslot_vas\tlive_chain\tresolved\tstatus\n";

    std::string markdown;
    markdown +=
        "# Live RTTI map — ImClass reader against the mapped m64.dll image\n\n";
    markdown += "Generated by `re/tools/imclass_dump.cpp`, which links ImClass's\n";
    markdown += "`memory.h` and calls its `mem::rttiInfo` against a process holding the\n";
    markdown += "image mapped at `0x180000000`. `vtable VA` is the address to paste into\n";
    markdown += "ImClass's address bar while attached to `imclass_host.exe`.\n\n";
    markdown += "| class | vtable VA | slots | RTTI |\n";
    markdown += "|---|---|---|---|\n";

    for (const auto& row : rows) {
        const uintptr_t vtableVa = base + row.vtableRva;

        std::string chain;
        bool ok = mem::rttiInfo(vtableVa, chain);
        std::string status;
        std::string resolved;

        if (ok) {
            chain = TrimChain(chain);
            // ImClass reports the decorated scope chain (AimbotFeature@Aimbot@Features),
            // the corpus uses the C++ form (Features::Aimbot::AimbotFeature).
            resolved = Demangle(FirstScope(chain));
            if (resolved == row.name) {
                status = "ok";
                ++exact;
            } else {
                status = "mismatch";
                ++failed;
            }
        } else {
            std::string fullChain;
            if (FullRttiChain(vtableVa, fullChain) && FirstScope(fullChain) == row.name) {
                chain = fullChain;
                resolved = FirstScope(chain);
                status = "ok-long-name";
                ++full;
            } else {
                chain = TrimChain(chain);
                status = "fail";
                ++failed;
            }
        }

        char va[32];
        snprintf(va, sizeof(va), "0x%llX", static_cast<unsigned long long>(vtableVa));

        // Enumerate slots through ImClass's own Read<> (ReadProcessMemory).
        uintptr_t textLo = 0, textHi = 0;
        TextRange(base, textLo, textHi);
        std::string slotVas;
        uint32_t slotCount = 0;
        for (; slotCount < 200; ++slotCount) {
            const uintptr_t target = Read<uintptr_t>(vtableVa + slotCount * 8);
            if (!textHi || target < textLo || target >= textHi) break;
            char entry[32];
            snprintf(entry, sizeof(entry), "0x%llX",
                     static_cast<unsigned long long>(target));
            if (!slotVas.empty()) slotVas += ',';
            slotVas += entry;
        }

        tsv << row.name << '\t' << "0x" << std::hex << row.vtableRva << std::dec
            << '\t' << va << '\t' << slotCount << '\t' << slotVas << '\t'
            << chain << '\t' << resolved << '\t' << status << '\n';

        markdown += "| `" + row.name + "` | `" + va + "` | " +
                    std::to_string(slotCount) + " | " + status + " |\n";
    }

    markdown += "\n## Result\n\n";
    markdown += "- classes checked: " + std::to_string(rows.size()) + "\n";
    markdown += "- resolved by ImClass rttiInfo: " + std::to_string(exact) + "\n";
    markdown += "- resolved by full-length fallback: " + std::to_string(full) + "\n";
    markdown += "- failed: " + std::to_string(failed) + "\n";

    std::ofstream md(outDir / "class_index.md");
    md << markdown;

    printf("classes=%zu ok=%d ok-long=%d failed=%d base=0x%llX\n",
           rows.size(), exact, full, failed,
           static_cast<unsigned long long>(base));

    return failed == 0 ? 0 : 1;
}
