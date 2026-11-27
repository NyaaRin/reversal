// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"

namespace sf::reconstructed {

// 0x18011aae0 FUN_18011aae0
// source: re/dump/decompile/0x18011aae0_FUN_18011aae0.c
// size: 856 bytes; thunk: false
// body sha256: f1005cad81b730de89060ec9a493c58050a51848c4afb3547926cee118b2c6d1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011aae0{
    "0x18011aae0",
    "FUN_18011aae0",
    R"F18011aae0S(undefined FUN_18011aae0())F18011aae0S",
    R"B18011aae0(// 0x18011aae0  FUN_18011aae0
// size=856 thunk=false
// signature: undefined FUN_18011aae0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_18011aae0(void)

{
  char cVar1;
  DWORD DVar2;
  HMODULE hModule;
  size_t sVar3;
  ulonglong uVar4;
  byte ****ppppbVar5;
  byte *pbVar6;
  byte ****ppppbVar7;
  LPCSTR ***lpFileName;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong _Size;
  byte ****ppppbVar11;
  int iVar12;
  undefined1 auStack_318 [32];
  ulonglong local_2f8;
  char *local_2f0;
  undefined8 local_2e8;
  undefined4 local_2d8;
  LPCSTR **local_2d0 [3];
  ulonglong local_2b8;
  char local_2a8 [256];
  byte ***local_1a8;
  undefined8 uStack_1a0;
  ulonglong local_198;
  ulonglong local_190;
  undefined8 ***local_188 [2];
  ulonglong local_178;
  ulonglong local_170;
  CHAR local_168 [272];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_318;
  iVar12 = 0;
  local_2d8 = 0;
  if ((DAT_180427600 & 1) == 0) {
    DAT_180427600 = DAT_180427600 | 1;
    atexit((_func_5014 *)&LAB_180309da0);
  }
  if (DAT_1803ff2d8 == '\0') {
    hModule = GetModuleHandleA("menusystem.dll");
    memset(local_168,0,0x104);
    if ((hModule != (HMODULE)0x0) &&
       (DVar2 = GetModuleFileNameA(hModule,local_168,0x104), DVar2 != 0)) {
      DAT_1803ff2d8 = '\x01';
      local_1a8 = (byte ***)0x0;
      uStack_1a0 = 0;
      local_198 = 0;
      local_190 = 0;
      sVar3 = strlen(local_168);
      FUN_18001d080(&local_1a8,local_168,sVar3);
      do {
        uVar9 = local_198;
        ppppbVar11 = (byte ****)local_1a8;
        ppppbVar7 = &local_1a8;
        if (0xf < local_190) {
          ppppbVar7 = (byte ****)local_1a8;
        }
        if (local_198 == 0) goto LAB_18011ae00;
        lVar10 = -1;
        if (local_198 - 1 != -1) {
          lVar10 = local_198 - 1;
        }
        if (lVar10 + 3U < 0x10) {
          memset(local_2a8,0,0x100);
          pbVar6 = &DAT_180356e90;
          do {
            local_2a8[*pbVar6] = '\x01';
            pbVar6 = pbVar6 + 1;
          } while (pbVar6 != &DAT_180356e92);
          ppppbVar5 = (byte ****)((longlong)ppppbVar7 + lVar10);
          cVar1 = local_2a8[*(byte *)ppppbVar5];
          while (cVar1 == '\0') {
            if (ppppbVar5 == ppppbVar7) goto LAB_18011ae00;
            ppppbVar5 = (byte ****)((longlong)ppppbVar5 + -1);
            cVar1 = local_2a8[*(byte *)ppppbVar5];
          }
          uVar4 = (longlong)ppppbVar5 - (longlong)ppppbVar7;
        }
        else {
          uVar4 = thunk_FUN_1802d4e90(ppppbVar7,lVar10 + 1,&DAT_180356e90,2);
          uVar9 = local_198;
          ppppbVar11 = (byte ****)local_1a8;
        }
        if (uVar4 == 0xffffffffffffffff) goto LAB_18011ae00;
        if (uVar9 < uVar4) {
          _Size = uVar4 - uVar9;
          if (local_190 - uVar9 < _Size) {
            local_2f8 = local_2f8 & 0xffffffffffffff00;
            FUN_18022a720(&local_1a8,_Size);
          }
          else {
            ppppbVar7 = &local_1a8;
            if (0xf < local_190) {
              ppppbVar7 = ppppbVar11;
            }
            local_198 = uVar4;
            memset((byte *)((longlong)ppppbVar7 + uVar9),0,_Size);
            ((byte *)((longlong)ppppbVar7 + uVar9))[_Size] = 0;
          }
        }
        else {
          ppppbVar7 = &local_1a8;
          if (0xf < local_190) {
            ppppbVar7 = ppppbVar11;
          }
          local_198 = uVar4;
          *(byte *)((longlong)ppppbVar7 + uVar4) = 0;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < 3);
      FUN_18002cfb0(local_188,&local_1a8,"\\garrysmod\\html\\");
      if (0x7fffffffffffffff - local_178 < 0xc) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_2e8 = 0xc;
      local_2f0 = "loading.html";
      local_2f8 = local_178;
      FUN_18020e930(local_2d0);
      local_2d8 = 2;
      lpFileName = local_2d0;
      if (0xf < local_2b8) {
        lpFileName = (LPCSTR ***)local_2d0[0];
      }
      DVar2 = GetFileAttributesA((LPCSTR)lpFileName);
      local_2d8 = 0;
      FUN_18020e450(local_2d0);
      if (DVar2 != 0xffffffff) {
        ppppuVar8 = local_188;
        if (0xf < local_170) {
          ppppuVar8 = (undefined8 ****)local_188[0];
        }
        FUN_180212700(&DAT_1803e97d8,ppppuVar8,local_178);
      }
      FUN_18020e450(local_188);
LAB_18011ae00:
      FUN_18020e450(&local_1a8);
    }
  }
  return &DAT_1803e97d8;
}


)B18011aae0",
    "f1005cad81b730de89060ec9a493c58050a51848c4afb3547926cee118b2c6d1",
    R"F18011aae0C(FUN_1800130a0
FUN_18001d080
FUN_18002cfb0
FUN_18020e450
FUN_18020e930
FUN_180212700
FUN_18022a720)F18011aae0C",
    R"F18011aae0D(LAB_18011ae00
LAB_180309da0
DAT_180356e90
DAT_180356e92
DAT_1803da4c0
DAT_1803e97d8
DAT_1803ff2d8
DAT_180427600)F18011aae0D",
    R"F18011aae0T("loading.html"
"menusystem.dll"
"\\\\garrysmod\\\\html\\\\")F18011aae0T",
    R"F18011aae0F(48: if ((DAT_180427600 & 1) == 0) {
52: if (DAT_1803ff2d8 == '\0') {
55: if ((hModule != (HMODULE)0x0) &&
64: do {
68: if (0xf < local_190) {
71: if (local_198 == 0) goto LAB_18011ae00;
73: if (local_198 - 1 != -1) {
76: if (lVar10 + 3U < 0x10) {
79: do {
85: while (cVar1 == '\0') {
86: if (ppppbVar5 == ppppbVar7) goto LAB_18011ae00;
92: else {
97: if (uVar4 == 0xffffffffffffffff) goto LAB_18011ae00;
98: if (uVar9 < uVar4) {
100: if (local_190 - uVar9 < _Size) {
104: else {
106: if (0xf < local_190) {
114: else {
116: if (0xf < local_190) {
125: if (0x7fffffffffffffff - local_178 < 0xc) {
135: if (0xf < local_2b8) {
141: if (DVar2 != 0xffffffff) {
143: if (0xf < local_170) {
149: LAB_18011ae00:
153: return &DAT_1803e97d8;)F18011aae0F",
    R"F18011aae0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18011ae00.
TODO: recover the declaration, type and value for global/data reference LAB_180309da0.
TODO: recover the declaration, type and value for global/data reference DAT_180356e90.
TODO: recover the declaration, type and value for global/data reference DAT_180356e92.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e97d8.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff2d8.
TODO: recover the declaration, type and value for global/data reference DAT_180427600.)F18011aae0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011aae0() noexcept {
    return kFunction_0x18011aae0;
}

// 0x18011ae40 FUN_18011ae40
// source: re/dump/decompile/0x18011ae40_FUN_18011ae40.c
// size: 344 bytes; thunk: false
// body sha256: a645cd26cc94bfe93d22f5064009e66f8cadbb6045cd2fe97cf3e20aab28817e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011ae40{
    "0x18011ae40",
    "FUN_18011ae40",
    R"F18011ae40S(undefined FUN_18011ae40())F18011ae40S",
    R"B18011ae40(// 0x18011ae40  FUN_18011ae40
// size=344 thunk=false
// signature: undefined FUN_18011ae40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18011ae40(undefined8 *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  size_t sVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  char local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uVar8 = 0x14650fb0739d0383;
  pbVar4 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pbVar4 = *(byte **)param_2;
  }
  pbVar7 = pbVar4 + *(longlong *)(param_2 + 0x10);
  for (; pbVar4 != pbVar7; pbVar4 = pbVar4 + 1) {
    uVar8 = (uVar8 ^ *pbVar4) * 0x100000001b3;
  }
  local_40 = param_1;
  FUN_180012ac0(local_38,0x28,"loading_%016llx.html",uVar8);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  sVar5 = strlen(local_38);
  FUN_18001d080(&local_60,local_38,sVar5);
  local_68 = 2;
  puVar6 = (undefined4 *)FUN_18022a630(&local_60);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  *(undefined4 *)param_1 = *puVar6;
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  uVar1 = puVar6[5];
  uVar2 = puVar6[6];
  uVar3 = puVar6[7];
  *(undefined4 *)(param_1 + 2) = puVar6[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined1 *)puVar6 = 0;
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 6) = 0xf;
  local_68 = 1;
  FUN_18020e450(&local_60);
  return param_1;
}


)B18011ae40",
    "a645cd26cc94bfe93d22f5064009e66f8cadbb6045cd2fe97cf3e20aab28817e",
    R"F18011ae40C(FUN_180012ac0
FUN_18001d080
FUN_18020e450
FUN_18022a630)F18011ae40C",
    R"F18011ae40D(DAT_1803da4c0)F18011ae40D",
    R"F18011ae40T("loading_%016llx.html")F18011ae40T",
    R"F18011ae40F(34: if (0xf < *(ulonglong *)(param_2 + 0x18)) {
38: for (; pbVar4 != pbVar7; pbVar4 = pbVar4 + 1) {
74: return param_1;)F18011ae40F",
    R"F18011ae40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18011ae40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011ae40() noexcept {
    return kFunction_0x18011ae40;
}

// 0x18011afa0 FUN_18011afa0
// source: re/dump/decompile/0x18011afa0_FUN_18011afa0.c
// size: 491 bytes; thunk: false
// body sha256: d9217f820493cec9d7e0350dd61a6ce8285cd11a886ee846b00b27f3e266a36a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011afa0{
    "0x18011afa0",
    "FUN_18011afa0",
    R"F18011afa0S(undefined FUN_18011afa0())F18011afa0S",
    R"B18011afa0(// 0x18011afa0  FUN_18011afa0
// size=491 thunk=false
// signature: undefined FUN_18011afa0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011afa0(void)

{
  longlong lVar1;
  BOOL BVar2;
  longlong lVar3;
  HANDLE hFindFile;
  size_t sVar4;
  LPCSTR ****pppppCVar5;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  CHAR *local_1e0;
  size_t local_1d8;
  undefined4 local_1c8;
  LPCSTR ***local_1c0 [3];
  ulonglong local_1a8;
  LPCSTR ***local_1a0 [3];
  ulonglong local_188;
  _WIN32_FIND_DATAA local_178;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_208;
  local_1c8 = 0;
  lVar3 = FUN_18011aae0();
  if (*(longlong *)(lVar3 + 0x10) != 0) {
    memset(&local_178,0,0x140);
    local_1e8 = *(longlong *)(lVar3 + 0x10);
    if (0x7fffffffffffffffU - local_1e8 < 0xe) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_1d8 = 0xe;
    local_1e0 = "loading_*.html";
    FUN_18020e930(local_1c0);
    local_1c8 = 1;
    pppppCVar5 = local_1c0;
    if (0xf < local_1a8) {
      pppppCVar5 = (LPCSTR ****)local_1c0[0];
    }
    hFindFile = FindFirstFileA((LPCSTR)pppppCVar5,&local_178);
    local_1c8 = 0;
    FUN_18020e450(local_1c0);
    if (hFindFile != (HANDLE)0xffffffffffffffff) {
      do {
        if (((byte)local_178.dwFileAttributes & 0x10) == 0) {
          lVar1 = *(longlong *)(lVar3 + 0x10);
          sVar4 = strlen(local_178.cFileName);
          if (0x7fffffffffffffffU - lVar1 < sVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_1800130a0();
          }
          local_1e0 = local_178.cFileName;
          local_1e8 = lVar1;
          local_1d8 = sVar4;
          FUN_18020e930(local_1a0);
          local_1c8 = 2;
          pppppCVar5 = local_1a0;
          if (0xf < local_188) {
            pppppCVar5 = (LPCSTR ****)local_1a0[0];
          }
          BVar2 = DeleteFileA((LPCSTR)pppppCVar5);
          local_1c8 = 0;
          FUN_18020e450(local_1a0);
          if (BVar2 != 0) {
            FUN_180014410("[LOADURL] page file removed: %s\n",local_178.cFileName);
          }
        }
        BVar2 = FindNextFileA(hFindFile,&local_178);
      } while (BVar2 != 0);
      FindClose(hFindFile);
    }
    DAT_180423708 = 0;
  }
  return;
}


)B18011afa0",
    "d9217f820493cec9d7e0350dd61a6ce8285cd11a886ee846b00b27f3e266a36a",
    R"F18011afa0C(FUN_1800130a0
FUN_180014410
FUN_18011aae0
FUN_18020e450
FUN_18020e930)F18011afa0C",
    R"F18011afa0D(DAT_1803da4c0
DAT_180423708)F18011afa0D",
    R"F18011afa0T("loading_*.html"
"[LOADURL] page file removed: %s\\n")F18011afa0T",
    R"F18011afa0F(33: if (*(longlong *)(lVar3 + 0x10) != 0) {
36: if (0x7fffffffffffffffU - local_1e8 < 0xe) {
45: if (0xf < local_1a8) {
51: if (hFindFile != (HANDLE)0xffffffffffffffff) {
52: do {
53: if (((byte)local_178.dwFileAttributes & 0x10) == 0) {
56: if (0x7fffffffffffffffU - lVar1 < sVar4) {
66: if (0xf < local_188) {
72: if (BVar2 != 0) {
82: return;)F18011afa0F",
    R"F18011afa0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_180423708.)F18011afa0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011afa0() noexcept {
    return kFunction_0x18011afa0;
}

// 0x18011b190 FUN_18011b190
// source: re/dump/decompile/0x18011b190_FUN_18011b190.c
// size: 771 bytes; thunk: false
// body sha256: 1e37f1c61621ec1390572bb911c077bc0e70bcee2b0504eb43dd1b1444599009
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011b190{
    "0x18011b190",
    "FUN_18011b190",
    R"F18011b190S(undefined FUN_18011b190())F18011b190S",
    R"B18011b190(// 0x18011b190  FUN_18011b190
// size=771 thunk=false
// signature: undefined FUN_18011b190()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18011b190(byte *param_1)

{
  ulonglong *puVar1;
  DWORD DVar2;
  BOOL BVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  size_t sVar6;
  HANDLE hFile;
  byte *pbVar7;
  LPCSTR ******pppppppCVar8;
  byte *pbVar9;
  undefined8 *******pppppppuVar10;
  byte bVar11;
  ulonglong uVar12;
  undefined1 auStackY_158 [32];
  undefined8 ******local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  DWORD local_d0 [2];
  LPCSTR *****local_c8 [3];
  ulonglong local_b0;
  char local_a8 [40];
  char local_80 [40];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStackY_158;
  uVar4 = FUN_18011aae0();
  uVar5 = uVar4;
  if (*(longlong *)(uVar4 + 0x10) == 0) {
LAB_18011b471:
    return uVar5 & 0xffffffffffffff00;
  }
  puVar1 = (ulonglong *)(param_1 + 0x10);
  uVar5 = *puVar1 - 1;
  if (0x7ffff < uVar5) goto LAB_18011b471;
  uVar5 = 0x14650fb0739d0383;
  uVar12 = 0x14650fb0739d0383;
  pbVar7 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pbVar7 = *(byte **)param_1;
  }
  pbVar9 = pbVar7 + *puVar1;
  for (; pbVar7 != pbVar9; pbVar7 = pbVar7 + 1) {
    uVar12 = (uVar12 ^ *pbVar7) * 0x100000001b3;
  }
  FUN_180012ac0(local_a8,0x28,"loading_%016llx.html",uVar12);
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  sVar6 = strlen(local_a8);
  FUN_18001d080(&local_f0,local_a8,sVar6);
  FUN_1801fc780(local_c8,uVar4,&local_f0);
  FUN_18020e450(&local_f0);
  if (DAT_180423708 != 0) {
    pppppppCVar8 = local_c8;
    if (0xf < local_b0) {
      pppppppCVar8 = (LPCSTR ******)local_c8[0];
    }
    DVar2 = GetFileAttributesA((LPCSTR)pppppppCVar8);
    if (DVar2 != 0xffffffff) {
      DAT_180423700 = GetTickCount64();
      bVar11 = 1;
      goto LAB_18011b462;
    }
  }
  FUN_18011afa0();
  pppppppCVar8 = local_c8;
  if (0xf < local_b0) {
    pppppppCVar8 = (LPCSTR ******)local_c8[0];
  }
  hFile = CreateFileA((LPCSTR)pppppppCVar8,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    DVar2 = GetLastError();
    FUN_180014410("[LOADURL] could not write the page (%lu)\n",DVar2);
    bVar11 = 0;
  }
  else {
    local_d0[0] = 0;
    pbVar7 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pbVar7 = *(byte **)param_1;
    }
    BVar3 = WriteFile(hFile,pbVar7,(DWORD)*puVar1,local_d0,(LPOVERLAPPED)0x0);
    if ((BVar3 == 0) || ((ulonglong)local_d0[0] != *puVar1)) {
      bVar11 = 0;
    }
    else {
      bVar11 = 1;
    }
    CloseHandle(hFile);
    DAT_180423700 = GetTickCount64();
    uVar4 = *puVar1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(byte **)param_1;
    }
    pbVar7 = param_1 + *puVar1;
    for (; param_1 != pbVar7; param_1 = param_1 + 1) {
      uVar5 = (uVar5 ^ *param_1) * 0x100000001b3;
    }
    DAT_180423708 = bVar11;
    FUN_180012ac0(local_80,0x28,"loading_%016llx.html",uVar5);
    local_110 = (undefined8 *******)0x0;
    uStack_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    sVar6 = strlen(local_80);
    FUN_18001d080(&local_110,local_80,sVar6);
    pppppppuVar10 = &local_110;
    if (0xf < uStack_f8) {
      pppppppuVar10 = (undefined8 *******)local_110;
    }
    FUN_180014410("[LOADURL] page file written: %s (%zu bytes)\n",pppppppuVar10,uVar4);
    FUN_18020e450(&local_110);
  }
LAB_18011b462:
  FUN_18020e450(local_c8);
  return (ulonglong)bVar11;
}


)B18011b190",
    "1e37f1c61621ec1390572bb911c077bc0e70bcee2b0504eb43dd1b1444599009",
    R"F18011b190C(FUN_180012ac0
FUN_180014410
FUN_18001d080
FUN_18011aae0
FUN_18011afa0
FUN_1801fc780
FUN_18020e450)F18011b190C",
    R"F18011b190D(LAB_18011b462
LAB_18011b471
DAT_1803da4c0
DAT_180423700
DAT_180423708)F18011b190D",
    R"F18011b190T("loading_%016llx.html"
"[LOADURL] could not write the page (%lu)\\n"
"[LOADURL] page file written: %s (%zu bytes)\\n")F18011b190T",
    R"F18011b190F(44: if (*(longlong *)(uVar4 + 0x10) == 0) {
45: LAB_18011b471:
46: return uVar5 & 0xffffffffffffff00;
50: if (0x7ffff < uVar5) goto LAB_18011b471;
54: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
58: for (; pbVar7 != pbVar9; pbVar7 = pbVar7 + 1) {
70: if (DAT_180423708 != 0) {
72: if (0xf < local_b0) {
76: if (DVar2 != 0xffffffff) {
79: goto LAB_18011b462;
84: if (0xf < local_b0) {
89: if (hFile == (HANDLE)0xffffffffffffffff) {
94: else {
97: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
101: if ((BVar3 == 0) || ((ulonglong)local_d0[0] != *puVar1)) {
104: else {
110: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
114: for (; param_1 != pbVar7; param_1 = param_1 + 1) {
126: if (0xf < uStack_f8) {
132: LAB_18011b462:
134: return (ulonglong)bVar11;)F18011b190F",
    R"F18011b190U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18011b462.
TODO: recover the declaration, type and value for global/data reference LAB_18011b471.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_180423700.
TODO: recover the declaration, type and value for global/data reference DAT_180423708.)F18011b190U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011b190() noexcept {
    return kFunction_0x18011b190;
}

// 0x18011b4a0 FUN_18011b4a0
// source: re/dump/decompile/0x18011b4a0_FUN_18011b4a0.c
// size: 200 bytes; thunk: false
// body sha256: 8ed229fe89c2da76fafb6c91fd59b379cb864d27e81e2247cfbe3bcb02bf0d3e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011b4a0{
    "0x18011b4a0",
    "FUN_18011b4a0",
    R"F18011b4a0S(undefined FUN_18011b4a0())F18011b4a0S",
    R"B18011b4a0(// 0x18011b4a0  FUN_18011b4a0
// size=200 thunk=false
// signature: undefined FUN_18011b4a0()
// status: ok


void FUN_18011b4a0(char *param_1)

{
  char cVar1;
  longlong *plVar2;
  char *_Src;
  
  *param_1 = '\0';
  if ((DAT_1803fa668 != (longlong *)0x0) &&
     (plVar2 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))(), plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
      if (cVar1 == '\0') {
        _Src = (char *)(**(code **)(*plVar2 + 8))(plVar2);
        if ((_Src != (char *)0x0) && (*_Src != '\0')) {
          strncpy_s(param_1,0x50,_Src,0xffffffffffffffff);
        }
      }
      else {
        strncpy_s(param_1,0x50,"loopback",0xffffffffffffffff);
      }
    }
    else {
      strncpy_s(param_1,0x50,"demo playback",0xffffffffffffffff);
    }
  }
  return;
}


)B18011b4a0",
    "8ed229fe89c2da76fafb6c91fd59b379cb864d27e81e2247cfbe3bcb02bf0d3e",
    R"F18011b4a0C()F18011b4a0C",
    R"F18011b4a0D(DAT_1803fa668)F18011b4a0D",
    R"F18011b4a0T("loopback"
"demo playback")F18011b4a0T",
    R"F18011b4a0F(15: if ((DAT_1803fa668 != (longlong *)0x0) &&
18: if (cVar1 == '\0') {
20: if (cVar1 == '\0') {
22: if ((_Src != (char *)0x0) && (*_Src != '\0')) {
26: else {
30: else {
34: return;)F18011b4a0F",
    R"F18011b4a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 16: (plVar2 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))(), plVar2 != (longlong *)0x0)) {.
TODO: resolve the indirect call in body 17: cVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);.
TODO: resolve the indirect call in body 19: cVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);.
TODO: resolve the indirect call in body 21: _Src = (char *)(**(code **)(*plVar2 + 8))(plVar2);.)F18011b4a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011b4a0() noexcept {
    return kFunction_0x18011b4a0;
}

// 0x18011b570 FUN_18011b570
// source: re/dump/decompile/0x18011b570_FUN_18011b570.c
// size: 260 bytes; thunk: false
// body sha256: 59e3885aa166dfbffeaa5a6e3bf3c56da0c5bbe597951949f446148ba2fb8cde
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011b570{
    "0x18011b570",
    "FUN_18011b570",
    R"F18011b570S(undefined FUN_18011b570())F18011b570S",
    R"B18011b570(// 0x18011b570  FUN_18011b570
// size=260 thunk=false
// signature: undefined FUN_18011b570()
// status: ok


longlong * FUN_18011b570(longlong *param_1,char *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uVar6 = 1;
  plVar7 = param_1;
  do {
    if ((param_2 == (char *)0x0) || (cVar1 = *param_2, cVar1 == '\0')) {
      return param_1;
    }
    if (cVar1 == '\"') {
      uVar5 = 6;
      pcVar4 = "&quot;";
LAB_18011b654:
      FUN_18021aef0(param_1,pcVar4,uVar5,cVar1,uVar6,plVar7);
    }
    else {
      if (cVar1 == '&') {
        uVar5 = 5;
        pcVar4 = "&amp;";
        goto LAB_18011b654;
      }
      if (cVar1 == '<') {
        uVar5 = 4;
        pcVar4 = "&lt;";
        goto LAB_18011b654;
      }
      if (cVar1 == '>') {
        uVar5 = 4;
        pcVar4 = "&gt;";
        goto LAB_18011b654;
      }
      uVar2 = param_1[2];
      if (uVar2 < (ulonglong)param_1[3]) {
        param_1[2] = uVar2 + 1;
        if ((ulonglong)param_1[3] < 0x10) {
          *(char *)(uVar2 + (longlong)param_1) = cVar1;
          *(undefined1 *)(uVar2 + 1 + (longlong)param_1) = 0;
        }
        else {
          lVar3 = *param_1;
          *(char *)(uVar2 + lVar3) = cVar1;
          *(undefined1 *)(uVar2 + 1 + lVar3) = 0;
        }
      }
      else {
        FUN_18021abd0(param_1);
      }
    }
    param_2 = param_2 + 1;
  } while( true );
}


)B18011b570",
    "59e3885aa166dfbffeaa5a6e3bf3c56da0c5bbe597951949f446148ba2fb8cde",
    R"F18011b570C(FUN_18021abd0
FUN_18021aef0)F18011b570C",
    R"F18011b570D(LAB_18011b654)F18011b570D",
    R"F18011b570T("') {\n      uVar5 = 6;\n      pcVar4 = "
";\n        goto LAB_18011b654;\n      }\n      if (cVar1 == '<') {\n        uVar5 = 4;\n        pcVar4 = "
";\n        goto LAB_18011b654;\n      }\n      if (cVar1 == '>') {\n        uVar5 = 4;\n        pcVar4 = "
";\nLAB_18011b654:\n      FUN_18021aef0(param_1,pcVar4,uVar5,cVar1,uVar6,plVar7);\n    }\n    else {\n      if (cVar1 == '&') {\n        uVar5 = 5;\n        pcVar4 = ")F18011b570T",
    R"F18011b570F(25: do {
26: if ((param_2 == (char *)0x0) || (cVar1 = *param_2, cVar1 == '\0')) {
27: return param_1;
29: if (cVar1 == '\"') {
32: LAB_18011b654:
35: else {
36: if (cVar1 == '&') {
39: goto LAB_18011b654;
41: if (cVar1 == '<') {
44: goto LAB_18011b654;
46: if (cVar1 == '>') {
49: goto LAB_18011b654;
52: if (uVar2 < (ulonglong)param_1[3]) {
54: if ((ulonglong)param_1[3] < 0x10) {
58: else {
64: else {)F18011b570F",
    R"F18011b570U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18011b654.)F18011b570U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011b570() noexcept {
    return kFunction_0x18011b570;
}

// 0x18011b680 FUN_18011b680
// source: re/dump/decompile/0x18011b680_FUN_18011b680.c
// size: 798 bytes; thunk: false
// body sha256: d06d45f4926dac82e4723a9881875fd0624ae589f123f232578b0e5de114a670
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011b680{
    "0x18011b680",
    "FUN_18011b680",
    R"F18011b680S(undefined FUN_18011b680())F18011b680S",
    R"B18011b680(// 0x18011b680  FUN_18011b680
// size=798 thunk=false
// signature: undefined FUN_18011b680()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18011b680(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 ******ppppppuVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_138 [32];
  longlong local_118;
  uint local_108;
  undefined8 *****local_100;
  undefined8 uStack_f8;
  longlong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  local_108 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_c0 = param_1;
  FUN_18011b4a0(&local_98);
  FUN_18016d4c0(param_1,param_2);
  local_108 = 1;
  if ((char)local_98 == '\0') {
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    FUN_18001d080(&local_e0,"&#8212;",7);
    puVar3 = &local_e0;
    uVar8 = 5;
  }
  else {
    puVar3 = (undefined8 *)FUN_18011b570(local_b8,&local_98);
    uVar8 = 3;
  }
  lVar10 = puVar3[2];
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  puVar6 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar6 = (undefined8 *)*param_1;
  }
  local_108 = uVar8;
  if ((7 < (ulonglong)param_1[2]) &&
     (lVar9 = param_1[2] + (longlong)puVar6, lVar4 = thunk_FUN_1802d6b60(puVar6,lVar9,"{{ADDR}}",8),
     lVar4 != lVar9)) {
    for (lVar4 = lVar4 - (longlong)puVar6; lVar4 != -1; lVar4 = lVar4 - (longlong)puVar6) {
      local_118 = puVar3[2];
      puVar6 = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar6 = (undefined8 *)*puVar3;
      }
      FUN_18021ad40(param_1,lVar4,8,puVar6);
      uVar2 = param_1[2];
      puVar6 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar6 = (undefined8 *)*param_1;
      }
      if (((uVar2 < 8) || (uVar2 - 8 < (ulonglong)(lVar4 + lVar10))) ||
         (lVar4 = thunk_FUN_1802d6b60(lVar4 + lVar10 + (longlong)puVar6,uVar2 + (longlong)puVar6,
                                      "{{ADDR}}",8), lVar4 == uVar2 + (longlong)puVar6)) break;
    }
  }
  if ((uVar8 & 4) != 0) {
    uVar8 = uVar8 & 0xfffffffb;
    local_108 = uVar8;
    FUN_18020e450(&local_e0);
  }
  if ((uVar8 & 2) != 0) {
    local_108 = uVar8 & 0xfffffffd;
    FUN_18020e450(local_b8);
  }
  local_100 = (undefined8 ******)0x0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  FUN_18001d080(&local_100,"Sep  7 2026",0xb);
  lVar10 = local_f0;
  lVar9 = local_f0;
  if (local_f0 == 0) {
    lVar9 = 1;
  }
  puVar3 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  lVar4 = local_118;
  if ((8 < (ulonglong)param_1[2]) &&
     (lVar1 = param_1[2] + (longlong)puVar3, lVar5 = thunk_FUN_1802d6b60(puVar3,lVar1,"{{BUILD}}",9)
     , lVar4 = local_118, lVar5 != lVar1)) {
    local_118 = lVar10;
    for (lVar5 = lVar5 - (longlong)puVar3; lVar5 != -1; lVar5 = lVar5 - (longlong)puVar3) {
      ppppppuVar7 = &local_100;
      if (0xf < local_e8) {
        ppppppuVar7 = (undefined8 ******)local_100;
      }
      FUN_18021ad40(param_1,lVar5,9,ppppppuVar7);
      uVar2 = param_1[2];
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar3 = (undefined8 *)*param_1;
      }
      lVar4 = local_118;
      if (((uVar2 < 9) || (uVar2 - 9 < (ulonglong)(lVar5 + lVar9))) ||
         (lVar5 = thunk_FUN_1802d6b60(lVar5 + lVar9 + (longlong)puVar3,uVar2 + (longlong)puVar3,
                                      "{{BUILD}}",9), lVar4 = local_118,
         lVar5 == uVar2 + (longlong)puVar3)) break;
      local_118 = local_f0;
    }
  }
  local_118 = lVar4;
  FUN_18020e450(&local_100);
  return param_1;
}


)B18011b680",
    "d06d45f4926dac82e4723a9881875fd0624ae589f123f232578b0e5de114a670",
    R"F18011b680C(FUN_18001d080
FUN_18011b4a0
FUN_18011b570
FUN_18016d4c0
FUN_18020e450
FUN_18021ad40)F18011b680C",
    R"F18011b680D(DAT_1803da4c0)F18011b680D",
    R"F18011b680T("&#8212;"
"{{ADDR}}"
"{{BUILD}}"
"Sep  7 2026")F18011b680T",
    R"F18011b680F(63: if ((char)local_98 == '\0') {
72: else {
77: if (lVar10 == 0) {
81: if (0xf < (ulonglong)param_1[3]) {
85: if ((7 < (ulonglong)param_1[2]) &&
88: for (lVar4 = lVar4 - (longlong)puVar6; lVar4 != -1; lVar4 = lVar4 - (longlong)puVar6) {
91: if (0xf < (ulonglong)puVar3[3]) {
97: if (0xf < (ulonglong)param_1[3]) {
100: if (((uVar2 < 8) || (uVar2 - 8 < (ulonglong)(lVar4 + lVar10))) ||
105: if ((uVar8 & 4) != 0) {
110: if ((uVar8 & 2) != 0) {
121: if (local_f0 == 0) {
125: if (0xf < (ulonglong)param_1[3]) {
129: if ((8 < (ulonglong)param_1[2]) &&
133: for (lVar5 = lVar5 - (longlong)puVar3; lVar5 != -1; lVar5 = lVar5 - (longlong)puVar3) {
135: if (0xf < local_e8) {
141: if (0xf < (ulonglong)param_1[3]) {
145: if (((uVar2 < 9) || (uVar2 - 9 < (ulonglong)(lVar5 + lVar9))) ||
154: return param_1;)F18011b680F",
    R"F18011b680U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18011b680U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011b680() noexcept {
    return kFunction_0x18011b680;
}

// 0x18011b9a0 FUN_18011b9a0
// source: re/dump/decompile/0x18011b9a0_FUN_18011b9a0.c
// size: 273 bytes; thunk: false
// body sha256: e8c49c30e9da5b8a4a3435e590c50fcdaf9b6d27bad2ce23c69ed66bcd319729
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011b9a0{
    "0x18011b9a0",
    "FUN_18011b9a0",
    R"F18011b9a0S(undefined FUN_18011b9a0())F18011b9a0S",
    R"B18011b9a0(// 0x18011b9a0  FUN_18011b9a0
// size=273 thunk=false
// signature: undefined FUN_18011b9a0()
// status: ok


ulonglong FUN_18011b9a0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,
                       longlong param_5,ulonglong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  iVar4 = 0;
  uVar2 = param_6;
  if (0 < param_3) {
    lVar5 = 0;
    do {
      if ((*(byte *)(param_2 + 0x24 + lVar5 * 0x28) & 0x20) == 0) {
        uVar3 = 0;
        uVar6 = (ulonglong)(*(uint *)(param_2 + 8 + lVar5 * 0x28) >> 3);
        if (uVar6 != 0) {
          do {
            uVar1 = *(ulonglong *)
                     ((ulonglong)*(uint *)(param_2 + 0xc + lVar5 * 0x28) + param_1 + uVar3 * 8);
            if (((((param_4 <= uVar1) && (uVar1 < param_4 + param_5)) && (uVar1 <= param_6)) &&
                (param_6 - uVar1 < 0x1001)) && ((uVar7 == 0 || (uVar7 < uVar1)))) {
              uVar7 = uVar1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar6);
        }
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 1;
    } while (iVar4 < param_3);
    if (uVar7 != 0) {
      return uVar7;
    }
  }
  while ((uVar7 = uVar2, param_4 < uVar7 && (param_6 - uVar7 < 0x200))) {
    uVar2 = uVar7 - 1;
    if (*(char *)(uVar7 - 1) == -0x34) {
      return uVar7;
    }
  }
  return 0;
}


)B18011b9a0",
    "e8c49c30e9da5b8a4a3435e590c50fcdaf9b6d27bad2ce23c69ed66bcd319729",
    R"F18011b9a0C()F18011b9a0C",
    R"F18011b9a0D()F18011b9a0D",
    R"F18011b9a0T()F18011b9a0T",
    R"F18011b9a0F(22: if (0 < param_3) {
24: do {
25: if ((*(byte *)(param_2 + 0x24 + lVar5 * 0x28) & 0x20) == 0) {
28: if (uVar6 != 0) {
29: do {
32: if (((((param_4 <= uVar1) && (uVar1 < param_4 + param_5)) && (uVar1 <= param_6)) &&
43: if (uVar7 != 0) {
44: return uVar7;
47: while ((uVar7 = uVar2, param_4 < uVar7 && (param_6 - uVar7 < 0x200))) {
49: if (*(char *)(uVar7 - 1) == -0x34) {
50: return uVar7;
53: return 0;)F18011b9a0F",
    R"F18011b9a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18011b9a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011b9a0() noexcept {
    return kFunction_0x18011b9a0;
}

// 0x18011bac0 FUN_18011bac0
// source: re/dump/decompile/0x18011bac0_FUN_18011bac0.c
// size: 657 bytes; thunk: false
// body sha256: c484e8fa214484ae027bae0e18d311f340a8c066d565a5b56eace58f186adf05
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011bac0{
    "0x18011bac0",
    "FUN_18011bac0",
    R"F18011bac0S(undefined FUN_18011bac0())F18011bac0S",
    R"B18011bac0(// 0x18011bac0  FUN_18011bac0
// size=657 thunk=false
// signature: undefined FUN_18011bac0()
// status: ok


char * FUN_18011bac0(char *param_1,ulonglong param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  HMODULE pHVar4;
  longlong lVar5;
  int *piVar6;
  char *pcVar7;
  longlong lVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  char *pcVar17;
  char *pcVar18;
  
  pHVar4 = GetModuleHandleA("menusystem.dll");
  if (pHVar4 == (HMODULE)0x0) {
    return (char *)0x0;
  }
  if (((short)pHVar4->unused == 0x5a4d) &&
     (piVar6 = (int *)((longlong)&pHVar4->unused + (longlong)pHVar4[0xf].unused), *piVar6 == 0x4550)
     ) {
    lVar8 = (ulonglong)*(ushort *)(piVar6 + 5) + 0x18 + (longlong)piVar6;
    uVar1 = *(ushort *)((longlong)piVar6 + 6);
    uVar10 = (uint)uVar1;
    pcVar17 = (char *)0x0;
    uVar16 = 0;
    for (iVar11 = 0; iVar11 < (int)(uint)uVar1; iVar11 = iVar11 + 1) {
      piVar6 = (int *)(lVar8 + (longlong)iVar11 * 0x28);
      if ((*piVar6 == 0x7865742e) && ((char)piVar6[1] == 't')) {
        pcVar17 = (char *)((longlong)&pHVar4->unused + (ulonglong)(uint)piVar6[3]);
        uVar16 = (ulonglong)(uint)piVar6[2];
        break;
      }
    }
    if ((pcVar17 != (char *)0x0) && (0xfff < uVar16)) {
      iVar11 = 0;
      uVar13 = (uint)uVar1;
      lVar15 = lVar8;
      pcVar18 = pcVar17;
      while (iVar14 = iVar11, iVar11 < (int)uVar10) {
        lVar5 = (longlong)iVar11;
        if ((*(byte *)(lVar8 + 0x24 + lVar5 * 0x28) & 0x20) == 0) {
          uVar12 = (ulonglong)*(uint *)(lVar8 + 8 + lVar5 * 0x28);
          if (uVar12 < param_2) {
            iVar11 = iVar11 + 1;
          }
          else {
            uVar2 = *(uint *)(lVar8 + 0xc + lVar5 * 0x28);
            lVar5 = 0;
            uVar10 = uVar13;
            lVar8 = lVar15;
            while (lVar5 + param_2 <= uVar12) {
              pcVar9 = (char *)((longlong)&pHVar4->unused + lVar5 + (ulonglong)uVar2);
              if ((*pcVar9 == *param_1) && (iVar3 = memcmp(pcVar9,param_1,param_2), iVar3 == 0)) {
                uVar13 = uVar10;
                lVar15 = lVar8;
                if ((lVar5 == 0) || (pcVar9[-1] == '\0')) goto LAB_18011bc7d;
                lVar5 = lVar5 + 1;
              }
              else {
                lVar5 = lVar5 + 1;
              }
            }
            iVar11 = iVar11 + 1;
            uVar13 = uVar10;
            lVar15 = lVar8;
          }
        }
        else {
          iVar11 = iVar11 + 1;
        }
      }
      pcVar9 = (char *)0x0;
LAB_18011bc7d:
      if (pcVar9 == (char *)0x0) {
        return (char *)0x0;
      }
      lVar5 = 3;
      while (lVar5 + 4U <= uVar16) {
        if (pcVar17 + (longlong)*(int *)(pcVar17 + lVar5) + 4 + lVar5 == pcVar9) {
          pcVar7 = pcVar17 + lVar5 + -3;
          if ((*pcVar7 == 'H') && (pcVar17[lVar5 + -2] == -0x73)) goto LAB_18011bcd3;
          lVar5 = lVar5 + 1;
        }
        else {
          lVar5 = lVar5 + 1;
        }
      }
      pcVar7 = (char *)0x0;
LAB_18011bcd3:
      if (pcVar7 == (char *)0x0) {
        return (char *)0x0;
      }
      pcVar9 = pcVar7;
      if (param_3 == 1) {
        while ((pcVar18 = pcVar9, pcVar17 < pcVar18 &&
               ((ulonglong)((longlong)pcVar7 - (longlong)pcVar18) < 0x200))) {
          pcVar9 = pcVar18 + -1;
          if (pcVar18[-1] == -0x34) {
            return pcVar18;
          }
        }
        return (char *)0x0;
      }
      pcVar17 = (char *)FUN_18011b9a0(pHVar4,lVar8,uVar10,pcVar17,uVar16,pcVar7,uVar13,iVar14,lVar15
                                      ,uVar16,pcVar18);
      return pcVar17;
    }
  }
  return (char *)0x0;
}


)B18011bac0",
    "c484e8fa214484ae027bae0e18d311f340a8c066d565a5b56eace58f186adf05",
    R"F18011bac0C(FUN_18011b9a0)F18011bac0C",
    R"F18011bac0D(LAB_18011bc7d
LAB_18011bcd3)F18011bac0D",
    R"F18011bac0T("menusystem.dll")F18011bac0T",
    R"F18011bac0F(30: if (pHVar4 == (HMODULE)0x0) {
31: return (char *)0x0;
33: if (((short)pHVar4->unused == 0x5a4d) &&
41: for (iVar11 = 0; iVar11 < (int)(uint)uVar1; iVar11 = iVar11 + 1) {
43: if ((*piVar6 == 0x7865742e) && ((char)piVar6[1] == 't')) {
46: break;
49: if ((pcVar17 != (char *)0x0) && (0xfff < uVar16)) {
54: while (iVar14 = iVar11, iVar11 < (int)uVar10) {
56: if ((*(byte *)(lVar8 + 0x24 + lVar5 * 0x28) & 0x20) == 0) {
58: if (uVar12 < param_2) {
61: else {
66: while (lVar5 + param_2 <= uVar12) {
68: if ((*pcVar9 == *param_1) && (iVar3 = memcmp(pcVar9,param_1,param_2), iVar3 == 0)) {
71: if ((lVar5 == 0) || (pcVar9[-1] == '\0')) goto LAB_18011bc7d;
74: else {
83: else {
88: LAB_18011bc7d:
89: if (pcVar9 == (char *)0x0) {
90: return (char *)0x0;
93: while (lVar5 + 4U <= uVar16) {
94: if (pcVar17 + (longlong)*(int *)(pcVar17 + lVar5) + 4 + lVar5 == pcVar9) {
96: if ((*pcVar7 == 'H') && (pcVar17[lVar5 + -2] == -0x73)) goto LAB_18011bcd3;
99: else {
104: LAB_18011bcd3:
105: if (pcVar7 == (char *)0x0) {
106: return (char *)0x0;
109: if (param_3 == 1) {
110: while ((pcVar18 = pcVar9, pcVar17 < pcVar18 &&
113: if (pcVar18[-1] == -0x34) {
114: return pcVar18;
117: return (char *)0x0;
121: return pcVar17;
124: return (char *)0x0;)F18011bac0F",
    R"F18011bac0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18011bc7d.
TODO: recover the declaration, type and value for global/data reference LAB_18011bcd3.)F18011bac0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011bac0() noexcept {
    return kFunction_0x18011bac0;
}

// 0x18011bd60 FUN_18011bd60
// source: re/dump/decompile/0x18011bd60_FUN_18011bd60.c
// size: 757 bytes; thunk: false
// body sha256: 98d9966281b1f49822da29986a3ae4a7ba762d0a700a9d5b797d3df5c0e1ea0c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011bd60{
    "0x18011bd60",
    "FUN_18011bd60",
    R"F18011bd60S(undefined FUN_18011bd60())F18011bd60S",
    R"B18011bd60(// 0x18011bd60  FUN_18011bd60
// size=757 thunk=false
// signature: undefined FUN_18011bd60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18011bd60(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 *puVar3;
  char cVar4;
  void **ppvVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  void *_Memory;
  undefined8 ****_Memory_00;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined8 ***local_68;
  undefined8 **ppuStack_60;
  undefined8 **local_58;
  undefined8 **ppuStack_50;
  void *local_48;
  void *pvStack_40;
  void *local_38;
  void *pvStack_30;
  ulonglong local_28;
  
  puVar9 = auStack_c8;
  puVar10 = auStack_c8;
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  uVar7 = 0;
  puVar3 = auStack_c8;
  if (((param_1 != 0) && (puVar3 = auStack_c8, DAT_180423709 != '\0')) &&
     (plVar1 = *(longlong **)(param_1 + 0x78), puVar3 = auStack_c8, plVar1 != (longlong *)0x0)) {
    ppuStack_60 = (undefined8 ***)0x0;
    local_58 = (undefined8 ***)0x0;
    ppuStack_50 = (undefined8 ***)0xf;
    local_68 = (undefined8 ****)0x0;
    pvStack_40 = (void *)0x0;
    local_38 = (void *)0x0;
    pvStack_30 = (void *)0xf;
    local_48 = (void *)0x0;
    AcquireSRWLockShared((PSRWLOCK)&DAT_180423720);
    puVar8 = &DAT_1803e9b58;
    if (0xf < DAT_1803e9b70) {
      puVar8 = DAT_1803e9b58;
    }
    FUN_180212700(&local_68,puVar8,DAT_1803e9b68);
    puVar8 = &DAT_1803e9b78;
    if (0xf < DAT_1803e9b90) {
      puVar8 = DAT_1803e9b78;
    }
    FUN_180212700(&local_48,puVar8,DAT_1803e9b88);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180423720);
    if (local_38 != (void *)0x0) {
      ppvVar5 = (void **)FUN_18011b680(local_a8,&local_48);
      puVar10 = auStack_c8;
      if (&local_48 != ppvVar5) {
        if ((void *)0xf < pvStack_30) {
          _Memory = local_48;
          puVar9 = auStack_c8;
          if ((0xfff < (longlong)pvStack_30 + 1U) &&
             (_Memory = *(void **)((longlong)local_48 + -8), puVar9 = auStack_c8,
             0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)_Memory)))) {
            _Memory = (void *)0x5;
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)();
            puVar9 = auStack_c0;
          }
          *(undefined8 *)(puVar9 + -8) = 0x18011bebf;
          free(_Memory);
        }
        local_48 = *ppvVar5;
        pvStack_40 = ppvVar5[1];
        local_38 = ppvVar5[2];
        pvStack_30 = ppvVar5[3];
        ppvVar5[2] = (void *)0x0;
        ppvVar5[3] = (void *)0xf;
        *(undefined1 *)ppvVar5 = 0;
        puVar10 = puVar9;
      }
      *(undefined8 *)(puVar10 + -8) = 0x18011bef6;
      FUN_18020e450(local_a8);
      *(undefined8 *)(puVar10 + -8) = 0x18011bf03;
      ppppuVar6 = (undefined8 ****)FUN_18011ae40(local_88,&local_48);
      if (&local_68 != ppppuVar6) {
        if ((undefined8 ***)0xf < ppuStack_50) {
          _Memory_00 = (undefined8 ****)local_68;
          if ((0xfff < (longlong)ppuStack_50 + 1U) &&
             (_Memory_00 = (undefined8 ****)local_68[-1],
             0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)_Memory_00)))) {
            _Memory_00 = (undefined8 ****)0x5;
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)();
            puVar10 = puVar10 + 8;
          }
          *(undefined8 *)(puVar10 + -8) = 0x18011bf52;
          free(_Memory_00);
        }
        local_68 = *ppppuVar6;
        ppuStack_60 = ppppuVar6[1];
        local_58 = ppppuVar6[2];
        ppuStack_50 = ppppuVar6[3];
        ppppuVar6[2] = (undefined8 ***)0x0;
        ppppuVar6[3] = (undefined8 ***)0xf;
        *(undefined1 *)ppppuVar6 = 0;
      }
      *(undefined8 *)(puVar10 + -8) = 0x18011bf89;
      FUN_18020e450(local_88);
    }
    if ((undefined8 ***)local_58 != (undefined8 ***)0x0) {
      if (local_38 != (void *)0x0) {
        *(undefined8 *)(puVar10 + -8) = 0x18011bfa2;
        cVar4 = FUN_18011b190(&local_48);
        if (cVar4 == '\0') goto LAB_18011c008;
      }
      ppppuVar6 = &local_68;
      if ((undefined8 ***)0xf < ppuStack_50) {
        ppppuVar6 = (undefined8 ****)local_68;
      }
      *(undefined8 *)(puVar10 + -8) = 0x18011bfc0;
      FUN_180014410("[LOADURL] default loading page -> %s\n",ppppuVar6);
      pcVar2 = *(code **)(*plVar1 + 400);
      *(undefined8 *)(puVar10 + -8) = 0x18011bfcf;
      (*pcVar2)(plVar1,param_1);
      ppppuVar6 = &local_68;
      if ((undefined8 ***)0xf < ppuStack_50) {
        ppppuVar6 = (undefined8 ****)local_68;
      }
      pcVar2 = *(code **)(*plVar1 + 0xe8);
      *(undefined8 *)(puVar10 + -8) = 0x18011bfed;
      (*pcVar2)(plVar1,ppppuVar6,(ulonglong)local_58 & 0xffffffff);
      *(undefined8 *)(puVar10 + -8) = 0x18011bff7;
      FUN_18020e450(&local_48);
      *(undefined8 *)(puVar10 + -8) = 0x18011c001;
      FUN_18020e450(&local_68);
      uVar7 = 1;
      goto LAB_18011c031;
    }
LAB_18011c008:
    *(undefined8 *)(puVar10 + -8) = 0x18011c011;
    FUN_18020e450(&local_48);
    *(undefined8 *)(puVar10 + -8) = 0x18011c01b;
    FUN_18020e450(&local_68);
    puVar3 = puVar10;
  }
  puVar10 = puVar3;
  if (DAT_180423730 != (code *)0x0) {
    *(undefined8 *)(puVar10 + -8) = 0x18011c02c;
    uVar7 = (*DAT_180423730)(param_1);
  }
LAB_18011c031:
  *(undefined8 *)(puVar10 + -8) = 0x18011c03d;
  return uVar7;
}


)B18011bd60",
    "98d9966281b1f49822da29986a3ae4a7ba762d0a700a9d5b797d3df5c0e1ea0c",
    R"F18011bd60C(FUN_180014410
FUN_18011ae40
FUN_18011b190
FUN_18011b680
FUN_18020e450
FUN_180212700)F18011bd60C",
    R"F18011bd60D(LAB_18011c008
LAB_18011c031
DAT_1803da4c0
DAT_1803e9b58
DAT_1803e9b68
DAT_1803e9b70
DAT_1803e9b78
DAT_1803e9b88
DAT_1803e9b90
DAT_180423709
DAT_180423720
DAT_180423730)F18011bd60D",
    R"F18011bd60T("[LOADURL] default loading page -> %s\\n")F18011bd60T",
    R"F18011bd60F(44: if (((param_1 != 0) && (puVar3 = auStack_c8, DAT_180423709 != '\0')) &&
56: if (0xf < DAT_1803e9b70) {
61: if (0xf < DAT_1803e9b90) {
66: if (local_38 != (void *)0x0) {
69: if (&local_48 != ppvVar5) {
70: if ((void *)0xf < pvStack_30) {
73: if ((0xfff < (longlong)pvStack_30 + 1U) &&
97: if (&local_68 != ppppuVar6) {
98: if ((undefined8 ***)0xf < ppuStack_50) {
100: if ((0xfff < (longlong)ppuStack_50 + 1U) &&
122: if ((undefined8 ***)local_58 != (undefined8 ***)0x0) {
123: if (local_38 != (void *)0x0) {
126: if (cVar4 == '\0') goto LAB_18011c008;
129: if ((undefined8 ***)0xf < ppuStack_50) {
138: if ((undefined8 ***)0xf < ppuStack_50) {
149: goto LAB_18011c031;
151: LAB_18011c008:
159: if (DAT_180423730 != (code *)0x0) {
163: LAB_18011c031:
165: return uVar7;)F18011bd60F",
    R"F18011bd60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18011c008.
TODO: recover the declaration, type and value for global/data reference LAB_18011c031.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b58.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b68.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b70.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b78.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b88.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b90.
TODO: recover the declaration, type and value for global/data reference DAT_180423709.
TODO: recover the declaration, type and value for global/data reference DAT_180423720.
TODO: recover the declaration, type and value for global/data reference DAT_180423730.
TODO: resolve the indirect call in body 77: pcVar2 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 78: (*pcVar2)();.
TODO: resolve the indirect call in body 104: pcVar2 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 105: (*pcVar2)();.
TODO: resolve the indirect call in body 134: pcVar2 = *(code **)(*plVar1 + 400);.
TODO: resolve the indirect call in body 136: (*pcVar2)(plVar1,param_1);.
TODO: resolve the indirect call in body 141: pcVar2 = *(code **)(*plVar1 + 0xe8);.
TODO: resolve the indirect call in body 143: (*pcVar2)(plVar1,ppppuVar6,(ulonglong)local_58 & 0xffffffff);.
TODO: resolve the indirect call in body 159: if (DAT_180423730 != (code *)0x0) {.
TODO: resolve the indirect call in body 161: uVar7 = (*DAT_180423730)(param_1);.)F18011bd60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011bd60() noexcept {
    return kFunction_0x18011bd60;
}

// 0x18011c060 FUN_18011c060
// source: re/dump/decompile/0x18011c060_FUN_18011c060.c
// size: 1066 bytes; thunk: false
// body sha256: ce630b29b752b84085155b07fe4e4cdc9d918d714559fa404f96e59115c0705e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011c060{
    "0x18011c060",
    "FUN_18011c060",
    R"F18011c060S(undefined FUN_18011c060())F18011c060S",
    R"B18011c060(// 0x18011c060  FUN_18011c060
// size=1066 thunk=false
// signature: undefined FUN_18011c060()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011c060(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  int param_5,undefined4 param_6,undefined8 param_7)

{
  code *pcVar1;
  char cVar2;
  size_t sVar3;
  void **ppvVar4;
  undefined8 ****ppppuVar5;
  void *_Memory;
  undefined8 ****_Memory_00;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uStack_380;
  undefined1 auStack_378 [8];
  undefined1 auStack_370 [24];
  int local_358 [4];
  undefined8 local_348 [2];
  undefined1 local_338 [64];
  void *local_2f8;
  void *pvStack_2f0;
  void *local_2e8;
  void *pvStack_2e0;
  undefined8 ***local_2d8;
  undefined8 **ppuStack_2d0;
  undefined8 **local_2c8;
  undefined8 **ppuStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  char local_268 [528];
  ulonglong local_58;
  
  puVar7 = auStack_378;
  puVar8 = auStack_378;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_378;
  puVar9 = auStack_378;
  if (DAT_180423710 == (code *)0x0) goto LAB_18011c467;
  local_268[0] = '\0';
  if (DAT_180423709 != '\0') {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180423720);
    cVar2 = FUN_18011a830(&DAT_1803e9b58);
    if ((cVar2 != '\0') && (DAT_1803e9b68 < 0x208)) {
      puVar6 = &DAT_1803e9b58;
      if (0xf < DAT_1803e9b70) {
        puVar6 = DAT_1803e9b58;
      }
      memcpy(local_268,puVar6,DAT_1803e9b68 + 1);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180423720);
      if (DAT_180423728 != '\0') {
        local_2b8 = 0;
        uStack_2b0 = 0;
        local_2a8 = 0;
        uStack_2a0 = 0;
        local_298 = 0;
        uStack_290 = 0;
        local_288 = 0;
        uStack_280 = 0;
        local_278 = 0;
        uStack_270 = 0;
        FUN_18011b4a0(&local_2b8);
        puVar7 = &DAT_18033e5ea;
        if (param_3 != (undefined1 *)0x0) {
          puVar7 = param_3;
        }
        FUN_180014410("[LOADURL] serverurl \'%s\' suppressed (our page is already up), address \'%s\'\n"
                      ,puVar7,&local_2b8);
        local_348[0] = param_7;
        local_358[2] = param_6;
        local_358[0] = param_5;
        (*DAT_180423710)(param_1,param_2,&local_2b8,param_4);
        puVar9 = auStack_378;
        goto LAB_18011c467;
      }
      pvStack_2f0 = (void *)0x0;
      local_2e8 = (void *)0x0;
      pvStack_2e0 = (void *)0xf;
      local_2f8 = (void *)0x0;
      local_2d8 = (undefined8 ****)0x0;
      ppuStack_2d0 = (undefined8 ***)0x0;
      local_2c8 = (undefined8 ***)0x0;
      ppuStack_2c0 = (undefined8 ***)0x0;
      sVar3 = strlen(local_268);
      FUN_18001d080(&local_2d8,local_268,sVar3);
      AcquireSRWLockShared((PSRWLOCK)&DAT_180423720);
      puVar6 = &DAT_1803e9b78;
      if (0xf < DAT_1803e9b90) {
        puVar6 = DAT_1803e9b78;
      }
      FUN_180212700(&local_2f8,puVar6,DAT_1803e9b88);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180423720);
      if (local_2e8 == (void *)0x0) {
LAB_18011c395:
        if (param_5 < 2) {
          param_5 = 2;
        }
        ppppuVar5 = &local_2d8;
        if ((undefined8 ***)0xf < ppuStack_2c0) {
          ppppuVar5 = (undefined8 ****)local_2d8;
        }
        puVar7 = &DAT_18033e5ea;
        if (param_3 != (undefined1 *)0x0) {
          puVar7 = param_3;
        }
        *(undefined8 *)(puVar8 + -8) = 0x18011c3cd;
        FUN_180014410("[LOADURL] serverurl \'%s\' -> \'%s\'\n",puVar7,ppppuVar5);
        ppppuVar5 = &local_2d8;
        if ((undefined8 ***)0xf < ppuStack_2c0) {
          ppppuVar5 = (undefined8 ****)local_2d8;
        }
        *(undefined8 *)(puVar8 + 0x30) = param_7;
        *(undefined4 *)(puVar8 + 0x28) = param_6;
        *(int *)(puVar8 + 0x20) = param_5;
        *(undefined8 *)(puVar8 + -8) = 0x18011c401;
        (*DAT_180423710)(param_1,param_2,ppppuVar5,param_4);
      }
      else {
        ppvVar4 = (void **)FUN_18011b680(local_338,&local_2f8);
        puVar8 = auStack_378;
        if (&local_2f8 != ppvVar4) {
          if ((void *)0xf < pvStack_2e0) {
            _Memory = local_2f8;
            puVar7 = auStack_378;
            if ((0xfff < (longlong)pvStack_2e0 + 1U) &&
               (_Memory = *(void **)((longlong)local_2f8 + -8), puVar7 = auStack_378,
               0x1f < (ulonglong)((longlong)local_2f8 + (-8 - (longlong)_Memory)))) {
              _Memory = (void *)0x5;
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)();
              puVar7 = auStack_370;
            }
            *(undefined8 *)(puVar7 + -8) = 0x18011c28a;
            free(_Memory);
          }
          local_2f8 = *ppvVar4;
          pvStack_2f0 = ppvVar4[1];
          local_2e8 = ppvVar4[2];
          pvStack_2e0 = ppvVar4[3];
          ppvVar4[2] = (void *)0x0;
          ppvVar4[3] = (void *)0xf;
          *(undefined1 *)ppvVar4 = 0;
          puVar8 = puVar7;
        }
        *(undefined8 *)(puVar8 + -8) = 0x18011c2c2;
        FUN_18020e450(puVar8 + 0x40);
        *(undefined8 *)(puVar8 + -8) = 0x18011c2d0;
        ppppuVar5 = (undefined8 ****)FUN_18011ae40(puVar8 + 0x60,&local_2f8);
        if (&local_2d8 != ppppuVar5) {
          if ((undefined8 ***)0xf < ppuStack_2c0) {
            _Memory_00 = (undefined8 ****)local_2d8;
            if ((0xfff < (longlong)ppuStack_2c0 + 1U) &&
               (_Memory_00 = (undefined8 ****)local_2d8[-1],
               0x1f < (ulonglong)((longlong)local_2d8 + (-8 - (longlong)_Memory_00)))) {
              _Memory_00 = (undefined8 ****)0x5;
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)();
              puVar8 = puVar8 + 8;
            }
            *(undefined8 *)(puVar8 + -8) = 0x18011c31f;
            free(_Memory_00);
          }
          local_2d8 = *ppppuVar5;
          ppuStack_2d0 = ppppuVar5[1];
          local_2c8 = ppppuVar5[2];
          ppuStack_2c0 = ppppuVar5[3];
          ppppuVar5[2] = (undefined8 ***)0x0;
          ppppuVar5[3] = (undefined8 ***)0xf;
          *(undefined1 *)ppppuVar5 = 0;
        }
        *(undefined8 *)(puVar8 + -8) = 0x18011c357;
        FUN_18020e450(puVar8 + 0x60);
        *(undefined8 *)(puVar8 + -8) = 0x18011c360;
        cVar2 = FUN_18011b190(&local_2f8);
        if (cVar2 != '\0') goto LAB_18011c395;
        *(undefined8 *)(puVar8 + 0x30) = param_7;
        *(undefined4 *)(puVar8 + 0x28) = param_6;
        *(int *)(puVar8 + 0x20) = param_5;
        *(undefined8 *)(puVar8 + -8) = 0x18011c393;
        (*DAT_180423710)(param_1,param_2,&DAT_18033e5ea,param_4);
      }
      *(undefined8 *)(puVar8 + -8) = 0x18011c40b;
      FUN_18020e450(&local_2d8);
      *(undefined8 *)(puVar8 + -8) = 0x18011c415;
      FUN_18020e450(&local_2f8);
      puVar9 = puVar8;
      goto LAB_18011c467;
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180423720);
  }
  if (DAT_180423709 != '\0') {
    param_3 = &DAT_18033e5ea;
  }
  local_348[0] = param_7;
  local_358[2] = param_6;
  local_358[0] = param_5;
  (*DAT_180423710)(param_1,param_2,param_3,param_4);
  puVar9 = auStack_378;
LAB_18011c467:
  *(undefined8 *)(puVar9 + -8) = 0x18011c476;
  return;
}


)B18011c060",
    "ce630b29b752b84085155b07fe4e4cdc9d918d714559fa404f96e59115c0705e",
    R"F18011c060C(FUN_180014410
FUN_18001d080
FUN_18011a830
FUN_18011ae40
FUN_18011b190
FUN_18011b4a0
FUN_18011b680
FUN_18020e450
FUN_180212700)F18011c060C",
    R"F18011c060D(LAB_18011c395
LAB_18011c467
DAT_18033e5ea
DAT_1803da4c0
DAT_1803e9b58
DAT_1803e9b68
DAT_1803e9b70
DAT_1803e9b78
DAT_1803e9b88
DAT_1803e9b90
DAT_180423709
DAT_180423710
DAT_180423720
DAT_180423728)F18011c060D",
    R"F18011c060T("[LOADURL] serverurl \\'%s\\' -> \\'%s\\'\\n"
"[LOADURL] serverurl \\'%s\\' suppressed (our page is already up), address \\'%s\\'\\n")F18011c060T",
    R"F18011c060F(55: if (DAT_180423710 == (code *)0x0) goto LAB_18011c467;
57: if (DAT_180423709 != '\0') {
60: if ((cVar2 != '\0') && (DAT_1803e9b68 < 0x208)) {
62: if (0xf < DAT_1803e9b70) {
67: if (DAT_180423728 != '\0') {
80: if (param_3 != (undefined1 *)0x0) {
90: goto LAB_18011c467;
104: if (0xf < DAT_1803e9b90) {
109: if (local_2e8 == (void *)0x0) {
110: LAB_18011c395:
111: if (param_5 < 2) {
115: if ((undefined8 ***)0xf < ppuStack_2c0) {
119: if (param_3 != (undefined1 *)0x0) {
125: if ((undefined8 ***)0xf < ppuStack_2c0) {
134: else {
137: if (&local_2f8 != ppvVar4) {
138: if ((void *)0xf < pvStack_2e0) {
141: if ((0xfff < (longlong)pvStack_2e0 + 1U) &&
165: if (&local_2d8 != ppppuVar5) {
166: if ((undefined8 ***)0xf < ppuStack_2c0) {
168: if ((0xfff < (longlong)ppuStack_2c0 + 1U) &&
191: if (cVar2 != '\0') goto LAB_18011c395;
203: goto LAB_18011c467;
207: if (DAT_180423709 != '\0') {
215: LAB_18011c467:
217: return;)F18011c060F",
    R"F18011c060U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18011c395.
TODO: recover the declaration, type and value for global/data reference LAB_18011c467.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b58.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b68.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b70.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b78.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b88.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b90.
TODO: recover the declaration, type and value for global/data reference DAT_180423709.
TODO: recover the declaration, type and value for global/data reference DAT_180423710.
TODO: recover the declaration, type and value for global/data reference DAT_180423720.
TODO: recover the declaration, type and value for global/data reference DAT_180423728.
TODO: resolve the indirect call in body 55: if (DAT_180423710 == (code *)0x0) goto LAB_18011c467;.
TODO: resolve the indirect call in body 88: (*DAT_180423710)(param_1,param_2,&local_2b8,param_4);.
TODO: resolve the indirect call in body 132: (*DAT_180423710)(param_1,param_2,ppppuVar5,param_4);.
TODO: resolve the indirect call in body 145: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 146: (*pcVar1)();.
TODO: resolve the indirect call in body 172: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 173: (*pcVar1)();.
TODO: resolve the indirect call in body 196: (*DAT_180423710)(param_1,param_2,&DAT_18033e5ea,param_4);.
TODO: resolve the indirect call in body 213: (*DAT_180423710)(param_1,param_2,param_3,param_4);.)F18011c060U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011c060() noexcept {
    return kFunction_0x18011c060;
}

// 0x18011c490 FUN_18011c490
// source: re/dump/decompile/0x18011c490_FUN_18011c490.c
// size: 625 bytes; thunk: false
// body sha256: 3cc2747e544b29095870177ec2000b0d52facb59c71e6787fcb7c6e84245b65c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011c490{
    "0x18011c490",
    "FUN_18011c490",
    R"F18011c490S(undefined FUN_18011c490())F18011c490S",
    R"B18011c490(// 0x18011c490  FUN_18011c490
// size=625 thunk=false
// signature: undefined FUN_18011c490()
// status: ok


undefined8 FUN_18011c490(void)

{
  int iVar1;
  HMODULE pHVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (((DAT_180423738 == '\0') && (DAT_180423719 == '\0')) ||
     ((DAT_180423728 == '\0' && (DAT_180423718 == '\0')))) {
    pHVar2 = GetModuleHandleA("menusystem.dll");
    if (pHVar2 == (HMODULE)0x0) {
      return 0;
    }
    if ((DAT_180423738 == '\0') && (DAT_180423719 == '\0')) {
      lVar3 = FUN_18011bac0("GameDetails",0xc,0);
      if (lVar3 == 0) {
        DAT_180423719 = '\x01';
        FUN_180014410("[LOADURL] CMenuSystem::GameDetails not found - falling back to menu Lua\n");
      }
      else {
        iVar1 = FUN_180242fc0(lVar3,FUN_18011c060,&DAT_180423710);
        if (iVar1 == 0) {
          iVar1 = FUN_180243560(lVar3,1);
          if (iVar1 == 0) {
            DAT_180423738 = '\x01';
            pHVar2 = GetModuleHandleA("menusystem.dll");
            FUN_180014410("[LOADURL] hooked CMenuSystem::GameDetails @ %p (menusystem.dll+0x%llX)\n"
                          ,lVar3,lVar3 - (longlong)pHVar2);
          }
          else {
            FUN_180243300(lVar3);
            DAT_180423710 = 0;
            DAT_180423719 = '\x01';
            uVar4 = FUN_1802436b0(iVar1);
            FUN_180014410("[LOADURL] MH_EnableHook failed: %s\n",uVar4);
          }
        }
        else {
          DAT_180423719 = '\x01';
          uVar4 = FUN_1802436b0(iVar1);
          FUN_180014410("[LOADURL] MH_CreateHook failed: %s\n",uVar4);
        }
      }
    }
    if ((DAT_180423728 == '\0') && (DAT_180423718 == '\0')) {
      lVar3 = FUN_18011bac0("asset://garrysmod/html/loading.html",0x24,1);
      if (lVar3 == 0) {
        DAT_180423718 = '\x01';
        FUN_180014410(
                     "[LOADURL] GetDefaultLoadingHTML not found - only servers that set a URL can be replaced\n"
                     );
      }
      else {
        iVar1 = FUN_180242fc0(lVar3,FUN_18011bd60,&DAT_180423730);
        if (iVar1 == 0) {
          iVar1 = FUN_180243560(lVar3,1);
          if (iVar1 == 0) {
            DAT_180423728 = '\x01';
            pHVar2 = GetModuleHandleA("menusystem.dll");
            FUN_180014410("[LOADURL] hooked GetDefaultLoadingHTML @ %p (menusystem.dll+0x%llX)\n",
                          lVar3,lVar3 - (longlong)pHVar2);
          }
          else {
            FUN_180243300(lVar3);
            DAT_180423730 = 0;
            DAT_180423718 = '\x01';
            uVar4 = FUN_1802436b0(iVar1);
            FUN_180014410("[LOADURL] default page MH_EnableHook failed: %s\n",uVar4);
          }
        }
        else {
          DAT_180423718 = '\x01';
          uVar4 = FUN_1802436b0(iVar1);
          FUN_180014410("[LOADURL] default page MH_CreateHook failed: %s\n",uVar4);
        }
      }
    }
  }
  if ((DAT_180423738 == '\0') && (DAT_180423728 == '\0')) {
    DAT_180423738 = 0;
    return 0;
  }
  return 1;
}


)B18011c490",
    "3cc2747e544b29095870177ec2000b0d52facb59c71e6787fcb7c6e84245b65c",
    R"F18011c490C(FUN_180014410
FUN_18011bac0
FUN_18011bd60
FUN_18011c060
FUN_180242fc0
FUN_180243300
FUN_180243560
FUN_1802436b0)F18011c490C",
    R"F18011c490D(DAT_180423710
DAT_180423718
DAT_180423719
DAT_180423728
DAT_180423730
DAT_180423738)F18011c490D",
    R"F18011c490T("GameDetails"
"menusystem.dll"
"asset://garrysmod/html/loading.html"
"[LOADURL] MH_CreateHook failed: %s\\n"
"[LOADURL] MH_EnableHook failed: %s\\n"
"[LOADURL] default page MH_CreateHook failed: %s\\n"
"[LOADURL] default page MH_EnableHook failed: %s\\n"
"[LOADURL] hooked GetDefaultLoadingHTML @ %p (menusystem.dll+0x%llX)\\n"
"[LOADURL] hooked CMenuSystem::GameDetails @ %p (menusystem.dll+0x%llX)\\n"
"[LOADURL] CMenuSystem::GameDetails not found - falling back to menu Lua\\n"
"[LOADURL] GetDefaultLoadingHTML not found - only servers that set a URL can be replaced\\n")F18011c490T",
    R"F18011c490F(15: if (((DAT_180423738 == '\0') && (DAT_180423719 == '\0')) ||
18: if (pHVar2 == (HMODULE)0x0) {
19: return 0;
21: if ((DAT_180423738 == '\0') && (DAT_180423719 == '\0')) {
23: if (lVar3 == 0) {
27: else {
29: if (iVar1 == 0) {
31: if (iVar1 == 0) {
37: else {
45: else {
52: if ((DAT_180423728 == '\0') && (DAT_180423718 == '\0')) {
54: if (lVar3 == 0) {
60: else {
62: if (iVar1 == 0) {
64: if (iVar1 == 0) {
70: else {
78: else {
86: if ((DAT_180423738 == '\0') && (DAT_180423728 == '\0')) {
88: return 0;
90: return 1;)F18011c490F",
    R"F18011c490U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180423710.
TODO: recover the declaration, type and value for global/data reference DAT_180423718.
TODO: recover the declaration, type and value for global/data reference DAT_180423719.
TODO: recover the declaration, type and value for global/data reference DAT_180423728.
TODO: recover the declaration, type and value for global/data reference DAT_180423730.
TODO: recover the declaration, type and value for global/data reference DAT_180423738.)F18011c490U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011c490() noexcept {
    return kFunction_0x18011c490;
}

// 0x18011c710 FUN_18011c710
// source: re/dump/decompile/0x18011c710_FUN_18011c710.c
// size: 391 bytes; thunk: false
// body sha256: af1f441fe927449a7823de4be3203079e8f828b1ebe88e5550040df363ddc0dc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011c710{
    "0x18011c710",
    "FUN_18011c710",
    R"F18011c710S(undefined FUN_18011c710())F18011c710S",
    R"B18011c710(// 0x18011c710  FUN_18011c710
// size=391 thunk=false
// signature: undefined FUN_18011c710()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_18011c710(longlong *param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  size_t sVar5;
  longlong lVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  longlong *local_20;
  char local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_28 = 1;
  lVar6 = *(longlong *)(param_2 + 0x10);
  local_20 = param_1;
  if ((ulonglong)param_1[3] < lVar6 + 8U) {
    lVar2 = param_1[2];
    FUN_18021aa80(param_1,(lVar6 + 8U) - lVar2);
    param_1[2] = lVar2;
    lVar6 = *(longlong *)(param_2 + 0x10);
  }
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(byte **)param_2;
  }
  pbVar8 = param_2 + lVar6;
  do {
    if (param_2 == pbVar8) {
      return param_1;
    }
    bVar1 = *param_2;
    if (bVar1 == 10) {
      pcVar7 = "\\n";
LAB_18011c85d:
      sVar5 = 2;
LAB_18011c863:
      FUN_18021aef0(param_1,pcVar7,sVar5);
    }
    else {
      if (bVar1 == 0xd) {
        pcVar7 = "\\r";
        goto LAB_18011c85d;
      }
      if (bVar1 == 0x22) {
        pcVar7 = "\\\"";
        goto LAB_18011c85d;
      }
      if (bVar1 == 0x5c) {
        pcVar7 = "\\\\";
        goto LAB_18011c85d;
      }
      if ((bVar1 < 0x20) || (bVar1 == 0x7f)) {
        FUN_180012ac0(local_18,8,"\\%03u",bVar1);
        sVar5 = strlen(local_18);
        pcVar7 = local_18;
        goto LAB_18011c863;
      }
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      if (uVar3 < uVar4) {
        param_1[2] = uVar3 + 1;
        if (uVar4 < 0x10) {
          *(byte *)(uVar3 + (longlong)param_1) = bVar1;
          *(undefined1 *)(uVar3 + 1 + (longlong)param_1) = 0;
        }
        else {
          lVar6 = *param_1;
          *(byte *)(uVar3 + lVar6) = bVar1;
          *(undefined1 *)(uVar3 + 1 + lVar6) = 0;
        }
      }
      else {
        FUN_18021abd0(param_1,uVar3,uVar4,bVar1);
      }
    }
    param_2 = param_2 + 1;
  } while( true );
}


)B18011c710",
    "af1f441fe927449a7823de4be3203079e8f828b1ebe88e5550040df363ddc0dc",
    R"F18011c710C(FUN_180012ac0
FUN_18021aa80
FUN_18021abd0
FUN_18021aef0)F18011c710C",
    R"F18011c710D(LAB_18011c85d
LAB_18011c863
DAT_1803da4c0)F18011c710D",
    R"F18011c710T("\\\\n"
"\\\\r"
"\\\\\\\""
"\\\\\\\\"
"\\\\%03u")F18011c710T",
    R"F18011c710F(35: if ((ulonglong)param_1[3] < lVar6 + 8U) {
41: if (0xf < *(ulonglong *)(param_2 + 0x18)) {
45: do {
46: if (param_2 == pbVar8) {
47: return param_1;
50: if (bVar1 == 10) {
52: LAB_18011c85d:
54: LAB_18011c863:
57: else {
58: if (bVar1 == 0xd) {
60: goto LAB_18011c85d;
62: if (bVar1 == 0x22) {
64: goto LAB_18011c85d;
66: if (bVar1 == 0x5c) {
68: goto LAB_18011c85d;
70: if ((bVar1 < 0x20) || (bVar1 == 0x7f)) {
74: goto LAB_18011c863;
78: if (uVar3 < uVar4) {
80: if (uVar4 < 0x10) {
84: else {
90: else {)F18011c710F",
    R"F18011c710U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18011c85d.
TODO: recover the declaration, type and value for global/data reference LAB_18011c863.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18011c710U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011c710() noexcept {
    return kFunction_0x18011c710;
}

// 0x18011c8a0 FUN_18011c8a0
// source: re/dump/decompile/0x18011c8a0_FUN_18011c8a0.c
// size: 63 bytes; thunk: false
// body sha256: 17a845a2b25cbb37ace511ca05b8a8825d1ddd9a383bc1a6b2107bae66465049
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011c8a0{
    "0x18011c8a0",
    "FUN_18011c8a0",
    R"F18011c8a0S(undefined FUN_18011c8a0())F18011c8a0S",
    R"B18011c8a0(// 0x18011c8a0  FUN_18011c8a0
// size=63 thunk=false
// signature: undefined FUN_18011c8a0()
// status: ok


bool FUN_18011c8a0(void)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = FUN_180016fb0("cl_enable_loadingurl");
  if (lVar1 != 0) {
    fVar2 = (float)FUN_180019700(lVar1);
    return fVar2 != 0.0;
  }
  return true;
}


)B18011c8a0",
    "17a845a2b25cbb37ace511ca05b8a8825d1ddd9a383bc1a6b2107bae66465049",
    R"F18011c8a0C(FUN_180016fb0
FUN_180019700)F18011c8a0C",
    R"F18011c8a0D()F18011c8a0D",
    R"F18011c8a0T("cl_enable_loadingurl")F18011c8a0T",
    R"F18011c8a0F(14: if (lVar1 != 0) {
16: return fVar2 != 0.0;
18: return true;)F18011c8a0F",
    R"F18011c8a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18011c8a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011c8a0() noexcept {
    return kFunction_0x18011c8a0;
}

// 0x18011c8f0 FUN_18011c8f0
// source: re/dump/decompile/0x18011c8f0_FUN_18011c8f0.c
// size: 380 bytes; thunk: false
// body sha256: a06b90b9cd27063be12c5f2156b2da37526cfefa95727cfa8e4aa8905cfd6616
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011c8f0{
    "0x18011c8f0",
    "FUN_18011c8f0",
    R"F18011c8f0S(undefined FUN_18011c8f0())F18011c8f0S",
    R"B18011c8f0(// 0x18011c8f0  FUN_18011c8f0
// size=380 thunk=false
// signature: undefined FUN_18011c8f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18011c8f0(longlong param_1)

{
  int iVar1;
  char *pcVar2;
  longlong *plVar3;
  byte bVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  ulonglong local_20;
  ulonglong local_18;
  char *local_10;
  
  pcVar2 = (char *)(DAT_1803da4c0 ^ (ulonglong)auStack_68);
  if ((param_1 != 0) && (DAT_1803fa600 != (longlong *)0x0)) {
    local_18 = 0x93fd561a96ab0c67;
    local_20 = 0x1477d415bd0ac6ae;
    local_10 = pcVar2;
    plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_18);
    plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_30,&local_20);
    pcVar2 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
    if (*pcVar2 != '\0') {
      local_18 = 0x93fd561a96ab0c67;
      local_20 = 0xcf94b2d417ed594d;
      plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_30,&local_18);
      plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_40,&local_20);
      pcVar2 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
      if (*pcVar2 != '\0') {
        bVar4 = 0;
        pcVar2 = (char *)(**(code **)(*DAT_1803fa600 + 0x120))(DAT_1803fa600,param_1);
        if (((pcVar2 != (char *)0x0) && (*pcVar2 == 'L')) &&
           (iVar1 = strcmp(pcVar2,"LoadingDialog"), iVar1 == 0)) {
          local_20 = local_20 & 0xffffffff00000000;
          local_18 = local_18 & 0xffffffff00000000;
          (**(code **)(*DAT_1803fa600 + 0x28))(DAT_1803fa600,param_1,&local_20,&local_18);
          if ((((int)local_20 < 1) || ((int)local_18 < 1)) || ((int)local_20 <= (int)local_18 * 2))
          {
            bVar4 = 0;
          }
          else {
            bVar4 = 1;
          }
        }
        return (ulonglong)bVar4;
      }
    }
  }
  return (ulonglong)pcVar2 & 0xffffffffffffff00;
}


)B18011c8f0",
    "a06b90b9cd27063be12c5f2156b2da37526cfefa95727cfa8e4aa8905cfd6616",
    R"F18011c8f0C(FUN_1801fcfc0
FUN_180241a30)F18011c8f0C",
    R"F18011c8f0D(DAT_1803da4c0
DAT_1803fa600
DAT_1803fadf0)F18011c8f0D",
    R"F18011c8f0T("LoadingDialog")F18011c8f0T",
    R"F18011c8f0F(24: if ((param_1 != 0) && (DAT_1803fa600 != (longlong *)0x0)) {
31: if (*pcVar2 != '\0') {
37: if (*pcVar2 != '\0') {
40: if (((pcVar2 != (char *)0x0) && (*pcVar2 == 'L')) &&
45: if ((((int)local_20 < 1) || ((int)local_18 < 1)) || ((int)local_20 <= (int)local_18 * 2))
49: else {
53: return (ulonglong)bVar4;
57: return (ulonglong)pcVar2 & 0xffffffffffffff00;)F18011c8f0F",
    R"F18011c8f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa600.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: resolve the indirect call in body 39: pcVar2 = (char *)(**(code **)(*DAT_1803fa600 + 0x120))(DAT_1803fa600,param_1);.
TODO: resolve the indirect call in body 44: (**(code **)(*DAT_1803fa600 + 0x28))(DAT_1803fa600,param_1,&local_20,&local_18);.)F18011c8f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011c8f0() noexcept {
    return kFunction_0x18011c8f0;
}

// 0x18011ca80 Features_LoadingUrl_LoadingUrlFeature_vfunc01
// source: re/dump/decompile/0x18011ca80_Features_LoadingUrl_LoadingUrlFeature_vfunc01.c
// size: 5 bytes; thunk: true
// body sha256: 2e43b199219d5b587905fa44002dc8998ed525b0798129b88fcee8fd34a69ce7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011ca80{
    "0x18011ca80",
    "Features_LoadingUrl_LoadingUrlFeature_vfunc01",
    R"F18011ca80S(undefined Features_LoadingUrl_LoadingUrlFeature_vfunc01())F18011ca80S",
    R"B18011ca80(// 0x18011ca80  Features_LoadingUrl_LoadingUrlFeature_vfunc01
// size=5 thunk=true
// signature: undefined Features_LoadingUrl_LoadingUrlFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_LoadingUrl_LoadingUrlFeature_vfunc01(longlong param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  ULONGLONG UVar13;
  undefined8 uVar14;
  size_t sVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 ***pppuVar19;
  undefined8 ****ppppuVar20;
  longlong lVar21;
  int *piVar22;
  undefined8 *****pppppuVar23;
  undefined8 *puVar24;
  char *pcVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  uint uVar29;
  undefined8 uStack_150;
  undefined1 auStack_148 [32];
  char *pcStack_128;
  char *pcStack_120;
  undefined8 *puStack_118;
  char cStack_108;
  undefined4 uStack_104;
  int aiStack_100 [2];
  undefined1 auStack_f8 [32];
  undefined8 **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ULONGLONG UStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined8 auStack_68 [2];
  ulonglong uStack_58;
  
  puVar26 = auStack_148;
  puVar27 = auStack_148;
  uStack_58 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  uStack_104 = 0;
  FUN_18011c490();
  lVar21 = DAT_180423700;
  if (*(char *)(param_1 + 0x90) == '\0') {
    *(undefined1 *)(param_1 + 0x90) = 1;
LAB_18011cfc5:
    FUN_18011afa0();
  }
  else if ((DAT_180423708 != '\0') &&
          ((UVar13 = GetTickCount64(), 4999 < UVar13 - lVar21 ||
           ((DAT_1803fa668 != (longlong *)0x0 &&
            (cVar4 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar4 != '\0')))))) goto LAB_18011cfc5;
  UStack_b8 = 0x93fd561a96ab0c67;
  plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_68,&UStack_b8);
  uStack_90 = 0x1477d415bd0ac6ae;
  plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,auStack_f8,&uStack_90);
  pcVar9 = (char *)FUN_1801fcfc0(*plVar8 + 0x28);
  cVar4 = *pcVar9;
  aiStack_100[1] = 2;
  aiStack_100[0] = 0;
  UStack_b8 = 0x93fd561a96ab0c67;
  plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_f8,&UStack_b8);
  uStack_90 = 0x1fba2029bab6b64c;
  plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,auStack_68,&uStack_90);
  piVar10 = (int *)FUN_1802029c0(*plVar8 + 0x28);
  piVar22 = aiStack_100;
  if (-1 < *piVar10) {
    piVar22 = piVar10;
  }
  piVar11 = aiStack_100 + 1;
  if (*piVar10 < 3) {
    piVar11 = piVar22;
  }
  iVar7 = *piVar11;
  uStack_90 = CONCAT44(uStack_90._4_4_,iVar7);
  UStack_b8 = 0x93fd561a96ab0c67;
  plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_f8,&UStack_b8);
  auStack_68[0] = 0xcf92fdbe588d8af4;
  plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,&pppuStack_b0,auStack_68);
  pcVar12 = (char *)FUN_1802028c0(*plVar8 + 0x28);
  auStack_68[0] = 0x93fd561a96ab0c67;
  plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&pppuStack_b0,auStack_68);
  UStack_b8 = 0xdf2349e24f8aaf7d;
  FUN_180241a30(*plVar8 + 0x28,auStack_f8,&UStack_b8);
  pcVar9 = (char *)FUN_1802028c0();
  UVar13 = GetTickCount64();
  UStack_b8 = UVar13;
  if (((*(char *)(param_1 + 8) == '\0') || (cVar4 != *(char *)(param_1 + 10))) ||
     (iVar7 != *(int *)(param_1 + 0xc))) {
LAB_18011d1be:
    cStack_108 = '\x01';
  }
  else {
    puVar24 = (undefined8 *)(param_1 + 0x10);
    if (0xf < *(ulonglong *)(param_1 + 0x28)) {
      puVar24 = (undefined8 *)*puVar24;
    }
    sVar15 = *(size_t *)(pcVar12 + 0x10);
    pcVar25 = pcVar12;
    if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
      pcVar25 = *(char **)pcVar12;
    }
    if ((sVar15 != *(size_t *)(param_1 + 0x20)) ||
       ((sVar15 != 0 && (iVar6 = memcmp(pcVar25,puVar24,sVar15), iVar6 != 0)))) goto LAB_18011d1be;
    puVar24 = (undefined8 *)(param_1 + 0x30);
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      puVar24 = (undefined8 *)*puVar24;
    }
    sVar15 = *(size_t *)(pcVar9 + 0x10);
    pcVar25 = pcVar9;
    if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
      pcVar25 = *(char **)pcVar9;
    }
    if ((sVar15 != *(size_t *)(param_1 + 0x40)) ||
       ((sVar15 != 0 && (iVar6 = memcmp(pcVar25,puVar24,sVar15), iVar6 != 0)))) goto LAB_18011d1be;
    cStack_108 = '\0';
  }
  if ((DAT_180423738 != '\0') || (DAT_180423728 != '\0')) {
    if ((*(char *)(param_1 + 0x92) == '\0') || (UVar13 < *(ulonglong *)(param_1 + 0x98))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((cStack_108 != '\0') || (puVar28 = auStack_148, bVar2)) {
      puVar24 = (undefined8 *)(param_1 + 0x70);
      pcStack_128 = pcVar12;
      pcStack_120 = pcVar9;
      puStack_118 = puVar24;
      uVar14 = FUN_18011cb30(param_1,&pppuStack_b0,cVar4);
      puVar16 = (undefined8 *)(param_1 + 0x50);
      FUN_18020e8a0(puVar16,uVar14);
      FUN_18020e450(&pppuStack_b0);
      if (*(char *)(param_1 + 0x92) == '\0') {
        lVar21 = 0;
      }
      else {
        lVar21 = UStack_b8 + 3000;
      }
      *(longlong *)(param_1 + 0x98) = lVar21;
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_180423720);
      if (puVar16 != &DAT_1803e9b58) {
        if (0xf < *(ulonglong *)(param_1 + 0x68)) {
          puVar16 = (undefined8 *)*puVar16;
        }
        FUN_180212700(&DAT_1803e9b58,puVar16,*(undefined8 *)(param_1 + 0x60));
      }
      if (puVar24 != &DAT_1803e9b78) {
        if (0xf < *(ulonglong *)(param_1 + 0x88)) {
          puVar24 = (undefined8 *)*puVar24;
        }
        FUN_180212700(&DAT_1803e9b78,puVar24,*(undefined8 *)(param_1 + 0x80));
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180423720);
      DAT_180423709 = cVar4;
      *(undefined1 *)(param_1 + 8) = 1;
      *(char *)(param_1 + 10) = cVar4;
      *(int *)(param_1 + 0xc) = iVar7;
      if ((char *)(param_1 + 0x10) != pcVar12) {
        pcVar25 = pcVar12 + 0x10;
        if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
          pcVar12 = *(char **)pcVar12;
        }
        FUN_180212700((char *)(param_1 + 0x10),pcVar12,*(undefined8 *)pcVar25);
      }
      if ((char *)(param_1 + 0x30) != pcVar9) {
        pcVar12 = pcVar9;
        if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
          pcVar12 = *(char **)pcVar9;
        }
        FUN_180212700((char *)(param_1 + 0x30),pcVar12,*(undefined8 *)(pcVar9 + 0x10));
      }
      pcStack_120 = "native hook";
      if (DAT_180423728 != '\0') {
        pcStack_120 = "native, every connect";
      }
      pcStack_128 = pcVar9;
      FUN_18011d930(param_1,cVar4,iVar7,param_1 + 0x50);
      puVar28 = auStack_148;
      if (cStack_108 != '\0') {
        puVar24 = &DAT_1803e9b38;
        if (0xf < DAT_1803e9b50) {
          puVar24 = DAT_1803e9b38;
        }
        FUN_180014410("[LOADURL] %s\n",puVar24);
        puVar28 = auStack_148;
      }
    }
    goto LAB_18011d903;
  }
  if (cVar4 == '\0') {
    if (*(char *)(param_1 + 9) == '\0') {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_1 + 10) = 0;
      *(int *)(param_1 + 0xc) = iVar7;
      if ((char *)(param_1 + 0x10) != pcVar12) {
        pcVar25 = pcVar12 + 0x10;
        if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
          pcVar12 = *(char **)pcVar12;
        }
        FUN_180212700((char *)(param_1 + 0x10),pcVar12,*(undefined8 *)pcVar25);
      }
      puVar28 = auStack_148;
      if ((char *)(param_1 + 0x30) != pcVar9) {
        pcVar12 = pcVar9 + 0x10;
        if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
          pcVar9 = *(char **)pcVar9;
        }
        FUN_180212700((char *)(param_1 + 0x30),pcVar9,*(undefined8 *)pcVar12);
        puVar28 = auStack_148;
      }
      goto LAB_18011d903;
    }
LAB_18011d24f:
    bVar2 = false;
  }
  else {
    if ((*(char *)(param_1 + 9) == '\0') || (UVar13 < *(ulonglong *)(param_1 + 0xa0)))
    goto LAB_18011d24f;
    bVar2 = true;
  }
  if (cStack_108 == '\0') {
    puVar28 = auStack_148;
    if (!bVar2) goto LAB_18011d903;
  }
  else {
    puVar28 = auStack_148;
    if (UVar13 < *(ulonglong *)(param_1 + 0x98)) goto LAB_18011d903;
    puStack_118 = (undefined8 *)(param_1 + 0x70);
    pcStack_128 = pcVar12;
    pcStack_120 = pcVar9;
    uVar14 = FUN_18011cb30(param_1,&pppuStack_b0,cVar4);
    FUN_18020e8a0(param_1 + 0x50,uVar14);
    FUN_18020e450(&pppuStack_b0);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_18011b680(&pppuStack_b0,param_1 + 0x70);
    uVar14 = FUN_18011ae40(auStack_f8,&pppuStack_b0);
    FUN_18020e8a0(param_1 + 0x50,uVar14);
    FUN_18020e450(auStack_f8);
    FUN_18011b190(&pppuStack_b0);
    FUN_18020e450(&pppuStack_b0);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0xf;
  ppppuStack_88 = (undefined8 *****)0x0;
  pppuStack_a8 = (undefined8 ****)0x0;
  uStack_a0 = 0;
  uStack_98 = 0xf;
  pppuStack_b0 = (undefined8 ****)0x0;
  uStack_104 = 4;
  FUN_18021aef0(&pppuStack_b0,"local K = \"",0xb);
  FUN_18021aef0(&pppuStack_b0,"__gm_loadscreen",0xf);
  FUN_18021aef0(&pppuStack_b0,&DAT_18035732c,2);
  FUN_18021aef0(&pppuStack_b0,"local ST = rawget(_G, K)\n",0x19);
  FUN_18021aef0(&pppuStack_b0,"if type(ST) ~= \"table\" then ST = {} rawset(_G, K, ST) end\n",0x3a);
  FUN_18021aef0(&pppuStack_b0,"ST.on = ",8);
  pcVar25 = "false";
  if (cVar4 != '\0') {
    pcVar25 = "true";
  }
  sVar15 = strlen(pcVar25);
  FUN_18021aef0(&pppuStack_b0,pcVar25,sVar15);
  FUN_18021aef0(&pppuStack_b0,&DAT_18033e92c,1);
  FUN_18021aef0(&pppuStack_b0,"ST.url = \"",10);
  puVar16 = (undefined8 *)FUN_18011c710(auStack_f8,param_1 + 0x50);
  puVar24 = puVar16 + 2;
  if (0xf < (ulonglong)puVar16[3]) {
    puVar16 = (undefined8 *)*puVar16;
  }
  FUN_18021aef0(&pppuStack_b0,puVar16,*puVar24);
  FUN_18020e450(auStack_f8);
  FUN_18021aef0(&pppuStack_b0,&DAT_18035732c,2);
  FUN_18021aef0(&pppuStack_b0,
                "if type(GameDetails) == \"function\" and GameDetails ~= ST.wrap then\n\tST.orig = GameDetails\n\tST.wrap = function(servername, serverurl, mapname, maxplayers, ...)\n\t\tif ST.on then\n\t\t\tlocal u = ST.url\n\t\t\tif type(u) == \"string\" and #u >= 5 then\n\t\t\t\tlocal openable = (u:sub(1, 4) == \"http\" or u:sub(1, 8) == \"asset://\")\n\t\t\t\tlocal mp = tonumber(maxplayers) or 0\n\t\t\t\tlocal cv = GetConVar and GetConVar(\"cl_enable_loadingurl\")\n\t\t\t\tif openable and mp > 1 and cv and cv:GetBool() then\n\t\t\t\t\tserverurl = u\n\t\t\t\telse\n\t\t\t\t\tpcall(function()\n\t\t\t\t\t\tlocal pnl = GetLoadPanel and GetLoadPanel()\n\t\t\t\t\t\tif pnl and IsValid(pnl) then pnl:ShowURL(u, true) end\n\t\t\t\t\tend)\n\t\t\t\t\tserverurl = \"\"\n\t\t\t\tend\n\t\t\telse\n\t\t\t\tserverurl = \"\"\n\t\t\tend\n\t\tend\n\t\treturn ST.orig(servername, serverurl, mapname, maxplayers, ...)\n\tend\n\tGameDetails = ST.wrap\nend\nif type(ST.wrap) ~= \"function\" then return \"GameDetails not found\" end\nreturn \"ok\"\n"
                ,0x37b);
  cVar5 = FUN_1800f0630(2,&pppuStack_b0,&ppppuStack_88);
  uStack_104 = 0;
  FUN_18020e450(&pppuStack_b0);
  uVar3 = uStack_78;
  *(ULONGLONG *)(param_1 + 0xa0) = UStack_b8 + 15000;
  if (cVar5 == '\0') {
LAB_18011d5b5:
    *(ULONGLONG *)(param_1 + 0x98) = UStack_b8 + 2000;
    DAT_180423742 = 1;
    ppppuVar20 = (undefined8 ****)0x0;
    if (uVar3 == 0) {
      ppuStack_d8 = (undefined8 ***)0x0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      FUN_18001d080(&ppuStack_d8,"menu Lua state is not ready",0x1b);
      ppppuVar20 = (undefined8 ****)&ppuStack_d8;
      uVar29 = 1;
      puVar27 = auStack_148;
    }
    else {
      pppuStack_b0 = (undefined8 ***)0x0;
      pppuStack_a8 = (undefined8 ****)0x0;
      uStack_a0 = 0;
      uStack_98 = 0;
      pppppuVar23 = &ppppuStack_88;
      if (0xf < uStack_70) {
        pppppuVar23 = (undefined8 *****)ppppuStack_88;
      }
      if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      if (uVar3 < 0x10) {
        uStack_a0 = uVar3;
        uStack_98 = 0xf;
        pppuStack_b0 = *pppppuVar23;
        pppuStack_a8 = pppppuVar23[1];
        puVar26 = auStack_148;
      }
      else {
        uVar17 = uVar3 | 0xf;
        if (uVar17 < 0x8000000000000000) goto LAB_18011d67c;
        uVar18 = 0x8000000000000027;
        uVar17 = 0x7fffffffffffffff;
        puVar26 = auStack_148;
        while( true ) {
          *(undefined8 *)(puVar26 + -8) = 0x18011d66d;
          pppuVar19 = (undefined8 ***)FUN_1802d8350(uVar18);
          if (pppuVar19 != (undefined8 ***)0x0) break;
          pcVar1 = (code *)swi(0x29);
          uVar17 = (*pcVar1)(5);
          puVar26 = puVar26 + 8;
LAB_18011d67c:
          if (uVar17 < 0x16) {
            uVar17 = 0x16;
          }
          if (uVar17 == 0xffffffffffffffff) goto LAB_18011d6c4;
          if (uVar17 + 1 < 0x1000) {
            *(undefined8 *)(puVar26 + -8) = 0x18011d6c4;
            ppppuVar20 = (undefined8 ****)FUN_1802d8350();
            goto LAB_18011d6c4;
          }
          uVar18 = uVar17 + 0x28;
          if (uVar18 <= uVar17 + 1) {
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar26 + -8) = &UNK_18011d92e;
            FUN_180012fe0();
          }
        }
        ppppuVar20 = (undefined8 ****)((longlong)pppuVar19 + 0x27U & 0xffffffffffffffe0);
        ppppuVar20[-1] = pppuVar19;
LAB_18011d6c4:
        uStack_a0 = uVar3;
        pppuStack_b0 = ppppuVar20;
        uStack_98 = uVar17;
        *(undefined8 *)(puVar26 + -8) = 0x18011d6df;
        memcpy(ppppuVar20,pppppuVar23,uVar3 + 1);
      }
      ppppuVar20 = &pppuStack_b0;
      uVar29 = 2;
      puVar27 = puVar26;
    }
    *(uint *)(puVar27 + 0x44) = uVar29;
    *(undefined8 *)(puVar27 + -8) = 0x18011d6fb;
    FUN_18020e8a0(&DAT_1803e9b38,ppppuVar20);
    if ((uVar29 & 2) != 0) {
      uVar29 = uVar29 & 0xfffffffd;
      *(uint *)(puVar27 + 0x44) = uVar29;
      *(undefined8 *)(puVar27 + -8) = 0x18011d714;
      FUN_18020e450(&pppuStack_b0);
    }
    if ((uVar29 & 1) != 0) {
      *(uint *)(puVar27 + 0x44) = uVar29 & 0xfffffffe;
      *(undefined8 *)(puVar27 + -8) = 0x18011d72e;
      FUN_18020e450(puVar27 + 0x70);
    }
    if (*(char *)(param_1 + 0xa8) == '\0') {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      puVar24 = &DAT_1803e9b38;
      if (0xf < DAT_1803e9b50) {
        puVar24 = DAT_1803e9b38;
      }
      pcVar9 = "[LOADURL] apply failed: %s\n";
LAB_18011d758:
      *(undefined8 *)(puVar27 + -8) = 0x18011d75d;
      FUN_180014410(pcVar9,puVar24);
    }
  }
  else {
    pppppuVar23 = &ppppuStack_88;
    if (0xf < uStack_70) {
      pppppuVar23 = (undefined8 *****)ppppuStack_88;
    }
    if ((uStack_78 != 2) ||
       (iVar7 = memcmp(pppppuVar23,&DAT_18034a240,2), uVar17 = uStack_90, iVar7 != 0))
    goto LAB_18011d5b5;
    *(undefined2 *)(param_1 + 8) = 0x101;
    *(char *)(param_1 + 10) = cVar4;
    *(undefined4 *)(param_1 + 0xc) = (undefined4)uStack_90;
    if ((char *)(param_1 + 0x10) != pcVar12) {
      pcVar25 = pcVar12 + 0x10;
      if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
        pcVar12 = *(char **)pcVar12;
      }
      FUN_180212700((char *)(param_1 + 0x10),pcVar12,*(undefined8 *)pcVar25);
    }
    if ((char *)(param_1 + 0x30) != pcVar9) {
      pcVar12 = pcVar9;
      if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
        pcVar12 = *(char **)pcVar9;
      }
      FUN_180212700((char *)(param_1 + 0x30),pcVar12,*(undefined8 *)(pcVar9 + 0x10));
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0xa8) = 0;
    pcStack_120 = "menu Lua";
    pcStack_128 = pcVar9;
    FUN_18011d930(param_1,cVar4,uVar17 & 0xffffffff,param_1 + 0x50);
    if (cStack_108 != '\0') {
      puVar24 = &DAT_1803e9b38;
      if (0xf < DAT_1803e9b50) {
        puVar24 = DAT_1803e9b38;
      }
      pcVar9 = "[LOADURL] %s\n";
      puVar27 = auStack_148;
      goto LAB_18011d758;
    }
  }
  *(undefined8 *)(puVar27 + -8) = 0x18011d767;
  FUN_18020e450(&ppppuStack_88);
  puVar28 = puVar27;
LAB_18011d903:
  *(undefined8 *)(puVar28 + -8) = 0x18011d90f;
  return;
}


)B18011ca80",
    "2e43b199219d5b587905fa44002dc8998ed525b0798129b88fcee8fd34a69ce7",
    R"F18011ca80C(FUN_180012fe0
FUN_1800130a0
FUN_180014410
FUN_18001d080
FUN_1800f0630
FUN_18011ae40
FUN_18011afa0
FUN_18011b190
FUN_18011b680
FUN_18011c490
FUN_18011c710
FUN_18011cb30
FUN_18011d930
FUN_1801fcfc0
FUN_1802028c0
FUN_1802029c0
FUN_18020e450
FUN_18020e8a0
FUN_180212700
FUN_18021aef0
FUN_180241a30
FUN_1802d8350)F18011ca80C",
    R"F18011ca80D(LAB_18011cfc5
LAB_18011d1be
LAB_18011d24f
LAB_18011d5b5
LAB_18011d67c
LAB_18011d6c4
LAB_18011d758
LAB_18011d903
UNK_18011d92e
DAT_18033e92c
DAT_18034a240
DAT_18035732c
DAT_1803da4c0
DAT_1803e9b38
DAT_1803e9b50
DAT_1803e9b58
DAT_1803e9b78
DAT_1803fa668
DAT_1803fadf0
DAT_180423700
DAT_180423708
DAT_180423709
DAT_180423720
DAT_180423728
DAT_180423738
DAT_180423742)F18011ca80D",
    R"F18011ca80T("true"
"false"
"ST.on = "
"menu Lua"
"ST.url = \\\""
"native hook"
"local K = \\\""
"[LOADURL] %s\\n"
"__gm_loadscreen"
"native, every connect"
"local ST = rawget(_G, K)\\n"
"menu Lua state is not ready"
"[LOADURL] apply failed: %s\\n"
"if type(ST) ~= \\\"table\\\" then ST = {} rawset(_G, K, ST) end\\n"
"if type(GameDetails) == \\\"function\\\" and GameDetails ~= ST.wrap then\\n\\tST.orig = GameDetails\\n\\tST.wrap = function(servername, serverurl, mapname, maxplayers, ...)\\n\\t\\tif ST.on then\\n\\t\\t\\tlocal u = ST.url\\n\\t\\t\\tif type(u) == \\\"string\\\" and #u >= 5 then\\n\\t\\t\\t\\tlocal openable = (u:sub(1, 4) == \\\"http\\\" or u:sub(1, 8) == \\\"asset://\\\")\\n\\t\\t\\t\\tlocal mp = tonumber(maxplayers) or 0\\n\\t\\t\\t\\tlocal cv = GetConVar and GetConVar(\\\"cl_enable_loadingurl\\\")\\n\\t\\t\\t\\tif openable and mp > 1 and cv and cv:GetBool() then\\n\\t\\t\\t\\t\\tserverurl = u\\n\\t\\t\\t\\telse\\n\\t\\t\\t\\t\\tpcall(function()\\n\\t\\t\\t\\t\\t\\tlocal pnl = GetLoadPanel and GetLoadPanel()\\n\\t\\t\\t\\t\\t\\tif pnl and IsValid(pnl) then pnl:ShowURL(u, true) end\\n\\t\\t\\t\\t\\tend)\\n\\t\\t\\t\\t\\tserverurl = \\\"\\\"\\n\\t\\t\\t\\tend\\n\\t\\t\\telse\\n\\t\\t\\t\\tserverurl = \\\"\\\"\\n\\t\\t\\tend\\n\\t\\tend\\n\\t\\treturn ST.orig(servername, serverurl, mapname, maxplayers, ...)\\n\\tend\\n\\tGameDetails = ST.wrap\\nend\\nif type(ST.wrap) ~= \\\"function\\\" then return \\\"GameDetails not found\\\" end\\nreturn \\\"ok\\\"\\n")F18011ca80T",
    R"F18011ca80F(73: if (*(char *)(param_1 + 0x90) == '\0') {
75: LAB_18011cfc5:
78: else if ((DAT_180423708 != '\0') &&
96: if (-1 < *piVar10) {
100: if (*piVar10 < 3) {
117: if (((*(char *)(param_1 + 8) == '\0') || (cVar4 != *(char *)(param_1 + 10))) ||
119: LAB_18011d1be:
122: else {
124: if (0xf < *(ulonglong *)(param_1 + 0x28)) {
129: if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
132: if ((sVar15 != *(size_t *)(param_1 + 0x20)) ||
135: if (0xf < *(ulonglong *)(param_1 + 0x48)) {
140: if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
143: if ((sVar15 != *(size_t *)(param_1 + 0x40)) ||
147: if ((DAT_180423738 != '\0') || (DAT_180423728 != '\0')) {
148: if ((*(char *)(param_1 + 0x92) == '\0') || (UVar13 < *(ulonglong *)(param_1 + 0x98))) {
151: else {
154: if ((cStack_108 != '\0') || (puVar28 = auStack_148, bVar2)) {
163: if (*(char *)(param_1 + 0x92) == '\0') {
166: else {
171: if (puVar16 != &DAT_1803e9b58) {
172: if (0xf < *(ulonglong *)(param_1 + 0x68)) {
177: if (puVar24 != &DAT_1803e9b78) {
178: if (0xf < *(ulonglong *)(param_1 + 0x88)) {
188: if ((char *)(param_1 + 0x10) != pcVar12) {
190: if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
195: if ((char *)(param_1 + 0x30) != pcVar9) {
197: if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
203: if (DAT_180423728 != '\0') {
209: if (cStack_108 != '\0') {
211: if (0xf < DAT_1803e9b50) {
218: goto LAB_18011d903;
220: if (cVar4 == '\0') {
221: if (*(char *)(param_1 + 9) == '\0') {
225: if ((char *)(param_1 + 0x10) != pcVar12) {
227: if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
233: if ((char *)(param_1 + 0x30) != pcVar9) {
235: if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
241: goto LAB_18011d903;
243: LAB_18011d24f:
246: else {
247: if ((*(char *)(param_1 + 9) == '\0') || (UVar13 < *(ulonglong *)(param_1 + 0xa0)))
248: goto LAB_18011d24f;
251: if (cStack_108 == '\0') {
253: if (!bVar2) goto LAB_18011d903;
255: else {
257: if (UVar13 < *(ulonglong *)(param_1 + 0x98)) goto LAB_18011d903;
265: if (*(longlong *)(param_1 + 0x80) != 0) {
289: if (cVar4 != '\0') {
298: if (0xf < (ulonglong)puVar16[3]) {
312: if (cVar5 == '\0') {
313: LAB_18011d5b5:
317: if (uVar3 == 0) {
327: else {
333: if (0xf < uStack_70) {
336: if (0x7fffffffffffffff < uVar3) {
340: if (uVar3 < 0x10) {
347: else {
349: if (uVar17 < 0x8000000000000000) goto LAB_18011d67c;
353: while( true ) {
356: if (pppuVar19 != (undefined8 ***)0x0) break;
360: LAB_18011d67c:
361: if (uVar17 < 0x16) {
364: if (uVar17 == 0xffffffffffffffff) goto LAB_18011d6c4;
365: if (uVar17 + 1 < 0x1000) {
368: goto LAB_18011d6c4;
371: if (uVar18 <= uVar17 + 1) {
379: LAB_18011d6c4:
393: if ((uVar29 & 2) != 0) {
399: if ((uVar29 & 1) != 0) {
404: if (*(char *)(param_1 + 0xa8) == '\0') {
407: if (0xf < DAT_1803e9b50) {
411: LAB_18011d758:
416: else {
418: if (0xf < uStack_70) {
421: if ((uStack_78 != 2) ||
423: goto LAB_18011d5b5;
427: if ((char *)(param_1 + 0x10) != pcVar12) {
429: if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
434: if ((char *)(param_1 + 0x30) != pcVar9) {
436: if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
446: if (cStack_108 != '\0') {
448: if (0xf < DAT_1803e9b50) {
453: goto LAB_18011d758;
459: LAB_18011d903:
461: return;)F18011ca80F",
    R"F18011ca80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18011cfc5.
TODO: recover the declaration, type and value for global/data reference LAB_18011d1be.
TODO: recover the declaration, type and value for global/data reference LAB_18011d24f.
TODO: recover the declaration, type and value for global/data reference LAB_18011d5b5.
TODO: recover the declaration, type and value for global/data reference LAB_18011d67c.
TODO: recover the declaration, type and value for global/data reference LAB_18011d6c4.
TODO: recover the declaration, type and value for global/data reference LAB_18011d758.
TODO: recover the declaration, type and value for global/data reference LAB_18011d903.
TODO: recover the declaration, type and value for global/data reference UNK_18011d92e.
TODO: recover the declaration, type and value for global/data reference DAT_18033e92c.
TODO: recover the declaration, type and value for global/data reference DAT_18034a240.
TODO: recover the declaration, type and value for global/data reference DAT_18035732c.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b38.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b50.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b58.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b78.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_180423700.
TODO: recover the declaration, type and value for global/data reference DAT_180423708.
TODO: recover the declaration, type and value for global/data reference DAT_180423709.
TODO: recover the declaration, type and value for global/data reference DAT_180423720.
TODO: recover the declaration, type and value for global/data reference DAT_180423728.
TODO: recover the declaration, type and value for global/data reference DAT_180423738.
TODO: recover the declaration, type and value for global/data reference DAT_180423742.
TODO: resolve the indirect call in body 81: (cVar4 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar4 != '\0')))))) goto LAB_18011cfc5;.
TODO: resolve the indirect call in body 357: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 358: uVar17 = (*pcVar1)(5);.)F18011ca80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011ca80() noexcept {
    return kFunction_0x18011ca80;
}

// 0x18011ca90 Features_LoadingUrl_LoadingUrlFeature_vfunc04
// source: re/dump/decompile/0x18011ca90_Features_LoadingUrl_LoadingUrlFeature_vfunc04.c
// size: 153 bytes; thunk: false
// body sha256: caa17afb9b991711ed8a3b6f5d41b90af92cb8d29fad00b21ab78c0052d61a3e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011ca90{
    "0x18011ca90",
    "Features_LoadingUrl_LoadingUrlFeature_vfunc04",
    R"F18011ca90S(undefined Features_LoadingUrl_LoadingUrlFeature_vfunc04())F18011ca90S",
    R"B18011ca90(// 0x18011ca90  Features_LoadingUrl_LoadingUrlFeature_vfunc04
// size=153 thunk=false
// signature: undefined Features_LoadingUrl_LoadingUrlFeature_vfunc04()
// status: ok


void Features_LoadingUrl_LoadingUrlFeature_vfunc04(undefined8 param_1)

{
  char cVar1;
  HMODULE hModule;
  INT_PTR IVar2;
  
  if ((DAT_1803fa668 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar1 != '\0')) {
    return;
  }
  FUN_18011c490();
  if ((DAT_180423738 == '\0') && (DAT_180423728 == '\0')) {
    if (DAT_180425534 == '\0') {
      DAT_180425534 = '\x01';
      hModule = GetModuleHandleA("tier0.dll");
      if (hModule != (HMODULE)0x0) {
        DAT_1803fd108 = GetProcAddress(hModule,"ThreadInMainThread");
      }
    }
    if (DAT_1803fd108 == (FARPROC)0x0) {
      return;
    }
    IVar2 = (*DAT_1803fd108)();
    if ((char)IVar2 == '\0') {
      return;
    }
  }
  FUN_18011cf40(param_1);
  return;
}


)B18011ca90",
    "caa17afb9b991711ed8a3b6f5d41b90af92cb8d29fad00b21ab78c0052d61a3e",
    R"F18011ca90C(FUN_18011c490
FUN_18011cf40)F18011ca90C",
    R"F18011ca90D(DAT_1803fa668
DAT_1803fd108
DAT_180423728
DAT_180423738
DAT_180425534)F18011ca90D",
    R"F18011ca90T("tier0.dll"
"ThreadInMainThread")F18011ca90T",
    R"F18011ca90F(14: if ((DAT_1803fa668 != (longlong *)0x0) &&
16: return;
19: if ((DAT_180423738 == '\0') && (DAT_180423728 == '\0')) {
20: if (DAT_180425534 == '\0') {
23: if (hModule != (HMODULE)0x0) {
27: if (DAT_1803fd108 == (FARPROC)0x0) {
28: return;
31: if ((char)IVar2 == '\0') {
32: return;
36: return;)F18011ca90F",
    R"F18011ca90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fd108.
TODO: recover the declaration, type and value for global/data reference DAT_180423728.
TODO: recover the declaration, type and value for global/data reference DAT_180423738.
TODO: recover the declaration, type and value for global/data reference DAT_180425534.
TODO: resolve the indirect call in body 15: (cVar1 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar1 != '\0')) {.
TODO: resolve the indirect call in body 30: IVar2 = (*DAT_1803fd108)();.)F18011ca90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011ca90() noexcept {
    return kFunction_0x18011ca90;
}

// 0x18011cb30 FUN_18011cb30
// source: re/dump/decompile/0x18011cb30_FUN_18011cb30.c
// size: 1035 bytes; thunk: false
// body sha256: e9e32e08410a001c9476b10131605bb9baeda33d314f38307ca4c52ab01d3ea9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011cb30{
    "0x18011cb30",
    "FUN_18011cb30",
    R"F18011cb30S(undefined FUN_18011cb30())F18011cb30S",
    R"B18011cb30(// 0x18011cb30  FUN_18011cb30
// size=1035 thunk=false
// signature: undefined FUN_18011cb30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_18011cb30(longlong param_1,undefined8 *param_2,char param_3,int param_4,undefined8 param_5,
             undefined8 param_6,undefined8 *******param_7)

{
  bool bVar1;
  bool bVar2;
  BOOL BVar3;
  undefined8 *******pppppppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  LPCWSTR lpFileName;
  HANDLE hFile;
  longlong lVar8;
  undefined1 auStackY_128 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  DWORD local_98 [2];
  undefined8 ******local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  ulonglong local_78;
  LARGE_INTEGER local_70;
  undefined1 local_68 [16];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStackY_128;
  bVar2 = false;
  param_7[2] = (undefined8 ******)0x0;
  pppppppuVar4 = param_7;
  if ((undefined8 ******)0xf < param_7[3]) {
    pppppppuVar4 = (undefined8 *******)*param_7;
  }
  *(undefined1 *)pppppppuVar4 = 0;
  *(undefined2 *)(param_1 + 0x91) = 0;
  if (param_3 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_18001d080(param_2,&DAT_18033e5ea,0);
    return param_2;
  }
  if (param_4 == 2) {
    local_70.QuadPart = (LONGLONG)local_b8;
    uVar5 = FUN_18016d4c0(local_b8,param_5);
    FUN_18011a5c0(param_2,uVar5);
    if (param_2[2] == 0) {
      return param_2;
    }
    if (0x200 < (ulonglong)param_2[2]) {
      param_2[2] = 0x200;
      puVar6 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar6 = (undefined8 *)*param_2;
      }
      *(undefined1 *)(puVar6 + 0x40) = 0;
    }
    puVar6 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar6 = (undefined8 *)*param_2;
    }
    if (((2 < (ulonglong)param_2[2]) &&
        (lVar8 = param_2[2] + (longlong)puVar6,
        lVar7 = thunk_FUN_1802d6b60(puVar6,lVar8,&DAT_180351614,3), lVar7 != lVar8)) &&
       (lVar7 - (longlong)puVar6 != -1)) {
      return param_2;
    }
    if (7 < 0x7fffffffffffffff - param_2[2]) {
      FUN_18020e930(local_68);
      FUN_18020e8a0(param_2,local_68);
      FUN_18020e450(local_68);
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0xf;
  local_90 = (undefined8 *******)0x0;
  if (param_4 == 1) {
    local_70.QuadPart = (LONGLONG)local_d8;
    uVar5 = FUN_18016d4c0(local_d8,param_6);
    FUN_18011a5c0(local_68,uVar5);
    if (local_58 == 0) {
LAB_18011ce2d:
      bVar1 = true;
    }
    else {
      lpFileName = (LPCWSTR)FUN_18011a910(local_d8,local_68);
      bVar2 = true;
      if (7 < *(ulonglong *)(lpFileName + 0xc)) {
        lpFileName = *(LPCWSTR *)lpFileName;
      }
      hFile = CreateFileW(lpFileName,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      if (hFile == (HANDLE)0xffffffffffffffff) goto LAB_18011ce2d;
      local_70.QuadPart = 0;
      BVar3 = GetFileSizeEx(hFile,&local_70);
      if ((BVar3 == 0) || ((undefined1 *)0x1ffffff < (undefined1 *)(local_70.QuadPart - 1U))) {
        CloseHandle(hFile);
        goto LAB_18011ce2d;
      }
      FUN_18020e770(&local_90);
      local_98[0] = 0;
      pppppppuVar4 = &local_90;
      if (0xf < local_78) {
        pppppppuVar4 = (undefined8 *******)local_90;
      }
      BVar3 = ReadFile(hFile,pppppppuVar4,(DWORD)local_80,local_98,(LPOVERLAPPED)0x0);
      if ((BVar3 == 0) || (local_98[0] != local_80)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      CloseHandle(hFile);
      if (!bVar1) goto LAB_18011ce2d;
      bVar1 = false;
    }
    if (bVar2) {
      FUN_18021e290(local_d8);
    }
    if (bVar1) {
      FUN_180212700(&local_90,&DAT_180351640,0x584f);
    }
    FUN_18020e450(local_68);
  }
  else {
    FUN_180212700(&local_90,&DAT_180351640,0x584f);
  }
  if (local_80 < 0x80001) {
    lVar8 = FUN_18011aae0();
    if (*(longlong *)(lVar8 + 0x10) != 0) {
      if (param_7 != &local_90) {
        pppppppuVar4 = &local_90;
        if (0xf < local_78) {
          pppppppuVar4 = (undefined8 *******)local_90;
        }
        FUN_180212700(param_7,pppppppuVar4,local_80);
      }
      FUN_18011ae40(param_2,&local_90);
      goto LAB_18011cefc;
    }
    *(undefined1 *)(param_1 + 0x92) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x91) = 1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_18001d080(param_2,&DAT_18033e5ea,0);
LAB_18011cefc:
  FUN_18020e450(&local_90);
  return param_2;
}


)B18011cb30",
    "e9e32e08410a001c9476b10131605bb9baeda33d314f38307ca4c52ab01d3ea9",
    R"F18011cb30C(FUN_1800130a0
FUN_18001d080
FUN_18011a5c0
FUN_18011a910
FUN_18011aae0
FUN_18011ae40
FUN_18016d4c0
FUN_18020e450
FUN_18020e770
FUN_18020e8a0
FUN_18020e930
FUN_180212700
FUN_18021e290)F18011cb30C",
    R"F18011cb30D(LAB_18011ce2d
LAB_18011cefc
DAT_18033e5ea
DAT_180351614
DAT_180351640
DAT_1803da4c0)F18011cb30D",
    R"F18011cb30T()F18011cb30T",
    R"F18011cb30F(41: if ((undefined8 ******)0xf < param_7[3]) {
46: if (param_3 == '\0') {
52: return param_2;
54: if (param_4 == 2) {
58: if (param_2[2] == 0) {
59: return param_2;
61: if (0x200 < (ulonglong)param_2[2]) {
64: if (0xf < (ulonglong)param_2[3]) {
70: if (0xf < (ulonglong)param_2[3]) {
73: if (((2 < (ulonglong)param_2[2]) &&
77: return param_2;
79: if (7 < 0x7fffffffffffffff - param_2[2]) {
83: return param_2;
92: if (param_4 == 1) {
96: if (local_58 == 0) {
97: LAB_18011ce2d:
100: else {
103: if (7 < *(ulonglong *)(lpFileName + 0xc)) {
107: if (hFile == (HANDLE)0xffffffffffffffff) goto LAB_18011ce2d;
110: if ((BVar3 == 0) || ((undefined1 *)0x1ffffff < (undefined1 *)(local_70.QuadPart - 1U))) {
112: goto LAB_18011ce2d;
117: if (0xf < local_78) {
121: if ((BVar3 == 0) || (local_98[0] != local_80)) {
124: else {
128: if (!bVar1) goto LAB_18011ce2d;
131: if (bVar2) {
134: if (bVar1) {
139: else {
142: if (local_80 < 0x80001) {
144: if (*(longlong *)(lVar8 + 0x10) != 0) {
145: if (param_7 != &local_90) {
147: if (0xf < local_78) {
153: goto LAB_18011cefc;
157: else {
165: LAB_18011cefc:
167: return param_2;)F18011cb30F",
    R"F18011cb30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18011ce2d.
TODO: recover the declaration, type and value for global/data reference LAB_18011cefc.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_180351614.
TODO: recover the declaration, type and value for global/data reference DAT_180351640.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18011cb30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011cb30() noexcept {
    return kFunction_0x18011cb30;
}

// 0x18011cf40 FUN_18011cf40
// source: re/dump/decompile/0x18011cf40_FUN_18011cf40.c
// size: 2541 bytes; thunk: false
// body sha256: a46ab7f153f5909a03832dcefe12415a4615512c69429e8c641c2dfab1d766d1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011cf40{
    "0x18011cf40",
    "FUN_18011cf40",
    R"F18011cf40S(undefined FUN_18011cf40())F18011cf40S",
    R"B18011cf40(// 0x18011cf40  FUN_18011cf40
// size=2541 thunk=false
// signature: undefined FUN_18011cf40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011cf40(longlong param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  ULONGLONG UVar13;
  undefined8 uVar14;
  size_t sVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 ***pppuVar19;
  undefined8 ****ppppuVar20;
  longlong lVar21;
  int *piVar22;
  undefined8 *****pppppuVar23;
  undefined8 *puVar24;
  char *pcVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  uint uVar29;
  undefined8 uStack_150;
  undefined1 auStack_148 [32];
  char *local_128;
  char *local_120;
  undefined8 *local_118;
  char local_108;
  undefined4 local_104;
  int local_100 [2];
  undefined1 local_f8 [32];
  undefined8 **local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ULONGLONG local_b8;
  undefined8 ***local_b0;
  undefined8 ***pppuStack_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined8 ****local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_68 [2];
  ulonglong local_58;
  
  puVar26 = auStack_148;
  puVar27 = auStack_148;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  local_104 = 0;
  FUN_18011c490();
  lVar21 = DAT_180423700;
  if (*(char *)(param_1 + 0x90) == '\0') {
    *(undefined1 *)(param_1 + 0x90) = 1;
LAB_18011cfc5:
    FUN_18011afa0();
  }
  else if ((DAT_180423708 != '\0') &&
          ((UVar13 = GetTickCount64(), 4999 < UVar13 - lVar21 ||
           ((DAT_1803fa668 != (longlong *)0x0 &&
            (cVar4 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar4 != '\0')))))) goto LAB_18011cfc5;
  local_b8 = 0x93fd561a96ab0c67;
  plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_68,&local_b8);
  local_90 = 0x1477d415bd0ac6ae;
  plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,local_f8,&local_90);
  pcVar9 = (char *)FUN_1801fcfc0(*plVar8 + 0x28);
  cVar4 = *pcVar9;
  local_100[1] = 2;
  local_100[0] = 0;
  local_b8 = 0x93fd561a96ab0c67;
  plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_f8,&local_b8);
  local_90 = 0x1fba2029bab6b64c;
  plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,local_68,&local_90);
  piVar10 = (int *)FUN_1802029c0(*plVar8 + 0x28);
  piVar22 = local_100;
  if (-1 < *piVar10) {
    piVar22 = piVar10;
  }
  piVar11 = local_100 + 1;
  if (*piVar10 < 3) {
    piVar11 = piVar22;
  }
  iVar7 = *piVar11;
  local_90 = CONCAT44(local_90._4_4_,iVar7);
  local_b8 = 0x93fd561a96ab0c67;
  plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_f8,&local_b8);
  local_68[0] = 0xcf92fdbe588d8af4;
  plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,&local_b0,local_68);
  pcVar12 = (char *)FUN_1802028c0(*plVar8 + 0x28);
  local_68[0] = 0x93fd561a96ab0c67;
  plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_b0,local_68);
  local_b8 = 0xdf2349e24f8aaf7d;
  FUN_180241a30(*plVar8 + 0x28,local_f8,&local_b8);
  pcVar9 = (char *)FUN_1802028c0();
  UVar13 = GetTickCount64();
  local_b8 = UVar13;
  if (((*(char *)(param_1 + 8) == '\0') || (cVar4 != *(char *)(param_1 + 10))) ||
     (iVar7 != *(int *)(param_1 + 0xc))) {
LAB_18011d1be:
    local_108 = '\x01';
  }
  else {
    puVar24 = (undefined8 *)(param_1 + 0x10);
    if (0xf < *(ulonglong *)(param_1 + 0x28)) {
      puVar24 = (undefined8 *)*puVar24;
    }
    sVar15 = *(size_t *)(pcVar12 + 0x10);
    pcVar25 = pcVar12;
    if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
      pcVar25 = *(char **)pcVar12;
    }
    if ((sVar15 != *(size_t *)(param_1 + 0x20)) ||
       ((sVar15 != 0 && (iVar6 = memcmp(pcVar25,puVar24,sVar15), iVar6 != 0)))) goto LAB_18011d1be;
    puVar24 = (undefined8 *)(param_1 + 0x30);
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      puVar24 = (undefined8 *)*puVar24;
    }
    sVar15 = *(size_t *)(pcVar9 + 0x10);
    pcVar25 = pcVar9;
    if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
      pcVar25 = *(char **)pcVar9;
    }
    if ((sVar15 != *(size_t *)(param_1 + 0x40)) ||
       ((sVar15 != 0 && (iVar6 = memcmp(pcVar25,puVar24,sVar15), iVar6 != 0)))) goto LAB_18011d1be;
    local_108 = '\0';
  }
  if ((DAT_180423738 != '\0') || (DAT_180423728 != '\0')) {
    if ((*(char *)(param_1 + 0x92) == '\0') || (UVar13 < *(ulonglong *)(param_1 + 0x98))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((local_108 != '\0') || (puVar28 = auStack_148, bVar2)) {
      puVar24 = (undefined8 *)(param_1 + 0x70);
      local_128 = pcVar12;
      local_120 = pcVar9;
      local_118 = puVar24;
      uVar14 = FUN_18011cb30(param_1,&local_b0,cVar4);
      puVar16 = (undefined8 *)(param_1 + 0x50);
      FUN_18020e8a0(puVar16,uVar14);
      FUN_18020e450(&local_b0);
      if (*(char *)(param_1 + 0x92) == '\0') {
        lVar21 = 0;
      }
      else {
        lVar21 = local_b8 + 3000;
      }
      *(longlong *)(param_1 + 0x98) = lVar21;
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_180423720);
      if (puVar16 != &DAT_1803e9b58) {
        if (0xf < *(ulonglong *)(param_1 + 0x68)) {
          puVar16 = (undefined8 *)*puVar16;
        }
        FUN_180212700(&DAT_1803e9b58,puVar16,*(undefined8 *)(param_1 + 0x60));
      }
      if (puVar24 != &DAT_1803e9b78) {
        if (0xf < *(ulonglong *)(param_1 + 0x88)) {
          puVar24 = (undefined8 *)*puVar24;
        }
        FUN_180212700(&DAT_1803e9b78,puVar24,*(undefined8 *)(param_1 + 0x80));
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180423720);
      DAT_180423709 = cVar4;
      *(undefined1 *)(param_1 + 8) = 1;
      *(char *)(param_1 + 10) = cVar4;
      *(int *)(param_1 + 0xc) = iVar7;
      if ((char *)(param_1 + 0x10) != pcVar12) {
        pcVar25 = pcVar12 + 0x10;
        if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
          pcVar12 = *(char **)pcVar12;
        }
        FUN_180212700((char *)(param_1 + 0x10),pcVar12,*(undefined8 *)pcVar25);
      }
      if ((char *)(param_1 + 0x30) != pcVar9) {
        pcVar12 = pcVar9;
        if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
          pcVar12 = *(char **)pcVar9;
        }
        FUN_180212700((char *)(param_1 + 0x30),pcVar12,*(undefined8 *)(pcVar9 + 0x10));
      }
      local_120 = "native hook";
      if (DAT_180423728 != '\0') {
        local_120 = "native, every connect";
      }
      local_128 = pcVar9;
      FUN_18011d930(param_1,cVar4,iVar7,param_1 + 0x50);
      puVar28 = auStack_148;
      if (local_108 != '\0') {
        puVar24 = &DAT_1803e9b38;
        if (0xf < DAT_1803e9b50) {
          puVar24 = DAT_1803e9b38;
        }
        FUN_180014410("[LOADURL] %s\n",puVar24);
        puVar28 = auStack_148;
      }
    }
    goto LAB_18011d903;
  }
  if (cVar4 == '\0') {
    if (*(char *)(param_1 + 9) == '\0') {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_1 + 10) = 0;
      *(int *)(param_1 + 0xc) = iVar7;
      if ((char *)(param_1 + 0x10) != pcVar12) {
        pcVar25 = pcVar12 + 0x10;
        if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
          pcVar12 = *(char **)pcVar12;
        }
        FUN_180212700((char *)(param_1 + 0x10),pcVar12,*(undefined8 *)pcVar25);
      }
      puVar28 = auStack_148;
      if ((char *)(param_1 + 0x30) != pcVar9) {
        pcVar12 = pcVar9 + 0x10;
        if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
          pcVar9 = *(char **)pcVar9;
        }
        FUN_180212700((char *)(param_1 + 0x30),pcVar9,*(undefined8 *)pcVar12);
        puVar28 = auStack_148;
      }
      goto LAB_18011d903;
    }
LAB_18011d24f:
    bVar2 = false;
  }
  else {
    if ((*(char *)(param_1 + 9) == '\0') || (UVar13 < *(ulonglong *)(param_1 + 0xa0)))
    goto LAB_18011d24f;
    bVar2 = true;
  }
  if (local_108 == '\0') {
    puVar28 = auStack_148;
    if (!bVar2) goto LAB_18011d903;
  }
  else {
    puVar28 = auStack_148;
    if (UVar13 < *(ulonglong *)(param_1 + 0x98)) goto LAB_18011d903;
    local_118 = (undefined8 *)(param_1 + 0x70);
    local_128 = pcVar12;
    local_120 = pcVar9;
    uVar14 = FUN_18011cb30(param_1,&local_b0,cVar4);
    FUN_18020e8a0(param_1 + 0x50,uVar14);
    FUN_18020e450(&local_b0);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_18011b680(&local_b0,param_1 + 0x70);
    uVar14 = FUN_18011ae40(local_f8,&local_b0);
    FUN_18020e8a0(param_1 + 0x50,uVar14);
    FUN_18020e450(local_f8);
    FUN_18011b190(&local_b0);
    FUN_18020e450(&local_b0);
  }
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0xf;
  local_88 = (undefined8 *****)0x0;
  pppuStack_a8 = (undefined8 ****)0x0;
  local_a0 = 0;
  local_98 = 0xf;
  local_b0 = (undefined8 ****)0x0;
  local_104 = 4;
  FUN_18021aef0(&local_b0,"local K = \"",0xb);
  FUN_18021aef0(&local_b0,"__gm_loadscreen",0xf);
  FUN_18021aef0(&local_b0,&DAT_18035732c,2);
  FUN_18021aef0(&local_b0,"local ST = rawget(_G, K)\n",0x19);
  FUN_18021aef0(&local_b0,"if type(ST) ~= \"table\" then ST = {} rawset(_G, K, ST) end\n",0x3a);
  FUN_18021aef0(&local_b0,"ST.on = ",8);
  pcVar25 = "false";
  if (cVar4 != '\0') {
    pcVar25 = "true";
  }
  sVar15 = strlen(pcVar25);
  FUN_18021aef0(&local_b0,pcVar25,sVar15);
  FUN_18021aef0(&local_b0,&DAT_18033e92c,1);
  FUN_18021aef0(&local_b0,"ST.url = \"",10);
  puVar16 = (undefined8 *)FUN_18011c710(local_f8,param_1 + 0x50);
  puVar24 = puVar16 + 2;
  if (0xf < (ulonglong)puVar16[3]) {
    puVar16 = (undefined8 *)*puVar16;
  }
  FUN_18021aef0(&local_b0,puVar16,*puVar24);
  FUN_18020e450(local_f8);
  FUN_18021aef0(&local_b0,&DAT_18035732c,2);
  FUN_18021aef0(&local_b0,
                "if type(GameDetails) == \"function\" and GameDetails ~= ST.wrap then\n\tST.orig = GameDetails\n\tST.wrap = function(servername, serverurl, mapname, maxplayers, ...)\n\t\tif ST.on then\n\t\t\tlocal u = ST.url\n\t\t\tif type(u) == \"string\" and #u >= 5 then\n\t\t\t\tlocal openable = (u:sub(1, 4) == \"http\" or u:sub(1, 8) == \"asset://\")\n\t\t\t\tlocal mp = tonumber(maxplayers) or 0\n\t\t\t\tlocal cv = GetConVar and GetConVar(\"cl_enable_loadingurl\")\n\t\t\t\tif openable and mp > 1 and cv and cv:GetBool() then\n\t\t\t\t\tserverurl = u\n\t\t\t\telse\n\t\t\t\t\tpcall(function()\n\t\t\t\t\t\tlocal pnl = GetLoadPanel and GetLoadPanel()\n\t\t\t\t\t\tif pnl and IsValid(pnl) then pnl:ShowURL(u, true) end\n\t\t\t\t\tend)\n\t\t\t\t\tserverurl = \"\"\n\t\t\t\tend\n\t\t\telse\n\t\t\t\tserverurl = \"\"\n\t\t\tend\n\t\tend\n\t\treturn ST.orig(servername, serverurl, mapname, maxplayers, ...)\n\tend\n\tGameDetails = ST.wrap\nend\nif type(ST.wrap) ~= \"function\" then return \"GameDetails not found\" end\nreturn \"ok\"\n"
                ,0x37b);
  cVar5 = FUN_1800f0630(2,&local_b0,&local_88);
  local_104 = 0;
  FUN_18020e450(&local_b0);
  uVar3 = local_78;
  *(ULONGLONG *)(param_1 + 0xa0) = local_b8 + 15000;
  if (cVar5 == '\0') {
LAB_18011d5b5:
    *(ULONGLONG *)(param_1 + 0x98) = local_b8 + 2000;
    DAT_180423742 = 1;
    ppppuVar20 = (undefined8 ****)0x0;
    if (uVar3 == 0) {
      local_d8 = (undefined8 ***)0x0;
      uStack_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      FUN_18001d080(&local_d8,"menu Lua state is not ready",0x1b);
      ppppuVar20 = (undefined8 ****)&local_d8;
      uVar29 = 1;
      puVar27 = auStack_148;
    }
    else {
      local_b0 = (undefined8 ***)0x0;
      pppuStack_a8 = (undefined8 ****)0x0;
      local_a0 = 0;
      local_98 = 0;
      pppppuVar23 = &local_88;
      if (0xf < local_70) {
        pppppuVar23 = (undefined8 *****)local_88;
      }
      if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      if (uVar3 < 0x10) {
        local_a0 = uVar3;
        local_98 = 0xf;
        local_b0 = *pppppuVar23;
        pppuStack_a8 = pppppuVar23[1];
        puVar26 = auStack_148;
      }
      else {
        uVar17 = uVar3 | 0xf;
        if (uVar17 < 0x8000000000000000) goto LAB_18011d67c;
        uVar18 = 0x8000000000000027;
        uVar17 = 0x7fffffffffffffff;
        puVar26 = auStack_148;
        while( true ) {
          *(undefined8 *)(puVar26 + -8) = 0x18011d66d;
          pppuVar19 = (undefined8 ***)FUN_1802d8350(uVar18);
          if (pppuVar19 != (undefined8 ***)0x0) break;
          pcVar1 = (code *)swi(0x29);
          uVar17 = (*pcVar1)(5);
          puVar26 = puVar26 + 8;
LAB_18011d67c:
          if (uVar17 < 0x16) {
            uVar17 = 0x16;
          }
          if (uVar17 == 0xffffffffffffffff) goto LAB_18011d6c4;
          if (uVar17 + 1 < 0x1000) {
            *(undefined8 *)(puVar26 + -8) = 0x18011d6c4;
            ppppuVar20 = (undefined8 ****)FUN_1802d8350();
            goto LAB_18011d6c4;
          }
          uVar18 = uVar17 + 0x28;
          if (uVar18 <= uVar17 + 1) {
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar26 + -8) = &UNK_18011d92e;
            FUN_180012fe0();
          }
        }
        ppppuVar20 = (undefined8 ****)((longlong)pppuVar19 + 0x27U & 0xffffffffffffffe0);
        ppppuVar20[-1] = pppuVar19;
LAB_18011d6c4:
        local_a0 = uVar3;
        local_b0 = ppppuVar20;
        local_98 = uVar17;
        *(undefined8 *)(puVar26 + -8) = 0x18011d6df;
        memcpy(ppppuVar20,pppppuVar23,uVar3 + 1);
      }
      ppppuVar20 = &local_b0;
      uVar29 = 2;
      puVar27 = puVar26;
    }
    *(uint *)(puVar27 + 0x44) = uVar29;
    *(undefined8 *)(puVar27 + -8) = 0x18011d6fb;
    FUN_18020e8a0(&DAT_1803e9b38,ppppuVar20);
    if ((uVar29 & 2) != 0) {
      uVar29 = uVar29 & 0xfffffffd;
      *(uint *)(puVar27 + 0x44) = uVar29;
      *(undefined8 *)(puVar27 + -8) = 0x18011d714;
      FUN_18020e450(&local_b0);
    }
    if ((uVar29 & 1) != 0) {
      *(uint *)(puVar27 + 0x44) = uVar29 & 0xfffffffe;
      *(undefined8 *)(puVar27 + -8) = 0x18011d72e;
      FUN_18020e450(puVar27 + 0x70);
    }
    if (*(char *)(param_1 + 0xa8) == '\0') {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      puVar24 = &DAT_1803e9b38;
      if (0xf < DAT_1803e9b50) {
        puVar24 = DAT_1803e9b38;
      }
      pcVar9 = "[LOADURL] apply failed: %s\n";
LAB_18011d758:
      *(undefined8 *)(puVar27 + -8) = 0x18011d75d;
      FUN_180014410(pcVar9,puVar24);
    }
  }
  else {
    pppppuVar23 = &local_88;
    if (0xf < local_70) {
      pppppuVar23 = (undefined8 *****)local_88;
    }
    if ((local_78 != 2) ||
       (iVar7 = memcmp(pppppuVar23,&DAT_18034a240,2), uVar17 = local_90, iVar7 != 0))
    goto LAB_18011d5b5;
    *(undefined2 *)(param_1 + 8) = 0x101;
    *(char *)(param_1 + 10) = cVar4;
    *(undefined4 *)(param_1 + 0xc) = (undefined4)local_90;
    if ((char *)(param_1 + 0x10) != pcVar12) {
      pcVar25 = pcVar12 + 0x10;
      if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
        pcVar12 = *(char **)pcVar12;
      }
      FUN_180212700((char *)(param_1 + 0x10),pcVar12,*(undefined8 *)pcVar25);
    }
    if ((char *)(param_1 + 0x30) != pcVar9) {
      pcVar12 = pcVar9;
      if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
        pcVar12 = *(char **)pcVar9;
      }
      FUN_180212700((char *)(param_1 + 0x30),pcVar12,*(undefined8 *)(pcVar9 + 0x10));
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0xa8) = 0;
    local_120 = "menu Lua";
    local_128 = pcVar9;
    FUN_18011d930(param_1,cVar4,uVar17 & 0xffffffff,param_1 + 0x50);
    if (local_108 != '\0') {
      puVar24 = &DAT_1803e9b38;
      if (0xf < DAT_1803e9b50) {
        puVar24 = DAT_1803e9b38;
      }
      pcVar9 = "[LOADURL] %s\n";
      puVar27 = auStack_148;
      goto LAB_18011d758;
    }
  }
  *(undefined8 *)(puVar27 + -8) = 0x18011d767;
  FUN_18020e450(&local_88);
  puVar28 = puVar27;
LAB_18011d903:
  *(undefined8 *)(puVar28 + -8) = 0x18011d90f;
  return;
}


)B18011cf40",
    "a46ab7f153f5909a03832dcefe12415a4615512c69429e8c641c2dfab1d766d1",
    R"F18011cf40C(FUN_180012fe0
FUN_1800130a0
FUN_180014410
FUN_18001d080
FUN_1800f0630
FUN_18011ae40
FUN_18011afa0
FUN_18011b190
FUN_18011b680
FUN_18011c490
FUN_18011c710
FUN_18011cb30
FUN_18011d930
FUN_1801fcfc0
FUN_1802028c0
FUN_1802029c0
FUN_18020e450
FUN_18020e8a0
FUN_180212700
FUN_18021aef0
FUN_180241a30
FUN_1802d8350)F18011cf40C",
    R"F18011cf40D(LAB_18011cfc5
LAB_18011d1be
LAB_18011d24f
LAB_18011d5b5
LAB_18011d67c
LAB_18011d6c4
LAB_18011d758
LAB_18011d903
UNK_18011d92e
DAT_18033e92c
DAT_18034a240
DAT_18035732c
DAT_1803da4c0
DAT_1803e9b38
DAT_1803e9b50
DAT_1803e9b58
DAT_1803e9b78
DAT_1803fa668
DAT_1803fadf0
DAT_180423700
DAT_180423708
DAT_180423709
DAT_180423720
DAT_180423728
DAT_180423738
DAT_180423742)F18011cf40D",
    R"F18011cf40T("true"
"false"
"ST.on = "
"menu Lua"
"ST.url = \\\""
"native hook"
"local K = \\\""
"[LOADURL] %s\\n"
"__gm_loadscreen"
"native, every connect"
"local ST = rawget(_G, K)\\n"
"menu Lua state is not ready"
"[LOADURL] apply failed: %s\\n"
"if type(ST) ~= \\\"table\\\" then ST = {} rawset(_G, K, ST) end\\n"
"if type(GameDetails) == \\\"function\\\" and GameDetails ~= ST.wrap then\\n\\tST.orig = GameDetails\\n\\tST.wrap = function(servername, serverurl, mapname, maxplayers, ...)\\n\\t\\tif ST.on then\\n\\t\\t\\tlocal u = ST.url\\n\\t\\t\\tif type(u) == \\\"string\\\" and #u >= 5 then\\n\\t\\t\\t\\tlocal openable = (u:sub(1, 4) == \\\"http\\\" or u:sub(1, 8) == \\\"asset://\\\")\\n\\t\\t\\t\\tlocal mp = tonumber(maxplayers) or 0\\n\\t\\t\\t\\tlocal cv = GetConVar and GetConVar(\\\"cl_enable_loadingurl\\\")\\n\\t\\t\\t\\tif openable and mp > 1 and cv and cv:GetBool() then\\n\\t\\t\\t\\t\\tserverurl = u\\n\\t\\t\\t\\telse\\n\\t\\t\\t\\t\\tpcall(function()\\n\\t\\t\\t\\t\\t\\tlocal pnl = GetLoadPanel and GetLoadPanel()\\n\\t\\t\\t\\t\\t\\tif pnl and IsValid(pnl) then pnl:ShowURL(u, true) end\\n\\t\\t\\t\\t\\tend)\\n\\t\\t\\t\\t\\tserverurl = \\\"\\\"\\n\\t\\t\\t\\tend\\n\\t\\t\\telse\\n\\t\\t\\t\\tserverurl = \\\"\\\"\\n\\t\\t\\tend\\n\\t\\tend\\n\\t\\treturn ST.orig(servername, serverurl, mapname, maxplayers, ...)\\n\\tend\\n\\tGameDetails = ST.wrap\\nend\\nif type(ST.wrap) ~= \\\"function\\\" then return \\\"GameDetails not found\\\" end\\nreturn \\\"ok\\\"\\n")F18011cf40T",
    R"F18011cf40F(73: if (*(char *)(param_1 + 0x90) == '\0') {
75: LAB_18011cfc5:
78: else if ((DAT_180423708 != '\0') &&
96: if (-1 < *piVar10) {
100: if (*piVar10 < 3) {
117: if (((*(char *)(param_1 + 8) == '\0') || (cVar4 != *(char *)(param_1 + 10))) ||
119: LAB_18011d1be:
122: else {
124: if (0xf < *(ulonglong *)(param_1 + 0x28)) {
129: if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
132: if ((sVar15 != *(size_t *)(param_1 + 0x20)) ||
135: if (0xf < *(ulonglong *)(param_1 + 0x48)) {
140: if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
143: if ((sVar15 != *(size_t *)(param_1 + 0x40)) ||
147: if ((DAT_180423738 != '\0') || (DAT_180423728 != '\0')) {
148: if ((*(char *)(param_1 + 0x92) == '\0') || (UVar13 < *(ulonglong *)(param_1 + 0x98))) {
151: else {
154: if ((local_108 != '\0') || (puVar28 = auStack_148, bVar2)) {
163: if (*(char *)(param_1 + 0x92) == '\0') {
166: else {
171: if (puVar16 != &DAT_1803e9b58) {
172: if (0xf < *(ulonglong *)(param_1 + 0x68)) {
177: if (puVar24 != &DAT_1803e9b78) {
178: if (0xf < *(ulonglong *)(param_1 + 0x88)) {
188: if ((char *)(param_1 + 0x10) != pcVar12) {
190: if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
195: if ((char *)(param_1 + 0x30) != pcVar9) {
197: if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
203: if (DAT_180423728 != '\0') {
209: if (local_108 != '\0') {
211: if (0xf < DAT_1803e9b50) {
218: goto LAB_18011d903;
220: if (cVar4 == '\0') {
221: if (*(char *)(param_1 + 9) == '\0') {
225: if ((char *)(param_1 + 0x10) != pcVar12) {
227: if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
233: if ((char *)(param_1 + 0x30) != pcVar9) {
235: if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
241: goto LAB_18011d903;
243: LAB_18011d24f:
246: else {
247: if ((*(char *)(param_1 + 9) == '\0') || (UVar13 < *(ulonglong *)(param_1 + 0xa0)))
248: goto LAB_18011d24f;
251: if (local_108 == '\0') {
253: if (!bVar2) goto LAB_18011d903;
255: else {
257: if (UVar13 < *(ulonglong *)(param_1 + 0x98)) goto LAB_18011d903;
265: if (*(longlong *)(param_1 + 0x80) != 0) {
289: if (cVar4 != '\0') {
298: if (0xf < (ulonglong)puVar16[3]) {
312: if (cVar5 == '\0') {
313: LAB_18011d5b5:
317: if (uVar3 == 0) {
327: else {
333: if (0xf < local_70) {
336: if (0x7fffffffffffffff < uVar3) {
340: if (uVar3 < 0x10) {
347: else {
349: if (uVar17 < 0x8000000000000000) goto LAB_18011d67c;
353: while( true ) {
356: if (pppuVar19 != (undefined8 ***)0x0) break;
360: LAB_18011d67c:
361: if (uVar17 < 0x16) {
364: if (uVar17 == 0xffffffffffffffff) goto LAB_18011d6c4;
365: if (uVar17 + 1 < 0x1000) {
368: goto LAB_18011d6c4;
371: if (uVar18 <= uVar17 + 1) {
379: LAB_18011d6c4:
393: if ((uVar29 & 2) != 0) {
399: if ((uVar29 & 1) != 0) {
404: if (*(char *)(param_1 + 0xa8) == '\0') {
407: if (0xf < DAT_1803e9b50) {
411: LAB_18011d758:
416: else {
418: if (0xf < local_70) {
421: if ((local_78 != 2) ||
423: goto LAB_18011d5b5;
427: if ((char *)(param_1 + 0x10) != pcVar12) {
429: if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
434: if ((char *)(param_1 + 0x30) != pcVar9) {
436: if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
446: if (local_108 != '\0') {
448: if (0xf < DAT_1803e9b50) {
453: goto LAB_18011d758;
459: LAB_18011d903:
461: return;)F18011cf40F",
    R"F18011cf40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18011cfc5.
TODO: recover the declaration, type and value for global/data reference LAB_18011d1be.
TODO: recover the declaration, type and value for global/data reference LAB_18011d24f.
TODO: recover the declaration, type and value for global/data reference LAB_18011d5b5.
TODO: recover the declaration, type and value for global/data reference LAB_18011d67c.
TODO: recover the declaration, type and value for global/data reference LAB_18011d6c4.
TODO: recover the declaration, type and value for global/data reference LAB_18011d758.
TODO: recover the declaration, type and value for global/data reference LAB_18011d903.
TODO: recover the declaration, type and value for global/data reference UNK_18011d92e.
TODO: recover the declaration, type and value for global/data reference DAT_18033e92c.
TODO: recover the declaration, type and value for global/data reference DAT_18034a240.
TODO: recover the declaration, type and value for global/data reference DAT_18035732c.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b38.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b50.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b58.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b78.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_180423700.
TODO: recover the declaration, type and value for global/data reference DAT_180423708.
TODO: recover the declaration, type and value for global/data reference DAT_180423709.
TODO: recover the declaration, type and value for global/data reference DAT_180423720.
TODO: recover the declaration, type and value for global/data reference DAT_180423728.
TODO: recover the declaration, type and value for global/data reference DAT_180423738.
TODO: recover the declaration, type and value for global/data reference DAT_180423742.
TODO: resolve the indirect call in body 81: (cVar4 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar4 != '\0')))))) goto LAB_18011cfc5;.
TODO: resolve the indirect call in body 357: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 358: uVar17 = (*pcVar1)(5);.)F18011cf40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011cf40() noexcept {
    return kFunction_0x18011cf40;
}

// 0x18011d930 FUN_18011d930
// source: re/dump/decompile/0x18011d930_FUN_18011d930.c
// size: 1724 bytes; thunk: false
// body sha256: d3380f02f4009b4d3ea5beb46247f2330f5a4d50bf0e1ded97f2d03ff753b634
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011d930{
    "0x18011d930",
    "FUN_18011d930",
    R"F18011d930S(undefined FUN_18011d930())F18011d930S",
    R"B18011d930(// 0x18011d930  FUN_18011d930
// size=1724 thunk=false
// signature: undefined FUN_18011d930()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011d930(longlong param_1,char param_2,int param_3,undefined8 *param_4,undefined8 param_5,
                  char *param_6)

{
  char cVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_2b8 [32];
  uint local_298;
  undefined1 *local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_2b8;
  uVar7 = 0;
  local_298 = 0;
  DAT_180423742 = 0;
  if (param_2 == '\0') {
    FUN_180212700(&DAT_1803e9b38,"Off - the server\'s own loading screen is used.",0x2e);
    return;
  }
  if (param_4[2] == 0) {
    if (*(char *)(param_1 + 0x91) != '\0') {
      DAT_180423742 = 1;
      FUN_180212700(&DAT_1803e9b38,
                    "That page is too big to hand over (512 KB max) - blocking instead.",0x42);
      return;
    }
    if (*(char *)(param_1 + 0x92) != '\0') {
      DAT_180423742 = 1;
      FUN_180212700(&DAT_1803e9b38,"Could not find garrysmod\\html - blocking instead.",0x31);
      return;
    }
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    FUN_18001d080(&local_1a8,"Blocking server loading screens (",0x21);
    sVar2 = strlen(param_6);
    puVar3 = (undefined8 *)FUN_18021aef0(&local_1a8,param_6,sVar2);
    local_288 = *puVar3;
    uStack_280 = puVar3[1];
    local_278 = puVar3[2];
    uStack_270 = puVar3[3];
    puVar3[3] = 0xf;
    *(undefined1 *)puVar3 = 0;
    puVar3[2] = 0;
    local_298 = 0x80;
    puVar4 = (undefined4 *)FUN_18021aef0(&local_288,&DAT_18035792c,2);
    local_1c8 = *puVar4;
    uStack_1c4 = puVar4[1];
    uStack_1c0 = puVar4[2];
    uStack_1bc = puVar4[3];
    local_1b8 = *(undefined8 *)(puVar4 + 4);
    uStack_1b0 = *(undefined8 *)(puVar4 + 6);
    *(undefined1 *)puVar4 = 0;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0xf;
    local_298 = 0x180;
    FUN_18020e8a0(&DAT_1803e9b38,&local_1c8);
    local_298 = 0x80;
    FUN_18020e450(&local_1c8);
    local_298 = 0;
    FUN_18020e450(&local_288);
    FUN_18020e450(&local_1a8);
    return;
  }
  if (param_3 == 2) {
    cVar1 = FUN_18011a830(param_4);
    if (cVar1 == '\0') {
      DAT_180423742 = 1;
      FUN_180212700(&DAT_1803e9b38,
                    "Not a loadable address (http:// https:// asset://) - blocking instead.",0x46);
      return;
    }
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    FUN_18001d080(&local_108,"Active (",8);
    sVar2 = strlen(param_6);
    puVar3 = (undefined8 *)FUN_18021aef0(&local_108,param_6,sVar2);
    local_1e8 = *puVar3;
    uStack_1e0 = puVar3[1];
    local_1d8 = puVar3[2];
    uStack_1d0 = puVar3[3];
    puVar3[3] = 0xf;
    *(undefined1 *)puVar3 = 0;
    puVar3[2] = 0;
    local_298 = 0x200;
    puVar3 = (undefined8 *)FUN_18021aef0(&local_1e8,&DAT_1803579c0,3);
    local_208 = *puVar3;
    uStack_200 = puVar3[1];
    local_1f8 = puVar3[2];
    uStack_1f0 = puVar3[3];
    *(undefined1 *)puVar3 = 0;
    puVar3[2] = 0;
    puVar3[3] = 0xf;
    local_298 = 0x600;
    puVar3 = param_4 + 2;
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    puVar4 = (undefined4 *)FUN_18021aef0(&local_208,param_4,*puVar3);
    local_128 = *puVar4;
    uStack_124 = puVar4[1];
    uStack_120 = puVar4[2];
    uStack_11c = puVar4[3];
    local_118 = *(undefined8 *)(puVar4 + 4);
    uStack_110 = *(undefined8 *)(puVar4 + 6);
    *(undefined1 *)puVar4 = 0;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0xf;
    local_298 = 0xe00;
    FUN_18020e8a0(&DAT_1803e9b38,&local_128);
    local_298 = 0x600;
    FUN_18020e450(&local_128);
    local_298 = 0x200;
    FUN_18020e450(&local_208);
    local_298 = 0;
    FUN_18020e450(&local_1e8);
    FUN_18020e450(&local_108);
    if (DAT_180423738 == '\0') {
      return;
    }
    if (DAT_180423728 != '\0') {
      return;
    }
    cVar1 = FUN_18011c8a0();
    if (cVar1 != '\0') {
      return;
    }
    FUN_18021aef0(&DAT_1803e9b38,
                  "\ncl_enable_loadingurl is 0 - set it to 1 or loading pages stay off.",0x43);
    return;
  }
  if (param_3 == 1) {
    local_290 = local_e8;
    uVar5 = FUN_18016d4c0(local_e8,param_5);
    lVar6 = FUN_18011a5c0(local_88,uVar5);
    uVar7 = 1;
    local_298 = 1;
    if (*(longlong *)(lVar6 + 0x10) != 0) {
      local_290 = local_c8;
      uVar5 = FUN_18016d4c0(local_c8,param_5);
      puVar3 = (undefined8 *)FUN_18011a5c0(local_a8,uVar5);
      uVar7 = 3;
      goto LAB_18011dba9;
    }
  }
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  FUN_18001d080(&local_188,"built-in mayrr screen",0x15);
  puVar3 = &local_188;
  uVar7 = uVar7 | 4;
LAB_18011dba9:
  local_58 = 0;
  uStack_50 = 0;
  local_68 = *(undefined4 *)puVar3;
  uStack_64 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_60 = *(undefined4 *)(puVar3 + 1);
  uStack_5c = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_58 = puVar3[2];
  uStack_50 = puVar3[3];
  *(undefined1 *)puVar3 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  local_298 = uVar7;
  if ((uVar7 & 4) != 0) {
    uVar7 = uVar7 & 0xfffffffb;
    local_298 = uVar7;
    FUN_18020e450(&local_188);
  }
  if ((uVar7 & 2) != 0) {
    uVar7 = uVar7 & 0xfffffffd;
    local_298 = uVar7;
    FUN_18020e450(local_a8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffe;
    local_298 = uVar7;
    FUN_18020e450(local_88);
  }
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  FUN_18001d080(&local_148,"Active (",8);
  sVar2 = strlen(param_6);
  puVar3 = (undefined8 *)FUN_18021aef0(&local_148,param_6,sVar2);
  local_228 = *puVar3;
  uStack_220 = puVar3[1];
  local_218 = puVar3[2];
  uStack_210 = puVar3[3];
  puVar3[3] = 0xf;
  *(undefined1 *)puVar3 = 0;
  puVar3[2] = 0;
  local_298 = uVar7 | 0x20;
  puVar3 = (undefined8 *)FUN_18021aef0(&local_228,&DAT_1803579c0,3);
  local_248 = *puVar3;
  uStack_240 = puVar3[1];
  local_238 = puVar3[2];
  uStack_230 = puVar3[3];
  *(undefined1 *)puVar3 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  local_298 = uVar7 | 0x30;
  puVar4 = &local_68;
  if (0xf < uStack_50) {
    puVar4 = (undefined4 *)CONCAT44(uStack_64,local_68);
  }
  puVar3 = (undefined8 *)FUN_18021aef0(&local_248,puVar4,local_58);
  local_268 = *puVar3;
  uStack_260 = puVar3[1];
  local_258 = puVar3[2];
  uStack_250 = puVar3[3];
  puVar3[3] = 0xf;
  *(undefined1 *)puVar3 = 0;
  puVar3[2] = 0;
  local_298 = uVar7 | 0x38;
  puVar4 = (undefined4 *)
           FUN_18021aef0(&local_268,
                         "\nWritten to garrysmod\\html for 5 seconds when the screen opens, then removed."
                         ,0x4d);
  local_168 = *puVar4;
  uStack_164 = puVar4[1];
  uStack_160 = puVar4[2];
  uStack_15c = puVar4[3];
  local_158 = *(undefined8 *)(puVar4 + 4);
  uStack_150 = *(undefined8 *)(puVar4 + 6);
  *(undefined1 *)puVar4 = 0;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0xf;
  local_298 = uVar7 | 0x78;
  FUN_18020e8a0(&DAT_1803e9b38,&local_168);
  local_298 = uVar7 | 0x38;
  FUN_18020e450(&local_168);
  local_298 = uVar7 | 0x30;
  FUN_18020e450(&local_268);
  local_298 = uVar7 | 0x20;
  FUN_18020e450(&local_248);
  local_298 = uVar7;
  FUN_18020e450(&local_228);
  FUN_18020e450(&local_148);
  FUN_18020e450(&local_68);
  return;
}


)B18011d930",
    "d3380f02f4009b4d3ea5beb46247f2330f5a4d50bf0e1ded97f2d03ff753b634",
    R"F18011d930C(FUN_18001d080
FUN_18011a5c0
FUN_18011a830
FUN_18011c8a0
FUN_18016d4c0
FUN_18020e450
FUN_18020e8a0
FUN_180212700
FUN_18021aef0)F18011d930C",
    R"F18011d930D(LAB_18011dba9
DAT_18035792c
DAT_1803579c0
DAT_1803da4c0
DAT_1803e9b38
DAT_180423728
DAT_180423738
DAT_180423742)F18011d930D",
    R"F18011d930T("Active ("
"built-in mayrr screen"
"Blocking server loading screens ("
"Off - the server\\'s own loading screen is used."
"Could not find garrysmod\\\\html - blocking instead."
"That page is too big to hand over (512 KB max) - blocking instead."
"\\ncl_enable_loadingurl is 0 - set it to 1 or loading pages stay off."
"Not a loadable address (http:// https:// asset://) - blocking instead."
"\\nWritten to garrysmod\\\\html for 5 seconds when the screen opens, then removed.")F18011d930T",
    R"F18011d930F(97: if (param_2 == '\0') {
99: return;
101: if (param_4[2] == 0) {
102: if (*(char *)(param_1 + 0x91) != '\0') {
106: return;
108: if (*(char *)(param_1 + 0x92) != '\0') {
111: return;
145: return;
147: if (param_3 == 2) {
149: if (cVar1 == '\0') {
153: return;
180: if (0xf < (ulonglong)param_4[3]) {
202: if (DAT_180423738 == '\0') {
203: return;
205: if (DAT_180423728 != '\0') {
206: return;
209: if (cVar1 != '\0') {
210: return;
214: return;
216: if (param_3 == 1) {
222: if (*(longlong *)(lVar6 + 0x10) != 0) {
227: goto LAB_18011dba9;
237: LAB_18011dba9:
250: if ((uVar7 & 4) != 0) {
255: if ((uVar7 & 2) != 0) {
260: if ((uVar7 & 1) != 0) {
290: if (0xf < uStack_50) {
327: return;)F18011d930F",
    R"F18011d930U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18011dba9.
TODO: recover the declaration, type and value for global/data reference DAT_18035792c.
TODO: recover the declaration, type and value for global/data reference DAT_1803579c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b38.
TODO: recover the declaration, type and value for global/data reference DAT_180423728.
TODO: recover the declaration, type and value for global/data reference DAT_180423738.
TODO: recover the declaration, type and value for global/data reference DAT_180423742.)F18011d930U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011d930() noexcept {
    return kFunction_0x18011d930;
}

// 0x18011e020 FUN_18011e020
// source: re/dump/decompile/0x18011e020_FUN_18011e020.c
// size: 299 bytes; thunk: false
// body sha256: 7fadb3c120ab8e93ae3fbfa40aacc682781f8d340512e89dffa1a460b6125f12
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011e020{
    "0x18011e020",
    "FUN_18011e020",
    R"F18011e020S(undefined FUN_18011e020())F18011e020S",
    R"B18011e020(// 0x18011e020  FUN_18011e020
// size=299 thunk=false
// signature: undefined FUN_18011e020()
// status: ok


undefined8 FUN_18011e020(char *param_1)

{
  char *pcVar1;
  undefined **ppuVar2;
  
  if (param_1 != (char *)0x0) {
    ppuVar2 = &PTR_s_PreDrawHUD_1803e9300;
    do {
      pcVar1 = strstr(param_1,*ppuVar2);
      if (pcVar1 != (char *)0x0) {
        return 1;
      }
      ppuVar2 = ppuVar2 + 1;
    } while (ppuVar2 != (undefined **)&DAT_1803e9328);
    pcVar1 = strstr(param_1,"RenderScreenspaceEffects");
    if (pcVar1 != (char *)0x0) {
      return 4;
    }
    ppuVar2 = &PTR_s_PreDrawOpaqueRenderables_1803e7900;
    do {
      pcVar1 = strstr(param_1,*ppuVar2);
      if (pcVar1 != (char *)0x0) {
        return 5;
      }
      ppuVar2 = ppuVar2 + 1;
    } while (ppuVar2 != (undefined **)&DAT_1803e7970);
    ppuVar2 = &PTR_s_PreRender_1803e78d8;
    do {
      pcVar1 = strstr(param_1,*ppuVar2);
      if (pcVar1 != (char *)0x0) {
        return 2;
      }
      ppuVar2 = ppuVar2 + 1;
    } while (ppuVar2 != (undefined **)&DAT_1803e78f0);
  }
  return 0;
}


)B18011e020",
    "7fadb3c120ab8e93ae3fbfa40aacc682781f8d340512e89dffa1a460b6125f12",
    R"F18011e020C()F18011e020C",
    R"F18011e020D(DAT_1803e78f0
DAT_1803e7970
DAT_1803e9328)F18011e020D",
    R"F18011e020T("RenderScreenspaceEffects")F18011e020T",
    R"F18011e020F(13: if (param_1 != (char *)0x0) {
15: do {
17: if (pcVar1 != (char *)0x0) {
18: return 1;
23: if (pcVar1 != (char *)0x0) {
24: return 4;
27: do {
29: if (pcVar1 != (char *)0x0) {
30: return 5;
35: do {
37: if (pcVar1 != (char *)0x0) {
38: return 2;
43: return 0;)F18011e020F",
    R"F18011e020U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e78f0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7970.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9328.)F18011e020U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011e020() noexcept {
    return kFunction_0x18011e020;
}

// 0x18011e150 FUN_18011e150
// source: re/dump/decompile/0x18011e150_FUN_18011e150.c
// size: 105 bytes; thunk: false
// body sha256: d56ba177e3e38fdce079ccc3176fec1565dc385b23fe66386711209f13ce383e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011e150{
    "0x18011e150",
    "FUN_18011e150",
    R"F18011e150S(undefined FUN_18011e150())F18011e150S",
    R"B18011e150(// 0x18011e150  FUN_18011e150
// size=105 thunk=false
// signature: undefined FUN_18011e150()
// status: ok


undefined8 FUN_18011e150(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  *param_3 = 0;
  if (param_1 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x3d8))();
    uVar3 = 0;
    if (lVar1 != 0) {
      uVar2 = 0;
      while ((uVar2 + 1 < 0x80 && (*(char *)(uVar2 + lVar1) != '\0'))) {
        param_3[uVar2] = *(char *)(uVar2 + lVar1);
        uVar2 = uVar2 + 1;
      }
      param_3[uVar2] = 0;
      uVar3 = FUN_18011e020(param_3);
    }
  }
  return uVar3;
}


)B18011e150",
    "d56ba177e3e38fdce079ccc3176fec1565dc385b23fe66386711209f13ce383e",
    R"F18011e150C(FUN_18011e020)F18011e150C",
    R"F18011e150D()F18011e150D",
    R"F18011e150T()F18011e150T",
    R"F18011e150F(15: if (param_1 == (longlong *)0x0) {
18: else {
21: if (lVar1 != 0) {
23: while ((uVar2 + 1 < 0x80 && (*(char *)(uVar2 + lVar1) != '\0'))) {
31: return uVar3;)F18011e150F",
    R"F18011e150U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 19: lVar1 = (**(code **)(*param_1 + 0x3d8))();.)F18011e150U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011e150() noexcept {
    return kFunction_0x18011e150;
}

// 0x18011e1d0 FUN_18011e1d0
// source: re/dump/decompile/0x18011e1d0_FUN_18011e1d0.c
// size: 92 bytes; thunk: false
// body sha256: b6d6d4820327228453f4888b7f146d2319b986d7136b82d801552c612f5e7891
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011e1d0{
    "0x18011e1d0",
    "FUN_18011e1d0",
    R"F18011e1d0S(undefined FUN_18011e1d0())F18011e1d0S",
    R"B18011e1d0(// 0x18011e1d0  FUN_18011e1d0
// size=92 thunk=false
// signature: undefined FUN_18011e1d0()
// status: ok


undefined8 FUN_18011e1d0(longlong param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = 0;
  while (uVar1 + 1 < 0x80) {
    if (*(char *)(uVar1 + param_1) == '\0') break;
    param_2[uVar1] = *(char *)(uVar1 + param_1);
    uVar1 = uVar1 + 1;
  }
  param_2[uVar1] = 0;
  uVar2 = FUN_18011e020(param_2);
  return uVar2;
}


)B18011e1d0",
    "b6d6d4820327228453f4888b7f146d2319b986d7136b82d801552c612f5e7891",
    R"F18011e1d0C(FUN_18011e020)F18011e1d0C",
    R"F18011e1d0D()F18011e1d0D",
    R"F18011e1d0T()F18011e1d0T",
    R"F18011e1d0F(14: if (param_1 == 0) {
15: return 0;
18: while (uVar1 + 1 < 0x80) {
19: if (*(char *)(uVar1 + param_1) == '\0') break;
25: return uVar2;)F18011e1d0F",
    R"F18011e1d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18011e1d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011e1d0() noexcept {
    return kFunction_0x18011e1d0;
}

// 0x18011e240 FUN_18011e240
// source: re/dump/decompile/0x18011e240_FUN_18011e240.c
// size: 648 bytes; thunk: false
// body sha256: fc87a8eb11d94be331a9f96b69c5a6a947bfd51baef22d7154921f12954ab5d7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011e240{
    "0x18011e240",
    "FUN_18011e240",
    R"F18011e240S(undefined FUN_18011e240())F18011e240S",
    R"B18011e240(// 0x18011e240  FUN_18011e240
// size=648 thunk=false
// signature: undefined FUN_18011e240()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_18011e240(uint param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  ulonglong local_a8 [2];
  char local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  plVar3 = *(longlong **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)((longlong)plVar3 + 0xf49) == '\0') goto LAB_18011e4a5;
  local_a8[1] = 0x7a7f52ad97e147b7;
  local_a8[0] = 0x93fd561a96ab0c67;
  plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_b8,local_a8);
  plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_c8,local_a8 + 1);
  plVar3 = (longlong *)FUN_1801fcfc0(*plVar3 + 0x28);
  if ((char)*plVar3 == '\0') goto LAB_18011e4a5;
  local_a8[0] = CONCAT44(local_a8[0]._4_4_,param_1);
  puVar5 = (undefined8 *)
           (((((ulonglong)(param_1 >> 0x10) & 0xff ^
              ((ulonglong)(param_1 >> 8 & 0xff) ^
              ((ulonglong)param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
              0x100000001b3 ^ (ulonglong)(param_1 >> 0x18)) * 0x100000001b3 & DAT_1805beee0) * 0x10
           + DAT_1805beec8);
  plVar3 = (longlong *)puVar5[1];
  if (plVar3 == DAT_1805beeb8) {
LAB_18011e368:
    plVar3 = (longlong *)0x0;
  }
  else {
    uVar1 = *(uint *)(plVar3 + 2);
    while (param_1 != uVar1) {
      if (plVar3 == (longlong *)*puVar5) goto LAB_18011e368;
      plVar3 = (longlong *)plVar3[1];
      uVar1 = *(uint *)(plVar3 + 2);
    }
  }
  plVar6 = DAT_1805beeb8;
  if (plVar3 != (longlong *)0x0) {
    plVar6 = plVar3;
  }
  if (plVar6 != DAT_1805beeb8) {
    iVar2 = *(int *)((longlong)plVar6 + 0x14);
    goto LAB_18011e429;
  }
  plVar3 = DAT_1804015d8;
  if ((DAT_1804015d8 == (longlong *)0x0) || (*DAT_1804015d8 == 0)) goto LAB_18011e4a5;
  plVar3 = (longlong *)FUN_18011e150(*DAT_1804015d8,param_1,local_98);
  iVar2 = (int)plVar3;
  if (local_98[0] == '\0') goto LAB_18011e4a5;
  plVar3 = (longlong *)FUN_180217700();
  *(int *)(*plVar3 + 0x14) = iVar2;
  if (local_98[0] != '\0') {
    plVar3 = (longlong *)(ulonglong)DAT_1803fe9f8;
    if (iVar2 == 0) {
      if (0x3b < (int)DAT_1803fe9f8) goto LAB_18011e429;
LAB_18011e3e3:
      DAT_1803fe9f8 = DAT_1803fe9f8 + 1;
    }
    else if ((int)DAT_1803fe9f8 < 0x3c) goto LAB_18011e3e3;
    if (iVar2 == 1) {
      local_d8 = "[HUD tier: skip when hide=ON]";
    }
    else {
      local_d8 = "";
      if (iVar2 == 2) {
        local_d8 = "[Lifecycle tier: skip when More=ON]";
      }
    }
    plVar3 = (longlong *)
             FUN_180014410("[GMFilter] hookId %d (0x%X) = \"%s\" %s\n",local_a8[0] & 0xffffffff,
                           local_a8[0] & 0xffffffff,local_98);
  }
LAB_18011e429:
  if (iVar2 == 1) {
    return 1;
  }
  if (iVar2 == 2) {
    local_a8[0] = 0x2b08eda621452889;
  }
  else if (iVar2 == 4) {
    local_a8[0] = 0x59d309e8a2eb12f6;
  }
  else {
    if (iVar2 != 5) {
LAB_18011e4a5:
      return (ulonglong)plVar3 & 0xffffffffffffff00;
    }
    local_a8[0] = 0x2e9325269e4e4100;
  }
  local_a8[1] = 0x93fd561a96ab0c67;
  plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_a8 + 1);
  plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_b8,local_a8);
  pbVar4 = (byte *)FUN_1801fcfc0(*plVar3 + 0x28);
  return (ulonglong)*pbVar4;
}


)B18011e240",
    "fc87a8eb11d94be331a9f96b69c5a6a947bfd51baef22d7154921f12954ab5d7",
    R"F18011e240C(FUN_180014410
FUN_18011e150
FUN_1801fcfc0
FUN_180217700
FUN_180241a30)F18011e240C",
    R"F18011e240D(LAB_18011e368
LAB_18011e3e3
LAB_18011e429
LAB_18011e4a5
DAT_1803da4c0
DAT_1803fadf0
DAT_1803fe9f8
DAT_1804015d8
DAT_1805beeb8
DAT_1805beec8
DAT_1805beee0)F18011e240D",
    R"F18011e240T(""
"[HUD tier: skip when hide=ON]"
"[Lifecycle tier: skip when More=ON]"
"[GMFilter] hookId %d (0x%X) = \\\"%s\\\" %s\\n")F18011e240T",
    R"F18011e240F(29: if (*(char *)((longlong)plVar3 + 0xf49) == '\0') goto LAB_18011e4a5;
35: if ((char)*plVar3 == '\0') goto LAB_18011e4a5;
44: if (plVar3 == DAT_1805beeb8) {
45: LAB_18011e368:
48: else {
50: while (param_1 != uVar1) {
51: if (plVar3 == (longlong *)*puVar5) goto LAB_18011e368;
57: if (plVar3 != (longlong *)0x0) {
60: if (plVar6 != DAT_1805beeb8) {
62: goto LAB_18011e429;
65: if ((DAT_1804015d8 == (longlong *)0x0) || (*DAT_1804015d8 == 0)) goto LAB_18011e4a5;
68: if (local_98[0] == '\0') goto LAB_18011e4a5;
71: if (local_98[0] != '\0') {
73: if (iVar2 == 0) {
74: if (0x3b < (int)DAT_1803fe9f8) goto LAB_18011e429;
75: LAB_18011e3e3:
78: else if ((int)DAT_1803fe9f8 < 0x3c) goto LAB_18011e3e3;
79: if (iVar2 == 1) {
82: else {
84: if (iVar2 == 2) {
92: LAB_18011e429:
93: if (iVar2 == 1) {
94: return 1;
96: if (iVar2 == 2) {
99: else if (iVar2 == 4) {
102: else {
103: if (iVar2 != 5) {
104: LAB_18011e4a5:
105: return (ulonglong)plVar3 & 0xffffffffffffff00;
113: return (ulonglong)*pbVar4;)F18011e240F",
    R"F18011e240U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18011e368.
TODO: recover the declaration, type and value for global/data reference LAB_18011e3e3.
TODO: recover the declaration, type and value for global/data reference LAB_18011e429.
TODO: recover the declaration, type and value for global/data reference LAB_18011e4a5.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe9f8.
TODO: recover the declaration, type and value for global/data reference DAT_1804015d8.
TODO: recover the declaration, type and value for global/data reference DAT_1805beeb8.
TODO: recover the declaration, type and value for global/data reference DAT_1805beec8.
TODO: recover the declaration, type and value for global/data reference DAT_1805beee0.)F18011e240U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011e240() noexcept {
    return kFunction_0x18011e240;
}

// 0x18011e4d0 FUN_18011e4d0
// source: re/dump/decompile/0x18011e4d0_FUN_18011e4d0.c
// size: 379 bytes; thunk: false
// body sha256: 8f275b898773a2615a190d33640caea04d5767e6bd6c00bf10c02aa5643eab1f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011e4d0{
    "0x18011e4d0",
    "FUN_18011e4d0",
    R"F18011e4d0S(undefined FUN_18011e4d0())F18011e4d0S",
    R"B18011e4d0(// 0x18011e4d0  FUN_18011e4d0
// size=379 thunk=false
// signature: undefined FUN_18011e4d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18011e4d0(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  char local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  pcVar3 = *(char **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (pcVar3[0xf49] != '\0') {
    local_a0 = 0x7a7f52ad97e147b7;
    local_a8 = 0x93fd561a96ab0c67;
    plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,&local_a8);
    plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_b8,&local_a0);
    pcVar3 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
    if (*pcVar3 != '\0') {
      pcVar4 = (char *)FUN_18011e1d0(param_1,local_98);
      iVar1 = (int)pcVar4;
      pcVar3 = pcVar4;
      if ((local_98[0] != '\0') && (DAT_1803ff0bc < 0x28)) {
        LOCK();
        DAT_1803ff0bc = DAT_1803ff0bc + 1;
        UNLOCK();
        pcVar3 = (char *)FUN_180014410("[GMFilter] CallStr in pass1: \"%s\" tier=%d\n",local_98,
                                       (ulonglong)pcVar4 & 0xffffffff);
      }
      if (iVar1 == 1) {
        return (ulonglong)pcVar4 & 0xff;
      }
      if (iVar1 == 2) {
        local_a8 = 0x2b08eda621452889;
      }
      else if (iVar1 == 4) {
        local_a8 = 0x59d309e8a2eb12f6;
      }
      else {
        if (iVar1 != 5) goto LAB_18011e628;
        local_a8 = 0x2e9325269e4e4100;
      }
      local_a0 = 0x93fd561a96ab0c67;
      plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_b8,&local_a0);
      plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_c8,&local_a8);
      pbVar5 = (byte *)FUN_1801fcfc0(*plVar2 + 0x28);
      return (ulonglong)*pbVar5;
    }
  }
LAB_18011e628:
  return (ulonglong)pcVar3 & 0xffffffffffffff00;
}


)B18011e4d0",
    "8f275b898773a2615a190d33640caea04d5767e6bd6c00bf10c02aa5643eab1f",
    R"F18011e4d0C(FUN_180014410
FUN_18011e1d0
FUN_1801fcfc0
FUN_180241a30)F18011e4d0C",
    R"F18011e4d0D(LAB_18011e628
DAT_1803da4c0
DAT_1803fadf0
DAT_1803ff0bc)F18011e4d0D",
    R"F18011e4d0T("[GMFilter] CallStr in pass1: \\\"%s\\\" tier=%d\\n")F18011e4d0T",
    R"F18011e4d0F(27: if (pcVar3[0xf49] != '\0') {
33: if (*pcVar3 != '\0') {
37: if ((local_98[0] != '\0') && (DAT_1803ff0bc < 0x28)) {
44: if (iVar1 == 1) {
45: return (ulonglong)pcVar4 & 0xff;
47: if (iVar1 == 2) {
50: else if (iVar1 == 4) {
53: else {
54: if (iVar1 != 5) goto LAB_18011e628;
61: return (ulonglong)*pbVar5;
64: LAB_18011e628:
65: return (ulonglong)pcVar3 & 0xffffffffffffff00;)F18011e4d0F",
    R"F18011e4d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18011e628.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff0bc.)F18011e4d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011e4d0() noexcept {
    return kFunction_0x18011e4d0;
}

// 0x18011e650 FUN_18011e650
// source: re/dump/decompile/0x18011e650_FUN_18011e650.c
// size: 37 bytes; thunk: false
// body sha256: d2e4d3a727af8fd083bc8a19074db5e9d537a3cceacc601009b387d7c08f3b09
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011e650{
    "0x18011e650",
    "FUN_18011e650",
    R"F18011e650S(undefined FUN_18011e650())F18011e650S",
    R"B18011e650(// 0x18011e650  FUN_18011e650
// size=37 thunk=false
// signature: undefined FUN_18011e650()
// status: ok


void FUN_18011e650(longlong param_1)

{
  FUN_180209700(param_1 + 0x18);
  FUN_18020b610(param_1 + 8);
  return;
}


)B18011e650",
    "d2e4d3a727af8fd083bc8a19074db5e9d537a3cceacc601009b387d7c08f3b09",
    R"F18011e650C(FUN_180209700
FUN_18020b610)F18011e650C",
    R"F18011e650D()F18011e650D",
    R"F18011e650T()F18011e650T",
    R"F18011e650F(12: return;)F18011e650F",
    R"F18011e650U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18011e650U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011e650() noexcept {
    return kFunction_0x18011e650;
}

// 0x18011e680 FUN_18011e680
// source: re/dump/decompile/0x18011e680_FUN_18011e680.c
// size: 363 bytes; thunk: false
// body sha256: 4eb2ca80b652090e0eda03439ff963d89e8884b5b1ef2b8b0ba9fb768775d111
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011e680{
    "0x18011e680",
    "FUN_18011e680",
    R"F18011e680S(undefined FUN_18011e680())F18011e680S",
    R"B18011e680(// 0x18011e680  FUN_18011e680
// size=363 thunk=false
// signature: undefined FUN_18011e680()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011e680(ulonglong param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  char *local_b8;
  char local_98 [128];
  ulonglong local_18;
  
  DVar2 = DAT_1803ff984;
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  if ((DAT_1803ff954 != '\0') &&
     ((DAT_1803ff984 == 0 || (DVar3 = GetCurrentThreadId(), DVar2 == DVar3)))) {
    local_b8 = (char *)CONCAT44(local_b8._4_4_,(int)param_1);
    plVar5 = (longlong *)
             (((((param_1 & 0xffffffff) >> 0x10 & 0xff ^
                (param_1 >> 8 & 0xff ^ (param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                0x100000001b3) * 0x100000001b3 ^ (param_1 & 0xffffffff) >> 0x18) * 0x100000001b3 &
              DAT_18056e770) * 0x10 + DAT_18056e758);
    lVar4 = plVar5[1];
    if (lVar4 == DAT_18056e748) {
LAB_18011e754:
      lVar4 = 0;
    }
    else {
      iVar1 = *(int *)(lVar4 + 0x10);
      while ((int)param_1 != iVar1) {
        if (lVar4 == *plVar5) goto LAB_18011e754;
        lVar4 = *(longlong *)(lVar4 + 8);
        iVar1 = *(int *)(lVar4 + 0x10);
      }
    }
    lVar6 = DAT_18056e748;
    if (lVar4 != 0) {
      lVar6 = lVar4;
    }
    if (lVar6 == DAT_18056e748) {
      if (DAT_1804015d8 == (longlong *)0x0) {
        return;
      }
      if (*DAT_1804015d8 == 0) {
        return;
      }
      FUN_18011e150(*DAT_1804015d8,param_1 & 0xffffffff,local_98);
      if (local_98[0] == '\0') {
        return;
      }
      plVar5 = (longlong *)FUN_180204a10();
      lVar6 = *plVar5;
    }
    local_b8 = (char *)(lVar6 + 0x18);
    if (0xf < *(ulonglong *)(lVar6 + 0x30)) {
      local_b8 = *(char **)local_b8;
    }
    if ((local_b8 != (char *)0x0) && (*local_b8 != '\0')) {
      FUN_1801ff5b0();
    }
  }
  return;
}


)B18011e680",
    "4eb2ca80b652090e0eda03439ff963d89e8884b5b1ef2b8b0ba9fb768775d111",
    R"F18011e680C(FUN_18011e150
FUN_1801ff5b0
FUN_180204a10)F18011e680C",
    R"F18011e680D(LAB_18011e754
DAT_1803da4c0
DAT_1803ff954
DAT_1803ff984
DAT_1804015d8
DAT_18056e748
DAT_18056e758
DAT_18056e770)F18011e680D",
    R"F18011e680T()F18011e680T",
    R"F18011e680F(25: if ((DAT_1803ff954 != '\0') &&
34: if (lVar4 == DAT_18056e748) {
35: LAB_18011e754:
38: else {
40: while ((int)param_1 != iVar1) {
41: if (lVar4 == *plVar5) goto LAB_18011e754;
47: if (lVar4 != 0) {
50: if (lVar6 == DAT_18056e748) {
51: if (DAT_1804015d8 == (longlong *)0x0) {
52: return;
54: if (*DAT_1804015d8 == 0) {
55: return;
58: if (local_98[0] == '\0') {
59: return;
65: if (0xf < *(ulonglong *)(lVar6 + 0x30)) {
68: if ((local_b8 != (char *)0x0) && (*local_b8 != '\0')) {
72: return;)F18011e680F",
    R"F18011e680U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18011e754.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff954.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff984.
TODO: recover the declaration, type and value for global/data reference DAT_1804015d8.
TODO: recover the declaration, type and value for global/data reference DAT_18056e748.
TODO: recover the declaration, type and value for global/data reference DAT_18056e758.
TODO: recover the declaration, type and value for global/data reference DAT_18056e770.)F18011e680U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011e680() noexcept {
    return kFunction_0x18011e680;
}

// 0x18011e7f0 FUN_18011e7f0
// source: re/dump/decompile/0x18011e7f0_FUN_18011e7f0.c
// size: 87 bytes; thunk: false
// body sha256: 393edf33471f47dad23c1e5c6ea107829f823acec190a36c9579671f07319568
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011e7f0{
    "0x18011e7f0",
    "FUN_18011e7f0",
    R"F18011e7f0S(undefined FUN_18011e7f0())F18011e7f0S",
    R"B18011e7f0(// 0x18011e7f0  FUN_18011e7f0
// size=87 thunk=false
// signature: undefined FUN_18011e7f0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18011e7f0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_18011e240(param_2);
  if (cVar1 != '\0') {
    LOCK();
    _DAT_180401600 = _DAT_180401600 + 1;
    UNLOCK();
    return 0;
  }
  LOCK();
  _DAT_180401618 = _DAT_180401618 + 1;
  UNLOCK();
  FUN_18011e680(param_2);
                    /* WARNING: Could not recover jumptable at 0x00018011e844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*DAT_1804015e0)(param_1,param_2);
  return uVar2;
}


)B18011e7f0",
    "393edf33471f47dad23c1e5c6ea107829f823acec190a36c9579671f07319568",
    R"F18011e7f0C(FUN_18011e240
FUN_18011e680)F18011e7f0C",
    R"F18011e7f0D(DAT_1804015e0)F18011e7f0D",
    R"F18011e7f0T()F18011e7f0T",
    R"F18011e7f0F(16: if (cVar1 != '\0') {
20: return 0;
29: return uVar2;)F18011e7f0F",
    R"F18011e7f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1804015e0.
TODO: resolve the indirect call in body 28: uVar2 = (*DAT_1804015e0)(param_1,param_2);.)F18011e7f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011e7f0() noexcept {
    return kFunction_0x18011e7f0;
}

// 0x18011e850 FUN_18011e850
// source: re/dump/decompile/0x18011e850_FUN_18011e850.c
// size: 87 bytes; thunk: false
// body sha256: 7d96920dfb2d47d3a454b760628ada3b52157fe2b45bdeda989b430151ae09a6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011e850{
    "0x18011e850",
    "FUN_18011e850",
    R"F18011e850S(undefined FUN_18011e850())F18011e850S",
    R"B18011e850(// 0x18011e850  FUN_18011e850
// size=87 thunk=false
// signature: undefined FUN_18011e850()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18011e850(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_18011e240(param_2);
  if (cVar1 != '\0') {
    LOCK();
    _DAT_180401600 = _DAT_180401600 + 1;
    UNLOCK();
    return 0;
  }
  LOCK();
  _DAT_180401618 = _DAT_180401618 + 1;
  UNLOCK();
  FUN_18011e680(param_2);
                    /* WARNING: Could not recover jumptable at 0x00018011e8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*DAT_180401608)(param_1,param_2);
  return uVar2;
}


)B18011e850",
    "7d96920dfb2d47d3a454b760628ada3b52157fe2b45bdeda989b430151ae09a6",
    R"F18011e850C(FUN_18011e240
FUN_18011e680)F18011e850C",
    R"F18011e850D(DAT_180401608)F18011e850D",
    R"F18011e850T()F18011e850T",
    R"F18011e850F(16: if (cVar1 != '\0') {
20: return 0;
29: return uVar2;)F18011e850F",
    R"F18011e850U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180401608.
TODO: resolve the indirect call in body 28: uVar2 = (*DAT_180401608)(param_1,param_2);.)F18011e850U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011e850() noexcept {
    return kFunction_0x18011e850;
}

// 0x18011e8b0 FUN_18011e8b0
// source: re/dump/decompile/0x18011e8b0_FUN_18011e8b0.c
// size: 87 bytes; thunk: false
// body sha256: 27c10b37d935d13fd595331bca58e994eea78c639d836adf3cdddfb30d4560c0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011e8b0{
    "0x18011e8b0",
    "FUN_18011e8b0",
    R"F18011e8b0S(undefined FUN_18011e8b0())F18011e8b0S",
    R"B18011e8b0(// 0x18011e8b0  FUN_18011e8b0
// size=87 thunk=false
// signature: undefined FUN_18011e8b0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18011e8b0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_18011e240(param_2);
  if (cVar1 != '\0') {
    LOCK();
    _DAT_180401600 = _DAT_180401600 + 1;
    UNLOCK();
    return 0;
  }
  LOCK();
  _DAT_180401618 = _DAT_180401618 + 1;
  UNLOCK();
  FUN_18011e680(param_2);
                    /* WARNING: Could not recover jumptable at 0x00018011e904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*DAT_1804015d0)(param_1,param_2);
  return uVar2;
}


)B18011e8b0",
    "27c10b37d935d13fd595331bca58e994eea78c639d836adf3cdddfb30d4560c0",
    R"F18011e8b0C(FUN_18011e240
FUN_18011e680)F18011e8b0C",
    R"F18011e8b0D(DAT_1804015d0)F18011e8b0D",
    R"F18011e8b0T()F18011e8b0T",
    R"F18011e8b0F(16: if (cVar1 != '\0') {
20: return 0;
29: return uVar2;)F18011e8b0F",
    R"F18011e8b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1804015d0.
TODO: resolve the indirect call in body 28: uVar2 = (*DAT_1804015d0)(param_1,param_2);.)F18011e8b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011e8b0() noexcept {
    return kFunction_0x18011e8b0;
}

// 0x18011e910 FUN_18011e910
// source: re/dump/decompile/0x18011e910_FUN_18011e910.c
// size: 87 bytes; thunk: false
// body sha256: 1d14c051577378f3083eaa7e6e269650affc9f6b9bd0f06355984ab5fb17a553
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011e910{
    "0x18011e910",
    "FUN_18011e910",
    R"F18011e910S(undefined FUN_18011e910())F18011e910S",
    R"B18011e910(// 0x18011e910  FUN_18011e910
// size=87 thunk=false
// signature: undefined FUN_18011e910()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18011e910(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_18011e240(param_2);
  if (cVar1 != '\0') {
    LOCK();
    _DAT_180401600 = _DAT_180401600 + 1;
    UNLOCK();
    return 0;
  }
  LOCK();
  _DAT_180401618 = _DAT_180401618 + 1;
  UNLOCK();
  FUN_18011e680(param_2);
                    /* WARNING: Could not recover jumptable at 0x00018011e964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*DAT_180401620)(param_1,param_2);
  return uVar2;
}


)B18011e910",
    "1d14c051577378f3083eaa7e6e269650affc9f6b9bd0f06355984ab5fb17a553",
    R"F18011e910C(FUN_18011e240
FUN_18011e680)F18011e910C",
    R"F18011e910D(DAT_180401620)F18011e910D",
    R"F18011e910T()F18011e910T",
    R"F18011e910F(16: if (cVar1 != '\0') {
20: return 0;
29: return uVar2;)F18011e910F",
    R"F18011e910U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180401620.
TODO: resolve the indirect call in body 28: uVar2 = (*DAT_180401620)(param_1,param_2);.)F18011e910U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011e910() noexcept {
    return kFunction_0x18011e910;
}

// 0x18011e970 FUN_18011e970
// source: re/dump/decompile/0x18011e970_FUN_18011e970.c
// size: 175 bytes; thunk: false
// body sha256: 12d1a0c1056862417d5d835ba7d8ed1482d9d38cb1d1bc3679f0fe5d54f26a15
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011e970{
    "0x18011e970",
    "FUN_18011e970",
    R"F18011e970S(undefined FUN_18011e970())F18011e970S",
    R"B18011e970(// 0x18011e970  FUN_18011e970
// size=175 thunk=false
// signature: undefined FUN_18011e970()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18011e970(code *UNRECOVERED_JUMPTABLE,undefined8 param_2,char *param_3)

{
  longlong lVar1;
  DWORD DVar2;
  char cVar3;
  DWORD DVar4;
  undefined8 uVar5;
  bool bVar6;
  
  LOCK();
  lVar1 = DAT_180401610 + 1;
  UNLOCK();
  bVar6 = DAT_180401610 == 0;
  DAT_180401610 = lVar1;
  if (bVar6) {
    FUN_180014410("[GMFilter] CallStr path is LIVE -- by-name dispatch reaches us\n");
  }
  cVar3 = FUN_18011e4d0(param_3);
  DVar2 = DAT_1803ff984;
  if (cVar3 == '\0') {
    LOCK();
    _DAT_180401618 = _DAT_180401618 + 1;
    UNLOCK();
    if (((DAT_1803ff954 != '\0') &&
        (((DAT_1803ff984 == 0 || (DVar4 = GetCurrentThreadId(), DVar2 == DVar4)) &&
         (param_3 != (char *)0x0)))) && (*param_3 != '\0')) {
      FUN_1801ff5b0();
    }
                    /* WARNING: Could not recover jumptable at 0x00018011ea1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
    return uVar5;
  }
  LOCK();
  _DAT_180401600 = _DAT_180401600 + 1;
  UNLOCK();
  return 0;
}


)B18011e970",
    "12d1a0c1056862417d5d835ba7d8ed1482d9d38cb1d1bc3679f0fe5d54f26a15",
    R"F18011e970C(FUN_180014410
FUN_18011e4d0
FUN_1801ff5b0)F18011e970C",
    R"F18011e970D(DAT_1803ff954
DAT_1803ff984
DAT_180401610)F18011e970D",
    R"F18011e970T("[GMFilter] CallStr path is LIVE -- by-name dispatch reaches us\\n")F18011e970T",
    R"F18011e970F(24: if (bVar6) {
29: if (cVar3 == '\0') {
33: if (((DAT_1803ff954 != '\0') &&
41: return uVar5;
46: return 0;)F18011e970F",
    R"F18011e970U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff954.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff984.
TODO: recover the declaration, type and value for global/data reference DAT_180401610.
TODO: resolve the indirect call in body 9: undefined8 FUN_18011e970(code *UNRECOVERED_JUMPTABLE,undefined8 param_2,char *param_3).
TODO: resolve the indirect call in body 40: uVar5 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3);.)F18011e970U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011e970() noexcept {
    return kFunction_0x18011e970;
}

// 0x18011ea60 FUN_18011ea60
// source: re/dump/decompile/0x18011ea60_FUN_18011ea60.c
// size: 1161 bytes; thunk: false
// body sha256: c91de06ef2cbc81f2ca96c81441b564a24804ac4b7257a061b007a0f036dfa9f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011ea60{
    "0x18011ea60",
    "FUN_18011ea60",
    R"F18011ea60S(undefined FUN_18011ea60())F18011ea60S",
    R"B18011ea60(// 0x18011ea60  FUN_18011ea60
// size=1161 thunk=false
// signature: undefined FUN_18011ea60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011ea60(undefined8 param_1,byte *param_2,longlong *param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  int iVar6;
  HMODULE pHVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  byte *pbVar11;
  ulonglong uVar12;
  int *piVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined1 auStack_108 [32];
  byte local_e8 [16];
  longlong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  byte *local_78;
  byte *pbStack_70;
  byte *local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  pHVar7 = GetModuleHandleA("client.dll");
  if (pHVar7 == (HMODULE)0x0) {
    return;
  }
  lVar10 = (longlong)pHVar7[0xf].unused;
  piVar13 = (int *)((longlong)&pHVar7[6].unused +
                   (ulonglong)*(ushort *)((longlong)&pHVar7[5].unused + lVar10) + lVar10);
  uVar2 = *(ushort *)((longlong)&pHVar7[1].unused + lVar10 + 2);
  uVar12 = 0;
  if (uVar2 == 0) {
    return;
  }
  while ((*piVar13 != 0x7865742e || ((char)piVar13[1] != 't'))) {
    uVar14 = (short)uVar12 + 1;
    piVar13 = piVar13 + 10;
    uVar12 = (ulonglong)uVar14;
    if (uVar2 <= uVar14) {
      return;
    }
  }
  lVar10 = (longlong)&pHVar7->unused + (ulonglong)(uint)piVar13[3];
  if (lVar10 == 0) {
    return;
  }
  uVar3 = piVar13[2];
  local_78 = (byte *)0x0;
  pbStack_70 = (byte *)0x0;
  local_68 = (byte *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  bVar1 = *param_2;
  while (bVar1 != 0) {
    while (bVar1 == 0x20) {
      param_2 = param_2 + 1;
      bVar1 = *param_2;
    }
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    if (bVar1 == 0x3f) {
      local_e8[0] = 0;
      if (pbStack_70 == local_68) {
        FUN_1802281d0(&local_78,pbStack_70,local_e8);
      }
      else {
        *pbStack_70 = 0;
        pbStack_70 = pbStack_70 + 1;
      }
      if (((longlong)uStack_48 < 0) && (uStack_48 != 0)) {
        local_d8 = -((-uStack_48 - 1 >> 5) * 4 + 4);
      }
      else {
        local_d8 = (uStack_48 >> 5) * 4;
      }
      local_d8 = local_60 + local_d8;
      local_d0 = uStack_48 & 0x1f;
      local_b0 = FUN_180239b60(&local_60,&local_d8,1);
      if (((longlong)local_b0 < 0) && (local_b0 != 0)) {
        local_b8 = -((~local_b0 >> 5) * 4 + 4);
      }
      else {
        local_b8 = (local_b0 >> 5) * 4;
      }
      local_b8 = local_60 + local_b8;
      local_b0 = local_b0 & 0x1f;
      local_c8 = local_b8 + (local_b0 + 1 >> 5) * 4;
      local_c0 = (ulonglong)((uint)(local_b0 + 1) & 0x1f);
      FUN_18023b1d0(&local_b8,&local_c8,0);
      pbVar11 = param_2 + 1;
      if (*pbVar11 == 0x3f) {
        pbVar11 = param_2 + 2;
      }
    }
    else {
      if ((byte)(bVar1 - 0x30) < 10) {
        iVar9 = (char)bVar1 + -0x30;
      }
      else if ((byte)((bVar1 | 0x20) + 0x9f) < 6) {
        iVar9 = (char)(bVar1 | 0x20) + -0x57;
      }
      else {
        iVar9 = -1;
      }
      bVar1 = param_2[1];
      if ((byte)(bVar1 - 0x30) < 10) {
        iVar6 = (char)bVar1 + -0x30;
      }
      else if ((byte)((bVar1 | 0x20) + 0x9f) < 6) {
        iVar6 = (char)(bVar1 | 0x20) + -0x57;
      }
      else {
        iVar6 = -1;
      }
      if ((iVar9 < 0) || (iVar6 < 0)) goto LAB_18011ee79;
      pbVar11 = param_2 + 2;
      local_e8[0] = (char)iVar9 << 4 | (byte)iVar6;
      if (pbStack_70 == local_68) {
        FUN_1802281d0(&local_78,pbStack_70,local_e8);
      }
      else {
        *pbStack_70 = local_e8[0];
        pbStack_70 = pbStack_70 + 1;
      }
      if (((longlong)uStack_48 < 0) && (uStack_48 != 0)) {
        local_a8 = -((-uStack_48 - 1 >> 5) * 4 + 4);
      }
      else {
        local_a8 = (uStack_48 >> 5) * 4;
      }
      local_a8 = local_60 + local_a8;
      local_a0 = uStack_48 & 0x1f;
      local_80 = FUN_180239b60(&local_60,&local_a8,1);
      if (((longlong)local_80 < 0) && (local_80 != 0)) {
        local_88 = -((~local_80 >> 5) * 4 + 4);
      }
      else {
        local_88 = (local_80 >> 5) * 4;
      }
      local_88 = local_60 + local_88;
      local_80 = local_80 & 0x1f;
      local_98 = local_88 + (local_80 + 1 >> 5) * 4;
      local_90 = (ulonglong)((uint)(local_80 + 1) & 0x1f);
      FUN_18023b1d0(&local_88,&local_98,CONCAT71((int7)((ulonglong)local_88 >> 8),1));
    }
    param_2 = pbVar11;
    bVar1 = *pbVar11;
  }
  if (local_78 != pbStack_70) {
    uVar15 = (ulonglong)uVar3 + lVar10;
    uVar12 = (longlong)pbStack_70 - (longlong)local_78;
    pbVar11 = local_78;
    for (; local_d8 = lVar10, lVar10 + uVar12 < uVar15; lVar10 = lVar10 + 1) {
      uVar8 = 0;
      if (uVar12 != 0) {
        do {
          if (((*(uint *)(local_60 + (uVar8 >> 5) * 4) >> ((byte)uVar8 & 0x1f) & 1) != 0) &&
             (*(byte *)(uVar8 + lVar10) != pbVar11[uVar8])) goto LAB_18011ee65;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar12);
      }
      plVar4 = (longlong *)param_3[1];
      if (plVar4 == (longlong *)param_3[2]) {
        FUN_180221c00(param_3,plVar4,&local_d8);
      }
      else {
        *plVar4 = lVar10;
        param_3[1] = param_3[1] + 8;
      }
      if (3 < (int)(param_3[1] - *param_3 >> 3)) break;
      lVar10 = lVar10 + -1 + uVar12;
      pbVar11 = local_78;
LAB_18011ee65:
    }
  }
LAB_18011ee79:
  FUN_18021e060(&local_60);
  if (local_78 != (byte *)0x0) {
    pbVar11 = local_78;
    if ((0xfff < (ulonglong)((longlong)local_68 - (longlong)local_78)) &&
       (pbVar11 = *(byte **)(local_78 + -8), (byte *)0x1f < local_78 + (-8 - (longlong)pbVar11))) {
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    free(pbVar11);
  }
  return;
}


)B18011ea60",
    "c91de06ef2cbc81f2ca96c81441b564a24804ac4b7257a061b007a0f036dfa9f",
    R"F18011ea60C(FUN_18021e060
FUN_180221c00
FUN_1802281d0
FUN_180239b60
FUN_18023b1d0)F18011ea60C",
    R"F18011ea60D(LAB_18011ee65
LAB_18011ee79
DAT_1803da4c0)F18011ea60D",
    R"F18011ea60T("client.dll")F18011ea60T",
    R"F18011ea60F(52: if (pHVar7 == (HMODULE)0x0) {
53: return;
60: if (uVar2 == 0) {
61: return;
63: while ((*piVar13 != 0x7865742e || ((char)piVar13[1] != 't'))) {
67: if (uVar2 <= uVar14) {
68: return;
72: if (lVar10 == 0) {
73: return;
84: while (bVar1 != 0) {
85: while (bVar1 == 0x20) {
90: if (bVar1 == 0) break;
91: if (bVar1 == 0x3f) {
93: if (pbStack_70 == local_68) {
96: else {
100: if (((longlong)uStack_48 < 0) && (uStack_48 != 0)) {
103: else {
109: if (((longlong)local_b0 < 0) && (local_b0 != 0)) {
112: else {
121: if (*pbVar11 == 0x3f) {
125: else {
126: if ((byte)(bVar1 - 0x30) < 10) {
129: else if ((byte)((bVar1 | 0x20) + 0x9f) < 6) {
132: else {
136: if ((byte)(bVar1 - 0x30) < 10) {
139: else if ((byte)((bVar1 | 0x20) + 0x9f) < 6) {
142: else {
145: if ((iVar9 < 0) || (iVar6 < 0)) goto LAB_18011ee79;
148: if (pbStack_70 == local_68) {
151: else {
155: if (((longlong)uStack_48 < 0) && (uStack_48 != 0)) {
158: else {
164: if (((longlong)local_80 < 0) && (local_80 != 0)) {
167: else {
179: if (local_78 != pbStack_70) {
183: for (; local_d8 = lVar10, lVar10 + uVar12 < uVar15; lVar10 = lVar10 + 1) {
185: if (uVar12 != 0) {
186: do {
187: if (((*(uint *)(local_60 + (uVar8 >> 5) * 4) >> ((byte)uVar8 & 0x1f) & 1) != 0) &&
193: if (plVar4 == (longlong *)param_3[2]) {
196: else {
200: if (3 < (int)(param_3[1] - *param_3 >> 3)) break;
203: LAB_18011ee65:
206: LAB_18011ee79:
208: if (local_78 != (byte *)0x0) {
210: if ((0xfff < (ulonglong)((longlong)local_68 - (longlong)local_78)) &&
216: return;
220: return;)F18011ea60F",
    R"F18011ea60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18011ee65.
TODO: recover the declaration, type and value for global/data reference LAB_18011ee79.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 212: pcVar5 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 213: (*pcVar5)(5);.
TODO: resolve the indirect call in body 214: pcVar5 = (code *)swi(3);.
TODO: resolve the indirect call in body 215: (*pcVar5)();.)F18011ea60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011ea60() noexcept {
    return kFunction_0x18011ea60;
}

// 0x18011eef0 FUN_18011eef0
// source: re/dump/decompile/0x18011eef0_FUN_18011eef0.c
// size: 593 bytes; thunk: false
// body sha256: 737abe44d9733d64d1ad5cdd841444c93f7a65dd59d6dd1547a7bc135fc31c86
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011eef0{
    "0x18011eef0",
    "FUN_18011eef0",
    R"F18011eef0S(undefined FUN_18011eef0())F18011eef0S",
    R"B18011eef0(// 0x18011eef0  FUN_18011eef0
// size=593 thunk=false
// signature: undefined FUN_18011eef0()
// status: ok


ulonglong FUN_18011eef0(longlong param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  HMODULE pHVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  pHVar3 = GetModuleHandleA("client.dll");
  if (pHVar3 != (HMODULE)0x0) {
    lVar7 = (longlong)pHVar3[0xf].unused;
    uVar11 = 0;
    uVar10 = 0;
    uVar1 = *(ushort *)((longlong)&pHVar3[1].unused + lVar7 + 2);
    lVar7 = (longlong)&pHVar3[6].unused +
            (ulonglong)*(ushort *)((longlong)&pHVar3[5].unused + lVar7) + lVar7;
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        if (((int)*(uint *)(lVar7 + 0x24) < 0) && ((*(uint *)(lVar7 + 0x24) & 0x40) != 0)) {
          uVar4 = (longlong)&pHVar3->unused + (ulonglong)*(uint *)(lVar7 + 0xc);
          uVar8 = *(uint *)(lVar7 + 8) + uVar4;
          if ((uVar11 == 0) || (uVar4 < uVar11)) {
            uVar11 = uVar4;
          }
          if (uVar10 < uVar8) {
            uVar10 = uVar8;
          }
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x28;
      } while (uVar5 < uVar1);
      if (uVar11 != 0) {
        uVar8 = 0;
        uVar4 = 0;
        uVar9 = 0;
        do {
          if ((*(char *)(param_1 + uVar9) == 'H') && (*(char *)(param_1 + 1 + uVar9) == -0x75)) {
            if (*(char *)(param_1 + 2 + uVar9) != '\r') {
LAB_18011f073:
              if ((*(char *)(param_1 + 2 + uVar9) != 'H') ||
                 (*(char *)(param_1 + 3 + uVar9) != -0x75)) goto LAB_18011efdc;
              if (*(char *)(param_1 + 4 + uVar9) != '\r') goto LAB_18011f04c;
              uVar6 = (longlong)*(int *)(param_1 + 5 + uVar9) + 9 + uVar9 + param_1;
              if ((uVar11 <= uVar6) && (uVar6 < uVar10)) {
                uVar2 = uVar6;
                if (uVar4 != 0) {
                  uVar2 = uVar4;
                }
                uVar4 = uVar2;
                if (uVar6 != uVar4) {
                  uVar8 = uVar6;
                }
              }
              goto LAB_18011f0c1;
            }
            uVar6 = (longlong)*(int *)(param_1 + 3 + uVar9) + 7 + uVar9 + param_1;
            if ((uVar11 <= uVar6) && (uVar6 < uVar10)) {
              uVar2 = uVar6;
              if (uVar4 != 0) {
                uVar2 = uVar4;
              }
              uVar4 = uVar2;
              if (uVar6 != uVar4) {
                uVar8 = uVar6;
              }
            }
LAB_18011efdc:
            if ((*(char *)(param_1 + 3 + uVar9) != 'H') || (*(char *)(param_1 + 4 + uVar9) != -0x75)
               ) goto LAB_18011f04c;
            if (*(char *)(param_1 + 5 + uVar9) != '\r') goto LAB_18011f0c1;
            lVar7 = (longlong)*(int *)(param_1 + 6 + uVar9) + 10;
LAB_18011f0e2:
            uVar6 = lVar7 + uVar9 + param_1;
            if ((uVar11 <= uVar6) && (uVar6 < uVar10)) {
              uVar2 = uVar6;
              if (uVar4 != 0) {
                uVar2 = uVar4;
              }
              uVar4 = uVar2;
              if (uVar6 != uVar4) {
                uVar8 = uVar6;
              }
            }
          }
          else {
            if ((*(char *)(param_1 + 1 + uVar9) != 'H') || (*(char *)(param_1 + 2 + uVar9) != -0x75)
               ) goto LAB_18011f073;
            if (*(char *)(param_1 + 3 + uVar9) != '\r') goto LAB_18011efdc;
            uVar6 = (longlong)*(int *)(param_1 + 4 + uVar9) + 8 + uVar9 + param_1;
            if ((uVar11 <= uVar6) && (uVar6 < uVar10)) {
              uVar2 = uVar6;
              if (uVar4 != 0) {
                uVar2 = uVar4;
              }
              uVar4 = uVar2;
              if (uVar6 != uVar4) {
                uVar8 = uVar6;
              }
            }
LAB_18011f04c:
            if ((*(char *)(param_1 + 4 + uVar9) == 'H') && (*(char *)(param_1 + 5 + uVar9) == -0x75)
               ) {
              if (*(char *)(param_1 + 6 + uVar9) == '\r') {
                lVar7 = (longlong)*(int *)(param_1 + 7 + uVar9) + 0xb;
                goto LAB_18011f0e2;
              }
            }
            else {
LAB_18011f0c1:
              if (((*(char *)(param_1 + 5 + uVar9) == 'H') &&
                  (*(char *)(param_1 + 6 + uVar9) == -0x75)) &&
                 (*(char *)(param_1 + 7 + uVar9) == '\r')) {
                lVar7 = (longlong)*(int *)(param_1 + 8 + uVar9) + 0xc;
                goto LAB_18011f0e2;
              }
            }
          }
          uVar9 = uVar9 + 6;
          if (299 < uVar9) {
            if (uVar8 != 0) {
              uVar4 = uVar8;
            }
            return uVar4;
          }
        } while( true );
      }
    }
  }
  return 0;
}


)B18011eef0",
    "737abe44d9733d64d1ad5cdd841444c93f7a65dd59d6dd1547a7bc135fc31c86",
    R"F18011eef0C()F18011eef0C",
    R"F18011eef0D(LAB_18011efdc
LAB_18011f04c
LAB_18011f073
LAB_18011f0c1
LAB_18011f0e2)F18011eef0D",
    R"F18011eef0T("client.dll")F18011eef0T",
    R"F18011eef0F(23: if (pHVar3 != (HMODULE)0x0) {
31: if (uVar1 != 0) {
32: do {
33: if (((int)*(uint *)(lVar7 + 0x24) < 0) && ((*(uint *)(lVar7 + 0x24) & 0x40) != 0)) {
36: if ((uVar11 == 0) || (uVar4 < uVar11)) {
39: if (uVar10 < uVar8) {
46: if (uVar11 != 0) {
50: do {
51: if ((*(char *)(param_1 + uVar9) == 'H') && (*(char *)(param_1 + 1 + uVar9) == -0x75)) {
52: if (*(char *)(param_1 + 2 + uVar9) != '\r') {
53: LAB_18011f073:
54: if ((*(char *)(param_1 + 2 + uVar9) != 'H') ||
56: if (*(char *)(param_1 + 4 + uVar9) != '\r') goto LAB_18011f04c;
58: if ((uVar11 <= uVar6) && (uVar6 < uVar10)) {
60: if (uVar4 != 0) {
64: if (uVar6 != uVar4) {
68: goto LAB_18011f0c1;
71: if ((uVar11 <= uVar6) && (uVar6 < uVar10)) {
73: if (uVar4 != 0) {
77: if (uVar6 != uVar4) {
81: LAB_18011efdc:
82: if ((*(char *)(param_1 + 3 + uVar9) != 'H') || (*(char *)(param_1 + 4 + uVar9) != -0x75)
84: if (*(char *)(param_1 + 5 + uVar9) != '\r') goto LAB_18011f0c1;
86: LAB_18011f0e2:
88: if ((uVar11 <= uVar6) && (uVar6 < uVar10)) {
90: if (uVar4 != 0) {
94: if (uVar6 != uVar4) {
99: else {
100: if ((*(char *)(param_1 + 1 + uVar9) != 'H') || (*(char *)(param_1 + 2 + uVar9) != -0x75)
102: if (*(char *)(param_1 + 3 + uVar9) != '\r') goto LAB_18011efdc;
104: if ((uVar11 <= uVar6) && (uVar6 < uVar10)) {
106: if (uVar4 != 0) {
110: if (uVar6 != uVar4) {
114: LAB_18011f04c:
115: if ((*(char *)(param_1 + 4 + uVar9) == 'H') && (*(char *)(param_1 + 5 + uVar9) == -0x75)
117: if (*(char *)(param_1 + 6 + uVar9) == '\r') {
119: goto LAB_18011f0e2;
122: else {
123: LAB_18011f0c1:
124: if (((*(char *)(param_1 + 5 + uVar9) == 'H') &&
128: goto LAB_18011f0e2;
133: if (299 < uVar9) {
134: if (uVar8 != 0) {
137: return uVar4;
143: return 0;)F18011eef0F",
    R"F18011eef0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18011efdc.
TODO: recover the declaration, type and value for global/data reference LAB_18011f04c.
TODO: recover the declaration, type and value for global/data reference LAB_18011f073.
TODO: recover the declaration, type and value for global/data reference LAB_18011f0c1.
TODO: recover the declaration, type and value for global/data reference LAB_18011f0e2.)F18011eef0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011eef0() noexcept {
    return kFunction_0x18011eef0;
}

// 0x18011f150 FUN_18011f150
// source: re/dump/decompile/0x18011f150_FUN_18011f150.c
// size: 1240 bytes; thunk: false
// body sha256: 9ed983e0e954e42e63394da9c634e4f31a7526c832cb9306c81e648b8c0168a5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011f150{
    "0x18011f150",
    "FUN_18011f150",
    R"F18011f150S(undefined FUN_18011f150())F18011f150S",
    R"B18011f150(// 0x18011f150  FUN_18011f150
// size=1240 thunk=false
// signature: undefined FUN_18011f150()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011f150(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *_Memory;
  ulonglong uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  ulonglong local_a8;
  char *local_a0;
  char *local_98;
  ulonglong local_90;
  char *local_88;
  undefined8 *local_78;
  longlong lStack_70;
  longlong local_68;
  undefined8 *local_60;
  longlong lStack_58;
  longlong local_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong local_38;
  ulonglong local_30;
  
  puVar6 = auStack_c8;
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  if (DAT_1804015f8 == '\0') {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
    lVar7 = 0;
    local_38 = 0;
    FUN_18011ea60(0,"40 53 48 83 EC 30 48 8B 0D ? ? ? ? 8D 5A 02 83 B9 0C 10 00 00 00",&local_48);
    lVar8 = lVar7;
    if (local_48 != plStack_40) {
      lVar8 = *local_48;
    }
    uVar5 = (longlong)plStack_40 - (longlong)local_48 >> 3;
    local_60 = (undefined8 *)0x0;
    lStack_58 = 0;
    local_50 = 0;
    FUN_18011ea60(0,
                  "40 53 48 83 EC 30 48 89 6C 24 40 48 8B D9 48 8B 0D ? ? ? ? 8B EA 48 89 74 24 48 8B B1 0C 10 00 00 85 F6"
                  ,&local_60);
    local_78 = (undefined8 *)0x0;
    lStack_70 = 0;
    local_68 = 0;
    FUN_18011ea60(0,
                  "40 53 48 83 EC 30 48 89 6C 24 40 48 8B D9 48 8B 0D ? ? ? ? 48 8B EA 48 89 74 24 48 8B B1 0C 10 00 00 85 F6"
                  ,&local_78);
    local_90 = lStack_70 - (longlong)local_78 >> 3;
    local_a8 = lStack_58 - (longlong)local_60 >> 3;
    pcVar9 = "";
    local_98 = " (WARN: expected 2 clones)";
    local_88 = " (WARN: expected 2 clones)";
    if (1 < local_90) {
      local_88 = "";
    }
    if (1 < local_a8) {
      local_98 = "";
    }
    local_a0 = " (WARN: no CallN found)";
    if (local_a8 != 0) {
      local_a0 = "";
    }
    if (1 < uVar5) {
      pcVar9 = " AMBIGUOUS";
    }
    FUN_180014410("[GMFilter] Call1=%p (matches=%zu%s)  CallN matches=%zu%s%s  CallStr matches=%zu%s\n"
                  ,lVar8,uVar5,pcVar9);
    if (lVar8 == 0) {
      FUN_180014410("[GMFilter] Install ABORT: Call1 pattern not found -- feature disabled\n");
    }
    else {
      DAT_1804015d8 = (longlong *)FUN_18011eef0(lVar8);
      if (DAT_1804015d8 != (longlong *)0x0) {
        lVar7 = *DAT_1804015d8;
      }
      FUN_180014410("[GMFilter] callback global = %p  (deref = %p)\n",DAT_1804015d8,lVar7);
      iVar2 = FUN_180242fc0(lVar8,FUN_18011e7f0,&DAT_1804015e0);
      uVar3 = FUN_1802436b0(iVar2);
      FUN_180014410("[GMFilter] MH Call1  @ %p: %s\n",lVar8,uVar3);
      if (iVar2 == 0) {
        FUN_180243560(lVar8,1);
      }
      if (1 < (ulonglong)((longlong)plStack_40 - (longlong)local_48 >> 3)) {
        iVar2 = FUN_180242fc0(local_48[1],FUN_18011e850,&DAT_180401608);
        uVar3 = FUN_1802436b0(iVar2);
        FUN_180014410("[GMFilter] MH Call1b @ %p: %s\n",local_48[1],uVar3);
        if (iVar2 == 0) {
          FUN_180243560(local_48[1],1);
        }
      }
      if (lStack_58 - (longlong)local_60 >> 3 != 0) {
        iVar2 = FUN_180242fc0(*local_60,FUN_18011e8b0,&DAT_1804015d0);
        uVar3 = FUN_1802436b0(iVar2);
        FUN_180014410("[GMFilter] MH CallN1 @ %p: %s\n",*local_60,uVar3);
        if (iVar2 == 0) {
          FUN_180243560(*local_60,1);
        }
      }
      if (1 < (ulonglong)(lStack_58 - (longlong)local_60 >> 3)) {
        iVar2 = FUN_180242fc0(local_60[1],FUN_18011e910,&DAT_180401620);
        uVar3 = FUN_1802436b0(iVar2);
        FUN_180014410("[GMFilter] MH CallN2 @ %p: %s\n",local_60[1],uVar3);
        if (iVar2 == 0) {
          FUN_180243560(local_60[1],1);
        }
      }
      if (lStack_70 - (longlong)local_78 >> 3 != 0) {
        iVar2 = FUN_180242fc0(*local_78,&LAB_18011ea20,&DAT_1804015e8);
        uVar3 = FUN_1802436b0(iVar2);
        FUN_180014410("[GMFilter] MH CallStr1 @ %p: %s\n",*local_78,uVar3);
        if (iVar2 == 0) {
          FUN_180243560(*local_78,1);
        }
      }
      if (1 < (ulonglong)(lStack_70 - (longlong)local_78 >> 3)) {
        iVar2 = FUN_180242fc0(local_78[1],&LAB_18011ea40,&DAT_1804015f0);
        uVar3 = FUN_1802436b0(iVar2);
        FUN_180014410("[GMFilter] MH CallStr2 @ %p: %s\n",local_78[1],uVar3);
        if (iVar2 == 0) {
          FUN_180243560(local_78[1],1);
        }
      }
      DAT_1804015f8 = '\x01';
    }
    puVar6 = auStack_c8;
    if (local_78 != (undefined8 *)0x0) {
      puVar4 = local_78;
      puVar6 = auStack_c8;
      if ((0xfff < (ulonglong)((local_68 - (longlong)local_78 >> 3) * 8)) &&
         (puVar4 = (undefined8 *)local_78[-1], puVar6 = auStack_c8,
         0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)puVar4)))) {
        puVar4 = (undefined8 *)0x5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        puVar6 = auStack_c0;
      }
      *(undefined8 *)(puVar6 + -8) = 0x18011f550;
      free(puVar4);
      local_78 = (undefined8 *)0x0;
      lStack_70 = 0;
      local_68 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      puVar4 = local_60;
      if ((0xfff < (ulonglong)((local_50 - (longlong)local_60 >> 3) * 8)) &&
         (puVar4 = (undefined8 *)local_60[-1],
         0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)puVar4)))) {
        puVar4 = (undefined8 *)0x5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        puVar6 = puVar6 + 8;
      }
      *(undefined8 *)(puVar6 + -8) = 0x18011f5aa;
      free(puVar4);
      local_60 = (undefined8 *)0x0;
      lStack_58 = 0;
      local_50 = 0;
    }
    if (local_48 != (longlong *)0x0) {
      _Memory = local_48;
      if ((0xfff < (ulonglong)((local_38 - (longlong)local_48 >> 3) * 8)) &&
         (_Memory = (longlong *)local_48[-1],
         0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)_Memory)))) {
        _Memory = (longlong *)0x5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        puVar6 = puVar6 + 8;
      }
      *(undefined8 *)(puVar6 + -8) = 0x18011f604;
      free(_Memory);
    }
  }
  *(undefined8 *)(puVar6 + -8) = 0x18011f61c;
  return;
}


)B18011f150",
    "9ed983e0e954e42e63394da9c634e4f31a7526c832cb9306c81e648b8c0168a5",
    R"F18011f150C(FUN_180014410
FUN_18011e7f0
FUN_18011e850
FUN_18011e8b0
FUN_18011e910
FUN_18011ea60
FUN_18011eef0
FUN_180242fc0
FUN_180243560
FUN_1802436b0)F18011f150C",
    R"F18011f150D(LAB_18011ea20
LAB_18011ea40
DAT_1803da4c0
DAT_1804015d0
DAT_1804015d8
DAT_1804015e0
DAT_1804015e8
DAT_1804015f0
DAT_1804015f8
DAT_180401608
DAT_180401620)F18011f150D",
    R"F18011f150T(""
" AMBIGUOUS"
" (WARN: no CallN found)"
" (WARN: expected 2 clones)"
"[GMFilter] MH Call1  @ %p: %s\\n"
"[GMFilter] MH Call1b @ %p: %s\\n"
"[GMFilter] MH CallN1 @ %p: %s\\n"
"[GMFilter] MH CallN2 @ %p: %s\\n"
"[GMFilter] MH CallStr1 @ %p: %s\\n"
"[GMFilter] MH CallStr2 @ %p: %s\\n"
"[GMFilter] callback global = %p  (deref = %p)\\n"
"40 53 48 83 EC 30 48 8B 0D ? ? ? ? 8D 5A 02 83 B9 0C 10 00 00 00"
"[GMFilter] Install ABORT: Call1 pattern not found -- feature disabled\\n"
"[GMFilter] Call1=%p (matches=%zu%s)  CallN matches=%zu%s%s  CallStr matches=%zu%s\\n"
"40 53 48 83 EC 30 48 89 6C 24 40 48 8B D9 48 8B 0D ? ? ? ? 8B EA 48 89 74 24 48 8B B1 0C 10 00 00 85 F6"
"40 53 48 83 EC 30 48 89 6C 24 40 48 8B D9 48 8B 0D ? ? ? ? 48 8B EA 48 89 74 24 48 8B B1 0C 10 00 00 85 F6")F18011f150T",
    R"F18011f150F(43: if (DAT_1804015f8 == '\0') {
50: if (local_48 != plStack_40) {
71: if (1 < local_90) {
74: if (1 < local_a8) {
78: if (local_a8 != 0) {
81: if (1 < uVar5) {
86: if (lVar8 == 0) {
89: else {
91: if (DAT_1804015d8 != (longlong *)0x0) {
98: if (iVar2 == 0) {
101: if (1 < (ulonglong)((longlong)plStack_40 - (longlong)local_48 >> 3)) {
105: if (iVar2 == 0) {
109: if (lStack_58 - (longlong)local_60 >> 3 != 0) {
113: if (iVar2 == 0) {
117: if (1 < (ulonglong)(lStack_58 - (longlong)local_60 >> 3)) {
121: if (iVar2 == 0) {
125: if (lStack_70 - (longlong)local_78 >> 3 != 0) {
129: if (iVar2 == 0) {
133: if (1 < (ulonglong)(lStack_70 - (longlong)local_78 >> 3)) {
137: if (iVar2 == 0) {
144: if (local_78 != (undefined8 *)0x0) {
147: if ((0xfff < (ulonglong)((local_68 - (longlong)local_78 >> 3) * 8)) &&
161: if (local_60 != (undefined8 *)0x0) {
163: if ((0xfff < (ulonglong)((local_50 - (longlong)local_60 >> 3) * 8)) &&
177: if (local_48 != (longlong *)0x0) {
179: if ((0xfff < (ulonglong)((local_38 - (longlong)local_48 >> 3) * 8)) &&
192: return;)F18011f150F",
    R"F18011f150U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18011ea20.
TODO: recover the declaration, type and value for global/data reference LAB_18011ea40.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1804015d0.
TODO: recover the declaration, type and value for global/data reference DAT_1804015d8.
TODO: recover the declaration, type and value for global/data reference DAT_1804015e0.
TODO: recover the declaration, type and value for global/data reference DAT_1804015e8.
TODO: recover the declaration, type and value for global/data reference DAT_1804015f0.
TODO: recover the declaration, type and value for global/data reference DAT_1804015f8.
TODO: recover the declaration, type and value for global/data reference DAT_180401608.
TODO: recover the declaration, type and value for global/data reference DAT_180401620.
TODO: resolve the indirect call in body 151: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 152: (*pcVar1)();.
TODO: resolve the indirect call in body 167: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 168: (*pcVar1)();.
TODO: resolve the indirect call in body 183: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 184: (*pcVar1)();.)F18011f150U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011f150() noexcept {
    return kFunction_0x18011f150;
}

// 0x18011f630 FUN_18011f630
// source: re/dump/decompile/0x18011f630_FUN_18011f630.c
// size: 37 bytes; thunk: false
// body sha256: 036d6dea72a728151c9c962f0eadf25efc060a1509afe4b380a5a4cd2d9e20b1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011f630{
    "0x18011f630",
    "FUN_18011f630",
    R"F18011f630S(undefined FUN_18011f630())F18011f630S",
    R"B18011f630(// 0x18011f630  FUN_18011f630
// size=37 thunk=false
// signature: undefined FUN_18011f630()
// status: ok


void FUN_18011f630(longlong param_1)

{
  FUN_180209700(param_1 + 0x18);
  FUN_18020da00(param_1 + 8);
  return;
}


)B18011f630",
    "036d6dea72a728151c9c962f0eadf25efc060a1509afe4b380a5a4cd2d9e20b1",
    R"F18011f630C(FUN_180209700
FUN_18020da00)F18011f630C",
    R"F18011f630D()F18011f630D",
    R"F18011f630T()F18011f630T",
    R"F18011f630F(12: return;)F18011f630F",
    R"F18011f630U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18011f630U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011f630() noexcept {
    return kFunction_0x18011f630;
}

// 0x18011f660 FUN_18011f660
// source: re/dump/decompile/0x18011f660_FUN_18011f660.c
// size: 37 bytes; thunk: false
// body sha256: 447b5390b2af4d67aae08ff1937d3a43edb6053845adf07dd4f1fb576840b3bc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011f660{
    "0x18011f660",
    "FUN_18011f660",
    R"F18011f660S(undefined FUN_18011f660())F18011f660S",
    R"B18011f660(// 0x18011f660  FUN_18011f660
// size=37 thunk=false
// signature: undefined FUN_18011f660()
// status: ok


void FUN_18011f660(longlong param_1)

{
  FUN_180209700(param_1 + 0x18);
  FUN_18020da00(param_1 + 8);
  return;
}


)B18011f660",
    "447b5390b2af4d67aae08ff1937d3a43edb6053845adf07dd4f1fb576840b3bc",
    R"F18011f660C(FUN_180209700
FUN_18020da00)F18011f660C",
    R"F18011f660D()F18011f660D",
    R"F18011f660T()F18011f660T",
    R"F18011f660F(12: return;)F18011f660F",
    R"F18011f660U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18011f660U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011f660() noexcept {
    return kFunction_0x18011f660;
}

// 0x18011f690 FUN_18011f690
// source: re/dump/decompile/0x18011f690_FUN_18011f690.c
// size: 75 bytes; thunk: false
// body sha256: 0b4f46f9239f8605f9915cf3f8d275422f91dc386dcdfbed9c4e2ccf776401c9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011f690{
    "0x18011f690",
    "FUN_18011f690",
    R"F18011f690S(undefined FUN_18011f690())F18011f690S",
    R"B18011f690(// 0x18011f690  FUN_18011f690
// size=75 thunk=false
// signature: undefined FUN_18011f690()
// status: ok


void FUN_18011f690(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  *param_2 = 0;
  if (param_1 != 0) {
    uVar1 = 0;
    while ((uVar1 + 1 < param_3 && (*(char *)(uVar1 + param_1) != '\0'))) {
      param_2[uVar1] = *(char *)(uVar1 + param_1);
      uVar1 = uVar1 + 1;
    }
    param_2[uVar1] = 0;
  }
  return;
}


)B18011f690",
    "0b4f46f9239f8605f9915cf3f8d275422f91dc386dcdfbed9c4e2ccf776401c9",
    R"F18011f690C()F18011f690C",
    R"F18011f690D()F18011f690D",
    R"F18011f690T()F18011f690T",
    R"F18011f690F(13: if (param_1 != 0) {
15: while ((uVar1 + 1 < param_3 && (*(char *)(uVar1 + param_1) != '\0'))) {
21: return;)F18011f690F",
    R"F18011f690U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18011f690U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011f690() noexcept {
    return kFunction_0x18011f690;
}

// 0x18011f6f0 FUN_18011f6f0
// source: re/dump/decompile/0x18011f6f0_FUN_18011f6f0.c
// size: 64 bytes; thunk: false
// body sha256: 5458946a1fb8d26ba6ca35f062c072affdd8cd972e8c91aa31acf537a5324aff
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011f6f0{
    "0x18011f6f0",
    "FUN_18011f6f0",
    R"F18011f6f0S(undefined FUN_18011f6f0())F18011f6f0S",
    R"B18011f6f0(// 0x18011f6f0  FUN_18011f6f0
// size=64 thunk=false
// signature: undefined FUN_18011f6f0()
// status: ok


void FUN_18011f6f0(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    uVar1 = FUN_18001e3f0();
    FUN_18011f690(uVar1,param_2,0x40);
    return;
  }
  return;
}


)B18011f6f0",
    "5458946a1fb8d26ba6ca35f062c072affdd8cd972e8c91aa31acf537a5324aff",
    R"F18011f6f0C(FUN_18001e3f0
FUN_18011f690)F18011f6f0C",
    R"F18011f6f0D()F18011f6f0D",
    R"F18011f6f0T()F18011f6f0T",
    R"F18011f6f0F(13: if ((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
16: return;
18: return;)F18011f6f0F",
    R"F18011f6f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18011f6f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011f6f0() noexcept {
    return kFunction_0x18011f6f0;
}

// 0x18011f730 FUN_18011f730
// source: re/dump/decompile/0x18011f730_FUN_18011f730.c
// size: 76 bytes; thunk: false
// body sha256: 2d4de0c21dcc2c9923d01f1c425179ec8c1b05e57b432a93928e433e38879dda
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011f730{
    "0x18011f730",
    "FUN_18011f730",
    R"F18011f730S(undefined FUN_18011f730())F18011f730S",
    R"B18011f730(// 0x18011f730  FUN_18011f730
// size=76 thunk=false
// signature: undefined FUN_18011f730()
// status: ok


void FUN_18011f730(undefined4 param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  if ((DAT_1804015d8 != (longlong *)0x0) &&
     (plVar1 = (longlong *)*DAT_1804015d8, plVar1 != (longlong *)0x0)) {
    uVar2 = (**(code **)(*plVar1 + 0x3d8))(plVar1,param_1);
    FUN_18011f690(uVar2,param_2,0x60);
    return;
  }
  return;
}


)B18011f730",
    "2d4de0c21dcc2c9923d01f1c425179ec8c1b05e57b432a93928e433e38879dda",
    R"F18011f730C(FUN_18011f690)F18011f730C",
    R"F18011f730D(DAT_1804015d8)F18011f730D",
    R"F18011f730T()F18011f730T",
    R"F18011f730F(14: if ((DAT_1804015d8 != (longlong *)0x0) &&
18: return;
20: return;)F18011f730F",
    R"F18011f730U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1804015d8.
TODO: resolve the indirect call in body 16: uVar2 = (**(code **)(*plVar1 + 0x3d8))(plVar1,param_1);.)F18011f730U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011f730() noexcept {
    return kFunction_0x18011f730;
}

// 0x18011f780 FUN_18011f780
// source: re/dump/decompile/0x18011f780_FUN_18011f780.c
// size: 430 bytes; thunk: false
// body sha256: bbfdc1146ace65ac6a94ab3b1e4528d97ade4b67bfee70ebe564863c6c7120af
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011f780{
    "0x18011f780",
    "FUN_18011f780",
    R"F18011f780S(undefined FUN_18011f780())F18011f780S",
    R"B18011f780(// 0x18011f780  FUN_18011f780
// size=430 thunk=false
// signature: undefined FUN_18011f780()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011f780(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char *pcVar2;
  size_t sVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_208 [32];
  char *local_1e8;
  undefined4 local_1e0;
  char *local_1d8;
  undefined8 **local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  ulonglong uStack_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined8 local_190;
  char local_188;
  char local_178 [64];
  char local_138 [96];
  char local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_208;
  local_198 = 0x93fd561a96ab0c67;
  local_190 = 0xd1ec5445d87064a8;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1a8,&local_198);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,&local_1c8,&local_190);
  pcVar2 = (char *)FUN_1801fcfc0(*plVar1 + 0x28);
  if ((*pcVar2 != '\0') && (param_1 != 0)) {
    FUN_18011f6f0(param_1,local_178);
    FUN_18011f730(param_2,local_138);
    local_1d8 = local_138;
    if (local_138[0] == '\0') {
      local_1d8 = "<unnamed>";
    }
    local_1e8 = local_178;
    if (local_178[0] == '\0') {
      local_1e8 = "<unknown>";
    }
    local_1e0 = param_2;
    FUN_180012b20(local_d8,0xc0,0xffffffffffffffff,"%s::#%d %s");
    local_1c8 = (undefined8 ***)0x0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    sVar3 = strlen(local_d8);
    FUN_18001d080(&local_1c8,local_d8,sVar3);
    if (DAT_1804301b0 < 400) {
      FUN_180219e20(&DAT_1804301a0,&local_190,&local_1c8);
      if (local_188 != '\0') {
        pppuVar4 = &local_1c8;
        if (0xf < uStack_1b0) {
          pppuVar4 = (undefined8 ***)local_1c8;
        }
        FUN_180014410("[SEPROBE] %s\n",pppuVar4);
      }
    }
    FUN_18020e450(&local_1c8);
  }
  (*DAT_1804236e0)(param_1,param_2);
  return;
}


)B18011f780",
    "bbfdc1146ace65ac6a94ab3b1e4528d97ade4b67bfee70ebe564863c6c7120af",
    R"F18011f780C(FUN_180012b20
FUN_180014410
FUN_18001d080
FUN_18011f6f0
FUN_18011f730
FUN_1801fcfc0
FUN_18020e450
FUN_180219e20
FUN_180241a30)F18011f780C",
    R"F18011f780D(DAT_1803da4c0
DAT_1803fadf0
DAT_1804236e0
DAT_1804301a0
DAT_1804301b0)F18011f780D",
    R"F18011f780T("<unknown>"
"<unnamed>"
"%s::#%d %s"
"[SEPROBE] %s\\n")F18011f780T",
    R"F18011f780F(39: if ((*pcVar2 != '\0') && (param_1 != 0)) {
43: if (local_138[0] == '\0') {
47: if (local_178[0] == '\0') {
58: if (DAT_1804301b0 < 400) {
60: if (local_188 != '\0') {
62: if (0xf < uStack_1b0) {
71: return;)F18011f780F",
    R"F18011f780U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1804236e0.
TODO: recover the declaration, type and value for global/data reference DAT_1804301a0.
TODO: recover the declaration, type and value for global/data reference DAT_1804301b0.
TODO: resolve the indirect call in body 70: (*DAT_1804236e0)(param_1,param_2);.)F18011f780U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011f780() noexcept {
    return kFunction_0x18011f780;
}

// 0x18011f930 FUN_18011f930
// source: re/dump/decompile/0x18011f930_FUN_18011f930.c
// size: 433 bytes; thunk: false
// body sha256: 05df869a81bfe4e3d2677ee7cf1310ae18b7304c3b3d4a408388dca9513e887a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011f930{
    "0x18011f930",
    "FUN_18011f930",
    R"F18011f930S(undefined FUN_18011f930())F18011f930S",
    R"B18011f930(// 0x18011f930  FUN_18011f930
// size=433 thunk=false
// signature: undefined FUN_18011f930()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011f930(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  char *pcVar2;
  size_t sVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_218 [32];
  char *local_1f8;
  undefined4 local_1f0;
  char *local_1e8;
  undefined8 **local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  ulonglong uStack_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 local_1a0;
  char local_198;
  char local_188 [64];
  char local_148 [96];
  char local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_218;
  local_1a8 = 0x93fd561a96ab0c67;
  local_1a0 = 0xd1ec5445d87064a8;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1b8,&local_1a8);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,&local_1d8,&local_1a0);
  pcVar2 = (char *)FUN_1801fcfc0(*plVar1 + 0x28);
  if ((*pcVar2 != '\0') && (param_1 != 0)) {
    FUN_18011f6f0(param_1,local_188);
    FUN_18011f730(param_2,local_148);
    local_1e8 = local_148;
    if (local_148[0] == '\0') {
      local_1e8 = "<unnamed>";
    }
    local_1f8 = local_188;
    if (local_188[0] == '\0') {
      local_1f8 = "<unknown>";
    }
    local_1f0 = param_2;
    FUN_180012b20(local_e8,0xc0,0xffffffffffffffff,"%s::#%d %s [call]");
    local_1d8 = (undefined8 ***)0x0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    sVar3 = strlen(local_e8);
    FUN_18001d080(&local_1d8,local_e8,sVar3);
    if (DAT_1804301b0 < 400) {
      FUN_180219e20(&DAT_1804301a0,&local_1a0,&local_1d8);
      if (local_198 != '\0') {
        pppuVar4 = &local_1d8;
        if (0xf < uStack_1c0) {
          pppuVar4 = (undefined8 ***)local_1d8;
        }
        FUN_180014410("[SEPROBE] %s\n",pppuVar4);
      }
    }
    FUN_18020e450(&local_1d8);
  }
  (*DAT_1804236e8)(param_1,param_2,param_3);
  return;
}


)B18011f930",
    "05df869a81bfe4e3d2677ee7cf1310ae18b7304c3b3d4a408388dca9513e887a",
    R"F18011f930C(FUN_180012b20
FUN_180014410
FUN_18001d080
FUN_18011f6f0
FUN_18011f730
FUN_1801fcfc0
FUN_18020e450
FUN_180219e20
FUN_180241a30)F18011f930C",
    R"F18011f930D(DAT_1803da4c0
DAT_1803fadf0
DAT_1804236e8
DAT_1804301a0
DAT_1804301b0)F18011f930D",
    R"F18011f930T("<unknown>"
"<unnamed>"
"[SEPROBE] %s\\n"
"%s::#%d %s [call]")F18011f930T",
    R"F18011f930F(39: if ((*pcVar2 != '\0') && (param_1 != 0)) {
43: if (local_148[0] == '\0') {
47: if (local_188[0] == '\0') {
58: if (DAT_1804301b0 < 400) {
60: if (local_198 != '\0') {
62: if (0xf < uStack_1c0) {
71: return;)F18011f930F",
    R"F18011f930U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1804236e8.
TODO: recover the declaration, type and value for global/data reference DAT_1804301a0.
TODO: recover the declaration, type and value for global/data reference DAT_1804301b0.
TODO: resolve the indirect call in body 70: (*DAT_1804236e8)(param_1,param_2,param_3);.)F18011f930U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011f930() noexcept {
    return kFunction_0x18011f930;
}

// 0x18011faf0 FUN_18011faf0
// source: re/dump/decompile/0x18011faf0_FUN_18011faf0.c
// size: 423 bytes; thunk: false
// body sha256: 21735b5ea6011c951eb2abfd9b45bd8bf2d163271977749b0a9f417601927a5c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011faf0{
    "0x18011faf0",
    "FUN_18011faf0",
    R"F18011faf0S(undefined FUN_18011faf0())F18011faf0S",
    R"B18011faf0(// 0x18011faf0  FUN_18011faf0
// size=423 thunk=false
// signature: undefined FUN_18011faf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011faf0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char *pcVar2;
  size_t sVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  undefined8 **local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  char local_b8;
  char local_a8 [64];
  char local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_118;
  local_c8 = 0x93fd561a96ab0c67;
  local_c0 = 0xd1ec5445d87064a8;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_f8,&local_c8);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,&local_e8,&local_c0);
  pcVar2 = (char *)FUN_1801fcfc0(*plVar1 + 0x28);
  if (((*pcVar2 != '\0') && (param_1 != 0)) && (param_2 != 0)) {
    FUN_18011f6f0(param_1,local_68);
    FUN_18011f690(param_2,local_a8,0x40);
    if (local_a8[0] != '\0') {
      pcVar2 = local_68;
      if (local_68[0] == '\0') {
        pcVar2 = "<unknown>";
      }
      local_e8 = (undefined8 ***)0x0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      sVar3 = strlen(pcVar2);
      FUN_18001d080(&local_e8,pcVar2,sVar3);
      FUN_18021aef0(&local_e8,&DAT_18035808c,2);
      sVar3 = strlen(local_a8);
      FUN_18021aef0(&local_e8,local_a8,sVar3);
      if (DAT_1804301b0 < 400) {
        FUN_180219e20(&DAT_1804301a0,&local_c0,&local_e8);
        if (local_b8 != '\0') {
          pppuVar4 = &local_e8;
          if (0xf < uStack_d0) {
            pppuVar4 = (undefined8 ***)local_e8;
          }
          FUN_180014410("[SEPROBE] %s\n",pppuVar4);
        }
      }
      FUN_18020e450(&local_e8);
    }
  }
  (*DAT_1804236f8)(param_1,param_2);
  return;
}


)B18011faf0",
    "21735b5ea6011c951eb2abfd9b45bd8bf2d163271977749b0a9f417601927a5c",
    R"F18011faf0C(FUN_180014410
FUN_18001d080
FUN_18011f690
FUN_18011f6f0
FUN_1801fcfc0
FUN_18020e450
FUN_180219e20
FUN_18021aef0
FUN_180241a30)F18011faf0C",
    R"F18011faf0D(DAT_18035808c
DAT_1803da4c0
DAT_1803fadf0
DAT_1804236f8
DAT_1804301a0
DAT_1804301b0)F18011faf0D",
    R"F18011faf0T("<unknown>"
"[SEPROBE] %s\\n")F18011faf0T",
    R"F18011faf0F(35: if (((*pcVar2 != '\0') && (param_1 != 0)) && (param_2 != 0)) {
38: if (local_a8[0] != '\0') {
40: if (local_68[0] == '\0') {
52: if (DAT_1804301b0 < 400) {
54: if (local_b8 != '\0') {
56: if (0xf < uStack_d0) {
66: return;)F18011faf0F",
    R"F18011faf0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18035808c.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1804236f8.
TODO: recover the declaration, type and value for global/data reference DAT_1804301a0.
TODO: recover the declaration, type and value for global/data reference DAT_1804301b0.
TODO: resolve the indirect call in body 65: (*DAT_1804236f8)(param_1,param_2);.)F18011faf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011faf0() noexcept {
    return kFunction_0x18011faf0;
}

// 0x18011fca0 FUN_18011fca0
// source: re/dump/decompile/0x18011fca0_FUN_18011fca0.c
// size: 1112 bytes; thunk: false
// body sha256: eac8ed99229b2b32148e26a7c100448287d10aa78dd4b67c3199f8db4c444b56
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18011fca0{
    "0x18011fca0",
    "FUN_18011fca0",
    R"F18011fca0S(undefined FUN_18011fca0())F18011fca0S",
    R"B18011fca0(// 0x18011fca0  FUN_18011fca0
// size=1112 thunk=false
// signature: undefined FUN_18011fca0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011fca0(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  longlong lStack_50;
  longlong local_48;
  undefined8 *local_40;
  longlong lStack_38;
  longlong local_30;
  undefined8 *local_28;
  longlong lStack_20;
  longlong local_18;
  ulonglong local_10;
  
  puVar5 = auStack_f8;
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  if (DAT_1804236f0 == '\0') {
    local_28 = (undefined8 *)0x0;
    lStack_20 = 0;
    local_18 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    FUN_18001d080(&local_d8,"48 89 5C 24 08 57 48 83 EC 20 8B FA 48 8B D9 FF 15 ? ? ? ?",0x3a);
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    FUN_18001d080(&local_98,"client.dll",10);
    FUN_180016410(&local_28,&local_98,&local_d8,4);
    FUN_18020e450(&local_98);
    FUN_18020e450(&local_d8);
    local_40 = (undefined8 *)0x0;
    lStack_38 = 0;
    local_30 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_18001d080(&local_b8,"48 89 5C 24 08 57 48 83 EC 20 48 8B FA 48 8B D9 FF 15 ? ? ? ?",0x3d);
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    FUN_18001d080(&local_d8,"client.dll",10);
    FUN_180016410(&local_40,&local_d8,&local_b8,4);
    FUN_18020e450(&local_d8);
    FUN_18020e450(&local_b8);
    local_58 = (undefined8 *)0x0;
    lStack_50 = 0;
    local_48 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    FUN_18001d080(&local_78,
                  "48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 80 79 08 00 41 0F B6 F8 8B F2 48 8B D9"
                  ,0x53);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_18001d080(&local_b8,"client.dll",10);
    FUN_180016410(&local_58,&local_b8,&local_78,4);
    FUN_18020e450(&local_b8);
    FUN_18020e450(&local_78);
    FUN_180014410("[SEPROBE] StartFunction matches=%zu  StartFunctionStr matches=%zu  CallFunction matches=%zu\n"
                  ,lStack_20 - (longlong)local_28 >> 3,lStack_38 - (longlong)local_40 >> 3,
                  lStack_50 - (longlong)local_58 >> 3);
    if (lStack_20 - (longlong)local_28 == 8) {
      iVar2 = FUN_180242fc0(*local_28,FUN_18011f780,&DAT_1804236e0);
      uVar3 = FUN_1802436b0(iVar2);
      FUN_180014410("[SEPROBE] MH StartFunction    @ %p: %s\n",*local_28,uVar3);
      if (iVar2 == 0) {
        FUN_180243560(*local_28,1);
      }
    }
    else {
      FUN_180014410("[SEPROBE] StartFunction NOT hooked (expected exactly 1 match)\n");
    }
    if (lStack_38 - (longlong)local_40 == 8) {
      iVar2 = FUN_180242fc0(*local_40,FUN_18011faf0,&DAT_1804236f8);
      uVar3 = FUN_1802436b0(iVar2);
      FUN_180014410("[SEPROBE] MH StartFunctionStr @ %p: %s\n",*local_40,uVar3);
      if (iVar2 == 0) {
        FUN_180243560(*local_40,1);
      }
    }
    else {
      FUN_180014410("[SEPROBE] StartFunctionStr NOT hooked (expected exactly 1 match)\n");
    }
    if (lStack_50 - (longlong)local_58 == 8) {
      iVar2 = FUN_180242fc0(*local_58,FUN_18011f930,&DAT_1804236e8);
      uVar3 = FUN_1802436b0(iVar2);
      FUN_180014410("[SEPROBE] MH CallFunction     @ %p: %s\n",*local_58,uVar3);
      if (iVar2 == 0) {
        FUN_180243560(*local_58,1);
      }
    }
    else {
      FUN_180014410("[SEPROBE] CallFunction NOT hooked (expected exactly 1 match)\n");
    }
    DAT_1804236f0 = '\x01';
    puVar5 = auStack_f8;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
      puVar5 = auStack_f8;
      if ((0xfff < (ulonglong)((local_48 - (longlong)local_58 >> 3) * 8)) &&
         (puVar4 = (undefined8 *)local_58[-1], puVar5 = auStack_f8,
         0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)puVar4)))) {
        puVar4 = (undefined8 *)0x5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        puVar5 = auStack_f0;
      }
      *(undefined8 *)(puVar5 + -8) = 0x180120017;
      free(puVar4);
      local_58 = (undefined8 *)0x0;
      lStack_50 = 0;
      local_48 = 0;
    }
    if (local_40 != (undefined8 *)0x0) {
      puVar4 = local_40;
      if ((0xfff < (ulonglong)((local_30 - (longlong)local_40 >> 3) * 8)) &&
         (puVar4 = (undefined8 *)local_40[-1],
         0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)puVar4)))) {
        puVar4 = (undefined8 *)0x5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        puVar5 = puVar5 + 8;
      }
      *(undefined8 *)(puVar5 + -8) = 0x180120071;
      free(puVar4);
      local_40 = (undefined8 *)0x0;
      lStack_38 = 0;
      local_30 = 0;
    }
    if (local_28 != (undefined8 *)0x0) {
      puVar4 = local_28;
      if ((0xfff < (ulonglong)((local_18 - (longlong)local_28 >> 3) * 8)) &&
         (puVar4 = (undefined8 *)local_28[-1],
         0x1f < (ulonglong)((longlong)local_28 + (-8 - (longlong)puVar4)))) {
        puVar4 = (undefined8 *)0x5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        puVar5 = puVar5 + 8;
      }
      *(undefined8 *)(puVar5 + -8) = 0x1801200cb;
      free(puVar4);
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x1801200e3;
  return;
}


)B18011fca0",
    "eac8ed99229b2b32148e26a7c100448287d10aa78dd4b67c3199f8db4c444b56",
    R"F18011fca0C(FUN_180014410
FUN_180016410
FUN_18001d080
FUN_18011f780
FUN_18011f930
FUN_18011faf0
FUN_18020e450
FUN_180242fc0
FUN_180243560
FUN_1802436b0)F18011fca0C",
    R"F18011fca0D(DAT_1803da4c0
DAT_1804236e0
DAT_1804236e8
DAT_1804236f0
DAT_1804236f8)F18011fca0D",
    R"F18011fca0T("client.dll"
"[SEPROBE] MH CallFunction     @ %p: %s\\n"
"[SEPROBE] MH StartFunction    @ %p: %s\\n"
"[SEPROBE] MH StartFunctionStr @ %p: %s\\n"
"48 89 5C 24 08 57 48 83 EC 20 8B FA 48 8B D9 FF 15 ? ? ? ?"
"48 89 5C 24 08 57 48 83 EC 20 48 8B FA 48 8B D9 FF 15 ? ? ? ?"
"[SEPROBE] CallFunction NOT hooked (expected exactly 1 match)\\n"
"[SEPROBE] StartFunction NOT hooked (expected exactly 1 match)\\n"
"[SEPROBE] StartFunctionStr NOT hooked (expected exactly 1 match)\\n"
"48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 80 79 08 00 41 0F B6 F8 8B F2 48 8B D9"
"[SEPROBE] StartFunction matches=%zu  StartFunctionStr matches=%zu  CallFunction matches=%zu\\n")F18011fca0T",
    R"F18011fca0F(49: if (DAT_1804236f0 == '\0') {
103: if (lStack_20 - (longlong)local_28 == 8) {
107: if (iVar2 == 0) {
111: else {
114: if (lStack_38 - (longlong)local_40 == 8) {
118: if (iVar2 == 0) {
122: else {
125: if (lStack_50 - (longlong)local_58 == 8) {
129: if (iVar2 == 0) {
133: else {
138: if (local_58 != (undefined8 *)0x0) {
141: if ((0xfff < (ulonglong)((local_48 - (longlong)local_58 >> 3) * 8)) &&
155: if (local_40 != (undefined8 *)0x0) {
157: if ((0xfff < (ulonglong)((local_30 - (longlong)local_40 >> 3) * 8)) &&
171: if (local_28 != (undefined8 *)0x0) {
173: if ((0xfff < (ulonglong)((local_18 - (longlong)local_28 >> 3) * 8)) &&
186: return;)F18011fca0F",
    R"F18011fca0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1804236e0.
TODO: recover the declaration, type and value for global/data reference DAT_1804236e8.
TODO: recover the declaration, type and value for global/data reference DAT_1804236f0.
TODO: recover the declaration, type and value for global/data reference DAT_1804236f8.
TODO: resolve the indirect call in body 145: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 146: (*pcVar1)();.
TODO: resolve the indirect call in body 161: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 162: (*pcVar1)();.
TODO: resolve the indirect call in body 177: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 178: (*pcVar1)();.)F18011fca0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18011fca0() noexcept {
    return kFunction_0x18011fca0;
}

// 0x180120100 FUN_180120100
// source: re/dump/decompile/0x180120100_FUN_180120100.c
// size: 101 bytes; thunk: false
// body sha256: 6c1820d1e6b4712f452ee2fed30dbbce1e6e2cceed75e5dfd4ce0d096de26c70
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180120100{
    "0x180120100",
    "FUN_180120100",
    R"F180120100S(undefined FUN_180120100())F180120100S",
    R"B180120100(// 0x180120100  FUN_180120100
// size=101 thunk=false
// signature: undefined FUN_180120100()
// status: ok


void FUN_180120100(char param_1)

{
  int iVar1;
  
  if (DAT_1803fa660 != (longlong *)0x0) {
    if (param_1 == '\0') {
      iVar1 = (**(code **)(*DAT_1803fa660 + 0xf8))();
      if (iVar1 != 0) {
        (**(code **)(*DAT_1803fa660 + 0x108))();
        DAT_180409bc3 = 0;
      }
    }
    else {
      iVar1 = (**(code **)(*DAT_1803fa660 + 0xf8))();
      if (iVar1 == 0) {
        (**(code **)(*DAT_1803fa660 + 0x100))();
        DAT_180409bc3 = 1;
      }
    }
  }
  return;
}


)B180120100",
    "6c1820d1e6b4712f452ee2fed30dbbce1e6e2cceed75e5dfd4ce0d096de26c70",
    R"F180120100C()F180120100C",
    R"F180120100D(DAT_1803fa660
DAT_180409bc3)F180120100D",
    R"F180120100T()F180120100T",
    R"F180120100F(12: if (DAT_1803fa660 != (longlong *)0x0) {
13: if (param_1 == '\0') {
15: if (iVar1 != 0) {
20: else {
22: if (iVar1 == 0) {
28: return;)F180120100F",
    R"F180120100U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa660.
TODO: recover the declaration, type and value for global/data reference DAT_180409bc3.
TODO: resolve the indirect call in body 14: iVar1 = (**(code **)(*DAT_1803fa660 + 0xf8))();.
TODO: resolve the indirect call in body 16: (**(code **)(*DAT_1803fa660 + 0x108))();.
TODO: resolve the indirect call in body 21: iVar1 = (**(code **)(*DAT_1803fa660 + 0xf8))();.
TODO: resolve the indirect call in body 23: (**(code **)(*DAT_1803fa660 + 0x100))();.)F180120100U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180120100() noexcept {
    return kFunction_0x180120100;
}

// 0x180120190 Features_ThirdPerson_ThirdPersonFeature_vfunc16
// source: re/dump/decompile/0x180120190_Features_ThirdPerson_ThirdPersonFeature_vfunc16.c
// size: 43 bytes; thunk: false
// body sha256: 3a0244a3686c44b32d3c77b8d5f3be427146463632bff28f7a900645ceddb2c7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180120190{
    "0x180120190",
    "Features_ThirdPerson_ThirdPersonFeature_vfunc16",
    R"F180120190S(undefined Features_ThirdPerson_ThirdPersonFeature_vfunc16())F180120190S",
    R"B180120190(// 0x180120190  Features_ThirdPerson_ThirdPersonFeature_vfunc16
// size=43 thunk=false
// signature: undefined Features_ThirdPerson_ThirdPersonFeature_vfunc16()
// status: ok


void Features_ThirdPerson_ThirdPersonFeature_vfunc16(void)

{
  if ((DAT_180409bc3 != '\0') && (DAT_1804015a0 == '\0')) {
    FUN_180120100(0);
    DAT_180409bc3 = '\0';
  }
  return;
}


)B180120190",
    "3a0244a3686c44b32d3c77b8d5f3be427146463632bff28f7a900645ceddb2c7",
    R"F180120190C(FUN_180120100)F180120190C",
    R"F180120190D(DAT_1804015a0
DAT_180409bc3)F180120190D",
    R"F180120190T()F180120190T",
    R"F180120190F(10: if ((DAT_180409bc3 != '\0') && (DAT_1804015a0 == '\0')) {
14: return;)F180120190F",
    R"F180120190U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1804015a0.
TODO: recover the declaration, type and value for global/data reference DAT_180409bc3.)F180120190U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180120190() noexcept {
    return kFunction_0x180120190;
}

// 0x1801201c0 FUN_1801201c0
// source: re/dump/decompile/0x1801201c0_FUN_1801201c0.c
// size: 55 bytes; thunk: false
// body sha256: 864c275b464cf2d96bafb09b5c3535245c7bc4e6ecbed0977292091072f5dc36
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801201c0{
    "0x1801201c0",
    "FUN_1801201c0",
    R"F1801201c0S(undefined FUN_1801201c0())F1801201c0S",
    R"B1801201c0(// 0x1801201c0  FUN_1801201c0
// size=55 thunk=false
// signature: undefined FUN_1801201c0()
// status: ok


undefined8 FUN_1801201c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if ((DAT_1803fa610 == (longlong *)0x0) || (param_4 == 0)) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,param_1,0x400b,param_3,param_4);
    uVar1 = 1;
  }
  return uVar1;
}


)B1801201c0",
    "864c275b464cf2d96bafb09b5c3535245c7bc4e6ecbed0977292091072f5dc36",
    R"F1801201c0C()F1801201c0C",
    R"F1801201c0D(DAT_1803fa610)F1801201c0D",
    R"F1801201c0T()F1801201c0T",
    R"F1801201c0F(12: if ((DAT_1803fa610 == (longlong *)0x0) || (param_4 == 0)) {
15: else {
19: return uVar1;)F1801201c0F",
    R"F1801201c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa610.
TODO: resolve the indirect call in body 16: (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,param_1,0x400b,param_3,param_4);.)F1801201c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801201c0() noexcept {
    return kFunction_0x1801201c0;
}

// 0x180120220 Features_ThirdPerson_ThirdPersonFeature_vfunc07
// source: re/dump/decompile/0x180120220_Features_ThirdPerson_ThirdPersonFeature_vfunc07.c
// size: 1857 bytes; thunk: false
// body sha256: cd4090fc15a59e3bfa893b8d5a833176544813e7f52bd77326d7bfde0aa47956
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180120220{
    "0x180120220",
    "Features_ThirdPerson_ThirdPersonFeature_vfunc07",
    R"F180120220S(undefined Features_ThirdPerson_ThirdPersonFeature_vfunc07())F180120220S",
    R"B180120220(// 0x180120220  Features_ThirdPerson_ThirdPersonFeature_vfunc07
// size=1857 thunk=false
// signature: undefined Features_ThirdPerson_ThirdPersonFeature_vfunc07()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_ThirdPerson_ThirdPersonFeature_vfunc07
               (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  char *pcVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_248 [32];
  undefined8 *local_228;
  char local_218;
  char local_217;
  float local_210;
  float local_20c;
  float local_208;
  undefined8 local_200;
  float local_1f8;
  int local_1f0 [6];
  undefined8 local_1d8;
  float local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  undefined **local_188;
  float local_16c;
  float local_168;
  float local_164;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined1 local_108 [64];
  undefined8 local_c8;
  ulonglong local_b8;
  
  local_b8 = DAT_1803da4c0 ^ (ulonglong)auStack_248;
  pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar10 = (*pcVar3)(DAT_1803fa360,uVar7);
  if ((((lVar10 != 0) && (DAT_1803f9280 != (longlong *)0x0)) && (DAT_1803fa660 != 0)) &&
     (DAT_1803fa610 != 0)) {
    pcVar3 = *(code **)(*DAT_1803fa668 + 0x60);
    iVar8 = (**(code **)(*DAT_1803f9280 + 0xd8))();
    iVar9 = (*pcVar3)(DAT_1803fa668);
    if (iVar8 == iVar9) {
      local_1c8 = 0x237bcfbdef3b6800;
      local_1d8 = 0x402819404e703058;
      plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_200,&local_1c8);
      plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,&local_210,&local_1d8);
      pcVar12 = (char *)FUN_1801fcfc0(*plVar11 + 0x28);
      if (*pcVar12 == '\0') {
        local_1c8 = 0x402819404e703058;
        local_1d8 = 0x575dfe7fd1bc6251;
        plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_200,&local_1d8);
        plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,&local_210,&local_1c8);
        pcVar12 = (char *)FUN_1801fcfc0(*plVar11 + 0x28);
        if (DAT_180423610 == '\0') {
          local_1d8 = 0x575dfe7fd1bc6251;
          local_1c8 = 0x549a0576bfe235e1;
          plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_200,&local_1d8);
          plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,&local_210,&local_1c8);
          puVar13 = (undefined4 *)FUN_1802029c0(*plVar11 + 0x28);
          FUN_180024720(&local_218,*puVar13);
          if ((local_218 == '\0') && (local_217 != '\0')) {
            *pcVar12 = *pcVar12 == '\0';
          }
          FUN_180120100(*pcVar12);
          if (*pcVar12 != '\0') {
            FUN_1802d3e70(param_3 + 0x4c,&local_1b8,&local_1a8,&local_198);
            local_1b8 = local_1b8 * DAT_180381384;
            local_1f0[1] = 0x1e;
            local_1b4 = local_1b4 * DAT_180381384;
            local_1f0[0] = 5;
            local_1b0 = local_1b0 * DAT_180381384;
            local_1d8 = 0x575dfe7fd1bc6251;
            local_1c8 = 0x278f2665d9fce53c;
            plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_200,&local_1d8);
            plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,&local_210,&local_1c8);
            piVar14 = (int *)FUN_1802029c0(*plVar11 + 0x28);
            fVar18 = DAT_180380fe8;
            local_1f0[3] = 0x1e;
            local_1f0[2] = 0xffffffe2;
            local_1d8 = 0x575dfe7fd1bc6251;
            piVar16 = local_1f0;
            if (4 < *piVar14) {
              piVar16 = piVar14;
            }
            piVar15 = local_1f0 + 1;
            if (*piVar14 < 0x1f) {
              piVar15 = piVar16;
            }
            local_1c8 = 0x8776ac2cca5b5bb8;
            fVar20 = (float)*piVar15 * DAT_180380fe8;
            plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_200,&local_1d8);
            plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,&local_210,&local_1c8);
            piVar14 = (int *)FUN_1802029c0(*plVar11 + 0x28);
            local_1f0[5] = 0x1e;
            piVar16 = local_1f0 + 2;
            if (-0x1f < *piVar14) {
              piVar16 = piVar14;
            }
            piVar15 = local_1f0 + 3;
            if (*piVar14 < 0x1f) {
              piVar15 = piVar16;
            }
            fVar19 = (float)*piVar15 * fVar18;
            local_1f0[4] = 0xffffffe2;
            local_1c8 = 0x9bf05500c69582b6;
            local_1d8 = 0x575dfe7fd1bc6251;
            plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_200,&local_1d8);
            plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,&local_210,&local_1c8);
            piVar14 = (int *)FUN_1802029c0(*plVar11 + 0x28);
            uVar1 = *(undefined8 *)(param_3 + 0x40);
            fVar17 = (float)uVar1;
            piVar16 = local_1f0 + 4;
            if (-0x1f < *piVar14) {
              piVar16 = piVar14;
            }
            piVar15 = local_1f0 + 5;
            if (*piVar14 < 0x1f) {
              piVar15 = piVar16;
            }
            fVar2 = *(float *)(param_3 + 0x48);
            fVar18 = (float)*piVar15 * fVar18;
            local_200._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
            fVar5 = local_200._4_4_;
            fVar21 = local_1b8 * fVar20 + fVar17 + local_1a8 * fVar19 + local_198 * fVar18;
            local_1d8._0_4_ = fVar21 - fVar17;
            fVar22 = local_1b4 * fVar20 + local_200._4_4_ + local_1a4 * fVar19 + local_194 * fVar18;
            fVar23 = local_1b0 * fVar20 + fVar2 + local_1a0 * fVar19 + local_190 * fVar18;
            local_1d8._4_4_ = fVar22 - local_200._4_4_;
            local_1d0 = fVar23 - fVar2;
            fVar18 = local_1b8;
            fVar20 = local_1b4;
            fVar19 = local_1b0;
            local_210 = fVar21;
            local_20c = fVar22;
            local_208 = fVar23;
            local_200 = uVar1;
            local_1f8 = fVar2;
            if (DAT_180380948 <
                local_1d8._4_4_ * local_1d8._4_4_ + (float)local_1d8 * (float)local_1d8 +
                local_1d0 * local_1d0) {
              (*(code *)PTR_FUN_1803da000)(&local_1d8);
              fVar18 = (float)local_1d8;
              fVar20 = local_1d8._4_4_;
              fVar19 = local_1d0;
            }
            fVar4 = DAT_180380bb0;
            local_188 = vftable_Features_ThirdPerson_ThirdPersonFeature_CTraceFilterWorldOnly;
            local_228 = &local_1d8;
            uStack_144 = 0;
            local_12c = 0;
            uStack_124 = 0;
            local_14c = 0x3f800000;
            local_13c = 0;
            uStack_134 = 0;
            local_c8 = 0;
            uStack_120 = 0;
            uStack_11c = 0;
            uStack_118 = 0;
            local_1d8 = 0x40e0000040e00000;
            local_1d0 = 7.0;
            local_1c8 = 0xc0e00000c0e00000;
            local_1c0 = 0xc0e00000;
            local_16c = fVar21;
            local_168 = fVar22;
            local_164 = fVar23;
            FUN_18001fe90(local_108,&local_200,&local_210,&local_1c8);
            cVar6 = FUN_1801201c0(local_108);
            if (((cVar6 == '\0') || ((float)local_14c <= 0.0)) || (fVar4 <= (float)local_14c)) {
              *(ulonglong *)(param_3 + 0x40) = CONCAT44(fVar22,fVar21);
              *(float *)(param_3 + 0x48) = fVar23;
            }
            else {
              fVar17 = (float)(*(code *)PTR_FUN_1803da018)
                                        ((fVar5 - local_168) * (fVar5 - local_168) +
                                         (fVar17 - local_16c) * (fVar17 - local_16c) +
                                         (fVar2 - local_164) * (fVar2 - local_164));
              if (DAT_180381070 <= fVar17) {
                fVar20 = fVar20 * DAT_180380e9c;
                fVar19 = fVar19 * DAT_180380e9c;
                *(float *)(param_3 + 0x40) = local_16c - fVar18 * DAT_180380e9c;
                *(float *)(param_3 + 0x44) = local_168 - fVar20;
                *(float *)(param_3 + 0x48) = local_164 - fVar19;
              }
              else {
                FUN_180120100(0);
              }
            }
          }
        }
      }
    }
  }
  return;
}


)B180120220",
    "cd4090fc15a59e3bfa893b8d5a833176544813e7f52bd77326d7bfde0aa47956",
    R"F180120220C(FUN_18001fe90
FUN_180024720
FUN_180120100
FUN_1801201c0
FUN_1801fcfc0
FUN_1802029c0
FUN_180241a30
FUN_1802d3e70)F180120220C",
    R"F180120220D(DAT_180380948
DAT_180380bb0
DAT_180380e9c
DAT_180380fe8
DAT_180381070
DAT_180381384
DAT_1803da4c0
DAT_1803f9280
DAT_1803fa360
DAT_1803fa610
DAT_1803fa660
DAT_1803fa668
DAT_1803fadf0
DAT_180423610)F180120220D",
    R"F180120220T()F180120220T",
    R"F180120220F(80: if ((((lVar10 != 0) && (DAT_1803f9280 != (longlong *)0x0)) && (DAT_1803fa660 != 0)) &&
85: if (iVar8 == iVar9) {
91: if (*pcVar12 == '\0') {
97: if (DAT_180423610 == '\0') {
104: if ((local_218 == '\0') && (local_217 != '\0')) {
108: if (*pcVar12 != '\0') {
125: if (4 < *piVar14) {
129: if (*piVar14 < 0x1f) {
139: if (-0x1f < *piVar14) {
143: if (*piVar14 < 0x1f) {
156: if (-0x1f < *piVar14) {
160: if (*piVar14 < 0x1f) {
181: if (DAT_180380948 <
211: if (((cVar6 == '\0') || ((float)local_14c <= 0.0)) || (fVar4 <= (float)local_14c)) {
215: else {
220: if (DAT_180381070 <= fVar17) {
227: else {
236: return;)F180120220F",
    R"F180120220U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380948.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_180380e9c.
TODO: recover the declaration, type and value for global/data reference DAT_180380fe8.
TODO: recover the declaration, type and value for global/data reference DAT_180381070.
TODO: recover the declaration, type and value for global/data reference DAT_180381384.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9280.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa610.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa660.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_180423610.
TODO: resolve the indirect call in body 77: pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 78: uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 79: lVar10 = (*pcVar3)(DAT_1803fa360,uVar7);.
TODO: resolve the indirect call in body 82: pcVar3 = *(code **)(*DAT_1803fa668 + 0x60);.
TODO: resolve the indirect call in body 83: iVar8 = (**(code **)(*DAT_1803f9280 + 0xd8))();.
TODO: resolve the indirect call in body 84: iVar9 = (*pcVar3)(DAT_1803fa668);.
TODO: resolve the indirect call in body 184: (*(code *)PTR_FUN_1803da000)(&local_1d8);.
TODO: resolve the indirect call in body 216: fVar17 = (float)(*(code *)PTR_FUN_1803da018).)F180120220U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180120220() noexcept {
    return kFunction_0x180120220;
}

// 0x180120970 Features_CameraView_CameraViewFeature_vfunc07
// source: re/dump/decompile/0x180120970_Features_CameraView_CameraViewFeature_vfunc07.c
// size: 1933 bytes; thunk: false
// body sha256: d844d5252259cf8208e99fca6ad6ad4bdf4a8f7d5d3b8025fba6b07ef298d817
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180120970{
    "0x180120970",
    "Features_CameraView_CameraViewFeature_vfunc07",
    R"F180120970S(undefined Features_CameraView_CameraViewFeature_vfunc07())F180120970S",
    R"B180120970(// 0x180120970  Features_CameraView_CameraViewFeature_vfunc07
// size=1933 thunk=false
// signature: undefined Features_CameraView_CameraViewFeature_vfunc07()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_CameraView_CameraViewFeature_vfunc07
               (undefined8 param_1,undefined8 param_2,void *param_3)

{
  float fVar1;
  short sVar2;
  BOOL BVar3;
  longlong *plVar4;
  char *pcVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [2];
  undefined8 local_a0 [2];
  undefined8 local_90 [2];
  float local_80 [2];
  int local_78;
  int local_74;
  ulonglong local_70;
  
  local_70 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  BVar3 = IsBadReadPtr(param_3,200);
  if (BVar3 != 0) {
    return;
  }
  BVar3 = IsBadWritePtr(param_3,200);
  if (BVar3 != 0) {
    return;
  }
  if (DAT_180423610 != '\0') {
    return;
  }
  local_78 = 0;
  local_74 = 0;
  if (DAT_1803fa668 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_78,&local_74);
  if (local_78 < 1) {
    return;
  }
  if (local_74 < 1) {
    return;
  }
  if (*(int *)((longlong)param_3 + 0x10) != local_78) {
    return;
  }
  if (*(int *)((longlong)param_3 + 0x18) != local_74) {
    return;
  }
  if (*(float *)((longlong)param_3 + 0x38) <= DAT_180380bb0) {
    return;
  }
  if (DAT_180381184 <= *(float *)((longlong)param_3 + 0x38)) {
    return;
  }
  local_80[0] = -9911052.0;
  local_80[1] = 2.9352313e-29;
  local_a8[0] = -6.9921924e+37;
  local_a8[1] = -1.5301077e+32;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_90,local_a8);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_a0,local_80);
  pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
  if (*pcVar5 != '\0') {
    if (*(float *)((longlong)param_3 + 0x38) <= DAT_1803810a0 &&
        DAT_1803810a0 != *(float *)((longlong)param_3 + 0x38)) {
      local_a8[0] = -6.9921924e+37;
      local_a8[1] = -1.5301077e+32;
      local_80[0] = 7.553772e-34;
      local_80[1] = -3.4411714e-24;
      plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_90,local_a8);
      plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_a0,local_80);
      pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
      if (*pcVar5 == '\0') goto LAB_180120b72;
    }
    local_a8[0] = 2.24208e-43;
    local_90[0] = 0xfb3877511c4b6892;
    local_80[0] = 4.2039e-44;
    local_a0[0] = 0xf4f1688ffe5269e4;
    plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_d8,local_a0);
    plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_c8,local_90);
    pfVar6 = (float *)FUN_1802029c0(*plVar4 + 0x28);
    pfVar8 = local_80;
    if (0x1d < (int)*pfVar6) {
      pfVar8 = pfVar6;
    }
    pfVar7 = local_a8;
    if ((int)*pfVar6 < 0xa1) {
      pfVar7 = pfVar8;
    }
    *(float *)((longlong)param_3 + 0x38) = (float)(int)*pfVar7;
  }
LAB_180120b72:
  local_90[0] = 0xf4f1688ffe5269e4;
  local_a0[0] = 0x3506af0b5263e534;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
  pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
  if (*pcVar5 != '\0') {
    local_80[0] = 1.82169e-43;
    local_a0[0] = 0x14198b18bdb8cdca;
    local_a8[0] = 4.2039e-44;
    local_90[0] = 0xf4f1688ffe5269e4;
    plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
    plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
    pfVar6 = (float *)FUN_1802029c0(*plVar4 + 0x28);
    pfVar8 = local_a8;
    if (0x1d < (int)*pfVar6) {
      pfVar8 = pfVar6;
    }
    pfVar7 = local_80;
    if ((int)*pfVar6 < 0x83) {
      pfVar7 = pfVar8;
    }
    *(float *)((longlong)param_3 + 0x3c) = (float)(int)*pfVar7;
  }
  local_90[0] = 0xf4f1688ffe5269e4;
  local_a0[0] = 0x6b51d6e205141ff1;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
  pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
  if (*pcVar5 != '\0') {
    local_a0[0] = 0x630699bb15a84dfa;
    local_90[0] = 0xf4f1688ffe5269e4;
    plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
    plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
    pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
    fVar12 = DAT_180380ac0;
    if (*pcVar5 == '\0') {
      local_90[0] = 0xf4f1688ffe5269e4;
      local_a0[0] = 0x1f3365743787d63f;
      plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
      plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
      pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
      fVar12 = DAT_180380ac0;
      if (*pcVar5 == '\0') {
        local_a0[0] = 0xaf72b5e3ad14de05;
        local_a8[0] = 1.4013e-45;
        local_90[0] = 0xf4f1688ffe5269e4;
        plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
        plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
        pfVar6 = (float *)FUN_1802029c0(*plVar4 + 0x28);
        local_90[0] = 0xf4f1688ffe5269e4;
        pfVar8 = local_a8;
        if (0 < (int)*pfVar6) {
          pfVar8 = pfVar6;
        }
        if (0x20 < (int)*pfVar6) {
          pfVar8 = (float *)&DAT_18033bf30;
        }
        local_a0[0] = 0xaf72c6e3ad14fae8;
        fVar12 = *pfVar8;
        local_a8[0] = 1.4013e-45;
        plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
        plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
        pfVar6 = (float *)FUN_1802029c0(*plVar4 + 0x28);
        pfVar8 = local_a8;
        if (0 < (int)*pfVar6) {
          pfVar8 = pfVar6;
        }
        if (0x20 < (int)*pfVar6) {
          pfVar8 = (float *)&DAT_18033bf30;
        }
        *(float *)((longlong)param_3 + 0x6c) = (float)(int)fVar12 / (float)(int)*pfVar8;
      }
      else {
        fVar10 = *(float *)((longlong)param_3 + 0x6c);
        if (fVar10 <= 0.0) {
          fVar10 = (float)*(int *)((longlong)param_3 + 0x10) /
                   (float)*(int *)((longlong)param_3 + 0x18);
        }
        local_80[0] = 2.0;
        local_a0[0] = 0xd242d32ac1a8eeef;
        local_a8[0] = 0.5;
        local_90[0] = 0xf4f1688ffe5269e4;
        plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
        plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
        pfVar6 = (float *)FUN_180202dc0(*plVar4 + 0x28);
        pfVar8 = local_a8;
        if (fVar12 <= *pfVar6) {
          pfVar8 = pfVar6;
        }
        pfVar7 = local_80;
        if (*pfVar6 <= DAT_180380d30) {
          pfVar7 = pfVar8;
        }
        *(float *)((longlong)param_3 + 0x6c) = fVar10 * *pfVar7;
      }
    }
    else {
      fVar10 = *(float *)((longlong)param_3 + 0x6c);
      if (fVar10 <= 0.0) {
        fVar10 = (float)*(int *)((longlong)param_3 + 0x10) /
                 (float)*(int *)((longlong)param_3 + 0x18);
      }
      local_b4 = 2.0;
      local_a0[0] = 0xa317ec6c0b19990a;
      local_b8 = 0.5;
      local_90[0] = 0xf4f1688ffe5269e4;
      plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
      plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
      pfVar6 = (float *)FUN_180202dc0(*plVar4 + 0x28);
      local_ac = 2.0;
      local_b0 = 0.5;
      local_90[0] = 0xf4f1688ffe5269e4;
      pfVar8 = &local_b8;
      if (fVar12 <= *pfVar6) {
        pfVar8 = pfVar6;
      }
      pfVar7 = &local_b4;
      if (*pfVar6 <= DAT_180380d30) {
        pfVar7 = pfVar8;
      }
      fVar11 = *pfVar7;
      local_a0[0] = 0xa317ed6c0b199abd;
      plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_90);
      plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_d8,local_a0);
      pfVar6 = (float *)FUN_180202dc0(*plVar4 + 0x28);
      fVar1 = *pfVar6;
      fVar9 = tanf(*(float *)((longlong)param_3 + 0x38) * fVar12 * DAT_180380994);
      fVar9 = atanf(fVar9 / fVar11);
      pfVar8 = &local_b0;
      if (fVar12 <= fVar1) {
        pfVar8 = pfVar6;
      }
      fVar12 = (fVar9 + fVar9) * DAT_1803810bc;
      pfVar6 = &local_ac;
      if (fVar1 <= DAT_180380d30) {
        pfVar6 = pfVar8;
      }
      sVar2 = _fdclass();
      if (((sVar2 < 1) && (DAT_180380f00 < fVar12)) && (fVar12 < DAT_18038117c)) {
        fVar11 = (fVar10 * *pfVar6) / fVar11;
        sVar2 = _fdclass();
        if (((sVar2 < 1) && (DAT_1803809c4 < fVar11)) && (fVar11 < DAT_180380fc8)) {
          *(float *)((longlong)param_3 + 0x38) = fVar12;
          *(float *)((longlong)param_3 + 0x6c) = fVar11;
        }
      }
    }
  }
  return;
}


)B180120970",
    "d844d5252259cf8208e99fca6ad6ad4bdf4a8f7d5d3b8025fba6b07ef298d817",
    R"F180120970C(FUN_1801fcfc0
FUN_1802029c0
FUN_180202dc0
FUN_180241a30)F180120970C",
    R"F180120970D(LAB_180120b72
DAT_18033bf30
DAT_180380994
DAT_1803809c4
DAT_180380ac0
DAT_180380bb0
DAT_180380d30
DAT_180380f00
DAT_180380fc8
DAT_1803810a0
DAT_1803810bc
DAT_18038117c
DAT_180381184
DAT_1803da4c0
DAT_1803fa668
DAT_1803fadf0
DAT_180423610)F180120970D",
    R"F180120970T()F180120970T",
    R"F180120970F(42: if (BVar3 != 0) {
43: return;
46: if (BVar3 != 0) {
47: return;
49: if (DAT_180423610 != '\0') {
50: return;
54: if (DAT_1803fa668 == (longlong *)0x0) {
55: return;
58: if (local_78 < 1) {
59: return;
61: if (local_74 < 1) {
62: return;
64: if (*(int *)((longlong)param_3 + 0x10) != local_78) {
65: return;
67: if (*(int *)((longlong)param_3 + 0x18) != local_74) {
68: return;
70: if (*(float *)((longlong)param_3 + 0x38) <= DAT_180380bb0) {
71: return;
73: if (DAT_180381184 <= *(float *)((longlong)param_3 + 0x38)) {
74: return;
83: if (*pcVar5 != '\0') {
84: if (*(float *)((longlong)param_3 + 0x38) <= DAT_1803810a0 &&
93: if (*pcVar5 == '\0') goto LAB_180120b72;
103: if (0x1d < (int)*pfVar6) {
107: if ((int)*pfVar6 < 0xa1) {
112: LAB_180120b72:
118: if (*pcVar5 != '\0') {
127: if (0x1d < (int)*pfVar6) {
131: if ((int)*pfVar6 < 0x83) {
141: if (*pcVar5 != '\0') {
148: if (*pcVar5 == '\0') {
155: if (*pcVar5 == '\0') {
164: if (0 < (int)*pfVar6) {
167: if (0x20 < (int)*pfVar6) {
177: if (0 < (int)*pfVar6) {
180: if (0x20 < (int)*pfVar6) {
185: else {
187: if (fVar10 <= 0.0) {
199: if (fVar12 <= *pfVar6) {
203: if (*pfVar6 <= DAT_180380d30) {
209: else {
211: if (fVar10 <= 0.0) {
226: if (fVar12 <= *pfVar6) {
230: if (*pfVar6 <= DAT_180380d30) {
242: if (fVar12 <= fVar1) {
247: if (fVar1 <= DAT_180380d30) {
251: if (((sVar2 < 1) && (DAT_180380f00 < fVar12)) && (fVar12 < DAT_18038117c)) {
254: if (((sVar2 < 1) && (DAT_1803809c4 < fVar11)) && (fVar11 < DAT_180380fc8)) {
261: return;)F180120970F",
    R"F180120970U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180120b72.
TODO: recover the declaration, type and value for global/data reference DAT_18033bf30.
TODO: recover the declaration, type and value for global/data reference DAT_180380994.
TODO: recover the declaration, type and value for global/data reference DAT_1803809c4.
TODO: recover the declaration, type and value for global/data reference DAT_180380ac0.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_180380d30.
TODO: recover the declaration, type and value for global/data reference DAT_180380f00.
TODO: recover the declaration, type and value for global/data reference DAT_180380fc8.
TODO: recover the declaration, type and value for global/data reference DAT_1803810a0.
TODO: recover the declaration, type and value for global/data reference DAT_1803810bc.
TODO: recover the declaration, type and value for global/data reference DAT_18038117c.
TODO: recover the declaration, type and value for global/data reference DAT_180381184.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_180423610.
TODO: resolve the indirect call in body 57: (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_78,&local_74);.)F180120970U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180120970() noexcept {
    return kFunction_0x180120970;
}

// 0x180121100 FUN_180121100
// source: re/dump/decompile/0x180121100_FUN_180121100.c
// size: 115 bytes; thunk: false
// body sha256: c4145a004ead7a8b6429f0f9c7496fb29353194c9943c710aa1b17c7217fc56e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180121100{
    "0x180121100",
    "FUN_180121100",
    R"F180121100S(undefined FUN_180121100())F180121100S",
    R"B180121100(// 0x180121100  FUN_180121100
// size=115 thunk=false
// signature: undefined FUN_180121100()
// status: ok


undefined1 FUN_180121100(char *param_1)

{
  char *pcVar1;
  
  if (param_1 < (char *)0x10001) {
    return 0;
  }
  pcVar1 = strstr(param_1,"viewmodel");
  if ((((pcVar1 == (char *)0x0) && (pcVar1 = strstr(param_1,"hands"), pcVar1 == (char *)0x0)) &&
      (pcVar1 = strstr(param_1,"ViewModel"), pcVar1 == (char *)0x0)) &&
     (pcVar1 = strstr(param_1,"Hands"), pcVar1 == (char *)0x0)) {
    return 0;
  }
  return 1;
}


)B180121100",
    "c4145a004ead7a8b6429f0f9c7496fb29353194c9943c710aa1b17c7217fc56e",
    R"F180121100C()F180121100C",
    R"F180121100D()F180121100D",
    R"F180121100T("Hands"
"hands"
"ViewModel"
"viewmodel")F180121100T",
    R"F180121100F(12: if (param_1 < (char *)0x10001) {
13: return 0;
16: if ((((pcVar1 == (char *)0x0) && (pcVar1 = strstr(param_1,"hands"), pcVar1 == (char *)0x0)) &&
19: return 0;
21: return 1;)F180121100F",
    R"F180121100U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180121100U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180121100() noexcept {
    return kFunction_0x180121100;
}

// 0x180121180 FUN_180121180
// source: re/dump/decompile/0x180121180_FUN_180121180.c
// size: 120 bytes; thunk: false
// body sha256: 754e9aee14cfb459441d996f270c254c052954702973bb9e937695ea1af34a1d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180121180{
    "0x180121180",
    "FUN_180121180",
    R"F180121180S(undefined FUN_180121180())F180121180S",
    R"B180121180(// 0x180121180  FUN_180121180
// size=120 thunk=false
// signature: undefined FUN_180121180()
// status: ok


undefined8 FUN_180121180(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (0 < param_1) {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar4 = (*pcVar1)(DAT_1803fa360,uVar2);
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_18001dbf0(lVar4);
      if (plVar5 == (longlong *)0x0) {
        return 0;
      }
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      if ((plVar5 != (longlong *)0x0) &&
         (iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5), iVar3 == param_1)) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


)B180121180",
    "754e9aee14cfb459441d996f270c254c052954702973bb9e937695ea1af34a1d",
    R"F180121180C(FUN_18001dbf0)F180121180C",
    R"F180121180D(DAT_1803fa360
DAT_1803fa668)F180121180D",
    R"F180121180T()F180121180T",
    R"F180121180F(16: if (0 < param_1) {
20: if (lVar4 != 0) {
22: if (plVar5 == (longlong *)0x0) {
23: return 0;
26: if ((plVar5 != (longlong *)0x0) &&
28: return 1;
30: return 0;
33: return 0;)F180121180F",
    R"F180121180U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 17: pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 18: uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 19: lVar4 = (*pcVar1)(DAT_1803fa360,uVar2);.
TODO: resolve the indirect call in body 25: plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);.
TODO: resolve the indirect call in body 27: (iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5), iVar3 == param_1)) {.)F180121180U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180121180() noexcept {
    return kFunction_0x180121180;
}

// 0x180121200 FUN_180121200
// source: re/dump/decompile/0x180121200_FUN_180121200.c
// size: 338 bytes; thunk: false
// body sha256: 188e2792f37914379f2f5005892fd1acba686dfa5f00ab559daac46e5865e082
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180121200{
    "0x180121200",
    "FUN_180121200",
    R"F180121200S(undefined FUN_180121200())F180121200S",
    R"B180121200(// 0x180121200  FUN_180121200
// size=338 thunk=false
// signature: undefined FUN_180121200()
// status: ok


undefined8 FUN_180121200(longlong param_1)

{
  char cVar1;
  BOOL BVar2;
  char *pcVar3;
  char *pcVar4;
  longlong *lp;
  longlong lVar5;
  undefined8 uVar6;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xf6f) != '\0') {
    return 1;
  }
  if (((*(longlong *)(param_1 + 0x20) != 0) && (DAT_1803f9250 != (longlong *)0x0)) &&
     (pcVar3 = (char *)(**(code **)(*DAT_1803f9250 + 0x18))(), (char *)0x10000 < pcVar3)) {
    pcVar4 = strstr(pcVar3,"models/weapons/v_");
    if ((pcVar4 != (char *)0x0) || (pcVar4 = strstr(pcVar3,"_arms"), pcVar4 != (char *)0x0)) {
      return 1;
    }
    pcVar3 = strstr(pcVar3,"models/weapons/c_");
    if ((pcVar3 != (char *)0x0) &&
       (cVar1 = FUN_180121180(*(undefined4 *)(param_1 + 0x44)), cVar1 != '\0')) {
      return 1;
    }
  }
  if (((0 < *(int *)(param_1 + 0x44)) && (DAT_1803fa360 != (longlong *)0x0)) &&
     ((lp = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(), lp != (longlong *)0x0 &&
      ((BVar2 = IsBadReadPtr(lp,8), BVar2 == 0 && (BVar2 = IsBadReadPtr((void *)*lp,8), BVar2 == 0))
      )))) {
    pcVar3 = (char *)FUN_18001e410(lp);
    if (((pcVar3 < (char *)0x10001) || (*pcVar3 == '\0')) &&
       ((lVar5 = (**(code **)(*lp + 0x78))(lp), lVar5 == 0 ||
        (pcVar3 = *(char **)(lVar5 + 0x10), pcVar3 < (char *)0x10001)))) {
      pcVar3 = (char *)0x0;
    }
    uVar6 = FUN_180121100(pcVar3);
    return uVar6;
  }
  return 0;
}


)B180121200",
    "188e2792f37914379f2f5005892fd1acba686dfa5f00ab559daac46e5865e082",
    R"F180121200C(FUN_18001e410
FUN_180121100
FUN_180121180)F180121200C",
    R"F180121200D(DAT_1803f9250
DAT_1803fa360)F180121200D",
    R"F180121200T("_arms"
"models/weapons/c_"
"models/weapons/v_")F180121200T",
    R"F180121200F(18: if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
20: return 1;
22: if (((*(longlong *)(param_1 + 0x20) != 0) && (DAT_1803f9250 != (longlong *)0x0)) &&
25: if ((pcVar4 != (char *)0x0) || (pcVar4 = strstr(pcVar3,"_arms"), pcVar4 != (char *)0x0)) {
26: return 1;
29: if ((pcVar3 != (char *)0x0) &&
31: return 1;
34: if (((0 < *(int *)(param_1 + 0x44)) && (DAT_1803fa360 != (longlong *)0x0)) &&
39: if (((pcVar3 < (char *)0x10001) || (*pcVar3 == '\0')) &&
45: return uVar6;
47: return 0;)F180121200F",
    R"F180121200U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9250.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 23: (pcVar3 = (char *)(**(code **)(*DAT_1803f9250 + 0x18))(), (char *)0x10000 < pcVar3)) {.
TODO: resolve the indirect call in body 35: ((lp = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(), lp != (longlong *)0x0 &&.
TODO: resolve the indirect call in body 40: ((lVar5 = (**(code **)(*lp + 0x78))(lp), lVar5 == 0 ||.)F180121200U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180121200() noexcept {
    return kFunction_0x180121200;
}

// 0x180121360 Features_VMChams_VMChamsFeature_vfunc15
// source: re/dump/decompile/0x180121360_Features_VMChams_VMChamsFeature_vfunc15.c
// size: 835 bytes; thunk: false
// body sha256: fa5bcb4ca83a7128e4deac84e06294cfe054a287c632f91cecfa4c3f5033a868
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180121360{
    "0x180121360",
    "Features_VMChams_VMChamsFeature_vfunc15",
    R"F180121360S(undefined Features_VMChams_VMChamsFeature_vfunc15())F180121360S",
    R"B180121360(// 0x180121360  Features_VMChams_VMChamsFeature_vfunc15
// size=835 thunk=false
// signature: undefined Features_VMChams_VMChamsFeature_vfunc15()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_VMChams_VMChamsFeature_vfunc15(void)

{
  longlong lVar1;
  char cVar2;
  BOOL BVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong lVar6;
  ulonglong *puVar7;
  undefined4 *puVar8;
  ulonglong *puVar9;
  longlong in_R9;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50 [2];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  local_58 = 0x809c2c8398aa910b;
  local_40 = 0x93fd561a96ab0c67;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_40);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_78,&local_58);
  pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
  if (*pcVar5 == '\0') {
    return;
  }
  if (DAT_1804236a5 != '\0') {
    return;
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0xf6f) == '\0') {
    if (*(int *)(in_R9 + 0x44) < 1) {
      return;
    }
    if (DAT_1803fa360 == (longlong *)0x0) {
      return;
    }
    plVar4 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))();
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    BVar3 = IsBadReadPtr(plVar4,8);
    if (BVar3 != 0) {
      return;
    }
    BVar3 = IsBadReadPtr((void *)*plVar4,8);
    if (BVar3 != 0) {
      return;
    }
    pcVar5 = (char *)FUN_18001e410(plVar4);
    if (((pcVar5 < (char *)0x10001) || (*pcVar5 == '\0')) &&
       ((lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4), lVar6 == 0 ||
        (pcVar5 = *(char **)(lVar6 + 0x10), pcVar5 < (char *)0x10001)))) {
      pcVar5 = (char *)0x0;
    }
    cVar2 = FUN_180121100(pcVar5);
    if (cVar2 == '\0') {
      return;
    }
    if (DAT_180426198 < 8) {
      DAT_180426198 = DAT_180426198 + 1;
      FUN_180014410("[VMCHAMS] DME vm ent %d \'%s\' (pass=%d)\n",*(undefined4 *)(in_R9 + 0x44),
                    pcVar5,*(char *)(lVar1 + 0xf6f) != '\0');
    }
  }
  local_40 = local_40 & 0xffffffff00000000;
  local_50[0] = 0xea004a2b62efe75f;
  local_58 = 0x93fd561a96ab0c67;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_58);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_68,local_50);
  puVar7 = (ulonglong *)FUN_1802029c0(*plVar4 + 0x28);
  puVar9 = &local_40;
  if (-1 < (int)*puVar7) {
    puVar9 = puVar7;
  }
  if (0xd < (int)*puVar7) {
    puVar9 = (ulonglong *)&DAT_18033c398;
  }
  lVar6 = 0;
  if (((int)*puVar9 < 1) || (lVar6 = FUN_1801070a0((int)*puVar9 + -1), lVar6 != 0)) {
    local_50[0] = 0x93fd561a96ab0c67;
    *(undefined1 *)(lVar1 + 0xf88) = 1;
    *(longlong *)(lVar1 + 0xf80) = lVar6;
    local_58 = 0x17668cc7d4d6e10a;
    plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_68,local_50);
    plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_78,&local_58);
    puVar8 = (undefined4 *)FUN_180202dc0(*plVar4 + 0x28);
    local_50[0] = 0x93fd561a96ab0c67;
    *(undefined4 *)(lVar1 + 0xf70) = *puVar8;
    local_58 = 0x176699c7d4d6f721;
    plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_68,local_50);
    plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_78,&local_58);
    puVar8 = (undefined4 *)FUN_180202dc0(*plVar4 + 0x28);
    local_50[0] = 0x93fd561a96ab0c67;
    *(undefined4 *)(lVar1 + 0xf74) = *puVar8;
    local_58 = 0x17669cc7d4d6fc3a;
    plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_68,local_50);
    plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_78,&local_58);
    puVar8 = (undefined4 *)FUN_180202dc0(*plVar4 + 0x28);
    *(undefined4 *)(lVar1 + 0xf78) = *puVar8;
  }
  return;
}


)B180121360",
    "fa5bcb4ca83a7128e4deac84e06294cfe054a287c632f91cecfa4c3f5033a868",
    R"F180121360C(FUN_180014410
FUN_18001e410
FUN_1801070a0
FUN_180121100
FUN_1801fcfc0
FUN_1802029c0
FUN_180202dc0
FUN_180241a30)F180121360C",
    R"F180121360D(DAT_18033c398
DAT_1803da4c0
DAT_1803fa360
DAT_1803fadf0
DAT_1804236a5
DAT_180426198)F180121360D",
    R"F180121360T("[VMCHAMS] DME vm ent %d \\'%s\\' (pass=%d)\\n")F180121360T",
    R"F180121360F(36: if (*pcVar5 == '\0') {
37: return;
39: if (DAT_1804236a5 != '\0') {
40: return;
43: if (*(char *)(lVar1 + 0xf6f) == '\0') {
44: if (*(int *)(in_R9 + 0x44) < 1) {
45: return;
47: if (DAT_1803fa360 == (longlong *)0x0) {
48: return;
51: if (plVar4 == (longlong *)0x0) {
52: return;
55: if (BVar3 != 0) {
56: return;
59: if (BVar3 != 0) {
60: return;
63: if (((pcVar5 < (char *)0x10001) || (*pcVar5 == '\0')) &&
69: if (cVar2 == '\0') {
70: return;
72: if (DAT_180426198 < 8) {
85: if (-1 < (int)*puVar7) {
88: if (0xd < (int)*puVar7) {
92: if (((int)*puVar9 < 1) || (lVar6 = FUN_1801070a0((int)*puVar9 + -1), lVar6 != 0)) {
114: return;)F180121360F",
    R"F180121360U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033c398.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1804236a5.
TODO: recover the declaration, type and value for global/data reference DAT_180426198.
TODO: resolve the indirect call in body 50: plVar4 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 64: ((lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4), lVar6 == 0 ||.)F180121360U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180121360() noexcept {
    return kFunction_0x180121360;
}

// 0x1801216b0 FUN_1801216b0
// source: re/dump/decompile/0x1801216b0_FUN_1801216b0.c
// size: 37 bytes; thunk: false
// body sha256: 4b98f509d51607b1d81b6fd871fef54f855226cfe713d3524bd3461adbc6e1d0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801216b0{
    "0x1801216b0",
    "FUN_1801216b0",
    R"F1801216b0S(undefined FUN_1801216b0())F1801216b0S",
    R"B1801216b0(// 0x1801216b0  FUN_1801216b0
// size=37 thunk=false
// signature: undefined FUN_1801216b0()
// status: ok


void FUN_1801216b0(longlong param_1)

{
  FUN_180209700(param_1 + 0x18);
  FUN_18020b380(param_1 + 8);
  return;
}


)B1801216b0",
    "4b98f509d51607b1d81b6fd871fef54f855226cfe713d3524bd3461adbc6e1d0",
    R"F1801216b0C(FUN_180209700
FUN_18020b380)F1801216b0C",
    R"F1801216b0D()F1801216b0D",
    R"F1801216b0T()F1801216b0T",
    R"F1801216b0F(12: return;)F1801216b0F",
    R"F1801216b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1801216b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801216b0() noexcept {
    return kFunction_0x1801216b0;
}

// 0x1801216e0 FUN_1801216e0
// source: re/dump/decompile/0x1801216e0_FUN_1801216e0.c
// size: 37 bytes; thunk: false
// body sha256: 24cd8dfef234c06cb88966cee553c71edf18a865a7050766a1186cf3f90f1c96
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801216e0{
    "0x1801216e0",
    "FUN_1801216e0",
    R"F1801216e0S(undefined FUN_1801216e0())F1801216e0S",
    R"B1801216e0(// 0x1801216e0  FUN_1801216e0
// size=37 thunk=false
// signature: undefined FUN_1801216e0()
// status: ok


void FUN_1801216e0(longlong param_1)

{
  FUN_180209700(param_1 + 0x18);
  FUN_18020b190(param_1 + 8);
  return;
}


)B1801216e0",
    "24cd8dfef234c06cb88966cee553c71edf18a865a7050766a1186cf3f90f1c96",
    R"F1801216e0C(FUN_180209700
FUN_18020b190)F1801216e0C",
    R"F1801216e0D()F1801216e0D",
    R"F1801216e0T()F1801216e0T",
    R"F1801216e0F(12: return;)F1801216e0F",
    R"F1801216e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1801216e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801216e0() noexcept {
    return kFunction_0x1801216e0;
}

// 0x180121710 FUN_180121710
// source: re/dump/decompile/0x180121710_FUN_180121710.c
// size: 579 bytes; thunk: false
// body sha256: eb22d3200c9c476acf4705c4c534872df4cf9f2cb54bd7238bab6c1fb17c2947
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180121710{
    "0x180121710",
    "FUN_180121710",
    R"F180121710S(undefined FUN_180121710())F180121710S",
    R"B180121710(// 0x180121710  FUN_180121710
// size=579 thunk=false
// signature: undefined FUN_180121710()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_180121710(undefined8 *param_1,longlong param_2,int param_3,int param_4,longlong param_5,
             char param_6,char param_7)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar13;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  undefined1 local_80 [16];
  longlong local_70;
  longlong local_68;
  longlong local_60 [2];
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  local_68 = param_5;
  if ((param_2 == 0) || (param_3 < 1)) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)((longlong)param_1 + 0x24) = 1;
    param_1[5] = 0;
  }
  else {
    local_88 = &DAT_1803e8990;
    local_70 = param_2;
    iVar9 = _Mtx_lock(&DAT_1803e8990);
    if (iVar9 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar3 = (code *)swi(3);
      puVar10 = (undefined8 *)(*pcVar3)();
      return puVar10;
    }
    uVar13 = extraout_XMM0_Da;
    if (DAT_1803e89dc == 0x7fffffff) {
      DAT_1803e89dc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      uVar13 = extraout_XMM0_Da_00;
    }
    lVar12 = DAT_1803e8970;
    plVar11 = (longlong *)FUN_1802170e0(uVar13,local_80,&local_70);
    lVar2 = *plVar11;
    uVar13 = extraout_XMM0_Da_01;
    if (((*(int *)(lVar2 + 0x18) != param_3) || (*(int *)(lVar2 + 0x1c) != param_4)) ||
       (*(longlong *)(lVar2 + 0x28) != lVar12)) {
      if (*(longlong *)(lVar2 + 0x30) != 0) {
        local_60[0] = 0;
        uVar13 = FUN_18020b0b0(extraout_XMM0_Da_01,local_60,lVar2 + 0x30);
        if ((local_60[0] != DAT_180458258) && (*(longlong *)(local_60[0] + 0x18) == local_70)) {
          uVar13 = FUN_180204d00(uVar13,local_60);
        }
      }
      *(int *)(lVar2 + 0x18) = param_3;
      *(int *)(lVar2 + 0x1c) = param_4;
      lVar1 = DAT_1803e8980 + 1;
      lVar7 = lVar1;
      *(longlong *)(lVar2 + 0x20) = DAT_1803e8980;
      DAT_1803e8980 = lVar7;
      if (lVar1 == 0) {
        DAT_1803e8980 = 1;
      }
      *(longlong *)(lVar2 + 0x28) = lVar12;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(undefined4 *)(lVar2 + 0x38) = 0;
      *(undefined1 *)(lVar2 + 0x3c) = 1;
      *(undefined8 *)(lVar2 + 0x40) = 0;
    }
    if (local_68 != 0) {
      lVar12 = local_68;
      if ((*(longlong *)(lVar2 + 0x30) != 0) && (*(longlong *)(lVar2 + 0x30) != local_68)) {
        local_60[0] = 0;
        uVar13 = FUN_18020b0b0(uVar13,local_60,lVar2 + 0x30);
        if ((local_60[0] != DAT_180458258) && (*(longlong *)(local_60[0] + 0x18) == local_70)) {
          uVar13 = FUN_180204d00(uVar13,local_60);
          lVar12 = local_68;
        }
      }
      lVar1 = local_70;
      *(longlong *)(lVar2 + 0x30) = lVar12;
      if ((*(char *)(lVar2 + 0x39) == '\0') && (param_6 == '\0')) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
      *(undefined1 *)(lVar2 + 0x39) = uVar8;
      if ((*(char *)(lVar2 + 0x3a) == '\0') && (param_7 == '\0')) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
      *(undefined1 *)(lVar2 + 0x3a) = uVar8;
      plVar11 = (longlong *)FUN_180216df0(uVar13,local_60,&local_68);
      *(longlong *)(*plVar11 + 0x18) = lVar1;
    }
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    *param_1 = *(undefined8 *)(lVar2 + 0x18);
    param_1[1] = uVar6;
    uVar13 = *(undefined4 *)(lVar2 + 0x2c);
    uVar4 = *(undefined4 *)(lVar2 + 0x30);
    uVar5 = *(undefined4 *)(lVar2 + 0x34);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar2 + 0x28);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar13;
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
    uVar13 = *(undefined4 *)(lVar2 + 0x3c);
    uVar4 = *(undefined4 *)(lVar2 + 0x40);
    uVar5 = *(undefined4 *)(lVar2 + 0x44);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar2 + 0x38);
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar13;
    *(undefined4 *)(param_1 + 5) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
    _Mtx_unlock(&DAT_1803e8990);
  }
  return param_1;
}


)B180121710",
    "eb22d3200c9c476acf4705c4c534872df4cf9f2cb54bd7238bab6c1fb17c2947",
    R"F180121710C(FUN_180204d00
FUN_18020b0b0
FUN_180216df0
FUN_1802170e0)F180121710C",
    R"F180121710D(DAT_1803da4c0
DAT_1803e8970
DAT_1803e8980
DAT_1803e8990
DAT_1803e89dc
DAT_180458258)F180121710D",
    R"F180121710T()F180121710T",
    R"F180121710F(40: if ((param_2 == 0) || (param_3 < 1)) {
49: else {
53: if (iVar9 != 0) {
57: return puVar10;
60: if (DAT_1803e89dc == 0x7fffffff) {
69: if (((*(int *)(lVar2 + 0x18) != param_3) || (*(int *)(lVar2 + 0x1c) != param_4)) ||
71: if (*(longlong *)(lVar2 + 0x30) != 0) {
74: if ((local_60[0] != DAT_180458258) && (*(longlong *)(local_60[0] + 0x18) == local_70)) {
84: if (lVar1 == 0) {
93: if (local_68 != 0) {
95: if ((*(longlong *)(lVar2 + 0x30) != 0) && (*(longlong *)(lVar2 + 0x30) != local_68)) {
98: if ((local_60[0] != DAT_180458258) && (*(longlong *)(local_60[0] + 0x18) == local_70)) {
105: if ((*(char *)(lVar2 + 0x39) == '\0') && (param_6 == '\0')) {
108: else {
112: if ((*(char *)(lVar2 + 0x3a) == '\0') && (param_7 == '\0')) {
115: else {
141: return param_1;)F180121710F",
    R"F180121710U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8970.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8980.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8990.
TODO: recover the declaration, type and value for global/data reference DAT_1803e89dc.
TODO: recover the declaration, type and value for global/data reference DAT_180458258.
TODO: resolve the indirect call in body 55: pcVar3 = (code *)swi(3);.
TODO: resolve the indirect call in body 56: puVar10 = (undefined8 *)(*pcVar3)();.)F180121710U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180121710() noexcept {
    return kFunction_0x180121710;
}

// 0x180121960 FUN_180121960
// source: re/dump/decompile/0x180121960_FUN_180121960.c
// size: 457 bytes; thunk: false
// body sha256: 78412cb8a9835bc282749417386e9d97b3ab5724e44902fe5883f10f428bd984
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180121960{
    "0x180121960",
    "FUN_180121960",
    R"F180121960S(undefined FUN_180121960())F180121960S",
    R"B180121960(// 0x180121960  FUN_180121960
// size=457 thunk=false
// signature: undefined FUN_180121960()
// status: ok


void FUN_180121960(ulonglong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong local_res8;
  undefined *puVar8;
  
  if ((param_1 != 0) && (DAT_1803e89e0 != '\0')) {
    puVar8 = &DAT_1803e8990;
    local_res8 = param_1;
    iVar3 = _Mtx_lock(&DAT_1803e8990);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (DAT_1803e89dc == 0x7fffffff) {
      DAT_1803e89dc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    plVar5 = (longlong *)
             ((((((((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ local_res8 >> 8 & 0xff
                     ) * 0x100000001b3 ^ local_res8 >> 0x10 & 0xff) * 0x100000001b3 ^
                   local_res8 >> 0x18 & 0xff) * 0x100000001b3 ^ local_res8 >> 0x20 & 0xff) *
                  0x100000001b3 ^ local_res8 >> 0x28 & 0xff) * 0x100000001b3 ^
                local_res8 >> 0x30 & 0xff) * 0x100000001b3 ^ local_res8 >> 0x38) * 0x100000001b3 &
              DAT_180458280) * 0x10 + DAT_180458268);
    lVar4 = plVar5[1];
    uVar7 = 0;
    if (lVar4 == DAT_180458258) {
LAB_180121a91:
      lVar4 = 0;
    }
    else {
      plVar5 = (longlong *)*plVar5;
      uVar1 = *(ulonglong *)(lVar4 + 0x10);
      while (param_1 != uVar1) {
        if ((longlong *)lVar4 == plVar5) goto LAB_180121a91;
        lVar4 = *(longlong *)(lVar4 + 8);
        uVar1 = *(ulonglong *)(lVar4 + 0x10);
      }
    }
    lVar6 = DAT_180458258;
    if (lVar4 != 0) {
      lVar6 = lVar4;
    }
    if (lVar6 != DAT_180458258) {
      local_res8 = 0;
      FUN_18020b1f0(plVar5,&local_res8,lVar6 + 0x18,param_4,puVar8);
      uVar1 = local_res8;
      if ((local_res8 != DAT_1805c7b58) && (*(longlong *)(local_res8 + 0x28) == DAT_1803e8970)) {
        *(undefined1 *)(local_res8 + 0x3b) = 1;
        *(char *)(local_res8 + 0x3c) = param_2;
        if (param_2 == '\0') {
          plVar5 = (longlong *)FUN_180014300(&local_res8);
          *(longlong *)(uVar1 + 0x40) = *plVar5 / 1000000;
        }
        else {
          *(undefined8 *)(local_res8 + 0x40) = uVar7;
        }
      }
    }
    _Mtx_unlock(&DAT_1803e8990);
  }
  return;
}


)B180121960",
    "78412cb8a9835bc282749417386e9d97b3ab5724e44902fe5883f10f428bd984",
    R"F180121960C(FUN_180014300
FUN_18020b1f0)F180121960C",
    R"F180121960D(LAB_180121a91
DAT_1803e8970
DAT_1803e8990
DAT_1803e89dc
DAT_1803e89e0
DAT_180458258
DAT_180458268
DAT_180458280
DAT_1805c7b58)F180121960D",
    R"F180121960T()F180121960T",
    R"F180121960F(20: if ((param_1 != 0) && (DAT_1803e89e0 != '\0')) {
24: if (iVar3 != 0) {
28: return;
30: if (DAT_1803e89dc == 0x7fffffff) {
43: if (lVar4 == DAT_180458258) {
44: LAB_180121a91:
47: else {
50: while (param_1 != uVar1) {
51: if ((longlong *)lVar4 == plVar5) goto LAB_180121a91;
57: if (lVar4 != 0) {
60: if (lVar6 != DAT_180458258) {
64: if ((local_res8 != DAT_1805c7b58) && (*(longlong *)(local_res8 + 0x28) == DAT_1803e8970)) {
67: if (param_2 == '\0') {
71: else {
78: return;)F180121960F",
    R"F180121960U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180121a91.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8970.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8990.
TODO: recover the declaration, type and value for global/data reference DAT_1803e89dc.
TODO: recover the declaration, type and value for global/data reference DAT_1803e89e0.
TODO: recover the declaration, type and value for global/data reference DAT_180458258.
TODO: recover the declaration, type and value for global/data reference DAT_180458268.
TODO: recover the declaration, type and value for global/data reference DAT_180458280.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b58.
TODO: resolve the indirect call in body 26: pcVar2 = (code *)swi(3);.
TODO: resolve the indirect call in body 27: (*pcVar2)();.)F180121960U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180121960() noexcept {
    return kFunction_0x180121960;
}

// 0x180121b30 FUN_180121b30
// source: re/dump/decompile/0x180121b30_FUN_180121b30.c
// size: 851 bytes; thunk: false
// body sha256: a11a9c0e676e6963d4355c9ad66d5745b4ca5f9a6475b79cdfee04e1c51b653b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180121b30{
    "0x180121b30",
    "FUN_180121b30",
    R"F180121b30S(undefined FUN_180121b30())F180121b30S",
    R"B180121b30(// 0x180121b30  FUN_180121b30
// size=851 thunk=false
// signature: undefined FUN_180121b30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180121b30(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *_Memory;
  undefined4 uVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  longlong lStack_60;
  longlong local_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined *local_38;
  longlong local_30;
  ulonglong local_28;
  
  if ((param_1 != 0) && (local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_88, DAT_1803e89e0 != '\0')) {
    local_38 = &DAT_1803e8990;
    iVar6 = _Mtx_lock(&DAT_1803e8990);
    if (iVar6 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (DAT_1803e89dc == 0x7fffffff) {
      DAT_1803e89dc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    uVar8 = ((((((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_1 >> 8 & 0xff) *
                  0x100000001b3 ^ param_1 >> 0x10 & 0xff) * 0x100000001b3 ^ param_1 >> 0x18 & 0xff)
                * 0x100000001b3 ^ param_1 >> 0x20 & 0xff) * 0x100000001b3 ^ param_1 >> 0x28 & 0xff)
              * 0x100000001b3 ^ param_1 >> 0x30 & 0xff) * 0x100000001b3 ^ param_1 >> 0x38) *
            0x100000001b3 & DAT_1805c7b80;
    _Memory = *(longlong **)(DAT_1805c7b68 + 8 + uVar8 * 0x10);
    if (_Memory == DAT_1805c7b58) {
LAB_180121c82:
      _Memory = (longlong *)0x0;
    }
    else {
      uVar2 = _Memory[2];
      while (param_1 != uVar2) {
        if (_Memory == *(longlong **)(DAT_1805c7b68 + uVar8 * 0x10)) goto LAB_180121c82;
        _Memory = (longlong *)_Memory[1];
        uVar2 = _Memory[2];
      }
    }
    if ((_Memory != (longlong *)0x0) && (_Memory != DAT_1805c7b58)) {
      local_68 = (undefined4)_Memory[3];
      uStack_64 = *(undefined4 *)((longlong)_Memory + 0x1c);
      lStack_60 = _Memory[4];
      local_58 = _Memory[5];
      uStack_50 = (undefined1)_Memory[7];
      uStack_4f = *(undefined1 *)((longlong)_Memory + 0x39);
      uStack_4e = *(undefined1 *)((longlong)_Memory + 0x3a);
      uStack_4d = *(undefined1 *)((longlong)_Memory + 0x3b);
      uStack_4c = CONCAT31(uStack_4c._1_3_,*(undefined1 *)((longlong)_Memory + 0x3c));
      local_48 = _Memory[8];
      plVar7 = (longlong *)FUN_180014300(&local_30);
      uStack_40 = *plVar7 / 1000000;
      if (_Memory[6] != 0) {
        local_30 = 0;
        uVar9 = FUN_18020b0b0(*plVar7,&local_30);
        if ((local_30 != DAT_180458258) && (*(ulonglong *)(local_30 + 0x18) == param_1)) {
          FUN_180204d00(uVar9,&local_30);
        }
      }
      plVar5 = DAT_1805c7b58;
      uVar8 = (((((((((ulonglong)*(byte *)(_Memory + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)_Memory + 0x11)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)_Memory + 0x12)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)_Memory + 0x13)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)_Memory + 0x14)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)_Memory + 0x15)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)_Memory + 0x16)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)_Memory + 0x17)) * 0x100000001b3 & DAT_1805c7b80;
      plVar7 = (longlong *)(DAT_1805c7b68 + uVar8 * 0x10);
      lVar1 = DAT_1805c7b68 + uVar8 * 0x10;
      if (*(longlong **)(lVar1 + 8) == _Memory) {
        if ((longlong *)*plVar7 == _Memory) {
          *plVar7 = (longlong)DAT_1805c7b58;
          *(longlong **)(lVar1 + 8) = plVar5;
        }
        else {
          *(longlong *)(lVar1 + 8) = _Memory[1];
        }
      }
      else if ((longlong *)*plVar7 == _Memory) {
        *plVar7 = *_Memory;
      }
      lVar1 = *_Memory;
      DAT_1805c7b60 = DAT_1805c7b60 + -1;
      *(longlong *)_Memory[1] = lVar1;
      *(longlong *)(lVar1 + 8) = _Memory[1];
      free(_Memory);
      puVar4 = DAT_1803e9bf8;
      if (DAT_1803e9bf8 == DAT_1803e9c00) {
        FUN_180225740();
      }
      else {
        *DAT_1803e9bf8 = CONCAT44(uStack_64,local_68);
        puVar4[1] = lStack_60;
        puVar4[2] = local_58;
        puVar4[3] = CONCAT44(uStack_4c,
                             CONCAT13(uStack_4d,CONCAT12(uStack_4e,CONCAT11(uStack_4f,uStack_50))));
        *(undefined4 *)(puVar4 + 4) = (undefined4)local_48;
        *(undefined4 *)((longlong)puVar4 + 0x24) = local_48._4_4_;
        *(undefined4 *)(puVar4 + 5) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)puVar4 + 0x2c) = uStack_40._4_4_;
        DAT_1803e9bf8 = DAT_1803e9bf8 + 6;
      }
    }
    _Mtx_unlock(&DAT_1803e8990);
  }
  return;
}


)B180121b30",
    "a11a9c0e676e6963d4355c9ad66d5745b4ca5f9a6475b79cdfee04e1c51b653b",
    R"F180121b30C(FUN_180014300
FUN_180204d00
FUN_18020b0b0
FUN_180225740)F180121b30C",
    R"F180121b30D(LAB_180121c82
DAT_1803da4c0
DAT_1803e8990
DAT_1803e89dc
DAT_1803e89e0
DAT_1803e9bf8
DAT_1803e9c00
DAT_180458258
DAT_1805c7b58
DAT_1805c7b60
DAT_1805c7b68
DAT_1805c7b80)F180121b30D",
    R"F180121b30T()F180121b30T",
    R"F180121b30F(38: if ((param_1 != 0) && (local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_88, DAT_1803e89e0 != '\0')) {
41: if (iVar6 != 0) {
45: return;
47: if (DAT_1803e89dc == 0x7fffffff) {
57: if (_Memory == DAT_1805c7b58) {
58: LAB_180121c82:
61: else {
63: while (param_1 != uVar2) {
64: if (_Memory == *(longlong **)(DAT_1805c7b68 + uVar8 * 0x10)) goto LAB_180121c82;
69: if ((_Memory != (longlong *)0x0) && (_Memory != DAT_1805c7b58)) {
82: if (_Memory[6] != 0) {
85: if ((local_30 != DAT_180458258) && (*(ulonglong *)(local_30 + 0x18) == param_1)) {
100: if (*(longlong **)(lVar1 + 8) == _Memory) {
101: if ((longlong *)*plVar7 == _Memory) {
105: else {
109: else if ((longlong *)*plVar7 == _Memory) {
118: if (DAT_1803e9bf8 == DAT_1803e9c00) {
121: else {
136: return;)F180121b30F",
    R"F180121b30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180121c82.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8990.
TODO: recover the declaration, type and value for global/data reference DAT_1803e89dc.
TODO: recover the declaration, type and value for global/data reference DAT_1803e89e0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9bf8.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9c00.
TODO: recover the declaration, type and value for global/data reference DAT_180458258.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b58.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b60.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b68.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b80.
TODO: resolve the indirect call in body 43: pcVar3 = (code *)swi(3);.
TODO: resolve the indirect call in body 44: (*pcVar3)();.)F180121b30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180121b30() noexcept {
    return kFunction_0x180121b30;
}

// 0x180121e90 FUN_180121e90
// source: re/dump/decompile/0x180121e90_FUN_180121e90.c
// size: 112 bytes; thunk: false
// body sha256: 9427f848ab6e04578e935cf3690c63c02ff63063502eb429fa73e226c96c424c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180121e90{
    "0x180121e90",
    "FUN_180121e90",
    R"F180121e90S(undefined FUN_180121e90())F180121e90S",
    R"B180121e90(// 0x180121e90  FUN_180121e90
// size=112 thunk=false
// signature: undefined FUN_180121e90()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180121e90(undefined8 param_1)

{
  longlong lVar1;
  
  FUN_18020e8a0(&DAT_1803ebbc0,param_1);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  _DAT_1803e897c = (float)*(double *)(*(longlong *)(lVar1 + 0xec0) + 0x10);
  FUN_18020e450(param_1);
  return;
}


)B180121e90",
    "9427f848ab6e04578e935cf3690c63c02ff63063502eb429fa73e226c96c424c",
    R"F180121e90C(FUN_18020e450
FUN_18020e8a0)F180121e90C",
    R"F180121e90D(DAT_1803ebbc0)F180121e90D",
    R"F180121e90T()F180121e90T",
    R"F180121e90F(16: if (*(char *)(lVar1 + 0x10) == '\0') {
21: return;)F180121e90F",
    R"F180121e90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803ebbc0.)F180121e90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180121e90() noexcept {
    return kFunction_0x180121e90;
}

// 0x180121f00 FUN_180121f00
// source: re/dump/decompile/0x180121f00_FUN_180121f00.c
// size: 37 bytes; thunk: false
// body sha256: 97059c62ae1358ea7a40f2b7cc99a3164cdccd147ff688fe8135c9afaf85d763
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180121f00{
    "0x180121f00",
    "FUN_180121f00",
    R"F180121f00S(undefined FUN_180121f00())F180121f00S",
    R"B180121f00(// 0x180121f00  FUN_180121f00
// size=37 thunk=false
// signature: undefined FUN_180121f00()
// status: ok


void FUN_180121f00(longlong param_1)

{
  FUN_180209700(param_1 + 0x18);
  FUN_18020ae20(param_1 + 8);
  return;
}


)B180121f00",
    "97059c62ae1358ea7a40f2b7cc99a3164cdccd147ff688fe8135c9afaf85d763",
    R"F180121f00C(FUN_180209700
FUN_18020ae20)F180121f00C",
    R"F180121f00D()F180121f00D",
    R"F180121f00T()F180121f00T",
    R"F180121f00F(12: return;)F180121f00F",
    R"F180121f00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180121f00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180121f00() noexcept {
    return kFunction_0x180121f00;
}

// 0x180121f30 FUN_180121f30
// source: re/dump/decompile/0x180121f30_FUN_180121f30.c
// size: 1056 bytes; thunk: false
// body sha256: 6082382b2aad68881c5802716bd1946bbe7ab330dffe4ca2c7c72d077e9dd15f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180121f30{
    "0x180121f30",
    "FUN_180121f30",
    R"F180121f30S(undefined FUN_180121f30())F180121f30S",
    R"B180121f30(// 0x180121f30  FUN_180121f30
// size=1056 thunk=false
// signature: undefined FUN_180121f30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180121f30(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *_Buf1;
  char *******pppppppcVar5;
  undefined8 *******_Buf1_00;
  undefined8 *******pppppppuVar6;
  char *******pppppppcVar7;
  char *******pppppppcVar8;
  longlong lVar9;
  size_t sVar10;
  bool bVar11;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 ******local_d0;
  undefined8 uStack_c8;
  size_t local_c0;
  ulonglong uStack_b8;
  char ******local_b0 [2];
  size_t local_a0;
  ulonglong local_98;
  char ******local_90 [2];
  size_t local_80;
  ulonglong local_78;
  undefined8 ******local_70 [2];
  ulonglong local_60;
  ulonglong local_58;
  undefined8 ******local_50 [2];
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  bVar1 = false;
  local_d8 = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return local_30 & 0xffffffffffffff00;
  }
  FUN_18016d4c0(local_b0,param_1);
  FUN_18016d4c0(local_90,param_2);
  pppppppcVar5 = (char *******)local_b0[0];
  if (local_98 < 0x10) {
    pppppppcVar5 = local_b0;
  }
  pppppppcVar7 = (char *******)((longlong)pppppppcVar5 + local_a0);
  for (pppppppcVar8 = pppppppcVar5; pppppppcVar8 != pppppppcVar7;
      pppppppcVar8 = (char *******)((longlong)pppppppcVar8 + 1)) {
    iVar2 = tolower((int)*(char *)pppppppcVar8);
    *(char *)pppppppcVar5 = (char)iVar2;
    pppppppcVar5 = (char *******)((longlong)pppppppcVar5 + 1);
  }
  pppppppcVar5 = (char *******)local_90[0];
  if (local_78 < 0x10) {
    pppppppcVar5 = local_90;
  }
  pppppppcVar7 = (char *******)((longlong)pppppppcVar5 + local_80);
  for (pppppppcVar8 = pppppppcVar5; pppppppcVar8 != pppppppcVar7;
      pppppppcVar8 = (char *******)((longlong)pppppppcVar8 + 1)) {
    iVar2 = tolower((int)*(char *)pppppppcVar8);
    *(char *)pppppppcVar5 = (char)iVar2;
    pppppppcVar5 = (char *******)((longlong)pppppppcVar5 + 1);
  }
  pppppppcVar5 = local_b0;
  if (0xf < local_98) {
    pppppppcVar5 = (char *******)local_b0[0];
  }
  if (((local_a0 == 0) ||
      (pcVar4 = (char *)((longlong)pppppppcVar5 + local_a0),
      pcVar3 = (char *)thunk_FUN_1802d5c20(pppppppcVar5,pcVar4,0x2a), pcVar3 == pcVar4)) ||
     ((longlong)pcVar3 - (longlong)pppppppcVar5 == -1)) {
    pppppppcVar5 = local_90;
    if (0xf < local_78) {
      pppppppcVar5 = (char *******)local_90[0];
    }
    pppppppcVar8 = local_b0;
    if (0xf < local_98) {
      pppppppcVar8 = (char *******)local_b0[0];
    }
LAB_1801222f4:
    if (local_a0 == local_80) {
      if (local_a0 == 0) {
        bVar11 = true;
      }
      else {
        iVar2 = memcmp(pppppppcVar8,pppppppcVar5,local_a0);
        bVar11 = iVar2 == 0;
      }
    }
    else {
      bVar11 = false;
    }
    goto LAB_180122317;
  }
  pppppppcVar5 = local_b0;
  if (0xf < local_98) {
    pppppppcVar5 = (char *******)local_b0[0];
  }
  if (*(char *)pppppppcVar5 == '*') {
    pppppppcVar5 = local_b0;
    if (0xf < local_98) {
      pppppppcVar5 = (char *******)local_b0[0];
    }
    if ((*(char *)((longlong)pppppppcVar5 + (local_a0 - 1)) == '*') && (2 < local_a0)) {
      FUN_18020e670(local_b0,local_50,1,local_a0 - 2);
      pppppppuVar6 = local_50;
      if (0xf < local_38) {
        pppppppuVar6 = (undefined8 *******)local_50[0];
      }
      pppppppcVar5 = local_90;
      if (0xf < local_78) {
        pppppppcVar5 = (char *******)local_90[0];
      }
      if (local_80 < local_40) {
LAB_180122117:
        lVar9 = -1;
      }
      else if (local_40 == 0) {
        lVar9 = 0;
      }
      else {
        pcVar4 = (char *)thunk_FUN_1802d6b60(pppppppcVar5,
                                             (char *)((longlong)pppppppcVar5 + local_80),
                                             pppppppuVar6);
        if (pcVar4 == (char *)((longlong)pppppppcVar5 + local_80)) goto LAB_180122117;
        lVar9 = (longlong)pcVar4 - (longlong)pppppppcVar5;
      }
      bVar11 = lVar9 != -1;
      FUN_18020e450(local_50);
      goto LAB_180122317;
    }
  }
  pppppppcVar5 = local_b0;
  if (0xf < local_98) {
    pppppppcVar5 = (char *******)local_b0[0];
  }
  if (*(char *)((longlong)pppppppcVar5 + (local_a0 - 1)) == '*') {
    FUN_18020e670(local_b0,local_70,0,local_a0 - 1);
    local_d0 = (undefined8 *******)0x0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    sVar10 = local_60;
    if (local_80 < local_60) {
      sVar10 = local_80;
    }
    pppppppcVar5 = local_90;
    if (0xf < local_78) {
      pppppppcVar5 = (char *******)local_90[0];
    }
    FUN_18001d080(&local_d0,pppppppcVar5,sVar10);
    local_d8 = 4;
    pppppppuVar6 = local_70;
    if (0xf < local_58) {
      pppppppuVar6 = (undefined8 *******)local_70[0];
    }
    _Buf1_00 = &local_d0;
    if (0xf < uStack_b8) {
      _Buf1_00 = (undefined8 *******)local_d0;
    }
    if (local_c0 == local_60) {
      if (local_c0 == 0) {
        bVar11 = true;
      }
      else {
        iVar2 = memcmp(_Buf1_00,pppppppuVar6,local_c0);
        bVar11 = iVar2 == 0;
      }
    }
    else {
      bVar11 = false;
    }
    local_d8 = 0;
    FUN_18020e450(&local_d0);
    FUN_18020e450(local_70);
    goto LAB_180122317;
  }
  pppppppcVar5 = local_b0;
  if (0xf < local_98) {
    pppppppcVar5 = (char *******)local_b0[0];
  }
  if (*(char *)pppppppcVar5 != '*') {
    pppppppcVar5 = local_90;
    if (0xf < local_78) {
      pppppppcVar5 = (char *******)local_90[0];
    }
    pppppppcVar8 = local_b0;
    if (0xf < local_98) {
      pppppppcVar8 = (char *******)local_b0[0];
    }
    goto LAB_1801222f4;
  }
  FUN_18020e670(local_b0,local_70,1,0xffffffffffffffff);
  if (local_80 < local_60) {
LAB_18012228d:
    bVar11 = false;
  }
  else {
    _Buf1 = (undefined8 *)FUN_18020e670(local_90,&local_d0,local_80 - local_60,0xffffffffffffffff);
    bVar1 = true;
    local_d8 = 1;
    pppppppuVar6 = local_70;
    if (0xf < local_58) {
      pppppppuVar6 = (undefined8 *******)local_70[0];
    }
    sVar10 = _Buf1[2];
    if (0xf < (ulonglong)_Buf1[3]) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if ((sVar10 != local_60) ||
       ((sVar10 != 0 && (iVar2 = memcmp(_Buf1,pppppppuVar6,sVar10), iVar2 != 0))))
    goto LAB_18012228d;
    bVar11 = true;
  }
  if (bVar1) {
    local_d8 = 0;
    FUN_18020e450(&local_d0);
  }
  FUN_18020e450(local_70);
LAB_180122317:
  FUN_18020e450(local_90);
  FUN_18020e450(local_b0);
  return (ulonglong)bVar11;
}


)B180121f30",
    "6082382b2aad68881c5802716bd1946bbe7ab330dffe4ca2c7c72d077e9dd15f",
    R"F180121f30C(FUN_18001d080
FUN_18016d4c0
FUN_18020e450
FUN_18020e670)F180121f30C",
    R"F180121f30D(LAB_180122117
LAB_18012228d
LAB_1801222f4
LAB_180122317
DAT_1803da4c0)F180121f30D",
    R"F180121f30T()F180121f30T",
    R"F180121f30F(48: if (*(longlong *)(param_1 + 0x10) == 0) {
49: return local_30 & 0xffffffffffffff00;
54: if (local_98 < 0x10) {
58: for (pppppppcVar8 = pppppppcVar5; pppppppcVar8 != pppppppcVar7;
65: if (local_78 < 0x10) {
69: for (pppppppcVar8 = pppppppcVar5; pppppppcVar8 != pppppppcVar7;
76: if (0xf < local_98) {
79: if (((local_a0 == 0) ||
84: if (0xf < local_78) {
88: if (0xf < local_98) {
91: LAB_1801222f4:
92: if (local_a0 == local_80) {
93: if (local_a0 == 0) {
96: else {
101: else {
104: goto LAB_180122317;
107: if (0xf < local_98) {
110: if (*(char *)pppppppcVar5 == '*') {
112: if (0xf < local_98) {
115: if ((*(char *)((longlong)pppppppcVar5 + (local_a0 - 1)) == '*') && (2 < local_a0)) {
118: if (0xf < local_38) {
122: if (0xf < local_78) {
125: if (local_80 < local_40) {
126: LAB_180122117:
129: else if (local_40 == 0) {
132: else {
136: if (pcVar4 == (char *)((longlong)pppppppcVar5 + local_80)) goto LAB_180122117;
141: goto LAB_180122317;
145: if (0xf < local_98) {
148: if (*(char *)((longlong)pppppppcVar5 + (local_a0 - 1)) == '*') {
155: if (local_80 < local_60) {
159: if (0xf < local_78) {
165: if (0xf < local_58) {
169: if (0xf < uStack_b8) {
172: if (local_c0 == local_60) {
173: if (local_c0 == 0) {
176: else {
181: else {
187: goto LAB_180122317;
190: if (0xf < local_98) {
193: if (*(char *)pppppppcVar5 != '*') {
195: if (0xf < local_78) {
199: if (0xf < local_98) {
202: goto LAB_1801222f4;
205: if (local_80 < local_60) {
206: LAB_18012228d:
209: else {
214: if (0xf < local_58) {
218: if (0xf < (ulonglong)_Buf1[3]) {
221: if ((sVar10 != local_60) ||
223: goto LAB_18012228d;
226: if (bVar1) {
231: LAB_180122317:
234: return (ulonglong)bVar11;)F180121f30F",
    R"F180121f30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180122117.
TODO: recover the declaration, type and value for global/data reference LAB_18012228d.
TODO: recover the declaration, type and value for global/data reference LAB_1801222f4.
TODO: recover the declaration, type and value for global/data reference LAB_180122317.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180121f30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180121f30() noexcept {
    return kFunction_0x180121f30;
}

// 0x180122350 FUN_180122350
// source: re/dump/decompile/0x180122350_FUN_180122350.c
// size: 239 bytes; thunk: false
// body sha256: 8235f468549a99ea99cdca0780d175d87a1cc2612d6781d90654b799eff9a4ea
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180122350{
    "0x180122350",
    "FUN_180122350",
    R"F180122350S(undefined FUN_180122350())F180122350S",
    R"B180122350(// 0x180122350  FUN_180122350
// size=239 thunk=false
// signature: undefined FUN_180122350()
// status: ok


undefined8 * FUN_180122350(undefined8 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  size_t sVar3;
  size_t _Size;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar4 = DAT_1803eb380;
  puVar8 = DAT_1803eb378;
  if (DAT_1803eb378 != DAT_1803eb380) {
    uVar2 = param_1[3];
    sVar3 = param_1[2];
    puVar9 = DAT_1803eb378;
    do {
      _Buf2 = param_1;
      if (0xf < uVar2) {
        _Buf2 = (undefined8 *)*param_1;
      }
      _Size = puVar9[2];
      _Buf1 = puVar9;
      if (0xf < (ulonglong)puVar9[3]) {
        _Buf1 = (undefined8 *)*puVar9;
      }
      if ((_Size == sVar3) && ((_Size == 0 || (iVar6 = memcmp(_Buf1,_Buf2,_Size), iVar6 == 0)))) {
        return puVar9;
      }
      puVar9 = puVar9 + 0xe;
    } while (puVar9 != puVar4);
    do {
      puVar9 = puVar8;
      if (0xf < (ulonglong)puVar8[3]) {
        puVar9 = (undefined8 *)*puVar8;
      }
      if ((((puVar8[2] != 0) &&
           (lVar1 = puVar8[2] + (longlong)puVar9, lVar7 = thunk_FUN_1802d5c20(puVar9,lVar1,0x2a),
           lVar7 != lVar1)) && (lVar7 - (longlong)puVar9 != -1)) &&
         (cVar5 = FUN_180121f30(puVar8,param_1), cVar5 != '\0')) {
        return puVar8;
      }
      puVar8 = puVar8 + 0xe;
    } while (puVar8 != puVar4);
  }
  return (undefined8 *)0x0;
}


)B180122350",
    "8235f468549a99ea99cdca0780d175d87a1cc2612d6781d90654b799eff9a4ea",
    R"F180122350C(FUN_180121f30)F180122350C",
    R"F180122350D(DAT_1803eb378
DAT_1803eb380)F180122350D",
    R"F180122350T()F180122350T",
    R"F180122350F(25: if (DAT_1803eb378 != DAT_1803eb380) {
29: do {
31: if (0xf < uVar2) {
36: if (0xf < (ulonglong)puVar9[3]) {
39: if ((_Size == sVar3) && ((_Size == 0 || (iVar6 = memcmp(_Buf1,_Buf2,_Size), iVar6 == 0)))) {
40: return puVar9;
44: do {
46: if (0xf < (ulonglong)puVar8[3]) {
49: if ((((puVar8[2] != 0) &&
53: return puVar8;
58: return (undefined8 *)0x0;)F180122350F",
    R"F180122350U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb378.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb380.)F180122350U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180122350() noexcept {
    return kFunction_0x180122350;
}

// 0x180122440 FUN_180122440
// source: re/dump/decompile/0x180122440_FUN_180122440.c
// size: 345 bytes; thunk: false
// body sha256: 96a469b3dfc0961c977df20866ff492c77da010a511654e9cb3072037712c2eb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180122440{
    "0x180122440",
    "FUN_180122440",
    R"F180122440S(undefined FUN_180122440())F180122440S",
    R"B180122440(// 0x180122440  FUN_180122440
// size=345 thunk=false
// signature: undefined FUN_180122440()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180122440(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_180122350();
  if (lVar2 == 0) {
    uStack_80 = 0;
    local_78 = _DAT_1803814b0;
    uStack_70 = _UNK_1803814b8;
    local_88 = 0;
    local_68 = 0x1000101;
    local_64 = 0;
    local_62 = 1;
    local_60 = 0;
    local_5c = 0x3f19999a;
    local_58 = 0x3f59999a;
    local_54 = 0x3f800000;
    local_50 = 0x3f800000;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0x3eb33333;
    local_40 = 0x3f59999a;
    local_3c = 0x3f800000;
    local_38 = ram0x0001803815c0;
    uStack_30 = _UNK_1803815c8;
    local_28 = 0x3f800000;
    local_24 = 0;
    local_20 = 2;
    uVar3 = ram0x0001803815c0;
    if (&local_88 != param_1) {
      puVar1 = param_1 + 2;
      if (0xf < (ulonglong)param_1[3]) {
        param_1 = (undefined8 *)*param_1;
      }
      uVar3 = FUN_180212700(&local_88,param_1,*puVar1);
    }
    if (DAT_1803eb380 == DAT_1803eb388) {
      FUN_180225990(uVar3,DAT_1803eb380,&local_88);
    }
    else {
      FUN_180232650();
      DAT_1803eb380 = DAT_1803eb380 + 0x70;
    }
    DAT_1803e8978 = (int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249 + -1;
    FUN_18020e450(&local_88);
  }
  return;
}


)B180122440",
    "96a469b3dfc0961c977df20866ff492c77da010a511654e9cb3072037712c2eb",
    R"F180122440C(FUN_180122350
FUN_18020e450
FUN_180212700
FUN_180225990
FUN_180232650)F180122440C",
    R"F180122440D(DAT_1803da4c0
DAT_1803e8978
DAT_1803eb378
DAT_1803eb380
DAT_1803eb388)F180122440D",
    R"F180122440T()F180122440T",
    R"F180122440F(43: if (lVar2 == 0) {
67: if (&local_88 != param_1) {
69: if (0xf < (ulonglong)param_1[3]) {
74: if (DAT_1803eb380 == DAT_1803eb388) {
77: else {
84: return;)F180122440F",
    R"F180122440U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8978.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb378.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb380.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb388.)F180122440U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180122440() noexcept {
    return kFunction_0x180122440;
}

// 0x1801225a0 FUN_1801225a0
// source: re/dump/decompile/0x1801225a0_FUN_1801225a0.c
// size: 250 bytes; thunk: false
// body sha256: 613478cfbaad86e7c69bfc3c9988615400c2a574fbbe5b211fbe61659ee9e240
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801225a0{
    "0x1801225a0",
    "FUN_1801225a0",
    R"F1801225a0S(undefined FUN_1801225a0())F1801225a0S",
    R"B1801225a0(// 0x1801225a0  FUN_1801225a0
// size=250 thunk=false
// signature: undefined FUN_1801225a0()
// status: ok


void FUN_1801225a0(void)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  LOCK();
  DAT_1803e8970 = DAT_1803e8970 + 1;
  UNLOCK();
  FUN_18020b400(&DAT_1805c3990);
  FUN_18020aea0(&DAT_180458210);
  FUN_18020da70(&DAT_1805c7b10);
  lVar2 = DAT_1803edd50;
  lVar4 = DAT_1803edd48;
  if (DAT_1803edd48 != DAT_1803edd50) {
    do {
      FUN_18020e450(lVar4);
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != lVar2);
    DAT_1803edd50 = DAT_1803edd48;
  }
  iVar3 = _Mtx_lock(&DAT_1803e8990);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e89dc == 0x7fffffff) {
    DAT_1803e89dc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_1803e9bf0 != DAT_1803e9bf8) {
    DAT_1803e9bf8 = DAT_1803e9bf0;
  }
  FUN_18020b2d0(&DAT_1805c7b50);
  FUN_180209ce0(&DAT_180458250);
                    /* WARNING: Could not recover jumptable at 0x000180122693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_unlock(&DAT_1803e8990);
  return;
}


)B1801225a0",
    "613478cfbaad86e7c69bfc3c9988615400c2a574fbbe5b211fbe61659ee9e240",
    R"F1801225a0C(FUN_180209ce0
FUN_18020aea0
FUN_18020b2d0
FUN_18020b400
FUN_18020da70
FUN_18020e450)F1801225a0C",
    R"F1801225a0D(DAT_1803e8970
DAT_1803e8990
DAT_1803e89dc
DAT_1803e9bf0
DAT_1803e9bf8
DAT_1803edd48
DAT_1803edd50
DAT_180458210
DAT_180458250
DAT_1805c3990
DAT_1805c7b10
DAT_1805c7b50)F1801225a0D",
    R"F1801225a0T()F1801225a0T",
    R"F1801225a0F(23: if (DAT_1803edd48 != DAT_1803edd50) {
24: do {
31: if (iVar3 != 0) {
35: return;
37: if (DAT_1803e89dc == 0x7fffffff) {
41: if (DAT_1803e9bf0 != DAT_1803e9bf8) {
49: return;)F1801225a0F",
    R"F1801225a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8970.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8990.
TODO: recover the declaration, type and value for global/data reference DAT_1803e89dc.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9bf0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9bf8.
TODO: recover the declaration, type and value for global/data reference DAT_1803edd48.
TODO: recover the declaration, type and value for global/data reference DAT_1803edd50.
TODO: recover the declaration, type and value for global/data reference DAT_180458210.
TODO: recover the declaration, type and value for global/data reference DAT_180458250.
TODO: recover the declaration, type and value for global/data reference DAT_1805c3990.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b10.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b50.
TODO: resolve the indirect call in body 33: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 34: (*pcVar1)();.)F1801225a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801225a0() noexcept {
    return kFunction_0x1801225a0;
}

// 0x1801226a0 FUN_1801226a0
// source: re/dump/decompile/0x1801226a0_FUN_1801226a0.c
// size: 905 bytes; thunk: false
// body sha256: 4a36a998a6fb8c9ccc33b5ca1888626eb8d3f956de61f964873afd75fd9da27d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801226a0{
    "0x1801226a0",
    "FUN_1801226a0",
    R"F1801226a0S(undefined FUN_1801226a0())F1801226a0S",
    R"B1801226a0(// 0x1801226a0  FUN_1801226a0
// size=905 thunk=false
// signature: undefined FUN_1801226a0()
// status: ok


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801226a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  BOOL BVar3;
  longlong *plVar4;
  char *_Str;
  longlong lVar5;
  size_t sVar6;
  int *piVar7;
  byte *******pppppppbVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  uint uVar13;
  byte *******local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  ulonglong local_98;
  byte *******local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  
  uVar10 = 0;
  if ((DAT_1803fa360 != (longlong *)0x0) && (DAT_1803fa608 != 0)) {
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      __dyn_tls_on_demand_init((ulonglong)_tls_index,DAT_1803fa360,param_3,param_4,0);
    }
    fVar12 = (float)*(double *)(*(longlong *)(lVar5 + 0xec0) + 0x10);
    if (DAT_180380bb0 <= fVar12 - _DAT_1803fed4c) {
      _DAT_1803fed4c = fVar12;
      iVar2 = (**(code **)(*DAT_1803fa360 + 0x30))(DAT_1803fa360);
      iVar11 = *(int *)(DAT_1803fa608 + 0x1c);
      while (iVar11 = iVar11 + 1, iVar11 <= iVar2) {
        plVar4 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar11);
        if ((((plVar4 != (longlong *)0x0) && (BVar3 = IsBadReadPtr(plVar4,8), BVar3 == 0)) &&
            (BVar3 = IsBadReadPtr((void *)*plVar4,8), BVar3 == 0)) &&
           ((((_Str = (char *)FUN_18001e410(plVar4), _Str != (char *)0x0 && (*_Str != '\0')) &&
             ((char *)0xffff < _Str)) ||
            ((lVar5 = (**(code **)(*plVar4 + 0x78))(plVar4), lVar5 != 0 &&
             (_Str = *(char **)(lVar5 + 0x10), (char *)0xffff < _Str)))))) {
          local_b0 = (byte *******)0x0;
          uStack_a8 = 0;
          local_a0 = 0;
          local_98 = 0;
          sVar6 = strlen(_Str);
          FUN_18001d080(&local_b0,_Str,sVar6);
          uVar10 = uVar10 | 1;
          if (local_a0 < 7) {
LAB_180122891:
            bVar1 = false;
          }
          else {
            piVar7 = (int *)FUN_18020e670(&local_b0,local_58,0,6,uVar10);
            uVar10 = 3;
            plVar4 = (longlong *)(piVar7 + 4);
            if (0xf < *(ulonglong *)(piVar7 + 6)) {
              piVar7 = *(int **)piVar7;
            }
            if (*plVar4 != 6) goto LAB_180122891;
            iVar9 = *piVar7 + -0x73616c63;
            if (iVar9 == 0) {
              iVar9 = *(ushort *)(piVar7 + 1) - 0x2073;
            }
            if (iVar9 != 0) goto LAB_180122891;
            bVar1 = true;
          }
          uVar13 = uVar10;
          if ((uVar10 & 2) != 0) {
            uVar10 = uVar10 & 0xfffffffd;
            uVar13 = uVar10;
            FUN_18020e450(local_58);
          }
          if (bVar1) {
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0;
            if (local_a0 < 6) {
                    /* WARNING: Subroutine does not return */
              FUN_18022ec00();
            }
            lVar5 = -1;
            if (local_a0 - 6 != -1) {
              lVar5 = local_a0 - 6;
            }
            pppppppbVar8 = (byte *******)&local_b0;
            if (0xf < local_98) {
              pppppppbVar8 = local_b0;
            }
            FUN_18001d080(&local_88,(byte *)((longlong)pppppppbVar8 + 6),lVar5);
            FUN_18020e8a0(&local_b0,&local_88);
            uVar13 = uVar10;
            FUN_18020e450(&local_88);
          }
          local_90 = (byte *******)&local_b0;
          if (0xf < local_98) {
            local_90 = local_b0;
          }
          pppppppbVar8 = (byte *******)&local_b0;
          if (0xf < local_98) {
            pppppppbVar8 = local_b0;
          }
          while (local_90 != (byte *******)((longlong)pppppppbVar8 + local_a0)) {
            if ((0x20 < *(byte *)local_90) && (*(byte *)local_90 != 0x7f)) {
              pppppppbVar8 = (byte *******)&local_b0;
              if (0xf < local_98) {
                pppppppbVar8 = local_b0;
              }
              if (local_a0 == 0xb) {
                lVar5 = (longlong)*pppppppbVar8 + -0x746e456573614243;
                if ((lVar5 == 0) &&
                   (lVar5 = (ulonglong)*(ushort *)(pppppppbVar8 + 1) - 0x7469, lVar5 == 0)) {
                  lVar5 = (ulonglong)*(byte *)((longlong)pppppppbVar8 + 10) - 0x79;
                }
                if (lVar5 == 0) break;
              }
              FUN_180219e20(&DAT_1805c7b10,local_68,&local_b0,local_b0,uVar13);
              break;
            }
            local_90 = (byte *******)((longlong)local_90 + 1);
          }
          uVar10 = uVar10 & 0xfffffffe;
          FUN_18020e450(&local_b0);
        }
      }
    }
  }
  return;
}


)B1801226a0",
    "4a36a998a6fb8c9ccc33b5ca1888626eb8d3f956de61f964873afd75fd9da27d",
    R"F1801226a0C(FUN_18001d080
FUN_18001e410
FUN_18020e450
FUN_18020e670
FUN_18020e8a0
FUN_180219e20
FUN_18022ec00)F1801226a0C",
    R"F1801226a0D(LAB_180122891
DAT_180380bb0
DAT_1803fa360
DAT_1803fa608
DAT_1805c7b10)F1801226a0D",
    R"F1801226a0T()F1801226a0T",
    R"F1801226a0F(40: if ((DAT_1803fa360 != (longlong *)0x0) && (DAT_1803fa608 != 0)) {
42: if (*(char *)(lVar5 + 0x10) == '\0') {
46: if (DAT_180380bb0 <= fVar12 - _DAT_1803fed4c) {
50: while (iVar11 = iVar11 + 1, iVar11 <= iVar2) {
52: if ((((plVar4 != (longlong *)0x0) && (BVar3 = IsBadReadPtr(plVar4,8), BVar3 == 0)) &&
65: if (local_a0 < 7) {
66: LAB_180122891:
69: else {
73: if (0xf < *(ulonglong *)(piVar7 + 6)) {
76: if (*plVar4 != 6) goto LAB_180122891;
78: if (iVar9 == 0) {
81: if (iVar9 != 0) goto LAB_180122891;
85: if ((uVar10 & 2) != 0) {
90: if (bVar1) {
95: if (local_a0 < 6) {
100: if (local_a0 - 6 != -1) {
104: if (0xf < local_98) {
113: if (0xf < local_98) {
117: if (0xf < local_98) {
120: while (local_90 != (byte *******)((longlong)pppppppbVar8 + local_a0)) {
121: if ((0x20 < *(byte *)local_90) && (*(byte *)local_90 != 0x7f)) {
123: if (0xf < local_98) {
126: if (local_a0 == 0xb) {
128: if ((lVar5 == 0) &&
132: if (lVar5 == 0) break;
135: break;
145: return;)F1801226a0F",
    R"F1801226a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180122891.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b10.
TODO: resolve the indirect call in body 48: iVar2 = (**(code **)(*DAT_1803fa360 + 0x30))(DAT_1803fa360);.
TODO: resolve the indirect call in body 51: plVar4 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar11);.
TODO: resolve the indirect call in body 56: ((lVar5 = (**(code **)(*plVar4 + 0x78))(plVar4), lVar5 != 0 &&.)F1801226a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801226a0() noexcept {
    return kFunction_0x1801226a0;
}

// 0x180122a50 FUN_180122a50
// source: re/dump/decompile/0x180122a50_FUN_180122a50.c
// size: 406 bytes; thunk: false
// body sha256: b10e0fc1a63b12da0f94f6ddfc1b9c73896ea525781d4958c9db386972b09fee
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180122a50{
    "0x180122a50",
    "FUN_180122a50",
    R"F180122a50S(undefined FUN_180122a50())F180122a50S",
    R"B180122a50(// 0x180122a50  FUN_180122a50
// size=406 thunk=false
// signature: undefined FUN_180122a50()
// status: ok


void FUN_180122a50(void)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  
  lVar5 = DAT_1803edd50;
  lVar6 = DAT_1803edd48;
  if (DAT_1803edd48 != DAT_1803edd50) {
    do {
      FUN_18020e450(lVar6);
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != lVar5);
    DAT_1803edd50 = DAT_1803edd48;
  }
  uVar2 = DAT_1805c7b20;
  if ((ulonglong)(DAT_1803edd58 - DAT_1803edd48 >> 5) < DAT_1805c7b20) {
    if (0x7ffffffffffffff < DAT_1805c7b20) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    lVar5 = DAT_1803edd50 - DAT_1803edd48;
    uVar3 = FUN_18020dbc0();
    puVar8 = &DAT_1803edd48;
    FUN_180229ca0(DAT_1803edd48,DAT_1803edd50,uVar3,&DAT_1803edd48,&DAT_1803edd48,uVar3,uVar2);
    FUN_18022e9d0(&DAT_1803edd48,uVar3,lVar5 >> 5,uVar2,puVar8,0);
  }
  puVar1 = DAT_1805c7b18;
  puVar8 = (undefined8 *)*DAT_1805c7b18;
  do {
    if (puVar8 == puVar1) {
      FUN_180220450(DAT_1803edd48,DAT_1803edd50,DAT_1803edd50 - DAT_1803edd48 >> 5,0);
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      return;
    }
    pbVar4 = (byte *)(puVar8 + 2);
    if (0xf < (ulonglong)puVar8[5]) {
      pbVar4 = *(byte **)pbVar4;
    }
    pbVar7 = pbVar4 + puVar8[4];
    for (; pbVar4 != pbVar7; pbVar4 = pbVar4 + 1) {
      if ((0x20 < *pbVar4) && (*pbVar4 != 0x7f)) {
        FUN_18020d6f0(&DAT_1803edd48);
        break;
      }
    }
    puVar8 = (undefined8 *)*puVar8;
  } while( true );
}


)B180122a50",
    "b10e0fc1a63b12da0f94f6ddfc1b9c73896ea525781d4958c9db386972b09fee",
    R"F180122a50C(FUN_18020cc40
FUN_18020d6f0
FUN_18020dbc0
FUN_18020e450
FUN_180220450
FUN_180229ca0
FUN_18022e9d0)F180122a50C",
    R"F180122a50D(DAT_1803edd48
DAT_1803edd50
DAT_1803edd58
DAT_1805c7b18
DAT_1805c7b20)F180122a50D",
    R"F180122a50T()F180122a50T",
    R"F180122a50F(21: if (DAT_1803edd48 != DAT_1803edd50) {
22: do {
29: if ((ulonglong)(DAT_1803edd58 - DAT_1803edd48 >> 5) < DAT_1805c7b20) {
30: if (0x7ffffffffffffff < DAT_1805c7b20) {
42: do {
43: if (puVar8 == puVar1) {
45: if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
49: return;
52: if (0xf < (ulonglong)puVar8[5]) {
56: for (; pbVar4 != pbVar7; pbVar4 = pbVar4 + 1) {
57: if ((0x20 < *pbVar4) && (*pbVar4 != 0x7f)) {
59: break;)F180122a50F",
    R"F180122a50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803edd48.
TODO: recover the declaration, type and value for global/data reference DAT_1803edd50.
TODO: recover the declaration, type and value for global/data reference DAT_1803edd58.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b18.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b20.)F180122a50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180122a50() noexcept {
    return kFunction_0x180122a50;
}

// 0x180122bf0 FUN_180122bf0
// source: re/dump/decompile/0x180122bf0_FUN_180122bf0.c
// size: 1462 bytes; thunk: false
// body sha256: 3cb2a7cc705df0dfbb904da39dd292d846d1ed819d3e516472422919e5d88385
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180122bf0{
    "0x180122bf0",
    "FUN_180122bf0",
    R"F180122bf0S(undefined FUN_180122bf0())F180122bf0S",
    R"B180122bf0(// 0x180122bf0  FUN_180122bf0
// size=1462 thunk=false
// signature: undefined FUN_180122bf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180122bf0(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  BOOL BVar5;
  int iVar6;
  longlong *plVar7;
  int *piVar8;
  char *_Str;
  size_t sVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  byte ****ppppbVar14;
  longlong lVar15;
  bool bVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar17;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  int local_174;
  int local_170;
  ulonglong local_168;
  ulonglong local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  longlong *local_148;
  ulonglong local_140;
  ulonglong local_138;
  byte ***local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  int local_118;
  undefined1 local_110 [32];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  int local_80 [2];
  undefined8 *local_78;
  byte ***local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  bVar4 = false;
  local_178 = 0;
  if ((DAT_1803fa360 == (longlong *)0x0) || (DAT_1803fa608 == 0)) {
    FUN_18020aea0(&DAT_180458210);
    FUN_18020da70(&DAT_1805c7b10);
    lVar3 = DAT_1803edd50;
    lVar15 = DAT_1803edd48;
    if (DAT_1803edd48 != DAT_1803edd50) {
      do {
        FUN_18020e450(lVar15);
        lVar15 = lVar15 + 0x20;
      } while (lVar15 != lVar3);
      DAT_1803edd50 = DAT_1803edd48;
    }
  }
  else {
    local_170 = (**(code **)(*DAT_1803fa360 + 0x30))();
    local_80[0] = *(int *)(DAT_1803fa608 + 0x1c) + 1;
    while (local_80[0] <= local_170) {
      plVar7 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,local_80[0]);
      local_148 = plVar7;
      if (plVar7 == (longlong *)0x0) {
        FUN_18020af80(extraout_XMM0_Da,local_80);
LAB_180122ca7:
        local_80[0] = local_80[0] + 1;
      }
      else {
        BVar5 = IsBadReadPtr(plVar7,8);
        if ((BVar5 != 0) || (BVar5 = IsBadReadPtr((void *)*plVar7,8), BVar5 != 0))
        goto LAB_180122ca7;
        local_174 = 0xffffffff;
        piVar8 = (int *)(**(code **)(*plVar7 + 0x10))(plVar7);
        lVar3 = DAT_180458228;
        puVar13 = DAT_180458218;
        iVar1 = *piVar8;
        local_78 = (undefined8 *)0x0;
        local_168 = 0xcbf29ce484222325;
        for (local_140 = 0; local_140 < 4; local_140 = local_140 + 1) {
          local_168 = (local_168 ^ *(byte *)((longlong)local_80 + local_140)) * 0x100000001b3;
        }
        puVar10 = *(undefined8 **)(DAT_180458228 + 8 + (local_168 & DAT_180458240) * 0x10);
        if (puVar10 == DAT_180458218) {
          local_158 = DAT_180458218;
LAB_180122dcc:
          local_150 = (undefined8 *)0x0;
          puVar10 = DAT_180458218;
        }
        else {
          for (; local_80[0] != *(int *)(puVar10 + 2); puVar10 = (undefined8 *)puVar10[1]) {
            local_158 = puVar10;
            if (puVar10 == *(undefined8 **)(DAT_180458228 + (local_168 & DAT_180458240) * 0x10))
            goto LAB_180122dcc;
          }
          local_158 = (undefined8 *)*puVar10;
          local_150 = puVar10;
        }
        local_78 = DAT_180458218;
        local_174 = iVar1;
        if ((puVar10 != DAT_180458218) && (*(int *)(puVar10 + 3) == iVar1)) {
          FUN_180219e20(&DAT_1805c7b10,local_f0,puVar10 + 4);
          goto LAB_180122ca7;
        }
        if (puVar10 != DAT_180458218) {
          local_160 = 0xcbf29ce484222325;
          for (local_138 = 0; local_138 < 4; local_138 = local_138 + 1) {
            local_160 = (local_160 ^ *(byte *)(local_138 + 0x10 + (longlong)puVar10)) *
                        0x100000001b3;
          }
          uVar12 = local_160 & DAT_180458240;
          puVar2 = *(undefined8 **)(DAT_180458228 + uVar12 * 0x10);
          if (*(undefined8 **)(DAT_180458228 + 8 + uVar12 * 0x10) == puVar10) {
            if (puVar2 == puVar10) {
              *(undefined8 **)(DAT_180458228 + uVar12 * 0x10) = DAT_180458218;
              *(undefined8 **)(lVar3 + 8 + uVar12 * 0x10) = puVar13;
            }
            else {
              *(undefined8 *)(DAT_180458228 + 8 + uVar12 * 0x10) = puVar10[1];
            }
          }
          else if (puVar2 == puVar10) {
            *(undefined8 *)(DAT_180458228 + uVar12 * 0x10) = *puVar10;
          }
          puVar13 = (undefined8 *)*puVar10;
          DAT_180458220 = DAT_180458220 + -1;
          *(undefined8 **)puVar10[1] = puVar13;
          puVar13[1] = puVar10[1];
          local_128 = puVar10 + 2;
          local_120 = puVar10 + 3;
          FUN_18020e450(puVar10 + 4);
          local_50 = 0x40;
          free(puVar10);
          local_78 = puVar13;
        }
        _Str = (char *)FUN_18001e410(plVar7);
        if (((_Str != (char *)0x0) && (*_Str != '\0')) && ((char *)0x10000 < _Str)) {
          local_70 = (byte ***)0x0;
          uStack_68 = 0;
          local_60 = 0;
          local_58 = 0;
          sVar9 = strlen(_Str);
          FUN_18001d080(&local_70,_Str,sVar9);
          if (local_60 < 7) {
LAB_180122fac:
            bVar16 = false;
          }
          else {
            puVar10 = (undefined8 *)FUN_18020e670(&local_70,local_c0,0,6);
            bVar4 = true;
            local_178 = 1;
            puVar13 = puVar10;
            if (0xf < (ulonglong)puVar10[3]) {
              puVar13 = (undefined8 *)*puVar10;
            }
            if (puVar10[2] == 6) {
              iVar6 = memcmp(puVar13,"class ",6);
              bVar16 = iVar6 == 0;
            }
            else {
              bVar16 = false;
            }
            if (!bVar16) goto LAB_180122fac;
            bVar16 = true;
          }
          if (bVar4) {
            bVar4 = false;
            local_178 = 0;
            FUN_18020e450(local_c0);
          }
          if (bVar16) {
            uVar11 = FUN_18020e670(&local_70,local_a0,6,0xffffffffffffffff);
            FUN_18020e8a0(&local_70,uVar11);
            FUN_18020e450(local_a0);
          }
          local_130 = (byte ***)&local_70;
          if (0xf < local_58) {
            local_130 = local_70;
          }
          ppppbVar14 = (byte ****)((longlong)local_130 + local_60);
          for (; (byte ****)local_130 != ppppbVar14; local_130 = (byte ***)((longlong)local_130 + 1)
              ) {
            if ((0x20 < *(byte *)local_130) && (*(byte *)local_130 != 0x7f)) {
              ppppbVar14 = &local_70;
              if (0xf < local_58) {
                ppppbVar14 = (byte ****)local_70;
              }
              if (local_60 == 0xb) {
                iVar6 = memcmp(ppppbVar14,"CBaseEntity",0xb);
                bVar16 = iVar6 == 0;
              }
              else {
                bVar16 = false;
              }
              if (!bVar16) {
                local_118 = iVar1;
                uVar17 = FUN_18016d4c0(local_110,&local_70);
                plVar7 = (longlong *)FUN_180216b00(uVar17,local_e0,local_80);
                lVar3 = *plVar7;
                *(int *)(lVar3 + 0x18) = local_118;
                FUN_18020e8a0(lVar3 + 0x20,local_110);
                FUN_18020e450(local_110);
                FUN_180219e20(&DAT_1805c7b10,local_d0,&local_70);
              }
              break;
            }
          }
          FUN_18020e450(&local_70);
        }
        local_80[0] = local_80[0] + 1;
      }
    }
    FUN_180122a50();
  }
  return;
}


)B180122bf0",
    "3cb2a7cc705df0dfbb904da39dd292d846d1ed819d3e516472422919e5d88385",
    R"F180122bf0C(FUN_18001d080
FUN_18001e410
FUN_180122a50
FUN_18016d4c0
FUN_18020aea0
FUN_18020af80
FUN_18020da70
FUN_18020e450
FUN_18020e670
FUN_18020e8a0
FUN_180216b00
FUN_180219e20)F180122bf0C",
    R"F180122bf0D(LAB_180122ca7
LAB_180122dcc
LAB_180122fac
DAT_1803da4c0
DAT_1803edd48
DAT_1803edd50
DAT_1803fa360
DAT_1803fa608
DAT_180458210
DAT_180458218
DAT_180458220
DAT_180458228
DAT_180458240
DAT_1805c7b10)F180122bf0D",
    R"F180122bf0T("class "
"CBaseEntity")F180122bf0T",
    R"F180122bf0F(64: if ((DAT_1803fa360 == (longlong *)0x0) || (DAT_1803fa608 == 0)) {
69: if (DAT_1803edd48 != DAT_1803edd50) {
70: do {
77: else {
80: while (local_80[0] <= local_170) {
83: if (plVar7 == (longlong *)0x0) {
85: LAB_180122ca7:
88: else {
90: if ((BVar5 != 0) || (BVar5 = IsBadReadPtr((void *)*plVar7,8), BVar5 != 0))
91: goto LAB_180122ca7;
99: for (local_140 = 0; local_140 < 4; local_140 = local_140 + 1) {
103: if (puVar10 == DAT_180458218) {
105: LAB_180122dcc:
109: else {
110: for (; local_80[0] != *(int *)(puVar10 + 2); puVar10 = (undefined8 *)puVar10[1]) {
112: if (puVar10 == *(undefined8 **)(DAT_180458228 + (local_168 & DAT_180458240) * 0x10))
113: goto LAB_180122dcc;
120: if ((puVar10 != DAT_180458218) && (*(int *)(puVar10 + 3) == iVar1)) {
122: goto LAB_180122ca7;
124: if (puVar10 != DAT_180458218) {
126: for (local_138 = 0; local_138 < 4; local_138 = local_138 + 1) {
132: if (*(undefined8 **)(DAT_180458228 + 8 + uVar12 * 0x10) == puVar10) {
133: if (puVar2 == puVar10) {
137: else {
141: else if (puVar2 == puVar10) {
156: if (((_Str != (char *)0x0) && (*_Str != '\0')) && ((char *)0x10000 < _Str)) {
163: if (local_60 < 7) {
164: LAB_180122fac:
167: else {
172: if (0xf < (ulonglong)puVar10[3]) {
175: if (puVar10[2] == 6) {
179: else {
182: if (!bVar16) goto LAB_180122fac;
185: if (bVar4) {
190: if (bVar16) {
196: if (0xf < local_58) {
200: for (; (byte ****)local_130 != ppppbVar14; local_130 = (byte ***)((longlong)local_130 + 1)
202: if ((0x20 < *(byte *)local_130) && (*(byte *)local_130 != 0x7f)) {
204: if (0xf < local_58) {
207: if (local_60 == 0xb) {
211: else {
214: if (!bVar16) {
224: break;
234: return;)F180122bf0F",
    R"F180122bf0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180122ca7.
TODO: recover the declaration, type and value for global/data reference LAB_180122dcc.
TODO: recover the declaration, type and value for global/data reference LAB_180122fac.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803edd48.
TODO: recover the declaration, type and value for global/data reference DAT_1803edd50.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_180458210.
TODO: recover the declaration, type and value for global/data reference DAT_180458218.
TODO: recover the declaration, type and value for global/data reference DAT_180458220.
TODO: recover the declaration, type and value for global/data reference DAT_180458228.
TODO: recover the declaration, type and value for global/data reference DAT_180458240.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b10.
TODO: resolve the indirect call in body 78: local_170 = (**(code **)(*DAT_1803fa360 + 0x30))();.
TODO: resolve the indirect call in body 81: plVar7 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,local_80[0]);.
TODO: resolve the indirect call in body 93: piVar8 = (int *)(**(code **)(*plVar7 + 0x10))(plVar7);.)F180122bf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180122bf0() noexcept {
    return kFunction_0x180122bf0;
}

// 0x180123200 FUN_180123200
// source: re/dump/decompile/0x180123200_FUN_180123200.c
// size: 9908 bytes; thunk: false
// body sha256: a484ac12cbde170c37f40216f99b3a1daff19b3e64cb9811daaf21059e025701
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180123200{
    "0x180123200",
    "FUN_180123200",
    R"F180123200S(undefined FUN_180123200())F180123200S",
    R"B180123200(// 0x180123200  FUN_180123200
// size=9908 thunk=false
// signature: undefined FUN_180123200()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180123200(undefined8 param_1)

{
  longlong lVar1;
  size_t sVar2;
  undefined8 uVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  byte ****ppppbVar8;
  undefined8 ****ppppuVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 auStack_738 [32];
  longlong local_718;
  char *local_710;
  undefined8 local_708;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_6f0;
  undefined8 local_6e8;
  undefined8 ***local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  ulonglong uStack_6c8;
  undefined8 ***local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  ulonglong uStack_6a8;
  undefined8 ***local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  ulonglong uStack_688;
  undefined8 ***local_680;
  undefined8 uStack_678;
  undefined8 local_670;
  ulonglong uStack_668;
  undefined8 ***local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  ulonglong uStack_648;
  undefined8 ***local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  ulonglong uStack_628;
  undefined8 ***local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  ulonglong uStack_608;
  undefined8 ***local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  ulonglong uStack_5e8;
  undefined8 ***local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  ulonglong uStack_5c8;
  undefined8 ***local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  ulonglong uStack_5a8;
  undefined8 ***local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  ulonglong uStack_588;
  undefined8 ***local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  ulonglong uStack_568;
  undefined8 ***local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  ulonglong uStack_548;
  undefined8 ***local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  ulonglong uStack_528;
  undefined8 ***local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  ulonglong uStack_508;
  undefined8 ***local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  ulonglong uStack_4e8;
  undefined8 ***local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  ulonglong uStack_4c8;
  undefined8 ***local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  ulonglong uStack_4a8;
  undefined8 ***local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  ulonglong uStack_488;
  undefined8 ***local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  ulonglong uStack_468;
  undefined8 ***local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  ulonglong uStack_448;
  undefined8 ***local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  ulonglong uStack_428;
  undefined8 ***local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  ulonglong uStack_408;
  undefined8 ***local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  ulonglong uStack_3e8;
  byte ***local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  ulonglong uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  byte ***local_3a0 [3];
  ulonglong local_388;
  byte ***local_380 [3];
  ulonglong local_368;
  byte ***local_360 [3];
  ulonglong local_348;
  byte ***local_340 [3];
  ulonglong local_328;
  byte ***local_320 [3];
  ulonglong local_308;
  byte ***local_300 [3];
  ulonglong local_2e8;
  byte ***local_2e0 [3];
  ulonglong local_2c8;
  byte ***local_2c0 [3];
  ulonglong local_2a8;
  byte ***local_2a0 [3];
  ulonglong local_288;
  byte ***local_280 [3];
  ulonglong local_268;
  byte ***local_260 [3];
  ulonglong local_248;
  byte ***local_240 [3];
  ulonglong local_228;
  byte ***local_220 [3];
  ulonglong local_208;
  byte ***local_200 [3];
  ulonglong local_1e8;
  byte ***local_1e0 [3];
  ulonglong local_1c8;
  byte ***local_1c0 [3];
  ulonglong local_1a8;
  byte ***local_1a0 [3];
  ulonglong local_188;
  byte ***local_180 [3];
  ulonglong local_168;
  byte ***local_160 [3];
  ulonglong local_148;
  byte ***local_140 [3];
  ulonglong local_128;
  byte ***local_120 [3];
  ulonglong local_108;
  byte ***local_100 [3];
  ulonglong local_e8;
  byte ***local_e0 [3];
  ulonglong local_c8;
  undefined1 local_c0 [32];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined8 uStack_88;
  char local_80 [24];
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_738;
  local_6f4 = 0;
  local_6f8 = 0;
  local_6f0 = 0;
  local_6e8 = param_1;
  FUN_1801fc280(param_1,"\n# Entity list\n");
  local_3e0 = (byte ***)0x0;
  uStack_3d8 = 0;
  local_3d0 = 0;
  uStack_3c8 = 0;
  FUN_18001d080(&local_3e0,"entitylist.count",0x10);
  uVar10 = 0x14650fb0739d0383;
  if (uStack_3c8 < 0x10) {
    ppppbVar8 = &local_3e0;
  }
  else {
    ppppbVar8 = (byte ****)local_3e0;
    if ((byte ****)local_3e0 == (byte ****)0x0) goto LAB_1801232d4;
  }
  do {
    if (*(byte *)ppppbVar8 == 0) break;
    uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
    ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1);
  } while (ppppbVar8 != (byte ****)0x0);
LAB_1801232d4:
  FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
  local_6a0 = (undefined8 ****)0x0;
  uStack_698 = 0;
  local_690 = 0;
  uStack_688 = 0;
  sVar2 = strlen(local_80);
  FUN_18001d080(&local_6a0,local_80,sVar2);
  local_6f0 = 0x80;
  ppppuVar9 = &local_6a0;
  if (0xf < uStack_688) {
    ppppuVar9 = (undefined8 ****)local_6a0;
  }
  uVar3 = FUN_180210c60(param_1,ppppuVar9,local_690);
  pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
  pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (pbVar4,(DAT_1803eb380 - DAT_1803eb378 >> 4) * 0x6db6db6db6db6db7);
  FUN_1801fc280(pbVar5,&DAT_18033e92c);
  local_6f0 = 0;
  FUN_18020e450(&local_6a0);
  FUN_18020e450(&local_3e0);
  iVar11 = 0;
  if (0 < (int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249) {
    do {
      puVar12 = (undefined8 *)((longlong)iVar11 * 0x70 + DAT_1803eb378);
      uVar3 = FUN_180013ba0(local_c0,iVar11);
      puVar6 = (undefined8 *)FUN_18022a630(uVar3);
      local_3c0 = *puVar6;
      uStack_3b8 = puVar6[1];
      local_3b0 = puVar6[2];
      uStack_3a8 = puVar6[3];
      puVar6[3] = 0xf;
      *(undefined1 *)puVar6 = 0;
      puVar6[2] = 0;
      local_6f4 = 8;
      puVar7 = (undefined4 *)FUN_18021aef0(&local_3c0,&DAT_18033ea54,1);
      local_a0 = *puVar7;
      uStack_9c = puVar7[1];
      uStack_98 = puVar7[2];
      uStack_94 = puVar7[3];
      lVar1 = *(longlong *)(puVar7 + 4);
      uStack_88 = *(undefined8 *)(puVar7 + 6);
      *(undefined1 *)puVar7 = 0;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0xf;
      local_6f4 = 0x10;
      local_90 = lVar1;
      FUN_18020e450(&local_3c0);
      FUN_18020e450(local_c0);
      if (0x7fffffffffffffffU - lVar1 < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 5;
      local_710 = "class";
      local_718 = lVar1;
      FUN_18020e930(local_3a0);
      local_6f4 = 0x30;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_3a0[0];
      if (local_388 < 0x10) {
        ppppbVar8 = local_3a0;
        goto LAB_180123555;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_180123555:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_680 = (undefined8 ****)0x0;
      uStack_678 = 0;
      local_670 = 0;
      uStack_668 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_680,local_80,sVar2);
      local_6f4 = 0x70;
      ppppuVar9 = &local_680;
      if (0xf < uStack_668) {
        ppppuVar9 = (undefined8 ****)local_680;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_670);
      uVar3 = FUN_1801fc280(uVar3,&DAT_18034118c);
      puVar6 = puVar12;
      if (0xf < (ulonglong)puVar12[3]) {
        puVar6 = (undefined8 *)*puVar12;
      }
      uVar3 = FUN_180210c60(uVar3,puVar6,puVar12[2]);
      FUN_1801fc280(uVar3,&DAT_18033e92c);
      local_6f4 = 0x30;
      FUN_18020e450(&local_680);
      local_6f4 = 0x10;
      FUN_18020e450(local_3a0);
      if (0x7fffffffffffffffU - local_90 < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 7;
      local_710 = "enabled";
      local_718 = local_90;
      FUN_18020e930(local_380);
      local_6f4 = 0x110;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_380[0];
      if (local_368 < 0x10) {
        ppppbVar8 = local_380;
        goto LAB_1801236d1;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1801236d1:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_660 = (undefined8 ****)0x0;
      uStack_658 = 0;
      local_650 = 0;
      uStack_648 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_660,local_80,sVar2);
      local_6f4 = 0x310;
      ppppuVar9 = &local_660;
      if (0xf < uStack_648) {
        ppppuVar9 = (undefined8 ****)local_660;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_650);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,(uint)(*(char *)(puVar12 + 4) != '\0'));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f4 = 0x110;
      FUN_18020e450(&local_660);
      local_6f4 = 0x10;
      FUN_18020e450(local_380);
      if (0x7fffffffffffffffU - local_90 < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 3;
      local_710 = "box";
      local_718 = local_90;
      FUN_18020e930(local_360);
      local_6f4 = 0x810;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_360[0];
      if (local_348 < 0x10) {
        ppppbVar8 = local_360;
        goto LAB_180123847;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_180123847:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_640 = (undefined8 ****)0x0;
      uStack_638 = 0;
      local_630 = 0;
      uStack_628 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_640,local_80,sVar2);
      local_6f4 = 0x1810;
      ppppuVar9 = &local_640;
      if (0xf < uStack_628) {
        ppppuVar9 = (undefined8 ****)local_640;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_630);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,(uint)(*(char *)((longlong)puVar12 + 0x21) != '\0'));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f4 = 0x810;
      FUN_18020e450(&local_640);
      local_6f4 = 0x10;
      FUN_18020e450(local_360);
      if (0x7fffffffffffffffU - local_90 < 0xd) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 0xd;
      local_710 = "stable_bounds";
      local_718 = local_90;
      FUN_18020e930(local_340);
      local_6f4 = 0x4010;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_340[0];
      if (local_328 < 0x10) {
        ppppbVar8 = local_340;
        goto LAB_1801239c0;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1801239c0:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_620 = (undefined8 ****)0x0;
      uStack_618 = 0;
      local_610 = 0;
      uStack_608 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_620,local_80,sVar2);
      local_6f4 = 0xc010;
      ppppuVar9 = &local_620;
      if (0xf < uStack_608) {
        ppppuVar9 = (undefined8 ****)local_620;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_610);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,(uint)(*(char *)((longlong)puVar12 + 0x22) != '\0'));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f4 = 0x4010;
      FUN_18020e450(&local_620);
      local_6f4 = 0x10;
      FUN_18020e450(local_340);
      if (0x7fffffffffffffffU - local_90 < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 4;
      local_710 = "name";
      local_718 = local_90;
      FUN_18020e930(local_320);
      local_6f4 = 0x20010;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_320[0];
      if (local_308 < 0x10) {
        ppppbVar8 = local_320;
        goto LAB_180123b36;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_180123b36:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_600 = (undefined8 ****)0x0;
      uStack_5f8 = 0;
      local_5f0 = 0;
      uStack_5e8 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_600,local_80,sVar2);
      local_6f4 = 0x60010;
      ppppuVar9 = &local_600;
      if (0xf < uStack_5e8) {
        ppppuVar9 = (undefined8 ****)local_600;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_5f0);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,(uint)(*(char *)((longlong)puVar12 + 0x23) != '\0'));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f4 = 0x20010;
      FUN_18020e450(&local_600);
      local_6f4 = 0x10;
      FUN_18020e450(local_320);
      if (0x7fffffffffffffffU - local_90 < 6) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 6;
      local_710 = "health";
      local_718 = local_90;
      FUN_18020e930(local_300);
      local_6f4 = 0x100010;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_300[0];
      if (local_2e8 < 0x10) {
        ppppbVar8 = local_300;
        goto LAB_180123cb0;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_180123cb0:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_5e0 = (undefined8 ****)0x0;
      uStack_5d8 = 0;
      local_5d0 = 0;
      uStack_5c8 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_5e0,local_80,sVar2);
      local_6f4 = 0x300010;
      ppppuVar9 = &local_5e0;
      if (0xf < uStack_5c8) {
        ppppuVar9 = (undefined8 ****)local_5e0;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_5d0);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,(uint)(*(char *)((longlong)puVar12 + 0x24) != '\0'));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f4 = 0x100010;
      FUN_18020e450(&local_5e0);
      local_6f4 = 0x10;
      FUN_18020e450(local_300);
      if (0x7fffffffffffffffU - local_90 < 8) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 8;
      local_710 = "distance";
      local_718 = local_90;
      FUN_18020e930(local_2e0);
      local_6f4 = 0x800010;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_2e0[0];
      if (local_2c8 < 0x10) {
        ppppbVar8 = local_2e0;
        goto LAB_180123e26;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_180123e26:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_5c0 = (undefined8 ****)0x0;
      uStack_5b8 = 0;
      local_5b0 = 0;
      uStack_5a8 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_5c0,local_80,sVar2);
      local_6f4 = 0x1800010;
      ppppuVar9 = &local_5c0;
      if (0xf < uStack_5a8) {
        ppppuVar9 = (undefined8 ****)local_5c0;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_5b0);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,(uint)(*(char *)((longlong)puVar12 + 0x25) != '\0'));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f4 = 0x800010;
      FUN_18020e450(&local_5c0);
      local_6f4 = 0x10;
      FUN_18020e450(local_2e0);
      if (0x7fffffffffffffffU - local_90 < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 7;
      local_710 = "dormant";
      local_718 = local_90;
      FUN_18020e930(local_2c0);
      local_6f4 = 0x4000010;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_2c0[0];
      if (local_2a8 < 0x10) {
        ppppbVar8 = local_2c0;
        goto LAB_180123fa5;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_180123fa5:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_5a0 = (undefined8 ****)0x0;
      uStack_598 = 0;
      local_590 = 0;
      uStack_588 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_5a0,local_80,sVar2);
      local_6f4 = 0xc000010;
      ppppuVar9 = &local_5a0;
      if (0xf < uStack_588) {
        ppppuVar9 = (undefined8 ****)local_5a0;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_590);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,(uint)(*(char *)((longlong)puVar12 + 0x26) != '\0'));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f4 = 0x4000010;
      FUN_18020e450(&local_5a0);
      local_6f4 = 0x10;
      FUN_18020e450(local_2c0);
      if (0x7fffffffffffffffU - local_90 < 9) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 9;
      local_710 = "box_style";
      local_718 = local_90;
      FUN_18020e930(local_2a0);
      local_6f4 = 0x20000010;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_2a0[0];
      if (local_288 < 0x10) {
        ppppbVar8 = local_2a0;
        goto LAB_180124133;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_180124133:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_580 = (undefined8 ****)0x0;
      uStack_578 = 0;
      local_570 = 0;
      uStack_568 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_580,local_80,sVar2);
      local_6f4 = 0x60000010;
      ppppuVar9 = &local_580;
      if (0xf < uStack_568) {
        ppppuVar9 = (undefined8 ****)local_580;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_570);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(int *)(puVar12 + 5));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f4 = 0x20000010;
      FUN_18020e450(&local_580);
      local_6f4 = 0x10;
      FUN_18020e450(local_2a0);
      if (0x7fffffffffffffffU - local_90 < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 7;
      local_710 = "color.r";
      local_718 = local_90;
      FUN_18020e930(local_280);
      local_6f8 = 1;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_280[0];
      if (local_268 < 0x10) {
        ppppbVar8 = local_280;
        goto LAB_1801242c0;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1801242c0:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_560 = (undefined8 ****)0x0;
      uStack_558 = 0;
      local_550 = 0;
      uStack_548 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_560,local_80,sVar2);
      local_6f8 = 3;
      ppppuVar9 = &local_560;
      if (0xf < uStack_548) {
        ppppuVar9 = (undefined8 ****)local_560;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_550);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)((longlong)puVar12 + 0x2c));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f8 = 1;
      FUN_18020e450(&local_560);
      local_6f8 = 0;
      FUN_18020e450(local_280);
      if (0x7fffffffffffffffU - local_90 < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 7;
      local_710 = "color.g";
      local_718 = local_90;
      FUN_18020e930(local_260);
      local_6f8 = 8;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_260[0];
      if (local_248 < 0x10) {
        ppppbVar8 = local_260;
        goto LAB_180124445;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_180124445:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_540 = (undefined8 ****)0x0;
      uStack_538 = 0;
      local_530 = 0;
      uStack_528 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_540,local_80,sVar2);
      local_6f8 = 0x18;
      ppppuVar9 = &local_540;
      if (0xf < uStack_528) {
        ppppuVar9 = (undefined8 ****)local_540;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_530);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)(puVar12 + 6));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f8 = 8;
      FUN_18020e450(&local_540);
      local_6f8 = 0;
      FUN_18020e450(local_260);
      if (0x7fffffffffffffffU - local_90 < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 7;
      local_710 = "color.b";
      local_718 = local_90;
      FUN_18020e930(local_240);
      local_6f8 = 0x40;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_240[0];
      if (local_228 < 0x10) {
        ppppbVar8 = local_240;
        goto LAB_1801245d0;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1801245d0:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_520 = (undefined8 ****)0x0;
      uStack_518 = 0;
      local_510 = 0;
      uStack_508 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_520,local_80,sVar2);
      local_6f8 = 0xc0;
      ppppuVar9 = &local_520;
      if (0xf < uStack_508) {
        ppppuVar9 = (undefined8 ****)local_520;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_510);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)((longlong)puVar12 + 0x34));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f8 = 0x40;
      FUN_18020e450(&local_520);
      local_6f8 = 0;
      FUN_18020e450(local_240);
      if (0x7fffffffffffffffU - local_90 < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 7;
      local_710 = "color.a";
      local_718 = local_90;
      FUN_18020e930(local_220);
      local_6f8 = 0x200;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_220[0];
      if (local_208 < 0x10) {
        ppppbVar8 = local_220;
        goto LAB_180124760;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_180124760:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_500 = (undefined8 ****)0x0;
      uStack_4f8 = 0;
      local_4f0 = 0;
      uStack_4e8 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_500,local_80,sVar2);
      local_6f8 = 0x600;
      ppppuVar9 = &local_500;
      if (0xf < uStack_4e8) {
        ppppuVar9 = (undefined8 ****)local_500;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_4f0);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)(puVar12 + 7));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f8 = 0x200;
      FUN_18020e450(&local_500);
      local_6f8 = 0;
      FUN_18020e450(local_220);
      if (0x7fffffffffffffffU - local_90 < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 5;
      local_710 = "chams";
      local_718 = local_90;
      FUN_18020e930(local_200);
      local_6f8 = 0x1000;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_200[0];
      if (local_1e8 < 0x10) {
        ppppbVar8 = local_200;
        goto LAB_1801248f0;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1801248f0:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_4e0 = (undefined8 ****)0x0;
      uStack_4d8 = 0;
      local_4d0 = 0;
      uStack_4c8 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_4e0,local_80,sVar2);
      local_6f8 = 0x3000;
      ppppuVar9 = &local_4e0;
      if (0xf < uStack_4c8) {
        ppppuVar9 = (undefined8 ****)local_4e0;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_4d0);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,(uint)(*(char *)((longlong)puVar12 + 0x3c) != '\0'));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f8 = 0x1000;
      FUN_18020e450(&local_4e0);
      local_6f8 = 0;
      FUN_18020e450(local_200);
      if (0x7fffffffffffffffU - local_90 < 10) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 10;
      local_710 = "chams_mode";
      local_718 = local_90;
      FUN_18020e930(local_1e0);
      local_6f8 = 0x8000;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_1e0[0];
      if (local_1c8 < 0x10) {
        ppppbVar8 = local_1e0;
        goto LAB_180124a80;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_180124a80:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_4c0 = (undefined8 ****)0x0;
      uStack_4b8 = 0;
      local_4b0 = 0;
      uStack_4a8 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_4c0,local_80,sVar2);
      local_6f8 = 0x18000;
      ppppuVar9 = &local_4c0;
      if (0xf < uStack_4a8) {
        ppppuVar9 = (undefined8 ****)local_4c0;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_4b0);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(int *)(puVar12 + 8));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f8 = 0x8000;
      FUN_18020e450(&local_4c0);
      local_6f8 = 0;
      FUN_18020e450(local_1e0);
      if (0x7fffffffffffffffU - local_90 < 0xb) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 0xb;
      local_710 = "chams_thr.r";
      local_718 = local_90;
      FUN_18020e930(local_1c0);
      local_6f8 = 0x40000;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_1c0[0];
      if (local_1a8 < 0x10) {
        ppppbVar8 = local_1c0;
        goto LAB_180124c10;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_180124c10:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_4a0 = (undefined8 ****)0x0;
      uStack_498 = 0;
      local_490 = 0;
      uStack_488 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_4a0,local_80,sVar2);
      local_6f8 = 0xc0000;
      ppppuVar9 = &local_4a0;
      if (0xf < uStack_488) {
        ppppuVar9 = (undefined8 ****)local_4a0;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_490);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)((longlong)puVar12 + 0x44));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f8 = 0x40000;
      FUN_18020e450(&local_4a0);
      local_6f8 = 0;
      FUN_18020e450(local_1c0);
      if (0x7fffffffffffffffU - local_90 < 0xb) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 0xb;
      local_710 = "chams_thr.g";
      local_718 = local_90;
      FUN_18020e930(local_1a0);
      local_6f8 = 0x200000;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_1a0[0];
      if (local_188 < 0x10) {
        ppppbVar8 = local_1a0;
        goto LAB_180124da0;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_180124da0:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_480 = (undefined8 ****)0x0;
      uStack_478 = 0;
      local_470 = 0;
      uStack_468 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_480,local_80,sVar2);
      local_6f8 = 0x600000;
      ppppuVar9 = &local_480;
      if (0xf < uStack_468) {
        ppppuVar9 = (undefined8 ****)local_480;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_470);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)(puVar12 + 9));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f8 = 0x200000;
      FUN_18020e450(&local_480);
      local_6f8 = 0;
      FUN_18020e450(local_1a0);
      if (0x7fffffffffffffffU - local_90 < 0xb) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 0xb;
      local_710 = "chams_thr.b";
      local_718 = local_90;
      FUN_18020e930(local_180);
      local_6f8 = 0x1000000;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_180[0];
      if (local_168 < 0x10) {
        ppppbVar8 = local_180;
        goto LAB_180124f30;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_180124f30:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_460 = (undefined8 ****)0x0;
      uStack_458 = 0;
      local_450 = 0;
      uStack_448 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_460,local_80,sVar2);
      local_6f8 = 0x3000000;
      ppppuVar9 = &local_460;
      if (0xf < uStack_448) {
        ppppuVar9 = (undefined8 ****)local_460;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_450);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)((longlong)puVar12 + 0x4c));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f8 = 0x1000000;
      FUN_18020e450(&local_460);
      local_6f8 = 0;
      FUN_18020e450(local_180);
      if (0x7fffffffffffffffU - local_90 < 0xb) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 0xb;
      local_710 = "chams_vis.r";
      local_718 = local_90;
      FUN_18020e930(local_160);
      local_6f8 = 0x8000000;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_160[0];
      if (local_148 < 0x10) {
        ppppbVar8 = local_160;
        goto LAB_1801250c0;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1801250c0:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_440 = (undefined8 ****)0x0;
      uStack_438 = 0;
      local_430 = 0;
      uStack_428 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_440,local_80,sVar2);
      local_6f8 = 0x18000000;
      ppppuVar9 = &local_440;
      if (0xf < uStack_428) {
        ppppuVar9 = (undefined8 ****)local_440;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_430);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)((longlong)puVar12 + 0x54));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f8 = 0x8000000;
      FUN_18020e450(&local_440);
      local_6f8 = 0;
      FUN_18020e450(local_160);
      if (0x7fffffffffffffffU - local_90 < 0xb) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 0xb;
      local_710 = "chams_vis.g";
      local_718 = local_90;
      FUN_18020e930(local_140);
      local_6f8 = 0x40000000;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_140[0];
      if (local_128 < 0x10) {
        ppppbVar8 = local_140;
        goto LAB_180125250;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_180125250:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_420 = (undefined8 ****)0x0;
      uStack_418 = 0;
      local_410 = 0;
      uStack_408 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_420,local_80,sVar2);
      local_6f0 = 0;
      local_6f8 = 0xc0000000;
      ppppuVar9 = &local_420;
      if (0xf < uStack_408) {
        ppppuVar9 = (undefined8 ****)local_420;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_410);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)(puVar12 + 0xb));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f8 = 0x40000000;
      FUN_18020e450(&local_420);
      local_6f8 = 0;
      FUN_18020e450(local_140);
      if (0x7fffffffffffffffU - local_90 < 0xb) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 0xb;
      local_710 = "chams_vis.b";
      local_718 = local_90;
      FUN_18020e930(local_120);
      local_6f0 = 2;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_120[0];
      if (local_108 < 0x10) {
        ppppbVar8 = local_120;
        goto LAB_1801253e0;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1801253e0:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_400 = (undefined8 ****)0x0;
      uStack_3f8 = 0;
      local_3f0 = 0;
      uStack_3e8 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_400,local_80,sVar2);
      local_6f0 = 6;
      ppppuVar9 = &local_400;
      if (0xf < uStack_3e8) {
        ppppuVar9 = (undefined8 ****)local_400;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_3f0);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(float *)((longlong)puVar12 + 0x5c));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f0 = 2;
      FUN_18020e450(&local_400);
      local_6f0 = 0;
      FUN_18020e450(local_120);
      if (0x7fffffffffffffffU - local_90 < 0xb) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 0xb;
      local_710 = "chams_sharp";
      local_718 = local_90;
      FUN_18020e930(local_100);
      local_6f0 = 0x10;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_100[0];
      if (local_e8 < 0x10) {
        ppppbVar8 = local_100;
        goto LAB_180125571;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_180125571:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_6e0 = (undefined8 ****)0x0;
      uStack_6d8 = 0;
      local_6d0 = 0;
      uStack_6c8 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_6e0,local_80,sVar2);
      local_6f0 = 0x30;
      ppppuVar9 = &local_6e0;
      if (0xf < uStack_6c8) {
        ppppuVar9 = (undefined8 ****)local_6e0;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_6d0);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,(uint)(*(char *)((longlong)puVar12 + 100) != '\0'));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f0 = 0x10;
      FUN_18020e450(&local_6e0);
      local_6f0 = 0;
      FUN_18020e450(local_100);
      if (0x7fffffffffffffffU - local_90 < 0xb) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_708 = 0xb;
      local_710 = "chams_thick";
      local_718 = local_90;
      FUN_18020e930(local_e0);
      local_6f4 = 0x11;
      uVar10 = 0x14650fb0739d0383;
      ppppbVar8 = (byte ****)local_e0[0];
      if (local_c8 < 0x10) {
        ppppbVar8 = local_e0;
        goto LAB_1801256f3;
      }
      for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
LAB_1801256f3:
        param_1 = local_6e8;
        if (*(byte *)ppppbVar8 == 0) break;
        uVar10 = (uVar10 ^ *(byte *)ppppbVar8) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar10);
      local_6c0 = (undefined8 ****)0x0;
      uStack_6b8 = 0;
      local_6b0 = 0;
      uStack_6a8 = 0;
      sVar2 = strlen(local_80);
      FUN_18001d080(&local_6c0,local_80,sVar2);
      local_6f4 = 0x13;
      ppppuVar9 = &local_6c0;
      if (0xf < uStack_6a8) {
        ppppuVar9 = (undefined8 ****)local_6c0;
      }
      uVar3 = FUN_180210c60(param_1,ppppuVar9,local_6b0);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar3,&DAT_18034118c);
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(int *)(puVar12 + 0xd));
      FUN_1801fc280(pbVar5,&DAT_18033e92c);
      local_6f4 = 0x11;
      FUN_18020e450(&local_6c0);
      local_6f4 = 0x10;
      FUN_18020e450(local_e0);
      local_6f4 = 0;
      FUN_18020e450(&local_a0);
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249);
  }
  return;
}


)B180123200",
    "a484ac12cbde170c37f40216f99b3a1daff19b3e64cb9811daaf21059e025701",
    R"F180123200C(FUN_180012ac0
FUN_1800130a0
FUN_180013ba0
FUN_18001d080
FUN_1801fc280
FUN_18020e450
FUN_18020e930
FUN_180210c60
FUN_18021aef0
FUN_18022a630)F180123200C",
    R"F180123200D(LAB_1801232d4
LAB_180123555
LAB_1801236d1
LAB_180123847
LAB_1801239c0
LAB_180123b36
LAB_180123cb0
LAB_180123e26
LAB_180123fa5
LAB_180124133
LAB_1801242c0
LAB_180124445
LAB_1801245d0
LAB_180124760
LAB_1801248f0
LAB_180124a80
LAB_180124c10
LAB_180124da0
LAB_180124f30
LAB_1801250c0
LAB_180125250
LAB_1801253e0
LAB_180125571
LAB_1801256f3
DAT_18033e92c
DAT_18033ea54
DAT_18034118c
DAT_1803da4c0
DAT_1803eb378
DAT_1803eb380)F180123200D",
    R"F180123200T("box"
"name"
"chams"
"class"
"health"
"%016llx"
"color.a"
"color.b"
"color.g"
"color.r"
"dormant"
"enabled"
"distance"
"box_style"
"chams_mode"
"chams_sharp"
"chams_thick"
"chams_thr.b"
"chams_thr.g"
"chams_thr.r"
"chams_vis.b"
"chams_vis.g"
"chams_vis.r"
"stable_bounds"
"entitylist.count"
"\\n# Entity list\\n")F180123200T",
    R"F180123200F(204: if (uStack_3c8 < 0x10) {
207: else {
209: if ((byte ****)local_3e0 == (byte ****)0x0) goto LAB_1801232d4;
211: do {
212: if (*(byte *)ppppbVar8 == 0) break;
216: LAB_1801232d4:
226: if (0xf < uStack_688) {
238: if (0 < (int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249) {
239: do {
265: if (0x7fffffffffffffffU - lVar1 < 5) {
276: if (local_388 < 0x10) {
278: goto LAB_180123555;
280: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
281: LAB_180123555:
283: if (*(byte *)ppppbVar8 == 0) break;
295: if (0xf < uStack_668) {
301: if (0xf < (ulonglong)puVar12[3]) {
310: if (0x7fffffffffffffffU - local_90 < 7) {
321: if (local_368 < 0x10) {
323: goto LAB_1801236d1;
325: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
326: LAB_1801236d1:
328: if (*(byte *)ppppbVar8 == 0) break;
340: if (0xf < uStack_648) {
352: if (0x7fffffffffffffffU - local_90 < 3) {
363: if (local_348 < 0x10) {
365: goto LAB_180123847;
367: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
368: LAB_180123847:
370: if (*(byte *)ppppbVar8 == 0) break;
382: if (0xf < uStack_628) {
394: if (0x7fffffffffffffffU - local_90 < 0xd) {
405: if (local_328 < 0x10) {
407: goto LAB_1801239c0;
409: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
410: LAB_1801239c0:
412: if (*(byte *)ppppbVar8 == 0) break;
424: if (0xf < uStack_608) {
436: if (0x7fffffffffffffffU - local_90 < 4) {
447: if (local_308 < 0x10) {
449: goto LAB_180123b36;
451: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
452: LAB_180123b36:
454: if (*(byte *)ppppbVar8 == 0) break;
466: if (0xf < uStack_5e8) {
478: if (0x7fffffffffffffffU - local_90 < 6) {
489: if (local_2e8 < 0x10) {
491: goto LAB_180123cb0;
493: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
494: LAB_180123cb0:
496: if (*(byte *)ppppbVar8 == 0) break;
508: if (0xf < uStack_5c8) {
520: if (0x7fffffffffffffffU - local_90 < 8) {
531: if (local_2c8 < 0x10) {
533: goto LAB_180123e26;
535: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
536: LAB_180123e26:
538: if (*(byte *)ppppbVar8 == 0) break;
550: if (0xf < uStack_5a8) {
562: if (0x7fffffffffffffffU - local_90 < 7) {
573: if (local_2a8 < 0x10) {
575: goto LAB_180123fa5;
577: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
578: LAB_180123fa5:
580: if (*(byte *)ppppbVar8 == 0) break;
592: if (0xf < uStack_588) {
604: if (0x7fffffffffffffffU - local_90 < 9) {
615: if (local_288 < 0x10) {
617: goto LAB_180124133;
619: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
620: LAB_180124133:
622: if (*(byte *)ppppbVar8 == 0) break;
634: if (0xf < uStack_568) {
646: if (0x7fffffffffffffffU - local_90 < 7) {
657: if (local_268 < 0x10) {
659: goto LAB_1801242c0;
661: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
662: LAB_1801242c0:
664: if (*(byte *)ppppbVar8 == 0) break;
676: if (0xf < uStack_548) {
688: if (0x7fffffffffffffffU - local_90 < 7) {
699: if (local_248 < 0x10) {
701: goto LAB_180124445;
703: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
704: LAB_180124445:
706: if (*(byte *)ppppbVar8 == 0) break;
718: if (0xf < uStack_528) {
730: if (0x7fffffffffffffffU - local_90 < 7) {
741: if (local_228 < 0x10) {
743: goto LAB_1801245d0;
745: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
746: LAB_1801245d0:
748: if (*(byte *)ppppbVar8 == 0) break;
760: if (0xf < uStack_508) {
772: if (0x7fffffffffffffffU - local_90 < 7) {
783: if (local_208 < 0x10) {
785: goto LAB_180124760;
787: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
788: LAB_180124760:
790: if (*(byte *)ppppbVar8 == 0) break;
802: if (0xf < uStack_4e8) {
814: if (0x7fffffffffffffffU - local_90 < 5) {
825: if (local_1e8 < 0x10) {
827: goto LAB_1801248f0;
829: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
830: LAB_1801248f0:
832: if (*(byte *)ppppbVar8 == 0) break;
844: if (0xf < uStack_4c8) {
856: if (0x7fffffffffffffffU - local_90 < 10) {
867: if (local_1c8 < 0x10) {
869: goto LAB_180124a80;
871: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
872: LAB_180124a80:
874: if (*(byte *)ppppbVar8 == 0) break;
886: if (0xf < uStack_4a8) {
898: if (0x7fffffffffffffffU - local_90 < 0xb) {
909: if (local_1a8 < 0x10) {
911: goto LAB_180124c10;
913: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
914: LAB_180124c10:
916: if (*(byte *)ppppbVar8 == 0) break;
928: if (0xf < uStack_488) {
940: if (0x7fffffffffffffffU - local_90 < 0xb) {
951: if (local_188 < 0x10) {
953: goto LAB_180124da0;
955: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
956: LAB_180124da0:
958: if (*(byte *)ppppbVar8 == 0) break;
970: if (0xf < uStack_468) {
982: if (0x7fffffffffffffffU - local_90 < 0xb) {
993: if (local_168 < 0x10) {
995: goto LAB_180124f30;
997: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
998: LAB_180124f30:
1000: if (*(byte *)ppppbVar8 == 0) break;
1012: if (0xf < uStack_448) {
1024: if (0x7fffffffffffffffU - local_90 < 0xb) {
1035: if (local_148 < 0x10) {
1037: goto LAB_1801250c0;
1039: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
1040: LAB_1801250c0:
1042: if (*(byte *)ppppbVar8 == 0) break;
1054: if (0xf < uStack_428) {
1066: if (0x7fffffffffffffffU - local_90 < 0xb) {
1077: if (local_128 < 0x10) {
1079: goto LAB_180125250;
1081: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
1082: LAB_180125250:
1084: if (*(byte *)ppppbVar8 == 0) break;
1097: if (0xf < uStack_408) {
1109: if (0x7fffffffffffffffU - local_90 < 0xb) {
1120: if (local_108 < 0x10) {
1122: goto LAB_1801253e0;
1124: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
1125: LAB_1801253e0:
1127: if (*(byte *)ppppbVar8 == 0) break;
1139: if (0xf < uStack_3e8) {
1151: if (0x7fffffffffffffffU - local_90 < 0xb) {
1162: if (local_e8 < 0x10) {
1164: goto LAB_180125571;
1166: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
1167: LAB_180125571:
1169: if (*(byte *)ppppbVar8 == 0) break;
1181: if (0xf < uStack_6c8) {
1193: if (0x7fffffffffffffffU - local_90 < 0xb) {
1204: if (local_c8 < 0x10) {
1206: goto LAB_1801256f3;
1208: for (; ppppbVar8 != (byte ****)0x0; ppppbVar8 = (byte ****)((longlong)ppppbVar8 + 1)) {
1209: LAB_1801256f3:
1211: if (*(byte *)ppppbVar8 == 0) break;
1223: if (0xf < uStack_6a8) {
1240: return;)F180123200F",
    R"F180123200U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1801232d4.
TODO: recover the declaration, type and value for global/data reference LAB_180123555.
TODO: recover the declaration, type and value for global/data reference LAB_1801236d1.
TODO: recover the declaration, type and value for global/data reference LAB_180123847.
TODO: recover the declaration, type and value for global/data reference LAB_1801239c0.
TODO: recover the declaration, type and value for global/data reference LAB_180123b36.
TODO: recover the declaration, type and value for global/data reference LAB_180123cb0.
TODO: recover the declaration, type and value for global/data reference LAB_180123e26.
TODO: recover the declaration, type and value for global/data reference LAB_180123fa5.
TODO: recover the declaration, type and value for global/data reference LAB_180124133.
TODO: recover the declaration, type and value for global/data reference LAB_1801242c0.
TODO: recover the declaration, type and value for global/data reference LAB_180124445.
TODO: recover the declaration, type and value for global/data reference LAB_1801245d0.
TODO: recover the declaration, type and value for global/data reference LAB_180124760.
TODO: recover the declaration, type and value for global/data reference LAB_1801248f0.
TODO: recover the declaration, type and value for global/data reference LAB_180124a80.
TODO: recover the declaration, type and value for global/data reference LAB_180124c10.
TODO: recover the declaration, type and value for global/data reference LAB_180124da0.
TODO: recover the declaration, type and value for global/data reference LAB_180124f30.
TODO: recover the declaration, type and value for global/data reference LAB_1801250c0.
TODO: recover the declaration, type and value for global/data reference LAB_180125250.
TODO: recover the declaration, type and value for global/data reference LAB_1801253e0.
TODO: recover the declaration, type and value for global/data reference LAB_180125571.
TODO: recover the declaration, type and value for global/data reference LAB_1801256f3.
TODO: recover the declaration, type and value for global/data reference DAT_18033e92c.
TODO: recover the declaration, type and value for global/data reference DAT_18033ea54.
TODO: recover the declaration, type and value for global/data reference DAT_18034118c.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb378.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb380.)F180123200U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180123200() noexcept {
    return kFunction_0x180123200;
}

// 0x1801258d0 FUN_1801258d0
// source: re/dump/decompile/0x1801258d0_FUN_1801258d0.c
// size: 8424 bytes; thunk: false
// body sha256: 622d03934041e844f037df55d6891319d87c754b75ff6b3eb9ad7b6504837ac3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801258d0{
    "0x1801258d0",
    "FUN_1801258d0",
    R"F1801258d0S(undefined FUN_1801258d0())F1801258d0S",
    R"B1801258d0(// 0x1801258d0  FUN_1801258d0
// size=8424 thunk=false
// signature: undefined FUN_1801258d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801258d0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  int *piVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong *plVar22;
  int *piVar23;
  byte *******pppppppbVar24;
  undefined8 *******pppppppuVar25;
  int iVar26;
  undefined4 uVar27;
  undefined1 auStack_5b8 [32];
  longlong local_598;
  char *local_590;
  undefined8 local_588;
  undefined4 local_578;
  int local_574 [3];
  longlong *local_568;
  longlong *local_560;
  longlong *local_558;
  byte ******local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  ulonglong uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  byte ******local_510 [3];
  ulonglong local_4f8;
  byte ******local_4f0 [3];
  ulonglong local_4d8;
  byte ******local_4d0 [3];
  ulonglong local_4b8;
  byte ******local_4b0 [3];
  ulonglong local_498;
  byte ******local_490 [3];
  ulonglong local_478;
  byte ******local_470 [3];
  ulonglong local_458;
  byte ******local_450 [3];
  ulonglong local_438;
  byte ******local_430 [3];
  ulonglong local_418;
  byte ******local_410 [3];
  ulonglong local_3f8;
  byte ******local_3f0 [3];
  ulonglong local_3d8;
  byte ******local_3d0 [3];
  ulonglong local_3b8;
  byte ******local_3b0 [3];
  ulonglong local_398;
  byte ******local_390 [3];
  ulonglong local_378;
  byte ******local_370 [3];
  ulonglong local_358;
  byte ******local_350 [3];
  ulonglong local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  byte ******local_310 [3];
  ulonglong local_2f8;
  byte ******local_2f0 [3];
  ulonglong local_2d8;
  byte ******local_2d0 [3];
  ulonglong local_2b8;
  byte ******local_2b0 [3];
  ulonglong local_298;
  byte ******local_290 [3];
  ulonglong local_278;
  byte ******local_270 [3];
  ulonglong local_258;
  undefined1 local_250 [32];
  undefined1 local_230 [32];
  undefined1 local_210 [32];
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined1 local_188 [16];
  longlong local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined2 local_144;
  undefined1 local_142;
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c;
  int local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 local_104;
  int local_100;
  undefined8 ******local_f8 [2];
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  
  plVar18 = DAT_1803eb380;
  local_d8 = DAT_1803da4c0 ^ (ulonglong)auStack_5b8;
  local_578 = 0;
  plVar17 = DAT_1803eb378;
  local_568 = param_1;
  if (DAT_1803eb378 != DAT_1803eb380) {
    do {
      local_1f0 = plVar17;
      FUN_18020e450(plVar17);
      local_1f0 = plVar17 + 0xe;
      plVar17 = local_1f0;
    } while (local_1f0 != plVar18);
    DAT_1803eb380 = DAT_1803eb378;
  }
  DAT_1803e8978 = 0xffffffff;
  FUN_18020b400(&DAT_1805c3990);
  local_550 = (byte ******)0x0;
  uStack_548 = 0;
  local_540 = 0;
  uStack_538 = 0;
  local_560 = param_1;
  local_558 = param_1;
  FUN_18001d080(&local_550,"entitylist.count",0x10);
  uVar20 = 0x14650fb0739d0383;
  if (uStack_538 < 0x10) {
    pppppppbVar24 = &local_550;
  }
  else {
    pppppppbVar24 = (byte *******)local_550;
    if ((byte *******)local_550 == (byte *******)0x0) goto LAB_180125a14;
  }
  do {
    if (*(byte *)pppppppbVar24 == 0) break;
    uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
    pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1);
  } while (pppppppbVar24 != (byte *******)0x0);
LAB_180125a14:
  plVar18 = (longlong *)*param_1;
  plVar17 = (longlong *)plVar18[1];
  cVar1 = *(char *)((longlong)plVar17 + 0x19);
  plVar22 = plVar18;
  while (cVar1 == '\0') {
    plVar21 = plVar17;
    if ((ulonglong)plVar17[4] < uVar20) {
      plVar17 = plVar17 + 2;
      plVar21 = plVar22;
    }
    plVar17 = (longlong *)*plVar17;
    plVar22 = plVar21;
    cVar1 = *(char *)((longlong)plVar17 + 0x19);
  }
  if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
     (plVar22 != plVar18)) {
    local_1e8 = (longlong *)0x0;
    plVar18 = plVar22 + 5;
    plVar17 = plVar18;
    if (0xf < (ulonglong)plVar22[8]) {
      plVar17 = (longlong *)*plVar18;
    }
    iVar13 = strtol((char *)plVar17,(char **)&local_1e8,10);
    if (0xf < (ulonglong)plVar22[8]) {
      plVar18 = (longlong *)*plVar18;
    }
    if (local_1e8 == plVar18) {
      iVar13 = 0;
    }
  }
  else {
    iVar13 = 0;
  }
  iVar26 = 0;
  FUN_18020e450(&local_550);
  uVar11 = _UNK_1803815c8;
  uVar10 = ram0x0001803815c0;
  uVar9 = _UNK_1803814b8;
  uVar8 = _DAT_1803814b0;
  uVar7 = DAT_180380bb0;
  uVar6 = DAT_180380b4c;
  uVar5 = DAT_180380af0;
  uVar4 = DAT_180380ae4;
  uVar3 = DAT_180380a88;
  uVar2 = DAT_180380a3c;
  if (0 < iVar13) {
    do {
      uVar15 = FUN_180013ba0(local_210,iVar26);
      puVar16 = (undefined8 *)FUN_18022a630(uVar15);
      local_530 = *puVar16;
      uStack_528 = puVar16[1];
      local_520 = puVar16[2];
      uStack_518 = puVar16[3];
      *(undefined1 *)puVar16 = 0;
      puVar16[2] = 0;
      puVar16[3] = 0xf;
      local_578 = 4;
      FUN_1801fc680(local_188,&local_530,&DAT_18033ea54);
      local_578 = 0;
      FUN_18020e450(&local_530);
      FUN_18020e450(local_210);
      local_330 = 0;
      uStack_328 = 0;
      local_320 = 0;
      uStack_318 = 0;
      FUN_18001d080(&local_330,&DAT_18033e5ea,0);
      if (0x7fffffffffffffffU - local_178 < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_588 = 5;
      local_590 = "class";
      local_598 = local_178;
      FUN_18020e930(local_250);
      local_578 = 1;
      FUN_1800fee30(&local_560,local_f8,local_250,&local_330);
      local_578 = 0;
      FUN_18020e450(local_250);
      FUN_18020e450(&local_330);
      if (local_e8 == 0) {
        FUN_18020e450(local_f8);
      }
      else {
        uStack_160 = 0;
        local_158 = uVar8;
        uStack_150 = uVar9;
        local_168 = 0;
        local_148 = 0x1000101;
        local_144 = 0;
        local_142 = 1;
        local_140 = 0;
        local_13c = 0x3f19999a;
        local_138 = 0x3f59999a;
        local_134 = 0x3f800000;
        local_130 = 0x3f800000;
        local_12c = 0;
        local_128 = 0;
        local_124 = 0x3eb33333;
        local_120 = 0x3f59999a;
        local_11c = 0x3f800000;
        local_118 = uVar10;
        uStack_110 = uVar11;
        local_108 = 0x3f800000;
        local_104 = 0;
        local_100 = 2;
        pppppppuVar25 = local_f8;
        if (0xf < local_e0) {
          pppppppuVar25 = (undefined8 *******)local_f8[0];
        }
        FUN_180212700(&local_168,pppppppuVar25,local_e8);
        if (0x7fffffffffffffffU - local_178 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 7;
        local_590 = "enabled";
        local_598 = local_178;
        FUN_18020e930(local_4f0);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_4f0[0];
        if (local_4d8 < 0x10) {
          pppppppbVar24 = local_4f0;
          goto LAB_180125de0;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180125de0:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar18 = (longlong *)*param_1;
        plVar17 = (longlong *)plVar18[1];
        cVar1 = *(char *)((longlong)plVar17 + 0x19);
        plVar22 = plVar18;
        while (cVar1 == '\0') {
          plVar21 = plVar17;
          if ((ulonglong)plVar17[4] < uVar20) {
            plVar17 = plVar17 + 2;
            plVar21 = plVar22;
          }
          plVar17 = (longlong *)*plVar17;
          plVar22 = plVar21;
          cVar1 = *(char *)((longlong)plVar17 + 0x19);
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar18)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] == 1) && (*(char *)plVar17 == '1')) goto LAB_180125e6b;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if ((plVar22[7] == 4) && ((int)*plVar18 == 0x65757274)) goto LAB_180125e6b;
          uVar12 = 0;
        }
        else {
LAB_180125e6b:
          uVar12 = 1;
        }
        local_148 = CONCAT31(local_148._1_3_,uVar12);
        local_578 = 0;
        FUN_18020e450(local_4f0);
        if (0x7fffffffffffffffU - local_178 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 3;
        local_590 = "box";
        local_598 = local_178;
        FUN_18020e930(local_2f0);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_2f0[0];
        if (local_2d8 < 0x10) {
          pppppppbVar24 = local_2f0;
          goto LAB_180125f10;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180125f10:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar18 = (longlong *)*param_1;
        plVar17 = (longlong *)plVar18[1];
        cVar1 = *(char *)((longlong)plVar17 + 0x19);
        plVar22 = plVar18;
        while (cVar1 == '\0') {
          plVar21 = plVar17;
          if ((ulonglong)plVar17[4] < uVar20) {
            plVar17 = plVar17 + 2;
            plVar21 = plVar22;
          }
          plVar17 = (longlong *)*plVar17;
          plVar22 = plVar21;
          cVar1 = *(char *)((longlong)plVar17 + 0x19);
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar18)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] == 1) && (*(char *)plVar17 == '1')) goto LAB_180125f9b;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if ((plVar22[7] == 4) && ((int)*plVar18 == 0x65757274)) goto LAB_180125f9b;
          uVar12 = 0;
        }
        else {
LAB_180125f9b:
          uVar12 = 1;
        }
        local_148._0_2_ = CONCAT11(uVar12,(undefined1)local_148);
        local_578 = 0;
        FUN_18020e450(local_2f0);
        if (0x7fffffffffffffffU - local_178 < 0xd) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xd;
        local_590 = "stable_bounds";
        local_598 = local_178;
        FUN_18020e930(local_2d0);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_2d0[0];
        if (local_2b8 < 0x10) {
          pppppppbVar24 = local_2d0;
          goto LAB_180126040;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126040:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar18 = (longlong *)*param_1;
        plVar17 = (longlong *)plVar18[1];
        cVar1 = *(char *)((longlong)plVar17 + 0x19);
        plVar22 = plVar18;
        while (cVar1 == '\0') {
          plVar21 = plVar17;
          if ((ulonglong)plVar17[4] < uVar20) {
            plVar17 = plVar17 + 2;
            plVar21 = plVar22;
          }
          plVar17 = (longlong *)*plVar17;
          plVar22 = plVar21;
          cVar1 = *(char *)((longlong)plVar17 + 0x19);
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar18)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] != 1) || (*(char *)plVar17 != '1')) {
            if (0xf < (ulonglong)plVar22[8]) {
              plVar18 = (longlong *)*plVar18;
            }
            if ((plVar22[7] != 4) || ((int)*plVar18 != 0x65757274)) goto LAB_1801260cb;
          }
          uVar12 = 1;
        }
        else {
LAB_1801260cb:
          uVar12 = 0;
        }
        local_148._0_3_ = CONCAT12(uVar12,(undefined2)local_148);
        local_578 = 0;
        FUN_18020e450(local_2d0);
        if (0x7fffffffffffffffU - local_178 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 4;
        local_590 = "name";
        local_598 = local_178;
        FUN_18020e930(local_2b0);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_2b0[0];
        if (local_298 < 0x10) {
          pppppppbVar24 = local_2b0;
          goto LAB_180126170;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126170:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar18 = (longlong *)*param_1;
        plVar17 = (longlong *)plVar18[1];
        cVar1 = *(char *)((longlong)plVar17 + 0x19);
        plVar22 = plVar18;
        while (cVar1 == '\0') {
          plVar21 = plVar17;
          if ((ulonglong)plVar17[4] < uVar20) {
            plVar17 = plVar17 + 2;
            plVar21 = plVar22;
          }
          plVar17 = (longlong *)*plVar17;
          plVar22 = plVar21;
          cVar1 = *(char *)((longlong)plVar17 + 0x19);
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar18)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] == 1) && (*(char *)plVar17 == '1')) goto LAB_1801261fb;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if ((plVar22[7] == 4) && ((int)*plVar18 == 0x65757274)) goto LAB_1801261fb;
          uVar12 = 0;
        }
        else {
LAB_1801261fb:
          uVar12 = 1;
        }
        local_148 = CONCAT13(uVar12,(undefined3)local_148);
        local_578 = 0;
        FUN_18020e450(local_2b0);
        if (0x7fffffffffffffffU - local_178 < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 6;
        local_590 = "health";
        local_598 = local_178;
        FUN_18020e930(local_290);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_290[0];
        if (local_278 < 0x10) {
          pppppppbVar24 = local_290;
          goto LAB_1801262a1;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_1801262a1:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar18 = (longlong *)*param_1;
        plVar17 = (longlong *)plVar18[1];
        cVar1 = *(char *)((longlong)plVar17 + 0x19);
        plVar22 = plVar18;
        while (cVar1 == '\0') {
          plVar21 = plVar17;
          if ((ulonglong)plVar17[4] < uVar20) {
            plVar17 = plVar17 + 2;
            plVar21 = plVar22;
          }
          plVar17 = (longlong *)*plVar17;
          plVar22 = plVar21;
          cVar1 = *(char *)((longlong)plVar17 + 0x19);
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar18)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] != 1) || (*(char *)plVar17 != '1')) {
            if (0xf < (ulonglong)plVar22[8]) {
              plVar18 = (longlong *)*plVar18;
            }
            if ((plVar22[7] != 4) || ((int)*plVar18 != 0x65757274)) goto LAB_18012632c;
          }
          uVar12 = 1;
        }
        else {
LAB_18012632c:
          uVar12 = 0;
        }
        local_144 = CONCAT11(local_144._1_1_,uVar12);
        local_578 = 0;
        FUN_18020e450(local_290);
        if (0x7fffffffffffffffU - local_178 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 8;
        local_590 = "distance";
        local_598 = local_178;
        FUN_18020e930(local_270);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_270[0];
        if (local_258 < 0x10) {
          pppppppbVar24 = local_270;
          goto LAB_1801263d2;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_1801263d2:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] != 1) || (*(char *)plVar17 != '1')) {
            if (0xf < (ulonglong)plVar22[8]) {
              plVar18 = (longlong *)*plVar18;
            }
            if ((plVar22[7] != 4) || ((int)*plVar18 != 0x65757274)) goto LAB_180126462;
          }
          uVar12 = 1;
        }
        else {
LAB_180126462:
          uVar12 = 0;
        }
        local_144 = CONCAT11(uVar12,(undefined1)local_144);
        local_578 = 0;
        FUN_18020e450(local_270);
        if (0x7fffffffffffffffU - local_178 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 7;
        local_590 = "dormant";
        local_598 = local_178;
        FUN_18020e930(local_510);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_510[0];
        if (local_4f8 < 0x10) {
          pppppppbVar24 = local_510;
          goto LAB_180126500;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126500:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] == 1) && (*(char *)plVar17 == '1')) goto LAB_180126590;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if ((plVar22[7] == 4) && ((int)*plVar18 == 0x65757274)) goto LAB_180126590;
          local_142 = 0;
        }
        else {
LAB_180126590:
          local_142 = 1;
        }
        local_578 = 0;
        FUN_18020e450(local_510);
        local_574[2] = 3;
        local_574[0] = 0;
        if (0x7fffffffffffffffU - local_178 < 9) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 9;
        local_590 = "box_style";
        local_598 = local_178;
        FUN_18020e930(local_4d0);
        local_578 = 0x800;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_4d0[0];
        if (local_4b8 < 0x10) {
          pppppppbVar24 = local_4d0;
          goto LAB_180126632;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126632:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar18 = (longlong *)((longlong *)*param_1)[1];
        cVar1 = *(char *)((longlong)plVar18 + 0x19);
        plVar17 = (longlong *)*param_1;
        while (cVar1 == '\0') {
          plVar22 = plVar18;
          if ((ulonglong)plVar18[4] < uVar20) {
            plVar18 = plVar18 + 2;
            plVar22 = plVar17;
          }
          plVar18 = (longlong *)*plVar18;
          plVar17 = plVar22;
          cVar1 = *(char *)((longlong)plVar18 + 0x19);
        }
        if ((*(char *)((longlong)plVar17 + 0x19) != '\0') || (uVar20 < (ulonglong)plVar17[4])) {
          plVar17 = (longlong *)*param_1;
        }
        if (plVar17 == (longlong *)*param_1) {
          local_574[1] = 0;
        }
        else {
          local_190 = (longlong *)0x0;
          plVar18 = plVar17 + 5;
          plVar22 = plVar18;
          if (0xf < (ulonglong)plVar17[8]) {
            plVar22 = (longlong *)*plVar18;
          }
          local_574[1] = strtol((char *)plVar22,(char **)&local_190,10);
          if (0xf < (ulonglong)plVar17[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_190 == plVar18) {
            local_574[1] = 0;
          }
        }
        piVar23 = local_574;
        if (-1 < local_574[1]) {
          piVar23 = local_574 + 1;
        }
        piVar19 = local_574 + 2;
        if (local_574[1] < 4) {
          piVar19 = piVar23;
        }
        local_140 = *piVar19;
        local_578 = 0;
        FUN_18020e450(local_4d0);
        if (0x7fffffffffffffffU - local_178 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 7;
        local_590 = "color.r";
        local_598 = local_178;
        FUN_18020e930(local_4b0);
        local_578 = 0x1000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_4b0[0];
        if (local_498 < 0x10) {
          pppppppbVar24 = local_4b0;
          goto LAB_180126790;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126790:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1e0 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          local_13c = strtof(plVar17,&local_1e0);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1e0 == plVar18) goto LAB_18012681e;
        }
        else {
LAB_18012681e:
          local_13c = uVar4;
        }
        local_578 = 0;
        FUN_18020e450(local_4b0);
        if (0x7fffffffffffffffU - local_178 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 7;
        local_590 = "color.g";
        local_598 = local_178;
        FUN_18020e930(local_490);
        local_578 = 0x2000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_490[0];
        if (local_478 < 0x10) {
          pppppppbVar24 = local_490;
          goto LAB_1801268c3;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_1801268c3:
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1d8 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          local_138 = strtof(plVar17,&local_1d8);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1d8 == plVar18) goto LAB_180126951;
        }
        else {
LAB_180126951:
          local_138 = uVar6;
        }
        local_578 = 0;
        FUN_18020e450(local_490);
        if (0x7fffffffffffffffU - local_178 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 7;
        local_590 = "color.b";
        local_598 = local_178;
        FUN_18020e930(local_470);
        local_578 = 0x4000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_470[0];
        if (local_458 < 0x10) {
          pppppppbVar24 = local_470;
          goto LAB_1801269f5;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_1801269f5:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1d0 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          local_134 = strtof(plVar17,&local_1d0);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1d0 == plVar18) goto LAB_180126a8d;
        }
        else {
LAB_180126a8d:
          local_134 = uVar7;
        }
        local_578 = 0;
        FUN_18020e450(local_470);
        if (0x7fffffffffffffffU - local_178 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 7;
        local_590 = "color.a";
        local_598 = local_178;
        FUN_18020e930(local_450);
        local_578 = 0x8000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_450[0];
        if (local_438 < 0x10) {
          pppppppbVar24 = local_450;
          goto LAB_180126b34;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126b34:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1c8 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          local_130 = strtof(plVar17,&local_1c8);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1c8 == plVar18) goto LAB_180126bcd;
        }
        else {
LAB_180126bcd:
          local_130 = uVar7;
        }
        local_578 = 0;
        FUN_18020e450(local_450);
        if (0x7fffffffffffffffU - local_178 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 5;
        local_590 = "chams";
        local_598 = local_178;
        FUN_18020e930(local_430);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_430[0];
        if (local_418 < 0x10) {
          pppppppbVar24 = local_430;
          goto LAB_180126c80;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126c80:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] != 1) || (*(char *)plVar17 != '1')) {
            if (0xf < (ulonglong)plVar22[8]) {
              plVar18 = (longlong *)*plVar18;
            }
            if ((plVar22[7] != 4) || ((int)*plVar18 != 0x65757274)) goto LAB_180126d15;
          }
          local_12c = 1;
        }
        else {
LAB_180126d15:
          local_12c = 0;
        }
        local_578 = 0;
        FUN_18020e450(local_430);
        local_574[0] = 1;
        lVar14 = 0;
        local_574[2] = 0;
        if (0x7fffffffffffffffU - local_178 < 10) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 10;
        local_590 = "chams_mode";
        local_598 = local_178;
        FUN_18020e930(local_410);
        local_578 = 0x20000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_410[0];
        if (local_3f8 < 0x10) {
          pppppppbVar24 = local_410;
          goto LAB_180126dd0;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126dd0:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar18 = (longlong *)((longlong *)*param_1)[1];
        cVar1 = *(char *)((longlong)plVar18 + 0x19);
        plVar17 = (longlong *)*param_1;
        while (cVar1 == '\0') {
          plVar22 = plVar18;
          if ((ulonglong)plVar18[4] < uVar20) {
            plVar18 = plVar18 + 2;
            plVar22 = plVar17;
          }
          plVar18 = (longlong *)*plVar18;
          plVar17 = plVar22;
          cVar1 = *(char *)((longlong)plVar18 + 0x19);
        }
        if ((*(char *)((longlong)plVar17 + 0x19) != '\0') || (uVar20 < (ulonglong)plVar17[4])) {
          plVar17 = (longlong *)*param_1;
        }
        if (plVar17 != (longlong *)*param_1) {
          local_1c0 = (longlong *)0x0;
          plVar18 = plVar17 + 5;
          plVar22 = plVar18;
          if (0xf < (ulonglong)plVar17[8]) {
            plVar22 = (longlong *)*plVar18;
          }
          lVar14 = strtol((char *)plVar22,(char **)&local_1c0,10);
          if (0xf < (ulonglong)plVar17[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1c0 == plVar18) {
            lVar14 = 0;
          }
        }
        local_574[1] = lVar14;
        piVar23 = local_574 + 2;
        if (-1 < lVar14) {
          piVar23 = local_574 + 1;
        }
        piVar19 = local_574;
        if (lVar14 < 2) {
          piVar19 = piVar23;
        }
        local_128 = *piVar19;
        local_578 = 0;
        FUN_18020e450(local_410);
        if (0x7fffffffffffffffU - local_178 < 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xb;
        local_590 = "chams_thr.r";
        local_598 = local_178;
        FUN_18020e930(local_3f0);
        local_578 = 0x40000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_3f0[0];
        if (local_3d8 < 0x10) {
          pppppppbVar24 = local_3f0;
          goto LAB_180126f40;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180126f40:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1b8 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          local_124 = strtof(plVar17,&local_1b8);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1b8 == plVar18) goto LAB_180126fcf;
        }
        else {
LAB_180126fcf:
          local_124 = uVar3;
        }
        local_578 = 0;
        FUN_18020e450(local_3f0);
        if (0x7fffffffffffffffU - local_178 < 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xb;
        local_590 = "chams_thr.g";
        local_598 = local_178;
        FUN_18020e930(local_3d0);
        local_578 = 0x80000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_3d0[0];
        if (local_3b8 < 0x10) {
          pppppppbVar24 = local_3d0;
          goto LAB_180127083;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180127083:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1b0 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          local_120 = strtof(plVar17,&local_1b0);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1b0 == plVar18) goto LAB_18012711d;
        }
        else {
LAB_18012711d:
          local_120 = uVar6;
        }
        local_578 = 0;
        FUN_18020e450(local_3d0);
        if (0x7fffffffffffffffU - local_178 < 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xb;
        local_590 = "chams_thr.b";
        local_598 = local_178;
        FUN_18020e930(local_3b0);
        local_578 = 0x100000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_3b0[0];
        if (local_398 < 0x10) {
          pppppppbVar24 = local_3b0;
          goto LAB_1801271d0;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_1801271d0:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1a8 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          local_11c = strtof(plVar17,&local_1a8);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1a8 == plVar18) goto LAB_180127263;
        }
        else {
LAB_180127263:
          local_11c = uVar7;
        }
        local_578 = 0;
        FUN_18020e450(local_3b0);
        if (0x7fffffffffffffffU - local_178 < 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xb;
        local_590 = "chams_vis.r";
        local_598 = local_178;
        FUN_18020e930(local_390);
        local_578 = 0x200000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_390[0];
        if (local_378 < 0x10) {
          pppppppbVar24 = local_390;
          goto LAB_180127316;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180127316:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1a0 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          uVar27 = strtof(plVar17,&local_1a0);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1a0 == plVar18) goto LAB_1801273ad;
        }
        else {
LAB_1801273ad:
          uVar27 = uVar7;
        }
        local_118 = CONCAT44(uVar27,(undefined4)local_118);
        local_578 = 0;
        FUN_18020e450(local_390);
        if (0x7fffffffffffffffU - local_178 < 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xb;
        local_590 = "chams_vis.g";
        local_598 = local_178;
        FUN_18020e930(local_310);
        local_578 = 0x400000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_310[0];
        if (local_2f8 < 0x10) {
          pppppppbVar24 = local_310;
          goto LAB_180127460;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_180127460:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_198 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          uVar27 = strtof(plVar17,&local_198);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_198 == plVar18) goto LAB_1801274f3;
        }
        else {
LAB_1801274f3:
          uVar27 = uVar5;
        }
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar27);
        local_578 = 0;
        FUN_18020e450(local_310);
        if (0x7fffffffffffffffU - local_178 < 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xb;
        local_590 = "chams_vis.b";
        local_598 = local_178;
        FUN_18020e930(local_370);
        local_578 = 0x800000;
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_370[0];
        if (local_358 < 0x10) {
          pppppppbVar24 = local_370;
          goto LAB_1801275a7;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_1801275a7:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          local_1f0 = (longlong *)0x0;
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          uVar27 = strtof(plVar17,&local_1f0);
          if (0xf < (ulonglong)plVar22[8]) {
            plVar18 = (longlong *)*plVar18;
          }
          if (local_1f0 == plVar18) goto LAB_18012763d;
        }
        else {
LAB_18012763d:
          uVar27 = uVar2;
        }
        uStack_110 = CONCAT44(uVar27,(undefined4)uStack_110);
        local_578 = 0;
        FUN_18020e450(local_370);
        if (0x7fffffffffffffffU - local_178 < 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xb;
        local_590 = "chams_sharp";
        local_598 = local_178;
        FUN_18020e930(local_350);
        uVar20 = 0x14650fb0739d0383;
        pppppppbVar24 = (byte *******)local_350[0];
        if (local_338 < 0x10) {
          pppppppbVar24 = local_350;
          goto LAB_1801276f4;
        }
        for (; pppppppbVar24 != (byte *******)0x0;
            pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + 1)) {
LAB_1801276f4:
          param_1 = local_568;
          if (*(byte *)pppppppbVar24 == 0) break;
          uVar20 = (uVar20 ^ *(byte *)pppppppbVar24) * 0x100000001b3;
        }
        plVar17 = (longlong *)*param_1;
        plVar18 = (longlong *)plVar17[1];
        plVar22 = plVar17;
        if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
          do {
            plVar22 = plVar18;
            if ((ulonglong)plVar18[4] < uVar20) {
              plVar18 = plVar18 + 2;
              plVar22 = plVar17;
            }
            plVar18 = (longlong *)*plVar18;
            plVar17 = plVar22;
          } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          plVar17 = (longlong *)*param_1;
        }
        if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
           (plVar22 != plVar17)) {
          plVar18 = plVar22 + 5;
          plVar17 = plVar18;
          if (0xf < (ulonglong)plVar22[8]) {
            plVar17 = (longlong *)*plVar18;
          }
          if ((plVar22[7] != 1) || (*(char *)plVar17 != '1')) {
            if (0xf < (ulonglong)plVar22[8]) {
              plVar18 = (longlong *)*plVar18;
            }
            if ((plVar22[7] != 4) || ((int)*plVar18 != 0x65757274)) goto LAB_18012778f;
          }
          local_104 = 1;
        }
        else {
LAB_18012778f:
          local_104 = 0;
        }
        local_578 = 0;
        FUN_18020e450(local_350);
        local_574[0] = 10;
        local_574[2] = 1;
        if (0x7fffffffffffffffU - local_178 < 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_1800130a0();
        }
        local_588 = 0xb;
        local_590 = "chams_thick";
        local_598 = local_178;
        FUN_18020e930(local_230);
        local_578 = 0x2000000;
        local_574[1] = FUN_1801279d0(&local_558,local_230,2);
        piVar23 = local_574 + 2;
        if (0 < local_574[1]) {
          piVar23 = local_574 + 1;
        }
        piVar19 = local_574;
        if (local_574[1] < 0xb) {
          piVar19 = piVar23;
        }
        local_100 = *piVar19;
        local_578 = 0;
        uVar27 = FUN_18020e450(local_230);
        if (DAT_1803eb380 == DAT_1803eb388) {
          FUN_180225990(uVar27,DAT_1803eb380,&local_168);
        }
        else {
          FUN_180232650();
          DAT_1803eb380 = DAT_1803eb380 + 0xe;
        }
        FUN_18020e450(&local_168);
        FUN_18020e450(local_f8);
      }
      FUN_18020e450(local_188);
      iVar26 = iVar26 + 1;
    } while (iVar26 < iVar13);
  }
  if (DAT_1803eb378 != DAT_1803eb380) {
    DAT_1803e8978 = 0;
  }
  return;
}


)B1801258d0",
    "622d03934041e844f037df55d6891319d87c754b75ff6b3eb9ad7b6504837ac3",
    R"F1801258d0C(FUN_1800130a0
FUN_180013ba0
FUN_18001d080
FUN_1800fee30
FUN_1801279d0
FUN_1801fc680
FUN_18020b400
FUN_18020e450
FUN_18020e930
FUN_180212700
FUN_180225990
FUN_18022a630
FUN_180232650)F1801258d0C",
    R"F1801258d0D(LAB_180125a14
LAB_180125de0
LAB_180125e6b
LAB_180125f10
LAB_180125f9b
LAB_180126040
LAB_1801260cb
LAB_180126170
LAB_1801261fb
LAB_1801262a1
LAB_18012632c
LAB_1801263d2
LAB_180126462
LAB_180126500
LAB_180126590
LAB_180126632
LAB_180126790
LAB_18012681e
LAB_1801268c3
LAB_180126951
LAB_1801269f5
LAB_180126a8d
LAB_180126b34
LAB_180126bcd
LAB_180126c80
LAB_180126d15
LAB_180126dd0
LAB_180126f40
LAB_180126fcf
LAB_180127083
LAB_18012711d
LAB_1801271d0
LAB_180127263
LAB_180127316
LAB_1801273ad
LAB_180127460
LAB_1801274f3
LAB_1801275a7
LAB_18012763d
LAB_1801276f4
LAB_18012778f
DAT_18033e5ea
DAT_18033ea54
DAT_180380a3c
DAT_180380a88
DAT_180380ae4
DAT_180380af0
DAT_180380b4c
DAT_180380bb0
DAT_1803da4c0
DAT_1803e8978
DAT_1803eb378
DAT_1803eb380
DAT_1803eb388
DAT_1805c3990)F1801258d0D",
    R"F1801258d0T("box"
"name"
"chams"
"class"
"health"
"color.a"
"color.b"
"color.g"
"color.r"
"dormant"
"enabled"
"distance"
"box_style"
"chams_mode"
"chams_sharp"
"chams_thick"
"chams_thr.b"
"chams_thr.g"
"chams_thr.r"
"chams_vis.b"
"chams_vis.g"
"chams_vis.r"
"stable_bounds"
"entitylist.count")F1801258d0T",
    R"F1801258d0F(153: if (DAT_1803eb378 != DAT_1803eb380) {
154: do {
172: if (uStack_538 < 0x10) {
175: else {
177: if ((byte *******)local_550 == (byte *******)0x0) goto LAB_180125a14;
179: do {
180: if (*(byte *)pppppppbVar24 == 0) break;
184: LAB_180125a14:
189: while (cVar1 == '\0') {
191: if ((ulonglong)plVar17[4] < uVar20) {
199: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
204: if (0xf < (ulonglong)plVar22[8]) {
208: if (0xf < (ulonglong)plVar22[8]) {
211: if (local_1e8 == plVar18) {
215: else {
230: if (0 < iVar13) {
231: do {
251: if (0x7fffffffffffffffU - local_178 < 5) {
264: if (local_e8 == 0) {
267: else {
291: if (0xf < local_e0) {
295: if (0x7fffffffffffffffU - local_178 < 7) {
305: if (local_4d8 < 0x10) {
307: goto LAB_180125de0;
309: for (; pppppppbVar24 != (byte *******)0x0;
311: LAB_180125de0:
312: if (*(byte *)pppppppbVar24 == 0) break;
319: while (cVar1 == '\0') {
321: if ((ulonglong)plVar17[4] < uVar20) {
329: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
333: if (0xf < (ulonglong)plVar22[8]) {
336: if ((plVar22[7] == 1) && (*(char *)plVar17 == '1')) goto LAB_180125e6b;
337: if (0xf < (ulonglong)plVar22[8]) {
340: if ((plVar22[7] == 4) && ((int)*plVar18 == 0x65757274)) goto LAB_180125e6b;
343: else {
344: LAB_180125e6b:
350: if (0x7fffffffffffffffU - local_178 < 3) {
360: if (local_2d8 < 0x10) {
362: goto LAB_180125f10;
364: for (; pppppppbVar24 != (byte *******)0x0;
366: LAB_180125f10:
367: if (*(byte *)pppppppbVar24 == 0) break;
374: while (cVar1 == '\0') {
376: if ((ulonglong)plVar17[4] < uVar20) {
384: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
388: if (0xf < (ulonglong)plVar22[8]) {
391: if ((plVar22[7] == 1) && (*(char *)plVar17 == '1')) goto LAB_180125f9b;
392: if (0xf < (ulonglong)plVar22[8]) {
395: if ((plVar22[7] == 4) && ((int)*plVar18 == 0x65757274)) goto LAB_180125f9b;
398: else {
399: LAB_180125f9b:
405: if (0x7fffffffffffffffU - local_178 < 0xd) {
415: if (local_2b8 < 0x10) {
417: goto LAB_180126040;
419: for (; pppppppbVar24 != (byte *******)0x0;
421: LAB_180126040:
422: if (*(byte *)pppppppbVar24 == 0) break;
429: while (cVar1 == '\0') {
431: if ((ulonglong)plVar17[4] < uVar20) {
439: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
443: if (0xf < (ulonglong)plVar22[8]) {
446: if ((plVar22[7] != 1) || (*(char *)plVar17 != '1')) {
447: if (0xf < (ulonglong)plVar22[8]) {
450: if ((plVar22[7] != 4) || ((int)*plVar18 != 0x65757274)) goto LAB_1801260cb;
454: else {
455: LAB_1801260cb:
461: if (0x7fffffffffffffffU - local_178 < 4) {
471: if (local_298 < 0x10) {
473: goto LAB_180126170;
475: for (; pppppppbVar24 != (byte *******)0x0;
477: LAB_180126170:
478: if (*(byte *)pppppppbVar24 == 0) break;
485: while (cVar1 == '\0') {
487: if ((ulonglong)plVar17[4] < uVar20) {
495: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
499: if (0xf < (ulonglong)plVar22[8]) {
502: if ((plVar22[7] == 1) && (*(char *)plVar17 == '1')) goto LAB_1801261fb;
503: if (0xf < (ulonglong)plVar22[8]) {
506: if ((plVar22[7] == 4) && ((int)*plVar18 == 0x65757274)) goto LAB_1801261fb;
509: else {
510: LAB_1801261fb:
516: if (0x7fffffffffffffffU - local_178 < 6) {
526: if (local_278 < 0x10) {
528: goto LAB_1801262a1;
530: for (; pppppppbVar24 != (byte *******)0x0;
532: LAB_1801262a1:
533: if (*(byte *)pppppppbVar24 == 0) break;
540: while (cVar1 == '\0') {
542: if ((ulonglong)plVar17[4] < uVar20) {
550: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
554: if (0xf < (ulonglong)plVar22[8]) {
557: if ((plVar22[7] != 1) || (*(char *)plVar17 != '1')) {
558: if (0xf < (ulonglong)plVar22[8]) {
561: if ((plVar22[7] != 4) || ((int)*plVar18 != 0x65757274)) goto LAB_18012632c;
565: else {
566: LAB_18012632c:
572: if (0x7fffffffffffffffU - local_178 < 8) {
582: if (local_258 < 0x10) {
584: goto LAB_1801263d2;
586: for (; pppppppbVar24 != (byte *******)0x0;
588: LAB_1801263d2:
589: if (*(byte *)pppppppbVar24 == 0) break;
595: if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
596: do {
598: if ((ulonglong)plVar18[4] < uVar20) {
607: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
611: if (0xf < (ulonglong)plVar22[8]) {
614: if ((plVar22[7] != 1) || (*(char *)plVar17 != '1')) {
615: if (0xf < (ulonglong)plVar22[8]) {
618: if ((plVar22[7] != 4) || ((int)*plVar18 != 0x65757274)) goto LAB_180126462;
622: else {
623: LAB_180126462:
629: if (0x7fffffffffffffffU - local_178 < 7) {
639: if (local_4f8 < 0x10) {
641: goto LAB_180126500;
643: for (; pppppppbVar24 != (byte *******)0x0;
645: LAB_180126500:
646: if (*(byte *)pppppppbVar24 == 0) break;
652: if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
653: do {
655: if ((ulonglong)plVar18[4] < uVar20) {
664: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
668: if (0xf < (ulonglong)plVar22[8]) {
671: if ((plVar22[7] == 1) && (*(char *)plVar17 == '1')) goto LAB_180126590;
672: if (0xf < (ulonglong)plVar22[8]) {
675: if ((plVar22[7] == 4) && ((int)*plVar18 == 0x65757274)) goto LAB_180126590;
678: else {
679: LAB_180126590:
686: if (0x7fffffffffffffffU - local_178 < 9) {
697: if (local_4b8 < 0x10) {
699: goto LAB_180126632;
701: for (; pppppppbVar24 != (byte *******)0x0;
703: LAB_180126632:
704: if (*(byte *)pppppppbVar24 == 0) break;
710: while (cVar1 == '\0') {
712: if ((ulonglong)plVar18[4] < uVar20) {
720: if ((*(char *)((longlong)plVar17 + 0x19) != '\0') || (uVar20 < (ulonglong)plVar17[4])) {
723: if (plVar17 == (longlong *)*param_1) {
726: else {
730: if (0xf < (ulonglong)plVar17[8]) {
734: if (0xf < (ulonglong)plVar17[8]) {
737: if (local_190 == plVar18) {
742: if (-1 < local_574[1]) {
746: if (local_574[1] < 4) {
752: if (0x7fffffffffffffffU - local_178 < 7) {
763: if (local_498 < 0x10) {
765: goto LAB_180126790;
767: for (; pppppppbVar24 != (byte *******)0x0;
769: LAB_180126790:
770: if (*(byte *)pppppppbVar24 == 0) break;
776: if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
777: do {
779: if ((ulonglong)plVar18[4] < uVar20) {
788: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
793: if (0xf < (ulonglong)plVar22[8]) {
797: if (0xf < (ulonglong)plVar22[8]) {
800: if (local_1e0 == plVar18) goto LAB_18012681e;
802: else {
803: LAB_18012681e:
808: if (0x7fffffffffffffffU - local_178 < 7) {
819: if (local_478 < 0x10) {
821: goto LAB_1801268c3;
823: for (; pppppppbVar24 != (byte *******)0x0;
825: LAB_1801268c3:
826: if (*(byte *)pppppppbVar24 == 0) break;
832: if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
833: do {
835: if ((ulonglong)plVar18[4] < uVar20) {
844: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
849: if (0xf < (ulonglong)plVar22[8]) {
853: if (0xf < (ulonglong)plVar22[8]) {
856: if (local_1d8 == plVar18) goto LAB_180126951;
858: else {
859: LAB_180126951:
864: if (0x7fffffffffffffffU - local_178 < 7) {
875: if (local_458 < 0x10) {
877: goto LAB_1801269f5;
879: for (; pppppppbVar24 != (byte *******)0x0;
881: LAB_1801269f5:
883: if (*(byte *)pppppppbVar24 == 0) break;
889: if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
890: do {
892: if ((ulonglong)plVar18[4] < uVar20) {
901: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
906: if (0xf < (ulonglong)plVar22[8]) {
910: if (0xf < (ulonglong)plVar22[8]) {
913: if (local_1d0 == plVar18) goto LAB_180126a8d;
915: else {
916: LAB_180126a8d:
921: if (0x7fffffffffffffffU - local_178 < 7) {
932: if (local_438 < 0x10) {
934: goto LAB_180126b34;
936: for (; pppppppbVar24 != (byte *******)0x0;
938: LAB_180126b34:
940: if (*(byte *)pppppppbVar24 == 0) break;
946: if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
947: do {
949: if ((ulonglong)plVar18[4] < uVar20) {
958: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
963: if (0xf < (ulonglong)plVar22[8]) {
967: if (0xf < (ulonglong)plVar22[8]) {
970: if (local_1c8 == plVar18) goto LAB_180126bcd;
972: else {
973: LAB_180126bcd:
978: if (0x7fffffffffffffffU - local_178 < 5) {
988: if (local_418 < 0x10) {
990: goto LAB_180126c80;
992: for (; pppppppbVar24 != (byte *******)0x0;
994: LAB_180126c80:
996: if (*(byte *)pppppppbVar24 == 0) break;
1002: if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
1003: do {
1005: if ((ulonglong)plVar18[4] < uVar20) {
1014: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
1018: if (0xf < (ulonglong)plVar22[8]) {
1021: if ((plVar22[7] != 1) || (*(char *)plVar17 != '1')) {
1022: if (0xf < (ulonglong)plVar22[8]) {
1025: if ((plVar22[7] != 4) || ((int)*plVar18 != 0x65757274)) goto LAB_180126d15;
1029: else {
1030: LAB_180126d15:
1038: if (0x7fffffffffffffffU - local_178 < 10) {
1049: if (local_3f8 < 0x10) {
1051: goto LAB_180126dd0;
1053: for (; pppppppbVar24 != (byte *******)0x0;
1055: LAB_180126dd0:
1057: if (*(byte *)pppppppbVar24 == 0) break;
1063: while (cVar1 == '\0') {
1065: if ((ulonglong)plVar18[4] < uVar20) {
1073: if ((*(char *)((longlong)plVar17 + 0x19) != '\0') || (uVar20 < (ulonglong)plVar17[4])) {
1076: if (plVar17 != (longlong *)*param_1) {
1080: if (0xf < (ulonglong)plVar17[8]) {
1084: if (0xf < (ulonglong)plVar17[8]) {
1087: if (local_1c0 == plVar18) {
1093: if (-1 < lVar14) {
1097: if (lVar14 < 2) {
1103: if (0x7fffffffffffffffU - local_178 < 0xb) {
1114: if (local_3d8 < 0x10) {
1116: goto LAB_180126f40;
1118: for (; pppppppbVar24 != (byte *******)0x0;
1120: LAB_180126f40:
1122: if (*(byte *)pppppppbVar24 == 0) break;
1128: if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
1129: do {
1131: if ((ulonglong)plVar18[4] < uVar20) {
1140: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
1145: if (0xf < (ulonglong)plVar22[8]) {
1149: if (0xf < (ulonglong)plVar22[8]) {
1152: if (local_1b8 == plVar18) goto LAB_180126fcf;
1154: else {
1155: LAB_180126fcf:
1160: if (0x7fffffffffffffffU - local_178 < 0xb) {
1171: if (local_3b8 < 0x10) {
1173: goto LAB_180127083;
1175: for (; pppppppbVar24 != (byte *******)0x0;
1177: LAB_180127083:
1179: if (*(byte *)pppppppbVar24 == 0) break;
1185: if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
1186: do {
1188: if ((ulonglong)plVar18[4] < uVar20) {
1197: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
1202: if (0xf < (ulonglong)plVar22[8]) {
1206: if (0xf < (ulonglong)plVar22[8]) {
1209: if (local_1b0 == plVar18) goto LAB_18012711d;
1211: else {
1212: LAB_18012711d:
1217: if (0x7fffffffffffffffU - local_178 < 0xb) {
1228: if (local_398 < 0x10) {
1230: goto LAB_1801271d0;
1232: for (; pppppppbVar24 != (byte *******)0x0;
1234: LAB_1801271d0:
1236: if (*(byte *)pppppppbVar24 == 0) break;
1242: if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
1243: do {
1245: if ((ulonglong)plVar18[4] < uVar20) {
1254: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
1259: if (0xf < (ulonglong)plVar22[8]) {
1263: if (0xf < (ulonglong)plVar22[8]) {
1266: if (local_1a8 == plVar18) goto LAB_180127263;
1268: else {
1269: LAB_180127263:
1274: if (0x7fffffffffffffffU - local_178 < 0xb) {
1285: if (local_378 < 0x10) {
1287: goto LAB_180127316;
1289: for (; pppppppbVar24 != (byte *******)0x0;
1291: LAB_180127316:
1293: if (*(byte *)pppppppbVar24 == 0) break;
1299: if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
1300: do {
1302: if ((ulonglong)plVar18[4] < uVar20) {
1311: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
1316: if (0xf < (ulonglong)plVar22[8]) {
1320: if (0xf < (ulonglong)plVar22[8]) {
1323: if (local_1a0 == plVar18) goto LAB_1801273ad;
1325: else {
1326: LAB_1801273ad:
1332: if (0x7fffffffffffffffU - local_178 < 0xb) {
1343: if (local_2f8 < 0x10) {
1345: goto LAB_180127460;
1347: for (; pppppppbVar24 != (byte *******)0x0;
1349: LAB_180127460:
1351: if (*(byte *)pppppppbVar24 == 0) break;
1357: if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
1358: do {
1360: if ((ulonglong)plVar18[4] < uVar20) {
1369: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
1374: if (0xf < (ulonglong)plVar22[8]) {
1378: if (0xf < (ulonglong)plVar22[8]) {
1381: if (local_198 == plVar18) goto LAB_1801274f3;
1383: else {
1384: LAB_1801274f3:
1390: if (0x7fffffffffffffffU - local_178 < 0xb) {
1401: if (local_358 < 0x10) {
1403: goto LAB_1801275a7;
1405: for (; pppppppbVar24 != (byte *******)0x0;
1407: LAB_1801275a7:
1409: if (*(byte *)pppppppbVar24 == 0) break;
1415: if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
1416: do {
1418: if ((ulonglong)plVar18[4] < uVar20) {
1427: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
1432: if (0xf < (ulonglong)plVar22[8]) {
1436: if (0xf < (ulonglong)plVar22[8]) {
1439: if (local_1f0 == plVar18) goto LAB_18012763d;
1441: else {
1442: LAB_18012763d:
1448: if (0x7fffffffffffffffU - local_178 < 0xb) {
1458: if (local_338 < 0x10) {
1460: goto LAB_1801276f4;
1462: for (; pppppppbVar24 != (byte *******)0x0;
1464: LAB_1801276f4:
1466: if (*(byte *)pppppppbVar24 == 0) break;
1472: if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
1473: do {
1475: if ((ulonglong)plVar18[4] < uVar20) {
1484: if (((*(char *)((longlong)plVar22 + 0x19) == '\0') && ((ulonglong)plVar22[4] <= uVar20)) &&
1488: if (0xf < (ulonglong)plVar22[8]) {
1491: if ((plVar22[7] != 1) || (*(char *)plVar17 != '1')) {
1492: if (0xf < (ulonglong)plVar22[8]) {
1495: if ((plVar22[7] != 4) || ((int)*plVar18 != 0x65757274)) goto LAB_18012778f;
1499: else {
1500: LAB_18012778f:
1507: if (0x7fffffffffffffffU - local_178 < 0xb) {
1518: if (0 < local_574[1]) {
1522: if (local_574[1] < 0xb) {
1528: if (DAT_1803eb380 == DAT_1803eb388) {
1531: else {
1542: if (DAT_1803eb378 != DAT_1803eb380) {
1545: return;)F1801258d0F",
    R"F1801258d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180125a14.
TODO: recover the declaration, type and value for global/data reference LAB_180125de0.
TODO: recover the declaration, type and value for global/data reference LAB_180125e6b.
TODO: recover the declaration, type and value for global/data reference LAB_180125f10.
TODO: recover the declaration, type and value for global/data reference LAB_180125f9b.
TODO: recover the declaration, type and value for global/data reference LAB_180126040.
TODO: recover the declaration, type and value for global/data reference LAB_1801260cb.
TODO: recover the declaration, type and value for global/data reference LAB_180126170.
TODO: recover the declaration, type and value for global/data reference LAB_1801261fb.
TODO: recover the declaration, type and value for global/data reference LAB_1801262a1.
TODO: recover the declaration, type and value for global/data reference LAB_18012632c.
TODO: recover the declaration, type and value for global/data reference LAB_1801263d2.
TODO: recover the declaration, type and value for global/data reference LAB_180126462.
TODO: recover the declaration, type and value for global/data reference LAB_180126500.
TODO: recover the declaration, type and value for global/data reference LAB_180126590.
TODO: recover the declaration, type and value for global/data reference LAB_180126632.
TODO: recover the declaration, type and value for global/data reference LAB_180126790.
TODO: recover the declaration, type and value for global/data reference LAB_18012681e.
TODO: recover the declaration, type and value for global/data reference LAB_1801268c3.
TODO: recover the declaration, type and value for global/data reference LAB_180126951.
TODO: recover the declaration, type and value for global/data reference LAB_1801269f5.
TODO: recover the declaration, type and value for global/data reference LAB_180126a8d.
TODO: recover the declaration, type and value for global/data reference LAB_180126b34.
TODO: recover the declaration, type and value for global/data reference LAB_180126bcd.
TODO: recover the declaration, type and value for global/data reference LAB_180126c80.
TODO: recover the declaration, type and value for global/data reference LAB_180126d15.
TODO: recover the declaration, type and value for global/data reference LAB_180126dd0.
TODO: recover the declaration, type and value for global/data reference LAB_180126f40.
TODO: recover the declaration, type and value for global/data reference LAB_180126fcf.
TODO: recover the declaration, type and value for global/data reference LAB_180127083.
TODO: recover the declaration, type and value for global/data reference LAB_18012711d.
TODO: recover the declaration, type and value for global/data reference LAB_1801271d0.
TODO: recover the declaration, type and value for global/data reference LAB_180127263.
TODO: recover the declaration, type and value for global/data reference LAB_180127316.
TODO: recover the declaration, type and value for global/data reference LAB_1801273ad.
TODO: recover the declaration, type and value for global/data reference LAB_180127460.
TODO: recover the declaration, type and value for global/data reference LAB_1801274f3.
TODO: recover the declaration, type and value for global/data reference LAB_1801275a7.
TODO: recover the declaration, type and value for global/data reference LAB_18012763d.
TODO: recover the declaration, type and value for global/data reference LAB_1801276f4.
TODO: recover the declaration, type and value for global/data reference LAB_18012778f.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_18033ea54.
TODO: recover the declaration, type and value for global/data reference DAT_180380a3c.
TODO: recover the declaration, type and value for global/data reference DAT_180380a88.
TODO: recover the declaration, type and value for global/data reference DAT_180380ae4.
TODO: recover the declaration, type and value for global/data reference DAT_180380af0.
TODO: recover the declaration, type and value for global/data reference DAT_180380b4c.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8978.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb378.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb380.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb388.
TODO: recover the declaration, type and value for global/data reference DAT_1805c3990.)F1801258d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801258d0() noexcept {
    return kFunction_0x1801258d0;
}

// 0x1801279d0 FUN_1801279d0
// source: re/dump/decompile/0x1801279d0_FUN_1801279d0.c
// size: 232 bytes; thunk: false
// body sha256: 54c32791faf079e6b8c98eb9f36eb0d3e9f0b73e3f9e55fbb3d0d2d342694f23
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801279d0{
    "0x1801279d0",
    "FUN_1801279d0",
    R"F1801279d0S(undefined FUN_1801279d0())F1801279d0S",
    R"B1801279d0(// 0x1801279d0  FUN_1801279d0
// size=232 thunk=false
// signature: undefined FUN_1801279d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long FUN_1801279d0(undefined8 *param_1,byte *param_2,long param_3)

{
  char cVar1;
  longlong *plVar2;
  long lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(byte **)param_2;
  }
  uVar5 = 0x14650fb0739d0383;
  for (; (param_2 != (byte *)0x0 && (*param_2 != 0)); param_2 = param_2 + 1) {
    uVar5 = (uVar5 ^ *param_2) * 0x100000001b3;
  }
  plVar6 = *(longlong **)*param_1;
  plVar4 = (longlong *)plVar6[1];
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  plVar2 = plVar6;
  while (cVar1 == '\0') {
    plVar7 = plVar4;
    if ((ulonglong)plVar4[4] < uVar5) {
      plVar4 = plVar4 + 2;
      plVar7 = plVar2;
    }
    plVar4 = (longlong *)*plVar4;
    plVar2 = plVar7;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  lVar3 = param_3;
  if (((*(char *)((longlong)plVar2 + 0x19) == '\0') && ((ulonglong)plVar2[4] <= uVar5)) &&
     (plVar2 != plVar6)) {
    plVar4 = plVar2 + 5;
    local_18 = (longlong *)0x0;
    plVar6 = plVar4;
    if (0xf < (ulonglong)plVar2[8]) {
      plVar6 = (longlong *)*plVar4;
    }
    lVar3 = strtol((char *)plVar6,(char **)&local_18,10);
    if (0xf < (ulonglong)plVar2[8]) {
      plVar4 = (longlong *)*plVar4;
    }
    if (local_18 == plVar4) {
      lVar3 = param_3;
    }
  }
  return lVar3;
}


)B1801279d0",
    "54c32791faf079e6b8c98eb9f36eb0d3e9f0b73e3f9e55fbb3d0d2d342694f23",
    R"F1801279d0C()F1801279d0C",
    R"F1801279d0D(DAT_1803da4c0)F1801279d0D",
    R"F1801279d0T()F1801279d0T",
    R"F1801279d0F(24: if (0xf < *(ulonglong *)(param_2 + 0x18)) {
28: for (; (param_2 != (byte *)0x0 && (*param_2 != 0)); param_2 = param_2 + 1) {
35: while (cVar1 == '\0') {
37: if ((ulonglong)plVar4[4] < uVar5) {
46: if (((*(char *)((longlong)plVar2 + 0x19) == '\0') && ((ulonglong)plVar2[4] <= uVar5)) &&
51: if (0xf < (ulonglong)plVar2[8]) {
55: if (0xf < (ulonglong)plVar2[8]) {
58: if (local_18 == plVar4) {
62: return lVar3;)F1801279d0F",
    R"F1801279d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F1801279d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801279d0() noexcept {
    return kFunction_0x1801279d0;
}

// 0x180127ac0 FUN_180127ac0
// source: re/dump/decompile/0x180127ac0_FUN_180127ac0.c
// size: 436 bytes; thunk: false
// body sha256: cb9236225bd83f4a34043cded913a21ceadf3b8f057ab65507eac3b893e84332
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180127ac0{
    "0x180127ac0",
    "FUN_180127ac0",
    R"F180127ac0S(undefined FUN_180127ac0())F180127ac0S",
    R"B180127ac0(// 0x180127ac0  FUN_180127ac0
// size=436 thunk=false
// signature: undefined FUN_180127ac0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180127ac0(undefined8 param_1,float *param_2,longlong param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_res8 [2];
  undefined8 local_88;
  float fStack_80;
  float fStack_7c;
  longlong local_78;
  undefined8 *local_70;
  
  if (*(char *)(param_3 + 0x21) != '\0') {
    local_88 = *(undefined8 *)(param_3 + 0x2c);
    fStack_7c = param_4 * *(float *)(param_3 + 0x38);
    fStack_80 = *(float *)(param_3 + 0x34);
    local_res8[0] = param_1;
    uVar4 = FUN_180268ed0(&local_88);
    fStack_7c = param_4 * _DAT_180380b48;
    local_88 = 0;
    fStack_80 = 0.0;
    uVar5 = FUN_180268ed0(&local_88);
    fVar3 = DAT_180380bb0;
    fVar7 = *param_2;
    fVar6 = param_2[1];
    fVar1 = param_2[2];
    fVar2 = param_2[3];
    fStack_80 = fVar1 + DAT_180380bb0;
    local_70 = local_res8;
    local_88 = CONCAT44(fVar6 - DAT_180380bb0,fVar7 - DAT_180380bb0);
    fStack_7c = fVar2 + DAT_180380bb0;
    local_78 = param_3;
    FUN_180127c80(&local_78,&local_88,uVar5,DAT_180380bb0);
    fStack_80 = fVar1 - fVar3;
    fVar7 = fVar7 + fVar3;
    if (fVar7 < fStack_80) {
      fStack_7c = fVar2 - fVar3;
      fVar6 = fVar6 + fVar3;
      if (fVar6 < fStack_7c) {
        local_88 = CONCAT44(fVar6,fVar7);
        FUN_180127c80(&local_78,&local_88,uVar5,fVar3);
      }
    }
    local_88 = *(undefined8 *)param_2;
    fStack_80 = param_2[2];
    fStack_7c = param_2[3];
    FUN_180127c80(&local_78,&local_88,uVar4,fVar3);
  }
  return;
}


)B180127ac0",
    "cb9236225bd83f4a34043cded913a21ceadf3b8f057ab65507eac3b893e84332",
    R"F180127ac0C(FUN_180127c80
FUN_180268ed0)F180127ac0C",
    R"F180127ac0D(DAT_180380bb0)F180127ac0D",
    R"F180127ac0T()F180127ac0T",
    R"F180127ac0F(26: if (*(char *)(param_3 + 0x21) != '\0') {
49: if (fVar7 < fStack_80) {
52: if (fVar6 < fStack_7c) {
62: return;)F180127ac0F",
    R"F180127ac0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.)F180127ac0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180127ac0() noexcept {
    return kFunction_0x180127ac0;
}

// 0x180127c80 FUN_180127c80
// source: re/dump/decompile/0x180127c80_FUN_180127c80.c
// size: 871 bytes; thunk: false
// body sha256: 12d58a340f3cefe8507d2cd58c3f4e290b168a476a8e41bd80712525228c8bac
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180127c80{
    "0x180127c80",
    "FUN_180127c80",
    R"F180127c80S(undefined FUN_180127c80())F180127c80S",
    R"B180127c80(// 0x180127c80  FUN_180127c80
// size=871 thunk=false
// signature: undefined FUN_180127c80()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180127c80(longlong *param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  
  fVar1 = *param_2;
  fVar2 = param_2[2];
  uVar6 = *(undefined8 *)param_1[1];
  fVar3 = param_2[1];
  fVar4 = param_2[3];
  iVar5 = *(int *)(*param_1 + 0x28);
  fVar7 = fVar2 - fVar1;
  if (fVar4 - fVar3 <= fVar2 - fVar1) {
    fVar7 = fVar4 - fVar3;
  }
  fVar8 = fVar7 * _DAT_180380a64;
  if (DAT_180381078 <= fVar7 * _DAT_180380a64) {
    fVar8 = DAT_180381078;
  }
  local_c4 = fVar3;
  if (iVar5 == 1) {
    fVar7 = fVar7 * DAT_180380ac0 - DAT_180380d30;
    if (fVar7 <= fVar8) {
      fVar8 = fVar7;
    }
    if (DAT_180380d30 <= fVar8) {
      local_c8 = fVar8 + fVar1;
      FUN_180294c90(uVar6,param_2,&local_c8,param_3,param_4);
      local_c8 = fVar1;
      local_c4 = fVar8 + fVar3;
      FUN_180294c90(*(undefined8 *)param_1[1],param_2,&local_c8,param_3,param_4);
      local_c8 = fVar2;
      local_c4 = fVar3;
      local_c0 = fVar2 - fVar8;
      local_bc = fVar3;
      FUN_180294c90(*(undefined8 *)param_1[1],&local_c0,&local_c8,param_3,param_4);
      local_c8 = fVar2;
      local_c4 = fVar3;
      local_c0 = fVar2;
      local_bc = fVar8 + fVar3;
      FUN_180294c90(*(undefined8 *)param_1[1],&local_c8,&local_c0,param_3,param_4);
      local_c8 = fVar1;
      local_c4 = fVar4 - fVar8;
      local_c0 = fVar1;
      local_bc = fVar4;
      FUN_180294c90(*(undefined8 *)param_1[1],&local_c8,&local_c0,param_3,param_4);
      local_c8 = fVar1;
      local_c4 = fVar4;
      local_c0 = fVar8 + fVar1;
      local_bc = fVar4;
      FUN_180294c90(*(undefined8 *)param_1[1],&local_c8,&local_c0,param_3,param_4);
      local_c0 = fVar2 - fVar8;
      local_bc = fVar4;
      FUN_180294c90(*(undefined8 *)param_1[1],&local_c0,param_2 + 2,param_3,param_4);
      local_c0 = fVar2;
      local_bc = fVar4 - fVar8;
      FUN_180294c90(*(undefined8 *)param_1[1],&local_c0,param_2 + 2,param_3,param_4);
      return;
    }
LAB_180127dcf:
    FUN_180294f00(uVar6,param_2,param_2 + 2,param_3,0,param_4,0xf);
  }
  else {
    if (iVar5 == 2) {
      local_c8 = fVar2;
      FUN_180294c90(uVar6,param_2,&local_c8,param_3,param_4);
      local_c8 = fVar1;
      local_c4 = fVar4;
    }
    else {
      if (iVar5 != 3) goto LAB_180127dcf;
      local_c8 = fVar1;
      local_c4 = fVar4;
      FUN_180294c90(uVar6,param_2,&local_c8,param_3,param_4);
      local_c8 = fVar2;
      local_c4 = fVar3;
    }
    FUN_180294c90(*(undefined8 *)param_1[1],&local_c8,param_2 + 2,param_3,param_4);
  }
  return;
}


)B180127c80",
    "12d58a340f3cefe8507d2cd58c3f4e290b168a476a8e41bd80712525228c8bac",
    R"F180127c80C(FUN_180294c90
FUN_180294f00)F180127c80C",
    R"F180127c80D(LAB_180127dcf
DAT_180380ac0
DAT_180380d30
DAT_180381078)F180127c80D",
    R"F180127c80T()F180127c80T",
    R"F180127c80F(32: if (fVar4 - fVar3 <= fVar2 - fVar1) {
36: if (DAT_180381078 <= fVar7 * _DAT_180380a64) {
40: if (iVar5 == 1) {
42: if (fVar7 <= fVar8) {
45: if (DAT_180380d30 <= fVar8) {
77: return;
79: LAB_180127dcf:
82: else {
83: if (iVar5 == 2) {
89: else {
90: if (iVar5 != 3) goto LAB_180127dcf;
99: return;)F180127c80F",
    R"F180127c80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180127dcf.
TODO: recover the declaration, type and value for global/data reference DAT_180380ac0.
TODO: recover the declaration, type and value for global/data reference DAT_180380d30.
TODO: recover the declaration, type and value for global/data reference DAT_180381078.)F180127c80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180127c80() noexcept {
    return kFunction_0x180127c80;
}

// 0x180127ff0 FUN_180127ff0
// source: re/dump/decompile/0x180127ff0_FUN_180127ff0.c
// size: 1912 bytes; thunk: false
// body sha256: cb8fec3e7cecd612811d4d20b09b4d41a7f5fae6b9150d3dca29572267443fe6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180127ff0{
    "0x180127ff0",
    "FUN_180127ff0",
    R"F180127ff0S(undefined FUN_180127ff0())F180127ff0S",
    R"B180127ff0(// 0x180127ff0  FUN_180127ff0
// size=1912 thunk=false
// signature: undefined FUN_180127ff0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180127ff0(longlong param_1,float *param_2,char ****param_3,float param_4,float param_5,
                  char ****param_6,int param_7)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  char ****ppppcVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_218 [32];
  uint local_1f8;
  char ***local_1f0;
  char ***local_1e8;
  undefined8 local_1e0;
  ulonglong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  uint local_1b8;
  float local_1b0;
  float local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  float local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  float fStack_18c;
  uint local_188;
  float local_180;
  float local_17c;
  undefined8 local_178;
  char ***local_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  char ***local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulonglong uStack_140;
  char local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  char local_108 [32];
  ulonglong local_e8;
  
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_218;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_178 = param_2;
  local_170 = (char ***)param_3;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1228);
  if (lVar2 != 0) {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar17 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x1238) * DAT_180380b6c;
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = param_4 * DAT_180380b4c;
    uVar10 = FUN_180268ed0(&local_1a8);
    local_1a8 = *(undefined8 *)((longlong)param_3 + 0x2c);
    local_1a0 = *(undefined4 *)((longlong)param_3 + 0x34);
    local_19c = param_4;
    local_188 = uVar10;
    uVar11 = FUN_180268ed0(&local_1a8);
    uVar6 = DAT_180381308;
    fVar5 = DAT_180380e28;
    fVar4 = DAT_180380bb0;
    fVar14 = DAT_180380ac0;
    local_1b8 = uVar11;
    if (*(char *)((longlong)param_3 + 0x23) != '\0') {
      if ((param_6 == (char ****)0x0) && (param_6 = param_3, (char ***)0xf < param_3[3])) {
        param_6 = (char ****)*param_3;
      }
      local_1c8 = 0;
      local_1d8 = 0;
      local_1e0 = 0;
      local_1e8 = (char ***)0x0;
      local_1f8 = 0;
      local_1f0 = (char ***)param_6;
      FUN_18029e350(&local_1b0,lVar2,fVar17,DAT_180381308);
      local_17c = ((param_2[1] - local_1ac) - fVar5) - 0.0;
      local_180 = (param_2[2] + *param_2) * fVar14 - local_1b0 * fVar14;
      local_1b0 = local_180 + fVar4;
      local_1ac = local_17c + fVar4;
      if ((((uVar10 & 0xff000000) != 0) && (param_6 != (char ****)0x0)) &&
         (*(char *)param_6 != '\0')) {
        fVar15 = fVar17;
        if (fVar17 == 0.0) {
          fVar15 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
        }
        local_198 = *(undefined4 *)(param_1 + 0x60);
        uStack_194 = *(undefined4 *)(param_1 + 100);
        uStack_190 = *(undefined4 *)(param_1 + 0x68);
        fStack_18c = *(float *)(param_1 + 0x6c);
        local_1d0 = 0;
        local_1d8 = local_1d8 & 0xffffffff00000000;
        local_1e0 = 0;
        local_1f0 = (char ***)&local_198;
        local_1f8 = uVar10;
        local_1e8 = (char ***)param_6;
        FUN_18029e990(lVar2,param_1,fVar15,&local_1b0);
      }
      if ((((uVar11 & 0xff000000) != 0) && (param_6 != (char ****)0x0)) &&
         (*(char *)param_6 != '\0')) {
        fVar15 = fVar17;
        if (fVar17 == 0.0) {
          fVar15 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
        }
        local_198 = *(undefined4 *)(param_1 + 0x60);
        uStack_194 = *(undefined4 *)(param_1 + 100);
        uStack_190 = *(undefined4 *)(param_1 + 0x68);
        fStack_18c = *(float *)(param_1 + 0x6c);
        local_1d0 = 0;
        local_1d8 = local_1d8 & 0xffffffff00000000;
        local_1e0 = 0;
        local_1f0 = (char ***)&local_198;
        local_1f8 = uVar11;
        local_1e8 = (char ***)param_6;
        FUN_18029e990(lVar2,param_1,fVar15,&local_180);
      }
    }
    uVar8 = _UNK_1803814b8;
    uVar7 = _DAT_1803814b0;
    fVar15 = DAT_180380d30;
    fVar18 = 0.0;
    uVar3 = uVar10;
    if (0 < param_7) {
      iVar13 = 1;
      do {
        uStack_150 = 0;
        local_148 = uVar7;
        uStack_140 = uVar8;
        local_158 = (char ***)0x0;
        local_138 = '\0';
        local_134 = 0x3f800000;
        local_130 = 0x3f800000;
        local_12c = 0x3f800000;
        local_128 = 0x3f800000;
        local_120 = 0;
        local_118 = 0;
        cVar9 = FUN_1800213a0(param_7,iVar13,&local_158);
        if (cVar9 != '\0') {
          if (local_138 != '\0') {
            local_198 = local_134;
            uStack_194 = local_130;
            uStack_190 = local_12c;
            fStack_18c = param_4;
            uVar11 = FUN_180268ed0(&local_198);
          }
          ppppcVar12 = &local_158;
          if (0xf < uStack_140) {
            ppppcVar12 = (char ****)local_158;
          }
          local_1c8 = 0;
          local_1d8 = 0;
          local_1e0 = 0;
          local_1e8 = (char ***)0x0;
          local_1f8 = 0;
          local_1f0 = (char ***)ppppcVar12;
          FUN_18029e350(&local_1a8,lVar2,fVar17,uVar6);
          local_1ac = local_178[3] + fVar5 + fVar18;
          local_1b0 = (*local_178 + local_178[2]) * fVar14 - (float)local_1a8 * fVar14;
          local_180 = local_1b0 + fVar4;
          local_17c = local_1ac + fVar4;
          if ((((uVar10 & 0xff000000) != 0) && (ppppcVar12 != (char ****)0x0)) &&
             (*(char *)ppppcVar12 != '\0')) {
            fVar16 = fVar17;
            if (fVar17 == 0.0) {
              fVar16 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
            }
            local_168._0_4_ = *(undefined4 *)(param_1 + 0x60);
            local_168._4_4_ = *(undefined4 *)(param_1 + 100);
            uStack_160 = *(undefined4 *)(param_1 + 0x68);
            uStack_15c = *(undefined4 *)(param_1 + 0x6c);
            local_1d0 = 0;
            local_1d8 = local_1d8 & 0xffffffff00000000;
            local_1e0 = 0;
            local_1f0 = (char ***)&local_168;
            local_1f8 = uVar10;
            local_1e8 = (char ***)ppppcVar12;
            FUN_18029e990(lVar2,param_1,fVar16,&local_180);
          }
          if ((((uVar11 & 0xff000000) != 0) && (ppppcVar12 != (char ****)0x0)) &&
             (*(char *)ppppcVar12 != '\0')) {
            fVar16 = fVar17;
            if (fVar17 == 0.0) {
              fVar16 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
            }
            local_168._0_4_ = *(undefined4 *)(param_1 + 0x60);
            local_168._4_4_ = *(undefined4 *)(param_1 + 100);
            uStack_160 = *(undefined4 *)(param_1 + 0x68);
            uStack_15c = *(undefined4 *)(param_1 + 0x6c);
            local_1d0 = 0;
            local_1d8 = local_1d8 & 0xffffffff00000000;
            local_1e0 = 0;
            local_1f0 = (char ***)&local_168;
            local_1f8 = uVar11;
            local_1e8 = (char ***)ppppcVar12;
            FUN_18029e990(lVar2,param_1,fVar16,&local_1b0);
          }
          fVar18 = fVar18 + local_1a8._4_4_ + fVar15;
        }
        FUN_18020e450(&local_158);
        iVar13 = iVar13 + 1;
        param_3 = (char ****)local_170;
        uVar11 = local_1b8;
        uVar3 = local_188;
      } while (iVar13 < 5);
    }
    if (*(char *)((longlong)param_3 + 0x25) != '\0') {
      if (DAT_180381278 <= param_5) {
        FUN_180012ac0(local_108,0x20,"%.1fkm",(double)(param_5 / DAT_180381278));
      }
      else {
        FUN_180012ac0(local_108,0x20,&DAT_180358504,(int)param_5);
      }
      local_1c8 = 0;
      local_1d8 = 0;
      local_1e0 = 0;
      local_1e8 = (char ***)0x0;
      local_1f0 = (char ***)local_108;
      local_1f8 = 0;
      FUN_18029e350(&local_170,lVar2,fVar17,uVar6);
      fVar14 = (*local_178 + local_178[2]) * fVar14 - local_170._0_4_ * fVar14;
      fVar18 = local_178[3] + fVar5 + fVar18;
      local_1a8 = CONCAT44(fVar18,fVar14);
      local_178 = (float *)CONCAT44(fVar18 + fVar4,fVar14 + fVar4);
      if (((uVar3 & 0xff000000) != 0) && (local_108[0] != '\0')) {
        fVar14 = fVar17;
        if (fVar17 == 0.0) {
          fVar14 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
        }
        local_168._0_4_ = *(undefined4 *)(param_1 + 0x60);
        local_168._4_4_ = *(undefined4 *)(param_1 + 100);
        uStack_160 = *(undefined4 *)(param_1 + 0x68);
        uStack_15c = *(undefined4 *)(param_1 + 0x6c);
        local_1d0 = 0;
        local_1d8 = local_1d8 & 0xffffffff00000000;
        local_1e0 = 0;
        local_1e8 = (char ***)local_108;
        local_1f0 = (char ***)&local_168;
        local_1f8 = uVar3;
        FUN_18029e990(lVar2,param_1,fVar14,&local_178);
      }
      local_198 = 0x3f4ccccd;
      uStack_194 = 0x3f4ccccd;
      uStack_190 = 0x3f4ccccd;
      fStack_18c = param_4;
      local_1f8 = FUN_180268ed0(&local_198);
      if (((local_1f8 & 0xff000000) != 0) && (local_108[0] != '\0')) {
        if (fVar17 == 0.0) {
          fVar17 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
        }
        local_168._0_4_ = *(undefined4 *)(param_1 + 0x60);
        local_168._4_4_ = *(undefined4 *)(param_1 + 100);
        uStack_160 = *(undefined4 *)(param_1 + 0x68);
        uStack_15c = *(undefined4 *)(param_1 + 0x6c);
        local_1d0 = 0;
        local_1d8 = local_1d8 & 0xffffffff00000000;
        local_1e0 = 0;
        local_1e8 = (char ***)local_108;
        local_1f0 = (char ***)&local_168;
        FUN_18029e990(lVar2,param_1,fVar17,&local_1a8);
      }
    }
  }
  return;
}


)B180127ff0",
    "cb8fec3e7cecd612811d4d20b09b4d41a7f5fae6b9150d3dca29572267443fe6",
    R"F180127ff0C(FUN_180012ac0
FUN_1800213a0
FUN_18020e450
FUN_180268ed0
FUN_18029e350
FUN_18029e990)F180127ff0C",
    R"F180127ff0D(DAT_180358504
DAT_180380ac0
DAT_180380b4c
DAT_180380b6c
DAT_180380bb0
DAT_180380d30
DAT_180380e28
DAT_180381278
DAT_180381308
DAT_1803da4c0)F180127ff0D",
    R"F180127ff0T("%.1fkm")F180127ff0T",
    R"F180127ff0F(76: if (*(char *)(lVar1 + 0x10) == '\0') {
80: if (lVar2 != 0) {
81: if (*(char *)(lVar1 + 0x10) == '\0') {
99: if (*(char *)((longlong)param_3 + 0x23) != '\0') {
100: if ((param_6 == (char ****)0x0) && (param_6 = param_3, (char ***)0xf < param_3[3])) {
114: if ((((uVar10 & 0xff000000) != 0) && (param_6 != (char ****)0x0)) &&
117: if (fVar17 == 0.0) {
132: if ((((uVar11 & 0xff000000) != 0) && (param_6 != (char ****)0x0)) &&
135: if (fVar17 == 0.0) {
156: if (0 < param_7) {
158: do {
171: if (cVar9 != '\0') {
172: if (local_138 != '\0') {
180: if (0xf < uStack_140) {
194: if ((((uVar10 & 0xff000000) != 0) && (ppppcVar12 != (char ****)0x0)) &&
197: if (fVar17 == 0.0) {
212: if ((((uVar11 & 0xff000000) != 0) && (ppppcVar12 != (char ****)0x0)) &&
215: if (fVar17 == 0.0) {
239: if (*(char *)((longlong)param_3 + 0x25) != '\0') {
240: if (DAT_180381278 <= param_5) {
243: else {
257: if (((uVar3 & 0xff000000) != 0) && (local_108[0] != '\0')) {
259: if (fVar17 == 0.0) {
279: if (((local_1f8 & 0xff000000) != 0) && (local_108[0] != '\0')) {
280: if (fVar17 == 0.0) {
296: return;)F180127ff0F",
    R"F180127ff0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180358504.
TODO: recover the declaration, type and value for global/data reference DAT_180380ac0.
TODO: recover the declaration, type and value for global/data reference DAT_180380b4c.
TODO: recover the declaration, type and value for global/data reference DAT_180380b6c.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_180380d30.
TODO: recover the declaration, type and value for global/data reference DAT_180380e28.
TODO: recover the declaration, type and value for global/data reference DAT_180381278.
TODO: recover the declaration, type and value for global/data reference DAT_180381308.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180127ff0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180127ff0() noexcept {
    return kFunction_0x180127ff0;
}

// 0x180128770 FUN_180128770
// source: re/dump/decompile/0x180128770_FUN_180128770.c
// size: 868 bytes; thunk: false
// body sha256: 432a7eba4fef806f587be730e6b0ed33095bf21f55a7c4657ff412726fec82d6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180128770{
    "0x180128770",
    "FUN_180128770",
    R"F180128770S(undefined FUN_180128770())F180128770S",
    R"B180128770(// 0x180128770  FUN_180128770
// size=868 thunk=false
// signature: undefined FUN_180128770()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180128770(longlong param_1,float *param_2,int param_3,int param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_e8;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  float local_cc;
  float local_c8 [6];
  float local_b0;
  
  fVar3 = DAT_180380bb0;
  if (0 < param_4) {
    fVar1 = param_2[3];
    fVar13 = *param_2 - DAT_180380e28;
    fVar2 = param_2[1];
    fVar14 = (*param_2 - DAT_180380e9c) - DAT_180380e9c;
    fVar12 = fVar1 - DAT_180380bb0;
    local_c8[2] = 1.0;
    local_c8[0] = 0.0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8[1] = (float)param_3 / (float)param_4;
    local_e8 = CONCAT44(fVar2,fVar14);
    local_b0 = fVar13 - DAT_180380bb0;
    local_cc = param_5 * DAT_180380b10;
    pfVar8 = local_c8;
    if (0.0 <= local_c8[1]) {
      pfVar8 = local_c8 + 1;
    }
    pfVar7 = local_c8 + 2;
    if (local_c8[1] <= DAT_180380bb0) {
      pfVar7 = pfVar8;
    }
    fVar11 = *pfVar7;
    local_e0 = fVar13;
    local_dc = fVar1;
    uVar5 = FUN_180268ed0(&local_d8);
    uVar4 = DAT_180380d30;
    FUN_180295000(param_1,&local_e8,&local_e0,uVar5,DAT_180380d30,0);
    local_cc = param_5;
    local_d0 = 0;
    local_d8 = CONCAT44(fVar11,fVar3 - fVar11);
    fVar11 = (fVar12 - (fVar2 + fVar3)) * fVar11;
    local_e8 = CONCAT44(fVar12 - fVar11,fVar14 + fVar3);
    local_e0 = local_b0;
    if (0.0 < fVar11) {
      local_dc = fVar12;
      uVar5 = FUN_180268ed0(&local_d8);
      FUN_180295000(param_1,&local_e8,&local_e0,uVar5,fVar3,0);
    }
    local_dc = param_5 * _DAT_180380b48;
    local_e8 = 0;
    local_e0 = 0.0;
    uVar6 = FUN_180268ed0(&local_e8);
    if ((uVar6 & 0xff000000) != 0) {
      if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
        puVar10 = &local_e8;
        local_d8 = CONCAT44(fVar2 + DAT_180380ac0,fVar14 + DAT_180380ac0);
        puVar9 = &local_d8;
        local_e8 = CONCAT44(fVar1 - _DAT_180380abc,fVar13 - _DAT_180380abc);
      }
      else {
        local_e8 = CONCAT44(fVar2 + DAT_180380ac0,fVar14 + DAT_180380ac0);
        puVar10 = &local_d8;
        puVar9 = &local_e8;
        local_d8 = CONCAT44(fVar1 - DAT_180380ac0,fVar13 - DAT_180380ac0);
      }
      FUN_180294990(param_1,puVar9,puVar10,uVar4,0);
      FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),uVar6,
                    fVar3,0x200);
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
  return;
}


)B180128770",
    "432a7eba4fef806f587be730e6b0ed33095bf21f55a7c4657ff412726fec82d6",
    R"F180128770C(FUN_180268ed0
FUN_1802929d0
FUN_180294990
FUN_180295000)F180128770C",
    R"F180128770D(DAT_180380ac0
DAT_180380b10
DAT_180380bb0
DAT_180380d30
DAT_180380e28
DAT_180380e9c)F180128770D",
    R"F180128770T()F180128770T",
    R"F180128770F(36: if (0 < param_4) {
51: if (0.0 <= local_c8[1]) {
55: if (local_c8[1] <= DAT_180380bb0) {
70: if (0.0 < fVar11) {
79: if ((uVar6 & 0xff000000) != 0) {
80: if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
86: else {
98: return;)F180128770F",
    R"F180128770U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380ac0.
TODO: recover the declaration, type and value for global/data reference DAT_180380b10.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_180380d30.
TODO: recover the declaration, type and value for global/data reference DAT_180380e28.
TODO: recover the declaration, type and value for global/data reference DAT_180380e9c.)F180128770U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180128770() noexcept {
    return kFunction_0x180128770;
}

// 0x180128ae0 FUN_180128ae0
// source: re/dump/decompile/0x180128ae0_FUN_180128ae0.c
// size: 144 bytes; thunk: false
// body sha256: 843ea3d17c4b915ed3eef3af6ac6a99183298d2a0a2f575e6e7ace2d4cdb3d58
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180128ae0{
    "0x180128ae0",
    "FUN_180128ae0",
    R"F180128ae0S(undefined FUN_180128ae0())F180128ae0S",
    R"B180128ae0(// 0x180128ae0  FUN_180128ae0
// size=144 thunk=false
// signature: undefined FUN_180128ae0()
// status: ok


ulonglong FUN_180128ae0(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  char cVar4;
  char cVar5;
  
  uVar2 = 0;
  if (param_1[2] != 0) {
    do {
      cVar1 = *(char *)(param_2 + uVar2);
      if (cVar1 == '\0') {
LAB_180128b63:
        return uVar2 & 0xffffffffffffff00;
      }
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar3 = (undefined8 *)*param_1;
      }
      cVar4 = *(char *)((longlong)puVar3 + uVar2);
      cVar5 = cVar4 + ' ';
      if (0x19 < (byte)(cVar4 + 0xbfU)) {
        cVar5 = cVar4;
      }
      cVar4 = cVar1 + ' ';
      if (0x19 < (byte)(cVar1 + 0xbfU)) {
        cVar4 = cVar1;
      }
      if (cVar5 != cVar4) goto LAB_180128b63;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong)param_1[2]);
  }
  return CONCAT71((int7)(uVar2 >> 8),*(char *)(uVar2 + param_2) == '\0');
}


)B180128ae0",
    "843ea3d17c4b915ed3eef3af6ac6a99183298d2a0a2f575e6e7ace2d4cdb3d58",
    R"F180128ae0C()F180128ae0C",
    R"F180128ae0D(LAB_180128b63)F180128ae0D",
    R"F180128ae0T()F180128ae0T",
    R"F180128ae0F(17: if (param_1[2] != 0) {
18: do {
20: if (cVar1 == '\0') {
21: LAB_180128b63:
22: return uVar2 & 0xffffffffffffff00;
25: if (0xf < (ulonglong)param_1[3]) {
30: if (0x19 < (byte)(cVar4 + 0xbfU)) {
34: if (0x19 < (byte)(cVar1 + 0xbfU)) {
37: if (cVar5 != cVar4) goto LAB_180128b63;
41: return CONCAT71((int7)(uVar2 >> 8),*(char *)(uVar2 + param_2) == '\0');)F180128ae0F",
    R"F180128ae0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180128b63.)F180128ae0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180128ae0() noexcept {
    return kFunction_0x180128ae0;
}

// 0x180128b70 FUN_180128b70
// source: re/dump/decompile/0x180128b70_FUN_180128b70.c
// size: 699 bytes; thunk: false
// body sha256: 93ece3e6a35a2517b7ede64d2a8e51c288b97cc1e8f996a4469919dc1fa970cf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180128b70{
    "0x180128b70",
    "FUN_180128b70",
    R"F180128b70S(undefined FUN_180128b70())F180128b70S",
    R"B180128b70(// 0x180128b70  FUN_180128b70
// size=699 thunk=false
// signature: undefined FUN_180128b70()
// status: ok


ulonglong FUN_180128b70(char *param_1,char *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  ulonglong uVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  if (((uVar6 == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) goto LAB_180128e12;
  pcVar5 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar5 = *(char **)param_1;
  }
  if (((uVar6 == 0) ||
      (pcVar3 = (char *)thunk_FUN_1802d5c20(pcVar5,pcVar5 + uVar6,0x2a), pcVar3 == pcVar5 + uVar6))
     || ((longlong)pcVar3 - (longlong)pcVar5 == -1)) {
    uVar6 = FUN_180128ae0(param_1,param_2);
    return uVar6;
  }
  sVar4 = strlen(param_2);
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  if (uVar1 < 0x10) {
    cVar8 = *param_1;
    pcVar5 = param_1;
  }
  else {
    cVar8 = **(char **)param_1;
    pcVar5 = *(char **)param_1;
  }
  uVar13 = *(ulonglong *)(param_1 + 0x10);
  uVar6 = 0;
  uVar11 = uVar13 - 1;
  if (cVar8 == '*') {
    if (pcVar5[uVar13 - 1] != '*') {
      if (sVar4 < uVar11) goto LAB_180128e12;
      if (uVar11 != 0) {
        uVar13 = 0;
        do {
          bVar10 = param_2[uVar13 + (sVar4 - uVar11)];
          if (bVar10 == 0) goto LAB_180128e12;
          bVar9 = bVar10 + 0x20;
          if (0x19 < (byte)(bVar10 + 0xbf)) {
            bVar9 = bVar10;
          }
          pcVar5 = param_1;
          if (0xf < uVar1) {
            pcVar5 = *(char **)param_1;
          }
          bVar10 = pcVar5[uVar13 + 1];
          uVar6 = (ulonglong)(bVar10 + 0x20);
          bVar7 = (byte)(bVar10 + 0x20);
          if (0x19 < (byte)(bVar10 + 0xbf)) {
            bVar7 = bVar10;
          }
          if (bVar9 != bVar7) goto LAB_180128e12;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar11);
      }
      goto LAB_180128d35;
    }
    if (2 < uVar13) {
      uVar13 = uVar13 - 2;
      if (uVar13 <= sVar4) {
        uVar12 = 0;
        uVar11 = uVar12;
        pcVar5 = param_2;
        uVar14 = uVar12;
        if (uVar13 != 0) {
          do {
            while (bVar10 = pcVar5[uVar11], bVar10 != 0) {
              bVar9 = bVar10 + 0x20;
              if (0x19 < (byte)(bVar10 + 0xbf)) {
                bVar9 = bVar10;
              }
              pcVar3 = param_1;
              if (0xf < uVar1) {
                pcVar3 = *(char **)param_1;
              }
              bVar10 = pcVar3[uVar11 + 1];
              bVar7 = (byte)(bVar10 + 0x20);
              if (0x19 < (byte)(bVar10 + 0xbf)) {
                bVar7 = bVar10;
              }
              if (bVar9 != bVar7) break;
              uVar11 = uVar11 + 1;
              if (uVar13 <= uVar11) {
                return CONCAT71((uint7)(uint3)(bVar10 + 0x20 >> 8),1);
              }
            }
            uVar14 = uVar14 + 1;
            uVar6 = uVar14 + uVar13;
            if (sVar4 < uVar6) goto LAB_180128e12;
            pcVar5 = param_2 + uVar14;
            uVar11 = uVar12;
          } while( true );
        }
        goto LAB_180128d35;
      }
      goto LAB_180128e12;
    }
  }
  else if (pcVar5[uVar13 - 1] != '*') {
    uVar11 = 0;
    if (uVar13 != 0) {
      do {
        bVar10 = param_2[uVar11];
        if (bVar10 == 0) goto LAB_180128e12;
        pcVar5 = param_1;
        if (0xf < uVar1) {
          pcVar5 = *(char **)param_1;
        }
        bVar9 = pcVar5[uVar11];
        uVar6 = (ulonglong)(bVar10 - 0x41);
        bVar7 = bVar9 + 0x20;
        if (0x19 < (byte)(bVar9 + 0xbf)) {
          bVar7 = bVar9;
        }
        if ((byte)(bVar10 - 0x41) < 0x1a) {
          bVar10 = bVar10 + 0x20;
        }
        if (bVar7 != bVar10) goto LAB_180128e12;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar13);
    }
    return CONCAT71((int7)(uVar6 >> 8),param_2[uVar11] == '\0');
  }
  if (uVar11 <= sVar4) {
    uVar13 = 0;
    if (uVar11 == 0) {
LAB_180128d35:
      return CONCAT71((int7)(uVar6 >> 8),1);
    }
    while (bVar10 = param_2[uVar13], bVar10 != 0) {
      bVar9 = bVar10 + 0x20;
      if (0x19 < (byte)(bVar10 + 0xbf)) {
        bVar9 = bVar10;
      }
      pcVar5 = param_1;
      if (0xf < uVar1) {
        pcVar5 = *(char **)param_1;
      }
      bVar10 = pcVar5[uVar13];
      uVar2 = bVar10 + 0x20;
      uVar6 = (ulonglong)uVar2;
      bVar7 = (byte)uVar2;
      if (0x19 < (byte)(bVar10 + 0xbf)) {
        bVar7 = bVar10;
      }
      if (bVar9 != bVar7) break;
      uVar13 = uVar13 + 1;
      if (uVar11 <= uVar13) {
        return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
      }
    }
  }
LAB_180128e12:
  return uVar6 & 0xffffffffffffff00;
}


)B180128b70",
    "93ece3e6a35a2517b7ede64d2a8e51c288b97cc1e8f996a4469919dc1fa970cf",
    R"F180128b70C(FUN_180128ae0)F180128b70C",
    R"F180128b70D(LAB_180128d35
LAB_180128e12)F180128b70D",
    R"F180128b70T()F180128b70T",
    R"F180128b70F(26: if (((uVar6 == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) goto LAB_180128e12;
28: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
31: if (((uVar6 == 0) ||
35: return uVar6;
39: if (uVar1 < 0x10) {
43: else {
50: if (cVar8 == '*') {
51: if (pcVar5[uVar13 - 1] != '*') {
52: if (sVar4 < uVar11) goto LAB_180128e12;
53: if (uVar11 != 0) {
55: do {
57: if (bVar10 == 0) goto LAB_180128e12;
59: if (0x19 < (byte)(bVar10 + 0xbf)) {
63: if (0xf < uVar1) {
69: if (0x19 < (byte)(bVar10 + 0xbf)) {
72: if (bVar9 != bVar7) goto LAB_180128e12;
76: goto LAB_180128d35;
78: if (2 < uVar13) {
80: if (uVar13 <= sVar4) {
85: if (uVar13 != 0) {
86: do {
87: while (bVar10 = pcVar5[uVar11], bVar10 != 0) {
89: if (0x19 < (byte)(bVar10 + 0xbf)) {
93: if (0xf < uVar1) {
98: if (0x19 < (byte)(bVar10 + 0xbf)) {
101: if (bVar9 != bVar7) break;
103: if (uVar13 <= uVar11) {
104: return CONCAT71((uint7)(uint3)(bVar10 + 0x20 >> 8),1);
109: if (sVar4 < uVar6) goto LAB_180128e12;
114: goto LAB_180128d35;
116: goto LAB_180128e12;
119: else if (pcVar5[uVar13 - 1] != '*') {
121: if (uVar13 != 0) {
122: do {
124: if (bVar10 == 0) goto LAB_180128e12;
126: if (0xf < uVar1) {
132: if (0x19 < (byte)(bVar9 + 0xbf)) {
135: if ((byte)(bVar10 - 0x41) < 0x1a) {
138: if (bVar7 != bVar10) goto LAB_180128e12;
142: return CONCAT71((int7)(uVar6 >> 8),param_2[uVar11] == '\0');
144: if (uVar11 <= sVar4) {
146: if (uVar11 == 0) {
147: LAB_180128d35:
148: return CONCAT71((int7)(uVar6 >> 8),1);
150: while (bVar10 = param_2[uVar13], bVar10 != 0) {
152: if (0x19 < (byte)(bVar10 + 0xbf)) {
156: if (0xf < uVar1) {
163: if (0x19 < (byte)(bVar10 + 0xbf)) {
166: if (bVar9 != bVar7) break;
168: if (uVar11 <= uVar13) {
169: return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
173: LAB_180128e12:
174: return uVar6 & 0xffffffffffffff00;)F180128b70F",
    R"F180128b70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180128d35.
TODO: recover the declaration, type and value for global/data reference LAB_180128e12.)F180128b70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180128b70() noexcept {
    return kFunction_0x180128b70;
}

// 0x180128e30 Features_EntityChams_EntityChamsFeature_vfunc15
// source: re/dump/decompile/0x180128e30_Features_EntityChams_EntityChamsFeature_vfunc15.c
// size: 1218 bytes; thunk: false
// body sha256: 3e54947209a98144904e39e2d8f1e3db81522e8612b7302b3cd31430a0513166
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180128e30{
    "0x180128e30",
    "Features_EntityChams_EntityChamsFeature_vfunc15",
    R"F180128e30S(undefined Features_EntityChams_EntityChamsFeature_vfunc15())F180128e30S",
    R"B180128e30(// 0x180128e30  Features_EntityChams_EntityChamsFeature_vfunc15
// size=1218 thunk=false
// signature: undefined Features_EntityChams_EntityChamsFeature_vfunc15()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_EntityChams_EntityChamsFeature_vfunc15(void)

{
  float fVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  BOOL BVar6;
  undefined4 uVar7;
  longlong *plVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
  int *piVar17;
  int *piVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong in_R9;
  undefined8 *puVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  int local_80 [2];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  longlong *local_58;
  undefined8 local_50;
  float local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  if ((((((((DAT_1804236a5 == '\0') && (DAT_1803fa608 != 0)) && (DAT_1803fa360 != (longlong *)0x0))
         && ((*(longlong *)(in_R9 + 0x18) != 0 && (DAT_1803eb378 != DAT_1803eb380)))) &&
        (0 < *(int *)(in_R9 + 0x44))) &&
       (((*(int *)(DAT_1803fa608 + 0x1c) < *(int *)(in_R9 + 0x44) &&
         (iVar5 = FUN_180071b00(), iVar5 < 1)) &&
        ((cVar4 = FUN_180121200(in_R9), cVar4 == '\0' &&
         (((plVar8 = (longlong *)
                     (**(code **)(*DAT_1803fa360 + 0x18))
                               (DAT_1803fa360,*(undefined4 *)(in_R9 + 0x44)),
           plVar8 != (longlong *)0x0 &&
           (local_58 = plVar8, BVar6 = IsBadReadPtr(plVar8,8), BVar6 == 0)) &&
          (BVar6 = IsBadReadPtr((void *)*plVar8,8), BVar6 == 0)))))))) &&
      (((pcVar9 = (char *)FUN_18001e410(plVar8), (char *)0x10000 < pcVar9 && (*pcVar9 != '\0')) ||
       ((lVar10 = (**(code **)(*plVar8 + 0x78))(plVar8), lVar10 != 0 &&
        (pcVar9 = *(char **)(lVar10 + 0x10), (char *)0x10000 < pcVar9)))))) &&
     (puVar3 = DAT_1803eb380, *pcVar9 != '\0')) {
    puVar21 = (undefined8 *)0x0;
    for (puVar20 = DAT_1803eb378; puVar19 = puVar21, puVar20 != puVar3; puVar20 = puVar20 + 0xe) {
      if ((*(char *)(puVar20 + 4) != '\0') && (*(char *)((longlong)puVar20 + 0x3c) != '\0')) {
        puVar19 = puVar20;
        if (0xf < (ulonglong)puVar20[3]) {
          puVar19 = (undefined8 *)*puVar20;
        }
        if (((puVar20[2] == 0) ||
            (lVar10 = puVar20[2] + (longlong)puVar19,
            lVar11 = thunk_FUN_1802d5c20(puVar19,lVar10,0x2a), lVar11 == lVar10)) ||
           (lVar11 - (longlong)puVar19 == -1)) {
          cVar4 = FUN_180128ae0(puVar20,pcVar9);
          puVar19 = puVar20;
          if (cVar4 != '\0') break;
        }
        else if ((puVar21 == (undefined8 *)0x0) &&
                (cVar4 = FUN_180128b70(puVar20,pcVar9), cVar4 != '\0')) {
          puVar21 = puVar20;
        }
      }
    }
    if (puVar19 != (undefined8 *)0x0) {
      pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
      local_88 = puVar19;
      uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
      plVar12 = (longlong *)(*pcVar2)(DAT_1803fa360,uVar7);
      if (plVar12 != (longlong *)0x0) {
        local_50 = plVar12;
        plVar13 = (longlong *)FUN_18001dbf0(plVar12);
        if ((plVar13 != (longlong *)0x0) && (plVar13 == plVar8)) {
          return;
        }
        cVar4 = FUN_18001de40(plVar8);
        if (cVar4 != '\0') {
          return;
        }
        plVar13 = (longlong *)FUN_18001dd10(plVar8);
        if ((plVar13 != (longlong *)0x0) && (plVar13 == plVar12)) {
          return;
        }
        local_50 = (longlong *)0x93fd561a96ab0c67;
        local_58 = (longlong *)0xdaefe600c147795;
        plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_50);
        plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,local_68,&local_58);
        pfVar14 = (float *)FUN_180202dc0(*plVar13 + 0x28);
        fVar1 = *pfVar14;
        if (0.0 < fVar1) {
          pfVar14 = (float *)(**(code **)(*plVar12 + 0x48))(plVar12);
          pfVar15 = (float *)(**(code **)(*plVar8 + 0x48))(plVar8);
          fVar23 = *pfVar14 - *pfVar15;
          fVar22 = pfVar14[1] - pfVar15[1];
          local_50 = (longlong *)CONCAT44(fVar22,fVar23);
          local_48 = pfVar14[2] - pfVar15[2];
          fVar22 = (float)(*(code *)PTR_FUN_1803da018)
                                    (fVar22 * fVar22 + fVar23 * fVar23 + local_48 * local_48);
          if (fVar1 < fVar22) {
            return;
          }
        }
      }
      local_50 = (longlong *)0x93fd561a96ab0c67;
      local_58 = (longlong *)0x279c57cf06166f3d;
      plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_68,&local_50);
      plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,local_78,&local_58);
      puVar16 = (undefined4 *)FUN_1802029c0(*plVar8 + 0x28);
      lVar10 = FUN_1801070a0(*puVar16);
      if ((lVar10 != 0) || (lVar10 = FUN_1801073d0(), lVar10 != 0)) {
        local_80[1] = 1;
        local_80[0] = 0;
        iVar5 = *(int *)(puVar19 + 8);
        piVar18 = local_80;
        if (-1 < iVar5) {
          piVar18 = (int *)(puVar19 + 8);
        }
        piVar17 = local_80 + 1;
        if (iVar5 < 2) {
          piVar17 = piVar18;
        }
        lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*piVar17 == 1) {
          *(undefined1 *)(lVar11 + 0xf6d) = 1;
          *(undefined4 *)(lVar11 + 0xf60) = *(undefined4 *)((longlong)puVar19 + 0x44);
          *(undefined4 *)(lVar11 + 0xf64) = *(undefined4 *)(puVar19 + 9);
          *(undefined4 *)(lVar11 + 0xf68) = *(undefined4 *)((longlong)puVar19 + 0x4c);
          *(undefined4 *)(lVar11 + 0xf50) = *(undefined4 *)((longlong)puVar19 + 0x54);
          *(undefined4 *)(lVar11 + 0xf54) = *(undefined4 *)(puVar19 + 0xb);
          *(undefined4 *)(lVar11 + 0xf58) = *(undefined4 *)((longlong)puVar19 + 0x5c);
          *(undefined1 *)(lVar11 + 0xf6c) = *(undefined1 *)((longlong)puVar19 + 100);
          *(undefined4 *)(lVar11 + 0xf4c) = *(undefined4 *)(puVar19 + 0xd);
        }
        else {
          *(undefined1 *)(lVar11 + 0xf48) = 1;
          *(undefined4 *)(lVar11 + 0xf0c) = 0;
          *(longlong *)(lVar11 + 0xf40) = lVar10;
          *(longlong *)(lVar11 + 0xf28) = lVar10;
          *(undefined4 *)(lVar11 + 0xf10) = 0x3f800000;
          *(undefined4 *)(lVar11 + 0xf30) = *(undefined4 *)((longlong)puVar19 + 0x44);
          *(undefined4 *)(lVar11 + 0xf34) = *(undefined4 *)(puVar19 + 9);
          *(undefined4 *)(lVar11 + 0xf38) = *(undefined4 *)((longlong)puVar19 + 0x4c);
          *(undefined4 *)(lVar11 + 0xf18) = *(undefined4 *)((longlong)puVar19 + 0x54);
          *(undefined4 *)(lVar11 + 0xf1c) = *(undefined4 *)(puVar19 + 0xb);
          *(undefined4 *)(lVar11 + 0xf20) = *(undefined4 *)((longlong)puVar19 + 0x5c);
        }
      }
    }
  }
  return;
}


)B180128e30",
    "3e54947209a98144904e39e2d8f1e3db81522e8612b7302b3cd31430a0513166",
    R"F180128e30C(FUN_18001dbf0
FUN_18001dd10
FUN_18001de40
FUN_18001e410
FUN_180071b00
FUN_1801070a0
FUN_1801073d0
FUN_180121200
FUN_180128ae0
FUN_180128b70
FUN_1802029c0
FUN_180202dc0
FUN_180241a30)F180128e30C",
    R"F180128e30D(DAT_1803da4c0
DAT_1803eb378
DAT_1803eb380
DAT_1803fa360
DAT_1803fa608
DAT_1803fa668
DAT_1803fadf0
DAT_1804236a5)F180128e30D",
    R"F180128e30T()F180128e30T",
    R"F180128e30F(47: if ((((((((DAT_1804236a5 == '\0') && (DAT_1803fa608 != 0)) && (DAT_1803fa360 != (longlong *)0x0))
64: for (puVar20 = DAT_1803eb378; puVar19 = puVar21, puVar20 != puVar3; puVar20 = puVar20 + 0xe) {
65: if ((*(char *)(puVar20 + 4) != '\0') && (*(char *)((longlong)puVar20 + 0x3c) != '\0')) {
67: if (0xf < (ulonglong)puVar20[3]) {
70: if (((puVar20[2] == 0) ||
76: if (cVar4 != '\0') break;
78: else if ((puVar21 == (undefined8 *)0x0) &&
84: if (puVar19 != (undefined8 *)0x0) {
89: if (plVar12 != (longlong *)0x0) {
92: if ((plVar13 != (longlong *)0x0) && (plVar13 == plVar8)) {
93: return;
96: if (cVar4 != '\0') {
97: return;
100: if ((plVar13 != (longlong *)0x0) && (plVar13 == plVar12)) {
101: return;
109: if (0.0 < fVar1) {
118: if (fVar1 < fVar22) {
119: return;
129: if ((lVar10 != 0) || (lVar10 = FUN_1801073d0(), lVar10 != 0)) {
134: if (-1 < iVar5) {
138: if (iVar5 < 2) {
142: if (*piVar17 == 1) {
153: else {
169: return;)F180128e30F",
    R"F180128e30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb378.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb380.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1804236a5.
TODO: resolve the indirect call in body 54: (**(code **)(*DAT_1803fa360 + 0x18)).
TODO: resolve the indirect call in body 60: ((lVar10 = (**(code **)(*plVar8 + 0x78))(plVar8), lVar10 != 0 &&.
TODO: resolve the indirect call in body 85: pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 87: uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 88: plVar12 = (longlong *)(*pcVar2)(DAT_1803fa360,uVar7);.
TODO: resolve the indirect call in body 110: pfVar14 = (float *)(**(code **)(*plVar12 + 0x48))(plVar12);.
TODO: resolve the indirect call in body 111: pfVar15 = (float *)(**(code **)(*plVar8 + 0x48))(plVar8);.
TODO: resolve the indirect call in body 116: fVar22 = (float)(*(code *)PTR_FUN_1803da018).)F180128e30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180128e30() noexcept {
    return kFunction_0x180128e30;
}

// 0x180129320 FUN_180129320
// source: re/dump/decompile/0x180129320_FUN_180129320.c
// size: 1191 bytes; thunk: false
// body sha256: 5f022654ddb53a595a0de96ded4bbc0d62811f2e8110e9e2e92018e0aa836c93
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180129320{
    "0x180129320",
    "FUN_180129320",
    R"F180129320S(undefined FUN_180129320())F180129320S",
    R"B180129320(// 0x180129320  FUN_180129320
// size=1191 thunk=false
// signature: undefined FUN_180129320()
// status: ok


undefined8 FUN_180129320(void)

{
  int iVar1;
  HMODULE pHVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (DAT_1804015a4 == 1) {
    return 1;
  }
  if ((DAT_1804015a4 != -1) && (pHVar2 = GetModuleHandleA("client.dll"), pHVar2 != (HMODULE)0x0)) {
    local_e0 = 0;
    uStack_d8 = 0;
    uVar10 = 0;
    local_d0 = 0;
    local_c8 = 0;
    FUN_18001d080(&local_e0,"09 91 ? ? ? ? F6 C2 20 0F 85 ? ? ? ? C3",0x27);
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    FUN_18001d080(&local_100,"client.dll",10);
    lVar3 = FUN_180015f40(&local_100,&local_e0);
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 0;
    FUN_18001d080(&local_60,"40 53 48 83 EC 20 48 8B 41 08 48 8B D9 48 83 C1 08 FF 50 18 84 C0",0x41
                 );
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    FUN_18001d080(&local_c0,"client.dll",10);
    uVar4 = FUN_180015f40(&local_c0,&local_60);
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    FUN_18001d080(&local_a0,"09 91 ? ? ? ? F6 C2 20 0F 85 ? ? ? ? C3",0x27);
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    FUN_18001d080(&local_c0,"client.dll",10);
    lVar5 = FUN_1800160e0(&local_c0,&local_a0);
    FUN_18020e450(&local_c0);
    FUN_18020e450(&local_a0);
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_18001d080(&local_80,"40 53 48 83 EC 20 48 8B 41 08 48 8B D9 48 83 C1 08 FF 50 18 84 C0",0x41
                 );
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    FUN_18001d080(&local_a0,"client.dll",10);
    lVar6 = FUN_1800160e0(&local_a0,&local_80);
    FUN_18020e450(&local_a0);
    FUN_18020e450(&local_80);
    iVar12 = 0;
    if (lVar3 != 0) {
      uVar11 = uVar10;
      if (lVar5 == 1) {
        uVar11 = (ulonglong)*(uint *)(lVar3 + 2);
        uVar10 = (longlong)*(int *)(lVar3 + 0xb) + 0xf + lVar3;
      }
      iVar12 = (int)uVar11;
      if ((((uVar4 != 0) && (lVar5 == 1)) && (lVar6 == 1)) &&
         ((iVar12 - 1U < 0x3fff && (uVar10 == uVar4)))) {
        DAT_1804015a4 = 1;
        local_100 = 0;
        uStack_f8 = 0;
        local_f0 = 0;
        local_e8 = 0;
        DAT_1804015ac = iVar12;
        DAT_1804015b0 = uVar4;
        FUN_18001d080(&local_100,"DT_BaseEntity",0xd);
        uVar7 = FUN_18016d4c0(&local_80,&local_100);
        uVar7 = FUN_180018ef0(&DAT_1803fac80,uVar7);
        FUN_18020e450(&local_100);
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        FUN_18001d080(&local_e0,"m_fEffects",10);
        uVar8 = FUN_18016d4c0(&local_80,&local_e0);
        iVar1 = FUN_180018c10(uVar7,uVar8);
        FUN_18020e450(&local_e0);
        if ((iVar1 == 0) || (pcVar9 = " MISMATCH", iVar1 == iVar12)) {
          pcVar9 = "";
        }
        FUN_180014410("[FORCEDRAW] UpdateVisibility=%p m_fEffects=+0x%X (netvar says +0x%X)%s\n",
                      uVar4,uVar11,iVar1,pcVar9);
        return 1;
      }
    }
    DAT_1804015a4 = -1;
    FUN_180014410(&DAT_180358590,lVar3,lVar5,uVar4,lVar6,iVar12,uVar10);
  }
  return 0;
}


)B180129320",
    "5f022654ddb53a595a0de96ded4bbc0d62811f2e8110e9e2e92018e0aa836c93",
    R"F180129320C(FUN_180014410
FUN_180015f40
FUN_1800160e0
FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F180129320C",
    R"F180129320D(DAT_180358590
DAT_1803fac80
DAT_1804015a4
DAT_1804015ac
DAT_1804015b0)F180129320D",
    R"F180129320T(""
" MISMATCH"
"client.dll"
"m_fEffects"
"DT_BaseEntity"
"09 91 ? ? ? ? F6 C2 20 0F 85 ? ? ? ? C3"
"40 53 48 83 EC 20 48 8B 41 08 48 8B D9 48 83 C1 08 FF 50 18 84 C0"
"[FORCEDRAW] UpdateVisibility=%p m_fEffects=+0x%X (netvar says +0x%X)%s\\n")F180129320T",
    R"F180129320F(47: if (DAT_1804015a4 == 1) {
48: return 1;
50: if ((DAT_1804015a4 != -1) && (pHVar2 = GetModuleHandleA("client.dll"), pHVar2 != (HMODULE)0x0)) {
103: if (lVar3 != 0) {
105: if (lVar5 == 1) {
110: if ((((uVar4 != 0) && (lVar5 == 1)) && (lVar6 == 1)) &&
131: if ((iVar1 == 0) || (pcVar9 = " MISMATCH", iVar1 == iVar12)) {
136: return 1;
142: return 0;)F180129320F",
    R"F180129320U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180358590.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.
TODO: recover the declaration, type and value for global/data reference DAT_1804015a4.
TODO: recover the declaration, type and value for global/data reference DAT_1804015ac.
TODO: recover the declaration, type and value for global/data reference DAT_1804015b0.)F180129320U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180129320() noexcept {
    return kFunction_0x180129320;
}

// 0x1801297e0 FUN_1801297e0
// source: re/dump/decompile/0x1801297e0_FUN_1801297e0.c
// size: 43 bytes; thunk: false
// body sha256: a0ad6dc1532d64a8d56275ebf467e5daef809a89bb965aeb8c68e4a6c79f0013
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801297e0{
    "0x1801297e0",
    "FUN_1801297e0",
    R"F1801297e0S(undefined FUN_1801297e0())F1801297e0S",
    R"B1801297e0(// 0x1801297e0  FUN_1801297e0
// size=43 thunk=false
// signature: undefined FUN_1801297e0()
// status: ok


undefined8 FUN_1801297e0(longlong param_1)

{
  uint uVar1;
  uint7 uVar3;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(DAT_1804015ac + param_1);
  if ((uVar1 & 0x20) == 0) {
    uVar3 = (uint7)(uint3)(uVar1 >> 8);
  }
  else {
    *(uint *)(DAT_1804015ac + param_1) = uVar1 & 0xffffffdf;
    uVar2 = (*DAT_1804015b0)();
    uVar3 = (uint7)((ulonglong)uVar2 >> 8);
  }
  return CONCAT71(uVar3,1);
}


)B1801297e0",
    "a0ad6dc1532d64a8d56275ebf467e5daef809a89bb965aeb8c68e4a6c79f0013",
    R"F1801297e0C()F1801297e0C",
    R"F1801297e0D(DAT_1804015ac
DAT_1804015b0)F1801297e0D",
    R"F1801297e0T()F1801297e0T",
    R"F1801297e0F(15: if ((uVar1 & 0x20) == 0) {
18: else {
23: return CONCAT71(uVar3,1);)F1801297e0F",
    R"F1801297e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1804015ac.
TODO: recover the declaration, type and value for global/data reference DAT_1804015b0.
TODO: resolve the indirect call in body 20: uVar2 = (*DAT_1804015b0)();.)F1801297e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801297e0() noexcept {
    return kFunction_0x1801297e0;
}

// 0x180129810 FUN_180129810
// source: re/dump/decompile/0x180129810_FUN_180129810.c
// size: 532 bytes; thunk: false
// body sha256: b14f1de639aa5588602cdce4f5939d4df7702f5b17bf18a79b3167f93817766b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180129810{
    "0x180129810",
    "FUN_180129810",
    R"F180129810S(undefined FUN_180129810())F180129810S",
    R"B180129810(// 0x180129810  FUN_180129810
// size=532 thunk=false
// signature: undefined FUN_180129810()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180129810(void)

{
  char cVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  char local_58;
  char local_57;
  int local_54;
  int local_50;
  longlong *local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  if (DAT_1804015a4 == -1) {
    return;
  }
  local_18 = 0x93fd561a96ab0c67;
  local_20 = 0x5391b64679e936ba;
  plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_18);
  plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_30,&local_20);
  pcVar3 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
  if (*pcVar3 == '\0') {
    return;
  }
  if (DAT_1803fa668 == (longlong *)0x0) {
    return;
  }
  if (DAT_1803fa360 == (longlong *)0x0) {
    return;
  }
  local_58 = 0;
  local_58 = (**(code **)(*DAT_1803fa668 + 0xd0))();
  if (local_58 == '\0') {
    return;
  }
  cVar1 = FUN_180129320();
  if (cVar1 == '\0') {
    return;
  }
  if ((DAT_1803fa608 != 0) && (iVar5 = *(int *)(DAT_1803fa608 + 0x1c), 0 < iVar5)) {
    local_18 = CONCAT44(local_18._4_4_,iVar5);
    if (iVar5 < 0x81) goto LAB_180129961;
  }
  local_54 = 0;
  if (DAT_1803fa668 != (longlong *)0x0) {
    local_54 = (**(code **)(*DAT_1803fa668 + 0xa8))();
  }
  iVar5 = 0x80;
  if (local_54 - 1U < 0x80) {
    iVar5 = local_54;
  }
  local_18 = CONCAT44(local_18._4_4_,iVar5);
LAB_180129961:
  local_50 = 0;
  local_50 = (**(code **)(*DAT_1803fa668 + 0x60))();
  iVar5 = 1;
  do {
    while( true ) {
      local_20 = CONCAT44(local_20._4_4_,iVar5);
      if ((int)local_18 < iVar5) {
        return;
      }
      if (iVar5 != local_50) break;
LAB_180129a3c:
      iVar5 = iVar5 + 1;
    }
    local_48 = (longlong *)0x0;
    plVar2 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar5);
    if (plVar2 == (longlong *)0x0) goto LAB_180129a3c;
    local_48 = plVar2;
    plVar4 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    if (plVar4 == (longlong *)0x0) {
      local_57 = '\x01';
    }
    else {
      local_57 = (**(code **)(*plVar4 + 0x40))(plVar4);
    }
    if (local_57 != '\0') goto LAB_180129a3c;
    cVar1 = FUN_1801297e0(plVar2);
    if (cVar1 == '\0') {
      DAT_1804015a8 = DAT_1804015a8 + 1;
      if (2 < DAT_1804015a8) {
        DAT_1804015a4 = 0xffffffff;
        FUN_180014410(&DAT_180358688);
        return;
      }
      goto LAB_180129a3c;
    }
    DAT_1804015a8 = 0;
    iVar5 = iVar5 + 1;
  } while( true );
}


)B180129810",
    "b14f1de639aa5588602cdce4f5939d4df7702f5b17bf18a79b3167f93817766b",
    R"F180129810C(FUN_180014410
FUN_180129320
FUN_1801297e0
FUN_1801fcfc0
FUN_180241a30)F180129810C",
    R"F180129810D(LAB_180129961
LAB_180129a3c
DAT_180358688
DAT_1803da4c0
DAT_1803fa360
DAT_1803fa608
DAT_1803fa668
DAT_1803fadf0
DAT_1804015a4
DAT_1804015a8)F180129810D",
    R"F180129810T()F180129810T",
    R"F180129810F(30: if (DAT_1804015a4 == -1) {
31: return;
38: if (*pcVar3 == '\0') {
39: return;
41: if (DAT_1803fa668 == (longlong *)0x0) {
42: return;
44: if (DAT_1803fa360 == (longlong *)0x0) {
45: return;
49: if (local_58 == '\0') {
50: return;
53: if (cVar1 == '\0') {
54: return;
56: if ((DAT_1803fa608 != 0) && (iVar5 = *(int *)(DAT_1803fa608 + 0x1c), 0 < iVar5)) {
58: if (iVar5 < 0x81) goto LAB_180129961;
61: if (DAT_1803fa668 != (longlong *)0x0) {
65: if (local_54 - 1U < 0x80) {
69: LAB_180129961:
73: do {
74: while( true ) {
76: if ((int)local_18 < iVar5) {
77: return;
79: if (iVar5 != local_50) break;
80: LAB_180129a3c:
85: if (plVar2 == (longlong *)0x0) goto LAB_180129a3c;
88: if (plVar4 == (longlong *)0x0) {
91: else {
94: if (local_57 != '\0') goto LAB_180129a3c;
96: if (cVar1 == '\0') {
98: if (2 < DAT_1804015a8) {
101: return;
103: goto LAB_180129a3c;)F180129810F",
    R"F180129810U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180129961.
TODO: recover the declaration, type and value for global/data reference LAB_180129a3c.
TODO: recover the declaration, type and value for global/data reference DAT_180358688.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1804015a4.
TODO: recover the declaration, type and value for global/data reference DAT_1804015a8.
TODO: resolve the indirect call in body 48: local_58 = (**(code **)(*DAT_1803fa668 + 0xd0))();.
TODO: resolve the indirect call in body 62: local_54 = (**(code **)(*DAT_1803fa668 + 0xa8))();.
TODO: resolve the indirect call in body 71: local_50 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 84: plVar2 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar5);.
TODO: resolve the indirect call in body 87: plVar4 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);.
TODO: resolve the indirect call in body 92: local_57 = (**(code **)(*plVar4 + 0x40))(plVar4);.)F180129810U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180129810() noexcept {
    return kFunction_0x180129810;
}

// 0x180129a50 vfunc_shared_180129a50
// source: re/dump/decompile/0x180129a50_vfunc_shared_180129a50.c
// size: 5 bytes; thunk: true
// body sha256: 747414e161ff30f36765201940bea96f4a7209fab868cf1503ee2473d5d83ccd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180129a50{
    "0x180129a50",
    "vfunc_shared_180129a50",
    R"F180129a50S(undefined vfunc_shared_180129a50())F180129a50S",
    R"B180129a50(// 0x180129a50  vfunc_shared_180129a50
// size=5 thunk=true
// signature: undefined vfunc_shared_180129a50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void vfunc_shared_180129a50(void)

{
  char cVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  char cStack_58;
  char cStack_57;
  int iStack_54;
  int iStack_50;
  longlong *plStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  if (DAT_1804015a4 == -1) {
    return;
  }
  uStack_18 = 0x93fd561a96ab0c67;
  uStack_20 = 0x5391b64679e936ba;
  plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_40,&uStack_18);
  plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,auStack_30,&uStack_20);
  pcVar3 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
  if (*pcVar3 == '\0') {
    return;
  }
  if (DAT_1803fa668 == (longlong *)0x0) {
    return;
  }
  if (DAT_1803fa360 == (longlong *)0x0) {
    return;
  }
  cStack_58 = 0;
  cStack_58 = (**(code **)(*DAT_1803fa668 + 0xd0))();
  if (cStack_58 == '\0') {
    return;
  }
  cVar1 = FUN_180129320();
  if (cVar1 == '\0') {
    return;
  }
  if ((DAT_1803fa608 != 0) && (iVar5 = *(int *)(DAT_1803fa608 + 0x1c), 0 < iVar5)) {
    uStack_18 = CONCAT44(uStack_18._4_4_,iVar5);
    if (iVar5 < 0x81) goto LAB_180129961;
  }
  iStack_54 = 0;
  if (DAT_1803fa668 != (longlong *)0x0) {
    iStack_54 = (**(code **)(*DAT_1803fa668 + 0xa8))();
  }
  iVar5 = 0x80;
  if (iStack_54 - 1U < 0x80) {
    iVar5 = iStack_54;
  }
  uStack_18 = CONCAT44(uStack_18._4_4_,iVar5);
LAB_180129961:
  iStack_50 = 0;
  iStack_50 = (**(code **)(*DAT_1803fa668 + 0x60))();
  iVar5 = 1;
  do {
    while( true ) {
      uStack_20 = CONCAT44(uStack_20._4_4_,iVar5);
      if ((int)uStack_18 < iVar5) {
        return;
      }
      if (iVar5 != iStack_50) break;
LAB_180129a3c:
      iVar5 = iVar5 + 1;
    }
    plStack_48 = (longlong *)0x0;
    plVar2 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar5);
    if (plVar2 == (longlong *)0x0) goto LAB_180129a3c;
    plStack_48 = plVar2;
    plVar4 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    if (plVar4 == (longlong *)0x0) {
      cStack_57 = '\x01';
    }
    else {
      cStack_57 = (**(code **)(*plVar4 + 0x40))(plVar4);
    }
    if (cStack_57 != '\0') goto LAB_180129a3c;
    cVar1 = FUN_1801297e0(plVar2);
    if (cVar1 == '\0') {
      DAT_1804015a8 = DAT_1804015a8 + 1;
      if (2 < DAT_1804015a8) {
        DAT_1804015a4 = 0xffffffff;
        FUN_180014410(&DAT_180358688);
        return;
      }
      goto LAB_180129a3c;
    }
    DAT_1804015a8 = 0;
    iVar5 = iVar5 + 1;
  } while( true );
}


)B180129a50",
    "747414e161ff30f36765201940bea96f4a7209fab868cf1503ee2473d5d83ccd",
    R"F180129a50C(FUN_180014410
FUN_180129320
FUN_1801297e0
FUN_1801fcfc0
FUN_180241a30)F180129a50C",
    R"F180129a50D(LAB_180129961
LAB_180129a3c
DAT_180358688
DAT_1803da4c0
DAT_1803fa360
DAT_1803fa608
DAT_1803fa668
DAT_1803fadf0
DAT_1804015a4
DAT_1804015a8)F180129a50D",
    R"F180129a50T()F180129a50T",
    R"F180129a50F(30: if (DAT_1804015a4 == -1) {
31: return;
38: if (*pcVar3 == '\0') {
39: return;
41: if (DAT_1803fa668 == (longlong *)0x0) {
42: return;
44: if (DAT_1803fa360 == (longlong *)0x0) {
45: return;
49: if (cStack_58 == '\0') {
50: return;
53: if (cVar1 == '\0') {
54: return;
56: if ((DAT_1803fa608 != 0) && (iVar5 = *(int *)(DAT_1803fa608 + 0x1c), 0 < iVar5)) {
58: if (iVar5 < 0x81) goto LAB_180129961;
61: if (DAT_1803fa668 != (longlong *)0x0) {
65: if (iStack_54 - 1U < 0x80) {
69: LAB_180129961:
73: do {
74: while( true ) {
76: if ((int)uStack_18 < iVar5) {
77: return;
79: if (iVar5 != iStack_50) break;
80: LAB_180129a3c:
85: if (plVar2 == (longlong *)0x0) goto LAB_180129a3c;
88: if (plVar4 == (longlong *)0x0) {
91: else {
94: if (cStack_57 != '\0') goto LAB_180129a3c;
96: if (cVar1 == '\0') {
98: if (2 < DAT_1804015a8) {
101: return;
103: goto LAB_180129a3c;)F180129a50F",
    R"F180129a50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180129961.
TODO: recover the declaration, type and value for global/data reference LAB_180129a3c.
TODO: recover the declaration, type and value for global/data reference DAT_180358688.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1804015a4.
TODO: recover the declaration, type and value for global/data reference DAT_1804015a8.
TODO: resolve the indirect call in body 48: cStack_58 = (**(code **)(*DAT_1803fa668 + 0xd0))();.
TODO: resolve the indirect call in body 62: iStack_54 = (**(code **)(*DAT_1803fa668 + 0xa8))();.
TODO: resolve the indirect call in body 71: iStack_50 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 84: plVar2 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar5);.
TODO: resolve the indirect call in body 87: plVar4 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);.
TODO: resolve the indirect call in body 92: cStack_57 = (**(code **)(*plVar4 + 0x40))(plVar4);.)F180129a50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180129a50() noexcept {
    return kFunction_0x180129a50;
}

// 0x180129a60 FUN_180129a60
// source: re/dump/decompile/0x180129a60_FUN_180129a60.c
// size: 159 bytes; thunk: false
// body sha256: ab6fff17695611cc768b3029665296626c854b6c8a4f5a761210158bb2405541
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180129a60{
    "0x180129a60",
    "FUN_180129a60",
    R"F180129a60S(undefined FUN_180129a60())F180129a60S",
    R"B180129a60(// 0x180129a60  FUN_180129a60
// size=159 thunk=false
// signature: undefined FUN_180129a60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180129a60(void)

{
  longlong *plVar1;
  char *pcVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_28 = 0x93fd561a96ab0c67;
  local_20 = 0xb0295df9ff8697be;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_38,&local_20);
  pcVar2 = (char *)FUN_1801fcfc0(*plVar1 + 0x28);
  if ((*pcVar2 != '\0') && (DAT_1803fa46f == '\0')) {
    return 1;
  }
  return 0;
}


)B180129a60",
    "ab6fff17695611cc768b3029665296626c854b6c8a4f5a761210158bb2405541",
    R"F180129a60C(FUN_1801fcfc0
FUN_180241a30)F180129a60C",
    R"F180129a60D(DAT_1803da4c0
DAT_1803fa46f
DAT_1803fadf0)F180129a60D",
    R"F180129a60T()F180129a60T",
    R"F180129a60F(27: if ((*pcVar2 != '\0') && (DAT_1803fa46f == '\0')) {
28: return 1;
30: return 0;)F180129a60F",
    R"F180129a60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa46f.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.)F180129a60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180129a60() noexcept {
    return kFunction_0x180129a60;
}

// 0x180129b00 FUN_180129b00
// source: re/dump/decompile/0x180129b00_FUN_180129b00.c
// size: 289 bytes; thunk: false
// body sha256: c84cc4b2ed24c7d408608c7253b902a04b9cc9b7bff1b316b8bc3d9e4b8affcb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180129b00{
    "0x180129b00",
    "FUN_180129b00",
    R"F180129b00S(undefined FUN_180129b00())F180129b00S",
    R"B180129b00(// 0x180129b00  FUN_180129b00
// size=289 thunk=false
// signature: undefined FUN_180129b00()
// status: ok


undefined8 FUN_180129b00(void)

{
  char cVar1;
  longlong *plVar2;
  char **ppcVar3;
  char *local_28 [4];
  
  if (DAT_180409890 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_180409890 + 0x78))();
    if (cVar1 == '\0') {
      return 1;
    }
    DAT_180409890 = (longlong *)0x0;
  }
  if ((DAT_1803fa640 != (longlong *)0x0) && (DAT_180409881 == '\0')) {
    local_28[0] = "vgui/white";
    local_28[1] = "color/white";
    local_28[2] = "models/debug/debugwhite";
    for (ppcVar3 = local_28; ppcVar3 != local_28 + 3; ppcVar3 = ppcVar3 + 1) {
      plVar2 = (longlong *)
               (**(code **)(*DAT_1803fa640 + 0x298))(DAT_1803fa640,*ppcVar3,"Other textures",0,0);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar2 + 0x78))(plVar2), cVar1 == '\0')) {
        DAT_180409890 = plVar2;
        return 1;
      }
    }
  }
  return 0;
}


)B180129b00",
    "c84cc4b2ed24c7d408608c7253b902a04b9cc9b7bff1b316b8bc3d9e4b8affcb",
    R"F180129b00C()F180129b00C",
    R"F180129b00D(DAT_1803fa640
DAT_180409881
DAT_180409890)F180129b00D",
    R"F180129b00T("vgui/white"
"color/white"
"Other textures"
"models/debug/debugwhite")F180129b00T",
    R"F180129b00F(15: if (DAT_180409890 != (longlong *)0x0) {
17: if (cVar1 == '\0') {
18: return 1;
22: if ((DAT_1803fa640 != (longlong *)0x0) && (DAT_180409881 == '\0')) {
26: for (ppcVar3 = local_28; ppcVar3 != local_28 + 3; ppcVar3 = ppcVar3 + 1) {
29: if ((plVar2 != (longlong *)0x0) &&
32: return 1;
36: return 0;)F180129b00F",
    R"F180129b00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa640.
TODO: recover the declaration, type and value for global/data reference DAT_180409881.
TODO: recover the declaration, type and value for global/data reference DAT_180409890.
TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*DAT_180409890 + 0x78))();.
TODO: resolve the indirect call in body 28: (**(code **)(*DAT_1803fa640 + 0x298))(DAT_1803fa640,*ppcVar3,"Other textures",0,0);.
TODO: resolve the indirect call in body 30: (cVar1 = (**(code **)(*plVar2 + 0x78))(plVar2), cVar1 == '\0')) {.)F180129b00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180129b00() noexcept {
    return kFunction_0x180129b00;
}

// 0x180129c50 FUN_180129c50
// source: re/dump/decompile/0x180129c50_FUN_180129c50.c
// size: 245 bytes; thunk: false
// body sha256: 111ccf38461e58f57c06b4c3a8ec0cb41ea69d8a302727d199bb9a037178b7b9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180129c50{
    "0x180129c50",
    "FUN_180129c50",
    R"F180129c50S(undefined FUN_180129c50())F180129c50S",
    R"B180129c50(// 0x180129c50  FUN_180129c50
// size=245 thunk=false
// signature: undefined FUN_180129c50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_180129c50(void)

{
  float fVar1;
  longlong *plVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  fVar1 = DAT_1803809ec;
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  if ((DAT_180409880 != '\0') && (DAT_1803e7cf0 == 3)) {
    local_30 = 0x93fd561a96ab0c67;
    local_54 = 1.0;
    local_28 = 0x2b9f64e127f850a9;
    local_58 = 0.1;
    plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_30);
    plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_40,&local_28);
    pfVar3 = (float *)FUN_180202dc0(*plVar2 + 0x28);
    pfVar5 = &local_58;
    if (fVar1 <= *pfVar3) {
      pfVar5 = pfVar3;
    }
    pfVar4 = &local_54;
    if (*pfVar3 <= DAT_180380bb0) {
      pfVar4 = pfVar5;
    }
    return *pfVar4;
  }
  return DAT_180380bb0;
}


)B180129c50",
    "111ccf38461e58f57c06b4c3a8ec0cb41ea69d8a302727d199bb9a037178b7b9",
    R"F180129c50C(FUN_180202dc0
FUN_180241a30)F180129c50C",
    R"F180129c50D(DAT_1803809ec
DAT_180380bb0
DAT_1803da4c0
DAT_1803e7cf0
DAT_1803fadf0
DAT_180409880)F180129c50D",
    R"F180129c50T()F180129c50T",
    R"F180129c50F(28: if ((DAT_180409880 != '\0') && (DAT_1803e7cf0 == 3)) {
37: if (fVar1 <= *pfVar3) {
41: if (*pfVar3 <= DAT_180380bb0) {
44: return *pfVar4;
46: return DAT_180380bb0;)F180129c50F",
    R"F180129c50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803809ec.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7cf0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_180409880.)F180129c50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180129c50() noexcept {
    return kFunction_0x180129c50;
}

// 0x180129d50 FUN_180129d50
// source: re/dump/decompile/0x180129d50_FUN_180129d50.c
// size: 88 bytes; thunk: false
// body sha256: 7bfe0e7b9aaa8fa425ffcaaead707e0c20e39b10e1a900ff63a177b6b039296a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180129d50{
    "0x180129d50",
    "FUN_180129d50",
    R"F180129d50S(undefined FUN_180129d50())F180129d50S",
    R"B180129d50(// 0x180129d50  FUN_180129d50
// size=88 thunk=false
// signature: undefined FUN_180129d50()
// status: ok


void FUN_180129d50(undefined4 param_1)

{
  longlong *plVar1;
  
  if (DAT_1803fa640 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*DAT_1803fa640 + 0x330))();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)*plVar1)(plVar1);
      (**(code **)(*plVar1 + 0x388))(plVar1,0,param_1);
      (**(code **)(*plVar1 + 8))(plVar1);
    }
  }
  return;
}


)B180129d50",
    "7bfe0e7b9aaa8fa425ffcaaead707e0c20e39b10e1a900ff63a177b6b039296a",
    R"F180129d50C()F180129d50C",
    R"F180129d50D(DAT_1803fa640)F180129d50D",
    R"F180129d50T()F180129d50T",
    R"F180129d50F(12: if (DAT_1803fa640 != (longlong *)0x0) {
14: if (plVar1 != (longlong *)0x0) {
20: return;)F180129d50F",
    R"F180129d50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa640.
TODO: resolve the indirect call in body 13: plVar1 = (longlong *)(**(code **)(*DAT_1803fa640 + 0x330))();.
TODO: resolve the indirect call in body 15: (**(code **)*plVar1)(plVar1);.
TODO: resolve the indirect call in body 16: (**(code **)(*plVar1 + 0x388))(plVar1,0,param_1);.
TODO: resolve the indirect call in body 17: (**(code **)(*plVar1 + 8))(plVar1);.)F180129d50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180129d50() noexcept {
    return kFunction_0x180129d50;
}

// 0x180129db0 FUN_180129db0
// source: re/dump/decompile/0x180129db0_FUN_180129db0.c
// size: 843 bytes; thunk: false
// body sha256: 48b5d25ecee15b885d3b9c28ab8498a159e2683c19608bc1971bad5e51ddc20b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180129db0{
    "0x180129db0",
    "FUN_180129db0",
    R"F180129db0S(undefined FUN_180129db0())F180129db0S",
    R"B180129db0(// 0x180129db0  FUN_180129db0
// size=843 thunk=false
// signature: undefined FUN_180129db0()
// status: ok


void FUN_180129db0(int param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char *pcVar6;
  char *pcVar7;
  longlong *local_res18 [2];
  
  if (DAT_1803fa640 != (longlong *)0x0) {
    if (DAT_1803eb478 != DAT_1803eb480) {
      DAT_1803eb480 = DAT_1803eb478;
    }
    if (DAT_1803e9f48 != DAT_1803e9f50) {
      DAT_1803e9f50 = DAT_1803e9f48;
    }
    uVar4 = (**(code **)(*DAT_1803fa640 + 0x350))();
    sVar2 = (**(code **)(*DAT_1803fa640 + 0x278))();
    for (sVar3 = (**(code **)(*DAT_1803fa640 + 0x268))(); sVar3 != sVar2;
        sVar3 = (**(code **)(*DAT_1803fa640 + 0x270))(DAT_1803fa640,sVar3)) {
      plVar5 = (longlong *)(**(code **)(*DAT_1803fa640 + 0x280))(DAT_1803fa640,sVar3);
      local_res18[0] = plVar5;
      if ((((plVar5 != (longlong *)0x0) &&
           (cVar1 = (**(code **)(*plVar5 + 0x150))(plVar5), cVar1 == '\0')) &&
          (cVar1 = (**(code **)(*plVar5 + 0x1c0))(plVar5), cVar1 != '\0')) &&
         (((cVar1 = (**(code **)(*plVar5 + 0x88))(plVar5), cVar1 == '\0' &&
           (pcVar6 = (char *)(**(code **)(*plVar5 + 8))(plVar5), pcVar6 != (char *)0x0)) &&
          ((pcVar7 = strstr(pcVar6,"World"), pcVar7 != (char *)0x0 ||
           (pcVar7 = strstr(pcVar6,"Model"), pcVar7 != (char *)0x0)))))) {
        if (param_1 == 3) {
          pcVar7 = (char *)(**(code **)(*plVar5 + 0x188))(plVar5);
          pcVar6 = strstr(pcVar6,"World");
          if (((pcVar6 == (char *)0x0) || (pcVar7 == (char *)0x0)) ||
             ((pcVar6 = strstr(pcVar7,"Lightmapped"), pcVar6 == (char *)0x0 &&
              (pcVar6 = strstr(pcVar7,"WorldVertex"), pcVar6 == (char *)0x0)))) goto LAB_18012a0b0;
        }
        pcVar6 = (char *)(**(code **)*plVar5)(plVar5);
        if ((pcVar6 == (char *)0x0) ||
           ((pcVar7 = strstr(pcVar6,"sky"), pcVar7 == (char *)0x0 &&
            (pcVar6 = strstr(pcVar6,"water"), pcVar6 == (char *)0x0)))) {
          (**(code **)(*plVar5 + 0xe0))(plVar5,param_2,param_2,param_2);
          if (DAT_1803eb480 == DAT_1803eb488) {
            FUN_180221c00(&DAT_1803eb478,DAT_1803eb480,local_res18);
          }
          else {
            *DAT_1803eb480 = plVar5;
            DAT_1803eb480 = DAT_1803eb480 + 1;
          }
          if (param_1 == 1) {
            pcVar6 = (char *)(**(code **)(*plVar5 + 8))(plVar5);
            pcVar7 = (char *)(**(code **)(*plVar5 + 0x188))(plVar5);
            if ((((pcVar6 != (char *)0x0) &&
                 (pcVar6 = strstr(pcVar6,"World"), pcVar6 != (char *)0x0)) &&
                (pcVar7 != (char *)0x0)) &&
               ((pcVar6 = strstr(pcVar7,"Lightmapped"), pcVar6 != (char *)0x0 ||
                (pcVar6 = strstr(pcVar7,"WorldVertex"), pcVar6 != (char *)0x0)))) {
              (**(code **)(*plVar5 + 0xe8))(plVar5,0x40,1);
              (**(code **)(*plVar5 + 0x80))(plVar5);
              if (DAT_1803e9f50 == DAT_1803e9f58) {
                FUN_180221c00(&DAT_1803e9f48,DAT_1803e9f50,local_res18);
              }
              else {
                *DAT_1803e9f50 = plVar5;
                DAT_1803e9f50 = DAT_1803e9f50 + 1;
              }
            }
          }
        }
      }
LAB_18012a0b0:
    }
    (**(code **)(*DAT_1803fa640 + 0x358))(DAT_1803fa640,uVar4);
  }
  return;
}


)B180129db0",
    "48b5d25ecee15b885d3b9c28ab8498a159e2683c19608bc1971bad5e51ddc20b",
    R"F180129db0C(FUN_180221c00)F180129db0C",
    R"F180129db0D(LAB_18012a0b0
DAT_1803e9f48
DAT_1803e9f50
DAT_1803e9f58
DAT_1803eb478
DAT_1803eb480
DAT_1803eb488
DAT_1803fa640)F180129db0D",
    R"F180129db0T("sky"
"Model"
"World"
"water"
"Lightmapped"
"WorldVertex")F180129db0T",
    R"F180129db0F(19: if (DAT_1803fa640 != (longlong *)0x0) {
20: if (DAT_1803eb478 != DAT_1803eb480) {
23: if (DAT_1803e9f48 != DAT_1803e9f50) {
28: for (sVar3 = (**(code **)(*DAT_1803fa640 + 0x268))(); sVar3 != sVar2;
32: if ((((plVar5 != (longlong *)0x0) &&
39: if (param_1 == 3) {
42: if (((pcVar6 == (char *)0x0) || (pcVar7 == (char *)0x0)) ||
47: if ((pcVar6 == (char *)0x0) ||
51: if (DAT_1803eb480 == DAT_1803eb488) {
54: else {
58: if (param_1 == 1) {
61: if ((((pcVar6 != (char *)0x0) &&
68: if (DAT_1803e9f50 == DAT_1803e9f58) {
71: else {
79: LAB_18012a0b0:
83: return;)F180129db0F",
    R"F180129db0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18012a0b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f48.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f50.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f58.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb478.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb480.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb488.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa640.
TODO: resolve the indirect call in body 26: uVar4 = (**(code **)(*DAT_1803fa640 + 0x350))();.
TODO: resolve the indirect call in body 27: sVar2 = (**(code **)(*DAT_1803fa640 + 0x278))();.
TODO: resolve the indirect call in body 28: for (sVar3 = (**(code **)(*DAT_1803fa640 + 0x268))(); sVar3 != sVar2;.
TODO: resolve the indirect call in body 29: sVar3 = (**(code **)(*DAT_1803fa640 + 0x270))(DAT_1803fa640,sVar3)) {.
TODO: resolve the indirect call in body 30: plVar5 = (longlong *)(**(code **)(*DAT_1803fa640 + 0x280))(DAT_1803fa640,sVar3);.
TODO: resolve the indirect call in body 33: (cVar1 = (**(code **)(*plVar5 + 0x150))(plVar5), cVar1 == '\0')) &&.
TODO: resolve the indirect call in body 34: (cVar1 = (**(code **)(*plVar5 + 0x1c0))(plVar5), cVar1 != '\0')) &&.
TODO: resolve the indirect call in body 35: (((cVar1 = (**(code **)(*plVar5 + 0x88))(plVar5), cVar1 == '\0' &&.
TODO: resolve the indirect call in body 36: (pcVar6 = (char *)(**(code **)(*plVar5 + 8))(plVar5), pcVar6 != (char *)0x0)) &&.
TODO: resolve the indirect call in body 40: pcVar7 = (char *)(**(code **)(*plVar5 + 0x188))(plVar5);.
TODO: resolve the indirect call in body 46: pcVar6 = (char *)(**(code **)*plVar5)(plVar5);.
TODO: resolve the indirect call in body 50: (**(code **)(*plVar5 + 0xe0))(plVar5,param_2,param_2,param_2);.
TODO: resolve the indirect call in body 59: pcVar6 = (char *)(**(code **)(*plVar5 + 8))(plVar5);.
TODO: resolve the indirect call in body 60: pcVar7 = (char *)(**(code **)(*plVar5 + 0x188))(plVar5);.
TODO: resolve the indirect call in body 66: (**(code **)(*plVar5 + 0xe8))(plVar5,0x40,1);.
TODO: resolve the indirect call in body 67: (**(code **)(*plVar5 + 0x80))(plVar5);.
TODO: resolve the indirect call in body 81: (**(code **)(*DAT_1803fa640 + 0x358))(DAT_1803fa640,uVar4);.)F180129db0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180129db0() noexcept {
    return kFunction_0x180129db0;
}

// 0x18012a100 FUN_18012a100
// source: re/dump/decompile/0x18012a100_FUN_18012a100.c
// size: 270 bytes; thunk: false
// body sha256: 23a712d2598539d872e36bd67a5be6c2002620771c4ca78f56c24f28c6626fb9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012a100{
    "0x18012a100",
    "FUN_18012a100",
    R"F18012a100S(undefined FUN_18012a100())F18012a100S",
    R"B18012a100(// 0x18012a100  FUN_18012a100
// size=270 thunk=false
// signature: undefined FUN_18012a100()
// status: ok


void FUN_18012a100(void)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  if (DAT_1803fa640 != (longlong *)0x0) {
    uVar4 = (**(code **)(*DAT_1803fa640 + 0x350))();
    plVar2 = DAT_1803e9f50;
    plVar5 = DAT_1803e9f48;
    uVar7 = uVar4;
    while (plVar1 = DAT_1803eb480, uVar3 = DAT_180380bb0, plVar6 = DAT_1803eb478, plVar5 != plVar2)
    {
      plVar1 = (longlong *)*plVar5;
      if (plVar1 == (longlong *)0x0) {
        plVar5 = plVar5 + 1;
      }
      else {
        (**(code **)(*plVar1 + 0xe8))(plVar1,0x40,0);
        (**(code **)(*plVar1 + 0x80))(plVar1);
        plVar5 = plVar5 + 1;
      }
    }
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      plVar2 = (longlong *)*plVar6;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xe0))(plVar2,uVar3,uVar3,uVar3,plVar5,plVar6,uVar7);
      }
    }
    (**(code **)(*DAT_1803fa640 + 0x358))(DAT_1803fa640,uVar4);
  }
  if (DAT_1803eb478 != DAT_1803eb480) {
    DAT_1803eb480 = DAT_1803eb478;
  }
  if (DAT_1803e9f48 != DAT_1803e9f50) {
    DAT_1803e9f50 = DAT_1803e9f48;
  }
  return;
}


)B18012a100",
    "23a712d2598539d872e36bd67a5be6c2002620771c4ca78f56c24f28c6626fb9",
    R"F18012a100C()F18012a100C",
    R"F18012a100D(DAT_180380bb0
DAT_1803e9f48
DAT_1803e9f50
DAT_1803eb478
DAT_1803eb480
DAT_1803fa640)F18012a100D",
    R"F18012a100T()F18012a100T",
    R"F18012a100F(18: if (DAT_1803fa640 != (longlong *)0x0) {
23: while (plVar1 = DAT_1803eb480, uVar3 = DAT_180380bb0, plVar6 = DAT_1803eb478, plVar5 != plVar2)
26: if (plVar1 == (longlong *)0x0) {
29: else {
35: for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
37: if (plVar2 != (longlong *)0x0) {
43: if (DAT_1803eb478 != DAT_1803eb480) {
46: if (DAT_1803e9f48 != DAT_1803e9f50) {
49: return;)F18012a100F",
    R"F18012a100U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f48.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f50.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb478.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb480.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa640.
TODO: resolve the indirect call in body 19: uVar4 = (**(code **)(*DAT_1803fa640 + 0x350))();.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar1 + 0xe8))(plVar1,0x40,0);.
TODO: resolve the indirect call in body 31: (**(code **)(*plVar1 + 0x80))(plVar1);.
TODO: resolve the indirect call in body 38: (**(code **)(*plVar2 + 0xe0))(plVar2,uVar3,uVar3,uVar3,plVar5,plVar6,uVar7);.
TODO: resolve the indirect call in body 41: (**(code **)(*DAT_1803fa640 + 0x358))(DAT_1803fa640,uVar4);.)F18012a100U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012a100() noexcept {
    return kFunction_0x18012a100;
}

// 0x18012a210 FUN_18012a210
// source: re/dump/decompile/0x18012a210_FUN_18012a210.c
// size: 205 bytes; thunk: false
// body sha256: bb6027242bf4812177991e1070e8af6a287dbf624a5a5a5bc49d818deea34b49
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012a210{
    "0x18012a210",
    "FUN_18012a210",
    R"F18012a210S(undefined FUN_18012a210())F18012a210S",
    R"B18012a210(// 0x18012a210  FUN_18012a210
// size=205 thunk=false
// signature: undefined FUN_18012a210()
// status: ok


void FUN_18012a210(char param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  plVar2 = DAT_1803e9f50;
  if (DAT_1803fa640 != 0) {
    plVar3 = DAT_1803e9f48;
    uVar5 = DAT_180380bb0;
    if (param_1 != '\0') {
      uVar5 = DAT_1803e7cec;
    }
    while (plVar1 = DAT_1803eb480, plVar4 = DAT_1803eb478, plVar3 != plVar2) {
      plVar1 = (longlong *)*plVar3;
      if (plVar1 == (longlong *)0x0) {
        plVar3 = plVar3 + 1;
      }
      else {
        (**(code **)(*plVar1 + 0xe8))(plVar1,0x40,param_1);
        (**(code **)(*plVar1 + 0x80))(plVar1);
        plVar3 = plVar3 + 1;
      }
    }
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      plVar2 = (longlong *)*plVar4;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xe0))(plVar2,uVar5,uVar5,uVar5,plVar3,plVar4);
      }
    }
  }
  return;
}


)B18012a210",
    "bb6027242bf4812177991e1070e8af6a287dbf624a5a5a5bc49d818deea34b49",
    R"F18012a210C()F18012a210C",
    R"F18012a210D(DAT_180380bb0
DAT_1803e7cec
DAT_1803e9f48
DAT_1803e9f50
DAT_1803eb478
DAT_1803eb480
DAT_1803fa640)F18012a210D",
    R"F18012a210T()F18012a210T",
    R"F18012a210F(17: if (DAT_1803fa640 != 0) {
20: if (param_1 != '\0') {
23: while (plVar1 = DAT_1803eb480, plVar4 = DAT_1803eb478, plVar3 != plVar2) {
25: if (plVar1 == (longlong *)0x0) {
28: else {
34: for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
36: if (plVar2 != (longlong *)0x0) {
41: return;)F18012a210F",
    R"F18012a210U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7cec.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f48.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f50.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb478.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb480.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa640.
TODO: resolve the indirect call in body 29: (**(code **)(*plVar1 + 0xe8))(plVar1,0x40,param_1);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar1 + 0x80))(plVar1);.
TODO: resolve the indirect call in body 37: (**(code **)(*plVar2 + 0xe0))(plVar2,uVar5,uVar5,uVar5,plVar3,plVar4);.)F18012a210U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012a210() noexcept {
    return kFunction_0x18012a210;
}

// 0x18012a2e0 FUN_18012a2e0
// source: re/dump/decompile/0x18012a2e0_FUN_18012a2e0.c
// size: 88 bytes; thunk: false
// body sha256: 7083910198c9306da64d1cf4f6306d410ec9cbbb28aadf733827da2b52e92c2d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012a2e0{
    "0x18012a2e0",
    "FUN_18012a2e0",
    R"F18012a2e0S(undefined FUN_18012a2e0())F18012a2e0S",
    R"B18012a2e0(// 0x18012a2e0  FUN_18012a2e0
// size=88 thunk=false
// signature: undefined FUN_18012a2e0()
// status: ok


void FUN_18012a2e0(void)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  if ((DAT_1803e7cf0 == 4) && (DAT_1803fa640 != (longlong *)0x0)) {
    iVar1 = DAT_180409884 + 1;
    bVar3 = DAT_180409884 == 0;
    DAT_180409884 = iVar1;
    if (bVar3) {
      DAT_18040989a = 0;
      lVar2 = (**(code **)(*DAT_1803fa640 + 0xa8))();
      DAT_1803e7ce8 = *(undefined1 *)(lVar2 + 0x49);
      DAT_18040989a = 1;
      *(undefined1 *)(lVar2 + 0x49) = 0;
    }
  }
  return;
}


)B18012a2e0",
    "7083910198c9306da64d1cf4f6306d410ec9cbbb28aadf733827da2b52e92c2d",
    R"F18012a2e0C()F18012a2e0C",
    R"F18012a2e0D(DAT_1803e7ce8
DAT_1803e7cf0
DAT_1803fa640
DAT_180409884
DAT_18040989a)F18012a2e0D",
    R"F18012a2e0T()F18012a2e0T",
    R"F18012a2e0F(14: if ((DAT_1803e7cf0 == 4) && (DAT_1803fa640 != (longlong *)0x0)) {
18: if (bVar3) {
26: return;)F18012a2e0F",
    R"F18012a2e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7ce8.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7cf0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa640.
TODO: recover the declaration, type and value for global/data reference DAT_180409884.
TODO: recover the declaration, type and value for global/data reference DAT_18040989a.
TODO: resolve the indirect call in body 20: lVar2 = (**(code **)(*DAT_1803fa640 + 0xa8))();.)F18012a2e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012a2e0() noexcept {
    return kFunction_0x18012a2e0;
}

// 0x18012a350 FUN_18012a350
// source: re/dump/decompile/0x18012a350_FUN_18012a350.c
// size: 79 bytes; thunk: false
// body sha256: 054d5003a5ff13fafa1a11a4492b137bedb7ae1be7d337f00038efc6319eeb97
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012a350{
    "0x18012a350",
    "FUN_18012a350",
    R"F18012a350S(undefined FUN_18012a350())F18012a350S",
    R"B18012a350(// 0x18012a350  FUN_18012a350
// size=79 thunk=false
// signature: undefined FUN_18012a350()
// status: ok


void FUN_18012a350(void)

{
  longlong lVar1;
  
  if ((((0 < DAT_180409884) && (DAT_180409884 = DAT_180409884 + -1, DAT_180409884 == 0)) &&
      (DAT_18040989a != '\0')) && (DAT_1803fa640 != (longlong *)0x0)) {
    lVar1 = (**(code **)(*DAT_1803fa640 + 0xa8))();
    *(undefined1 *)(lVar1 + 0x49) = DAT_1803e7ce8;
    DAT_18040989a = '\0';
  }
  return;
}


)B18012a350",
    "054d5003a5ff13fafa1a11a4492b137bedb7ae1be7d337f00038efc6319eeb97",
    R"F18012a350C()F18012a350C",
    R"F18012a350D(DAT_1803e7ce8
DAT_1803fa640
DAT_180409884
DAT_18040989a)F18012a350D",
    R"F18012a350T()F18012a350T",
    R"F18012a350F(12: if ((((0 < DAT_180409884) && (DAT_180409884 = DAT_180409884 + -1, DAT_180409884 == 0)) &&
18: return;)F18012a350F",
    R"F18012a350U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7ce8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa640.
TODO: recover the declaration, type and value for global/data reference DAT_180409884.
TODO: recover the declaration, type and value for global/data reference DAT_18040989a.
TODO: resolve the indirect call in body 14: lVar1 = (**(code **)(*DAT_1803fa640 + 0xa8))();.)F18012a350U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012a350() noexcept {
    return kFunction_0x18012a350;
}

// 0x18012a3a0 FUN_18012a3a0
// source: re/dump/decompile/0x18012a3a0_FUN_18012a3a0.c
// size: 1214 bytes; thunk: false
// body sha256: 7056b8730ae1339f4ed25e191790a9edf6622eead78c94be25e3b889d5c4d9bd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012a3a0{
    "0x18012a3a0",
    "FUN_18012a3a0",
    R"F18012a3a0S(undefined FUN_18012a3a0())F18012a3a0S",
    R"B18012a3a0(// 0x18012a3a0  FUN_18012a3a0
// size=1214 thunk=false
// signature: undefined FUN_18012a3a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18012a3a0(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  longlong *plVar7;
  uint *puVar8;
  uint *puVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 *puVar12;
  float *pfVar13;
  uint *puVar14;
  uint uVar15;
  float fVar16;
  undefined1 auStack_f8 [32];
  uint local_d8 [2];
  float local_d0;
  float local_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  float local_a8 [2];
  undefined8 local_a0;
  undefined8 local_98 [2];
  undefined8 local_88 [2];
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  cVar5 = FUN_180129a60();
  local_d8[1] = 4;
  local_d8[0] = 0;
  local_a8[0] = -1.1026308e-38;
  local_a8[1] = -NAN;
  local_a0 = 0x93fd561a96ab0c67;
  plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_88,&local_a0);
  plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_98,local_a8);
  puVar8 = (uint *)FUN_1802029c0(*plVar7 + 0x28);
  puVar14 = local_d8;
  if (-1 < (int)*puVar8) {
    puVar14 = puVar8;
  }
  puVar9 = local_d8 + 1;
  if ((int)*puVar8 < 5) {
    puVar9 = puVar14;
  }
  uVar15 = *puVar9;
  if ((DAT_1803fa668 == (longlong *)0x0) ||
     (cVar6 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar6 == '\0')) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  if ((DAT_1803ff091 != '\0') && (cVar6 == '\0')) {
    if (DAT_1803eb478 != DAT_1803eb480) {
      DAT_1803eb480 = DAT_1803eb478;
    }
    if (DAT_1803e9f48 != DAT_1803e9f50) {
      DAT_1803e9f50 = DAT_1803e9f48;
    }
    _DAT_1803e7868 = -1.0;
    DAT_1803e7cf0 = 0xffffffff;
    DAT_180409880 = 0;
  }
  if ((cVar5 == '\0') || (cVar6 == '\0')) {
    uVar15 = 0xffffffff;
  }
  DAT_1803ff091 = cVar6;
  if ((DAT_1803e7cf0 != 0xffffffff) && (DAT_1803e7cf0 != uVar15)) {
    if (((DAT_1803e7cf0 & 0xfffffffc) == 0) && (DAT_1803e7cf0 != 2)) {
      FUN_18012a100();
    }
    DAT_180409899 = 0;
    DAT_1803e7cf0 = 0xffffffff;
    _DAT_1803e7868 = -1.0;
  }
  uVar3 = DAT_180380db8;
  fVar2 = DAT_180380bb0;
  fVar16 = DAT_1803809ec;
  if (uVar15 != 0) {
    if (uVar15 == 1) {
      if (DAT_1803e7cf0 != 1) {
        FUN_180129db0(1,DAT_180380db8);
        DAT_1803e7cec = (float)uVar3;
        DAT_1803e7cf0 = uVar15;
        DAT_180409880 = 1;
        return;
      }
LAB_18012a6c3:
      DAT_180409880 = 1;
      if (uVar15 == 1) {
        DAT_1803e7cec = (float)uVar3;
        DAT_180409880 = 1;
        return;
      }
      if (uVar15 == 0) goto LAB_18012a6e4;
    }
    else {
      if (uVar15 == 2) {
        DAT_1803e7cec = fVar2;
        DAT_1803e7cf0 = uVar15;
        DAT_180409880 = 1;
        return;
      }
      if (uVar15 == 3) {
        local_cc = 1.0;
        local_d0 = 0.1;
        local_a0 = 0x93fd561a96ab0c67;
        local_a8[0] = 6.892128e-15;
        local_a8[1] = 1.1325629e-12;
        plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_88,&local_a0);
        plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_98,local_a8);
        pfVar13 = (float *)FUN_180202dc0(*plVar7 + 0x28);
        pfVar10 = &local_d0;
        if (fVar16 <= *pfVar13) {
          pfVar10 = pfVar13;
        }
        pfVar11 = &local_cc;
        if (*pfVar13 <= fVar2) {
          pfVar11 = pfVar10;
        }
        fVar1 = *pfVar11;
        cVar5 = FUN_180129b00();
        if (cVar5 != '\0') {
          if (DAT_1803e7cf0 == 3) {
            if (fVar1 == _DAT_1803e7868) goto LAB_18012a6c3;
            FUN_18012a100();
          }
          FUN_180129db0(3,fVar1);
          DAT_1803e7cf0 = 3;
          DAT_180409880 = 1;
          _DAT_1803e7868 = fVar1;
          goto LAB_18012a7ae;
        }
        if (DAT_1803e7cf0 == 3) {
          FUN_18012a100();
        }
        DAT_1803e7cf0 = 0xffffffff;
        _DAT_1803e7868 = -1.0;
      }
      else {
        uVar4 = uVar15;
        if ((uVar15 == 4) ||
           ((uVar15 != 0xffffffff && (uVar4 = DAT_1803e7cf0, DAT_1803e7cf0 == uVar15)))) {
          DAT_1803e7cf0 = uVar4;
          DAT_1803e7cec = fVar2;
          DAT_180409880 = 1;
          return;
        }
      }
      DAT_180409880 = 0;
    }
    if (uVar15 != 3) {
      DAT_1803e7cec = fVar2;
      return;
    }
LAB_18012a7ae:
    local_a0 = CONCAT44(local_a0._4_4_,0x3f800000);
    local_a8[0] = 0.1;
    local_98[0] = 0x93fd561a96ab0c67;
    local_88[0] = 0x2b9f64e127f850a9;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_98);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_b8,local_88);
    pfVar13 = (float *)FUN_180202dc0(*plVar7 + 0x28);
    pfVar10 = local_a8;
    if (fVar16 <= *pfVar13) {
      pfVar10 = pfVar13;
    }
    pfVar11 = (float *)&local_a0;
    if (*pfVar13 <= fVar2) {
      pfVar11 = pfVar10;
    }
    DAT_1803e7cec = *pfVar11;
    return;
  }
  local_a0 = 0x93fd561a96ab0c67;
  local_a8[0] = 6.739325e+09;
  local_a8[1] = 5.0995325e+20;
  plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_88,&local_a0);
  plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_98,local_a8);
  pfVar10 = (float *)FUN_180202dc0(*plVar7 + 0x28);
  fVar1 = *pfVar10;
  if (DAT_1803e7cf0 == 0) {
    fVar16 = DAT_1803809ec;
    if (fVar1 == _DAT_1803e7868) goto LAB_18012a6c3;
    FUN_18012a100();
  }
  FUN_180129db0(0,fVar1);
  DAT_1803e7cf0 = 0;
  _DAT_1803e7868 = fVar1;
LAB_18012a6e4:
  DAT_180409880 = 1;
  local_a0 = 0x93fd561a96ab0c67;
  local_a8[0] = 6.739325e+09;
  local_a8[1] = 5.0995325e+20;
  plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_88,&local_a0);
  plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_98,local_a8);
  puVar12 = (undefined4 *)FUN_180202dc0(*plVar7 + 0x28);
  DAT_1803e7cec = (float)*puVar12;
  return;
}


)B18012a3a0",
    "7056b8730ae1339f4ed25e191790a9edf6622eead78c94be25e3b889d5c4d9bd",
    R"F18012a3a0C(FUN_180129a60
FUN_180129b00
FUN_180129db0
FUN_18012a100
FUN_1802029c0
FUN_180202dc0
FUN_180241a30)F18012a3a0C",
    R"F18012a3a0D(LAB_18012a6c3
LAB_18012a6e4
LAB_18012a7ae
DAT_1803809ec
DAT_180380bb0
DAT_180380db8
DAT_1803da4c0
DAT_1803e7cec
DAT_1803e7cf0
DAT_1803e9f48
DAT_1803e9f50
DAT_1803eb478
DAT_1803eb480
DAT_1803fa668
DAT_1803fadf0
DAT_1803ff091
DAT_180409880
DAT_180409899)F18012a3a0D",
    R"F18012a3a0T()F18012a3a0T",
    R"F18012a3a0F(52: if (-1 < (int)*puVar8) {
56: if ((int)*puVar8 < 5) {
60: if ((DAT_1803fa668 == (longlong *)0x0) ||
64: else {
67: if ((DAT_1803ff091 != '\0') && (cVar6 == '\0')) {
68: if (DAT_1803eb478 != DAT_1803eb480) {
71: if (DAT_1803e9f48 != DAT_1803e9f50) {
78: if ((cVar5 == '\0') || (cVar6 == '\0')) {
82: if ((DAT_1803e7cf0 != 0xffffffff) && (DAT_1803e7cf0 != uVar15)) {
83: if (((DAT_1803e7cf0 & 0xfffffffc) == 0) && (DAT_1803e7cf0 != 2)) {
93: if (uVar15 != 0) {
94: if (uVar15 == 1) {
95: if (DAT_1803e7cf0 != 1) {
100: return;
102: LAB_18012a6c3:
104: if (uVar15 == 1) {
107: return;
109: if (uVar15 == 0) goto LAB_18012a6e4;
111: else {
112: if (uVar15 == 2) {
116: return;
118: if (uVar15 == 3) {
128: if (fVar16 <= *pfVar13) {
132: if (*pfVar13 <= fVar2) {
137: if (cVar5 != '\0') {
138: if (DAT_1803e7cf0 == 3) {
139: if (fVar1 == _DAT_1803e7868) goto LAB_18012a6c3;
146: goto LAB_18012a7ae;
148: if (DAT_1803e7cf0 == 3) {
154: else {
156: if ((uVar15 == 4) ||
161: return;
166: if (uVar15 != 3) {
168: return;
170: LAB_18012a7ae:
179: if (fVar16 <= *pfVar13) {
183: if (*pfVar13 <= fVar2) {
187: return;
196: if (DAT_1803e7cf0 == 0) {
198: if (fVar1 == _DAT_1803e7868) goto LAB_18012a6c3;
204: LAB_18012a6e4:
213: return;)F18012a3a0F",
    R"F18012a3a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18012a6c3.
TODO: recover the declaration, type and value for global/data reference LAB_18012a6e4.
TODO: recover the declaration, type and value for global/data reference LAB_18012a7ae.
TODO: recover the declaration, type and value for global/data reference DAT_1803809ec.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_180380db8.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7cec.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7cf0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f48.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f50.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb478.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb480.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff091.
TODO: recover the declaration, type and value for global/data reference DAT_180409880.
TODO: recover the declaration, type and value for global/data reference DAT_180409899.
TODO: resolve the indirect call in body 61: (cVar6 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar6 == '\0')) {.)F18012a3a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012a3a0() noexcept {
    return kFunction_0x18012a3a0;
}

// 0x18012a860 Features_Fullbright_FullbrightFeature_vfunc01
// source: re/dump/decompile/0x18012a860_Features_Fullbright_FullbrightFeature_vfunc01.c
// size: 5 bytes; thunk: true
// body sha256: 89497a63987211b47433740000ec1ca0ac42ddf1f8460a1c411c65d907f9a902
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012a860{
    "0x18012a860",
    "Features_Fullbright_FullbrightFeature_vfunc01",
    R"F18012a860S(undefined Features_Fullbright_FullbrightFeature_vfunc01())F18012a860S",
    R"B18012a860(// 0x18012a860  Features_Fullbright_FullbrightFeature_vfunc01
// size=5 thunk=true
// signature: undefined Features_Fullbright_FullbrightFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Fullbright_FullbrightFeature_vfunc01(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  longlong *plVar7;
  uint *puVar8;
  uint *puVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 *puVar12;
  float *pfVar13;
  uint *puVar14;
  uint uVar15;
  float fVar16;
  undefined1 auStack_f8 [32];
  uint auStack_d8 [2];
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  float afStack_a8 [2];
  undefined8 uStack_a0;
  undefined8 auStack_98 [2];
  undefined8 auStack_88 [2];
  ulonglong uStack_78;
  
  uStack_78 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  cVar5 = FUN_180129a60();
  auStack_d8[1] = 4;
  auStack_d8[0] = 0;
  afStack_a8[0] = -1.1026308e-38;
  afStack_a8[1] = -NAN;
  uStack_a0 = 0x93fd561a96ab0c67;
  plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_88,&uStack_a0);
  plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,auStack_98,afStack_a8);
  puVar8 = (uint *)FUN_1802029c0(*plVar7 + 0x28);
  puVar14 = auStack_d8;
  if (-1 < (int)*puVar8) {
    puVar14 = puVar8;
  }
  puVar9 = auStack_d8 + 1;
  if ((int)*puVar8 < 5) {
    puVar9 = puVar14;
  }
  uVar15 = *puVar9;
  if ((DAT_1803fa668 == (longlong *)0x0) ||
     (cVar6 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar6 == '\0')) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  if ((DAT_1803ff091 != '\0') && (cVar6 == '\0')) {
    if (DAT_1803eb478 != DAT_1803eb480) {
      DAT_1803eb480 = DAT_1803eb478;
    }
    if (DAT_1803e9f48 != DAT_1803e9f50) {
      DAT_1803e9f50 = DAT_1803e9f48;
    }
    _DAT_1803e7868 = -1.0;
    DAT_1803e7cf0 = 0xffffffff;
    DAT_180409880 = 0;
  }
  if ((cVar5 == '\0') || (cVar6 == '\0')) {
    uVar15 = 0xffffffff;
  }
  DAT_1803ff091 = cVar6;
  if ((DAT_1803e7cf0 != 0xffffffff) && (DAT_1803e7cf0 != uVar15)) {
    if (((DAT_1803e7cf0 & 0xfffffffc) == 0) && (DAT_1803e7cf0 != 2)) {
      FUN_18012a100();
    }
    DAT_180409899 = 0;
    DAT_1803e7cf0 = 0xffffffff;
    _DAT_1803e7868 = -1.0;
  }
  uVar3 = DAT_180380db8;
  fVar2 = DAT_180380bb0;
  fVar16 = DAT_1803809ec;
  if (uVar15 != 0) {
    if (uVar15 == 1) {
      if (DAT_1803e7cf0 != 1) {
        FUN_180129db0(1,DAT_180380db8);
        DAT_1803e7cec = (float)uVar3;
        DAT_1803e7cf0 = uVar15;
        DAT_180409880 = 1;
        return;
      }
LAB_18012a6c3:
      DAT_180409880 = 1;
      if (uVar15 == 1) {
        DAT_1803e7cec = (float)uVar3;
        DAT_180409880 = 1;
        return;
      }
      if (uVar15 == 0) goto LAB_18012a6e4;
    }
    else {
      if (uVar15 == 2) {
        DAT_1803e7cec = fVar2;
        DAT_1803e7cf0 = uVar15;
        DAT_180409880 = 1;
        return;
      }
      if (uVar15 == 3) {
        fStack_cc = 1.0;
        fStack_d0 = 0.1;
        uStack_a0 = 0x93fd561a96ab0c67;
        afStack_a8[0] = 6.892128e-15;
        afStack_a8[1] = 1.1325629e-12;
        plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_88,&uStack_a0);
        plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,auStack_98,afStack_a8);
        pfVar13 = (float *)FUN_180202dc0(*plVar7 + 0x28);
        pfVar10 = &fStack_d0;
        if (fVar16 <= *pfVar13) {
          pfVar10 = pfVar13;
        }
        pfVar11 = &fStack_cc;
        if (*pfVar13 <= fVar2) {
          pfVar11 = pfVar10;
        }
        fVar1 = *pfVar11;
        cVar5 = FUN_180129b00();
        if (cVar5 != '\0') {
          if (DAT_1803e7cf0 == 3) {
            if (fVar1 == _DAT_1803e7868) goto LAB_18012a6c3;
            FUN_18012a100();
          }
          FUN_180129db0(3,fVar1);
          DAT_1803e7cf0 = 3;
          DAT_180409880 = 1;
          _DAT_1803e7868 = fVar1;
          goto LAB_18012a7ae;
        }
        if (DAT_1803e7cf0 == 3) {
          FUN_18012a100();
        }
        DAT_1803e7cf0 = 0xffffffff;
        _DAT_1803e7868 = -1.0;
      }
      else {
        uVar4 = uVar15;
        if ((uVar15 == 4) ||
           ((uVar15 != 0xffffffff && (uVar4 = DAT_1803e7cf0, DAT_1803e7cf0 == uVar15)))) {
          DAT_1803e7cf0 = uVar4;
          DAT_1803e7cec = fVar2;
          DAT_180409880 = 1;
          return;
        }
      }
      DAT_180409880 = 0;
    }
    if (uVar15 != 3) {
      DAT_1803e7cec = fVar2;
      return;
    }
LAB_18012a7ae:
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0x3f800000);
    afStack_a8[0] = 0.1;
    auStack_98[0] = 0x93fd561a96ab0c67;
    auStack_88[0] = 0x2b9f64e127f850a9;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_c8,auStack_98);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,auStack_b8,auStack_88);
    pfVar13 = (float *)FUN_180202dc0(*plVar7 + 0x28);
    pfVar10 = afStack_a8;
    if (fVar16 <= *pfVar13) {
      pfVar10 = pfVar13;
    }
    pfVar11 = (float *)&uStack_a0;
    if (*pfVar13 <= fVar2) {
      pfVar11 = pfVar10;
    }
    DAT_1803e7cec = *pfVar11;
    return;
  }
  uStack_a0 = 0x93fd561a96ab0c67;
  afStack_a8[0] = 6.739325e+09;
  afStack_a8[1] = 5.0995325e+20;
  plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_88,&uStack_a0);
  plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,auStack_98,afStack_a8);
  pfVar10 = (float *)FUN_180202dc0(*plVar7 + 0x28);
  fVar1 = *pfVar10;
  if (DAT_1803e7cf0 == 0) {
    fVar16 = DAT_1803809ec;
    if (fVar1 == _DAT_1803e7868) goto LAB_18012a6c3;
    FUN_18012a100();
  }
  FUN_180129db0(0,fVar1);
  DAT_1803e7cf0 = 0;
  _DAT_1803e7868 = fVar1;
LAB_18012a6e4:
  DAT_180409880 = 1;
  uStack_a0 = 0x93fd561a96ab0c67;
  afStack_a8[0] = 6.739325e+09;
  afStack_a8[1] = 5.0995325e+20;
  plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_88,&uStack_a0);
  plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,auStack_98,afStack_a8);
  puVar12 = (undefined4 *)FUN_180202dc0(*plVar7 + 0x28);
  DAT_1803e7cec = (float)*puVar12;
  return;
}


)B18012a860",
    "89497a63987211b47433740000ec1ca0ac42ddf1f8460a1c411c65d907f9a902",
    R"F18012a860C(FUN_180129a60
FUN_180129b00
FUN_180129db0
FUN_18012a100
FUN_1802029c0
FUN_180202dc0
FUN_180241a30)F18012a860C",
    R"F18012a860D(LAB_18012a6c3
LAB_18012a6e4
LAB_18012a7ae
DAT_1803809ec
DAT_180380bb0
DAT_180380db8
DAT_1803da4c0
DAT_1803e7cec
DAT_1803e7cf0
DAT_1803e9f48
DAT_1803e9f50
DAT_1803eb478
DAT_1803eb480
DAT_1803fa668
DAT_1803fadf0
DAT_1803ff091
DAT_180409880
DAT_180409899)F18012a860D",
    R"F18012a860T()F18012a860T",
    R"F18012a860F(52: if (-1 < (int)*puVar8) {
56: if ((int)*puVar8 < 5) {
60: if ((DAT_1803fa668 == (longlong *)0x0) ||
64: else {
67: if ((DAT_1803ff091 != '\0') && (cVar6 == '\0')) {
68: if (DAT_1803eb478 != DAT_1803eb480) {
71: if (DAT_1803e9f48 != DAT_1803e9f50) {
78: if ((cVar5 == '\0') || (cVar6 == '\0')) {
82: if ((DAT_1803e7cf0 != 0xffffffff) && (DAT_1803e7cf0 != uVar15)) {
83: if (((DAT_1803e7cf0 & 0xfffffffc) == 0) && (DAT_1803e7cf0 != 2)) {
93: if (uVar15 != 0) {
94: if (uVar15 == 1) {
95: if (DAT_1803e7cf0 != 1) {
100: return;
102: LAB_18012a6c3:
104: if (uVar15 == 1) {
107: return;
109: if (uVar15 == 0) goto LAB_18012a6e4;
111: else {
112: if (uVar15 == 2) {
116: return;
118: if (uVar15 == 3) {
128: if (fVar16 <= *pfVar13) {
132: if (*pfVar13 <= fVar2) {
137: if (cVar5 != '\0') {
138: if (DAT_1803e7cf0 == 3) {
139: if (fVar1 == _DAT_1803e7868) goto LAB_18012a6c3;
146: goto LAB_18012a7ae;
148: if (DAT_1803e7cf0 == 3) {
154: else {
156: if ((uVar15 == 4) ||
161: return;
166: if (uVar15 != 3) {
168: return;
170: LAB_18012a7ae:
179: if (fVar16 <= *pfVar13) {
183: if (*pfVar13 <= fVar2) {
187: return;
196: if (DAT_1803e7cf0 == 0) {
198: if (fVar1 == _DAT_1803e7868) goto LAB_18012a6c3;
204: LAB_18012a6e4:
213: return;)F18012a860F",
    R"F18012a860U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18012a6c3.
TODO: recover the declaration, type and value for global/data reference LAB_18012a6e4.
TODO: recover the declaration, type and value for global/data reference LAB_18012a7ae.
TODO: recover the declaration, type and value for global/data reference DAT_1803809ec.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_180380db8.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7cec.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7cf0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f48.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f50.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb478.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb480.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff091.
TODO: recover the declaration, type and value for global/data reference DAT_180409880.
TODO: recover the declaration, type and value for global/data reference DAT_180409899.
TODO: resolve the indirect call in body 61: (cVar6 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar6 == '\0')) {.)F18012a860U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012a860() noexcept {
    return kFunction_0x18012a860;
}

// 0x18012a870 Features_Fullbright_FullbrightFeature_vfunc07
// source: re/dump/decompile/0x18012a870_Features_Fullbright_FullbrightFeature_vfunc07.c
// size: 348 bytes; thunk: false
// body sha256: f90aa2f9568d4d901533e99554cdb422d8bcb9e4f756460fec4bbb1c25890e0e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012a870{
    "0x18012a870",
    "Features_Fullbright_FullbrightFeature_vfunc07",
    R"F18012a870S(undefined Features_Fullbright_FullbrightFeature_vfunc07())F18012a870S",
    R"B18012a870(// 0x18012a870  Features_Fullbright_FullbrightFeature_vfunc07
// size=348 thunk=false
// signature: undefined Features_Fullbright_FullbrightFeature_vfunc07()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Fullbright_FullbrightFeature_vfunc07(void)

{
  char cVar1;
  longlong *plVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  char local_48;
  char local_47;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (DAT_1803fa46f == '\0') {
    local_18 = 0xd81ed85b8c49331;
    local_20 = 0x93fd561a96ab0c67;
    plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_20);
    plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_30,&local_18);
    piVar3 = (int *)FUN_1802029c0(*plVar2 + 0x28);
    if (((*piVar3 != 0) && (FUN_180024720(&local_48), local_48 == '\0')) && (local_47 != '\0')) {
      local_18 = 0x93fd561a96ab0c67;
      local_20 = 0xb0295df9ff8697be;
      plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_30,&local_18);
      plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_40,&local_20);
      pcVar4 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
      local_20 = 0xb0295df9ff8697be;
      local_18 = 0x93fd561a96ab0c67;
      cVar1 = *pcVar4;
      plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_30,&local_18);
      plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_40,&local_20);
      uVar5 = FUN_1801fcfc0(*plVar2 + 0x28);
      *(bool *)uVar5 = cVar1 == '\0';
    }
  }
  return;
}


)B18012a870",
    "f90aa2f9568d4d901533e99554cdb422d8bcb9e4f756460fec4bbb1c25890e0e",
    R"F18012a870C(FUN_180024720
FUN_1801fcfc0
FUN_1802029c0
FUN_180241a30)F18012a870C",
    R"F18012a870D(DAT_1803da4c0
DAT_1803fa46f
DAT_1803fadf0)F18012a870D",
    R"F18012a870T()F18012a870T",
    R"F18012a870F(27: if (DAT_1803fa46f == '\0') {
33: if (((*piVar3 != 0) && (FUN_180024720(&local_48), local_48 == '\0')) && (local_47 != '\0')) {
48: return;)F18012a870F",
    R"F18012a870U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa46f.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.)F18012a870U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012a870() noexcept {
    return kFunction_0x18012a870;
}

// 0x18012a9d0 FUN_18012a9d0
// source: re/dump/decompile/0x18012a9d0_FUN_18012a9d0.c
// size: 15 bytes; thunk: false
// body sha256: 50170c85ae80734e3e1ba9ab2589a063827ff7ca42f5190018c7f1bbd9db2a26
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012a9d0{
    "0x18012a9d0",
    "FUN_18012a9d0",
    R"F18012a9d0S(undefined FUN_18012a9d0())F18012a9d0S",
    R"B18012a9d0(// 0x18012a9d0  FUN_18012a9d0
// size=15 thunk=false
// signature: undefined FUN_18012a9d0()
// status: ok


undefined8 FUN_18012a9d0(longlong param_1,longlong param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + param_2);
}


)B18012a9d0",
    "50170c85ae80734e3e1ba9ab2589a063827ff7ca42f5190018c7f1bbd9db2a26",
    R"F18012a9d0C()F18012a9d0C",
    R"F18012a9d0D()F18012a9d0D",
    R"F18012a9d0T()F18012a9d0T",
    R"F18012a9d0F(10: if (param_1 == 0) {
11: return 0;
13: return *(undefined8 *)(param_1 + param_2);)F18012a9d0F",
    R"F18012a9d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18012a9d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012a9d0() noexcept {
    return kFunction_0x18012a9d0;
}

// 0x18012a9f0 FUN_18012a9f0
// source: re/dump/decompile/0x18012a9f0_FUN_18012a9f0.c
// size: 94 bytes; thunk: false
// body sha256: f5becd79a75b4361352a9b198ea3e3065e356a7345a8014ba004263872fc11a7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012a9f0{
    "0x18012a9f0",
    "FUN_18012a9f0",
    R"F18012a9f0S(undefined FUN_18012a9f0())F18012a9f0S",
    R"B18012a9f0(// 0x18012a9f0  FUN_18012a9f0
// size=94 thunk=false
// signature: undefined FUN_18012a9f0()
// status: ok


char * FUN_18012a9f0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  
  lVar2 = FUN_180016fb0("sv_skyname");
  if ((((lVar2 != 0) && (pcVar3 = (char *)FUN_18012a9d0(lVar2,0x18), pcVar3 != (char *)0x0)) &&
      (iVar1 = strcmp(pcVar3,"sv_skyname"), iVar1 == 0)) &&
     ((pcVar3 = (char *)FUN_18012a9d0(lVar2,0x48), pcVar3 != (char *)0x0 && (*pcVar3 != '\0')))) {
    return pcVar3;
  }
  return (char *)0x0;
}


)B18012a9f0",
    "f5becd79a75b4361352a9b198ea3e3065e356a7345a8014ba004263872fc11a7",
    R"F18012a9f0C(FUN_180016fb0
FUN_18012a9d0)F18012a9f0C",
    R"F18012a9f0D()F18012a9f0D",
    R"F18012a9f0T("sv_skyname")F18012a9f0T",
    R"F18012a9f0F(15: if ((((lVar2 != 0) && (pcVar3 = (char *)FUN_18012a9d0(lVar2,0x18), pcVar3 != (char *)0x0)) &&
18: return pcVar3;
20: return (char *)0x0;)F18012a9f0F",
    R"F18012a9f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18012a9f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012a9f0() noexcept {
    return kFunction_0x18012a9f0;
}

// 0x18012aa50 FUN_18012aa50
// source: re/dump/decompile/0x18012aa50_FUN_18012aa50.c
// size: 175 bytes; thunk: false
// body sha256: 9f36ae1af7c6ffa5c680900b06273e79b9bc2474dc13d5a6c23acb66df798068
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012aa50{
    "0x18012aa50",
    "FUN_18012aa50",
    R"F18012aa50S(undefined FUN_18012aa50())F18012aa50S",
    R"B18012aa50(// 0x18012aa50  FUN_18012aa50
// size=175 thunk=false
// signature: undefined FUN_18012aa50()
// status: ok


void FUN_18012aa50(void)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (DAT_180400e50 == '\0') {
    DAT_180400e50 = '\x01';
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_18001d080(&local_48,
                  "48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 41 56 41 57 48 81 EC B0 01 00 00"
                  ,0x50);
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_18001d080(&local_28,"engine.dll",10);
    DAT_180400ea0 = FUN_180015f40(&local_28,&local_48);
    FUN_180014410("[SKY] LoadNamedSkys(engine) @ %p\n",DAT_180400ea0);
  }
  return;
}


)B18012aa50",
    "9f36ae1af7c6ffa5c680900b06273e79b9bc2474dc13d5a6c23acb66df798068",
    R"F18012aa50C(FUN_180014410
FUN_180015f40
FUN_18001d080)F18012aa50C",
    R"F18012aa50D(DAT_180400e50
DAT_180400ea0)F18012aa50D",
    R"F18012aa50T("engine.dll"
"[SKY] LoadNamedSkys(engine) @ %p\\n"
"48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 41 56 41 57 48 81 EC B0 01 00 00")F18012aa50T",
    R"F18012aa50F(19: if (DAT_180400e50 == '\0') {
36: return;)F18012aa50F",
    R"F18012aa50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180400e50.
TODO: recover the declaration, type and value for global/data reference DAT_180400ea0.)F18012aa50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012aa50() noexcept {
    return kFunction_0x18012aa50;
}

// 0x18012ab00 FUN_18012ab00
// source: re/dump/decompile/0x18012ab00_FUN_18012ab00.c
// size: 48 bytes; thunk: false
// body sha256: a5db194ce223baf8f14ee72eb210fa2d0a3bc52adcf4e051c1aa0aceccec74c9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012ab00{
    "0x18012ab00",
    "FUN_18012ab00",
    R"F18012ab00S(undefined FUN_18012ab00())F18012ab00S",
    R"B18012ab00(// 0x18012ab00  FUN_18012ab00
// size=48 thunk=false
// signature: undefined FUN_18012ab00()
// status: ok


void FUN_18012ab00(char *param_1)

{
  if (((param_1 != (char *)0x0) && (*param_1 != '\0')) &&
     (FUN_18012aa50(), DAT_180400ea0 != (code *)0x0)) {
    (*DAT_180400ea0)(param_1);
  }
  return;
}


)B18012ab00",
    "a5db194ce223baf8f14ee72eb210fa2d0a3bc52adcf4e051c1aa0aceccec74c9",
    R"F18012ab00C(FUN_18012aa50)F18012ab00C",
    R"F18012ab00D(DAT_180400ea0)F18012ab00D",
    R"F18012ab00T()F18012ab00T",
    R"F18012ab00F(10: if (((param_1 != (char *)0x0) && (*param_1 != '\0')) &&
14: return;)F18012ab00F",
    R"F18012ab00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180400ea0.
TODO: resolve the indirect call in body 11: (FUN_18012aa50(), DAT_180400ea0 != (code *)0x0)) {.
TODO: resolve the indirect call in body 12: (*DAT_180400ea0)(param_1);.)F18012ab00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012ab00() noexcept {
    return kFunction_0x18012ab00;
}

// 0x18012ab30 FUN_18012ab30
// source: re/dump/decompile/0x18012ab30_FUN_18012ab30.c
// size: 89 bytes; thunk: false
// body sha256: 05fc89527cc71f564651474dbc0591c2c49aa43f957c6bf6f98b53faaa2caa8a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012ab30{
    "0x18012ab30",
    "FUN_18012ab30",
    R"F18012ab30S(undefined FUN_18012ab30())F18012ab30S",
    R"B18012ab30(// 0x18012ab30  FUN_18012ab30
// size=89 thunk=false
// signature: undefined FUN_18012ab30()
// status: ok


void FUN_18012ab30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (ulonglong *)FUN_180012990();
  __stdio_common_vsprintf(*puVar1 | 2,s_No_custom_VTF_loaded__1803e7a90,0xc0,param_1,0,&local_res10)
  ;
  return;
}


)B18012ab30",
    "05fc89527cc71f564651474dbc0591c2c49aa43f957c6bf6f98b53faaa2caa8a",
    R"F18012ab30C(FUN_180012990)F18012ab30C",
    R"F18012ab30D()F18012ab30D",
    R"F18012ab30T()F18012ab30T",
    R"F18012ab30F(21: return;)F18012ab30F",
    R"F18012ab30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18012ab30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012ab30() noexcept {
    return kFunction_0x18012ab30;
}

// 0x18012ab90 FUN_18012ab90
// source: re/dump/decompile/0x18012ab90_FUN_18012ab90.c
// size: 22 bytes; thunk: false
// body sha256: 758105b60edd787d02f94f69220e2a748e8dbb4e44bba4daa2566e9a7ad37c82
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012ab90{
    "0x18012ab90",
    "FUN_18012ab90",
    R"F18012ab90S(undefined FUN_18012ab90())F18012ab90S",
    R"B18012ab90(// 0x18012ab90  FUN_18012ab90
// size=22 thunk=false
// signature: undefined FUN_18012ab90()
// status: ok


void FUN_18012ab90(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x58))();
  }
  return;
}


)B18012ab90",
    "758105b60edd787d02f94f69220e2a748e8dbb4e44bba4daa2566e9a7ad37c82",
    R"F18012ab90C()F18012ab90C",
    R"F18012ab90D()F18012ab90D",
    R"F18012ab90T()F18012ab90T",
    R"F18012ab90F(10: if (param_1 != (longlong *)0x0) {
13: return;)F18012ab90F",
    R"F18012ab90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 11: (**(code **)(*param_1 + 0x58))();.)F18012ab90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012ab90() noexcept {
    return kFunction_0x18012ab90;
}

// 0x18012abb0 FUN_18012abb0
// source: re/dump/decompile/0x18012abb0_FUN_18012abb0.c
// size: 97 bytes; thunk: false
// body sha256: 8bd3499987d211dd6dd672b752bc00b63791960203d103bb631b91178e20264d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012abb0{
    "0x18012abb0",
    "FUN_18012abb0",
    R"F18012abb0S(undefined FUN_18012abb0())F18012abb0S",
    R"B18012abb0(// 0x18012abb0  FUN_18012abb0
// size=97 thunk=false
// signature: undefined FUN_18012abb0()
// status: ok


longlong * FUN_18012abb0(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (((DAT_1803fa640 != (longlong *)0x0) &&
      (plVar2 = (longlong *)
                (**(code **)(*DAT_1803fa640 + 0x298))(DAT_1803fa640,param_1,"SkyBox textures",0,0),
      plVar2 != (longlong *)0x0)) && (cVar1 = (**(code **)(*plVar2 + 0x78))(plVar2), cVar1 == '\0'))
  {
    (**(code **)(*plVar2 + 0x50))(plVar2);
    return plVar2;
  }
  return (longlong *)0x0;
}


)B18012abb0",
    "8bd3499987d211dd6dd672b752bc00b63791960203d103bb631b91178e20264d",
    R"F18012abb0C()F18012abb0C",
    R"F18012abb0D(DAT_1803fa640)F18012abb0D",
    R"F18012abb0T("SkyBox textures")F18012abb0T",
    R"F18012abb0F(13: if (((DAT_1803fa640 != (longlong *)0x0) &&
19: return plVar2;
21: return (longlong *)0x0;)F18012abb0F",
    R"F18012abb0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa640.
TODO: resolve the indirect call in body 15: (**(code **)(*DAT_1803fa640 + 0x298))(DAT_1803fa640,param_1,"SkyBox textures",0,0),.
TODO: resolve the indirect call in body 16: plVar2 != (longlong *)0x0)) && (cVar1 = (**(code **)(*plVar2 + 0x78))(plVar2), cVar1 == '\0')).
TODO: resolve the indirect call in body 18: (**(code **)(*plVar2 + 0x50))(plVar2);.)F18012abb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012abb0() noexcept {
    return kFunction_0x18012abb0;
}

// 0x18012ac20 FUN_18012ac20
// source: re/dump/decompile/0x18012ac20_FUN_18012ac20.c
// size: 29 bytes; thunk: false
// body sha256: 3ebd07a588c5a138efc74d030c69fc8894c667b3e54352e10601d183b9b95cc9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012ac20{
    "0x18012ac20",
    "FUN_18012ac20",
    R"F18012ac20S(undefined FUN_18012ac20())F18012ac20S",
    R"B18012ac20(// 0x18012ac20  FUN_18012ac20
// size=29 thunk=false
// signature: undefined FUN_18012ac20()
// status: ok


undefined8 FUN_18012ac20(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x188))();
  }
  return uVar1;
}


)B18012ac20",
    "3ebd07a588c5a138efc74d030c69fc8894c667b3e54352e10601d183b9b95cc9",
    R"F18012ac20C()F18012ac20C",
    R"F18012ac20D()F18012ac20D",
    R"F18012ac20T()F18012ac20T",
    R"F18012ac20F(12: if (param_1 == (longlong *)0x0) {
15: else {
18: return uVar1;)F18012ac20F",
    R"F18012ac20U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 16: uVar1 = (**(code **)(*param_1 + 0x188))();.)F18012ac20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012ac20() noexcept {
    return kFunction_0x18012ac20;
}

// 0x18012ac40 FUN_18012ac40
// source: re/dump/decompile/0x18012ac40_FUN_18012ac40.c
// size: 111 bytes; thunk: false
// body sha256: 2f785dde7b6b561bf2490292a427bcee8a3e39f1926db75a456659c927c1d4ae
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012ac40{
    "0x18012ac40",
    "FUN_18012ac40",
    R"F18012ac40S(undefined FUN_18012ac40())F18012ac40S",
    R"B18012ac40(// 0x18012ac40  FUN_18012ac40
// size=111 thunk=false
// signature: undefined FUN_18012ac40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18012ac40(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  char local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (param_1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[0] = '\0';
    puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x58))(param_1,"$basetexture",local_18,0);
    if ((local_18[0] == '\0') || (puVar1 == (undefined8 *)0x0)) {
      uVar2 = 0;
    }
    else {
      puVar1 = (undefined8 *)(**(code **)*puVar1)(puVar1);
      uVar2 = 0;
      if (puVar1 != (undefined8 *)0x0) {
        uVar2 = (**(code **)*puVar1)(puVar1);
      }
    }
  }
  return uVar2;
}


)B18012ac40",
    "2f785dde7b6b561bf2490292a427bcee8a3e39f1926db75a456659c927c1d4ae",
    R"F18012ac40C()F18012ac40C",
    R"F18012ac40D(DAT_1803da4c0)F18012ac40D",
    R"F18012ac40T("$basetexture")F18012ac40T",
    R"F18012ac40F(19: if (param_1 == (longlong *)0x0) {
22: else {
25: if ((local_18[0] == '\0') || (puVar1 == (undefined8 *)0x0)) {
28: else {
31: if (puVar1 != (undefined8 *)0x0) {
36: return uVar2;)F18012ac40F",
    R"F18012ac40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 24: puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x58))(param_1,"$basetexture",local_18,0);.
TODO: resolve the indirect call in body 29: puVar1 = (undefined8 *)(**(code **)*puVar1)(puVar1);.
TODO: resolve the indirect call in body 32: uVar2 = (**(code **)*puVar1)(puVar1);.)F18012ac40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012ac40() noexcept {
    return kFunction_0x18012ac40;
}

// 0x18012acc0 FUN_18012acc0
// source: re/dump/decompile/0x18012acc0_FUN_18012acc0.c
// size: 161 bytes; thunk: false
// body sha256: 5ec22922c2c8eba80232cd93386096f5c02e77cc1aa5537a3c695226682eea8f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012acc0{
    "0x18012acc0",
    "FUN_18012acc0",
    R"F18012acc0S(undefined FUN_18012acc0())F18012acc0S",
    R"B18012acc0(// 0x18012acc0  FUN_18012acc0
// size=161 thunk=false
// signature: undefined FUN_18012acc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18012acc0(char *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  if (((DAT_1803fa640 != (longlong *)0x0) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    FUN_180203ab0(local_98,"skybox/%s",param_1);
    uVar1 = (**(code **)(*DAT_1803fa640 + 0x350))();
    local_a8 = uVar1;
    (**(code **)(*DAT_1803fa640 + 0x248))(DAT_1803fa640,local_98);
    (**(code **)(*DAT_1803fa640 + 0x358))(DAT_1803fa640,uVar1);
  }
  return;
}


)B18012acc0",
    "5ec22922c2c8eba80232cd93386096f5c02e77cc1aa5537a3c695226682eea8f",
    R"F18012acc0C(FUN_180203ab0)F18012acc0C",
    R"F18012acc0D(DAT_1803da4c0
DAT_1803fa640)F18012acc0D",
    R"F18012acc0T("skybox/%s")F18012acc0T",
    R"F18012acc0F(19: if (((DAT_1803fa640 != (longlong *)0x0) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
26: return;)F18012acc0F",
    R"F18012acc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa640.
TODO: resolve the indirect call in body 21: uVar1 = (**(code **)(*DAT_1803fa640 + 0x350))();.
TODO: resolve the indirect call in body 23: (**(code **)(*DAT_1803fa640 + 0x248))(DAT_1803fa640,local_98);.
TODO: resolve the indirect call in body 24: (**(code **)(*DAT_1803fa640 + 0x358))(DAT_1803fa640,uVar1);.)F18012acc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012acc0() noexcept {
    return kFunction_0x18012acc0;
}

// 0x18012ad70 FUN_18012ad70
// source: re/dump/decompile/0x18012ad70_FUN_18012ad70.c
// size: 288 bytes; thunk: false
// body sha256: 02d1cbc26b834d127ca47caeb31d32bbe4a2166a4f30aff9e4f1e66b5056b943
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012ad70{
    "0x18012ad70",
    "FUN_18012ad70",
    R"F18012ad70S(undefined FUN_18012ad70())F18012ad70S",
    R"B18012ad70(// 0x18012ad70  FUN_18012ad70
// size=288 thunk=false
// signature: undefined FUN_18012ad70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18012ad70(char param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  int local_38;
  char local_34;
  char local_33 [3];
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  iVar5 = 0;
  while (iVar5 < 6) {
    plVar3 = (longlong *)(&DAT_180400bd0)[iVar5];
    puVar4 = &DAT_180401150;
    if (param_1 == '\0') {
      puVar4 = &DAT_180401118;
    }
    if ((plVar3 == (longlong *)0x0) || (lVar1 = puVar4[iVar5], lVar1 == 0)) {
      iVar5 = iVar5 + 1;
    }
    else {
      local_34 = '\0';
      local_38 = iVar5;
      plVar2 = (longlong *)(**(code **)(*plVar3 + 0x58))(plVar3,"$basetexture",&local_34,0);
      if ((local_34 != '\0') && (plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x70))(plVar2,lVar1);
      }
      local_33[0] = '\0';
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x58))(plVar3,"$frame",local_33);
      if ((local_33[0] != '\0') && (plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
      }
      iVar5 = iVar5 + 1;
    }
  }
  return;
}


)B18012ad70",
    "02d1cbc26b834d127ca47caeb31d32bbe4a2166a4f30aff9e4f1e66b5056b943",
    R"F18012ad70C()F18012ad70C",
    R"F18012ad70D(DAT_1803da4c0
DAT_180400bd0
DAT_180401118
DAT_180401150)F18012ad70D",
    R"F18012ad70T("$frame"
"$basetexture")F18012ad70T",
    R"F18012ad70F(25: while (iVar5 < 6) {
28: if (param_1 == '\0') {
31: if ((plVar3 == (longlong *)0x0) || (lVar1 = puVar4[iVar5], lVar1 == 0)) {
34: else {
38: if ((local_34 != '\0') && (plVar2 != (longlong *)0x0)) {
43: if ((local_33[0] != '\0') && (plVar3 != (longlong *)0x0)) {
49: return;)F18012ad70F",
    R"F18012ad70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_180400bd0.
TODO: recover the declaration, type and value for global/data reference DAT_180401118.
TODO: recover the declaration, type and value for global/data reference DAT_180401150.
TODO: resolve the indirect call in body 37: plVar2 = (longlong *)(**(code **)(*plVar3 + 0x58))(plVar3,"$basetexture",&local_34,0);.
TODO: resolve the indirect call in body 39: (**(code **)(*plVar2 + 0x70))(plVar2,lVar1);.
TODO: resolve the indirect call in body 42: plVar3 = (longlong *)(**(code **)(*plVar3 + 0x58))(plVar3,"$frame",local_33);.
TODO: resolve the indirect call in body 44: (**(code **)(*plVar3 + 0x20))(plVar3,param_2);.)F18012ad70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012ad70() noexcept {
    return kFunction_0x18012ad70;
}

// 0x18012ae90 FUN_18012ae90
// source: re/dump/decompile/0x18012ae90_FUN_18012ae90.c
// size: 653 bytes; thunk: false
// body sha256: c0cb385bfb08337744e4b8d58fcc25d950422cb0be6e9b286c326e5e5da51a20
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012ae90{
    "0x18012ae90",
    "FUN_18012ae90",
    R"F18012ae90S(undefined FUN_18012ae90())F18012ae90S",
    R"B18012ae90(// 0x18012ae90  FUN_18012ae90
// size=653 thunk=false
// signature: undefined FUN_18012ae90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18012ae90(undefined8 param_1)

{
  DWORD DVar1;
  HMODULE hModule;
  size_t sVar2;
  undefined8 uVar3;
  wchar_t **ppwVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar5;
  undefined1 auStack_2e8 [32];
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 *local_2a0;
  undefined8 *local_298;
  undefined8 local_290;
  undefined1 local_288 [32];
  undefined8 local_268 [4];
  wchar_t *local_248;
  wchar_t *local_240;
  wchar_t *local_238 [66];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_2e8;
  local_2c8 = 0;
  local_290 = param_1;
  if ((DAT_18042cd64 & 1) == 0) {
    DAT_18042cd64 = DAT_18042cd64 | 1;
    atexit(FUN_18030a200);
  }
  if (DAT_1803e71c8 == 0) {
    memset(local_238,0,0x208);
    local_248 = L"client.dll";
    local_240 = L"engine.dll";
    ppwVar4 = &local_248;
    do {
      hModule = GetModuleHandleW(*ppwVar4);
      if ((hModule != (HMODULE)0x0) &&
         (DVar1 = GetModuleFileNameW(hModule,(LPWSTR)local_238,0x104), DVar1 != 0)) {
        local_2a0 = local_268;
        local_298 = &local_2c0;
        sVar2 = wcslen((wchar_t *)local_238);
        local_2c0 = 0;
        uStack_2b8 = 0;
        local_2b0 = 0;
        local_2a8 = 0;
        FUN_180211510(&local_2c0,local_238,sVar2);
        local_2c8 = 0;
        uVar3 = FUN_180065cd0(&local_2c0,local_268);
        uVar3 = FUN_18012b120(extraout_XMM0_Da,local_288,uVar3);
        FUN_180067660(&DAT_1803e71b8,uVar3);
        FUN_18021e290(local_288);
        FUN_18021e290(&local_2c0);
        if (DAT_1803e71c8 != 0) {
          FUN_18020e540(param_1,&DAT_1803e71b8);
          return param_1;
        }
      }
      ppwVar4 = ppwVar4 + 1;
    } while (ppwVar4 != local_238);
    DVar1 = GetCurrentDirectoryW(0x104,(LPWSTR)local_238);
    if (DVar1 != 0) {
      local_298 = &local_2c0;
      local_2a0 = &local_2c0;
      sVar2 = wcslen((wchar_t *)local_238);
      local_2c0 = 0;
      uStack_2b8 = 0;
      local_2b0 = 0;
      local_2a8 = 0;
      uVar5 = FUN_180211510(&local_2c0,local_238,sVar2);
      local_2c8 = 0;
      uVar3 = FUN_18012b120(uVar5,local_288,&local_2c0);
      FUN_180067660(&DAT_1803e71b8,uVar3);
      FUN_18021e290(local_288);
    }
    FUN_18020e540(param_1,&DAT_1803e71b8);
  }
  else {
    FUN_18020e540(param_1,&DAT_1803e71b8);
  }
  return param_1;
}


)B18012ae90",
    "c0cb385bfb08337744e4b8d58fcc25d950422cb0be6e9b286c326e5e5da51a20",
    R"F18012ae90C(FUN_180065cd0
FUN_180067660
FUN_18012b120
FUN_18020e540
FUN_180211510
FUN_18021e290
FUN_18030a200)F18012ae90C",
    R"F18012ae90D(DAT_1803da4c0
DAT_1803e71b8
DAT_1803e71c8
DAT_18042cd64)F18012ae90D",
    R"F18012ae90T("client.dll"
"engine.dll")F18012ae90T",
    R"F18012ae90F(38: if ((DAT_18042cd64 & 1) == 0) {
42: if (DAT_1803e71c8 == 0) {
47: do {
49: if ((hModule != (HMODULE)0x0) &&
65: if (DAT_1803e71c8 != 0) {
67: return param_1;
73: if (DVar1 != 0) {
89: else {
92: return param_1;)F18012ae90F",
    R"F18012ae90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e71b8.
TODO: recover the declaration, type and value for global/data reference DAT_1803e71c8.
TODO: recover the declaration, type and value for global/data reference DAT_18042cd64.)F18012ae90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012ae90() noexcept {
    return kFunction_0x18012ae90;
}

// 0x18012b120 FUN_18012b120
// source: re/dump/decompile/0x18012b120_FUN_18012b120.c
// size: 977 bytes; thunk: false
// body sha256: ae836600148dd8c3f6f0968ea3f980eb0e5b995248ecfe720b64c40f20300c62
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012b120{
    "0x18012b120",
    "FUN_18012b120",
    R"F18012b120S(undefined FUN_18012b120())F18012b120S",
    R"B18012b120(// 0x18012b120  FUN_18012b120
// size=977 thunk=false
// signature: undefined FUN_18012b120()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18012b120(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  short *psVar9;
  int iVar10;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  iVar10 = 0;
  local_168 = 0;
  local_f8 = param_2;
  local_40 = param_3;
  do {
    if (param_3[2] == 0) break;
    puVar8 = param_3;
    if (7 < (ulonglong)param_3[3]) {
      puVar8 = (undefined8 *)*param_3;
    }
    psVar9 = (short *)((longlong)puVar8 + param_3[2] * 2);
    psVar5 = (short *)FUN_180065240();
    if (psVar9 == psVar5) break;
    do {
      if ((*psVar5 != 0x5c) && (*psVar5 != 0x2f)) break;
      psVar5 = psVar5 + 1;
    } while (psVar5 != psVar9);
    if (psVar9 == psVar5) break;
    local_f0 = &local_118;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    local_100 = 0;
    FUN_180211510(&local_118,L"materials",9);
    local_168 = 1;
    local_e8 = &local_138;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    local_120 = 0;
    FUN_180211510(&local_138,L"garrysmod",9);
    local_168 = 3;
    uVar6 = FUN_180066720(local_a0,param_3,&local_138);
    local_168 = 7;
    uVar6 = FUN_180066720(local_c0,uVar6,&local_118);
    local_168 = 0xf;
    puVar7 = (uint *)FUN_180067c80(local_e0,uVar6);
    uVar1 = *puVar7;
    local_168 = 7;
    FUN_18021e290(local_c0);
    local_168 = 3;
    FUN_18021e290(local_a0);
    local_168 = 1;
    FUN_18021e290(&local_138);
    local_168 = 0;
    FUN_18021e290(&local_118);
    local_140 = &local_160;
    if (1 < uVar1) {
      local_160 = 0;
      uStack_158 = 0;
      local_150 = 0;
      local_148 = 0;
      FUN_180211510(&local_160,L"garrysmod",9);
      local_168 = 0;
      FUN_180066720(param_2,param_3,&local_160);
      local_168 = 0x10;
      FUN_18021e290(&local_160);
      goto LAB_18012b419;
    }
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0;
    local_148 = 0;
    FUN_180211510(&local_160,L"materials",9);
    local_168 = 0x20;
    uVar6 = FUN_180066720(local_80,param_3,&local_160);
    local_168 = 0x60;
    puVar7 = (uint *)FUN_180067c80(local_d0,uVar6);
    uVar1 = *puVar7;
    local_168 = 0x20;
    FUN_18021e290(local_80);
    local_168 = 0;
    FUN_18021e290(&local_160);
    if (1 < uVar1) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined4 *)param_2 = *(undefined4 *)param_3;
      *(undefined4 *)((longlong)param_2 + 4) = uVar2;
      *(undefined4 *)(param_2 + 1) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
      uVar6 = param_3[3];
      param_2[2] = param_3[2];
      param_2[3] = uVar6;
      *(undefined2 *)param_3 = 0;
      param_3[2] = 0;
      param_3[3] = 7;
      local_168 = 0x10;
      goto LAB_18012b419;
    }
    iVar10 = iVar10 + 1;
    uVar6 = FUN_180065cd0(param_3,local_60);
    FUN_180067660(param_3,uVar6);
    FUN_18021e290(local_60);
  } while (iVar10 < 6);
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  local_168 = 0x10;
LAB_18012b419:
  FUN_18021e290(param_3);
  return param_2;
}


)B18012b120",
    "ae836600148dd8c3f6f0968ea3f980eb0e5b995248ecfe720b64c40f20300c62",
    R"F18012b120C(FUN_180065240
FUN_180065cd0
FUN_180066720
FUN_180067660
FUN_180067c80
FUN_180211510
FUN_18021e290)F18012b120C",
    R"F18012b120D(LAB_18012b419
DAT_1803da4c0)F18012b120D",
    R"F18012b120T("garrysmod"
"materials")F18012b120T",
    R"F18012b120F(54: do {
55: if (param_3[2] == 0) break;
57: if (7 < (ulonglong)param_3[3]) {
62: if (psVar9 == psVar5) break;
63: do {
64: if ((*psVar5 != 0x5c) && (*psVar5 != 0x2f)) break;
67: if (psVar9 == psVar5) break;
97: if (1 < uVar1) {
107: goto LAB_18012b419;
123: if (1 < uVar1) {
142: goto LAB_18012b419;
157: LAB_18012b419:
159: return param_2;)F18012b120F",
    R"F18012b120U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18012b419.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18012b120U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012b120() noexcept {
    return kFunction_0x18012b120;
}

// 0x18012b500 FUN_18012b500
// source: re/dump/decompile/0x18012b500_FUN_18012b500.c
// size: 277 bytes; thunk: false
// body sha256: 220869988857642f8f03019ba112caa7fffa3b849bc7d5948e034609cb8933d0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012b500{
    "0x18012b500",
    "FUN_18012b500",
    R"F18012b500S(undefined FUN_18012b500())F18012b500S",
    R"B18012b500(// 0x18012b500  FUN_18012b500
// size=277 thunk=false
// signature: undefined FUN_18012b500()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_18012b500(undefined8 param_1,char *param_2,__int64 param_3)

{
  bool bVar1;
  undefined1 auStack_178 [48];
  basic_ios<char,std::char_traits<char>_> *local_148;
  int iStack_13c;
  longlong local_138;
  undefined1 local_130 [8];
  byte abStack_128 [152];
  basic_ios<char,std::char_traits<char>_> local_90 [104];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_178;
  memset(&local_138,0,0x108);
  FUN_1802022a0(&local_138,param_1,0x30);
  if ((abStack_128[*(int *)(local_138 + 4)] & 6) == 0) {
    std::basic_ostream<char,std::char_traits<char>_>::write
              ((basic_ostream<char,std::char_traits<char>_> *)&local_138,param_2,param_3);
    bVar1 = *(int *)(abStack_128 + *(int *)(local_138 + 4)) == 0;
  }
  else {
    bVar1 = false;
  }
  local_148 = local_90;
  *(undefined ***)(local_130 + (longlong)*(int *)(local_138 + 4) + -8) =
       vftable_std_std_D_DU__char_traits___basic_ofstream;
  *(int *)((longlong)&iStack_13c + (longlong)*(int *)(local_138 + 4)) =
       *(int *)(local_138 + 4) + -0xa8;
  FUN_18020f850(local_130);
  *(code **)(local_130 + (longlong)*(int *)(local_138 + 4) + -8) = _vftable__exref;
  *(int *)((longlong)&iStack_13c + (longlong)*(int *)(local_138 + 4)) =
       *(int *)(local_138 + 4) + -0x10;
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_90);
  return bVar1;
}


)B18012b500",
    "220869988857642f8f03019ba112caa7fffa3b849bc7d5948e034609cb8933d0",
    R"F18012b500C(FUN_1802022a0
FUN_18020f850)F18012b500C",
    R"F18012b500D(DAT_1803da4c0)F18012b500D",
    R"F18012b500T()F18012b500T",
    R"F18012b500F(25: if ((abStack_128[*(int *)(local_138 + 4)] & 6) == 0) {
30: else {
43: return bVar1;)F18012b500F",
    R"F18012b500U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 39: *(code **)(local_130 + (longlong)*(int *)(local_138 + 4) + -8) = _vftable__exref;.)F18012b500U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012b500() noexcept {
    return kFunction_0x18012b500;
}

// 0x18012b620 FUN_18012b620
// source: re/dump/decompile/0x18012b620_FUN_18012b620.c
// size: 1560 bytes; thunk: false
// body sha256: 22ac709f3dd2a4aa24c6f35609d3554fe40ad968236535474d669f7c5dc0a159
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012b620{
    "0x18012b620",
    "FUN_18012b620",
    R"F18012b620S(undefined FUN_18012b620())F18012b620S",
    R"B18012b620(// 0x18012b620  FUN_18012b620
// size=1560 thunk=false
// signature: undefined FUN_18012b620()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18012b620(undefined8 param_1,int param_2,int param_3,undefined1 *param_4)

{
  basic_streambuf<char,std::char_traits<char>_> bVar1;
  basic_streambuf<char,std::char_traits<char>_> *pbVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  basic_streambuf<char,std::char_traits<char>_> *pbVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  basic_streambuf<char,std::char_traits<char>_> *pbVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 ****ppppuVar17;
  undefined1 uVar18;
  size_t _Size;
  undefined8 uStack_240;
  undefined1 auStack_238 [48];
  undefined4 local_208;
  basic_streambuf<char,std::char_traits<char>_> **local_1f8;
  undefined2 local_1f0;
  undefined4 local_1ee;
  undefined2 local_1ea;
  longlong local_1e8 [2];
  byte local_1d8 [56];
  undefined8 auStack_1a0 [13];
  basic_ios<char,std::char_traits<char>_> local_138 [96];
  undefined8 ***local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  basic_streambuf<char,std::char_traits<char>_> *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong local_a0;
  basic_streambuf<char,std::char_traits<char>_> *local_98;
  undefined8 **ppuStack_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  puVar15 = auStack_238;
  puVar16 = auStack_238;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_238;
  pbVar14 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
  local_208 = 0;
  *param_4 = 0;
  FUN_18020e540(local_78,param_1);
  local_1f8 = &local_b8;
  local_b8 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_180211510(&local_b8,L".vmt",4);
  local_208 = 0;
  FUN_180065680(local_78,&local_b8);
  FUN_18021e290(&local_b8);
  puVar6 = (uint *)FUN_180067c80(&local_1f8);
  puVar4 = auStack_238;
  if (1 < *puVar6) {
    memset(local_1e8,0,0x110);
    FUN_180202040(local_1e8,local_78,0x20);
    if ((local_1d8[*(int *)(local_1e8[0] + 4)] & 6) == 0) {
      pbVar2 = *(basic_streambuf<char,std::char_traits<char>_> **)
                ((longlong)auStack_1a0 + (longlong)*(int *)(local_1e8[0] + 4));
      local_d8 = (undefined8 ****)0x0;
      uStack_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      uVar18 = 0;
      if (pbVar2 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
LAB_18012b783:
        local_c8 = 0;
        local_c0 = 0xf;
        local_d8 = (undefined8 ***)((ulonglong)local_d8 & 0xffffffffffffff00);
      }
      else {
        iVar5 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc(pbVar2);
        pbVar9 = pbVar14;
        if (iVar5 != -1) {
          uVar18 = (undefined1)iVar5;
          pbVar9 = pbVar2;
        }
        if (pbVar9 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) goto LAB_18012b783;
        local_1f8 = (basic_streambuf<char,std::char_traits<char>_> **)0x0;
        local_1f0 = 1;
        local_1ee = uStack_b0._2_4_;
        local_1ea = uStack_b0._6_2_;
        uStack_b0._0_2_ = CONCAT11(uVar18,1);
        local_b8 = pbVar9;
        FUN_1802117c0(&local_d8,&local_b8,&local_1f8);
      }
      uVar10 = local_c8;
      local_98 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
      ppuStack_90 = (undefined8 ***)0x0;
      local_88 = 0;
      local_80 = 0;
      ppppuVar17 = &local_d8;
      if (0xf < local_c0) {
        ppppuVar17 = (undefined8 ****)local_d8;
      }
      if (0x7fffffffffffffff < local_c8) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      if (local_c8 < 0x10) {
        local_88 = local_c8;
        local_80 = 0xf;
        local_98 = (basic_streambuf<char,std::char_traits<char>_> *)*ppppuVar17;
        ppuStack_90 = ppppuVar17[1];
        puVar16 = auStack_238;
      }
      else {
        uVar13 = local_c8 | 0xf;
        if (uVar13 < 0x8000000000000000) goto LAB_18012b88c;
        uVar7 = 0x8000000000000027;
        uVar13 = 0x7fffffffffffffff;
        puVar15 = auStack_238;
        while( true ) {
          *(undefined8 *)(puVar15 + -8) = 0x18012b87d;
          lVar8 = FUN_1802d8350(uVar7);
          if (lVar8 != 0) break;
          pcVar3 = (code *)swi(0x29);
          uVar13 = (*pcVar3)(5);
          puVar15 = puVar15 + 8;
LAB_18012b88c:
          if (uVar13 < 0x16) {
            uVar13 = 0x16;
          }
          if (uVar13 == 0xffffffffffffffff) goto LAB_18012b8d4;
          if (uVar13 + 1 < 0x1000) {
            *(undefined8 *)(puVar15 + -8) = 0x18012b8d4;
            pbVar14 = (basic_streambuf<char,std::char_traits<char>_> *)FUN_1802d8350();
            goto LAB_18012b8d4;
          }
          uVar7 = uVar13 + 0x28;
          if (uVar7 <= uVar13 + 1) {
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar15 + -8) = &UNK_18012bc39;
            FUN_180012fe0();
          }
        }
        pbVar14 = (basic_streambuf<char,std::char_traits<char>_> *)
                  (lVar8 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(pbVar14 + -8) = lVar8;
LAB_18012b8d4:
        local_88 = uVar10;
        local_98 = pbVar14;
        local_80 = uVar13;
        *(undefined8 *)(puVar15 + -8) = 0x18012b8f8;
        memcpy(pbVar14,ppppuVar17,uVar10 + 1);
        puVar16 = puVar15;
      }
      pbVar14 = local_98;
      if (local_80 < 0x10) {
        pbVar14 = (basic_streambuf<char,std::char_traits<char>_> *)&local_98;
      }
      pbVar2 = pbVar14 + local_88;
      for (; pbVar14 != pbVar2; pbVar14 = pbVar14 + 1) {
        bVar1 = *pbVar14;
        *(undefined8 *)(puVar16 + -8) = 0x18012b949;
        iVar5 = tolower((uint)(byte)bVar1);
        *pbVar14 = SUB41(iVar5,0);
      }
      pbVar14 = (basic_streambuf<char,std::char_traits<char>_> *)&local_98;
      if (0xf < local_80) {
        pbVar14 = local_98;
      }
      if (0x13 < local_88) {
        pbVar2 = pbVar14 + local_88;
        *(undefined8 *)(puVar16 + -8) = 0x18012b99d;
        pbVar9 = (basic_streambuf<char,std::char_traits<char>_> *)
                 thunk_FUN_1802d6b60(pbVar14,pbVar2,"basetexturetransform",0x14);
        if ((pbVar9 != pbVar2) &&
           (uVar10 = (longlong)pbVar9 - (longlong)pbVar14, uVar10 != 0xffffffffffffffff)) {
          ppppuVar17 = &local_d8;
          if (0xf < local_c0) {
            ppppuVar17 = (undefined8 ****)local_d8;
          }
          if (uVar10 < local_c8) {
            lVar8 = local_c8 + (longlong)ppppuVar17;
            *(undefined8 *)(puVar16 + -8) = 0x18012b9e1;
            lVar11 = thunk_FUN_1802d5c20((longlong)ppppuVar17 + uVar10,lVar8,0x22);
            if ((lVar11 != lVar8) && (lVar11 - (longlong)ppppuVar17 != -1)) {
              uVar10 = (lVar11 - (longlong)ppppuVar17) + 1;
              ppppuVar17 = &local_d8;
              if (0xf < local_c0) {
                ppppuVar17 = (undefined8 ****)local_d8;
              }
              if (uVar10 < local_c8) {
                lVar8 = (longlong)ppppuVar17 + local_c8;
                *(undefined8 *)(puVar16 + -8) = 0x18012ba28;
                lVar11 = thunk_FUN_1802d5c20((longlong)ppppuVar17 + uVar10,lVar8,0x22);
                if ((lVar11 != lVar8) && (lVar11 = lVar11 - (longlong)ppppuVar17, lVar11 != -1)) {
                  uVar10 = lVar11 + 1;
                  ppppuVar17 = &local_d8;
                  if (0xf < local_c0) {
                    ppppuVar17 = (undefined8 ****)local_d8;
                  }
                  if (uVar10 < local_c8) {
                    lVar8 = local_c8 + (longlong)ppppuVar17;
                    *(undefined8 *)(puVar16 + -8) = 0x18012ba73;
                    lVar12 = thunk_FUN_1802d5c20((longlong)ppppuVar17 + uVar10,lVar8,0x22);
                    if (((lVar12 != lVar8) &&
                        (uVar13 = lVar12 - (longlong)ppppuVar17, uVar13 != 0xffffffffffffffff)) &&
                       (uVar10 < uVar13)) {
                      *(undefined8 *)(puVar16 + -8) = 0x18012baac;
                      FUN_18020e670(&local_d8,&local_b8,uVar10,(uVar13 - lVar11) + -1);
                      if (local_a8 - 1U < 0x9f) {
                        pbVar14 = (basic_streambuf<char,std::char_traits<char>_> *)&local_b8;
                        if (0xf < local_a0) {
                          pbVar14 = local_b8;
                        }
                        _Size = local_a8 + 1;
                        *(undefined8 *)(puVar16 + -8) = 0x18012bae6;
                        memcpy(param_4,pbVar14,_Size);
                        *(undefined8 *)(puVar16 + -8) = 0x18012baf3;
                        FUN_18020e450(&local_b8);
                        *(undefined8 *)(puVar16 + -8) = 0x18012bb00;
                        FUN_18020e450(&local_98);
                        *(undefined8 *)(puVar16 + -8) = 0x18012bb0a;
                        FUN_18020e450(&local_d8);
                        *(basic_ios<char,std::char_traits<char>_> **)(puVar16 + 0x40) = local_138;
                        *(undefined ***)
                         (puVar16 + (longlong)*(int *)(*(longlong *)(puVar16 + 0x50) + 4) + 0x50) =
                             vftable_std_std_D_DU__char_traits___basic_ifstream;
                        *(int *)(puVar16 +
                                (longlong)*(int *)(*(longlong *)(puVar16 + 0x50) + 4) + 0x4c) =
                             *(int *)(*(longlong *)(puVar16 + 0x50) + 4) + -0xb0;
                        *(undefined8 *)(puVar16 + -8) = 0x18012bb46;
                        FUN_18020f850(puVar16 + 0x60);
                        *(undefined8 *)(puVar16 + -8) = 0x18012bb52;
                        std::basic_istream<char,std::char_traits<char>_>::
                        ~basic_istream<char,std::char_traits<char>_>
                                  ((basic_istream<char,std::char_traits<char>_> *)(puVar16 + 0x68));
                        *(undefined8 *)(puVar16 + -8) = 0x18012bb5c;
                        std::basic_ios<char,std::char_traits<char>_>::
                        ~basic_ios<char,std::char_traits<char>_>(local_138);
                        goto LAB_18012bbff;
                      }
                      *(undefined8 *)(puVar16 + -8) = 0x18012bb6d;
                      FUN_18020e450(&local_b8);
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(undefined8 *)(puVar16 + -8) = 0x18012bb7a;
      FUN_18020e450(&local_98);
      *(undefined8 *)(puVar16 + -8) = 0x18012bb84;
      FUN_18020e450(&local_d8);
    }
    *(basic_ios<char,std::char_traits<char>_> **)(puVar16 + 0x40) = local_138;
    *(undefined ***)(puVar16 + (longlong)*(int *)(*(longlong *)(puVar16 + 0x50) + 4) + 0x50) =
         vftable_std_std_D_DU__char_traits___basic_ifstream;
    *(int *)(puVar16 + (longlong)*(int *)(*(longlong *)(puVar16 + 0x50) + 4) + 0x4c) =
         *(int *)(*(longlong *)(puVar16 + 0x50) + 4) + -0xb0;
    *(undefined8 *)(puVar16 + -8) = 0x18012bbc0;
    FUN_18020f850(puVar16 + 0x60);
    *(undefined8 *)(puVar16 + -8) = 0x18012bbcc;
    std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
              ((basic_istream<char,std::char_traits<char>_> *)(puVar16 + 0x68));
    *(undefined8 *)(puVar16 + -8) = 0x18012bbd6;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              (local_138);
    puVar4 = puVar16;
  }
  puVar16 = puVar4;
  if ((0 < param_3) && (param_3 < param_2)) {
    *(undefined8 *)(puVar16 + -8) = 0x18012bbfe;
    FUN_180012a60(param_4,0xa0,"center 0 0 scale 1 %d rotate 0 translate 0 0",
                  (longlong)param_2 / (longlong)param_3 & 0xffffffff);
  }
LAB_18012bbff:
  *(undefined8 *)(puVar16 + -8) = 0x18012bc0b;
  FUN_18021e290(local_78);
  *(undefined8 *)(puVar16 + -8) = 0x18012bc1a;
  return;
}


)B18012b620",
    "22ac709f3dd2a4aa24c6f35609d3554fe40ad968236535474d669f7c5dc0a159",
    R"F18012b620C(FUN_180012a60
FUN_180012fe0
FUN_1800130a0
FUN_180065680
FUN_180067c80
FUN_180202040
FUN_18020e450
FUN_18020e540
FUN_18020e670
FUN_18020f850
FUN_180211510
FUN_1802117c0
FUN_18021e290
FUN_1802d8350)F18012b620C",
    R"F18012b620D(LAB_18012b783
LAB_18012b88c
LAB_18012b8d4
LAB_18012bbff
UNK_18012bc39
DAT_1803da4c0)F18012b620D",
    R"F18012b620T(".vmt"
"basetexturetransform"
"center 0 0 scale 1 %d rotate 0 translate 0 0")F18012b620T",
    R"F18012b620F(75: if (1 < *puVar6) {
78: if ((local_1d8[*(int *)(local_1e8[0] + 4)] & 6) == 0) {
86: if (pbVar2 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
87: LAB_18012b783:
92: else {
95: if (iVar5 != -1) {
99: if (pbVar9 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) goto LAB_18012b783;
114: if (0xf < local_c0) {
117: if (0x7fffffffffffffff < local_c8) {
121: if (local_c8 < 0x10) {
128: else {
130: if (uVar13 < 0x8000000000000000) goto LAB_18012b88c;
134: while( true ) {
137: if (lVar8 != 0) break;
141: LAB_18012b88c:
142: if (uVar13 < 0x16) {
145: if (uVar13 == 0xffffffffffffffff) goto LAB_18012b8d4;
146: if (uVar13 + 1 < 0x1000) {
149: goto LAB_18012b8d4;
152: if (uVar7 <= uVar13 + 1) {
161: LAB_18012b8d4:
170: if (local_80 < 0x10) {
174: for (; pbVar14 != pbVar2; pbVar14 = pbVar14 + 1) {
181: if (0xf < local_80) {
184: if (0x13 < local_88) {
189: if ((pbVar9 != pbVar2) &&
192: if (0xf < local_c0) {
195: if (uVar10 < local_c8) {
199: if ((lVar11 != lVar8) && (lVar11 - (longlong)ppppuVar17 != -1)) {
202: if (0xf < local_c0) {
205: if (uVar10 < local_c8) {
209: if ((lVar11 != lVar8) && (lVar11 = lVar11 - (longlong)ppppuVar17, lVar11 != -1)) {
212: if (0xf < local_c0) {
215: if (uVar10 < local_c8) {
219: if (((lVar12 != lVar8) &&
224: if (local_a8 - 1U < 0x9f) {
226: if (0xf < local_a0) {
254: goto LAB_18012bbff;
287: if ((0 < param_3) && (param_3 < param_2)) {
292: LAB_18012bbff:
296: return;)F18012b620F",
    R"F18012b620U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18012b783.
TODO: recover the declaration, type and value for global/data reference LAB_18012b88c.
TODO: recover the declaration, type and value for global/data reference LAB_18012b8d4.
TODO: recover the declaration, type and value for global/data reference LAB_18012bbff.
TODO: recover the declaration, type and value for global/data reference UNK_18012bc39.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 138: pcVar3 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 139: uVar13 = (*pcVar3)(5);.)F18012b620U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012b620() noexcept {
    return kFunction_0x18012b620;
}

// 0x18012bc40 FUN_18012bc40
// source: re/dump/decompile/0x18012bc40_FUN_18012bc40.c
// size: 2733 bytes; thunk: false
// body sha256: 873027dafde434ab3bf9a2fecff0612839e742019cbf7de23c4858a715fc3c56
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012bc40{
    "0x18012bc40",
    "FUN_18012bc40",
    R"F18012bc40S(undefined FUN_18012bc40())F18012bc40S",
    R"B18012bc40(// 0x18012bc40  FUN_18012bc40
// size=2733 thunk=false
// signature: undefined FUN_18012bc40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18012bc40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  basic_streambuf<char,std::char_traits<char>_> *this;
  byte bVar3;
  longlong lVar4;
  undefined2 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  wint_t wVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 ****ppppuVar21;
  undefined1 uVar22;
  basic_streambuf<char,std::char_traits<char>_> *pbVar23;
  longlong *plVar24;
  longlong *plVar25;
  longlong *plVar26;
  undefined1 auStack_368 [48];
  undefined4 local_338;
  int local_334;
  basic_streambuf<char,std::char_traits<char>_> *local_328;
  undefined8 uStack_320;
  basic_streambuf<char,std::char_traits<char>_> **local_318;
  basic_streambuf<char,std::char_traits<char>_> *local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  ulonglong local_2f8;
  basic_ios<char,std::char_traits<char>_> *local_2f0;
  int local_2e8 [2];
  int local_2e0;
  basic_streambuf<char,std::char_traits<char>_> *local_2d8;
  undefined8 uStack_2d0;
  longlong *local_2c8;
  ulonglong local_2c0;
  basic_streambuf<char,std::char_traits<char>_> *local_2b8;
  longlong *plStack_2b0;
  undefined8 local_2a8;
  undefined2 local_2a0;
  undefined4 local_29e;
  undefined2 local_29a;
  basic_streambuf<char,std::char_traits<char>_> *local_298;
  longlong *plStack_290;
  longlong local_288;
  longlong *plStack_280;
  basic_streambuf<char,std::char_traits<char>_> *local_278;
  longlong *plStack_270;
  longlong local_268;
  longlong *plStack_260;
  basic_streambuf<char,std::char_traits<char>_> *local_258;
  longlong *plStack_250;
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined8 ***local_208 [2];
  ulonglong local_1f8;
  ulonglong local_1f0;
  undefined8 ***local_1e8;
  undefined8 uStack_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  longlong local_1c8;
  longlong *plStack_1c0;
  longlong local_1b8;
  longlong *plStack_1b0;
  undefined1 local_1a8 [32];
  undefined1 local_188 [28];
  int iStack_16c;
  longlong local_168 [2];
  undefined1 local_158 [8];
  basic_istream<char,std::char_traits<char>_> local_150 [48];
  undefined8 auStack_120 [13];
  basic_ios<char,std::char_traits<char>_> local_b8 [96];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_368;
  local_338 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    local_334 = 0;
    local_2f0 = (basic_ios<char,std::char_traits<char>_> *)&local_310;
    local_310 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    uStack_308 = 0;
    local_300 = 0;
    local_2f8 = 0;
    FUN_180211510(&local_310,L"materials",9);
    local_338 = 0;
    FUN_180066720(local_1a8,param_1,&local_310);
    FUN_18021e290(&local_310);
    puVar17 = (uint *)FUN_180067c80(local_2e8,local_1a8);
    if (1 < *puVar17) {
      local_258 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
      plStack_250 = (longlong *)0x0;
      iVar15 = FUN_180201e70(&local_258,local_1a8,0);
      plVar24 = plStack_250;
      local_298 = local_258;
      local_2f0 = (basic_ios<char,std::char_traits<char>_> *)CONCAT44(local_2f0._4_4_,iVar15);
      local_1c8 = 0;
      plStack_1c0 = (longlong *)0x0;
      local_318 = &local_328;
      if (plStack_250 == (longlong *)0x0) {
        plVar25 = (longlong *)0x8;
      }
      else {
        plVar25 = plStack_250 + 1;
        LOCK();
        *(int *)plVar25 = (int)*plVar25 + 1;
        UNLOCK();
      }
      local_328 = local_258;
      uStack_320 = plStack_250;
      FUN_180067810(&local_1c8,&local_328);
      local_288 = 0;
      plStack_280 = (longlong *)0x0;
      local_318 = &local_298;
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar25 = (int)*plVar25 + 1;
        UNLOCK();
      }
      plStack_290 = plVar24;
      FUN_1800678f0(&local_288,&local_298);
      if (local_1c8 != local_288) {
        do {
          lVar4 = local_1c8;
          if (((iVar15 == 0) && (FUN_180067150(local_1c8,local_2e8), local_2e8[0] == 2)) &&
             (local_2e0 == 0)) {
            local_318 = &local_2d8;
            local_2d8 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
            uStack_2d0 = 0;
            local_2c8 = (longlong *)0x0;
            local_2c0 = 0;
            FUN_180211510(&local_2d8,L".vtf",4);
            local_338 = 0;
            plVar26 = (longlong *)(lVar4 + 0x20);
            uVar18 = FUN_180066000(plVar26,&local_310);
            local_2b8 = (basic_streambuf<char,std::char_traits<char>_> *)&local_2d8;
            if (7 < local_2c0) {
              local_2b8 = local_2d8;
            }
            plStack_2b0 = local_2c8;
            iVar15 = FUN_180065970(uVar18,&local_2b8);
            FUN_18021e290(&local_310);
            FUN_18021e290(&local_2d8);
            if (iVar15 == 0) {
              uVar18 = FUN_180065ec0(plVar26,local_248);
              FUN_180065930(uVar18,local_208);
              FUN_18021e290(local_248);
              if (9 < local_1f8) {
                ppppuVar21 = local_208;
                if (7 < local_1f0) {
                  ppppuVar21 = (undefined8 ****)local_208[0];
                }
                iVar15 = FUN_180012bf0(ppppuVar21,&DAT_18035897c,2);
                if (iVar15 == 0) {
                  ppppuVar21 = local_208;
                  if (7 < local_1f0) {
                    ppppuVar21 = (undefined8 ****)local_208[0];
                  }
                  wVar14 = towlower(*(wint_t *)((longlong)ppppuVar21 + 4));
                  if (((ushort)(wVar14 - 0x30) < 10) || (bVar3 = 0, (ushort)(wVar14 - 0x61) < 6)) {
                    bVar3 = 1;
                  }
                  ppppuVar21 = local_208;
                  if (7 < local_1f0) {
                    ppppuVar21 = (undefined8 ****)local_208[0];
                  }
                  wVar14 = towlower(*(wint_t *)((longlong)ppppuVar21 + 6));
                  if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
                    bVar6 = 1;
                  }
                  else {
                    bVar6 = 0;
                  }
                  ppppuVar21 = local_208;
                  if (7 < local_1f0) {
                    ppppuVar21 = (undefined8 ****)local_208[0];
                  }
                  wVar14 = towlower(*(wint_t *)(ppppuVar21 + 1));
                  if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
                    bVar7 = 1;
                  }
                  else {
                    bVar7 = 0;
                  }
                  ppppuVar21 = local_208;
                  if (7 < local_1f0) {
                    ppppuVar21 = (undefined8 ****)local_208[0];
                  }
                  wVar14 = towlower(*(wint_t *)((longlong)ppppuVar21 + 10));
                  if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
                    bVar8 = 1;
                  }
                  else {
                    bVar8 = 0;
                  }
                  ppppuVar21 = local_208;
                  if (7 < local_1f0) {
                    ppppuVar21 = (undefined8 ****)local_208[0];
                  }
                  wVar14 = towlower(*(wint_t *)((longlong)ppppuVar21 + 0xc));
                  if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
                    bVar9 = 1;
                  }
                  else {
                    bVar9 = 0;
                  }
                  ppppuVar21 = local_208;
                  if (7 < local_1f0) {
                    ppppuVar21 = (undefined8 ****)local_208[0];
                  }
                  wVar14 = towlower(*(wint_t *)((longlong)ppppuVar21 + 0xe));
                  if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
                    bVar10 = 1;
                  }
                  else {
                    bVar10 = 0;
                  }
                  ppppuVar21 = local_208;
                  if (7 < local_1f0) {
                    ppppuVar21 = (undefined8 ****)local_208[0];
                  }
                  wVar14 = towlower(*(wint_t *)(ppppuVar21 + 2));
                  if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
                    bVar11 = 1;
                  }
                  else {
                    bVar11 = 0;
                  }
                  ppppuVar21 = local_208;
                  if (7 < local_1f0) {
                    ppppuVar21 = (undefined8 ****)local_208[0];
                  }
                  wVar14 = towlower(*(wint_t *)((longlong)ppppuVar21 + 0x12));
                  if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
                    bVar12 = 1;
                  }
                  else {
                    bVar12 = 0;
                  }
                  if ((bool)(bVar3 & bVar6 & bVar7 & bVar8 & bVar9 & bVar10 & bVar11 & bVar12)) {
                    if (7 < *(ulonglong *)(lVar4 + 0x38)) {
                      plVar26 = (longlong *)*plVar26;
                    }
                    cVar13 = FUN_1802d7d9c(plVar26);
                    if (cVar13 != '\0') {
                      local_334 = local_334 + 1;
                    }
                  }
                }
              }
              FUN_18021e290(local_208);
            }
            iVar15 = (int)local_2f0;
          }
          FUN_180067700(&local_1c8);
        } while (local_1c8 != local_288);
      }
      plVar26 = plStack_280;
      if (plStack_280 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_280 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_280)(plStack_280);
          LOCK();
          piVar2 = (int *)((longlong)plVar26 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar26 + 8))(plVar26);
          }
        }
      }
      plVar26 = plStack_1c0;
      if (plStack_1c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_1c0 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_1c0)(plStack_1c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar26 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar26 + 8))(plVar26);
          }
        }
      }
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        lVar4 = *plVar25;
        *(int *)plVar25 = (int)*plVar25 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar24)(plVar24);
          LOCK();
          piVar2 = (int *)((longlong)plVar24 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar24 + 8))(plVar24);
          }
        }
      }
    }
    plVar24 = (longlong *)0x8;
    local_318 = &local_310;
    local_310 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    uStack_308 = 0;
    local_300 = 0;
    local_2f8 = 0;
    FUN_180211510(&local_310,L"skybox",6);
    local_338 = 0;
    FUN_180066720(local_188,local_1a8,&local_310);
    FUN_18021e290(&local_310);
    puVar17 = (uint *)FUN_180067c80(local_2e8,local_188);
    if (1 < *puVar17) {
      local_2b8 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
      plStack_2b0 = (longlong *)0x0;
      iVar15 = FUN_180201e70(&local_2b8,local_188,0);
      plVar25 = plStack_2b0;
      local_278 = local_2b8;
      local_1b8 = 0;
      plStack_1b0 = (longlong *)0x0;
      local_318 = &local_328;
      if (plStack_2b0 != (longlong *)0x0) {
        plVar24 = plStack_2b0 + 1;
        LOCK();
        *(int *)plVar24 = (int)*plVar24 + 1;
        UNLOCK();
      }
      local_328 = local_2b8;
      uStack_320 = plStack_2b0;
      FUN_180067810(&local_1b8,&local_328);
      local_268 = 0;
      plStack_260 = (longlong *)0x0;
      local_318 = &local_278;
      if (plVar25 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar24 = (int)*plVar24 + 1;
        UNLOCK();
      }
      plStack_270 = plVar25;
      FUN_1800678f0(&local_268,&local_278);
      if (local_1b8 != local_268) {
        uVar5 = uStack_2d0._6_2_;
        do {
          lVar4 = local_1b8;
          if (((iVar15 == 0) && (FUN_180067150(local_1b8,local_2e8), local_2e8[0] == 2)) &&
             (local_2e0 == 0)) {
            local_318 = &local_310;
            local_310 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
            uStack_308 = 0;
            pbVar23 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
            local_300 = 0;
            local_2f8 = 0;
            FUN_180211510(&local_310,L".vmt",4);
            local_338 = 0;
            plVar24 = (longlong *)(lVar4 + 0x20);
            uVar18 = FUN_180066000(plVar24,local_228);
            local_2d8 = (basic_streambuf<char,std::char_traits<char>_> *)&local_310;
            if (7 < local_2f8) {
              local_2d8 = local_310;
            }
            uStack_2d0 = local_300;
            iVar16 = FUN_180065970(uVar18);
            FUN_18021e290(local_228);
            FUN_18021e290(&local_310);
            if (iVar16 == 0) {
              memset(local_168,0,0x110);
              FUN_180202040(local_168,plVar24,0x20);
              this = *(basic_streambuf<char,std::char_traits<char>_> **)
                      ((longlong)auStack_120 + (longlong)*(int *)(local_168[0] + 4));
              local_1e8 = (undefined8 ****)0x0;
              uStack_1e0 = 0;
              local_1d8 = 0;
              local_1d0 = 0;
              if (this == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
LAB_18012c44b:
                local_1d8 = 0;
                local_1d0 = 0xf;
                local_1e8 = (undefined8 ***)((ulonglong)local_1e8 & 0xffffffffffffff00);
              }
              else {
                iVar16 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc(this);
                uVar22 = 0;
                if (iVar16 != -1) {
                  uVar22 = (undefined1)iVar16;
                  pbVar23 = this;
                }
                if (pbVar23 == (basic_streambuf<char,std::char_traits<char>_> *)0x0)
                goto LAB_18012c44b;
                local_2a8 = 0;
                local_2a0 = 1;
                local_29e = uStack_2d0._2_4_;
                local_29a = uVar5;
                uStack_320 = (longlong *)
                             CONCAT26(uStack_2d0._6_2_,CONCAT42(uStack_2d0._2_4_,CONCAT11(uVar22,1))
                                     );
                local_328 = pbVar23;
                FUN_1802117c0(&local_1e8,&local_328,&local_2a8);
              }
              if (local_1d8 < 0x200) {
                ppppuVar21 = &local_1e8;
                if (0xf < local_1d0) {
                  ppppuVar21 = (undefined8 ****)local_1e8;
                }
                if (((4 < local_1d8) &&
                    (lVar20 = (longlong)ppppuVar21 + local_1d8,
                    lVar19 = thunk_FUN_1802d6b60(ppppuVar21,lVar20,"\"sky\"",5), lVar19 != lVar20))
                   && (lVar19 - (longlong)ppppuVar21 != -1)) {
                  ppppuVar21 = &local_1e8;
                  if (0xf < local_1d0) {
                    ppppuVar21 = (undefined8 ****)local_1e8;
                  }
                  if (((0x11 < local_1d8) &&
                      (lVar20 = local_1d8 + (longlong)ppppuVar21,
                      lVar19 = thunk_FUN_1802d6b60(ppppuVar21,lVar20,"\"$basetexture\" \"sk",0x12),
                      lVar19 != lVar20)) && (lVar19 - (longlong)ppppuVar21 != -1)) {
                    lVar20 = FUN_18021ea30(local_158);
                    if (lVar20 == 0) {
                      std::basic_ios<char,std::char_traits<char>_>::setstate
                                ((basic_ios<char,std::char_traits<char>_> *)
                                 ((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4)),2,
                                 false);
                    }
                    if (7 < *(ulonglong *)(lVar4 + 0x38)) {
                      plVar24 = (longlong *)*plVar24;
                    }
                    cVar13 = FUN_1802d7d9c(plVar24);
                    if (cVar13 != '\0') {
                      local_334 = local_334 + 1;
                    }
                  }
                }
              }
              FUN_18020e450(&local_1e8);
              local_2f0 = local_b8;
              *(undefined ***)((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4)) =
                   vftable_std_std_D_DU__char_traits___basic_ifstream;
              *(int *)((longlong)&iStack_16c + (longlong)*(int *)(local_168[0] + 4)) =
                   *(int *)(local_168[0] + 4) + -0xb0;
              FUN_18020f850(local_158);
              std::basic_istream<char,std::char_traits<char>_>::
              ~basic_istream<char,std::char_traits<char>_>(local_150);
              std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                        (local_b8);
            }
          }
          FUN_180067700(&local_1b8);
          plVar25 = plStack_2b0;
        } while (local_1b8 != local_268);
      }
      plVar24 = plStack_260;
      if (plStack_260 != (longlong *)0x0) {
        LOCK();
        plVar26 = plStack_260 + 1;
        lVar4 = *plVar26;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_260)(plStack_260);
          LOCK();
          piVar2 = (int *)((longlong)plVar24 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar24 + 8))(plVar24);
          }
        }
      }
      plVar24 = plStack_1b0;
      if (plStack_1b0 != (longlong *)0x0) {
        LOCK();
        plVar26 = plStack_1b0 + 1;
        lVar4 = *plVar26;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_1b0)(plStack_1b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar24 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar24 + 8))(plVar24);
          }
        }
      }
      if (plVar25 != (longlong *)0x0) {
        LOCK();
        plVar24 = plVar25 + 1;
        lVar4 = *plVar24;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar25)(plVar25);
          LOCK();
          piVar2 = (int *)((longlong)plVar25 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar25 + 8))(plVar25);
          }
        }
      }
    }
    if (local_334 != 0) {
      FUN_180014410("[SKY] SweepLeftovers: removed %d stale file(s)\n",local_334);
    }
    FUN_18021e290(local_188);
    FUN_18021e290(local_1a8);
  }
  return;
}


)B18012bc40",
    "873027dafde434ab3bf9a2fecff0612839e742019cbf7de23c4858a715fc3c56",
    R"F18012bc40C(FUN_180012bf0
FUN_180014410
FUN_180065930
FUN_180065970
FUN_180065ec0
FUN_180066000
FUN_180066720
FUN_180067150
FUN_180067700
FUN_180067810
FUN_1800678f0
FUN_180067c80
FUN_180201e70
FUN_180202040
FUN_18020e450
FUN_18020f850
FUN_180211510
FUN_1802117c0
FUN_18021e290
FUN_18021ea30
FUN_1802d7d9c)F18012bc40C",
    R"F18012bc40D(LAB_18012c44b
DAT_18035897c
DAT_1803da4c0)F18012bc40D",
    R"F18012bc40T(".vmt"
".vtf"
"skybox"
"\\\"sky\\\""
"materials"
"\\\"$basetexture\\\" \\\"sk"
"[SKY] SweepLeftovers: removed %d stale file(s)\\n")F18012bc40T",
    R"F18012bc40F(97: if (*(longlong *)(param_1 + 0x10) != 0) {
109: if (1 < *puVar17) {
119: if (plStack_250 == (longlong *)0x0) {
122: else {
134: if (plVar24 != (longlong *)0x0) {
141: if (local_1c8 != local_288) {
142: do {
144: if (((iVar15 == 0) && (FUN_180067150(local_1c8,local_2e8), local_2e8[0] == 2)) &&
156: if (7 < local_2c0) {
163: if (iVar15 == 0) {
167: if (9 < local_1f8) {
169: if (7 < local_1f0) {
173: if (iVar15 == 0) {
175: if (7 < local_1f0) {
179: if (((ushort)(wVar14 - 0x30) < 10) || (bVar3 = 0, (ushort)(wVar14 - 0x61) < 6)) {
183: if (7 < local_1f0) {
187: if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
190: else {
194: if (7 < local_1f0) {
198: if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
201: else {
205: if (7 < local_1f0) {
209: if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
212: else {
216: if (7 < local_1f0) {
220: if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
223: else {
227: if (7 < local_1f0) {
231: if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
234: else {
238: if (7 < local_1f0) {
242: if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
245: else {
249: if (7 < local_1f0) {
253: if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
256: else {
259: if ((bool)(bVar3 & bVar6 & bVar7 & bVar8 & bVar9 & bVar10 & bVar11 & bVar12)) {
260: if (7 < *(ulonglong *)(lVar4 + 0x38)) {
264: if (cVar13 != '\0') {
278: if (plStack_280 != (longlong *)0x0) {
284: if ((int)lVar4 == 1) {
291: if (iVar15 == 1) {
297: if (plStack_1c0 != (longlong *)0x0) {
303: if ((int)lVar4 == 1) {
310: if (iVar15 == 1) {
315: if (plVar24 != (longlong *)0x0) {
320: if ((int)lVar4 == 1) {
327: if (iVar15 == 1) {
344: if (1 < *puVar17) {
353: if (plStack_2b0 != (longlong *)0x0) {
365: if (plVar25 != (longlong *)0x0) {
372: if (local_1b8 != local_268) {
374: do {
376: if (((iVar15 == 0) && (FUN_180067150(local_1b8,local_2e8), local_2e8[0] == 2)) &&
389: if (7 < local_2f8) {
396: if (iVar16 == 0) {
405: if (this == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
406: LAB_18012c44b:
411: else {
414: if (iVar16 != -1) {
418: if (pbVar23 == (basic_streambuf<char,std::char_traits<char>_> *)0x0)
419: goto LAB_18012c44b;
430: if (local_1d8 < 0x200) {
432: if (0xf < local_1d0) {
435: if (((4 < local_1d8) &&
440: if (0xf < local_1d0) {
443: if (((0x11 < local_1d8) &&
448: if (lVar20 == 0) {
454: if (7 < *(ulonglong *)(lVar4 + 0x38)) {
458: if (cVar13 != '\0') {
482: if (plStack_260 != (longlong *)0x0) {
488: if ((int)lVar4 == 1) {
495: if (iVar15 == 1) {
501: if (plStack_1b0 != (longlong *)0x0) {
507: if ((int)lVar4 == 1) {
514: if (iVar15 == 1) {
519: if (plVar25 != (longlong *)0x0) {
525: if ((int)lVar4 == 1) {
532: if (iVar15 == 1) {
538: if (local_334 != 0) {
544: return;)F18012bc40F",
    R"F18012bc40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18012c44b.
TODO: recover the declaration, type and value for global/data reference DAT_18035897c.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 285: (**(code **)*plStack_280)(plStack_280);.
TODO: resolve the indirect call in body 292: (**(code **)(*plVar26 + 8))(plVar26);.
TODO: resolve the indirect call in body 304: (**(code **)*plStack_1c0)(plStack_1c0);.
TODO: resolve the indirect call in body 311: (**(code **)(*plVar26 + 8))(plVar26);.
TODO: resolve the indirect call in body 321: (**(code **)*plVar24)(plVar24);.
TODO: resolve the indirect call in body 328: (**(code **)(*plVar24 + 8))(plVar24);.
TODO: resolve the indirect call in body 489: (**(code **)*plStack_260)(plStack_260);.
TODO: resolve the indirect call in body 496: (**(code **)(*plVar24 + 8))(plVar24);.
TODO: resolve the indirect call in body 508: (**(code **)*plStack_1b0)(plStack_1b0);.
TODO: resolve the indirect call in body 515: (**(code **)(*plVar24 + 8))(plVar24);.
TODO: resolve the indirect call in body 526: (**(code **)*plVar25)(plVar25);.
TODO: resolve the indirect call in body 533: (**(code **)(*plVar25 + 8))(plVar25);.)F18012bc40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012bc40() noexcept {
    return kFunction_0x18012bc40;
}

// 0x18012c6f0 FUN_18012c6f0
// source: re/dump/decompile/0x18012c6f0_FUN_18012c6f0.c
// size: 320 bytes; thunk: false
// body sha256: 840227cf61e7d1bc14a61593035eeaffc7b0af17a0a4533890869cbec0b527b7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012c6f0{
    "0x18012c6f0",
    "FUN_18012c6f0",
    R"F18012c6f0S(undefined FUN_18012c6f0())F18012c6f0S",
    R"B18012c6f0(// 0x18012c6f0  FUN_18012c6f0
// size=320 thunk=false
// signature: undefined FUN_18012c6f0()
// status: ok


void FUN_18012c6f0(char param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((DAT_180400eb8 != '\0') || (DAT_180400ea8 != 0)) {
    FUN_180014410("[SKY] RemoveOverride: sky=\'%s\' files=%d reload=%d\n",&DAT_180401180,
                  DAT_180400ea8,param_1);
  }
  iVar1 = 0;
  if (0 < DAT_180400ea8) {
    do {
      puVar2 = &DAT_1803e9ff0 + (longlong)iVar1 * 4;
      if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar1 * 4]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      FUN_1802d7d9c(puVar2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_180400ea8);
  }
  DAT_180400ea8 = 0;
  if ((((param_1 != '\0') && (DAT_180400eb8 != '\0')) && (DAT_180401110 != '\0')) &&
     (DAT_180401180 != '\0')) {
    FUN_18012acc0(&DAT_180401180);
  }
  puVar2 = &DAT_180401118;
  do {
    FUN_18012ab90(*puVar2);
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (puVar2 != (undefined8 *)&DAT_180401148);
  puVar2 = &DAT_180401150;
  do {
    FUN_18012ab90(*puVar2);
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while ((char *)puVar2 != &DAT_180401180);
  DAT_180400eb8 = 0;
  DAT_180401110 = 0;
  DAT_180401180 = 0;
  DAT_180400b20 = 0;
  DAT_180400c00 = 0;
  return;
}


)B18012c6f0",
    "840227cf61e7d1bc14a61593035eeaffc7b0af17a0a4533890869cbec0b527b7",
    R"F18012c6f0C(FUN_180014410
FUN_18012ab90
FUN_18012acc0
FUN_1802d7d9c)F18012c6f0C",
    R"F18012c6f0D(DAT_1803e9ff0
DAT_1803ea008
DAT_180400b20
DAT_180400c00
DAT_180400ea8
DAT_180400eb8
DAT_180401110
DAT_180401118
DAT_180401148
DAT_180401150
DAT_180401180)F18012c6f0D",
    R"F18012c6f0T("[SKY] RemoveOverride: sky=\\'%s\\' files=%d reload=%d\\n")F18012c6f0T",
    R"F18012c6f0F(13: if ((DAT_180400eb8 != '\0') || (DAT_180400ea8 != 0)) {
18: if (0 < DAT_180400ea8) {
19: do {
21: if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar1 * 4]) {
29: if ((((param_1 != '\0') && (DAT_180400eb8 != '\0')) && (DAT_180401110 != '\0')) &&
34: do {
40: do {
50: return;)F18012c6f0F",
    R"F18012c6f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9ff0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea008.
TODO: recover the declaration, type and value for global/data reference DAT_180400b20.
TODO: recover the declaration, type and value for global/data reference DAT_180400c00.
TODO: recover the declaration, type and value for global/data reference DAT_180400ea8.
TODO: recover the declaration, type and value for global/data reference DAT_180400eb8.
TODO: recover the declaration, type and value for global/data reference DAT_180401110.
TODO: recover the declaration, type and value for global/data reference DAT_180401118.
TODO: recover the declaration, type and value for global/data reference DAT_180401148.
TODO: recover the declaration, type and value for global/data reference DAT_180401150.
TODO: recover the declaration, type and value for global/data reference DAT_180401180.)F18012c6f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012c6f0() noexcept {
    return kFunction_0x18012c6f0;
}

// 0x18012c830 FUN_18012c830
// source: re/dump/decompile/0x18012c830_FUN_18012c830.c
// size: 4678 bytes; thunk: false
// body sha256: f857deb7e66c871f8eef261d34c346f197fddaa9030be7da72ee3be84fa035f8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012c830{
    "0x18012c830",
    "FUN_18012c830",
    R"F18012c830S(undefined FUN_18012c830())F18012c830S",
    R"B18012c830(// 0x18012c830  FUN_18012c830
// size=4678 thunk=false
// signature: undefined FUN_18012c830()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18012c830(char *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  size_t sVar13;
  ulonglong uVar14;
  uint *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  longlong lVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  undefined8 ****ppppuVar25;
  longlong lVar26;
  char *pcVar27;
  byte *pbVar28;
  undefined1 *puVar29;
  int iVar30;
  byte *pbVar31;
  undefined1 *puVar32;
  byte *pbVar33;
  char cVar34;
  undefined1 auStackY_1d78 [8];
  undefined1 auStackY_1d70 [24];
  undefined8 local_1d38;
  undefined **local_1d30;
  undefined8 local_1d28;
  undefined8 uStack_1d20;
  undefined8 local_1d18;
  undefined8 uStack_1d10;
  char *local_1d08;
  uint local_1d00;
  uint uStack_1cfc;
  uint uStack_1cf8;
  uint uStack_1cf4;
  undefined8 local_1cf0;
  undefined8 uStack_1ce8;
  undefined8 local_1ce0;
  undefined8 uStack_1cd8;
  undefined8 local_1cd0;
  undefined8 local_1cc8;
  undefined8 local_1cc0;
  undefined8 uStack_1cb8;
  undefined8 local_1cb0;
  undefined8 local_1ca8;
  undefined8 local_1ca0;
  undefined8 uStack_1c98;
  undefined8 local_1c90;
  undefined8 local_1c88;
  undefined8 *local_1c80 [2];
  uint local_1c70;
  uint uStack_1c6c;
  uint uStack_1c68;
  uint uStack_1c64;
  undefined8 local_1c60;
  undefined8 uStack_1c58;
  undefined8 local_1c50;
  undefined8 uStack_1c48;
  undefined8 local_1c40;
  undefined8 local_1c38;
  undefined4 local_1c30;
  undefined4 uStack_1c2c;
  undefined4 uStack_1c28;
  undefined4 uStack_1c24;
  undefined8 local_1c20;
  undefined8 uStack_1c18;
  undefined8 *local_1c10;
  undefined1 local_1c08 [32];
  undefined1 local_1be8 [32];
  undefined1 local_1bc8 [32];
  byte *local_1ba8;
  byte *pbStack_1ba0;
  longlong local_1b98;
  ulonglong local_1b90;
  undefined8 local_1b88;
  undefined8 ***local_1b80 [2];
  undefined8 local_1b70;
  ulonglong local_1b68;
  undefined8 ***local_1b60 [2];
  undefined8 local_1b50;
  ulonglong local_1b48;
  undefined1 local_1b40 [16];
  longlong local_1b30;
  undefined1 local_1b18 [128];
  CHAR local_1a98 [64];
  undefined1 local_1a58 [224];
  char local_1978 [192];
  CHAR local_18b8 [192];
  undefined1 local_17f8 [896];
  WCHAR local_1478 [512];
  WCHAR local_1078 [2048];
  ulonglong local_78;
  
  puVar32 = auStackY_1d78;
  puVar22 = auStackY_1d78;
  puVar29 = auStackY_1d78;
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStackY_1d78;
  iVar30 = 0;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    bVar3 = false;
    bVar5 = false;
    if (DAT_180400b70 == '\0') goto LAB_18012da3d;
  }
  else {
    bVar3 = true;
    bVar5 = true;
  }
  puVar32 = auStackY_1d78;
  if ((param_1 == (char *)0x0) || (puVar32 = auStackY_1d78, *param_1 == '\0')) goto LAB_18012da3d;
  local_1d08 = param_2;
  if ((bVar3) && (iVar7 = _stricmp(param_2,param_1), iVar7 == 0)) {
    strncpy_s(&DAT_180401180,0x40,param_1,0xffffffffffffffff);
    strncpy_s(&DAT_180400b20,0x50,param_2,0xffffffffffffffff);
    DAT_180400eb8 = 1;
    DAT_180401110 = 0;
    FUN_18012ab30("\'%s\' is already the map\'s sky.",param_2);
    puVar32 = auStackY_1d78;
    goto LAB_18012da3d;
  }
  FUN_18012ae90(local_1b40);
  if (local_1b30 != 0) {
    local_1b88 = 0x93fd561a96ab0c67;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_1d38,&local_1b88);
    local_1b90 = 0xaeca5b24c521e60;
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_1c80,&local_1b90);
    puVar11 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
    uVar1 = *puVar11;
    if ((bVar3) || (DAT_180400b74 != 6)) {
      cVar34 = '\0';
    }
    else {
      cVar34 = '\x01';
    }
    uVar9 = DAT_180400c04;
    if (bVar3) {
      uVar9 = 1;
    }
    local_1b88 = CONCAT44(local_1b88._4_4_,uVar9);
    pcVar27 = "<imported vtf>";
    if (bVar3) {
      pcVar27 = param_2;
    }
    FUN_180014410("[SKY] ApplyOverride: sky=\'%s\' src=\'%s\' set=%d frames=%d fps=%.1f\n",param_1,
                  pcVar27,cVar34);
    if ((DAT_18056ff80 & 1) == 0) {
      DAT_18056ff80 = DAT_18056ff80 | 1;
      _DAT_1805ba384 = std::_Random_device();
      _DAT_1805bb704 = 0xffffffff;
      uVar24 = 1;
      uVar8 = _DAT_1805ba384;
      do {
        uVar8 = (uVar8 >> 0x1e ^ uVar8) * 0x6c078965 + (int)uVar24;
        *(uint *)(&DAT_1805ba384 + uVar24 * 4) = uVar8;
        uVar24 = uVar24 + 1;
      } while (uVar24 < 0x270);
      _DAT_1805ba380 = 0x270;
    }
    uVar9 = FUN_18021dbf0(&DAT_1805ba380);
    local_1b90 = CONCAT44(local_1b90._4_4_,uVar9);
    local_1d38 = 0;
    local_1d30 = &PTR_vftable_std__System_error_category_1803e9500;
    local_1c10 = &local_1cc0;
    local_1cc0 = 0;
    uStack_1cb8 = 0;
    local_1cb0 = 0;
    local_1ca8 = 0;
    FUN_180211510(&local_1cc0,L"skybox",6);
    local_1c80[0] = &local_1ce0;
    local_1ce0 = 0;
    uStack_1cd8 = 0;
    local_1cd0 = 0;
    local_1cc8 = 0;
    FUN_180211510(&local_1ce0,L"materials",9);
    uVar12 = FUN_180066720(local_1be8,local_1b40,&local_1ce0);
    uVar12 = FUN_180066720(local_1c08,uVar12,&local_1cc0);
    FUN_180067d80(uVar12,&local_1d38);
    FUN_18021e290(local_1c08);
    FUN_18021e290(local_1be8);
    FUN_18021e290(&local_1ce0);
    FUN_18021e290(&local_1cc0);
    if (0 < DAT_180400ea8) {
      do {
        puVar23 = &DAT_1803e9ff0 + (longlong)iVar30 * 4;
        if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar30 * 4]) {
          puVar23 = (undefined8 *)*puVar23;
        }
        FUN_1802d7d9c(puVar23);
        iVar30 = iVar30 + 1;
      } while (iVar30 < DAT_180400ea8);
    }
    DAT_180400ea8 = 0;
    if (!bVar3) {
      FUN_180012b20(&DAT_180400c10,0x60,0xffffffffffffffff,"sk%08x%s");
      FUN_180012b20(&DAT_180400c70,0x60,0xffffffffffffffff,"sk%08x%s");
      FUN_180012b20(&DAT_180400cd0,0x60,0xffffffffffffffff,"sk%08x%s");
      FUN_180012b20(&DAT_180400d30,0x60,0xffffffffffffffff,"sk%08x%s");
      FUN_180012b20(&DAT_180400d90,0x60,0xffffffffffffffff,"sk%08x%s");
      FUN_180012b20(&DAT_180400df0,0x60,0xffffffffffffffff,"sk%08x%s");
      iVar30 = 1;
      if (cVar34 != '\0') {
        iVar30 = 6;
      }
      iVar7 = 0;
LAB_18012cff0:
      if (iVar7 < iVar30) {
        lVar26 = (longlong)iVar7;
        if (cVar34 == '\0') {
          puVar32 = &DAT_18033e5ea;
        }
        else {
          puVar32 = (&PTR_DAT_18033bf38)[lVar26];
        }
        FUN_180204f10(local_1a98,"sk%08x%s",local_1b90 & 0xffffffff,puVar32);
        memset(local_1078,0,0x400);
        MultiByteToWideChar(0xfde9,0,local_1a98,-1,local_1078,0x1ff);
        local_1c50 = 0;
        uStack_1c48 = 0;
        local_1c40 = 0;
        local_1c38 = 0;
        sVar13 = wcslen(local_1078);
        FUN_180211510(&local_1c50,local_1078,sVar13);
        puVar15 = (uint *)FUN_180211740(&local_1c50,L".vtf",4);
        local_1c70 = *puVar15;
        uStack_1cfc = puVar15[1];
        uStack_1cf8 = puVar15[2];
        uStack_1cf4 = puVar15[3];
        local_1c60 = *(undefined8 *)(puVar15 + 4);
        uStack_1c58 = *(undefined8 *)(puVar15 + 6);
        puVar15[4] = 0;
        puVar15[5] = 0;
        puVar15[6] = 7;
        puVar15[7] = 0;
        *(undefined2 *)puVar15 = 0;
        local_1cf0 = 0;
        uStack_1ce8 = 7;
        local_1d00 = local_1c70 & 0xffff0000;
        local_1c80[0] = &local_1ca0;
        local_1ca0 = 0;
        uStack_1c98 = 0;
        local_1c90 = 0;
        local_1c88 = 0;
        uStack_1c6c = uStack_1cfc;
        uStack_1c68 = uStack_1cf8;
        uStack_1c64 = uStack_1cf4;
        FUN_180211510(&local_1ca0,L"materials",9);
        uVar12 = FUN_180066720(local_1bc8,local_1b40,&local_1ca0);
        FUN_180066720(local_1b80,uVar12,&local_1c70);
        FUN_18021e290(local_1bc8);
        FUN_18021e290(&local_1ca0);
        FUN_18021e290(&local_1c70);
        FUN_18021e290(&local_1d00);
        FUN_18021e290(&local_1c50);
        cVar6 = FUN_18012b500(local_1b80,(&DAT_1803ea170)[lVar26 * 3],
                              (&DAT_1803ea178)[lVar26 * 3] - (&DAT_1803ea170)[lVar26 * 3]);
        if (cVar6 != '\0') goto code_r0x00018012d1f8;
        FUN_18012ab30("Failed to write into garrysmod/materials.");
        iVar30 = 0;
        if (0 < DAT_180400ea8) {
          do {
            puVar23 = &DAT_1803e9ff0 + (longlong)iVar30 * 4;
            if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar30 * 4]) {
              puVar23 = (undefined8 *)*puVar23;
            }
            FUN_1802d7d9c(puVar23);
            iVar30 = iVar30 + 1;
          } while (iVar30 < DAT_180400ea8);
        }
        DAT_180400ea8 = 0;
        FUN_18021e290(local_1b80);
        goto LAB_18012da31;
      }
      goto LAB_18012cd2c;
    }
    FUN_180012b20(&DAT_180400c10,0x60,0xffffffffffffffff,"skybox/%s%s");
    FUN_180012b20(&DAT_180400c70,0x60,0xffffffffffffffff,"skybox/%s%s");
    FUN_180012b20(&DAT_180400cd0,0x60,0xffffffffffffffff,"skybox/%s%s");
    FUN_180012b20(&DAT_180400d30,0x60,0xffffffffffffffff,"skybox/%s%s");
    FUN_180012b20(&DAT_180400d90,0x60,0xffffffffffffffff,"skybox/%s%s");
    FUN_180012b20(&DAT_180400df0,0x60,0xffffffffffffffff,"skybox/%s%s");
LAB_18012cd2c:
    uVar24 = 0;
LAB_18012cd40:
    FUN_180204ff0(local_18b8,"materials/skybox/%s%s.vmt",param_1,(&PTR_DAT_18033bf38)[uVar24]);
    memset(local_1478,0,0x400);
    MultiByteToWideChar(0xfde9,0,local_18b8,-1,local_1478,0x1ff);
    local_1d28 = 0;
    uStack_1d20 = 0;
    local_1d18 = 0;
    uStack_1d10 = 0;
    sVar13 = wcslen(local_1478);
    FUN_180211510(&local_1d28,local_1478,sVar13);
    local_1c30 = (undefined4)local_1d28;
    uStack_1c2c = local_1d28._4_4_;
    uStack_1c28 = (undefined4)uStack_1d20;
    uStack_1c24 = uStack_1d20._4_4_;
    local_1c20 = local_1d18;
    uStack_1c18 = uStack_1d10;
    local_1d18 = 0;
    uStack_1d10 = 7;
    local_1d28 = local_1d28 & 0xffffffffffff0000;
    FUN_180066720(local_1b60,local_1b40,&local_1c30);
    FUN_18021e290(&local_1c30);
    FUN_18021e290(&local_1d28);
    local_1a58[0] = 0;
    if (!bVar5) {
      uVar14 = 0;
      if (cVar34 != '\0') {
        uVar14 = uVar24;
      }
      if ((&DAT_1804011d0 + uVar14 * 0xa0 != (char *)0x0) &&
         ((&DAT_1804011d0)[uVar14 * 0xa0] != '\0')) {
        FUN_180205050(local_1a58,"\t\"$basetexturetransform\" \"%s\"\n");
      }
    }
    if ((int)local_1b88 < 2) {
      iVar30 = FUN_1802050b0(local_17f8,
                             "\"sky\"\n{\n\t\"$basetexture\" \"%s\"\n%s\t\"$nofog\" \"1\"\n\t\"$ignorez\" \"1\"\n}\n"
                             ,&DAT_180400c10 + uVar24 * 0x60,local_1a58);
    }
    else {
      iVar30 = FUN_1802050b0(local_17f8,
                             "\"sky\"\n{\n\t\"$basetexture\" \"%s\"\n%s\t\"$nofog\" \"1\"\n\t\"$ignorez\" \"1\"\n\t\"Proxies\"\n\t{\n\t\t\"AnimatedTexture\"\n\t\t{\n\t\t\t\"animatedTextureVar\" \"$basetexture\"\n\t\t\t\"animatedTextureFrameNumVar\" \"$frame\"\n\t\t\t\"animatedTextureFrameRate\" \"%.2f\"\n\t\t}\n\t}\n}\n"
                             ,&DAT_180400c10 + uVar24 * 0x60,local_1a58);
    }
    if ((0 < iVar30) &&
       (cVar6 = FUN_18012b500(local_1b60,local_17f8,(longlong)iVar30), cVar6 != '\0'))
    goto code_r0x00018012d336;
    FUN_18012ab30("Failed to write the VMT override into materials/skybox.");
    iVar30 = 0;
    if (0 < DAT_180400ea8) {
      do {
        puVar23 = &DAT_1803e9ff0 + (longlong)iVar30 * 4;
        if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar30 * 4]) {
          puVar23 = (undefined8 *)*puVar23;
        }
        FUN_1802d7d9c(puVar23);
        iVar30 = iVar30 + 1;
      } while (iVar30 < DAT_180400ea8);
    }
    DAT_180400ea8 = 0;
    FUN_18021e290(local_1b60);
    puVar22 = auStackY_1d78;
    goto LAB_18012da31;
  }
  FUN_18012ab30("Couldn\'t locate the garrysmod folder.");
  FUN_180014410("[SKY] ApplyOverride: no gamedir\n");
  puVar22 = auStackY_1d78;
  goto LAB_18012da31;
code_r0x00018012d1f8:
  lVar26 = (longlong)DAT_180400ea8;
  DAT_180400ea8 = DAT_180400ea8 + 1;
  if ((undefined8 ****)(&DAT_1803e9ff0 + lVar26 * 4) != local_1b80) {
    ppppuVar25 = local_1b80;
    if (7 < local_1b68) {
      ppppuVar25 = (undefined8 ****)local_1b80[0];
    }
    FUN_18021a7b0(&DAT_1803e9ff0 + lVar26 * 4,ppppuVar25,local_1b70);
  }
  FUN_18021e290(local_1b80);
  iVar7 = iVar7 + 1;
  goto LAB_18012cff0;
code_r0x00018012d336:
  lVar26 = (longlong)DAT_180400ea8;
  DAT_180400ea8 = DAT_180400ea8 + 1;
  if ((undefined8 ****)(&DAT_1803e9ff0 + lVar26 * 4) != local_1b60) {
    ppppuVar25 = local_1b60;
    if (7 < local_1b48) {
      ppppuVar25 = (undefined8 ****)local_1b60[0];
    }
    FUN_18021a7b0(&DAT_1803e9ff0 + lVar26 * 4,ppppuVar25,local_1b50);
  }
  FUN_18021e290(local_1b60);
  uVar8 = (int)uVar24 + 1;
  uVar24 = (ulonglong)uVar8;
  if (5 < (int)uVar8) goto code_r0x00018012d3a4;
  goto LAB_18012cd40;
code_r0x00018012d3a4:
  local_1ba8 = (byte *)0x0;
  pbStack_1ba0 = (byte *)0x0;
  local_1b98 = 0;
  FUN_180204ff0(local_1978,"materials/skybox/%s%s.vmt",param_1,&DAT_18035871c);
  if ((DAT_1803f9248 == (longlong *)0x0) || (local_1978[0] == '\0')) {
LAB_18012d5a8:
    bVar3 = false;
    pbVar28 = pbStack_1ba0;
    pbVar17 = local_1ba8;
LAB_18012d5b9:
    lVar26 = (longlong)pbVar28 - (longlong)pbVar17;
    bVar5 = false;
    if (bVar3) goto LAB_18012d547;
    pcVar27 = "MISSING";
  }
  else {
    puVar23 = (undefined8 *)*DAT_1803f9248;
    lVar26 = (*(code *)puVar23[2])(DAT_1803f9248,local_1978,&DAT_1803589f0,&DAT_1803589e8);
    if (lVar26 == 0) goto LAB_18012d5a8;
    if (local_1ba8 != pbStack_1ba0) {
      pbStack_1ba0 = local_1ba8;
    }
    do {
      iVar30 = (*(code *)*puVar23)(DAT_1803f9248,local_1078,0x1000,lVar26);
      if (0 < iVar30) {
        FUN_180212f60(&local_1ba8,pbStack_1ba0,local_1078,(longlong)iVar30);
      }
    } while ((0xfff < iVar30) &&
            ((ulonglong)((longlong)pbStack_1ba0 - (longlong)local_1ba8) < 0x100001));
    (*(code *)puVar23[3])(DAT_1803f9248,lVar26);
    pbVar28 = pbStack_1ba0;
    pbVar17 = local_1ba8;
    bVar3 = local_1ba8 != pbStack_1ba0;
    if ((local_1ba8 == pbStack_1ba0) ||
       (0xfff < (ulonglong)((longlong)pbStack_1ba0 - (longlong)local_1ba8))) goto LAB_18012d5b9;
    sVar13 = strlen(&DAT_180400c10);
    pbVar16 = pbVar28;
    if ((longlong)sVar13 <= (longlong)pbVar28 - (longlong)pbVar17) {
      pbVar33 = pbVar17;
      while (pcVar27 = &DAT_180400c10, pbVar16 = pbVar33, pbVar31 = pbVar33,
            &DAT_180400c10 + sVar13 != &DAT_180400c10) {
        for (; (uint)*pbVar31 == (int)*pcVar27; pbVar31 = pbVar31 + 1) {
          pcVar27 = pcVar27 + 1;
          if (pcVar27 == &DAT_180400c10 + sVar13) goto LAB_18012d53d;
        }
        pbVar16 = pbVar28;
        if (pbVar33 == pbVar28 + -sVar13) break;
        pbVar33 = pbVar33 + 1;
      }
    }
LAB_18012d53d:
    if (pbVar16 == pbVar28) goto LAB_18012d5b9;
    bVar5 = true;
    lVar26 = (longlong)pbVar28 - (longlong)pbVar17;
LAB_18012d547:
    pcVar27 = &DAT_180358d08;
    if (bVar5) {
      pcVar27 = "OURS";
    }
  }
  FUN_180014410("[SKY] fs readback \'%s\': %s (%zu bytes)\n",local_1978,pcVar27,lVar26);
  if (local_1ba8 != (byte *)0x0) {
    pbVar17 = local_1ba8;
    puVar29 = auStackY_1d78;
    if ((0xfff < (ulonglong)(local_1b98 - (longlong)local_1ba8)) &&
       (pbVar17 = *(byte **)(local_1ba8 + -8), puVar29 = auStackY_1d78,
       (byte *)0x1f < local_1ba8 + (-8 - (longlong)pbVar17))) {
      pcVar4 = (code *)swi(0x29);
      pbVar17 = (byte *)(*pcVar4)(5);
      puVar29 = auStackY_1d70;
    }
    *(undefined8 *)(puVar29 + -8) = 0x18012d5db;
    free(pbVar17);
    local_1ba8 = (byte *)0x0;
    pbStack_1ba0 = (byte *)0x0;
    local_1b98 = 0;
  }
  *(undefined8 *)(puVar29 + -8) = 0x18012d60e;
  FUN_180203ab0(local_1b18,"skybox/%s%s",param_1,&DAT_18035871c);
  *(undefined8 *)(puVar29 + -8) = 0x18012d61a;
  DAT_180401118 = FUN_18012abb0(local_1b18);
  *(undefined8 *)(puVar29 + -8) = 0x18012d63e;
  FUN_180203ab0(local_1b18,"skybox/%s%s",param_1,PTR_DAT_18033bf40);
  *(undefined8 *)(puVar29 + -8) = 0x18012d64a;
  DAT_180401120 = FUN_18012abb0(local_1b18);
  *(undefined8 *)(puVar29 + -8) = 0x18012d66e;
  FUN_180203ab0(local_1b18,"skybox/%s%s",param_1,PTR_DAT_18033bf48);
  *(undefined8 *)(puVar29 + -8) = 0x18012d67a;
  _DAT_180401128 = FUN_18012abb0(local_1b18);
  *(undefined8 *)(puVar29 + -8) = 0x18012d69e;
  FUN_180203ab0(local_1b18,"skybox/%s%s",param_1,PTR_DAT_18033bf50);
  *(undefined8 *)(puVar29 + -8) = 0x18012d6aa;
  _DAT_180401130 = FUN_18012abb0(local_1b18);
  *(undefined8 *)(puVar29 + -8) = 0x18012d6ce;
  FUN_180203ab0(local_1b18,"skybox/%s%s",param_1,PTR_DAT_18033bf58);
  *(undefined8 *)(puVar29 + -8) = 0x18012d6da;
  _DAT_180401138 = FUN_18012abb0(local_1b18);
  *(undefined8 *)(puVar29 + -8) = 0x18012d6fe;
  FUN_180203ab0(local_1b18,"skybox/%s%s",param_1,PTR_DAT_18033bf60);
  *(undefined8 *)(puVar29 + -8) = 0x18012d70a;
  _DAT_180401140 = FUN_18012abb0(local_1b18);
  *(undefined8 *)(puVar29 + -8) = 0x18012d719;
  FUN_18012acc0(param_1);
  *(undefined8 *)(puVar29 + -8) = 0x18012d728;
  FUN_180014410("[SKY] ReloadMaterials(\'skybox/%s\') done\n",param_1);
  *(undefined8 *)(puVar29 + -8) = 0x18012d730;
  FUN_18012f810(param_1);
  iVar30 = 0;
  lVar26 = 0;
  do {
    pcVar27 = &DAT_180400c10 + lVar26 * 0x60;
    *(undefined8 *)(puVar29 + -8) = 0x18012d763;
    uVar12 = FUN_18012abb0(pcVar27);
    (&DAT_180401150)[lVar26] = uVar12;
    *(undefined8 *)(puVar29 + -8) = 0x18012d778;
    pcVar18 = (char *)FUN_18012ac40();
    if (pcVar18 == (char *)0x0) {
LAB_18012d80b:
      iVar7 = 0;
    }
    else {
      *(undefined8 *)(puVar29 + -8) = 0x18012d790;
      iVar7 = _stricmp(pcVar18,pcVar27);
      if (iVar7 != 0) {
        if (pcVar27 != (char *)0x0) {
          *(undefined8 *)(puVar29 + -8) = 0x18012d7a7;
          pcVar19 = strrchr(pcVar27,0x2f);
          *(undefined8 *)(puVar29 + -8) = 0x18012d7b8;
          pcVar20 = strrchr(pcVar27,0x5c);
          if (pcVar20 < pcVar19) {
            pcVar20 = pcVar19;
          }
          if (pcVar20 != (char *)0x0) {
            pcVar27 = pcVar20 + 1;
          }
        }
        *(undefined8 *)(puVar29 + -8) = 0x18012d7d6;
        pcVar19 = strrchr(pcVar18,0x2f);
        *(undefined8 *)(puVar29 + -8) = 0x18012d7e7;
        pcVar20 = strrchr(pcVar18,0x5c);
        if (pcVar20 < pcVar19) {
          pcVar20 = pcVar19;
        }
        pcVar19 = pcVar20 + 1;
        if (pcVar20 == (char *)0x0) {
          pcVar19 = pcVar18;
        }
        *(undefined8 *)(puVar29 + -8) = 0x18012d803;
        iVar7 = _stricmp(pcVar19,pcVar27);
        if (iVar7 != 0) goto LAB_18012d80b;
      }
      iVar7 = 1;
    }
    iVar30 = iVar30 + iVar7;
    pcVar27 = "";
    if ((char)iVar7 != '\0') {
      pcVar27 = "<- OURS";
    }
    pcVar20 = "?";
    if (pcVar18 != (char *)0x0) {
      pcVar20 = pcVar18;
    }
    uVar12 = (&DAT_180400bd0)[lVar26];
    *(undefined8 *)(puVar29 + -8) = 0x18012d845;
    lVar21 = FUN_18012ac20(uVar12);
    if (lVar21 == 0) {
      puVar22 = &DAT_18033e9cc;
    }
    else {
      uVar12 = (&DAT_180400bd0)[lVar26];
      *(undefined8 *)(puVar29 + -8) = 0x18012d857;
      puVar22 = (undefined1 *)FUN_18012ac20(uVar12);
    }
    pcVar18 = "MISSING";
    if ((&DAT_180400bd0)[lVar26] != 0) {
      pcVar18 = "ok";
    }
    *(char **)(puVar29 + 0x28) = pcVar27;
    *(char **)(puVar29 + 0x20) = pcVar20;
    puVar2 = (&PTR_DAT_18033bf38)[lVar26];
    *(undefined8 *)(puVar29 + -8) = 0x18012d89c;
    FUN_180014410("[SKY] face %s: mat=%s shader=%s basetex=%s %s\n",puVar2,pcVar18,puVar22);
    lVar26 = lVar26 + 1;
  } while (lVar26 != 6);
  pcVar27 = *(char **)(puVar29 + 0x38);
  *(undefined8 *)(puVar29 + -8) = 0x18012d8ca;
  strncpy_s(&DAT_180401180,0x40,pcVar27,0xffffffffffffffff);
  pcVar19 = "";
  cVar34 = puVar29[0x34];
  pcVar18 = *(char **)(puVar29 + 0x70);
  pcVar20 = "";
  if (cVar34 != '\0') {
    pcVar20 = pcVar18;
  }
  *(undefined8 *)(puVar29 + -8) = 0x18012d8fe;
  strncpy_s(&DAT_180400b20,0x50,pcVar20,0xffffffffffffffff);
  DAT_180400eb8 = 1;
  DAT_180401110 = 0 < iVar30;
  DAT_180400c00 = uVar1;
  if (iVar30 < 1) {
    iVar7 = 0;
    if (0 < DAT_180400ea8) {
      do {
        puVar23 = &DAT_1803e9ff0 + (longlong)iVar7 * 4;
        if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar7 * 4]) {
          puVar23 = (undefined8 *)*puVar23;
        }
        *(undefined8 *)(puVar29 + -8) = 0x18012d990;
        FUN_1802d7d9c(puVar23);
        iVar7 = iVar7 + 1;
      } while (iVar7 < DAT_180400ea8);
    }
    DAT_180400ea8 = 0;
    *(undefined8 *)(puVar29 + -8) = 0x18012d9b3;
    FUN_18012ab30("This sky (\'%s\') is packed in a VPK that beats loose files - can\'t override it."
                  ,pcVar27);
  }
  else if (cVar34 == '\0') {
    if (1 < (int)local_1b88) {
      pcVar19 = ", animated";
    }
    *(undefined8 *)(puVar29 + -8) = 0x18012d963;
    FUN_18012ab30("Custom sky on \'%s\': %d/6 faces%s.",pcVar27,iVar30,pcVar19);
  }
  else {
    *(undefined8 *)(puVar29 + -8) = 0x18012d937;
    FUN_18012ab30("\'%s\' on \'%s\': %d/6 faces.",pcVar18,pcVar27,iVar30);
  }
  *(undefined8 *)(puVar29 + -8) = 0x18012d9c9;
  FUN_180014410("[SKY] ApplyOverride: %d/6 faces verified, files kept=%d\n",iVar30,DAT_180400ea8);
  puVar22 = puVar29;
LAB_18012da31:
  *(undefined8 *)(puVar22 + -8) = 0x18012da3d;
  FUN_18021e290(local_1b40);
  puVar32 = puVar22;
LAB_18012da3d:
  *(undefined8 *)(puVar32 + -8) = 0x18012da4c;
  return;
}


)B18012c830",
    "f857deb7e66c871f8eef261d34c346f197fddaa9030be7da72ee3be84fa035f8",
    R"F18012c830C(FUN_180012b20
FUN_180014410
FUN_180066720
FUN_180067d80
FUN_18012ab30
FUN_18012abb0
FUN_18012ac20
FUN_18012ac40
FUN_18012acc0
FUN_18012ae90
FUN_18012b500
FUN_18012f810
FUN_180202dc0
FUN_180203ab0
FUN_180204f10
FUN_180204ff0
FUN_180205050
FUN_1802050b0
FUN_180211510
FUN_180211740
FUN_180212f60
FUN_18021a7b0
FUN_18021dbf0
FUN_18021e290
FUN_180241a30
FUN_1802d7d9c)F18012c830C",
    R"F18012c830D(LAB_18012cd2c
LAB_18012cd40
LAB_18012cff0
LAB_18012d53d
LAB_18012d547
LAB_18012d5a8
LAB_18012d5b9
LAB_18012d80b
LAB_18012da31
LAB_18012da3d
DAT_18033e5ea
DAT_18033e9cc
DAT_18035871c
DAT_1803589e8
DAT_1803589f0
DAT_180358d08
DAT_1803da4c0
DAT_1803e9ff0
DAT_1803ea008
DAT_1803ea170
DAT_1803ea178
DAT_1803f9248
DAT_1803fadf0
DAT_180400b20
DAT_180400b70
DAT_180400b74
DAT_180400bd0
DAT_180400c00
DAT_180400c04
DAT_180400c10
DAT_180400c70
DAT_180400cd0
DAT_180400d30
DAT_180400d90
DAT_180400df0
DAT_180400ea8
DAT_180400eb8
DAT_180401110
DAT_180401118
DAT_180401120
DAT_180401150
DAT_180401180
DAT_1804011d0
DAT_18056ff80
DAT_1805ba380
DAT_1805ba384)F18012c830D",
    R"F18012c830T(""
"?"
"ok"
".vtf"
"OURS"
"skybox"
"<- OURS"
"MISSING"
"sk%08x%s"
"materials"
", animated"
"skybox/%s%s"
"<imported vtf>"
"materials/skybox/%s%s.vmt"
"\\'%s\\' on \\'%s\\': %d/6 faces."
"[SKY] ApplyOverride: no gamedir\\n"
"\\'%s\\' is already the map\\'s sky."
"Custom sky on \\'%s\\': %d/6 faces%s."
"\\t\\\"$basetexturetransform\\\" \\\"%s\\\"\\n"
"Couldn\\'t locate the garrysmod folder."
"Failed to write into garrysmod/materials."
"[SKY] fs readback \\'%s\\': %s (%zu bytes)\\n"
"[SKY] ReloadMaterials(\\'skybox/%s\\') done\\n"
"[SKY] face %s: mat=%s shader=%s basetex=%s %s\\n"
"Failed to write the VMT override into materials/skybox."
"[SKY] ApplyOverride: %d/6 faces verified, files kept=%d\\n"
"[SKY] ApplyOverride: sky=\\'%s\\' src=\\'%s\\' set=%d frames=%d fps=%.1f\\n"
"This sky (\\'%s\\') is packed in a VPK that beats loose files - can\\'t override it."
"\\\"sky\\\"\\n{\\n\\t\\\"$basetexture\\\" \\\"%s\\\"\\n%s\\t\\\"$nofog\\\" \\\"1\\\"\\n\\t\\\"$ignorez\\\" \\\"1\\\"\\n}\\n"
"\\\"sky\\\"\\n{\\n\\t\\\"$basetexture\\\" \\\"%s\\\"\\n%s\\t\\\"$nofog\\\" \\\"1\\\"\\n\\t\\\"$ignorez\\\" \\\"1\\\"\\n\\t\\\"Proxies\\\"\\n\\t{\\n\\t\\t\\\"AnimatedTexture\\\"\\n\\t\\t{\\n\\t\\t\\t\\\"animatedTextureVar\\\" \\\"$basetexture\\\"\\n\\t\\t\\t\\\"animatedTextureFrameNumVar\\\" \\\"$frame\\\"\\n\\t\\t\\t\\\"animatedTextureFrameRate\\\" \\\"%.2f\\\"\\n\\t\\t}\\n\\t}\\n}\\n")F18012c830T",
    R"F18012c830F(124: if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
127: if (DAT_180400b70 == '\0') goto LAB_18012da3d;
129: else {
134: if ((param_1 == (char *)0x0) || (puVar32 = auStackY_1d78, *param_1 == '\0')) goto LAB_18012da3d;
136: if ((bVar3) && (iVar7 = _stricmp(param_2,param_1), iVar7 == 0)) {
143: goto LAB_18012da3d;
146: if (local_1b30 != 0) {
153: if ((bVar3) || (DAT_180400b74 != 6)) {
156: else {
160: if (bVar3) {
165: if (bVar3) {
170: if ((DAT_18056ff80 & 1) == 0) {
176: do {
206: if (0 < DAT_180400ea8) {
207: do {
209: if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar30 * 4]) {
217: if (!bVar3) {
225: if (cVar34 != '\0') {
229: LAB_18012cff0:
230: if (iVar7 < iVar30) {
232: if (cVar34 == '\0') {
235: else {
280: if (cVar6 != '\0') goto code_r0x00018012d1f8;
283: if (0 < DAT_180400ea8) {
284: do {
286: if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar30 * 4]) {
295: goto LAB_18012da31;
297: goto LAB_18012cd2c;
305: LAB_18012cd2c:
307: LAB_18012cd40:
330: if (!bVar5) {
332: if (cVar34 != '\0') {
335: if ((&DAT_1804011d0 + uVar14 * 0xa0 != (char *)0x0) &&
340: if ((int)local_1b88 < 2) {
345: else {
350: if ((0 < iVar30) &&
352: goto code_r0x00018012d336;
355: if (0 < DAT_180400ea8) {
356: do {
358: if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar30 * 4]) {
368: goto LAB_18012da31;
373: goto LAB_18012da31;
377: if ((undefined8 ****)(&DAT_1803e9ff0 + lVar26 * 4) != local_1b80) {
379: if (7 < local_1b68) {
386: goto LAB_18012cff0;
390: if ((undefined8 ****)(&DAT_1803e9ff0 + lVar26 * 4) != local_1b60) {
392: if (7 < local_1b48) {
400: if (5 < (int)uVar8) goto code_r0x00018012d3a4;
401: goto LAB_18012cd40;
407: if ((DAT_1803f9248 == (longlong *)0x0) || (local_1978[0] == '\0')) {
408: LAB_18012d5a8:
412: LAB_18012d5b9:
415: if (bVar3) goto LAB_18012d547;
418: else {
421: if (lVar26 == 0) goto LAB_18012d5a8;
422: if (local_1ba8 != pbStack_1ba0) {
425: do {
427: if (0 < iVar30) {
436: if ((local_1ba8 == pbStack_1ba0) ||
440: if ((longlong)sVar13 <= (longlong)pbVar28 - (longlong)pbVar17) {
442: while (pcVar27 = &DAT_180400c10, pbVar16 = pbVar33, pbVar31 = pbVar33,
444: for (; (uint)*pbVar31 == (int)*pcVar27; pbVar31 = pbVar31 + 1) {
446: if (pcVar27 == &DAT_180400c10 + sVar13) goto LAB_18012d53d;
449: if (pbVar33 == pbVar28 + -sVar13) break;
453: LAB_18012d53d:
454: if (pbVar16 == pbVar28) goto LAB_18012d5b9;
457: LAB_18012d547:
459: if (bVar5) {
464: if (local_1ba8 != (byte *)0x0) {
467: if ((0xfff < (ulonglong)(local_1b98 - (longlong)local_1ba8)) &&
512: do {
519: if (pcVar18 == (char *)0x0) {
520: LAB_18012d80b:
523: else {
526: if (iVar7 != 0) {
527: if (pcVar27 != (char *)0x0) {
532: if (pcVar20 < pcVar19) {
535: if (pcVar20 != (char *)0x0) {
543: if (pcVar20 < pcVar19) {
547: if (pcVar20 == (char *)0x0) {
552: if (iVar7 != 0) goto LAB_18012d80b;
558: if ((char)iVar7 != '\0') {
562: if (pcVar18 != (char *)0x0) {
568: if (lVar21 == 0) {
571: else {
577: if ((&DAT_180400bd0)[lVar26] != 0) {
594: if (cVar34 != '\0') {
602: if (iVar30 < 1) {
604: if (0 < DAT_180400ea8) {
605: do {
607: if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar7 * 4]) {
620: else if (cVar34 == '\0') {
621: if (1 < (int)local_1b88) {
627: else {
634: LAB_18012da31:
638: LAB_18012da3d:
640: return;)F18012c830F",
    R"F18012c830U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18012cd2c.
TODO: recover the declaration, type and value for global/data reference LAB_18012cd40.
TODO: recover the declaration, type and value for global/data reference LAB_18012cff0.
TODO: recover the declaration, type and value for global/data reference LAB_18012d53d.
TODO: recover the declaration, type and value for global/data reference LAB_18012d547.
TODO: recover the declaration, type and value for global/data reference LAB_18012d5a8.
TODO: recover the declaration, type and value for global/data reference LAB_18012d5b9.
TODO: recover the declaration, type and value for global/data reference LAB_18012d80b.
TODO: recover the declaration, type and value for global/data reference LAB_18012da31.
TODO: recover the declaration, type and value for global/data reference LAB_18012da3d.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_18033e9cc.
TODO: recover the declaration, type and value for global/data reference DAT_18035871c.
TODO: recover the declaration, type and value for global/data reference DAT_1803589e8.
TODO: recover the declaration, type and value for global/data reference DAT_1803589f0.
TODO: recover the declaration, type and value for global/data reference DAT_180358d08.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9ff0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea008.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea170.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea178.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9248.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_180400b20.
TODO: recover the declaration, type and value for global/data reference DAT_180400b70.
TODO: recover the declaration, type and value for global/data reference DAT_180400b74.
TODO: recover the declaration, type and value for global/data reference DAT_180400bd0.
TODO: recover the declaration, type and value for global/data reference DAT_180400c00.
TODO: recover the declaration, type and value for global/data reference DAT_180400c04.
TODO: recover the declaration, type and value for global/data reference DAT_180400c10.
TODO: recover the declaration, type and value for global/data reference DAT_180400c70.
TODO: recover the declaration, type and value for global/data reference DAT_180400cd0.
TODO: recover the declaration, type and value for global/data reference DAT_180400d30.
TODO: recover the declaration, type and value for global/data reference DAT_180400d90.
TODO: recover the declaration, type and value for global/data reference DAT_180400df0.
TODO: recover the declaration, type and value for global/data reference DAT_180400ea8.
TODO: recover the declaration, type and value for global/data reference DAT_180400eb8.
TODO: recover the declaration, type and value for global/data reference DAT_180401110.
TODO: recover the declaration, type and value for global/data reference DAT_180401118.
TODO: recover the declaration, type and value for global/data reference DAT_180401120.
TODO: recover the declaration, type and value for global/data reference DAT_180401150.
TODO: recover the declaration, type and value for global/data reference DAT_180401180.
TODO: recover the declaration, type and value for global/data reference DAT_1804011d0.
TODO: recover the declaration, type and value for global/data reference DAT_18056ff80.
TODO: recover the declaration, type and value for global/data reference DAT_1805ba380.
TODO: recover the declaration, type and value for global/data reference DAT_1805ba384.
TODO: resolve the indirect call in body 420: lVar26 = (*(code *)puVar23[2])(DAT_1803f9248,local_1978,&DAT_1803589f0,&DAT_1803589e8);.
TODO: resolve the indirect call in body 426: iVar30 = (*(code *)*puVar23)(DAT_1803f9248,local_1078,0x1000,lVar26);.
TODO: resolve the indirect call in body 432: (*(code *)puVar23[3])(DAT_1803f9248,lVar26);.
TODO: resolve the indirect call in body 470: pcVar4 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 471: pbVar17 = (byte *)(*pcVar4)(5);.)F18012c830U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012c830() noexcept {
    return kFunction_0x18012c830;
}

// 0x18012da80 FUN_18012da80
// source: re/dump/decompile/0x18012da80_FUN_18012da80.c
// size: 425 bytes; thunk: false
// body sha256: 34ed6aa324f2bbe35579eb5a969665b0012eab7a29f16e6188d107c8d5f6f8c2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012da80{
    "0x18012da80",
    "FUN_18012da80",
    R"F18012da80S(undefined FUN_18012da80())F18012da80S",
    R"B18012da80(// 0x18012da80  FUN_18012da80
// size=425 thunk=false
// signature: undefined FUN_18012da80()
// status: ok


void FUN_18012da80(char param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  void *pvVar7;
  longlong *plVar8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  longlong *local_58;
  void *local_50;
  ulonglong local_48;
  
  puVar6 = auStack_78;
  FUN_18012c6f0(1);
  plVar8 = &DAT_1803ea170;
  do {
    pvVar7 = (void *)*plVar8;
    pvVar4 = (void *)plVar8[1];
    if (pvVar7 != (void *)plVar8[1]) {
      plVar8[1] = (longlong)pvVar7;
      pvVar4 = pvVar7;
    }
    if (pvVar4 != (void *)plVar8[2]) {
      if (pvVar7 == pvVar4) {
        if (pvVar7 != (void *)0x0) {
          pvVar4 = pvVar7;
          if ((0xfff < (ulonglong)(plVar8[2] - (longlong)pvVar7)) &&
             (pvVar4 = *(void **)((longlong)pvVar7 + -8),
             0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar4)))) {
LAB_18012dc1d:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar6 = auStack_70;
LAB_18012dc24:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar6 + -8) = &UNK_18012dc29;
            FUN_180012fe0();
          }
          free(pvVar4);
          *plVar8 = 0;
          plVar8[1] = 0;
          plVar8[2] = 0;
        }
      }
      else {
        uVar5 = (longlong)pvVar4 - (longlong)pvVar7;
        pvVar7 = (void *)0x0;
        if (uVar5 != 0) {
          if (uVar5 < 0x1000) {
            pvVar7 = (void *)FUN_1802d8350(uVar5);
          }
          else {
            if (uVar5 + 0x27 <= uVar5) goto LAB_18012dc24;
            lVar2 = FUN_1802d8350();
            if (lVar2 == 0) goto LAB_18012dc1d;
            pvVar7 = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)((longlong)pvVar7 - 8) = lVar2;
          }
        }
        local_58 = plVar8;
        local_50 = pvVar7;
        local_48 = uVar5;
        memmove(pvVar7,(void *)*plVar8,plVar8[1] - *plVar8);
        local_50 = (void *)0x0;
        FUN_18022c3f0(plVar8,pvVar7,uVar5,uVar5);
      }
    }
    plVar8 = plVar8 + 3;
    if (plVar8 == &DAT_1803ea200) {
      puVar3 = &DAT_1804011d0;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 0xa0;
      } while (puVar3 != &DAT_180401590);
      DAT_180400b74 = 0;
      DAT_180400b70 = 0;
      DAT_180400eb4 = 0;
      DAT_180400eac = 0;
      DAT_180400c04 = 0;
      DAT_180401111 = 0;
      DAT_180400e51 = 0;
      if (param_1 != '\0') {
        FUN_18012ab30("No custom VTF loaded.");
      }
      return;
    }
  } while( true );
}


)B18012da80",
    "34ed6aa324f2bbe35579eb5a969665b0012eab7a29f16e6188d107c8d5f6f8c2",
    R"F18012da80C(FUN_180012fe0
FUN_18012ab30
FUN_18012c6f0
FUN_18022c3f0
FUN_1802d8350)F18012da80C",
    R"F18012da80D(LAB_18012dc1d
LAB_18012dc24
UNK_18012dc29
DAT_1803ea170
DAT_1803ea200
DAT_180400b70
DAT_180400b74
DAT_180400c04
DAT_180400e51
DAT_180400eac
DAT_180400eb4
DAT_180401111
DAT_1804011d0
DAT_180401590)F18012da80D",
    R"F18012da80T("No custom VTF loaded.")F18012da80T",
    R"F18012da80F(27: do {
30: if (pvVar7 != (void *)plVar8[1]) {
34: if (pvVar4 != (void *)plVar8[2]) {
35: if (pvVar7 == pvVar4) {
36: if (pvVar7 != (void *)0x0) {
38: if ((0xfff < (ulonglong)(plVar8[2] - (longlong)pvVar7)) &&
41: LAB_18012dc1d:
45: LAB_18012dc24:
56: else {
59: if (uVar5 != 0) {
60: if (uVar5 < 0x1000) {
63: else {
64: if (uVar5 + 0x27 <= uVar5) goto LAB_18012dc24;
66: if (lVar2 == 0) goto LAB_18012dc1d;
80: if (plVar8 == &DAT_1803ea200) {
82: do {
93: if (param_1 != '\0') {
96: return;)F18012da80F",
    R"F18012da80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18012dc1d.
TODO: recover the declaration, type and value for global/data reference LAB_18012dc24.
TODO: recover the declaration, type and value for global/data reference UNK_18012dc29.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea170.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea200.
TODO: recover the declaration, type and value for global/data reference DAT_180400b70.
TODO: recover the declaration, type and value for global/data reference DAT_180400b74.
TODO: recover the declaration, type and value for global/data reference DAT_180400c04.
TODO: recover the declaration, type and value for global/data reference DAT_180400e51.
TODO: recover the declaration, type and value for global/data reference DAT_180400eac.
TODO: recover the declaration, type and value for global/data reference DAT_180400eb4.
TODO: recover the declaration, type and value for global/data reference DAT_180401111.
TODO: recover the declaration, type and value for global/data reference DAT_1804011d0.
TODO: recover the declaration, type and value for global/data reference DAT_180401590.
TODO: resolve the indirect call in body 42: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 43: (*pcVar1)(5);.)F18012da80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012da80() noexcept {
    return kFunction_0x18012da80;
}

// 0x18012dc30 FUN_18012dc30
// source: re/dump/decompile/0x18012dc30_FUN_18012dc30.c
// size: 2873 bytes; thunk: false
// body sha256: fc9b2063de5c9051e98d666b3ce231f13efcdf86be23b4f185d63a278968a601
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012dc30{
    "0x18012dc30",
    "FUN_18012dc30",
    R"F18012dc30S(undefined FUN_18012dc30())F18012dc30S",
    R"B18012dc30(// 0x18012dc30  FUN_18012dc30
// size=2873 thunk=false
// signature: undefined FUN_18012dc30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018012e2b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18012dc30(void)

{
  wint_t *******pppppppwVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  wint_t wVar10;
  int iVar11;
  undefined4 uVar12;
  size_t sVar13;
  undefined8 uVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  uint *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  wint_t *******pppppppwVar21;
  undefined2 uVar22;
  char *pcVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  wint_t *******pppppppwVar27;
  undefined1 auStackY_8a8 [32];
  longlong local_868;
  undefined1 local_860;
  undefined1 local_85f;
  undefined4 local_85e;
  undefined4 local_858;
  undefined8 local_848;
  undefined2 local_840;
  undefined4 local_83e;
  undefined8 ******local_838 [2];
  ulonglong local_828;
  ulonglong local_820;
  ulonglong local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  basic_ios<char,std::char_traits<char>_> *local_7f8 [2];
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined1 local_7a8 [32];
  undefined1 local_788 [16];
  undefined1 local_778 [32];
  undefined1 local_758 [32];
  undefined1 local_738 [32];
  undefined1 local_718 [32];
  undefined1 local_6f8 [32];
  undefined1 local_6d8 [32];
  undefined1 local_6b8 [32];
  undefined1 local_698 [32];
  undefined1 local_678 [28];
  int iStack_65c;
  longlong local_658 [2];
  byte local_648 [8];
  basic_istream<char,std::char_traits<char>_> local_640 [48];
  longlong alStack_610 [13];
  basic_ios<char,std::char_traits<char>_> local_5a8 [96];
  undefined8 local_548;
  undefined8 local_540;
  wint_t ******local_538;
  undefined8 uStack_530;
  longlong local_528;
  ulonglong local_520;
  undefined8 ******local_518 [2];
  undefined8 local_508;
  ulonglong local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  ulonglong local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined1 local_4b8 [32];
  undefined1 local_498 [32];
  undefined1 local_478 [16];
  longlong local_468;
  WCHAR local_458 [512];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStackY_8a8;
  uVar26 = 0;
  FUN_18012da80(0);
  if (DAT_180400ec0 == '\0') {
    FUN_18012ab30("Enter a path to a .vtf file first.");
    return;
  }
  FUN_18012ae90(local_478);
  if (local_468 == 0) {
    FUN_18012ab30("Couldn\'t locate the garrysmod folder.");
    goto LAB_18012e735;
  }
  FUN_18012bc40(local_478);
  memset(local_458,0,0x400);
  MultiByteToWideChar(0xfde9,0,&DAT_180400ec0,-1,local_458,0x1ff);
  local_818 = 0;
  uStack_810 = 0;
  local_808 = 0;
  uStack_800 = 0;
  sVar13 = wcslen(local_458);
  FUN_180211510(&local_818,local_458,sVar13);
  local_4d8 = local_818;
  uStack_4d0 = uStack_810;
  local_4c8 = local_808;
  uStack_4c0 = uStack_800;
  local_808 = _DAT_1803814a0;
  uStack_800 = _UNK_1803814a8;
  local_818 = local_818 & 0xffffffffffff0000;
  FUN_18021e290(&local_818);
  bVar8 = false;
  bVar9 = false;
  FUN_180065cd0(&local_4d8,local_498);
  uStack_4f0 = 0;
  local_4e8 = _DAT_1803814a0;
  uStack_4e0 = _UNK_1803814a8;
  local_4f8 = 0;
  uVar14 = FUN_180065ec0(&local_4d8,local_7a8);
  FUN_18020e540(local_838,uVar14);
  FUN_18021e290(local_7a8);
  if (2 < local_828) {
    uVar20 = local_828 - 2;
    local_538 = (wint_t ******)0x0;
    uStack_530 = 0;
    local_528 = 0;
    local_520 = 0;
    if (local_828 < uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_18022ec00();
    }
    lVar25 = -1;
    if (local_828 - uVar20 != -1) {
      lVar25 = local_828 - uVar20;
    }
    pppppppuVar15 = local_838;
    if (7 < local_820) {
      pppppppuVar15 = (undefined8 *******)local_838[0];
    }
    FUN_180211510(&local_538,(longlong)pppppppuVar15 + uVar20 * 2,lVar25);
    pppppppwVar21 = (wint_t *******)local_538;
    if (local_520 < 8) {
      pppppppwVar21 = &local_538;
    }
    pppppppwVar1 = (wint_t *******)((longlong)pppppppwVar21 + local_528 * 2);
    pppppppwVar27 = (wint_t *******)local_538;
    for (; uVar20 = uVar26, local_538 = (wint_t ******)pppppppwVar27, pppppppwVar21 != pppppppwVar1;
        pppppppwVar21 = (wint_t *******)((longlong)pppppppwVar21 + 2)) {
      wVar10 = towlower(*(wint_t *)pppppppwVar21);
      *(wint_t *)pppppppwVar21 = wVar10;
      pppppppwVar27 = (wint_t *******)local_538;
    }
    do {
      puVar16 = (undefined8 *)
                FUN_180205110(local_778,(&PTR_DAT_18033bf38)[uVar20],
                              (&PTR_DAT_18033bf38)[uVar20] + 2);
      plVar19 = puVar16 + 2;
      if (7 < (ulonglong)puVar16[3]) {
        puVar16 = (undefined8 *)*puVar16;
      }
      pppppppwVar21 = &local_538;
      if (7 < local_520) {
        pppppppwVar21 = pppppppwVar27;
      }
      if (local_528 == *plVar19) {
        bVar2 = false;
        if (local_528 != 0) {
          iVar11 = FUN_180012bf0(pppppppwVar21,puVar16);
          pppppppwVar27 = (wint_t *******)local_538;
          bVar2 = iVar11 != 0;
        }
      }
      else {
        bVar2 = true;
      }
      FUN_18021e290(local_778);
      if (!bVar2) {
        FUN_18020e4c0(local_838,local_518,0,local_828 - 2);
        bVar2 = true;
        uVar20 = uVar26;
        goto LAB_18012df81;
      }
      uVar24 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar24;
    } while ((int)uVar24 < 6);
    goto LAB_18012e10d;
  }
  goto LAB_18012e128;
  while( true ) {
    uVar14 = FUN_180205110(local_6f8,(&PTR_DAT_18033bf38)[uVar20],(&PTR_DAT_18033bf38)[uVar20] + 2);
    uVar14 = FUN_180205260(local_718,local_518,uVar14);
    puVar16 = (undefined8 *)FUN_180204f70(local_738,uVar14,L".vtf");
    local_7c8 = *puVar16;
    uStack_7c0 = puVar16[1];
    local_7b8 = puVar16[2];
    uStack_7b0 = puVar16[3];
    *(undefined2 *)puVar16 = 0;
    puVar16[2] = 0;
    puVar16[3] = 7;
    uVar14 = FUN_180066720(local_758,local_498,&local_7c8);
    puVar18 = (uint *)FUN_180067c80(local_7f8,uVar14);
    bVar2 = 1 < *puVar18;
    FUN_18021e290(local_758);
    FUN_18021e290(&local_7c8);
    FUN_18021e290(local_738);
    FUN_18021e290(local_718);
    FUN_18021e290(local_6f8);
    uVar24 = (int)uVar20 + 1;
    uVar20 = (ulonglong)uVar24;
    if (5 < (int)uVar24) break;
LAB_18012df81:
    if (!bVar2) goto LAB_18012e101;
  }
  if (bVar2) {
    bVar8 = true;
    bVar9 = true;
    pppppppuVar15 = local_518;
    if (7 < local_500) {
      pppppppuVar15 = (undefined8 *******)local_518[0];
    }
    FUN_18021a7b0(&local_4f8,pppppppuVar15,local_508);
  }
LAB_18012e101:
  FUN_18021e290(local_518);
LAB_18012e10d:
  FUN_18021e290(&local_538);
LAB_18012e128:
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar2 = false;
  FUN_18021e290(local_838);
  uVar12 = 1;
  if (bVar8) {
    uVar12 = 6;
  }
  local_540 = CONCAT44(local_540._4_4_,uVar12);
  local_858 = local_85e;
  local_548 = CONCAT44(local_548._4_4_,local_85e);
  do {
    iVar11 = (int)uVar26;
    if (bVar8) {
      uVar14 = FUN_180205110(local_678,(&PTR_DAT_18033bf38)[iVar11],(&PTR_DAT_18033bf38)[iVar11] + 2
                            );
      uVar14 = FUN_180205260(local_698,&local_4f8,uVar14);
      puVar16 = (undefined8 *)FUN_180204f70(local_6b8,uVar14,L".vtf");
      local_7e8 = *puVar16;
      uStack_7e0 = puVar16[1];
      local_7d8 = puVar16[2];
      uStack_7d0 = puVar16[3];
      *(undefined2 *)puVar16 = 0;
      puVar16[2] = 0;
      puVar16[3] = 7;
      puVar17 = (undefined1 *)FUN_180066720(local_6d8,local_498,&local_7e8);
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
      bVar4 = true;
    }
    else {
      FUN_18020e540(local_7a8,&local_4d8);
      bVar2 = true;
      puVar17 = local_7a8;
    }
    FUN_18020e540(local_4b8,puVar17);
    if (bVar2) {
      bVar2 = false;
      FUN_18021e290(local_7a8);
    }
    if (bVar4) {
      bVar4 = false;
      FUN_18021e290(local_6d8);
    }
    if (bVar5) {
      bVar5 = false;
      FUN_18021e290(&local_7e8);
    }
    if (bVar6) {
      bVar6 = false;
      FUN_18021e290(local_698);
    }
    if (bVar7) {
      bVar7 = false;
      FUN_18021e290(local_678);
    }
    lVar25 = (longlong)iVar11;
    puVar18 = (uint *)FUN_180067c80(local_788);
    if (*puVar18 < 2) {
LAB_18012e6d0:
      pcVar23 = "Failed to read the file (not a VTF?).";
      if (bVar8) {
        pcVar23 = "Failed to read the \'%s\' face (not a VTF?).";
      }
      FUN_18012ab30(pcVar23,(&PTR_DAT_18033bf38)[lVar25]);
      FUN_18012da80(0);
      FUN_18021e290(local_4b8);
      goto LAB_18012e70e;
    }
    memset(local_658,0,0x110);
    FUN_180202040(local_658,local_4b8,0x20);
    if ((local_648[*(int *)(local_658[0] + 4)] & 6) != 0) {
      local_7f8[0] = local_5a8;
      *(undefined ***)((longlong)local_658 + (longlong)*(int *)(local_658[0] + 4)) =
           vftable_std_std_D_DU__char_traits___basic_ifstream;
      *(int *)((longlong)&iStack_65c + (longlong)*(int *)(local_658[0] + 4)) =
           *(int *)(local_658[0] + 4) + -0xb0;
      FUN_18020f850(local_648);
      std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
                (local_640);
      std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                (local_5a8);
      goto LAB_18012e6d0;
    }
    plVar19 = &DAT_1803ea170 + lVar25 * 3;
    local_868 = *(longlong *)((longlong)alStack_610 + (longlong)*(int *)(local_658[0] + 4));
    local_848 = 0;
    local_840 = 1;
    local_83e = local_858;
    local_860 = local_868 == 0;
    local_85f = 0;
    local_85e = (undefined4)local_548;
    FUN_1802131e0(plVar19,&local_868);
    if (((ulonglong)((&DAT_1803ea178)[lVar25 * 3] - *plVar19) < 0x51) ||
       (*(int *)*plVar19 != 0x465456)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    local_7f8[0] = local_5a8;
    *(undefined ***)((longlong)local_658 + (longlong)*(int *)(local_658[0] + 4)) =
         vftable_std_std_D_DU__char_traits___basic_ifstream;
    *(int *)((longlong)&iStack_65c + (longlong)*(int *)(local_658[0] + 4)) =
         *(int *)(local_658[0] + 4) + -0xb0;
    FUN_18020f850(local_648);
    std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
              (local_640);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              (local_5a8);
    bVar8 = bVar9;
    if (!bVar3) goto LAB_18012e6d0;
    if ((ulonglong)((&DAT_1803ea178)[lVar25 * 3] - *plVar19) < 0x1c) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(undefined2 *)(*plVar19 + 0x10);
    }
    FUN_18012b620(local_4b8,uVar22);
    FUN_18021e290(local_4b8);
    uVar26 = (ulonglong)(iVar11 + 1U);
  } while ((int)(iVar11 + 1U) < (int)local_540);
  DAT_180400b74 = (int)local_540;
  DAT_180400eb4 = 0;
  DAT_180400eac = 0;
  DAT_180400c04 = 1;
  if (0x1b < (ulonglong)(DAT_1803ea178 - DAT_1803ea170)) {
    DAT_180400eac = (uint)*(ushort *)(DAT_1803ea170 + 0x10);
    DAT_180400eb4 = (uint)*(ushort *)(DAT_1803ea170 + 0x12);
    DAT_180400c04 = 1;
    if (*(ushort *)(DAT_1803ea170 + 0x18) != 0) {
      DAT_180400c04 = (uint)*(ushort *)(DAT_1803ea170 + 0x18);
    }
  }
  DAT_180400b70 = 1;
  pcVar23 = "Loaded";
  if (DAT_180400c04 < 2) {
    if (bVar9) {
      pcVar23 = "Loaded 6-face set";
    }
    FUN_18012ab30("%s %dx%d.",pcVar23);
  }
  else {
    if (bVar9) {
      pcVar23 = "Loaded 6-face set";
    }
    FUN_18012ab30("%s %dx%d, %d frames (animated).",pcVar23);
  }
  pcVar23 = "single";
  if (bVar9) {
    pcVar23 = "6-face set";
  }
  FUN_180014410("[SKY] DoLoad: %s %dx%d frames=%d (%zu bytes)\n",pcVar23,DAT_180400eac,DAT_180400eb4
               );
  local_540 = 0x93fd561a96ab0c67;
  local_548 = 0x4f0efc17f02b64be;
  plVar19 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_868,&local_540);
  plVar19 = (longlong *)FUN_180241a30(*plVar19 + 0x28,&local_848,&local_548);
  puVar17 = (undefined1 *)FUN_1801fcfc0(*plVar19 + 0x28);
  *puVar17 = 1;
LAB_18012e70e:
  FUN_18021e290(&local_4f8);
  FUN_18021e290(local_498);
  FUN_18021e290(&local_4d8);
LAB_18012e735:
  FUN_18021e290(local_478);
  return;
}


)B18012dc30",
    "fc9b2063de5c9051e98d666b3ce231f13efcdf86be23b4f185d63a278968a601",
    R"F18012dc30C(FUN_180012bf0
FUN_180014410
FUN_180065cd0
FUN_180065ec0
FUN_180066720
FUN_180067c80
FUN_18012ab30
FUN_18012ae90
FUN_18012b620
FUN_18012bc40
FUN_18012da80
FUN_1801fcfc0
FUN_180202040
FUN_180204f70
FUN_180205110
FUN_180205260
FUN_18020e4c0
FUN_18020e540
FUN_18020f850
FUN_180211510
FUN_1802131e0
FUN_18021a7b0
FUN_18021e290
FUN_18022ec00
FUN_180241a30)F18012dc30C",
    R"F18012dc30D(LAB_18012df81
LAB_18012e101
LAB_18012e10d
LAB_18012e128
LAB_18012e6d0
LAB_18012e70e
LAB_18012e735
DAT_1803da4c0
DAT_1803ea170
DAT_1803ea178
DAT_1803fadf0
DAT_180400b70
DAT_180400b74
DAT_180400c04
DAT_180400eac
DAT_180400eb4
DAT_180400ec0)F18012dc30D",
    R"F18012dc30T(".vtf"
"Loaded"
"single"
"%s %dx%d."
"6-face set"
"Loaded 6-face set"
"%s %dx%d, %d frames (animated)."
"Enter a path to a .vtf file first."
"Failed to read the file (not a VTF?)."
"Couldn\\'t locate the garrysmod folder."
"Failed to read the \\'%s\\' face (not a VTF?)."
"[SKY] DoLoad: %s %dx%d frames=%d (%zu bytes)\\n")F18012dc30T",
    R"F18012dc30F(110: if (DAT_180400ec0 == '\0') {
112: return;
115: if (local_468 == 0) {
117: goto LAB_18012e735;
146: if (2 < local_828) {
152: if (local_828 < uVar20) {
157: if (local_828 - uVar20 != -1) {
161: if (7 < local_820) {
166: if (local_520 < 8) {
171: for (; uVar20 = uVar26, local_538 = (wint_t ******)pppppppwVar27, pppppppwVar21 != pppppppwVar1;
177: do {
182: if (7 < (ulonglong)puVar16[3]) {
186: if (7 < local_520) {
189: if (local_528 == *plVar19) {
191: if (local_528 != 0) {
197: else {
201: if (!bVar2) {
205: goto LAB_18012df81;
210: goto LAB_18012e10d;
212: goto LAB_18012e128;
213: while( true ) {
234: if (5 < (int)uVar24) break;
235: LAB_18012df81:
236: if (!bVar2) goto LAB_18012e101;
238: if (bVar2) {
242: if (7 < local_500) {
247: LAB_18012e101:
249: LAB_18012e10d:
251: LAB_18012e128:
259: if (bVar8) {
265: do {
267: if (bVar8) {
285: else {
291: if (bVar2) {
295: if (bVar4) {
299: if (bVar5) {
303: if (bVar6) {
307: if (bVar7) {
313: if (*puVar18 < 2) {
314: LAB_18012e6d0:
316: if (bVar8) {
322: goto LAB_18012e70e;
326: if ((local_648[*(int *)(local_658[0] + 4)] & 6) != 0) {
337: goto LAB_18012e6d0;
348: if (((ulonglong)((&DAT_1803ea178)[lVar25 * 3] - *plVar19) < 0x51) ||
352: else {
366: if (!bVar3) goto LAB_18012e6d0;
367: if ((ulonglong)((&DAT_1803ea178)[lVar25 * 3] - *plVar19) < 0x1c) {
370: else {
381: if (0x1b < (ulonglong)(DAT_1803ea178 - DAT_1803ea170)) {
385: if (*(ushort *)(DAT_1803ea170 + 0x18) != 0) {
391: if (DAT_180400c04 < 2) {
392: if (bVar9) {
397: else {
398: if (bVar9) {
404: if (bVar9) {
415: LAB_18012e70e:
419: LAB_18012e735:
421: return;)F18012dc30F",
    R"F18012dc30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18012df81.
TODO: recover the declaration, type and value for global/data reference LAB_18012e101.
TODO: recover the declaration, type and value for global/data reference LAB_18012e10d.
TODO: recover the declaration, type and value for global/data reference LAB_18012e128.
TODO: recover the declaration, type and value for global/data reference LAB_18012e6d0.
TODO: recover the declaration, type and value for global/data reference LAB_18012e70e.
TODO: recover the declaration, type and value for global/data reference LAB_18012e735.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea170.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea178.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_180400b70.
TODO: recover the declaration, type and value for global/data reference DAT_180400b74.
TODO: recover the declaration, type and value for global/data reference DAT_180400c04.
TODO: recover the declaration, type and value for global/data reference DAT_180400eac.
TODO: recover the declaration, type and value for global/data reference DAT_180400eb4.
TODO: recover the declaration, type and value for global/data reference DAT_180400ec0.)F18012dc30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012dc30() noexcept {
    return kFunction_0x18012dc30;
}

// 0x18012e770 FUN_18012e770
// source: re/dump/decompile/0x18012e770_FUN_18012e770.c
// size: 2842 bytes; thunk: false
// body sha256: 874d25ca0e19d792e2a38a852989704d3d79a729db3b1c950a43fe36140cbbcd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012e770{
    "0x18012e770",
    "FUN_18012e770",
    R"F18012e770S(undefined FUN_18012e770())F18012e770S",
    R"B18012e770(// 0x18012e770  FUN_18012e770
// size=2842 thunk=false
// signature: undefined FUN_18012e770()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18012e770(void)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 extraout_var;
  undefined8 uVar7;
  size_t sVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *******pppppppuVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined *puVar17;
  char *pcVar18;
  bool bVar19;
  undefined1 auStackY_1198 [32];
  undefined8 local_1160;
  undefined **local_1158;
  undefined8 local_1150;
  undefined8 uStack_1148;
  undefined8 local_1140;
  undefined8 local_1138;
  undefined8 local_1130;
  undefined8 uStack_1128;
  undefined8 local_1120;
  undefined8 uStack_1118;
  undefined8 local_1110;
  undefined8 uStack_1108;
  undefined8 local_1100;
  undefined8 local_10f8;
  undefined8 local_10f0;
  undefined8 uStack_10e8;
  undefined8 local_10e0;
  undefined8 local_10d8;
  uint local_10d0;
  uint uStack_10cc;
  uint uStack_10c8;
  uint uStack_10c4;
  undefined8 local_10c0;
  undefined8 uStack_10b8;
  uint local_10b0;
  uint uStack_10ac;
  uint uStack_10a8;
  uint uStack_10a4;
  undefined8 local_10a0;
  undefined8 uStack_1098;
  undefined8 local_1090;
  undefined8 uStack_1088;
  undefined8 local_1080;
  undefined8 uStack_1078;
  undefined4 local_1070;
  undefined4 uStack_106c;
  undefined4 uStack_1068;
  undefined4 uStack_1064;
  undefined8 local_1060;
  undefined8 uStack_1058;
  undefined1 local_1050 [32];
  undefined1 local_1030 [32];
  undefined1 local_1010 [32];
  undefined8 *local_ff0;
  undefined8 *local_fe8;
  undefined8 ******local_fe0 [2];
  undefined8 local_fd0;
  ulonglong local_fc8;
  undefined8 ******local_fc0 [2];
  undefined8 local_fb0;
  ulonglong local_fa8;
  undefined1 local_fa0 [16];
  longlong local_f90;
  char local_f78 [64];
  CHAR local_f38 [64];
  undefined1 local_ef8 [64];
  undefined1 local_eb8 [64];
  undefined1 local_e78 [64];
  undefined1 local_e38 [64];
  undefined1 local_df8 [64];
  undefined1 local_db8 [224];
  CHAR local_cd8 [192];
  undefined1 local_c18 [896];
  WCHAR local_898 [512];
  WCHAR local_498 [512];
  ulonglong local_98;
  undefined8 local_48;
  
  local_48 = 0x18012e78f;
  local_98 = DAT_1803da4c0 ^ (ulonglong)auStackY_1198;
  uVar15 = 0;
  if (DAT_180400b70 == '\0') {
    return;
  }
  FUN_18012ae90(local_fa0);
  if (local_f90 == 0) {
    FUN_18012ab30("Couldn\'t locate the garrysmod folder.");
  }
  else {
    bVar19 = DAT_180400b74 != 6;
    local_fe8 = (undefined8 *)0x93fd561a96ab0c67;
    local_ff0 = (undefined8 *)0xaeca5b24c521e60;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_1160,&local_fe8);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,&local_1150,&local_ff0);
    FUN_180202dc0(*plVar6 + 0x28);
    local_1160 = 0;
    DAT_180400e51 = 1;
    uVar12 = uVar15;
    if (0 < DAT_180400ea8) {
      do {
        local_1158 = &PTR_vftable_std__System_error_category_1803e9500;
        iVar5 = (int)uVar12;
        puVar11 = &DAT_1803e9ff0 + (longlong)iVar5 * 4;
        if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar5 * 4]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        FUN_1802d7d9c(puVar11);
        local_1160 = CONCAT44(local_1150._4_4_,extraout_var);
        uVar12 = (ulonglong)(iVar5 + 1U);
      } while ((int)(iVar5 + 1U) < DAT_180400ea8);
    }
    local_1158 = &PTR_vftable_std__System_error_category_1803e9500;
    DAT_180400ea8 = 0;
    if ((DAT_18042f174 & 1) == 0) {
      DAT_18042f174 = DAT_18042f174 | 1;
      _DAT_1805bdb14 = std::_Random_device();
      _DAT_1805bee94 = 0xffffffff;
      uVar12 = 1;
      uVar3 = _DAT_1805bdb14;
      do {
        uVar3 = (uVar3 >> 0x1e ^ uVar3) * 0x6c078965 + (int)uVar12;
        *(uint *)(&DAT_1805bdb14 + uVar12 * 4) = uVar3;
        uVar12 = uVar12 + 1;
      } while (uVar12 < 0x270);
      _DAT_1805bdb10 = 0x270;
    }
    uVar4 = FUN_18021dbf0(&DAT_1805bdb10);
    FUN_180204f10(local_f78,"sky_%08x",uVar4);
    local_ff0 = &local_1110;
    local_1110 = 0;
    uStack_1108 = 0;
    local_1100 = 0;
    local_10f8 = 0;
    FUN_180211510(&local_1110,L"skybox",6);
    local_fe8 = &local_1150;
    local_1150 = 0;
    uStack_1148 = 0;
    local_1140 = 0;
    local_1138 = 0;
    FUN_180211510(&local_1150,L"materials",9);
    uVar7 = FUN_180066720(local_1030,local_fa0,&local_1150);
    uVar7 = FUN_180066720(local_1050,uVar7,&local_1110);
    FUN_180067d80(uVar7,&local_1160);
    FUN_18021e290(local_1050);
    FUN_18021e290(local_1030);
    FUN_18021e290(&local_1150);
    FUN_18021e290(&local_1110);
    pcVar18 = "";
    if (bVar19) {
      FUN_180204f10(local_f38,"sk%08x%s",uVar4,&DAT_18033e5ea);
      FUN_180204f10(local_ef8,"sk%08x%s",uVar4,&DAT_18033e5ea);
      FUN_180204f10(local_eb8,"sk%08x%s",uVar4,&DAT_18033e5ea);
      FUN_180204f10(local_e78,"sk%08x%s",uVar4,&DAT_18033e5ea);
      FUN_180204f10(local_e38,"sk%08x%s",uVar4,&DAT_18033e5ea);
      puVar17 = &DAT_18033e5ea;
    }
    else {
      FUN_180204f10(local_f38,"sk%08x%s",uVar4,PTR_DAT_18033bf38);
      FUN_180204f10(local_ef8,"sk%08x%s",uVar4,PTR_DAT_18033bf40);
      FUN_180204f10(local_eb8,"sk%08x%s",uVar4,PTR_DAT_18033bf48);
      FUN_180204f10(local_e78,"sk%08x%s",uVar4,PTR_DAT_18033bf50);
      FUN_180204f10(local_e38,"sk%08x%s",uVar4,PTR_DAT_18033bf58);
      puVar17 = PTR_DAT_18033bf60;
    }
    FUN_180204f10(local_df8,"sk%08x%s",uVar4,puVar17);
    uVar1 = _UNK_1803814a8;
    uVar7 = _DAT_1803814a0;
    uVar12 = uVar15;
    do {
      memset(local_898,0,0x400);
      lVar14 = (longlong)(int)uVar12;
      MultiByteToWideChar(0xfde9,0,local_f38 + lVar14 * 0x40,-1,local_898,0x1ff);
      local_1090 = 0;
      uStack_1088 = 0;
      local_1080 = 0;
      uStack_1078 = 0;
      sVar8 = wcslen(local_898);
      FUN_180211510(&local_1090,local_898,sVar8);
      puVar9 = (uint *)FUN_180211740(&local_1090,L".vtf",4);
      local_10b0 = *puVar9;
      uStack_10cc = puVar9[1];
      uStack_10c8 = puVar9[2];
      uStack_10c4 = puVar9[3];
      local_10a0 = *(undefined8 *)(puVar9 + 4);
      uStack_1098 = *(undefined8 *)(puVar9 + 6);
      *(undefined2 *)puVar9 = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[6] = 7;
      puVar9[7] = 0;
      local_10c0 = uVar7;
      uStack_10b8 = uVar1;
      local_10d0 = local_10b0 & 0xffff0000;
      local_ff0 = &local_10f0;
      local_10f0 = 0;
      uStack_10e8 = 0;
      local_10e0 = 0;
      local_10d8 = 0;
      uStack_10ac = uStack_10cc;
      uStack_10a8 = uStack_10c8;
      uStack_10a4 = uStack_10c4;
      FUN_180211510(&local_10f0,L"materials",9);
      uVar10 = FUN_180066720(local_1010,local_fa0,&local_10f0);
      FUN_180066720(local_fc0,uVar10,&local_10b0);
      FUN_18021e290(local_1010);
      FUN_18021e290(&local_10f0);
      FUN_18021e290(&local_10b0);
      FUN_18021e290(&local_10d0);
      FUN_18021e290(&local_1090);
      cVar2 = FUN_18012b500(local_fc0,(&DAT_1803ea170)[lVar14 * 3],
                            (&DAT_1803ea178)[lVar14 * 3] - (&DAT_1803ea170)[lVar14 * 3]);
      if (cVar2 == '\0') {
        FUN_18012ab30("Failed to write into garrysmod/materials.");
        if (0 < DAT_180400ea8) {
          do {
            iVar5 = (int)uVar15;
            puVar11 = &DAT_1803e9ff0 + (longlong)iVar5 * 4;
            if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar5 * 4]) {
              puVar11 = (undefined8 *)*puVar11;
            }
            FUN_1802d7d9c(puVar11);
            uVar15 = (ulonglong)(iVar5 + 1U);
          } while ((int)(iVar5 + 1U) < DAT_180400ea8);
        }
        DAT_180400ea8 = 0;
        FUN_18021e290(local_fc0);
        goto LAB_18012f243;
      }
      lVar14 = (longlong)DAT_180400ea8;
      DAT_180400ea8 = DAT_180400ea8 + 1;
      if ((undefined8 *******)(&DAT_1803e9ff0 + lVar14 * 4) != local_fc0) {
        pppppppuVar13 = local_fc0;
        if (7 < local_fa8) {
          pppppppuVar13 = (undefined8 *******)local_fc0[0];
        }
        FUN_18021a7b0(&DAT_1803e9ff0 + lVar14 * 4,pppppppuVar13,local_fb0);
      }
      FUN_18021e290(local_fc0);
      uVar3 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar3;
      iVar5 = 1;
      if (!bVar19) {
        iVar5 = 6;
      }
      uVar16 = uVar15;
    } while ((int)uVar3 < iVar5);
    do {
      FUN_180204ff0(local_cd8,"materials/skybox/%s%s.vmt",local_f78,(&PTR_DAT_18033bf38)[uVar16]);
      memset(local_498,0,0x400);
      MultiByteToWideChar(0xfde9,0,local_cd8,-1,local_498,0x1ff);
      local_1130 = 0;
      uStack_1128 = 0;
      local_1120 = 0;
      uStack_1118 = 0;
      sVar8 = wcslen(local_498);
      FUN_180211510(&local_1130,local_498,sVar8);
      local_1070 = (undefined4)local_1130;
      uStack_106c = local_1130._4_4_;
      uStack_1068 = (undefined4)uStack_1128;
      uStack_1064 = uStack_1128._4_4_;
      local_1060 = local_1120;
      uStack_1058 = uStack_1118;
      local_1120 = uVar7;
      uStack_1118 = uVar1;
      local_1130 = local_1130 & 0xffffffffffff0000;
      FUN_180066720(local_fe0,local_fa0,&local_1070);
      FUN_18021e290(&local_1070);
      FUN_18021e290(&local_1130);
      uVar12 = uVar15;
      if (!bVar19) {
        uVar12 = uVar16;
      }
      local_db8[0] = 0;
      if ((&DAT_1804011d0 + uVar12 * 0xa0 != (char *)0x0) &&
         ((&DAT_1804011d0)[uVar12 * 0xa0] != '\0')) {
        FUN_180205050(local_db8,"\t\"$basetexturetransform\" \"%s\"\n");
      }
      if (DAT_180400c04 < 2) {
        iVar5 = FUN_1802050b0(local_c18,
                              "\"sky\"\n{\n\t\"$basetexture\" \"%s\"\n%s\t\"$nofog\" \"1\"\n\t\"$ignorez\" \"1\"\n}\n"
                              ,local_f38 + uVar16 * 0x40,local_db8);
      }
      else {
        iVar5 = FUN_1802050b0(local_c18,
                              "\"sky\"\n{\n\t\"$basetexture\" \"%s\"\n%s\t\"$nofog\" \"1\"\n\t\"$ignorez\" \"1\"\n\t\"Proxies\"\n\t{\n\t\t\"AnimatedTexture\"\n\t\t{\n\t\t\t\"animatedTextureVar\" \"$basetexture\"\n\t\t\t\"animatedTextureFrameNumVar\" \"$frame\"\n\t\t\t\"animatedTextureFrameRate\" \"%.2f\"\n\t\t}\n\t}\n}\n"
                              ,local_f38 + uVar16 * 0x40,local_db8);
      }
      if ((iVar5 < 1) || (cVar2 = FUN_18012b500(local_fe0,local_c18,(longlong)iVar5), cVar2 == '\0')
         ) {
        FUN_18012ab30("Failed to write the VMT into materials/skybox.");
        if (0 < DAT_180400ea8) {
          do {
            iVar5 = (int)uVar15;
            puVar11 = &DAT_1803e9ff0 + (longlong)iVar5 * 4;
            if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar5 * 4]) {
              puVar11 = (undefined8 *)*puVar11;
            }
            FUN_1802d7d9c(puVar11);
            uVar15 = (ulonglong)(iVar5 + 1U);
          } while ((int)(iVar5 + 1U) < DAT_180400ea8);
        }
        DAT_180400ea8 = 0;
        FUN_18021e290(local_fe0);
        goto LAB_18012f243;
      }
      lVar14 = (longlong)DAT_180400ea8;
      DAT_180400ea8 = DAT_180400ea8 + 1;
      if ((undefined8 *******)(&DAT_1803e9ff0 + lVar14 * 4) != local_fe0) {
        pppppppuVar13 = local_fe0;
        if (7 < local_fc8) {
          pppppppuVar13 = (undefined8 *******)local_fe0[0];
        }
        FUN_18021a7b0(&DAT_1803e9ff0 + lVar14 * 4,pppppppuVar13,local_fd0);
      }
      FUN_18021e290(local_fe0);
      uVar3 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar3;
    } while ((int)uVar3 < 6);
    strncpy_s(&DAT_180400b80,0x50,local_f78,0xffffffffffffffff);
    FUN_18012ab00(local_f78);
    FUN_18012f810(local_f78);
    plVar6 = &DAT_180400bd0;
    uVar12 = uVar15;
    do {
      uVar3 = (uint)uVar12 + 1;
      if (*plVar6 == 0) {
        uVar3 = (uint)uVar12;
      }
      uVar12 = (ulonglong)uVar3;
      plVar6 = plVar6 + 1;
    } while (plVar6 != (longlong *)&DAT_180400c00);
    if (((int)uVar3 < 4) || (FUN_18012aa50(), DAT_180400ea0 == 0)) {
      DAT_180401111 = 0;
      if (0 < DAT_180400ea8) {
        do {
          iVar5 = (int)uVar15;
          puVar11 = &DAT_1803e9ff0 + (longlong)iVar5 * 4;
          if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar5 * 4]) {
            puVar11 = (undefined8 *)*puVar11;
          }
          FUN_1802d7d9c(puVar11);
          uVar15 = (ulonglong)(iVar5 + 1U);
        } while ((int)(iVar5 + 1U) < DAT_180400ea8);
      }
      DAT_180400ea8 = 0;
      DAT_180400b80 = 0;
      DAT_180400e60 = 0;
      FUN_18012ab30("Engine import didn\'t load (%d/6). Switch Loader to Override.",uVar12);
      FUN_180014410("[SKY] WriteEngineImport: \'%s\' FAILED verify %d/6\n",local_f78,uVar3);
    }
    else {
      DAT_180401111 = 1;
      if (1 < DAT_180400c04) {
        pcVar18 = ", animated";
      }
      FUN_18012ab30("Custom sky ready (engine): %s (%d/6)%s.",local_f78,uVar3,pcVar18);
      FUN_180014410("[SKY] WriteEngineImport: \'%s\' verified %d/6 files=%d\n",local_f78,uVar3,
                    DAT_180400ea8);
    }
  }
LAB_18012f243:
  FUN_18021e290(local_fa0);
  return;
}


)B18012e770",
    "874d25ca0e19d792e2a38a852989704d3d79a729db3b1c950a43fe36140cbbcd",
    R"F18012e770C(FUN_180014410
FUN_180066720
FUN_180067d80
FUN_18012aa50
FUN_18012ab00
FUN_18012ab30
FUN_18012ae90
FUN_18012b500
FUN_18012f810
FUN_180202dc0
FUN_180204f10
FUN_180204ff0
FUN_180205050
FUN_1802050b0
FUN_180211510
FUN_180211740
FUN_18021a7b0
FUN_18021dbf0
FUN_18021e290
FUN_180241a30
FUN_1802d7d9c)F18012e770C",
    R"F18012e770D(LAB_18012f243
DAT_18033e5ea
DAT_1803da4c0
DAT_1803e9ff0
DAT_1803ea008
DAT_1803ea170
DAT_1803ea178
DAT_1803fadf0
DAT_180400b70
DAT_180400b74
DAT_180400b80
DAT_180400bd0
DAT_180400c00
DAT_180400c04
DAT_180400e51
DAT_180400e60
DAT_180400ea0
DAT_180400ea8
DAT_180401111
DAT_1804011d0
DAT_18042f174
DAT_1805bdb10
DAT_1805bdb14)F18012e770D",
    R"F18012e770T(""
".vtf"
"skybox"
"sk%08x%s"
"sky_%08x"
"materials"
", animated"
"materials/skybox/%s%s.vmt"
"\\t\\\"$basetexturetransform\\\" \\\"%s\\\"\\n"
"Couldn\\'t locate the garrysmod folder."
"Custom sky ready (engine): %s (%d/6)%s."
"Failed to write into garrysmod/materials."
"Failed to write the VMT into materials/skybox."
"[SKY] WriteEngineImport: \\'%s\\' FAILED verify %d/6\\n"
"[SKY] WriteEngineImport: \\'%s\\' verified %d/6 files=%d\\n"
"Engine import didn\\'t load (%d/6). Switch Loader to Override."
"\\\"sky\\\"\\n{\\n\\t\\\"$basetexture\\\" \\\"%s\\\"\\n%s\\t\\\"$nofog\\\" \\\"1\\\"\\n\\t\\\"$ignorez\\\" \\\"1\\\"\\n}\\n"
"\\\"sky\\\"\\n{\\n\\t\\\"$basetexture\\\" \\\"%s\\\"\\n%s\\t\\\"$nofog\\\" \\\"1\\\"\\n\\t\\\"$ignorez\\\" \\\"1\\\"\\n\\t\\\"Proxies\\\"\\n\\t{\\n\\t\\t\\\"AnimatedTexture\\\"\\n\\t\\t{\\n\\t\\t\\t\\\"animatedTextureVar\\\" \\\"$basetexture\\\"\\n\\t\\t\\t\\\"animatedTextureFrameNumVar\\\" \\\"$frame\\\"\\n\\t\\t\\t\\\"animatedTextureFrameRate\\\" \\\"%.2f\\\"\\n\\t\\t}\\n\\t}\\n}\\n")F18012e770T",
    R"F18012e770F(106: if (DAT_180400b70 == '\0') {
107: return;
110: if (local_f90 == 0) {
113: else {
123: if (0 < DAT_180400ea8) {
124: do {
128: if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar5 * 4]) {
138: if ((DAT_18042f174 & 1) == 0) {
144: do {
173: if (bVar19) {
181: else {
193: do {
236: if (cVar2 == '\0') {
238: if (0 < DAT_180400ea8) {
239: do {
242: if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar5 * 4]) {
251: goto LAB_18012f243;
255: if ((undefined8 *******)(&DAT_1803e9ff0 + lVar14 * 4) != local_fc0) {
257: if (7 < local_fa8) {
266: if (!bVar19) {
271: do {
294: if (!bVar19) {
298: if ((&DAT_1804011d0 + uVar12 * 0xa0 != (char *)0x0) &&
302: if (DAT_180400c04 < 2) {
307: else {
312: if ((iVar5 < 1) || (cVar2 = FUN_18012b500(local_fe0,local_c18,(longlong)iVar5), cVar2 == '\0')
315: if (0 < DAT_180400ea8) {
316: do {
319: if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar5 * 4]) {
328: goto LAB_18012f243;
332: if ((undefined8 *******)(&DAT_1803e9ff0 + lVar14 * 4) != local_fe0) {
334: if (7 < local_fc8) {
348: do {
350: if (*plVar6 == 0) {
356: if (((int)uVar3 < 4) || (FUN_18012aa50(), DAT_180400ea0 == 0)) {
358: if (0 < DAT_180400ea8) {
359: do {
362: if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar5 * 4]) {
375: else {
377: if (1 < DAT_180400c04) {
385: LAB_18012f243:
387: return;)F18012e770F",
    R"F18012e770U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18012f243.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9ff0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea008.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea170.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea178.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_180400b70.
TODO: recover the declaration, type and value for global/data reference DAT_180400b74.
TODO: recover the declaration, type and value for global/data reference DAT_180400b80.
TODO: recover the declaration, type and value for global/data reference DAT_180400bd0.
TODO: recover the declaration, type and value for global/data reference DAT_180400c00.
TODO: recover the declaration, type and value for global/data reference DAT_180400c04.
TODO: recover the declaration, type and value for global/data reference DAT_180400e51.
TODO: recover the declaration, type and value for global/data reference DAT_180400e60.
TODO: recover the declaration, type and value for global/data reference DAT_180400ea0.
TODO: recover the declaration, type and value for global/data reference DAT_180400ea8.
TODO: recover the declaration, type and value for global/data reference DAT_180401111.
TODO: recover the declaration, type and value for global/data reference DAT_1804011d0.
TODO: recover the declaration, type and value for global/data reference DAT_18042f174.
TODO: recover the declaration, type and value for global/data reference DAT_1805bdb10.
TODO: recover the declaration, type and value for global/data reference DAT_1805bdb14.)F18012e770U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012e770() noexcept {
    return kFunction_0x18012e770;
}

// 0x18012f290 FUN_18012f290
// source: re/dump/decompile/0x18012f290_FUN_18012f290.c
// size: 111 bytes; thunk: false
// body sha256: 6adadcd8becfa0b356c0825cf1901b4c2f52d46669e430c9f51baeb28300966e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012f290{
    "0x18012f290",
    "FUN_18012f290",
    R"F18012f290S(undefined FUN_18012f290())F18012f290S",
    R"B18012f290(// 0x18012f290  FUN_18012f290
// size=111 thunk=false
// signature: undefined FUN_18012f290()
// status: ok


void FUN_18012f290(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_180400ea8) {
    do {
      puVar1 = &DAT_1803e9ff0 + (longlong)iVar2 * 4;
      if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar2 * 4]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      FUN_1802d7d9c(puVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_180400ea8);
  }
  DAT_180400ea8 = 0;
  DAT_180400b80 = 0;
  DAT_180401111 = 0;
  DAT_180400e51 = 0;
  return;
}


)B18012f290",
    "6adadcd8becfa0b356c0825cf1901b4c2f52d46669e430c9f51baeb28300966e",
    R"F18012f290C(FUN_1802d7d9c)F18012f290C",
    R"F18012f290D(DAT_1803e9ff0
DAT_1803ea008
DAT_180400b80
DAT_180400e51
DAT_180400ea8
DAT_180401111)F18012f290D",
    R"F18012f290T()F18012f290T",
    R"F18012f290F(14: if (0 < DAT_180400ea8) {
15: do {
17: if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar2 * 4]) {
28: return;)F18012f290F",
    R"F18012f290U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9ff0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea008.
TODO: recover the declaration, type and value for global/data reference DAT_180400b80.
TODO: recover the declaration, type and value for global/data reference DAT_180400e51.
TODO: recover the declaration, type and value for global/data reference DAT_180400ea8.
TODO: recover the declaration, type and value for global/data reference DAT_180401111.)F18012f290U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012f290() noexcept {
    return kFunction_0x18012f290;
}

// 0x18012f300 FUN_18012f300
// source: re/dump/decompile/0x18012f300_FUN_18012f300.c
// size: 1285 bytes; thunk: false
// body sha256: 8a667646ef17174263f30d8e356869944a4746ce28823e060cce394d08c3c71e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012f300{
    "0x18012f300",
    "FUN_18012f300",
    R"F18012f300S(undefined FUN_18012f300())F18012f300S",
    R"B18012f300(// 0x18012f300  FUN_18012f300
// size=1285 thunk=false
// signature: undefined FUN_18012f300()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_18012f300(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int *piVar8;
  char *pcVar9;
  float *pfVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 auStack_b8 [32];
  uint local_98;
  uint local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if ((DAT_1803fa668 == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  cVar3 = DAT_180401148;
  LOCK();
  DAT_180401148 = 0;
  UNLOCK();
  if (cVar3 != '\0') {
    FUN_18012da80(1);
    FUN_18012f290();
    uVar6 = FUN_18012ae90(local_78);
    FUN_18012bc40(uVar6);
    FUN_18021e290(local_78);
  }
  cVar3 = DAT_180400eb0;
  LOCK();
  DAT_180400eb0 = 0;
  UNLOCK();
  if (cVar3 != '\0') {
    if (!bVar2) {
      LOCK();
      UNLOCK();
      DAT_180400eb0 = 1;
      return (float *)0x0;
    }
    FUN_18012dc30();
  }
  local_58 = 0x93fd561a96ab0c67;
  local_50 = 0x8911f3778b8c2d42;
  plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_88,&local_58);
  plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_78,&local_50);
  piVar8 = (int *)FUN_1802029c0(*plVar7 + 0x28);
  iVar5 = *piVar8;
  if ((bVar2) && (DAT_1803fa46f == '\0')) {
    local_50 = 0x93fd561a96ab0c67;
    local_58 = 0x3cfd94a417011121;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_50);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_88,&local_58);
    pcVar9 = (char *)FUN_1801fcfc0(*plVar7 + 0x28);
    if (*pcVar9 == '\0') goto LAB_18012f44e;
    bVar1 = true;
  }
  else {
LAB_18012f44e:
    bVar1 = false;
  }
  if (iVar5 == 0) {
    if (DAT_180400eb8 != 0) {
      FUN_18012c6f0(1);
    }
    local_50 = 0x93fd561a96ab0c67;
    local_58 = 0x4ebcf38ca2af7c6e;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_50);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_88,&local_58);
    pfVar10 = (float *)FUN_1802029c0(*plVar7 + 0x28);
    if ((bVar1) && (*pfVar10 == 0.0)) {
      local_50 = 0x93fd561a96ab0c67;
      local_58 = 0x4f0efc17f02b64be;
      plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_50);
      plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_88,&local_58);
      pfVar10 = (float *)FUN_1801fcfc0(*plVar7 + 0x28);
      if ((*(char *)pfVar10 != '\0') && (DAT_180400b70 != 0)) {
        if (DAT_180400e51 != '\0') {
          return pfVar10;
        }
        pfVar10 = (float *)FUN_18012e770();
        return pfVar10;
      }
    }
    if ((DAT_180400b80 == '\0') && (DAT_180400e51 == '\0')) {
      return pfVar10;
    }
    pfVar10 = (float *)FUN_18012f290();
    return pfVar10;
  }
  if (DAT_180400b80 != '\0') {
    FUN_18012f290();
  }
  local_50 = 0x93fd561a96ab0c67;
  local_58 = 0x4ebcf38ca2af7c6e;
  plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_50);
  plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_88,&local_58);
  piVar8 = (int *)FUN_1802029c0(*plVar7 + 0x28);
  if (*piVar8 - 1U < 0xd) {
    pcVar9 = (&PTR_s_Custom___imported_18033bf70)[*piVar8];
  }
  else {
    pcVar9 = &DAT_1804010c0;
    if (DAT_1804010c0 == '\0') {
      pcVar9 = (char *)0x0;
    }
  }
  if (bVar1) {
    if (pcVar9 == (char *)0x0) {
      local_50 = 0x93fd561a96ab0c67;
      local_58 = 0x4f0efc17f02b64be;
      plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_50);
      plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_88,&local_58);
      pcVar11 = (char *)FUN_1801fcfc0(*plVar7 + 0x28);
      if ((*pcVar11 == '\0') || (DAT_180400b70 == 0)) goto LAB_18012f626;
    }
    cVar3 = '\x01';
  }
  else {
LAB_18012f626:
    cVar3 = '\0';
  }
  if (bVar2) {
    pcVar11 = (char *)FUN_18012a9f0();
  }
  else {
    pcVar11 = (char *)0x0;
  }
  pcVar12 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar12 = pcVar9;
  }
  uVar4 = strcmp(&DAT_180400b20,pcVar12);
  pfVar10 = (float *)(ulonglong)uVar4;
  if ((cVar3 != DAT_180425f88) ||
     ((cVar3 != '\0' && ((pcVar11 != (char *)0x0) != (bool)DAT_1803fcfa8)))) {
    local_90 = (uint)DAT_180400b70;
    local_98 = (uint)DAT_180400eb8;
    pcVar12 = "<vtf>";
    if (pcVar9 != (char *)0x0) {
      pcVar12 = pcVar9;
    }
    pcVar13 = "<null>";
    if (pcVar11 != (char *)0x0) {
      pcVar13 = pcVar11;
    }
    pfVar10 = (float *)FUN_180014410("[SKY] Update: want=%d sky=\'%s\' src=\'%s\' applied=%d texLoaded=%d\n"
                                     ,cVar3,pcVar13,pcVar12);
    DAT_1803fcfa8 = pcVar11 != (char *)0x0;
    DAT_180425f88 = cVar3;
  }
  if (DAT_180400eb8 != 0) {
    if ((((cVar3 != '\0') && (pcVar11 != (char *)0x0)) &&
        (iVar5 = strcmp(pcVar11,&DAT_180401180), iVar5 == 0)) && (uVar4 == 0)) {
      pfVar10 = (float *)0x0;
      if (((DAT_180401110 != '\0') && (pcVar9 == (char *)0x0)) && (1 < DAT_180400c04)) {
        local_50 = 0x93fd561a96ab0c67;
        local_58 = 0xaeca5b24c521e60;
        plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_50);
        plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_88,&local_58);
        pfVar10 = (float *)FUN_180202dc0(*plVar7 + 0x28);
        if (DAT_1803809c4 < (float)((uint)(*pfVar10 - DAT_180400c00) & _DAT_1803817c0)) {
          FUN_180014410("[SKY] re-apply (fps %.1f -> %.1f)\n",(double)DAT_180400c00,(double)*pfVar10
                       );
          FUN_18012c6f0(0);
          pfVar10 = (float *)FUN_18012c830(pcVar11,0);
        }
      }
      goto LAB_18012f7d5;
    }
    pfVar10 = (float *)FUN_18012c6f0(1);
  }
  if (cVar3 == '\0') {
    return pfVar10;
  }
  if (pcVar11 == (char *)0x0) {
    return pfVar10;
  }
LAB_18012f7d5:
  if (DAT_180400eb8 == 0) {
    pfVar10 = (float *)FUN_18012c830(pcVar11,pcVar9);
  }
  return pfVar10;
}


)B18012f300",
    "8a667646ef17174263f30d8e356869944a4746ce28823e060cce394d08c3c71e",
    R"F18012f300C(FUN_180014410
FUN_18012a9f0
FUN_18012ae90
FUN_18012bc40
FUN_18012c6f0
FUN_18012c830
FUN_18012da80
FUN_18012dc30
FUN_18012e770
FUN_18012f290
FUN_1801fcfc0
FUN_1802029c0
FUN_180202dc0
FUN_18021e290
FUN_180241a30)F18012f300C",
    R"F18012f300D(LAB_18012f44e
LAB_18012f626
LAB_18012f7d5
DAT_1803809c4
DAT_1803da4c0
DAT_1803fa46f
DAT_1803fa668
DAT_1803fadf0
DAT_1803fcfa8
DAT_180400b20
DAT_180400b70
DAT_180400b80
DAT_180400c00
DAT_180400c04
DAT_180400e51
DAT_180400eb0
DAT_180400eb8
DAT_1804010c0
DAT_180401110
DAT_180401148
DAT_180401180
DAT_180425f88)F18012f300D",
    R"F18012f300T(""
"<vtf>"
"<null>"
"[SKY] re-apply (fps %.1f -> %.1f)\\n"
"[SKY] Update: want=%d sky=\\'%s\\' src=\\'%s\\' applied=%d texLoaded=%d\\n")F18012f300T",
    R"F18012f300F(36: if ((DAT_1803fa668 == (longlong *)0x0) ||
40: else {
47: if (cVar3 != '\0') {
58: if (cVar3 != '\0') {
59: if (!bVar2) {
63: return (float *)0x0;
73: if ((bVar2) && (DAT_1803fa46f == '\0')) {
79: if (*pcVar9 == '\0') goto LAB_18012f44e;
82: else {
83: LAB_18012f44e:
86: if (iVar5 == 0) {
87: if (DAT_180400eb8 != 0) {
95: if ((bVar1) && (*pfVar10 == 0.0)) {
101: if ((*(char *)pfVar10 != '\0') && (DAT_180400b70 != 0)) {
102: if (DAT_180400e51 != '\0') {
103: return pfVar10;
106: return pfVar10;
109: if ((DAT_180400b80 == '\0') && (DAT_180400e51 == '\0')) {
110: return pfVar10;
113: return pfVar10;
115: if (DAT_180400b80 != '\0') {
123: if (*piVar8 - 1U < 0xd) {
126: else {
128: if (DAT_1804010c0 == '\0') {
132: if (bVar1) {
133: if (pcVar9 == (char *)0x0) {
139: if ((*pcVar11 == '\0') || (DAT_180400b70 == 0)) goto LAB_18012f626;
143: else {
144: LAB_18012f626:
147: if (bVar2) {
150: else {
154: if (pcVar9 != (char *)0x0) {
159: if ((cVar3 != DAT_180425f88) ||
164: if (pcVar9 != (char *)0x0) {
168: if (pcVar11 != (char *)0x0) {
176: if (DAT_180400eb8 != 0) {
177: if ((((cVar3 != '\0') && (pcVar11 != (char *)0x0)) &&
180: if (((DAT_180401110 != '\0') && (pcVar9 == (char *)0x0)) && (1 < DAT_180400c04)) {
186: if (DAT_1803809c4 < (float)((uint)(*pfVar10 - DAT_180400c00) & _DAT_1803817c0)) {
193: goto LAB_18012f7d5;
197: if (cVar3 == '\0') {
198: return pfVar10;
200: if (pcVar11 == (char *)0x0) {
201: return pfVar10;
203: LAB_18012f7d5:
204: if (DAT_180400eb8 == 0) {
207: return pfVar10;)F18012f300F",
    R"F18012f300U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18012f44e.
TODO: recover the declaration, type and value for global/data reference LAB_18012f626.
TODO: recover the declaration, type and value for global/data reference LAB_18012f7d5.
TODO: recover the declaration, type and value for global/data reference DAT_1803809c4.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa46f.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcfa8.
TODO: recover the declaration, type and value for global/data reference DAT_180400b20.
TODO: recover the declaration, type and value for global/data reference DAT_180400b70.
TODO: recover the declaration, type and value for global/data reference DAT_180400b80.
TODO: recover the declaration, type and value for global/data reference DAT_180400c00.
TODO: recover the declaration, type and value for global/data reference DAT_180400c04.
TODO: recover the declaration, type and value for global/data reference DAT_180400e51.
TODO: recover the declaration, type and value for global/data reference DAT_180400eb0.
TODO: recover the declaration, type and value for global/data reference DAT_180400eb8.
TODO: recover the declaration, type and value for global/data reference DAT_1804010c0.
TODO: recover the declaration, type and value for global/data reference DAT_180401110.
TODO: recover the declaration, type and value for global/data reference DAT_180401148.
TODO: recover the declaration, type and value for global/data reference DAT_180401180.
TODO: recover the declaration, type and value for global/data reference DAT_180425f88.
TODO: resolve the indirect call in body 37: (cVar3 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar3 == '\0')) {.)F18012f300U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012f300() noexcept {
    return kFunction_0x18012f300;
}

// 0x18012f810 FUN_18012f810
// source: re/dump/decompile/0x18012f810_FUN_18012f810.c
// size: 1113 bytes; thunk: false
// body sha256: d8fade55c6528388d3c5be4a1aea7ff31297a06d8ba3f061c9ec1460f407d777
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012f810{
    "0x18012f810",
    "FUN_18012f810",
    R"F18012f810S(undefined FUN_18012f810())F18012f810S",
    R"B18012f810(// 0x18012f810  FUN_18012f810
// size=1113 thunk=false
// signature: undefined FUN_18012f810()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18012f810(char *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  if ((((param_1 == (char *)0x0) || (DAT_180400e60 == '\0')) ||
      (iVar2 = strcmp(param_1,&DAT_180400e60), iVar2 != 0)) || (DAT_180400bd0 == (longlong *)0x0)) {
    DAT_180400e60 = '\0';
    DAT_180400bd0 = (longlong *)0x0;
    DAT_180400bd8 = (longlong *)0x0;
    _DAT_180400be0 = (longlong *)0x0;
    _DAT_180400be8 = (longlong *)0x0;
    _DAT_180400bf0 = (longlong *)0x0;
    _DAT_180400bf8 = (longlong *)0x0;
    if ((param_1 != (char *)0x0) && (DAT_1803fa640 != (longlong *)0x0)) {
      local_a0 = PTR_DAT_18033bf38;
      uVar5 = 0;
      local_a8 = param_1;
      FUN_180012b20(local_98,0x80,0xffffffffffffffff,"skybox/%s%s");
      local_a8 = (char *)0x0;
      plVar3 = (longlong *)
               (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);
      if (plVar3 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar3 + 0x150))(plVar3);
        if (cVar1 == '\0') {
          DAT_180400bd0 = plVar3;
        }
        uVar5 = (uint)(cVar1 == '\0');
      }
      local_a0 = PTR_DAT_18033bf40;
      local_a8 = param_1;
      FUN_180012b20(local_98,0x80,0xffffffffffffffff,"skybox/%s%s");
      local_a8 = (char *)0x0;
      plVar4 = (longlong *)
               (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);
      uVar6 = uVar5;
      plVar3 = DAT_180400bd8;
      if (plVar4 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar4 + 0x150))(plVar4);
        uVar6 = uVar5 + 1;
        plVar3 = plVar4;
        if (cVar1 != '\0') {
          uVar6 = uVar5;
          plVar3 = DAT_180400bd8;
        }
      }
      DAT_180400bd8 = plVar3;
      local_a0 = PTR_DAT_18033bf48;
      local_a8 = param_1;
      FUN_180012b20(local_98,0x80,0xffffffffffffffff,"skybox/%s%s");
      local_a8 = (char *)0x0;
      plVar4 = (longlong *)
               (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);
      uVar5 = uVar6;
      plVar3 = _DAT_180400be0;
      if (plVar4 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar4 + 0x150))(plVar4);
        uVar5 = uVar6 + 1;
        plVar3 = plVar4;
        if (cVar1 != '\0') {
          uVar5 = uVar6;
          plVar3 = _DAT_180400be0;
        }
      }
      _DAT_180400be0 = plVar3;
      local_a0 = PTR_DAT_18033bf50;
      local_a8 = param_1;
      FUN_180012b20(local_98,0x80,0xffffffffffffffff,"skybox/%s%s");
      local_a8 = (char *)0x0;
      plVar4 = (longlong *)
               (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);
      uVar6 = uVar5;
      plVar3 = _DAT_180400be8;
      if (plVar4 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar4 + 0x150))(plVar4);
        uVar6 = uVar5 + 1;
        plVar3 = plVar4;
        if (cVar1 != '\0') {
          uVar6 = uVar5;
          plVar3 = _DAT_180400be8;
        }
      }
      _DAT_180400be8 = plVar3;
      local_a0 = PTR_DAT_18033bf58;
      local_a8 = param_1;
      FUN_180012b20(local_98,0x80,0xffffffffffffffff,"skybox/%s%s");
      local_a8 = (char *)0x0;
      plVar4 = (longlong *)
               (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);
      uVar5 = uVar6;
      plVar3 = _DAT_180400bf0;
      if (plVar4 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar4 + 0x150))(plVar4);
        uVar5 = uVar6 + 1;
        plVar3 = plVar4;
        if (cVar1 != '\0') {
          uVar5 = uVar6;
          plVar3 = _DAT_180400bf0;
        }
      }
      _DAT_180400bf0 = plVar3;
      local_a0 = PTR_DAT_18033bf60;
      local_a8 = param_1;
      FUN_180012b20(local_98,0x80,0xffffffffffffffff,"skybox/%s%s");
      local_a8 = (char *)0x0;
      plVar4 = (longlong *)
               (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);
      uVar6 = uVar5;
      plVar3 = _DAT_180400bf8;
      if (plVar4 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar4 + 0x150))(plVar4);
        uVar6 = uVar5 + 1;
        plVar3 = plVar4;
        if (cVar1 != '\0') {
          uVar6 = uVar5;
          plVar3 = _DAT_180400bf8;
        }
      }
      _DAT_180400bf8 = plVar3;
      if (((DAT_1803da558 != uVar6) || (iVar2 = strcmp(&DAT_1803ff710,param_1), iVar2 != 0)) &&
         ((DAT_1803da55c != uVar6 || (iVar2 = strcmp(&DAT_1803ff750,param_1), iVar2 != 0)))) {
        FUN_180014410("[SKY] ResolveFaces: sky=\'%s\' -> %d/6 faces\n",param_1,uVar6);
        strncpy_s(&DAT_1803ff710 + (longlong)(int)DAT_1803fece0 * 0x40,0x40,param_1,
                  0xffffffffffffffff);
        (&DAT_1803da558)[(int)DAT_1803fece0] = uVar6;
        DAT_1803fece0 = DAT_1803fece0 ^ 1;
      }
      if (uVar6 != 0) {
        strncpy_s(&DAT_180400e60,0x40,param_1,0xffffffffffffffff);
      }
    }
  }
  return;
}


)B18012f810",
    "d8fade55c6528388d3c5be4a1aea7ff31297a06d8ba3f061c9ec1460f407d777",
    R"F18012f810C(FUN_180012b20
FUN_180014410)F18012f810C",
    R"F18012f810D(DAT_1803da4c0
DAT_1803da558
DAT_1803da55c
DAT_1803fa640
DAT_1803fece0
DAT_1803ff710
DAT_1803ff750
DAT_180400bd0
DAT_180400bd8
DAT_180400e60)F18012f810D",
    R"F18012f810T("skybox/%s%s"
"SkyBox textures"
"[SKY] ResolveFaces: sky=\\'%s\\' -> %d/6 faces\\n")F18012f810T",
    R"F18012f810F(26: if ((((param_1 == (char *)0x0) || (DAT_180400e60 == '\0')) ||
35: if ((param_1 != (char *)0x0) && (DAT_1803fa640 != (longlong *)0x0)) {
43: if (plVar3 != (longlong *)0x0) {
45: if (cVar1 == '\0') {
58: if (plVar4 != (longlong *)0x0) {
62: if (cVar1 != '\0') {
76: if (plVar4 != (longlong *)0x0) {
80: if (cVar1 != '\0') {
94: if (plVar4 != (longlong *)0x0) {
98: if (cVar1 != '\0') {
112: if (plVar4 != (longlong *)0x0) {
116: if (cVar1 != '\0') {
130: if (plVar4 != (longlong *)0x0) {
134: if (cVar1 != '\0') {
140: if (((DAT_1803da558 != uVar6) || (iVar2 = strcmp(&DAT_1803ff710,param_1), iVar2 != 0)) &&
148: if (uVar6 != 0) {
153: return;)F18012f810F",
    R"F18012f810U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da558.
TODO: recover the declaration, type and value for global/data reference DAT_1803da55c.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa640.
TODO: recover the declaration, type and value for global/data reference DAT_1803fece0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff710.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff750.
TODO: recover the declaration, type and value for global/data reference DAT_180400bd0.
TODO: recover the declaration, type and value for global/data reference DAT_180400bd8.
TODO: recover the declaration, type and value for global/data reference DAT_180400e60.
TODO: resolve the indirect call in body 42: (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);.
TODO: resolve the indirect call in body 44: cVar1 = (**(code **)(*plVar3 + 0x150))(plVar3);.
TODO: resolve the indirect call in body 55: (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);.
TODO: resolve the indirect call in body 59: cVar1 = (**(code **)(*plVar4 + 0x150))(plVar4);.
TODO: resolve the indirect call in body 73: (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);.
TODO: resolve the indirect call in body 77: cVar1 = (**(code **)(*plVar4 + 0x150))(plVar4);.
TODO: resolve the indirect call in body 91: (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);.
TODO: resolve the indirect call in body 95: cVar1 = (**(code **)(*plVar4 + 0x150))(plVar4);.
TODO: resolve the indirect call in body 109: (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);.
TODO: resolve the indirect call in body 113: cVar1 = (**(code **)(*plVar4 + 0x150))(plVar4);.
TODO: resolve the indirect call in body 127: (**(code **)(*DAT_1803fa640 + 600))(DAT_1803fa640,local_98,"SkyBox textures",0);.
TODO: resolve the indirect call in body 131: cVar1 = (**(code **)(*plVar4 + 0x150))(plVar4);.)F18012f810U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012f810() noexcept {
    return kFunction_0x18012f810;
}

// 0x18012fc70 FUN_18012fc70
// source: re/dump/decompile/0x18012fc70_FUN_18012fc70.c
// size: 122 bytes; thunk: false
// body sha256: f1e22e74d2e64a4727c12b30340b7c13947eb444430699af44b1f022c7e2380d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012fc70{
    "0x18012fc70",
    "FUN_18012fc70",
    R"F18012fc70S(undefined FUN_18012fc70())F18012fc70S",
    R"B18012fc70(// 0x18012fc70  FUN_18012fc70
// size=122 thunk=false
// signature: undefined FUN_18012fc70()
// status: ok


void FUN_18012fc70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  for (plVar2 = &DAT_180400bd0; plVar2 != (longlong *)&DAT_180400c00; plVar2 = plVar2 + 1) {
    plVar1 = (longlong *)*plVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1,param_1,param_2,param_3,plVar2);
    }
  }
  return;
}


)B18012fc70",
    "f1e22e74d2e64a4727c12b30340b7c13947eb444430699af44b1f022c7e2380d",
    R"F18012fc70C()F18012fc70C",
    R"F18012fc70D(DAT_180400bd0
DAT_180400c00)F18012fc70D",
    R"F18012fc70T()F18012fc70T",
    R"F18012fc70F(13: for (plVar2 = &DAT_180400bd0; plVar2 != (longlong *)&DAT_180400c00; plVar2 = plVar2 + 1) {
15: if (plVar1 != (longlong *)0x0) {
19: return;)F18012fc70F",
    R"F18012fc70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180400bd0.
TODO: recover the declaration, type and value for global/data reference DAT_180400c00.
TODO: resolve the indirect call in body 16: (**(code **)(*plVar1 + 0xe0))(plVar1,param_1,param_2,param_3,plVar2);.)F18012fc70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012fc70() noexcept {
    return kFunction_0x18012fc70;
}

// 0x18012fcf0 FUN_18012fcf0
// source: re/dump/decompile/0x18012fcf0_FUN_18012fcf0.c
// size: 1085 bytes; thunk: false
// body sha256: 11f856b6119dde800a3d0ac80c6953b4f6a34b11a51745978f75762abcc6521e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18012fcf0{
    "0x18012fcf0",
    "FUN_18012fcf0",
    R"F18012fcf0S(undefined FUN_18012fcf0())F18012fcf0S",
    R"B18012fcf0(// 0x18012fcf0  FUN_18012fcf0
// size=1085 thunk=false
// signature: undefined FUN_18012fcf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18012fcf0(char param_1)

{
  float fVar1;
  char cVar2;
  longlong *plVar3;
  char *pcVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  ULONGLONG UVar8;
  float *pfVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  local_60 = 0x3cfd94a417011121;
  local_68 = 0x93fd561a96ab0c67;
  plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_88,&local_68);
  plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_78,&local_60);
  pcVar4 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
  if (((*pcVar4 != '\0') && (DAT_1803fa668 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar2 != '\0')) {
    local_60 = 0x93fd561a96ab0c67;
    local_68 = 0x8911f3778b8c2d42;
    plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
    plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_88,&local_68);
    piVar5 = (int *)FUN_1802029c0(*plVar3 + 0x28);
    if (*piVar5 == 0) {
      puVar6 = (undefined1 *)FUN_18012a9f0();
      local_60 = 0x93fd561a96ab0c67;
      local_68 = 0x4ebcf38ca2af7c6e;
      plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
      plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_88,&local_68);
      piVar5 = (int *)FUN_1802029c0(*plVar3 + 0x28);
      if (*piVar5 - 1U < 0xd) {
        puVar10 = (&PTR_s_Custom___imported_18033bf70)[*piVar5];
      }
      else if ((DAT_180400b80 == '\0') || (DAT_180401111 == '\0')) {
        puVar10 = &DAT_1804010c0;
        if (DAT_1804010c0 == '\0') {
          puVar10 = (undefined1 *)0x0;
        }
      }
      else {
        puVar10 = &DAT_180400b80;
      }
      if ((param_1 != '\0') && (puVar10 != (undefined1 *)0x0)) {
        puVar6 = puVar10;
      }
      FUN_18012ab00(puVar6);
      FUN_18012f810(puVar6);
    }
    else {
      uVar7 = FUN_18012a9f0();
      FUN_18012f810(uVar7);
      if (DAT_180400eb8 != '\0') {
        uVar11 = 0;
        if (((param_1 != '\0') && (DAT_180400b20 == '\0')) && (1 < DAT_180400c04)) {
          local_60 = 0x93fd561a96ab0c67;
          local_68 = 0xaeca5b24c521e60;
          plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
          plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_88,&local_68);
          pfVar9 = (float *)FUN_180202dc0(*plVar3 + 0x28);
          fVar12 = *pfVar9;
          uVar11 = 0;
          if (0.0 < fVar12) {
            UVar8 = GetTickCount64();
            uVar11 = (longlong)(int)(((double)UVar8 * (double)fVar12) / DAT_180380ec0) %
                     (longlong)DAT_180400c04 & 0xffffffff;
          }
        }
        FUN_18012ad70(param_1,uVar11);
      }
    }
    fVar12 = DAT_180380bb0;
    fVar13 = DAT_180380bb0;
    fVar14 = DAT_180380bb0;
    if (param_1 != '\0') {
      local_60 = 0x93fd561a96ab0c67;
      local_68 = 0xb407de79ef79c9ba;
      plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
      plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_88,&local_68);
      pfVar9 = (float *)FUN_180202dc0(*plVar3 + 0x28);
      local_60 = 0x93fd561a96ab0c67;
      fVar14 = *pfVar9;
      local_68 = 0x6e630b2ce2bdb225;
      plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
      plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_88,&local_68);
      pfVar9 = (float *)FUN_180202dc0(*plVar3 + 0x28);
      local_60 = 0x93fd561a96ab0c67;
      fVar12 = *pfVar9;
      local_68 = 0x6e63162ce2bdc4d6;
      plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
      plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_88,&local_68);
      pfVar9 = (float *)FUN_180202dc0(*plVar3 + 0x28);
      local_60 = 0x93fd561a96ab0c67;
      fVar1 = *pfVar9;
      local_68 = 0x6e631b2ce2bdcd55;
      plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
      plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_88,&local_68);
      pfVar9 = (float *)FUN_180202dc0(*plVar3 + 0x28);
      fVar12 = fVar14 * fVar12;
      fVar13 = fVar14 * *pfVar9;
      fVar14 = fVar14 * fVar1;
    }
    FUN_18012fc70(fVar12,fVar14,fVar13);
  }
  return;
}


)B18012fcf0",
    "11f856b6119dde800a3d0ac80c6953b4f6a34b11a51745978f75762abcc6521e",
    R"F18012fcf0C(FUN_18012a9f0
FUN_18012ab00
FUN_18012ad70
FUN_18012f810
FUN_18012fc70
FUN_1801fcfc0
FUN_1802029c0
FUN_180202dc0
FUN_180241a30)F18012fcf0C",
    R"F18012fcf0D(DAT_180380bb0
DAT_180380ec0
DAT_1803da4c0
DAT_1803fa668
DAT_1803fadf0
DAT_180400b20
DAT_180400b80
DAT_180400c04
DAT_180400eb8
DAT_1804010c0
DAT_180401111)F18012fcf0D",
    R"F18012fcf0T()F18012fcf0T",
    R"F18012fcf0F(39: if (((*pcVar4 != '\0') && (DAT_1803fa668 != (longlong *)0x0)) &&
46: if (*piVar5 == 0) {
53: if (*piVar5 - 1U < 0xd) {
56: else if ((DAT_180400b80 == '\0') || (DAT_180401111 == '\0')) {
58: if (DAT_1804010c0 == '\0') {
62: else {
65: if ((param_1 != '\0') && (puVar10 != (undefined1 *)0x0)) {
71: else {
74: if (DAT_180400eb8 != '\0') {
76: if (((param_1 != '\0') && (DAT_180400b20 == '\0')) && (1 < DAT_180400c04)) {
84: if (0.0 < fVar12) {
96: if (param_1 != '\0') {
126: return;)F18012fcf0F",
    R"F18012fcf0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_180380ec0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_180400b20.
TODO: recover the declaration, type and value for global/data reference DAT_180400b80.
TODO: recover the declaration, type and value for global/data reference DAT_180400c04.
TODO: recover the declaration, type and value for global/data reference DAT_180400eb8.
TODO: recover the declaration, type and value for global/data reference DAT_1804010c0.
TODO: recover the declaration, type and value for global/data reference DAT_180401111.
TODO: resolve the indirect call in body 40: (cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar2 != '\0')) {.)F18012fcf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18012fcf0() noexcept {
    return kFunction_0x18012fcf0;
}

// 0x180130130 Features_SkyEditor_SkyEditorFeature_vfunc01
// source: re/dump/decompile/0x180130130_Features_SkyEditor_SkyEditorFeature_vfunc01.c
// size: 5 bytes; thunk: true
// body sha256: 99d1d2370098d22ef62438597fb8424f600b3465da0e30ff84c01ecb6c35ffbd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180130130{
    "0x180130130",
    "Features_SkyEditor_SkyEditorFeature_vfunc01",
    R"F180130130S(undefined Features_SkyEditor_SkyEditorFeature_vfunc01())F180130130S",
    R"B180130130(// 0x180130130  Features_SkyEditor_SkyEditorFeature_vfunc01
// size=5 thunk=true
// signature: undefined Features_SkyEditor_SkyEditorFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * Features_SkyEditor_SkyEditorFeature_vfunc01(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int *piVar8;
  char *pcVar9;
  float *pfVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 auStack_b8 [32];
  uint uStack_98;
  uint uStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if ((DAT_1803fa668 == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  cVar3 = DAT_180401148;
  LOCK();
  DAT_180401148 = 0;
  UNLOCK();
  if (cVar3 != '\0') {
    FUN_18012da80(1);
    FUN_18012f290();
    uVar6 = FUN_18012ae90(auStack_78);
    FUN_18012bc40(uVar6);
    FUN_18021e290(auStack_78);
  }
  cVar3 = DAT_180400eb0;
  LOCK();
  DAT_180400eb0 = 0;
  UNLOCK();
  if (cVar3 != '\0') {
    if (!bVar2) {
      LOCK();
      UNLOCK();
      DAT_180400eb0 = 1;
      return (float *)0x0;
    }
    FUN_18012dc30();
  }
  uStack_58 = 0x93fd561a96ab0c67;
  uStack_50 = 0x8911f3778b8c2d42;
  plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_88,&uStack_58);
  plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,auStack_78,&uStack_50);
  piVar8 = (int *)FUN_1802029c0(*plVar7 + 0x28);
  iVar5 = *piVar8;
  if ((bVar2) && (DAT_1803fa46f == '\0')) {
    uStack_50 = 0x93fd561a96ab0c67;
    uStack_58 = 0x3cfd94a417011121;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_78,&uStack_50);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,auStack_88,&uStack_58);
    pcVar9 = (char *)FUN_1801fcfc0(*plVar7 + 0x28);
    if (*pcVar9 == '\0') goto LAB_18012f44e;
    bVar1 = true;
  }
  else {
LAB_18012f44e:
    bVar1 = false;
  }
  if (iVar5 == 0) {
    if (DAT_180400eb8 != 0) {
      FUN_18012c6f0(1);
    }
    uStack_50 = 0x93fd561a96ab0c67;
    uStack_58 = 0x4ebcf38ca2af7c6e;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_78,&uStack_50);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,auStack_88,&uStack_58);
    pfVar10 = (float *)FUN_1802029c0(*plVar7 + 0x28);
    if ((bVar1) && (*pfVar10 == 0.0)) {
      uStack_50 = 0x93fd561a96ab0c67;
      uStack_58 = 0x4f0efc17f02b64be;
      plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_78,&uStack_50);
      plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,auStack_88,&uStack_58);
      pfVar10 = (float *)FUN_1801fcfc0(*plVar7 + 0x28);
      if ((*(char *)pfVar10 != '\0') && (DAT_180400b70 != 0)) {
        if (DAT_180400e51 != '\0') {
          return pfVar10;
        }
        pfVar10 = (float *)FUN_18012e770();
        return pfVar10;
      }
    }
    if ((DAT_180400b80 == '\0') && (DAT_180400e51 == '\0')) {
      return pfVar10;
    }
    pfVar10 = (float *)FUN_18012f290();
    return pfVar10;
  }
  if (DAT_180400b80 != '\0') {
    FUN_18012f290();
  }
  uStack_50 = 0x93fd561a96ab0c67;
  uStack_58 = 0x4ebcf38ca2af7c6e;
  plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_78,&uStack_50);
  plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,auStack_88,&uStack_58);
  piVar8 = (int *)FUN_1802029c0(*plVar7 + 0x28);
  if (*piVar8 - 1U < 0xd) {
    pcVar9 = (&PTR_s_Custom___imported_18033bf70)[*piVar8];
  }
  else {
    pcVar9 = &DAT_1804010c0;
    if (DAT_1804010c0 == '\0') {
      pcVar9 = (char *)0x0;
    }
  }
  if (bVar1) {
    if (pcVar9 == (char *)0x0) {
      uStack_50 = 0x93fd561a96ab0c67;
      uStack_58 = 0x4f0efc17f02b64be;
      plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_78,&uStack_50);
      plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,auStack_88,&uStack_58);
      pcVar11 = (char *)FUN_1801fcfc0(*plVar7 + 0x28);
      if ((*pcVar11 == '\0') || (DAT_180400b70 == 0)) goto LAB_18012f626;
    }
    cVar3 = '\x01';
  }
  else {
LAB_18012f626:
    cVar3 = '\0';
  }
  if (bVar2) {
    pcVar11 = (char *)FUN_18012a9f0();
  }
  else {
    pcVar11 = (char *)0x0;
  }
  pcVar12 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar12 = pcVar9;
  }
  uVar4 = strcmp(&DAT_180400b20,pcVar12);
  pfVar10 = (float *)(ulonglong)uVar4;
  if ((cVar3 != DAT_180425f88) ||
     ((cVar3 != '\0' && ((pcVar11 != (char *)0x0) != (bool)DAT_1803fcfa8)))) {
    uStack_90 = (uint)DAT_180400b70;
    uStack_98 = (uint)DAT_180400eb8;
    pcVar12 = "<vtf>";
    if (pcVar9 != (char *)0x0) {
      pcVar12 = pcVar9;
    }
    pcVar13 = "<null>";
    if (pcVar11 != (char *)0x0) {
      pcVar13 = pcVar11;
    }
    pfVar10 = (float *)FUN_180014410("[SKY] Update: want=%d sky=\'%s\' src=\'%s\' applied=%d texLoaded=%d\n"
                                     ,cVar3,pcVar13,pcVar12);
    DAT_1803fcfa8 = pcVar11 != (char *)0x0;
    DAT_180425f88 = cVar3;
  }
  if (DAT_180400eb8 != 0) {
    if ((((cVar3 != '\0') && (pcVar11 != (char *)0x0)) &&
        (iVar5 = strcmp(pcVar11,&DAT_180401180), iVar5 == 0)) && (uVar4 == 0)) {
      pfVar10 = (float *)0x0;
      if (((DAT_180401110 != '\0') && (pcVar9 == (char *)0x0)) && (1 < DAT_180400c04)) {
        uStack_50 = 0x93fd561a96ab0c67;
        uStack_58 = 0xaeca5b24c521e60;
        plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_78,&uStack_50);
        plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,auStack_88,&uStack_58);
        pfVar10 = (float *)FUN_180202dc0(*plVar7 + 0x28);
        if (DAT_1803809c4 < (float)((uint)(*pfVar10 - DAT_180400c00) & _DAT_1803817c0)) {
          FUN_180014410("[SKY] re-apply (fps %.1f -> %.1f)\n",(double)DAT_180400c00,(double)*pfVar10
                       );
          FUN_18012c6f0(0);
          pfVar10 = (float *)FUN_18012c830(pcVar11,0);
        }
      }
      goto LAB_18012f7d5;
    }
    pfVar10 = (float *)FUN_18012c6f0(1);
  }
  if (cVar3 == '\0') {
    return pfVar10;
  }
  if (pcVar11 == (char *)0x0) {
    return pfVar10;
  }
LAB_18012f7d5:
  if (DAT_180400eb8 == 0) {
    pfVar10 = (float *)FUN_18012c830(pcVar11,pcVar9);
  }
  return pfVar10;
}


)B180130130",
    "99d1d2370098d22ef62438597fb8424f600b3465da0e30ff84c01ecb6c35ffbd",
    R"F180130130C(FUN_180014410
FUN_18012a9f0
FUN_18012ae90
FUN_18012bc40
FUN_18012c6f0
FUN_18012c830
FUN_18012da80
FUN_18012dc30
FUN_18012e770
FUN_18012f290
FUN_1801fcfc0
FUN_1802029c0
FUN_180202dc0
FUN_18021e290
FUN_180241a30)F180130130C",
    R"F180130130D(LAB_18012f44e
LAB_18012f626
LAB_18012f7d5
DAT_1803809c4
DAT_1803da4c0
DAT_1803fa46f
DAT_1803fa668
DAT_1803fadf0
DAT_1803fcfa8
DAT_180400b20
DAT_180400b70
DAT_180400b80
DAT_180400c00
DAT_180400c04
DAT_180400e51
DAT_180400eb0
DAT_180400eb8
DAT_1804010c0
DAT_180401110
DAT_180401148
DAT_180401180
DAT_180425f88)F180130130D",
    R"F180130130T(""
"<vtf>"
"<null>"
"[SKY] re-apply (fps %.1f -> %.1f)\\n"
"[SKY] Update: want=%d sky=\\'%s\\' src=\\'%s\\' applied=%d texLoaded=%d\\n")F180130130T",
    R"F180130130F(36: if ((DAT_1803fa668 == (longlong *)0x0) ||
40: else {
47: if (cVar3 != '\0') {
58: if (cVar3 != '\0') {
59: if (!bVar2) {
63: return (float *)0x0;
73: if ((bVar2) && (DAT_1803fa46f == '\0')) {
79: if (*pcVar9 == '\0') goto LAB_18012f44e;
82: else {
83: LAB_18012f44e:
86: if (iVar5 == 0) {
87: if (DAT_180400eb8 != 0) {
95: if ((bVar1) && (*pfVar10 == 0.0)) {
101: if ((*(char *)pfVar10 != '\0') && (DAT_180400b70 != 0)) {
102: if (DAT_180400e51 != '\0') {
103: return pfVar10;
106: return pfVar10;
109: if ((DAT_180400b80 == '\0') && (DAT_180400e51 == '\0')) {
110: return pfVar10;
113: return pfVar10;
115: if (DAT_180400b80 != '\0') {
123: if (*piVar8 - 1U < 0xd) {
126: else {
128: if (DAT_1804010c0 == '\0') {
132: if (bVar1) {
133: if (pcVar9 == (char *)0x0) {
139: if ((*pcVar11 == '\0') || (DAT_180400b70 == 0)) goto LAB_18012f626;
143: else {
144: LAB_18012f626:
147: if (bVar2) {
150: else {
154: if (pcVar9 != (char *)0x0) {
159: if ((cVar3 != DAT_180425f88) ||
164: if (pcVar9 != (char *)0x0) {
168: if (pcVar11 != (char *)0x0) {
176: if (DAT_180400eb8 != 0) {
177: if ((((cVar3 != '\0') && (pcVar11 != (char *)0x0)) &&
180: if (((DAT_180401110 != '\0') && (pcVar9 == (char *)0x0)) && (1 < DAT_180400c04)) {
186: if (DAT_1803809c4 < (float)((uint)(*pfVar10 - DAT_180400c00) & _DAT_1803817c0)) {
193: goto LAB_18012f7d5;
197: if (cVar3 == '\0') {
198: return pfVar10;
200: if (pcVar11 == (char *)0x0) {
201: return pfVar10;
203: LAB_18012f7d5:
204: if (DAT_180400eb8 == 0) {
207: return pfVar10;)F180130130F",
    R"F180130130U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18012f44e.
TODO: recover the declaration, type and value for global/data reference LAB_18012f626.
TODO: recover the declaration, type and value for global/data reference LAB_18012f7d5.
TODO: recover the declaration, type and value for global/data reference DAT_1803809c4.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa46f.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcfa8.
TODO: recover the declaration, type and value for global/data reference DAT_180400b20.
TODO: recover the declaration, type and value for global/data reference DAT_180400b70.
TODO: recover the declaration, type and value for global/data reference DAT_180400b80.
TODO: recover the declaration, type and value for global/data reference DAT_180400c00.
TODO: recover the declaration, type and value for global/data reference DAT_180400c04.
TODO: recover the declaration, type and value for global/data reference DAT_180400e51.
TODO: recover the declaration, type and value for global/data reference DAT_180400eb0.
TODO: recover the declaration, type and value for global/data reference DAT_180400eb8.
TODO: recover the declaration, type and value for global/data reference DAT_1804010c0.
TODO: recover the declaration, type and value for global/data reference DAT_180401110.
TODO: recover the declaration, type and value for global/data reference DAT_180401148.
TODO: recover the declaration, type and value for global/data reference DAT_180401180.
TODO: recover the declaration, type and value for global/data reference DAT_180425f88.
TODO: resolve the indirect call in body 37: (cVar3 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar3 == '\0')) {.)F180130130U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180130130() noexcept {
    return kFunction_0x180130130;
}

// 0x180130140 Features_SkyEditor_SkyEditorFeature_vfunc07
// source: re/dump/decompile/0x180130140_Features_SkyEditor_SkyEditorFeature_vfunc07.c
// size: 586 bytes; thunk: false
// body sha256: 1e55cb02bf7289c0698ba45a1624cfb2ce3a17d936cfc8214521c13d53bfb80d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180130140{
    "0x180130140",
    "Features_SkyEditor_SkyEditorFeature_vfunc07",
    R"F180130140S(undefined Features_SkyEditor_SkyEditorFeature_vfunc07())F180130140S",
    R"B180130140(// 0x180130140  Features_SkyEditor_SkyEditorFeature_vfunc07
// size=586 thunk=false
// signature: undefined Features_SkyEditor_SkyEditorFeature_vfunc07()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_SkyEditor_SkyEditorFeature_vfunc07(longlong param_1)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  char local_58;
  char local_57;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  if (DAT_1803fa46f == '\0') {
    local_30 = 0x93fd561a96ab0c67;
    local_28 = 0x1f5f08cfb5ace54;
    plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_30);
    plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_40,&local_28);
    piVar4 = (int *)FUN_1802029c0(*plVar3 + 0x28);
    if (*piVar4 != 0) {
      FUN_180024720(&local_58);
      if ((local_58 == '\0') && (local_57 != '\0')) {
        local_28 = 0x93fd561a96ab0c67;
        local_30 = 0x3cfd94a417011121;
        plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_28);
        plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_50,&local_30);
        pcVar5 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
        local_28 = 0x93fd561a96ab0c67;
        local_30 = 0x3cfd94a417011121;
        cVar1 = *pcVar5;
        plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_28);
        plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_50,&local_30);
        uVar6 = FUN_1801fcfc0(*plVar3 + 0x28);
        *(bool *)uVar6 = cVar1 == '\0';
      }
    }
    local_28 = 0x93fd561a96ab0c67;
    local_30 = 0x3cfd94a417011121;
    plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_28);
    plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_50,&local_30);
    pcVar5 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
    cVar1 = *pcVar5;
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 8) != '\0') {
        local_28 = 0x93fd561a96ab0c67;
        local_30 = 0x8911f3778b8c2d42;
        plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_28);
        plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_50,&local_30);
        piVar4 = (int *)FUN_1802029c0(*plVar3 + 0x28);
        if (*piVar4 == 0) {
          if (DAT_1803fa668 != (longlong *)0x0) {
            cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))();
            if (cVar2 != '\0') {
              uVar6 = FUN_18012a9f0();
              FUN_18012ab00(uVar6);
            }
          }
        }
        else {
          FUN_18012fc70(DAT_180380bb0,DAT_180380bb0,DAT_180380bb0);
        }
      }
    }
    else {
      FUN_18012fcf0(1);
    }
    *(char *)(param_1 + 8) = cVar1;
  }
  return;
}


)B180130140",
    "1e55cb02bf7289c0698ba45a1624cfb2ce3a17d936cfc8214521c13d53bfb80d",
    R"F180130140C(FUN_180024720
FUN_18012a9f0
FUN_18012ab00
FUN_18012fc70
FUN_18012fcf0
FUN_1801fcfc0
FUN_1802029c0
FUN_180241a30)F180130140C",
    R"F180130140D(DAT_180380bb0
DAT_1803da4c0
DAT_1803fa46f
DAT_1803fa668
DAT_1803fadf0)F180130140D",
    R"F180130140T()F180130140T",
    R"F180130140F(28: if (DAT_1803fa46f == '\0') {
34: if (*piVar4 != 0) {
36: if ((local_58 == '\0') && (local_57 != '\0')) {
57: if (cVar1 == '\0') {
58: if (*(char *)(param_1 + 8) != '\0') {
64: if (*piVar4 == 0) {
65: if (DAT_1803fa668 != (longlong *)0x0) {
67: if (cVar2 != '\0') {
73: else {
78: else {
83: return;)F180130140F",
    R"F180130140U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa46f.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: resolve the indirect call in body 66: cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))();.)F180130140U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180130140() noexcept {
    return kFunction_0x180130140;
}

// 0x180130390 FUN_180130390
// source: re/dump/decompile/0x180130390_FUN_180130390.c
// size: 301 bytes; thunk: false
// body sha256: 324ecf743abe57f36d291d1d3800705922764dd9e3f42f0447cd4d368ca7f852
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180130390{
    "0x180130390",
    "FUN_180130390",
    R"F180130390S(undefined FUN_180130390())F180130390S",
    R"B180130390(// 0x180130390  FUN_180130390
// size=301 thunk=false
// signature: undefined FUN_180130390()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180130390(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  char local_70 [8];
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  uVar3 = 0;
  while (uVar3 < (ulonglong)((DAT_1803ea298 - DAT_1803ea290 >> 3) * -0x5555555555555555)) {
    plVar1 = *(longlong **)(DAT_1803ea290 + uVar3 * 0x18);
    if (plVar1 == (longlong *)0x0) {
      uVar3 = uVar3 + 1;
    }
    else {
      local_78 = uVar3;
      if (*(char *)(DAT_1803ea290 + 8 + uVar3 * 0x18) != '\0') {
        local_70[0] = '\0';
        plVar2 = (longlong *)(**(code **)(*plVar1 + 0x58))(plVar1,"$color",local_70,0);
        if ((local_70[0] != '\0') && (plVar2 != (longlong *)0x0)) {
          uVar4 = param_1;
          uVar5 = param_2;
          uVar6 = param_3;
          if (param_4 != '\0') {
            uVar4 = *(undefined4 *)(DAT_1803ea290 + 0xc + uVar3 * 0x18);
            uVar5 = *(undefined4 *)(DAT_1803ea290 + 0x10 + uVar3 * 0x18);
            uVar6 = *(undefined4 *)(DAT_1803ea290 + 0x14 + uVar3 * 0x18);
          }
          (**(code **)(*plVar2 + 0x50))(plVar2,uVar4,uVar5,uVar6);
        }
      }
      (**(code **)(*plVar1 + 0xe0))(plVar1,param_1,param_2,param_3);
      uVar3 = uVar3 + 1;
    }
  }
  return;
}


)B180130390",
    "324ecf743abe57f36d291d1d3800705922764dd9e3f42f0447cd4d368ca7f852",
    R"F180130390C()F180130390C",
    R"F180130390D(DAT_1803da4c0
DAT_1803ea290
DAT_1803ea298)F180130390D",
    R"F180130390T("$color")F180130390T",
    R"F180130390F(25: while (uVar3 < (ulonglong)((DAT_1803ea298 - DAT_1803ea290 >> 3) * -0x5555555555555555)) {
27: if (plVar1 == (longlong *)0x0) {
30: else {
32: if (*(char *)(DAT_1803ea290 + 8 + uVar3 * 0x18) != '\0') {
35: if ((local_70[0] != '\0') && (plVar2 != (longlong *)0x0)) {
39: if (param_4 != '\0') {
51: return;)F180130390F",
    R"F180130390U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea290.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea298.
TODO: resolve the indirect call in body 34: plVar2 = (longlong *)(**(code **)(*plVar1 + 0x58))(plVar1,"$color",local_70,0);.
TODO: resolve the indirect call in body 44: (**(code **)(*plVar2 + 0x50))(plVar2,uVar4,uVar5,uVar6);.
TODO: resolve the indirect call in body 47: (**(code **)(*plVar1 + 0xe0))(plVar1,param_1,param_2,param_3);.)F180130390U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180130390() noexcept {
    return kFunction_0x180130390;
}

// 0x1801304c0 FUN_1801304c0
// source: re/dump/decompile/0x1801304c0_FUN_1801304c0.c
// size: 110 bytes; thunk: false
// body sha256: 00013b3dd3fc635605b36728e51d897e9e42d978b22ba47b81b1b2fb5bc75a53
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801304c0{
    "0x1801304c0",
    "FUN_1801304c0",
    R"F1801304c0S(undefined FUN_1801304c0())F1801304c0S",
    R"B1801304c0(// 0x1801304c0  FUN_1801304c0
// size=110 thunk=false
// signature: undefined FUN_1801304c0()
// status: ok


void FUN_1801304c0(char param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  plVar2 = DAT_1803ea290;
  plVar1 = DAT_1803ea298;
  if ((param_1 != '\0') && (DAT_1803ea290 != DAT_1803ea298)) {
    uVar3 = FUN_180129c50();
    FUN_180130390(uVar3,uVar3,uVar3,1);
    plVar2 = DAT_1803ea290;
    plVar1 = DAT_1803ea298;
  }
  for (; plVar2 != plVar1; plVar2 = plVar2 + 3) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x68))();
    }
  }
  return;
}


)B1801304c0",
    "00013b3dd3fc635605b36728e51d897e9e42d978b22ba47b81b1b2fb5bc75a53",
    R"F1801304c0C(FUN_180129c50
FUN_180130390)F1801304c0C",
    R"F1801304c0D(DAT_1803ea290
DAT_1803ea298)F1801304c0D",
    R"F1801304c0T()F1801304c0T",
    R"F1801304c0F(16: if ((param_1 != '\0') && (DAT_1803ea290 != DAT_1803ea298)) {
22: for (; plVar2 != plVar1; plVar2 = plVar2 + 3) {
23: if ((longlong *)*plVar2 != (longlong *)0x0) {
27: return;)F1801304c0F",
    R"F1801304c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea290.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea298.
TODO: resolve the indirect call in body 24: (**(code **)(*(longlong *)*plVar2 + 0x68))();.)F1801304c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801304c0() noexcept {
    return kFunction_0x1801304c0;
}

// 0x180130540 FUN_180130540
// source: re/dump/decompile/0x180130540_FUN_180130540.c
// size: 60 bytes; thunk: false
// body sha256: 86041fccaffe947541dc805e2dbd50994b0192cf8a01a5470f3b44c08add445d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180130540{
    "0x180130540",
    "FUN_180130540",
    R"F180130540S(undefined FUN_180130540())F180130540S",
    R"B180130540(// 0x180130540  FUN_180130540
// size=60 thunk=false
// signature: undefined FUN_180130540()
// status: ok


void FUN_180130540(void)

{
  FUN_1801304c0();
  if (DAT_1803ea290 != DAT_1803ea298) {
    DAT_1803ea298 = DAT_1803ea290;
  }
  DAT_180401593 = 0;
  DAT_180401591 = 0;
  DAT_180401590 = 0;
  return;
}


)B180130540",
    "86041fccaffe947541dc805e2dbd50994b0192cf8a01a5470f3b44c08add445d",
    R"F180130540C(FUN_1801304c0)F180130540C",
    R"F180130540D(DAT_1803ea290
DAT_1803ea298
DAT_180401590
DAT_180401591
DAT_180401593)F180130540D",
    R"F180130540T()F180130540T",
    R"F180130540F(11: if (DAT_1803ea290 != DAT_1803ea298) {
17: return;)F180130540F",
    R"F180130540U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea290.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea298.
TODO: recover the declaration, type and value for global/data reference DAT_180401590.
TODO: recover the declaration, type and value for global/data reference DAT_180401591.
TODO: recover the declaration, type and value for global/data reference DAT_180401593.)F180130540U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180130540() noexcept {
    return kFunction_0x180130540;
}

// 0x180130580 FUN_180130580
// source: re/dump/decompile/0x180130580_FUN_180130580.c
// size: 849 bytes; thunk: false
// body sha256: a915d934d2cc83954714733a4968f83b2bdd90fb35541589a0cf7dc2c2d4e88e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180130580{
    "0x180130580",
    "FUN_180130580",
    R"F180130580S(undefined FUN_180130580())F180130580S",
    R"B180130580(// 0x180130580  FUN_180130580
// size=849 thunk=false
// signature: undefined FUN_180130580()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180130580(void)

{
  ulonglong uVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  longlong *plVar10;
  char *_Str1;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  float extraout_XMM0_Da;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  uint uStack_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  char local_90 [8];
  float local_88;
  float local_84;
  float local_80;
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  sVar7 = (**(code **)(*DAT_1803fa640 + 0x278))();
  iVar9 = (**(code **)(*DAT_1803fa640 + 0x288))();
  iVar13 = 0;
  if (0 < iVar9) {
    iVar13 = iVar9;
  }
  uVar11 = 0x20000;
  if ((longlong)iVar13 + 0x400U < 0x20000) {
    uVar11 = (longlong)iVar13 + 0x400U;
  }
  sVar8 = (**(code **)(*DAT_1803fa640 + 0x268))();
  fVar4 = DAT_180380fe8;
  fVar3 = DAT_180380bb0;
  uVar1 = 0;
  do {
    sVar2 = sVar8;
    if (sVar2 == sVar7) {
      return;
    }
    uVar12 = uVar1 + 1;
    if (uVar11 <= uVar1) goto LAB_180130867;
    plVar10 = (longlong *)(**(code **)(*DAT_1803fa640 + 0x280))(DAT_1803fa640,sVar2);
    if ((((plVar10 != (longlong *)0x0) &&
         (cVar6 = (**(code **)(*plVar10 + 0x150))(plVar10), cVar6 == '\0')) &&
        (_Str1 = (char *)(**(code **)(*plVar10 + 8))(plVar10), _Str1 != (char *)0x0)) &&
       (iVar9 = strcmp(_Str1,"World textures"), iVar9 == 0)) {
      (**(code **)(*plVar10 + 0x60))(plVar10);
      uStack_a0 = uStack_a0 & 0xffffff00;
      local_98 = fVar3;
      local_94 = fVar3;
      fStack_9c = 1.0;
      local_90[0] = '\0';
      local_a8 = plVar10;
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x58))(plVar10,"$color",local_90,0);
      fVar17 = extraout_XMM0_Da;
      fVar18 = fVar3;
      fVar19 = fVar3;
      if ((local_90[0] != '\0') && (fVar17 = extraout_XMM0_Da, plVar10 != (longlong *)0x0)) {
        local_88 = 1.0;
        local_84 = 1.0;
        local_80 = 1.0;
        (**(code **)(*plVar10 + 0xe0))(plVar10,&local_88,3);
        bVar14 = ((uint)local_88 & 0x7f800000) != 0x7f800000;
        if ((!bVar14) || ((local_88 < 0.0 || (fVar4 < local_88)))) {
          bVar14 = false;
        }
        bVar15 = ((uint)local_84 & 0x7f800000) != 0x7f800000;
        if (((!bVar15) || (local_84 < 0.0)) || (fVar4 < local_84)) {
          bVar15 = false;
        }
        bVar16 = ((uint)local_80 & 0x7f800000) != 0x7f800000;
        fVar17 = local_88;
        local_98 = fVar3;
        local_94 = fVar3;
        if (((!bVar16) || (local_80 < 0.0)) || (fVar4 < local_80)) {
          uStack_a0 = CONCAT31(uStack_a0._1_3_,1);
        }
        else {
          uStack_a0 = CONCAT31(uStack_a0._1_3_,bVar16);
          if ((bool)(bVar14 & bVar15)) {
            fStack_9c = local_88;
            fVar18 = local_84;
            fVar19 = local_80;
            local_98 = local_84;
            local_94 = local_80;
          }
        }
      }
      puVar5 = DAT_1803ea298;
      if (DAT_1803ea298 == DAT_1803ea2a0) {
        FUN_180225500(fVar17,DAT_1803ea298,&local_a8);
      }
      else {
        *DAT_1803ea298 = local_a8;
        puVar5[1] = CONCAT44(fStack_9c,uStack_a0);
        puVar5[2] = CONCAT44(fVar19,fVar18);
        DAT_1803ea298 = DAT_1803ea298 + 3;
      }
    }
    sVar8 = (**(code **)(*DAT_1803fa640 + 0x270))(DAT_1803fa640,sVar2);
    uVar1 = uVar12;
  } while (sVar8 != sVar2);
  FUN_180014410("[WorldTint] stopped cyclic material list at handle=%u\n",sVar2);
  if (sVar2 != sVar7) {
LAB_180130867:
    if (uVar11 <= uVar12) {
      FUN_180014410("[WorldTint] material walk capped: declared=%d limit=%zu\n",iVar13,uVar11);
    }
  }
  return;
}


)B180130580",
    "a915d934d2cc83954714733a4968f83b2bdd90fb35541589a0cf7dc2c2d4e88e",
    R"F180130580C(FUN_180014410
FUN_180225500)F180130580C",
    R"F180130580D(LAB_180130867
DAT_180380bb0
DAT_180380fe8
DAT_1803da4c0
DAT_1803ea298
DAT_1803ea2a0
DAT_1803fa640)F180130580D",
    R"F180130580T("$color"
"World textures"
"[WorldTint] stopped cyclic material list at handle=%u\\n"
"[WorldTint] material walk capped: declared=%d limit=%zu\\n")F180130580T",
    R"F180130580F(49: if (0 < iVar9) {
53: if ((longlong)iVar13 + 0x400U < 0x20000) {
60: do {
62: if (sVar2 == sVar7) {
63: return;
66: if (uVar11 <= uVar1) goto LAB_180130867;
68: if ((((plVar10 != (longlong *)0x0) &&
83: if ((local_90[0] != '\0') && (fVar17 = extraout_XMM0_Da, plVar10 != (longlong *)0x0)) {
89: if ((!bVar14) || ((local_88 < 0.0 || (fVar4 < local_88)))) {
93: if (((!bVar15) || (local_84 < 0.0)) || (fVar4 < local_84)) {
100: if (((!bVar16) || (local_80 < 0.0)) || (fVar4 < local_80)) {
103: else {
105: if ((bool)(bVar14 & bVar15)) {
115: if (DAT_1803ea298 == DAT_1803ea2a0) {
118: else {
129: if (sVar2 != sVar7) {
130: LAB_180130867:
131: if (uVar11 <= uVar12) {
135: return;)F180130580F",
    R"F180130580U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180130867.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_180380fe8.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea298.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea2a0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa640.
TODO: resolve the indirect call in body 46: sVar7 = (**(code **)(*DAT_1803fa640 + 0x278))();.
TODO: resolve the indirect call in body 47: iVar9 = (**(code **)(*DAT_1803fa640 + 0x288))();.
TODO: resolve the indirect call in body 56: sVar8 = (**(code **)(*DAT_1803fa640 + 0x268))();.
TODO: resolve the indirect call in body 67: plVar10 = (longlong *)(**(code **)(*DAT_1803fa640 + 0x280))(DAT_1803fa640,sVar2);.
TODO: resolve the indirect call in body 69: (cVar6 = (**(code **)(*plVar10 + 0x150))(plVar10), cVar6 == '\0')) &&.
TODO: resolve the indirect call in body 70: (_Str1 = (char *)(**(code **)(*plVar10 + 8))(plVar10), _Str1 != (char *)0x0)) &&.
TODO: resolve the indirect call in body 72: (**(code **)(*plVar10 + 0x60))(plVar10);.
TODO: resolve the indirect call in body 79: plVar10 = (longlong *)(**(code **)(*plVar10 + 0x58))(plVar10,"$color",local_90,0);.
TODO: resolve the indirect call in body 87: (**(code **)(*plVar10 + 0xe0))(plVar10,&local_88,3);.
TODO: resolve the indirect call in body 125: sVar8 = (**(code **)(*DAT_1803fa640 + 0x270))(DAT_1803fa640,sVar2);.)F180130580U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180130580() noexcept {
    return kFunction_0x180130580;
}

// 0x1801308e0 FUN_1801308e0
// source: re/dump/decompile/0x1801308e0_FUN_1801308e0.c
// size: 41 bytes; thunk: false
// body sha256: 8dc46213a6c5cdd1c7c466711968865695fa69ddb69ad6fc5be300001178d220
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801308e0{
    "0x1801308e0",
    "FUN_1801308e0",
    R"F1801308e0S(undefined FUN_1801308e0())F1801308e0S",
    R"B1801308e0(// 0x1801308e0  FUN_1801308e0
// size=41 thunk=false
// signature: undefined FUN_1801308e0()
// status: ok


void FUN_1801308e0(void)

{
  if (DAT_1803fa640 != 0) {
    FUN_180130540(1);
    FUN_180130580();
    DAT_180401591 = 1;
  }
  return;
}


)B1801308e0",
    "8dc46213a6c5cdd1c7c466711968865695fa69ddb69ad6fc5be300001178d220",
    R"F1801308e0C(FUN_180130540
FUN_180130580)F1801308e0C",
    R"F1801308e0D(DAT_1803fa640
DAT_180401591)F1801308e0D",
    R"F1801308e0T()F1801308e0T",
    R"F1801308e0F(10: if (DAT_1803fa640 != 0) {
15: return;)F1801308e0F",
    R"F1801308e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa640.
TODO: recover the declaration, type and value for global/data reference DAT_180401591.)F1801308e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801308e0() noexcept {
    return kFunction_0x1801308e0;
}

// 0x180130920 FUN_180130920
// source: re/dump/decompile/0x180130920_FUN_180130920.c
// size: 546 bytes; thunk: false
// body sha256: 5a593009469567c01996fd49dab0faa41490c350b7ad1fd6b0f97aa5c5ec3799
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180130920{
    "0x180130920",
    "FUN_180130920",
    R"F180130920S(undefined FUN_180130920())F180130920S",
    R"B180130920(// 0x180130920  FUN_180130920
// size=546 thunk=false
// signature: undefined FUN_180130920()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180130920(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  undefined1 auStack_a8 [32];
  float local_88;
  float local_84;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  fVar8 = (float)FUN_180129c50();
  local_84 = 1.0;
  local_58 = 0xbbd46f0aa9aa58e5;
  local_88 = 0.0;
  local_60 = 0x93fd561a96ab0c67;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_80,&local_60);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_70,&local_58);
  pfVar5 = (float *)FUN_180202dc0(*plVar4 + 0x28);
  local_58 = 0x93fd561a96ab0c67;
  pfVar7 = &local_88;
  if (0.0 <= *pfVar5) {
    pfVar7 = pfVar5;
  }
  pfVar6 = &local_84;
  if (*pfVar5 <= DAT_180380bb0) {
    pfVar6 = pfVar7;
  }
  fVar1 = *pfVar6;
  local_60 = 0xbbd47a0aa9aa6b96;
  local_88 = 1.0;
  local_84 = 0.0;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,&local_58);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_80,&local_60);
  pfVar5 = (float *)FUN_180202dc0(*plVar4 + 0x28);
  local_58 = 0x93fd561a96ab0c67;
  pfVar7 = &local_84;
  if (0.0 <= *pfVar5) {
    pfVar7 = pfVar5;
  }
  pfVar6 = &local_88;
  if (*pfVar5 <= DAT_180380bb0) {
    pfVar6 = pfVar7;
  }
  fVar2 = *pfVar6;
  local_60 = 0xbbd47f0aa9aa7415;
  local_88 = 1.0;
  local_84 = 0.0;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,&local_58);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_80,&local_60);
  pfVar5 = (float *)FUN_180202dc0(*plVar4 + 0x28);
  pfVar7 = &local_84;
  if (0.0 <= *pfVar5) {
    pfVar7 = pfVar5;
  }
  pfVar6 = &local_88;
  if (*pfVar5 <= DAT_180380bb0) {
    pfVar6 = pfVar7;
  }
  fVar3 = *pfVar6;
  FUN_180130390(fVar8 * fVar1,fVar8 * fVar2,fVar8 * fVar3,0);
  _DAT_1803e7b50 = fVar8 * fVar1;
  _DAT_1803e7b54 = fVar8 * fVar2;
  _DAT_1803e7b58 = fVar8 * fVar3;
  DAT_180401593 = 1;
  DAT_180401590 = 1;
  return;
}


)B180130920",
    "5a593009469567c01996fd49dab0faa41490c350b7ad1fd6b0f97aa5c5ec3799",
    R"F180130920C(FUN_180129c50
FUN_180130390
FUN_180202dc0
FUN_180241a30)F180130920C",
    R"F180130920D(DAT_180380bb0
DAT_1803da4c0
DAT_1803fadf0
DAT_180401590
DAT_180401593)F180130920D",
    R"F180130920T()F180130920T",
    R"F180130920F(41: if (0.0 <= *pfVar5) {
45: if (*pfVar5 <= DAT_180380bb0) {
57: if (0.0 <= *pfVar5) {
61: if (*pfVar5 <= DAT_180380bb0) {
72: if (0.0 <= *pfVar5) {
76: if (*pfVar5 <= DAT_180380bb0) {
86: return;)F180130920F",
    R"F180130920U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_180401590.
TODO: recover the declaration, type and value for global/data reference DAT_180401593.)F180130920U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180130920() noexcept {
    return kFunction_0x180130920;
}

// 0x180130b50 Features_WorldTint_WorldTintFeature_vfunc01
// source: re/dump/decompile/0x180130b50_Features_WorldTint_WorldTintFeature_vfunc01.c
// size: 1323 bytes; thunk: false
// body sha256: 117b399619f912302166a740b4d395b45a7a660abc71210dd1eaecd33551d744
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180130b50{
    "0x180130b50",
    "Features_WorldTint_WorldTintFeature_vfunc01",
    R"F180130b50S(undefined Features_WorldTint_WorldTintFeature_vfunc01())F180130b50S",
    R"B180130b50(// 0x180130b50  Features_WorldTint_WorldTintFeature_vfunc01
// size=1323 thunk=false
// signature: undefined Features_WorldTint_WorldTintFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_WorldTint_WorldTintFeature_vfunc01(void)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  float fVar4;
  char cVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined1 *puVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  undefined1 auStack_f8 [32];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined8 local_80 [2];
  ulonglong local_70;
  
  local_70 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  if ((DAT_1803fa668 == (longlong *)0x0) ||
     (cVar5 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar5 == '\0')) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  if ((DAT_1803fd0c4 != '\0') && (cVar5 == '\0')) {
    if (DAT_1803ea290 != DAT_1803ea298) {
      DAT_1803ea298 = DAT_1803ea290;
    }
    DAT_180401593 = '\0';
    DAT_180401591 = '\0';
    DAT_180401590 = '\0';
  }
  local_a0 = 0x33ebf49592e8d668;
  local_98 = 0x93fd561a96ab0c67;
  DAT_1803fd0c4 = cVar5;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_80,&local_98);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_90,&local_a0);
  pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
  if (((*pcVar7 == '\0') || (DAT_1803fa46f != '\0')) || (cVar5 == '\0')) {
    DAT_180401592 = 0;
    if (((DAT_180401593 == '\0') && (DAT_1803ea290 == DAT_1803ea298)) && (DAT_180401591 == '\0')) {
      DAT_180401592 = 0;
      return;
    }
    FUN_180130540(1);
    return;
  }
  local_98 = 0x93fd561a96ab0c67;
  local_a0 = 0xb2eb02e304a12441;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_80,&local_98);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_90,&local_a0);
  puVar8 = (undefined1 *)FUN_1801fcfc0(*plVar6 + 0x28);
  uVar3 = *puVar8;
  if (DAT_180401591 == '\0') {
    FUN_1801308e0();
  }
  fVar12 = (float)FUN_180129c50();
  fVar4 = DAT_180380bb0;
  local_d4 = 1.0;
  local_a0 = 0xbbd46f0aa9aa58e5;
  local_d8 = 0.0;
  local_98 = 0x93fd561a96ab0c67;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_80,&local_98);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_90,&local_a0);
  pfVar9 = (float *)FUN_180202dc0(*plVar6 + 0x28);
  local_cc = 1.0;
  local_d0 = 0.0;
  local_98 = 0x93fd561a96ab0c67;
  local_a0 = 0xbbd47a0aa9aa6b96;
  pfVar11 = &local_d8;
  if (0.0 <= *pfVar9) {
    pfVar11 = pfVar9;
  }
  pfVar10 = &local_d4;
  if (*pfVar9 <= fVar4) {
    pfVar10 = pfVar11;
  }
  fVar1 = *pfVar10;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_80,&local_98);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_90,&local_a0);
  pfVar9 = (float *)FUN_180202dc0(*plVar6 + 0x28);
  local_c4 = 1.0;
  local_c8 = 0.0;
  local_98 = 0x93fd561a96ab0c67;
  local_a0 = 0xbbd47f0aa9aa7415;
  pfVar11 = &local_d0;
  if (0.0 <= *pfVar9) {
    pfVar11 = pfVar9;
  }
  pfVar10 = &local_cc;
  if (*pfVar9 <= fVar4) {
    pfVar10 = pfVar11;
  }
  fVar2 = *pfVar10;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_80,&local_98);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_90,&local_a0);
  pfVar9 = (float *)FUN_180202dc0(*plVar6 + 0x28);
  pfVar11 = &local_c8;
  if (0.0 <= *pfVar9) {
    pfVar11 = pfVar9;
  }
  if (((DAT_180401590 != '\0') && (fVar12 * fVar1 == _DAT_1803e7b50)) &&
     (fVar12 * fVar2 == _DAT_1803e7b54)) {
    pfVar10 = &local_c4;
    if (*pfVar9 <= fVar4) {
      pfVar10 = pfVar11;
    }
    if (fVar12 * *pfVar10 == _DAT_1803e7b58) goto LAB_180130e93;
  }
  FUN_180130920();
LAB_180130e93:
  local_98._0_4_ = 1.0;
  local_a0 = local_a0 & 0xffffffff00000000;
  local_90[0] = 0x93fd561a96ab0c67;
  local_80[0] = 0xbbd46f0aa9aa58e5;
  DAT_180401592 = uVar3;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c0,local_90);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_b0,local_80);
  pfVar9 = (float *)FUN_180202dc0(*plVar6 + 0x28);
  local_80[0] = 0x93fd561a96ab0c67;
  local_90[0] = 0xbbd47a0aa9aa6b96;
  pfVar11 = (float *)&local_a0;
  if (0.0 <= *pfVar9) {
    pfVar11 = pfVar9;
  }
  pfVar10 = (float *)&local_98;
  if (*pfVar9 <= fVar4) {
    pfVar10 = pfVar11;
  }
  _DAT_1803e7b60 = *pfVar10;
  local_a0._0_4_ = 1.0;
  local_98._0_4_ = 0.0;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_b0,local_80);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_c0,local_90);
  pfVar9 = (float *)FUN_180202dc0(*plVar6 + 0x28);
  local_80[0] = 0x93fd561a96ab0c67;
  local_90[0] = 0xbbd47f0aa9aa7415;
  pfVar11 = (float *)&local_98;
  if (0.0 <= *pfVar9) {
    pfVar11 = pfVar9;
  }
  pfVar10 = (float *)&local_a0;
  if (*pfVar9 <= fVar4) {
    pfVar10 = pfVar11;
  }
  _DAT_1803e7b64 = *pfVar10;
  local_a0 = CONCAT44(local_a0._4_4_,0x3f800000);
  local_98 = (ulonglong)local_98._4_4_ << 0x20;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_b0,local_80);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_c0,local_90);
  pfVar9 = (float *)FUN_180202dc0(*plVar6 + 0x28);
  pfVar11 = (float *)&local_98;
  if (0.0 <= *pfVar9) {
    pfVar11 = pfVar9;
  }
  pfVar10 = (float *)&local_a0;
  if (*pfVar9 <= fVar4) {
    pfVar10 = pfVar11;
  }
  _DAT_1803e7b68 = *pfVar10;
  return;
}


)B180130b50",
    "117b399619f912302166a740b4d395b45a7a660abc71210dd1eaecd33551d744",
    R"F180130b50C(FUN_180129c50
FUN_180130540
FUN_1801308e0
FUN_180130920
FUN_1801fcfc0
FUN_180202dc0
FUN_180241a30)F180130b50C",
    R"F180130b50D(LAB_180130e93
DAT_180380bb0
DAT_1803da4c0
DAT_1803ea290
DAT_1803ea298
DAT_1803fa46f
DAT_1803fa668
DAT_1803fadf0
DAT_1803fd0c4
DAT_180401590
DAT_180401591
DAT_180401592
DAT_180401593)F180130b50D",
    R"F180130b50T()F180130b50T",
    R"F180130b50F(41: if ((DAT_1803fa668 == (longlong *)0x0) ||
45: else {
48: if ((DAT_1803fd0c4 != '\0') && (cVar5 == '\0')) {
49: if (DAT_1803ea290 != DAT_1803ea298) {
62: if (((*pcVar7 == '\0') || (DAT_1803fa46f != '\0')) || (cVar5 == '\0')) {
64: if (((DAT_180401593 == '\0') && (DAT_1803ea290 == DAT_1803ea298)) && (DAT_180401591 == '\0')) {
66: return;
69: return;
77: if (DAT_180401591 == '\0') {
94: if (0.0 <= *pfVar9) {
98: if (*pfVar9 <= fVar4) {
110: if (0.0 <= *pfVar9) {
114: if (*pfVar9 <= fVar4) {
122: if (0.0 <= *pfVar9) {
125: if (((DAT_180401590 != '\0') && (fVar12 * fVar1 == _DAT_1803e7b50)) &&
128: if (*pfVar9 <= fVar4) {
131: if (fVar12 * *pfVar10 == _DAT_1803e7b58) goto LAB_180130e93;
134: LAB_180130e93:
146: if (0.0 <= *pfVar9) {
150: if (*pfVar9 <= fVar4) {
162: if (0.0 <= *pfVar9) {
166: if (*pfVar9 <= fVar4) {
176: if (0.0 <= *pfVar9) {
180: if (*pfVar9 <= fVar4) {
184: return;)F180130b50F",
    R"F180130b50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180130e93.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea290.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea298.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa46f.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fd0c4.
TODO: recover the declaration, type and value for global/data reference DAT_180401590.
TODO: recover the declaration, type and value for global/data reference DAT_180401591.
TODO: recover the declaration, type and value for global/data reference DAT_180401592.
TODO: recover the declaration, type and value for global/data reference DAT_180401593.
TODO: resolve the indirect call in body 42: (cVar5 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar5 == '\0')) {.)F180130b50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180130b50() noexcept {
    return kFunction_0x180130b50;
}

}  // namespace sf::reconstructed
