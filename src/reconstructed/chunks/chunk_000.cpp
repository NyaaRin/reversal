// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"

namespace sf::reconstructed {

// 0x180001000 FUN_180001000
// source: re/dump/decompile/0x180001000_FUN_180001000.c
// size: 32 bytes; thunk: false
// body sha256: 18a36a151843b41098d35e471eb9d057c4333de9832b24d2e712c601603b5b56
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001000{
    "0x180001000",
    "FUN_180001000",
    R"F180001000S(undefined FUN_180001000())F180001000S",
    R"B180001000(// 0x180001000  FUN_180001000
// size=32 thunk=false
// signature: undefined FUN_180001000()
// callers:
// status: ok


void FUN_180001000(void)

{
  FUN_180018dd0(&DAT_1803fac80);
  atexit(FUN_180308950);
  return;
}


)B180001000",
    "18a36a151843b41098d35e471eb9d057c4333de9832b24d2e712c601603b5b56",
    R"F180001000C(FUN_180018dd0
FUN_180308950)F180001000C",
    R"F180001000D(DAT_1803fac80)F180001000D",
    R"F180001000T()F180001000T",
    R"F180001000F(13: return;)F180001000F",
    R"F180001000U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F180001000U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001000() noexcept {
    return kFunction_0x180001000;
}

// 0x180001020 FUN_180001020
// source: re/dump/decompile/0x180001020_FUN_180001020.c
// size: 1456 bytes; thunk: false
// body sha256: dd1c26320ec0425d8e6f21db6fe446816134a57444c72266a47f3af491369a8b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001020{
    "0x180001020",
    "FUN_180001020",
    R"F180001020S(undefined FUN_180001020())F180001020S",
    R"B180001020(// 0x180001020  FUN_180001020
// size=1456 thunk=false
// signature: undefined FUN_180001020()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001020(void)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar5 = 0;
  do {
    uVar3 = (uint)uVar5;
    uVar2 = 0;
    lVar8 = uVar5 * 0x21;
    uVar6 = uVar3 + 1;
    uVar7 = (&DAT_18033d650)[uVar3 & 0x1f] - 1;
    do {
      iVar1 = (int)uVar2;
      (&DAT_1803f92a0)[uVar5 * 0x21 + uVar2] = uVar7;
      if (iVar1 + uVar3 < 0x20) {
        (&DAT_1803f92a0)[uVar2 + lVar8] = -(&DAT_18033d650)[iVar1 + uVar3 & 0x1f] | uVar7;
      }
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 1U)] = uVar7;
      if (uVar6 + iVar1 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 1U)] =
             -(&DAT_18033d650)[uVar6 + iVar1 & 0x1f] | uVar7;
      }
      uVar4 = uVar3 + 2 + iVar1;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 2U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 2U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7;
      }
      uVar4 = uVar3 + 3 + iVar1;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 3U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 3U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7;
      }
      uVar4 = uVar3 + 4 + iVar1;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 4U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 4U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7;
      }
      uVar4 = uVar3 + 5 + iVar1;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 5U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 5U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7;
      }
      uVar4 = iVar1 + uVar3 + 6;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 6U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 6U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7;
      }
      uVar4 = iVar1 + uVar3 + 7;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 7U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 7U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7;
      }
      uVar4 = uVar3 + 8 + iVar1;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 8U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 8U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7;
      }
      uVar4 = uVar3 + 9 + iVar1;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 9U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 9U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7;
      }
      uVar4 = uVar3 + 10 + iVar1;
      (&DAT_1803f92a0)[uVar5 * 0x21 + (ulonglong)(iVar1 + 10U)] = uVar7;
      if (uVar4 < 0x20) {
        (&DAT_1803f92a0)[lVar8 + (ulonglong)(iVar1 + 10U)] = -(&DAT_18033d650)[uVar4 & 0x1f] | uVar7
        ;
      }
      uVar2 = (ulonglong)(iVar1 + 0xbU);
    } while (iVar1 + 0xbU < 0x21);
    uVar5 = (ulonglong)uVar6;
  } while (uVar6 < 0x20);
  _DAT_1803fa710 = 0;
  DAT_1803fa714 = 1;
  _DAT_1803fa718 = 3;
  DAT_1803fa71c = 7;
  _DAT_1803fa720 = 0xf;
  _DAT_1803fa724 = 0x1f;
  _DAT_1803fa728 = 0x3f;
  _DAT_1803fa72c = 0x7f;
  DAT_1803fa730 = 0xff;
  _DAT_1803fa734 = 0x1ff;
  _DAT_1803fa738 = 0x3ff;
  _DAT_1803fa73c = 0x7ff;
  _DAT_1803fa740 = 0xfff;
  _DAT_1803fa744 = 0x1fff;
  _DAT_1803fa748 = 0x3fff;
  DAT_1803fa74c = 0x7fff;
  _DAT_1803fa750 = 0xffff;
  _DAT_1803fa754 = 0x1ffff;
  _DAT_1803fa758 = 0x3ffff;
  _DAT_1803fa75c = 0x7ffff;
  _DAT_1803fa760 = 0xfffff;
  _DAT_1803fa764 = 0x1fffff;
  _DAT_1803fa768 = 0x3fffff;
  _DAT_1803fa76c = 0x7fffff;
  _DAT_1803fa770 = 0xffffff;
  _DAT_1803fa774 = 0x1ffffff;
  _DAT_1803fa778 = 0x3ffffff;
  _DAT_1803fa77c = 0x7ffffff;
  _DAT_1803fa780 = 0xfffffff;
  _DAT_1803fa784 = 0x1fffffff;
  _DAT_1803fa788 = 0x3fffffff;
  _DAT_1803fa78c = 0x7fffffff;
  DAT_1803fa790 = 0xffffffff;
  _DAT_1803fa690 = 1;
  _DAT_1803fa694 = 2;
  _DAT_1803fa698 = 4;
  _DAT_1803fa69c = 8;
  _DAT_1803fa6a0 = 0x10;
  _DAT_1803fa6a4 = 0x20;
  _DAT_1803fa6a8 = 0x40;
  _DAT_1803fa6ac = 0x80;
  _DAT_1803fa6b0 = 0x100;
  _DAT_1803fa6b4 = 0x200;
  _DAT_1803fa6b8 = 0x400;
  _DAT_1803fa6bc = 0x800;
  _DAT_1803fa6c0 = 0x1000;
  _DAT_1803fa6c4 = 0x2000;
  _DAT_1803fa6c8 = 0x4000;
  _DAT_1803fa6cc = 0x8000;
  _DAT_1803fa6d0 = 0x10000;
  _DAT_1803fa6d4 = 0x20000;
  _DAT_1803fa6d8 = 0x40000;
  _DAT_1803fa6dc = 0x80000;
  _DAT_1803fa6e0 = 0x100000;
  _DAT_1803fa6e4 = 0x200000;
  _DAT_1803fa6e8 = 0x400000;
  _DAT_1803fa6ec = 0x800000;
  _DAT_1803fa6f0 = 0x1000000;
  _DAT_1803fa6f4 = 0x2000000;
  _DAT_1803fa6f8 = 0x4000000;
  _DAT_1803fa6fc = 0x8000000;
  _DAT_1803fa700 = 0x10000000;
  _DAT_1803fa704 = 0x20000000;
  _DAT_1803fa708 = 0x40000000;
  _DAT_1803fa70c = 0x80000000;
  return;
}


)B180001020",
    "dd1c26320ec0425d8e6f21db6fe446816134a57444c72266a47f3af491369a8b",
    R"F180001020C()F180001020C",
    R"F180001020D(DAT_18033d650
DAT_1803f92a0
DAT_1803fa714
DAT_1803fa71c
DAT_1803fa730
DAT_1803fa74c
DAT_1803fa790)F180001020D",
    R"F180001020T()F180001020T",
    R"F180001020F(23: do {
29: do {
32: if (iVar1 + uVar3 < 0x20) {
36: if (uVar6 + iVar1 < 0x20) {
42: if (uVar4 < 0x20) {
47: if (uVar4 < 0x20) {
52: if (uVar4 < 0x20) {
57: if (uVar4 < 0x20) {
62: if (uVar4 < 0x20) {
67: if (uVar4 < 0x20) {
72: if (uVar4 < 0x20) {
77: if (uVar4 < 0x20) {
82: if (uVar4 < 0x20) {
155: return;)F180001020F",
    R"F180001020U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033d650.
TODO: recover the declaration, type and value for global/data reference DAT_1803f92a0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa714.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa71c.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa730.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa74c.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa790.)F180001020U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001020() noexcept {
    return kFunction_0x180001020;
}

// 0x1800015d0 FUN_1800015d0
// source: re/dump/decompile/0x1800015d0_FUN_1800015d0.c
// size: 986 bytes; thunk: false
// body sha256: 0a72f25cb61a6d07566cf22023f6cd6b466cadbfc95c18c810f4554089be5e68
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800015d0{
    "0x1800015d0",
    "FUN_1800015d0",
    R"F1800015d0S(undefined FUN_1800015d0())F1800015d0S",
    R"B1800015d0(// 0x1800015d0  FUN_1800015d0
// size=986 thunk=false
// signature: undefined FUN_1800015d0()
// callers:
// status: ok


void FUN_1800015d0(void)

{
  undefined *_Str;
  undefined *_Str_00;
  undefined *_Str_01;
  undefined *_Str_02;
  undefined *_Str_03;
  undefined *_Str_04;
  undefined *puVar1;
  int iVar2;
  ulonglong uVar3;
  size_t sVar4;
  
  _Str = PTR_DAT_1803daa18;
  uVar3 = (ulonglong)DAT_1803daa10;
  DAT_1803db674 = DAT_1803daa10;
  *(undefined **)(uVar3 * 0x10 + 0x1803db780) = PTR_DAT_1803daa18;
  sVar4 = strlen(_Str);
  iVar2 = (int)sVar4;
  *(int *)(uVar3 * 0x10 + 0x1803db778) = iVar2;
  _Str_00 = PTR_DAT_1803daa28;
  if (DAT_1803db670 < iVar2) {
    DAT_1803db670 = iVar2;
  }
  uVar3 = (ulonglong)DAT_1803daa20;
  DAT_1803db675 = DAT_1803daa20;
  *(undefined **)(uVar3 * 0x10 + 0x1803db780) = PTR_DAT_1803daa28;
  sVar4 = strlen(_Str_00);
  iVar2 = (int)sVar4;
  *(int *)(uVar3 * 0x10 + 0x1803db778) = iVar2;
  _Str_01 = PTR_DAT_1803daa38;
  if (DAT_1803db670 < iVar2) {
    DAT_1803db670 = iVar2;
  }
  uVar3 = (ulonglong)DAT_1803daa30;
  DAT_1803db676 = DAT_1803daa30;
  *(undefined **)(uVar3 * 0x10 + 0x1803db780) = PTR_DAT_1803daa38;
  sVar4 = strlen(_Str_01);
  iVar2 = (int)sVar4;
  *(int *)(uVar3 * 0x10 + 0x1803db778) = iVar2;
  _Str_02 = PTR_DAT_1803daa48;
  if (DAT_1803db670 < iVar2) {
    DAT_1803db670 = iVar2;
  }
  uVar3 = (ulonglong)DAT_1803daa40;
  DAT_1803db677 = DAT_1803daa40;
  *(undefined **)(uVar3 * 0x10 + 0x1803db780) = PTR_DAT_1803daa48;
  sVar4 = strlen(_Str_02);
  iVar2 = (int)sVar4;
  *(int *)(uVar3 * 0x10 + 0x1803db778) = iVar2;
  _Str_03 = PTR_DAT_1803daa58;
  if (DAT_1803db670 < iVar2) {
    DAT_1803db670 = iVar2;
  }
  uVar3 = (ulonglong)DAT_1803daa50;
  DAT_1803db678 = DAT_1803daa50;
  *(undefined **)(uVar3 * 0x10 + 0x1803db780) = PTR_DAT_1803daa58;
  sVar4 = strlen(_Str_03);
  iVar2 = (int)sVar4;
  *(int *)(uVar3 * 0x10 + 0x1803db778) = iVar2;
  _Str_04 = PTR_DAT_1803daa68;
  if (DAT_1803db670 < iVar2) {
    DAT_1803db670 = iVar2;
  }
  uVar3 = (ulonglong)DAT_1803daa60;
  DAT_1803db679 = DAT_1803daa60;
  *(undefined **)(uVar3 * 0x10 + 0x1803db780) = PTR_DAT_1803daa68;
  sVar4 = strlen(_Str_04);
  iVar2 = (int)sVar4;
  *(int *)(uVar3 * 0x10 + 0x1803db778) = iVar2;
  puVar1 = PTR_DAT_1803daa78;
  if (DAT_1803db670 < iVar2) {
    DAT_1803db670 = iVar2;
  }
  uVar3 = (ulonglong)DAT_1803daa70;
  DAT_1803db67a = DAT_1803daa70;
  *(undefined **)(uVar3 * 0x10 + 0x1803db780) = PTR_DAT_1803daa78;
  sVar4 = strlen(puVar1);
  iVar2 = (int)sVar4;
  *(int *)(uVar3 * 0x10 + 0x1803db778) = iVar2;
  puVar1 = PTR_DAT_1803daa88;
  if (DAT_1803db670 < iVar2) {
    DAT_1803db670 = iVar2;
  }
  uVar3 = (ulonglong)DAT_1803daa80;
  DAT_1803db67b = DAT_1803daa80;
  *(undefined **)(uVar3 * 0x10 + 0x1803db780) = PTR_DAT_1803daa88;
  sVar4 = strlen(puVar1);
  iVar2 = (int)sVar4;
  *(int *)(uVar3 * 0x10 + 0x1803db778) = iVar2;
  puVar1 = PTR_DAT_1803daa98;
  if (DAT_1803db670 < iVar2) {
    DAT_1803db670 = iVar2;
  }
  uVar3 = (ulonglong)DAT_1803daa90;
  DAT_1803db67c = DAT_1803daa90;
  *(undefined **)(uVar3 * 0x10 + 0x1803db780) = PTR_DAT_1803daa98;
  sVar4 = strlen(puVar1);
  iVar2 = (int)sVar4;
  *(int *)(uVar3 * 0x10 + 0x1803db778) = iVar2;
  puVar1 = PTR_DAT_1803daaa8;
  if (DAT_1803db670 < iVar2) {
    DAT_1803db670 = iVar2;
  }
  uVar3 = (ulonglong)DAT_1803daaa0;
  DAT_1803db67d = DAT_1803daaa0;
  *(undefined **)(uVar3 * 0x10 + 0x1803db780) = PTR_DAT_1803daaa8;
  sVar4 = strlen(puVar1);
  iVar2 = (int)sVar4;
  *(int *)(uVar3 * 0x10 + 0x1803db778) = iVar2;
  puVar1 = PTR_DAT_1803daab8;
  if (DAT_1803db670 < iVar2) {
    DAT_1803db670 = iVar2;
  }
  uVar3 = (ulonglong)DAT_1803daab0;
  DAT_1803db67e = DAT_1803daab0;
  *(undefined **)(uVar3 * 0x10 + 0x1803db780) = PTR_DAT_1803daab8;
  sVar4 = strlen(puVar1);
  iVar2 = (int)sVar4;
  *(int *)(uVar3 * 0x10 + 0x1803db778) = iVar2;
  if (DAT_1803db670 < iVar2) {
    DAT_1803db670 = iVar2;
  }
  PTR_vftable_CUtlCharConversion_1803db650 = (undefined *)vftable_CUtlCStringConversion;
  memset(&DAT_1803dc778,0,0x100);
  (&DAT_1803dc778)[(byte)*_Str] = DAT_1803daa10;
  (&DAT_1803dc778)[(byte)*_Str_00] = DAT_1803daa20;
  (&DAT_1803dc778)[(byte)*_Str_01] = DAT_1803daa30;
  (&DAT_1803dc778)[(byte)*_Str_02] = DAT_1803daa40;
  (&DAT_1803dc778)[(byte)*_Str_03] = DAT_1803daa50;
  (&DAT_1803dc778)[(byte)*_Str_04] = DAT_1803daa60;
  (&DAT_1803dc778)[(byte)*PTR_DAT_1803daa78] = DAT_1803daa70;
  (&DAT_1803dc778)[(byte)*PTR_DAT_1803daa88] = DAT_1803daa80;
  (&DAT_1803dc778)[(byte)*PTR_DAT_1803daa98] = DAT_1803daa90;
  (&DAT_1803dc778)[(byte)*PTR_DAT_1803daaa8] = DAT_1803daaa0;
  (&DAT_1803dc778)[(byte)*puVar1] = DAT_1803daab0;
  return;
}


)B1800015d0",
    "0a72f25cb61a6d07566cf22023f6cd6b466cadbfc95c18c810f4554089be5e68",
    R"F1800015d0C()F1800015d0C",
    R"F1800015d0D(DAT_1803daa10
DAT_1803daa20
DAT_1803daa30
DAT_1803daa40
DAT_1803daa50
DAT_1803daa60
DAT_1803daa70
DAT_1803daa80
DAT_1803daa90
DAT_1803daaa0
DAT_1803daab0
DAT_1803db670
DAT_1803db674
DAT_1803db675
DAT_1803db676
DAT_1803db677
DAT_1803db678
DAT_1803db679
DAT_1803db67a
DAT_1803db67b
DAT_1803db67c
DAT_1803db67d
DAT_1803db67e
DAT_1803dc778)F1800015d0D",
    R"F1800015d0T()F1800015d0T",
    R"F1800015d0F(30: if (DAT_1803db670 < iVar2) {
40: if (DAT_1803db670 < iVar2) {
50: if (DAT_1803db670 < iVar2) {
60: if (DAT_1803db670 < iVar2) {
70: if (DAT_1803db670 < iVar2) {
80: if (DAT_1803db670 < iVar2) {
90: if (DAT_1803db670 < iVar2) {
100: if (DAT_1803db670 < iVar2) {
110: if (DAT_1803db670 < iVar2) {
120: if (DAT_1803db670 < iVar2) {
129: if (DAT_1803db670 < iVar2) {
145: return;)F1800015d0F",
    R"F1800015d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803daa10.
TODO: recover the declaration, type and value for global/data reference DAT_1803daa20.
TODO: recover the declaration, type and value for global/data reference DAT_1803daa30.
TODO: recover the declaration, type and value for global/data reference DAT_1803daa40.
TODO: recover the declaration, type and value for global/data reference DAT_1803daa50.
TODO: recover the declaration, type and value for global/data reference DAT_1803daa60.
TODO: recover the declaration, type and value for global/data reference DAT_1803daa70.
TODO: recover the declaration, type and value for global/data reference DAT_1803daa80.
TODO: recover the declaration, type and value for global/data reference DAT_1803daa90.
TODO: recover the declaration, type and value for global/data reference DAT_1803daaa0.
TODO: recover the declaration, type and value for global/data reference DAT_1803daab0.
TODO: recover the declaration, type and value for global/data reference DAT_1803db670.
TODO: recover the declaration, type and value for global/data reference DAT_1803db674.
TODO: recover the declaration, type and value for global/data reference DAT_1803db675.
TODO: recover the declaration, type and value for global/data reference DAT_1803db676.
TODO: recover the declaration, type and value for global/data reference DAT_1803db677.
TODO: recover the declaration, type and value for global/data reference DAT_1803db678.
TODO: recover the declaration, type and value for global/data reference DAT_1803db679.
TODO: recover the declaration, type and value for global/data reference DAT_1803db67a.
TODO: recover the declaration, type and value for global/data reference DAT_1803db67b.
TODO: recover the declaration, type and value for global/data reference DAT_1803db67c.
TODO: recover the declaration, type and value for global/data reference DAT_1803db67d.
TODO: recover the declaration, type and value for global/data reference DAT_1803db67e.
TODO: recover the declaration, type and value for global/data reference DAT_1803dc778.)F1800015d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800015d0() noexcept {
    return kFunction_0x1800015d0;
}

// 0x1800019b0 FUN_1800019b0
// source: re/dump/decompile/0x1800019b0_FUN_1800019b0.c
// size: 85 bytes; thunk: false
// body sha256: 048026db656ef922474498201d81d4433c8e4b2cb3f2bcdb9a2cfeeacf492113
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800019b0{
    "0x1800019b0",
    "FUN_1800019b0",
    R"F1800019b0S(undefined FUN_1800019b0())F1800019b0S",
    R"B1800019b0(// 0x1800019b0  FUN_1800019b0
// size=85 thunk=false
// signature: undefined FUN_1800019b0()
// callers:
// status: ok


void FUN_1800019b0(void)

{
  undefined *_Str;
  int iVar1;
  ulonglong uVar2;
  size_t sVar3;
  
  _Str = PTR_DAT_1803dde90;
  uVar2 = (ulonglong)DAT_1803dde88;
  DAT_1803dcd84 = DAT_1803dde88;
  *(undefined **)(uVar2 * 0x10 + 0x1803dce90) = PTR_DAT_1803dde90;
  sVar3 = strlen(_Str);
  iVar1 = (int)sVar3;
  *(int *)(&DAT_1803dce88 + uVar2 * 0x10) = iVar1;
  if (DAT_1803dcd80 < iVar1) {
    DAT_1803dcd80 = iVar1;
  }
  PTR_vftable_CUtlCharConversion_1803dcd60 = (undefined *)vftable_CUtlNoEscConversion;
  return;
}


)B1800019b0",
    "048026db656ef922474498201d81d4433c8e4b2cb3f2bcdb9a2cfeeacf492113",
    R"F1800019b0C()F1800019b0C",
    R"F1800019b0D(DAT_1803dcd80
DAT_1803dcd84
DAT_1803dce88
DAT_1803dde88)F1800019b0D",
    R"F1800019b0T()F1800019b0T",
    R"F1800019b0F(23: if (DAT_1803dcd80 < iVar1) {
27: return;)F1800019b0F",
    R"F1800019b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803dcd80.
TODO: recover the declaration, type and value for global/data reference DAT_1803dcd84.
TODO: recover the declaration, type and value for global/data reference DAT_1803dce88.
TODO: recover the declaration, type and value for global/data reference DAT_1803dde88.)F1800019b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800019b0() noexcept {
    return kFunction_0x1800019b0;
}

// 0x180001a20 FUN_180001a20
// source: re/dump/decompile/0x180001a20_FUN_180001a20.c
// size: 54 bytes; thunk: false
// body sha256: 22349278e094a8858de8c4546ac83217cde1d8c4fcceb0a7503e72489b50270d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001a20{
    "0x180001a20",
    "FUN_180001a20",
    R"F180001a20S(undefined FUN_180001a20())F180001a20S",
    R"B180001a20(// 0x180001a20  FUN_180001a20
// size=54 thunk=false
// signature: undefined FUN_180001a20()
// callers:
// status: ok


void FUN_180001a20(void)

{
  DAT_1805ba360 = FUN_1802d8350(0x148);
  *(longlong *)DAT_1805ba360 = DAT_1805ba360;
  *(longlong *)(DAT_1805ba360 + 8) = DAT_1805ba360;
  *(longlong *)(DAT_1805ba360 + 0x10) = DAT_1805ba360;
  *(undefined2 *)(DAT_1805ba360 + 0x18) = 0x101;
  atexit(FUN_1803089c0);
  return;
}


)B180001a20",
    "22349278e094a8858de8c4546ac83217cde1d8c4fcceb0a7503e72489b50270d",
    R"F180001a20C(FUN_1802d8350
FUN_1803089c0)F180001a20C",
    R"F180001a20D(DAT_1805ba360)F180001a20D",
    R"F180001a20T()F180001a20T",
    R"F180001a20F(17: return;)F180001a20F",
    R"F180001a20U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805ba360.)F180001a20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001a20() noexcept {
    return kFunction_0x180001a20;
}

// 0x180001a70 FUN_180001a70
// source: re/dump/decompile/0x180001a70_FUN_180001a70.c
// size: 54 bytes; thunk: false
// body sha256: d612bf006b77a66d459741c33447e98f9551c6b311d1f50995f009bb9f19bab1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001a70{
    "0x180001a70",
    "FUN_180001a70",
    R"F180001a70S(undefined FUN_180001a70())F180001a70S",
    R"B180001a70(// 0x180001a70  FUN_180001a70
// size=54 thunk=false
// signature: undefined FUN_180001a70()
// callers:
// status: ok


void FUN_180001a70(void)

{
  DAT_1803fa7f0 = FUN_1802d8350(0x30);
  *(longlong *)DAT_1803fa7f0 = DAT_1803fa7f0;
  *(longlong *)(DAT_1803fa7f0 + 8) = DAT_1803fa7f0;
  *(longlong *)(DAT_1803fa7f0 + 0x10) = DAT_1803fa7f0;
  *(undefined2 *)(DAT_1803fa7f0 + 0x18) = 0x101;
  atexit(FUN_180308b80);
  return;
}


)B180001a70",
    "d612bf006b77a66d459741c33447e98f9551c6b311d1f50995f009bb9f19bab1",
    R"F180001a70C(FUN_1802d8350
FUN_180308b80)F180001a70C",
    R"F180001a70D(DAT_1803fa7f0)F180001a70D",
    R"F180001a70T()F180001a70T",
    R"F180001a70F(17: return;)F180001a70F",
    R"F180001a70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa7f0.)F180001a70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001a70() noexcept {
    return kFunction_0x180001a70;
}

// 0x180001ab0 FUN_180001ab0
// source: re/dump/decompile/0x180001ab0_FUN_180001ab0.c
// size: 54 bytes; thunk: false
// body sha256: 11bcfc9b7cf0829571f4be49cf089b1ee32f1b47a9b00f0aa86dd768d4a77376
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001ab0{
    "0x180001ab0",
    "FUN_180001ab0",
    R"F180001ab0S(undefined FUN_180001ab0())F180001ab0S",
    R"B180001ab0(// 0x180001ab0  FUN_180001ab0
// size=54 thunk=false
// signature: undefined FUN_180001ab0()
// callers:
// status: ok


void FUN_180001ab0(void)

{
  DAT_1803fac68 = FUN_1802d8350(0x30);
  *(longlong *)DAT_1803fac68 = DAT_1803fac68;
  *(longlong *)(DAT_1803fac68 + 8) = DAT_1803fac68;
  *(longlong *)(DAT_1803fac68 + 0x10) = DAT_1803fac68;
  *(undefined2 *)(DAT_1803fac68 + 0x18) = 0x101;
  atexit(FUN_180308b90);
  return;
}


)B180001ab0",
    "11bcfc9b7cf0829571f4be49cf089b1ee32f1b47a9b00f0aa86dd768d4a77376",
    R"F180001ab0C(FUN_1802d8350
FUN_180308b90)F180001ab0C",
    R"F180001ab0D(DAT_1803fac68)F180001ab0D",
    R"F180001ab0T()F180001ab0T",
    R"F180001ab0F(17: return;)F180001ab0F",
    R"F180001ab0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac68.)F180001ab0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001ab0() noexcept {
    return kFunction_0x180001ab0;
}

// 0x180001bb0 FUN_180001bb0
// source: re/dump/decompile/0x180001bb0_FUN_180001bb0.c
// size: 216 bytes; thunk: false
// body sha256: e405e63012a65a574f3cdf2d7e6319b935b8be38b07126229e23bc241d7741e8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001bb0{
    "0x180001bb0",
    "FUN_180001bb0",
    R"F180001bb0S(undefined FUN_180001bb0())F180001bb0S",
    R"B180001bb0(// 0x180001bb0  FUN_180001bb0
// size=216 thunk=false
// signature: undefined FUN_180001bb0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001bb0(void)

{
  uRam00000001803fab68 = 0;
  DAT_1803fab70 = _DAT_1803814b0;
  DAT_1803fab78 = _UNK_1803814b8;
  DAT_1803fab60 = 0;
  DAT_1803fab80 = 0;
  DAT_1803fab88 = 0;
  DAT_1803fab8c = 1;
  uRam00000001803fab98 = 0;
  _DAT_1803faba0 = _DAT_1803814b0;
  uRam00000001803faba8 = _UNK_1803814b8;
  _DAT_1803fab90 = 0;
  DAT_1803fabb0 = 0;
  _DAT_1803fabb8 = 0;
  _DAT_1803fabc0 = 0;
  uRam00000001803fabc8 = 0;
  DAT_1803fabd0 = 0;
  FUN_18020cbc0(&DAT_1803fabd8);
  DAT_1803fac18 = 0;
  DAT_1803fac20 = 0;
  DAT_1803fac28 = 0;
  DAT_1803fac30 = 0;
  _DAT_1803fac38 = 0;
  atexit(FUN_180308f10);
  return;
}


)B180001bb0",
    "e405e63012a65a574f3cdf2d7e6319b935b8be38b07126229e23bc241d7741e8",
    R"F180001bb0C(FUN_18020cbc0
FUN_180308f10)F180001bb0C",
    R"F180001bb0D(DAT_1803fab60
DAT_1803fab70
DAT_1803fab78
DAT_1803fab80
DAT_1803fab88
DAT_1803fab8c
DAT_1803fabb0
DAT_1803fabd0
DAT_1803fabd8
DAT_1803fac18
DAT_1803fac20
DAT_1803fac28
DAT_1803fac30)F180001bb0D",
    R"F180001bb0T()F180001bb0T",
    R"F180001bb0F(36: return;)F180001bb0F",
    R"F180001bb0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fab60.
TODO: recover the declaration, type and value for global/data reference DAT_1803fab70.
TODO: recover the declaration, type and value for global/data reference DAT_1803fab78.
TODO: recover the declaration, type and value for global/data reference DAT_1803fab80.
TODO: recover the declaration, type and value for global/data reference DAT_1803fab88.
TODO: recover the declaration, type and value for global/data reference DAT_1803fab8c.
TODO: recover the declaration, type and value for global/data reference DAT_1803fabb0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fabd0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fabd8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac18.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac20.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac28.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac30.)F180001bb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001bb0() noexcept {
    return kFunction_0x180001bb0;
}

// 0x180001ca0 FUN_180001ca0
// source: re/dump/decompile/0x180001ca0_FUN_180001ca0.c
// size: 54 bytes; thunk: false
// body sha256: e11fc9a8349b8137a3bb1e9429a23f001a62a2d479345ec54f690b43252cd080
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001ca0{
    "0x180001ca0",
    "FUN_180001ca0",
    R"F180001ca0S(undefined FUN_180001ca0())F180001ca0S",
    R"B180001ca0(// 0x180001ca0  FUN_180001ca0
// size=54 thunk=false
// signature: undefined FUN_180001ca0()
// callers:
// status: ok


void FUN_180001ca0(void)

{
  DAT_1805c7c10 = FUN_1802d8350(0x58);
  *(longlong *)DAT_1805c7c10 = DAT_1805c7c10;
  *(longlong *)(DAT_1805c7c10 + 8) = DAT_1805c7c10;
  *(longlong *)(DAT_1805c7c10 + 0x10) = DAT_1805c7c10;
  *(undefined2 *)(DAT_1805c7c10 + 0x18) = 0x101;
  atexit(FUN_180309040);
  return;
}


)B180001ca0",
    "e11fc9a8349b8137a3bb1e9429a23f001a62a2d479345ec54f690b43252cd080",
    R"F180001ca0C(FUN_1802d8350
FUN_180309040)F180001ca0C",
    R"F180001ca0D(DAT_1805c7c10)F180001ca0D",
    R"F180001ca0T()F180001ca0T",
    R"F180001ca0F(17: return;)F180001ca0F",
    R"F180001ca0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7c10.)F180001ca0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001ca0() noexcept {
    return kFunction_0x180001ca0;
}

// 0x180001d00 FUN_180001d00
// source: re/dump/decompile/0x180001d00_FUN_180001d00.c
// size: 54 bytes; thunk: false
// body sha256: 49e0da24beeb2d0713780000cbea870dd61c5ba1458b98abc5a8ec6f209dae20
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001d00{
    "0x180001d00",
    "FUN_180001d00",
    R"F180001d00S(undefined FUN_180001d00())F180001d00S",
    R"B180001d00(// 0x180001d00  FUN_180001d00
// size=54 thunk=false
// signature: undefined FUN_180001d00()
// callers:
// status: ok


void FUN_180001d00(void)

{
  DAT_1805b88a8 = FUN_1802d8350(0x48);
  *(longlong *)DAT_1805b88a8 = DAT_1805b88a8;
  *(longlong *)(DAT_1805b88a8 + 8) = DAT_1805b88a8;
  *(longlong *)(DAT_1805b88a8 + 0x10) = DAT_1805b88a8;
  *(undefined2 *)(DAT_1805b88a8 + 0x18) = 0x101;
  atexit(FUN_180309130);
  return;
}


)B180001d00",
    "49e0da24beeb2d0713780000cbea870dd61c5ba1458b98abc5a8ec6f209dae20",
    R"F180001d00C(FUN_1802d8350
FUN_180309130)F180001d00C",
    R"F180001d00D(DAT_1805b88a8)F180001d00D",
    R"F180001d00T()F180001d00T",
    R"F180001d00F(17: return;)F180001d00F",
    R"F180001d00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88a8.)F180001d00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001d00() noexcept {
    return kFunction_0x180001d00;
}

// 0x180001d50 FUN_180001d50
// source: re/dump/decompile/0x180001d50_FUN_180001d50.c
// size: 12 bytes; thunk: false
// body sha256: 37ae250760ec539fd7351fd7bfcb3b984259cc53ea75656e4a8bdf6ff540758f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001d50{
    "0x180001d50",
    "FUN_180001d50",
    R"F180001d50S(undefined FUN_180001d50())F180001d50S",
    R"B180001d50(// 0x180001d50  FUN_180001d50
// size=12 thunk=false
// signature: undefined FUN_180001d50()
// callers:
// status: ok


void FUN_180001d50(void)

{
  atexit(FUN_1803091c0);
  return;
}


)B180001d50",
    "37ae250760ec539fd7351fd7bfcb3b984259cc53ea75656e4a8bdf6ff540758f",
    R"F180001d50C(FUN_1803091c0)F180001d50C",
    R"F180001d50D()F180001d50D",
    R"F180001d50T()F180001d50T",
    R"F180001d50F(12: return;)F180001d50F",
    R"F180001d50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180001d50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001d50() noexcept {
    return kFunction_0x180001d50;
}

// 0x180001d70 FUN_180001d70
// source: re/dump/decompile/0x180001d70_FUN_180001d70.c
// size: 54 bytes; thunk: false
// body sha256: 3010d0668f378ae69c5c907d780546e9999c4b320ef084fa7963830abe2961c7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001d70{
    "0x180001d70",
    "FUN_180001d70",
    R"F180001d70S(undefined FUN_180001d70())F180001d70S",
    R"B180001d70(// 0x180001d70  FUN_180001d70
// size=54 thunk=false
// signature: undefined FUN_180001d70()
// callers:
// status: ok


void FUN_180001d70(void)

{
  DAT_1805b8898 = FUN_1802d8350(0x40);
  *(longlong *)DAT_1805b8898 = DAT_1805b8898;
  *(longlong *)(DAT_1805b8898 + 8) = DAT_1805b8898;
  *(longlong *)(DAT_1805b8898 + 0x10) = DAT_1805b8898;
  *(undefined2 *)(DAT_1805b8898 + 0x18) = 0x101;
  atexit(FUN_1803092d0);
  return;
}


)B180001d70",
    "3010d0668f378ae69c5c907d780546e9999c4b320ef084fa7963830abe2961c7",
    R"F180001d70C(FUN_1802d8350
FUN_1803092d0)F180001d70C",
    R"F180001d70D(DAT_1805b8898)F180001d70D",
    R"F180001d70T()F180001d70T",
    R"F180001d70F(17: return;)F180001d70F",
    R"F180001d70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8898.)F180001d70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001d70() noexcept {
    return kFunction_0x180001d70;
}

// 0x180001db0 FUN_180001db0
// source: re/dump/decompile/0x180001db0_FUN_180001db0.c
// size: 62 bytes; thunk: false
// body sha256: eaf6b2339163863cd361a22422ce5123c1d70c266d1d49c1084306694328e984
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001db0{
    "0x180001db0",
    "FUN_180001db0",
    R"F180001db0S(undefined FUN_180001db0())F180001db0S",
    R"B180001db0(// 0x180001db0  FUN_180001db0
// size=62 thunk=false
// signature: undefined FUN_180001db0()
// callers:
// status: ok


void FUN_180001db0(void)

{
  _eh_vector_constructor_iterator_(&DAT_1805b88e0,0x68,0x40,FUN_18005df70,FUN_18005dfd0);
  atexit((_func_5014 *)&LAB_1803092e0);
  return;
}


)B180001db0",
    "eaf6b2339163863cd361a22422ce5123c1d70c266d1d49c1084306694328e984",
    R"F180001db0C(FUN_18005df70
FUN_18005dfd0)F180001db0C",
    R"F180001db0D(LAB_1803092e0
DAT_1805b88e0)F180001db0D",
    R"F180001db0T()F180001db0T",
    R"F180001db0F(13: return;)F180001db0F",
    R"F180001db0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1803092e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.)F180001db0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001db0() noexcept {
    return kFunction_0x180001db0;
}

// 0x180001e10 FUN_180001e10
// source: re/dump/decompile/0x180001e10_FUN_180001e10.c
// size: 55 bytes; thunk: false
// body sha256: 5659667d10066da82612290eb362b49ddb802189f785309ee90e4e483059be90
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001e10{
    "0x180001e10",
    "FUN_180001e10",
    R"F180001e10S(undefined FUN_180001e10())F180001e10S",
    R"B180001e10(// 0x180001e10  FUN_180001e10
// size=55 thunk=false
// signature: undefined FUN_180001e10()
// callers:
// status: ok


void FUN_180001e10(void)

{
  DAT_18042cd10 = (undefined8 *)FUN_1802d8350(0x10);
  DAT_18042cd10[1] = 0;
  *DAT_18042cd10 = &DAT_18042cd10;
  atexit(FUN_1803093c0);
  return;
}


)B180001e10",
    "5659667d10066da82612290eb362b49ddb802189f785309ee90e4e483059be90",
    R"F180001e10C(FUN_1802d8350
FUN_1803093c0)F180001e10C",
    R"F180001e10D(DAT_18042cd10)F180001e10D",
    R"F180001e10T()F180001e10T",
    R"F180001e10F(15: return;)F180001e10F",
    R"F180001e10U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18042cd10.)F180001e10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001e10() noexcept {
    return kFunction_0x180001e10;
}

// 0x180001e50 FUN_180001e50
// source: re/dump/decompile/0x180001e50_FUN_180001e50.c
// size: 55 bytes; thunk: false
// body sha256: 3ebff000f46c44ca304e64615729692d4bc3126e876b092d30457d03e2c54f44
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001e50{
    "0x180001e50",
    "FUN_180001e50",
    R"F180001e50S(undefined FUN_180001e50())F180001e50S",
    R"B180001e50(// 0x180001e50  FUN_180001e50
// size=55 thunk=false
// signature: undefined FUN_180001e50()
// callers:
// status: ok


void FUN_180001e50(void)

{
  DAT_1805c7aa8 = (undefined8 *)FUN_1802d8350(0x10);
  DAT_1805c7aa8[1] = 0;
  *DAT_1805c7aa8 = &DAT_1805c7aa8;
  atexit(FUN_1803093f0);
  return;
}


)B180001e50",
    "3ebff000f46c44ca304e64615729692d4bc3126e876b092d30457d03e2c54f44",
    R"F180001e50C(FUN_1802d8350
FUN_1803093f0)F180001e50C",
    R"F180001e50D(DAT_1805c7aa8)F180001e50D",
    R"F180001e50T()F180001e50T",
    R"F180001e50F(15: return;)F180001e50F",
    R"F180001e50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7aa8.)F180001e50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001e50() noexcept {
    return kFunction_0x180001e50;
}

// 0x180001e90 FUN_180001e90
// source: re/dump/decompile/0x180001e90_FUN_180001e90.c
// size: 55 bytes; thunk: false
// body sha256: 49594d41762398bcddfc8ee626b88fccb874f5d946723094226ba2a695885eab
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001e90{
    "0x180001e90",
    "FUN_180001e90",
    R"F180001e90S(undefined FUN_180001e90())F180001e90S",
    R"B180001e90(// 0x180001e90  FUN_180001e90
// size=55 thunk=false
// signature: undefined FUN_180001e90()
// callers:
// status: ok


void FUN_180001e90(void)

{
  DAT_18042cd38 = (undefined8 *)FUN_1802d8350(0x10);
  DAT_18042cd38[1] = 0;
  *DAT_18042cd38 = &DAT_18042cd38;
  atexit(FUN_180309420);
  return;
}


)B180001e90",
    "49594d41762398bcddfc8ee626b88fccb874f5d946723094226ba2a695885eab",
    R"F180001e90C(FUN_1802d8350
FUN_180309420)F180001e90C",
    R"F180001e90D(DAT_18042cd38)F180001e90D",
    R"F180001e90T()F180001e90T",
    R"F180001e90F(15: return;)F180001e90F",
    R"F180001e90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18042cd38.)F180001e90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001e90() noexcept {
    return kFunction_0x180001e90;
}

// 0x180001ed0 FUN_180001ed0
// source: re/dump/decompile/0x180001ed0_FUN_180001ed0.c
// size: 55 bytes; thunk: false
// body sha256: 43145f5bd72bdf3b66f69e11af3604a23f515780721a86e2692f42d8810c5766
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001ed0{
    "0x180001ed0",
    "FUN_180001ed0",
    R"F180001ed0S(undefined FUN_180001ed0())F180001ed0S",
    R"B180001ed0(// 0x180001ed0  FUN_180001ed0
// size=55 thunk=false
// signature: undefined FUN_180001ed0()
// callers:
// status: ok


void FUN_180001ed0(void)

{
  DAT_1805c7c28 = (undefined8 *)FUN_1802d8350(0x10);
  DAT_1805c7c28[1] = 0;
  *DAT_1805c7c28 = &DAT_1805c7c28;
  atexit(FUN_180309450);
  return;
}


)B180001ed0",
    "43145f5bd72bdf3b66f69e11af3604a23f515780721a86e2692f42d8810c5766",
    R"F180001ed0C(FUN_1802d8350
FUN_180309450)F180001ed0C",
    R"F180001ed0D(DAT_1805c7c28)F180001ed0D",
    R"F180001ed0T()F180001ed0T",
    R"F180001ed0F(15: return;)F180001ed0F",
    R"F180001ed0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7c28.)F180001ed0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001ed0() noexcept {
    return kFunction_0x180001ed0;
}

// 0x180001f10 FUN_180001f10
// source: re/dump/decompile/0x180001f10_FUN_180001f10.c
// size: 54 bytes; thunk: false
// body sha256: 06cb50258296e2886ec459382013725e48425f99fbfcaf177dc14638d2f9762f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001f10{
    "0x180001f10",
    "FUN_180001f10",
    R"F180001f10S(undefined FUN_180001f10())F180001f10S",
    R"B180001f10(// 0x180001f10  FUN_180001f10
// size=54 thunk=false
// signature: undefined FUN_180001f10()
// callers:
// status: ok


void FUN_180001f10(void)

{
  DAT_1805c7c50 = FUN_1802d8350(0x78);
  *(longlong *)DAT_1805c7c50 = DAT_1805c7c50;
  *(longlong *)(DAT_1805c7c50 + 8) = DAT_1805c7c50;
  *(longlong *)(DAT_1805c7c50 + 0x10) = DAT_1805c7c50;
  *(undefined2 *)(DAT_1805c7c50 + 0x18) = 0x101;
  atexit(FUN_180309480);
  return;
}


)B180001f10",
    "06cb50258296e2886ec459382013725e48425f99fbfcaf177dc14638d2f9762f",
    R"F180001f10C(FUN_1802d8350
FUN_180309480)F180001f10C",
    R"F180001f10D(DAT_1805c7c50)F180001f10D",
    R"F180001f10T()F180001f10T",
    R"F180001f10F(17: return;)F180001f10F",
    R"F180001f10U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7c50.)F180001f10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001f10() noexcept {
    return kFunction_0x180001f10;
}

// 0x180001f70 FUN_180001f70
// source: re/dump/decompile/0x180001f70_FUN_180001f70.c
// size: 55 bytes; thunk: false
// body sha256: 86a36918af1cb55435986f2bb753524d6416af706b65164f90c42c71fd8effb8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001f70{
    "0x180001f70",
    "FUN_180001f70",
    R"F180001f70S(undefined FUN_180001f70())F180001f70S",
    R"B180001f70(// 0x180001f70  FUN_180001f70
// size=55 thunk=false
// signature: undefined FUN_180001f70()
// callers:
// status: ok


void FUN_180001f70(void)

{
  DAT_1805c3968 = (undefined8 *)FUN_1802d8350(0x10);
  DAT_1805c3968[1] = 0;
  *DAT_1805c3968 = &DAT_1805c3968;
  atexit(FUN_1803094d0);
  return;
}


)B180001f70",
    "86a36918af1cb55435986f2bb753524d6416af706b65164f90c42c71fd8effb8",
    R"F180001f70C(FUN_1802d8350
FUN_1803094d0)F180001f70C",
    R"F180001f70D(DAT_1805c3968)F180001f70D",
    R"F180001f70T()F180001f70T",
    R"F180001f70F(15: return;)F180001f70F",
    R"F180001f70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805c3968.)F180001f70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001f70() noexcept {
    return kFunction_0x180001f70;
}

// 0x180001fb0 FUN_180001fb0
// source: re/dump/decompile/0x180001fb0_FUN_180001fb0.c
// size: 55 bytes; thunk: false
// body sha256: 7aa3e7499ace086c4aef061108f55db8d6d9ceb723ed202409c1d609e02e84c8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180001fb0{
    "0x180001fb0",
    "FUN_180001fb0",
    R"F180001fb0S(undefined FUN_180001fb0())F180001fb0S",
    R"B180001fb0(// 0x180001fb0  FUN_180001fb0
// size=55 thunk=false
// signature: undefined FUN_180001fb0()
// callers:
// status: ok


void FUN_180001fb0(void)

{
  DAT_1805c3940 = (undefined8 *)FUN_1802d8350(0x10);
  DAT_1805c3940[1] = 0;
  *DAT_1805c3940 = &DAT_1805c3940;
  atexit(FUN_1803095f0);
  return;
}


)B180001fb0",
    "7aa3e7499ace086c4aef061108f55db8d6d9ceb723ed202409c1d609e02e84c8",
    R"F180001fb0C(FUN_1802d8350
FUN_1803095f0)F180001fb0C",
    R"F180001fb0D(DAT_1805c3940)F180001fb0D",
    R"F180001fb0T()F180001fb0T",
    R"F180001fb0F(15: return;)F180001fb0F",
    R"F180001fb0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805c3940.)F180001fb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180001fb0() noexcept {
    return kFunction_0x180001fb0;
}

// 0x180002050 FUN_180002050
// source: re/dump/decompile/0x180002050_FUN_180002050.c
// size: 54 bytes; thunk: false
// body sha256: 295153ad15dd7e8ace04adfc86941a0e4c69233cacb10f0fa22c444c7698dc43
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180002050{
    "0x180002050",
    "FUN_180002050",
    R"F180002050S(undefined FUN_180002050())F180002050S",
    R"B180002050(// 0x180002050  FUN_180002050
// size=54 thunk=false
// signature: undefined FUN_180002050()
// callers:
// status: ok


void FUN_180002050(void)

{
  DAT_1803fa8b0 = FUN_1802d8350(0x50);
  *(longlong *)DAT_1803fa8b0 = DAT_1803fa8b0;
  *(longlong *)(DAT_1803fa8b0 + 8) = DAT_1803fa8b0;
  *(longlong *)(DAT_1803fa8b0 + 0x10) = DAT_1803fa8b0;
  *(undefined2 *)(DAT_1803fa8b0 + 0x18) = 0x101;
  atexit(FUN_180309720);
  return;
}


)B180002050",
    "295153ad15dd7e8ace04adfc86941a0e4c69233cacb10f0fa22c444c7698dc43",
    R"F180002050C(FUN_1802d8350
FUN_180309720)F180002050C",
    R"F180002050D(DAT_1803fa8b0)F180002050D",
    R"F180002050T()F180002050T",
    R"F180002050F(17: return;)F180002050F",
    R"F180002050U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa8b0.)F180002050U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180002050() noexcept {
    return kFunction_0x180002050;
}

// 0x1800020f0 FUN_1800020f0
// source: re/dump/decompile/0x1800020f0_FUN_1800020f0.c
// size: 54 bytes; thunk: false
// body sha256: 21b60d906504f821ce0c6276cf3368c63e5c32d1e7ce6be9a21fcc39b0ee548b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800020f0{
    "0x1800020f0",
    "FUN_1800020f0",
    R"F1800020f0S(undefined FUN_1800020f0())F1800020f0S",
    R"B1800020f0(// 0x1800020f0  FUN_1800020f0
// size=54 thunk=false
// signature: undefined FUN_1800020f0()
// callers:
// status: ok


void FUN_1800020f0(void)

{
  DAT_1803fa8a0 = FUN_1802d8350(0x48);
  *(longlong *)DAT_1803fa8a0 = DAT_1803fa8a0;
  *(longlong *)(DAT_1803fa8a0 + 8) = DAT_1803fa8a0;
  *(longlong *)(DAT_1803fa8a0 + 0x10) = DAT_1803fa8a0;
  *(undefined2 *)(DAT_1803fa8a0 + 0x18) = 0x101;
  atexit(FUN_180309830);
  return;
}


)B1800020f0",
    "21b60d906504f821ce0c6276cf3368c63e5c32d1e7ce6be9a21fcc39b0ee548b",
    R"F1800020f0C(FUN_1802d8350
FUN_180309830)F1800020f0C",
    R"F1800020f0D(DAT_1803fa8a0)F1800020f0D",
    R"F1800020f0T()F1800020f0T",
    R"F1800020f0F(17: return;)F1800020f0F",
    R"F1800020f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa8a0.)F1800020f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800020f0() noexcept {
    return kFunction_0x1800020f0;
}

// 0x1800023e0 FUN_1800023e0
// source: re/dump/decompile/0x1800023e0_FUN_1800023e0.c
// size: 141 bytes; thunk: false
// body sha256: 0184ad8abe222674ecf7d232b2d973f99ab8f185f601655603dc66d6313265e3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800023e0{
    "0x1800023e0",
    "FUN_1800023e0",
    R"F1800023e0S(undefined FUN_1800023e0())F1800023e0S",
    R"B1800023e0(// 0x1800023e0  FUN_1800023e0
// size=141 thunk=false
// signature: undefined FUN_1800023e0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800023e0(void)

{
  DAT_1803fa7b0 = 0;
  DAT_1803fa7b8 = FUN_1802d8350(0x20);
  *(longlong *)DAT_1803fa7b8 = DAT_1803fa7b8;
  *(longlong *)(DAT_1803fa7b8 + 8) = DAT_1803fa7b8;
  DAT_1803fa7c8 = 0;
  _DAT_1803fa7d0 = 0;
  uRam00000001803fa7d8 = 0;
  DAT_1803fa7e0 = 7;
  DAT_1803fa7e8 = 8;
  DAT_1803fa7b0 = 0x3f800000;
  FUN_18022c1b0(&DAT_1803fa7c8,0x10,DAT_1803fa7b8);
  atexit(FUN_180309a10);
  return;
}


)B1800023e0",
    "0184ad8abe222674ecf7d232b2d973f99ab8f185f601655603dc66d6313265e3",
    R"F1800023e0C(FUN_18022c1b0
FUN_1802d8350
FUN_180309a10)F1800023e0C",
    R"F1800023e0D(DAT_1803fa7b0
DAT_1803fa7b8
DAT_1803fa7c8
DAT_1803fa7e0
DAT_1803fa7e8)F1800023e0D",
    R"F1800023e0T()F1800023e0T",
    R"F1800023e0F(25: return;)F1800023e0F",
    R"F1800023e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa7b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa7b8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa7c8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa7e0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa7e8.)F1800023e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800023e0() noexcept {
    return kFunction_0x1800023e0;
}

// 0x180002470 FUN_180002470
// source: re/dump/decompile/0x180002470_FUN_180002470.c
// size: 55 bytes; thunk: false
// body sha256: c317120fb52fcbae63a7376c4cfd9b7d11fe472ea15aae7e2e3d659f5883cafa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180002470{
    "0x180002470",
    "FUN_180002470",
    R"F180002470S(undefined FUN_180002470())F180002470S",
    R"B180002470(// 0x180002470  FUN_180002470
// size=55 thunk=false
// signature: undefined FUN_180002470()
// callers:
// status: ok


void FUN_180002470(void)

{
  DAT_1803fac40 = (undefined8 *)FUN_1802d8350(0x10);
  DAT_1803fac40[1] = 0;
  *DAT_1803fac40 = &DAT_1803fac40;
  atexit(FUN_180309a40);
  return;
}


)B180002470",
    "c317120fb52fcbae63a7376c4cfd9b7d11fe472ea15aae7e2e3d659f5883cafa",
    R"F180002470C(FUN_1802d8350
FUN_180309a40)F180002470C",
    R"F180002470D(DAT_1803fac40)F180002470D",
    R"F180002470T()F180002470T",
    R"F180002470F(15: return;)F180002470F",
    R"F180002470U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac40.)F180002470U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180002470() noexcept {
    return kFunction_0x180002470;
}

// 0x180002740 FUN_180002740
// source: re/dump/decompile/0x180002740_FUN_180002740.c
// size: 141 bytes; thunk: false
// body sha256: a6cb5692680ee133ef91b4938fba2f21f3b0d8eecdf00ccf3f3a52558fde63e7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180002740{
    "0x180002740",
    "FUN_180002740",
    R"F180002740S(undefined FUN_180002740())F180002740S",
    R"B180002740(// 0x180002740  FUN_180002740
// size=141 thunk=false
// signature: undefined FUN_180002740()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002740(void)

{
  DAT_1805beeb0 = 0;
  DAT_1805beeb8 = FUN_1802d8350(0x18);
  *(longlong *)DAT_1805beeb8 = DAT_1805beeb8;
  *(longlong *)(DAT_1805beeb8 + 8) = DAT_1805beeb8;
  DAT_1805beec8 = 0;
  _DAT_1805beed0 = 0;
  uRam00000001805beed8 = 0;
  DAT_1805beee0 = 7;
  DAT_1805beee8 = 8;
  DAT_1805beeb0 = 0x3f800000;
  FUN_18022c1b0(&DAT_1805beec8,0x10,DAT_1805beeb8);
  atexit(FUN_180309dd0);
  return;
}


)B180002740",
    "a6cb5692680ee133ef91b4938fba2f21f3b0d8eecdf00ccf3f3a52558fde63e7",
    R"F180002740C(FUN_18022c1b0
FUN_1802d8350
FUN_180309dd0)F180002740C",
    R"F180002740D(DAT_1805beeb0
DAT_1805beeb8
DAT_1805beec8
DAT_1805beee0
DAT_1805beee8)F180002740D",
    R"F180002740T()F180002740T",
    R"F180002740F(25: return;)F180002740F",
    R"F180002740U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805beeb0.
TODO: recover the declaration, type and value for global/data reference DAT_1805beeb8.
TODO: recover the declaration, type and value for global/data reference DAT_1805beec8.
TODO: recover the declaration, type and value for global/data reference DAT_1805beee0.
TODO: recover the declaration, type and value for global/data reference DAT_1805beee8.)F180002740U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180002740() noexcept {
    return kFunction_0x180002740;
}

// 0x1800027d0 FUN_1800027d0
// source: re/dump/decompile/0x1800027d0_FUN_1800027d0.c
// size: 141 bytes; thunk: false
// body sha256: 117d1857d1db8d5647af0b37493be7f0eea9ab95a3ff114828dd2956d9411a31
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800027d0{
    "0x1800027d0",
    "FUN_1800027d0",
    R"F1800027d0S(undefined FUN_1800027d0())F1800027d0S",
    R"B1800027d0(// 0x1800027d0  FUN_1800027d0
// size=141 thunk=false
// signature: undefined FUN_1800027d0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800027d0(void)

{
  DAT_18056e740 = 0;
  DAT_18056e748 = FUN_1802d8350(0x38);
  *(longlong *)DAT_18056e748 = DAT_18056e748;
  *(longlong *)(DAT_18056e748 + 8) = DAT_18056e748;
  DAT_18056e758 = 0;
  _DAT_18056e760 = 0;
  uRam000000018056e768 = 0;
  DAT_18056e770 = 7;
  DAT_18056e778 = 8;
  DAT_18056e740 = 0x3f800000;
  FUN_18022be40(&DAT_18056e758,0x10,DAT_18056e748);
  atexit(FUN_180309e00);
  return;
}


)B1800027d0",
    "117d1857d1db8d5647af0b37493be7f0eea9ab95a3ff114828dd2956d9411a31",
    R"F1800027d0C(FUN_18022be40
FUN_1802d8350
FUN_180309e00)F1800027d0C",
    R"F1800027d0D(DAT_18056e740
DAT_18056e748
DAT_18056e758
DAT_18056e770
DAT_18056e778)F1800027d0D",
    R"F1800027d0T()F1800027d0T",
    R"F1800027d0F(25: return;)F1800027d0F",
    R"F1800027d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18056e740.
TODO: recover the declaration, type and value for global/data reference DAT_18056e748.
TODO: recover the declaration, type and value for global/data reference DAT_18056e758.
TODO: recover the declaration, type and value for global/data reference DAT_18056e770.
TODO: recover the declaration, type and value for global/data reference DAT_18056e778.)F1800027d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800027d0() noexcept {
    return kFunction_0x1800027d0;
}

// 0x180002860 FUN_180002860
// source: re/dump/decompile/0x180002860_FUN_180002860.c
// size: 141 bytes; thunk: false
// body sha256: d1a393199900a72cc20a4a2ada4e4646b931d94c055ea7b2aa80bf23f5d06b52
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180002860{
    "0x180002860",
    "FUN_180002860",
    R"F180002860S(undefined FUN_180002860())F180002860S",
    R"B180002860(// 0x180002860  FUN_180002860
// size=141 thunk=false
// signature: undefined FUN_180002860()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002860(void)

{
  _DAT_1804301a0 = 0;
  DAT_1804301a8 = FUN_1802d8350(0x30);
  *(longlong *)DAT_1804301a8 = DAT_1804301a8;
  *(longlong *)(DAT_1804301a8 + 8) = DAT_1804301a8;
  _DAT_1804301b8 = 0;
  _DAT_1804301c0 = 0;
  uRam00000001804301c8 = 0;
  _DAT_1804301d0 = 7;
  _DAT_1804301d8 = 8;
  _DAT_1804301a0 = 0x3f800000;
  FUN_18022be40(&DAT_1804301b8,0x10,DAT_1804301a8);
  atexit(FUN_180309e30);
  return;
}


)B180002860",
    "d1a393199900a72cc20a4a2ada4e4646b931d94c055ea7b2aa80bf23f5d06b52",
    R"F180002860C(FUN_18022be40
FUN_1802d8350
FUN_180309e30)F180002860C",
    R"F180002860D(DAT_1804301a8
DAT_1804301b8)F180002860D",
    R"F180002860T()F180002860T",
    R"F180002860F(25: return;)F180002860F",
    R"F180002860U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1804301a8.
TODO: recover the declaration, type and value for global/data reference DAT_1804301b8.)F180002860U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180002860() noexcept {
    return kFunction_0x180002860;
}

// 0x180002900 FUN_180002900
// source: re/dump/decompile/0x180002900_FUN_180002900.c
// size: 141 bytes; thunk: false
// body sha256: 792af4ec63b84ca749907124ca819e6c5eb639fee1d28574622cf84a121b8233
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180002900{
    "0x180002900",
    "FUN_180002900",
    R"F180002900S(undefined FUN_180002900())F180002900S",
    R"B180002900(// 0x180002900  FUN_180002900
// size=141 thunk=false
// signature: undefined FUN_180002900()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002900(void)

{
  DAT_1805c3990 = 0;
  DAT_1805c3998 = FUN_1802d8350(0xd8);
  *(longlong *)DAT_1805c3998 = DAT_1805c3998;
  *(longlong *)(DAT_1805c3998 + 8) = DAT_1805c3998;
  DAT_1805c39a8 = 0;
  _DAT_1805c39b0 = 0;
  uRam00000001805c39b8 = 0;
  DAT_1805c39c0 = 7;
  DAT_1805c39c8 = 8;
  DAT_1805c3990 = 0x3f800000;
  FUN_18022c1b0(&DAT_1805c39a8,0x10,DAT_1805c3998);
  atexit(FUN_180309f20);
  return;
}


)B180002900",
    "792af4ec63b84ca749907124ca819e6c5eb639fee1d28574622cf84a121b8233",
    R"F180002900C(FUN_18022c1b0
FUN_1802d8350
FUN_180309f20)F180002900C",
    R"F180002900D(DAT_1805c3990
DAT_1805c3998
DAT_1805c39a8
DAT_1805c39c0
DAT_1805c39c8)F180002900D",
    R"F180002900T()F180002900T",
    R"F180002900F(25: return;)F180002900F",
    R"F180002900U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805c3990.
TODO: recover the declaration, type and value for global/data reference DAT_1805c3998.
TODO: recover the declaration, type and value for global/data reference DAT_1805c39a8.
TODO: recover the declaration, type and value for global/data reference DAT_1805c39c0.
TODO: recover the declaration, type and value for global/data reference DAT_1805c39c8.)F180002900U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180002900() noexcept {
    return kFunction_0x180002900;
}

// 0x1800029a0 FUN_1800029a0
// source: re/dump/decompile/0x1800029a0_FUN_1800029a0.c
// size: 141 bytes; thunk: false
// body sha256: ded85f1b5f48f7f41f5701ab9ed8f775533c2e2e45dfe86c859abfafaff36ec9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800029a0{
    "0x1800029a0",
    "FUN_1800029a0",
    R"F1800029a0S(undefined FUN_1800029a0())F1800029a0S",
    R"B1800029a0(// 0x1800029a0  FUN_1800029a0
// size=141 thunk=false
// signature: undefined FUN_1800029a0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800029a0(void)

{
  DAT_1805c7b50 = 0;
  DAT_1805c7b58 = FUN_1802d8350(0x48);
  *(longlong *)DAT_1805c7b58 = DAT_1805c7b58;
  *(longlong *)(DAT_1805c7b58 + 8) = DAT_1805c7b58;
  DAT_1805c7b68 = 0;
  _DAT_1805c7b70 = 0;
  uRam00000001805c7b78 = 0;
  DAT_1805c7b80 = 7;
  DAT_1805c7b88 = 8;
  DAT_1805c7b50 = 0x3f800000;
  FUN_18022c1b0(&DAT_1805c7b68,0x10,DAT_1805c7b58);
  atexit(FUN_180309fe0);
  return;
}


)B1800029a0",
    "ded85f1b5f48f7f41f5701ab9ed8f775533c2e2e45dfe86c859abfafaff36ec9",
    R"F1800029a0C(FUN_18022c1b0
FUN_1802d8350
FUN_180309fe0)F1800029a0C",
    R"F1800029a0D(DAT_1805c7b50
DAT_1805c7b58
DAT_1805c7b68
DAT_1805c7b80
DAT_1805c7b88)F1800029a0D",
    R"F1800029a0T()F1800029a0T",
    R"F1800029a0F(25: return;)F1800029a0F",
    R"F1800029a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b50.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b58.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b68.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b80.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b88.)F1800029a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800029a0() noexcept {
    return kFunction_0x1800029a0;
}

// 0x180002a30 FUN_180002a30
// source: re/dump/decompile/0x180002a30_FUN_180002a30.c
// size: 141 bytes; thunk: false
// body sha256: 88ca534f86f340605b7e3613839e4236945a04a0220e0b72416cb265a4feac95
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180002a30{
    "0x180002a30",
    "FUN_180002a30",
    R"F180002a30S(undefined FUN_180002a30())F180002a30S",
    R"B180002a30(// 0x180002a30  FUN_180002a30
// size=141 thunk=false
// signature: undefined FUN_180002a30()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002a30(void)

{
  DAT_180458250 = 0;
  DAT_180458258 = FUN_1802d8350(0x20);
  *(longlong *)DAT_180458258 = DAT_180458258;
  *(longlong *)(DAT_180458258 + 8) = DAT_180458258;
  DAT_180458268 = 0;
  _DAT_180458270 = 0;
  uRam0000000180458278 = 0;
  DAT_180458280 = 7;
  DAT_180458288 = 8;
  DAT_180458250 = 0x3f800000;
  FUN_18022c1b0(&DAT_180458268,0x10,DAT_180458258);
  atexit(FUN_18030a010);
  return;
}


)B180002a30",
    "88ca534f86f340605b7e3613839e4236945a04a0220e0b72416cb265a4feac95",
    R"F180002a30C(FUN_18022c1b0
FUN_1802d8350
FUN_18030a010)F180002a30C",
    R"F180002a30D(DAT_180458250
DAT_180458258
DAT_180458268
DAT_180458280
DAT_180458288)F180002a30D",
    R"F180002a30T()F180002a30T",
    R"F180002a30F(25: return;)F180002a30F",
    R"F180002a30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180458250.
TODO: recover the declaration, type and value for global/data reference DAT_180458258.
TODO: recover the declaration, type and value for global/data reference DAT_180458268.
TODO: recover the declaration, type and value for global/data reference DAT_180458280.
TODO: recover the declaration, type and value for global/data reference DAT_180458288.)F180002a30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180002a30() noexcept {
    return kFunction_0x180002a30;
}

// 0x180002ae0 FUN_180002ae0
// source: re/dump/decompile/0x180002ae0_FUN_180002ae0.c
// size: 141 bytes; thunk: false
// body sha256: 42b3ca24b0d834892df96ecbab91fea16fd72db7e05deb3e69ef770cd4de7198
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180002ae0{
    "0x180002ae0",
    "FUN_180002ae0",
    R"F180002ae0S(undefined FUN_180002ae0())F180002ae0S",
    R"B180002ae0(// 0x180002ae0  FUN_180002ae0
// size=141 thunk=false
// signature: undefined FUN_180002ae0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002ae0(void)

{
  DAT_180458210 = 0;
  DAT_180458218 = FUN_1802d8350(0x40);
  *(longlong *)DAT_180458218 = DAT_180458218;
  *(longlong *)(DAT_180458218 + 8) = DAT_180458218;
  DAT_180458228 = 0;
  _DAT_180458230 = 0;
  uRam0000000180458238 = 0;
  DAT_180458240 = 7;
  DAT_180458248 = 8;
  DAT_180458210 = 0x3f800000;
  FUN_18022c1b0(&DAT_180458228,0x10,DAT_180458218);
  atexit(FUN_18030a060);
  return;
}


)B180002ae0",
    "42b3ca24b0d834892df96ecbab91fea16fd72db7e05deb3e69ef770cd4de7198",
    R"F180002ae0C(FUN_18022c1b0
FUN_1802d8350
FUN_18030a060)F180002ae0C",
    R"F180002ae0D(DAT_180458210
DAT_180458218
DAT_180458228
DAT_180458240
DAT_180458248)F180002ae0D",
    R"F180002ae0T()F180002ae0T",
    R"F180002ae0F(25: return;)F180002ae0F",
    R"F180002ae0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180458210.
TODO: recover the declaration, type and value for global/data reference DAT_180458218.
TODO: recover the declaration, type and value for global/data reference DAT_180458228.
TODO: recover the declaration, type and value for global/data reference DAT_180458240.
TODO: recover the declaration, type and value for global/data reference DAT_180458248.)F180002ae0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180002ae0() noexcept {
    return kFunction_0x180002ae0;
}

// 0x180002b70 FUN_180002b70
// source: re/dump/decompile/0x180002b70_FUN_180002b70.c
// size: 141 bytes; thunk: false
// body sha256: e585526508bd3b122c57efa372f01f1dfb4bf7a37e710f490e74c4713847ce27
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180002b70{
    "0x180002b70",
    "FUN_180002b70",
    R"F180002b70S(undefined FUN_180002b70())F180002b70S",
    R"B180002b70(// 0x180002b70  FUN_180002b70
// size=141 thunk=false
// signature: undefined FUN_180002b70()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002b70(void)

{
  _DAT_1805c7b10 = 0;
  DAT_1805c7b18 = FUN_1802d8350(0x30);
  *(longlong *)DAT_1805c7b18 = DAT_1805c7b18;
  *(longlong *)(DAT_1805c7b18 + 8) = DAT_1805c7b18;
  _DAT_1805c7b28 = 0;
  _DAT_1805c7b30 = 0;
  uRam00000001805c7b38 = 0;
  _DAT_1805c7b40 = 7;
  _DAT_1805c7b48 = 8;
  _DAT_1805c7b10 = 0x3f800000;
  FUN_18022be40(&DAT_1805c7b28,0x10,DAT_1805c7b18);
  atexit(FUN_18030a090);
  return;
}


)B180002b70",
    "e585526508bd3b122c57efa372f01f1dfb4bf7a37e710f490e74c4713847ce27",
    R"F180002b70C(FUN_18022be40
FUN_1802d8350
FUN_18030a090)F180002b70C",
    R"F180002b70D(DAT_1805c7b18
DAT_1805c7b28)F180002b70D",
    R"F180002b70T()F180002b70T",
    R"F180002b70F(25: return;)F180002b70F",
    R"F180002b70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b18.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7b28.)F180002b70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180002b70() noexcept {
    return kFunction_0x180002b70;
}

// 0x180002cd0 FUN_180002cd0
// source: re/dump/decompile/0x180002cd0_FUN_180002cd0.c
// size: 55 bytes; thunk: false
// body sha256: 16a33849b8c1a84bca5b4385b92059276af6027ff73b69285a588246117f119d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180002cd0{
    "0x180002cd0",
    "FUN_180002cd0",
    R"F180002cd0S(undefined FUN_180002cd0())F180002cd0S",
    R"B180002cd0(// 0x180002cd0  FUN_180002cd0
// size=55 thunk=false
// signature: undefined FUN_180002cd0()
// callers:
// status: ok


void FUN_180002cd0(void)

{
  DAT_18056dea0 = (undefined8 *)FUN_1802d8350(0x10);
  DAT_18056dea0[1] = 0;
  *DAT_18056dea0 = &DAT_18056dea0;
  atexit(FUN_18030a420);
  return;
}


)B180002cd0",
    "16a33849b8c1a84bca5b4385b92059276af6027ff73b69285a588246117f119d",
    R"F180002cd0C(FUN_1802d8350
FUN_18030a420)F180002cd0C",
    R"F180002cd0D(DAT_18056dea0)F180002cd0D",
    R"F180002cd0T()F180002cd0T",
    R"F180002cd0F(15: return;)F180002cd0F",
    R"F180002cd0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18056dea0.)F180002cd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180002cd0() noexcept {
    return kFunction_0x180002cd0;
}

// 0x180002dc0 FUN_180002dc0
// source: re/dump/decompile/0x180002dc0_FUN_180002dc0.c
// size: 141 bytes; thunk: false
// body sha256: 2ed908d77bad0e2a27b385d52243276f538d15b714775a60735451d99f4249f5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180002dc0{
    "0x180002dc0",
    "FUN_180002dc0",
    R"F180002dc0S(undefined FUN_180002dc0())F180002dc0S",
    R"B180002dc0(// 0x180002dc0  FUN_180002dc0
// size=141 thunk=false
// signature: undefined FUN_180002dc0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002dc0(void)

{
  DAT_1803fad00 = 0;
  DAT_1803fad08 = FUN_1802d8350(0x38);
  *(longlong *)DAT_1803fad08 = DAT_1803fad08;
  *(longlong *)(DAT_1803fad08 + 8) = DAT_1803fad08;
  DAT_1803fad18 = 0;
  _DAT_1803fad20 = 0;
  uRam00000001803fad28 = 0;
  DAT_1803fad30 = 7;
  DAT_1803fad38 = 8;
  DAT_1803fad00 = 0x3f800000;
  FUN_18022c1b0(&DAT_1803fad18,0x10,DAT_1803fad08);
  atexit(FUN_18030a5d0);
  return;
}


)B180002dc0",
    "2ed908d77bad0e2a27b385d52243276f538d15b714775a60735451d99f4249f5",
    R"F180002dc0C(FUN_18022c1b0
FUN_1802d8350
FUN_18030a5d0)F180002dc0C",
    R"F180002dc0D(DAT_1803fad00
DAT_1803fad08
DAT_1803fad18
DAT_1803fad30
DAT_1803fad38)F180002dc0D",
    R"F180002dc0T()F180002dc0T",
    R"F180002dc0F(25: return;)F180002dc0F",
    R"F180002dc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fad00.
TODO: recover the declaration, type and value for global/data reference DAT_1803fad08.
TODO: recover the declaration, type and value for global/data reference DAT_1803fad18.
TODO: recover the declaration, type and value for global/data reference DAT_1803fad30.
TODO: recover the declaration, type and value for global/data reference DAT_1803fad38.)F180002dc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180002dc0() noexcept {
    return kFunction_0x180002dc0;
}

// 0x180002e50 FUN_180002e50
// source: re/dump/decompile/0x180002e50_FUN_180002e50.c
// size: 141 bytes; thunk: false
// body sha256: 0b72f351d3644964ef8c9ed5ebff67f7770d6599a92cab529cfd99e25ce0f654
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180002e50{
    "0x180002e50",
    "FUN_180002e50",
    R"F180002e50S(undefined FUN_180002e50())F180002e50S",
    R"B180002e50(// 0x180002e50  FUN_180002e50
// size=141 thunk=false
// signature: undefined FUN_180002e50()
// callers:
// status: ok


void FUN_180002e50(void)

{
  DAT_1803fad40 = 0;
  DAT_1803fad48 = FUN_1802d8350(0x60);
  *(longlong *)DAT_1803fad48 = DAT_1803fad48;
  *(longlong *)(DAT_1803fad48 + 8) = DAT_1803fad48;
  DAT_1803fad58 = 0;
  DAT_1803fad60 = 0;
  uRam00000001803fad68 = 0;
  DAT_1803fad70 = 7;
  DAT_1803fad78 = 8;
  DAT_1803fad40 = 0x3f800000;
  FUN_18022c1b0(&DAT_1803fad58,0x10,DAT_1803fad48);
  atexit(FUN_18030a600);
  return;
}


)B180002e50",
    "0b72f351d3644964ef8c9ed5ebff67f7770d6599a92cab529cfd99e25ce0f654",
    R"F180002e50C(FUN_18022c1b0
FUN_1802d8350
FUN_18030a600)F180002e50C",
    R"F180002e50D(DAT_1803fad40
DAT_1803fad48
DAT_1803fad58
DAT_1803fad60
DAT_1803fad70
DAT_1803fad78)F180002e50D",
    R"F180002e50T()F180002e50T",
    R"F180002e50F(23: return;)F180002e50F",
    R"F180002e50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fad40.
TODO: recover the declaration, type and value for global/data reference DAT_1803fad48.
TODO: recover the declaration, type and value for global/data reference DAT_1803fad58.
TODO: recover the declaration, type and value for global/data reference DAT_1803fad60.
TODO: recover the declaration, type and value for global/data reference DAT_1803fad70.
TODO: recover the declaration, type and value for global/data reference DAT_1803fad78.)F180002e50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180002e50() noexcept {
    return kFunction_0x180002e50;
}

// 0x180002fc0 FUN_180002fc0
// source: re/dump/decompile/0x180002fc0_FUN_180002fc0.c
// size: 885 bytes; thunk: false
// body sha256: 22e57be8cd4cafb2e5a1dd1870c3f0e84a4c8d63016f77cd359fa73d0e266adc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180002fc0{
    "0x180002fc0",
    "FUN_180002fc0",
    R"F180002fc0S(undefined FUN_180002fc0())F180002fc0S",
    R"B180002fc0(// 0x180002fc0  FUN_180002fc0
// size=885 thunk=false
// signature: undefined FUN_180002fc0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002fc0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
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
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  FUN_18001d080(&local_1e8,"Nickname",8);
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  FUN_18001d080(&local_1c8,"Health",6);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  FUN_18001d080(&local_1a8,"Max Health",10);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  FUN_18001d080(&local_188,"Usergroup",9);
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  FUN_18001d080(&local_168,"Team/Job",8);
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  FUN_18001d080(&local_148,"Held Weapon",0xb);
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  FUN_18001d080(&local_128,"Health %",8);
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_18001d080(&local_108,"Distance",8);
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_18001d080(&local_e8,"Protected",9);
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_18001d080(&local_c8,"RP Name",7);
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_18001d080(&local_a8,"Armor %",7);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_18001d080(&local_88,"Netvar",6);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_18001d080(&local_68,"Job custom",10);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_18001d080(&local_48,"Inventory",9);
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  FUN_18001d080(&local_28,"Script",6);
  DAT_1803fa808 = 0;
  DAT_1803fa810 = 0;
  _DAT_1803fa818 = 0;
  lVar1 = FUN_18020dbc0(0,0xf);
  _DAT_1803fa818 = lVar1 + 0x1e0;
  puVar2 = &local_1e8;
  DAT_1803fa808 = lVar1;
  DAT_1803fa810 = lVar1;
  do {
    FUN_18016d4c0(lVar1,puVar2);
    lVar1 = lVar1 + 0x20;
    puVar2 = puVar2 + 4;
  } while (puVar2 != (undefined8 *)&stack0xfffffffffffffff8);
  DAT_1803fa810 = lVar1;
  _eh_vector_destructor_iterator_
            (&local_1e8,0x20,0xf,Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09);
  atexit((_func_5014 *)&LAB_18030abe0);
  return;
}


)B180002fc0",
    "22e57be8cd4cafb2e5a1dd1870c3f0e84a4c8d63016f77cd359fa73d0e266adc",
    R"F180002fc0C(FUN_18001d080
FUN_18016d4c0
FUN_18020dbc0)F180002fc0C",
    R"F180002fc0D(LAB_18030abe0
DAT_1803fa808
DAT_1803fa810)F180002fc0D",
    R"F180002fc0T("Health"
"Netvar"
"Script"
"Armor %"
"RP Name"
"Distance"
"Health %"
"Nickname"
"Team/Job"
"Inventory"
"Protected"
"Usergroup"
"Job custom"
"Max Health"
"Held Weapon")F180002fc0T",
    R"F180002fc0F(159: do {
168: return;)F180002fc0F",
    R"F180002fc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18030abe0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa808.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa810.)F180002fc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180002fc0() noexcept {
    return kFunction_0x180002fc0;
}

// 0x180003350 FUN_180003350
// source: re/dump/decompile/0x180003350_FUN_180003350.c
// size: 141 bytes; thunk: false
// body sha256: 5f94b7be3ef9ad7a8f3f6ae405ac8b4c96d5008a5a3edb9c640ae8e255809675
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003350{
    "0x180003350",
    "FUN_180003350",
    R"F180003350S(undefined FUN_180003350())F180003350S",
    R"B180003350(// 0x180003350  FUN_180003350
// size=141 thunk=false
// signature: undefined FUN_180003350()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003350(void)

{
  _DAT_1803fa860 = 0;
  DAT_1803fa868 = FUN_1802d8350(0x20);
  *(longlong *)DAT_1803fa868 = DAT_1803fa868;
  *(longlong *)(DAT_1803fa868 + 8) = DAT_1803fa868;
  DAT_1803fa878 = 0;
  _DAT_1803fa880 = 0;
  uRam00000001803fa888 = 0;
  DAT_1803fa890 = 7;
  DAT_1803fa898 = 8;
  _DAT_1803fa860 = 0x3f800000;
  FUN_18022c1b0(&DAT_1803fa878,0x10,DAT_1803fa868);
  atexit(FUN_18030aca0);
  return;
}


)B180003350",
    "5f94b7be3ef9ad7a8f3f6ae405ac8b4c96d5008a5a3edb9c640ae8e255809675",
    R"F180003350C(FUN_18022c1b0
FUN_1802d8350
FUN_18030aca0)F180003350C",
    R"F180003350D(DAT_1803fa868
DAT_1803fa878
DAT_1803fa890
DAT_1803fa898)F180003350D",
    R"F180003350T()F180003350T",
    R"F180003350F(25: return;)F180003350F",
    R"F180003350U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa868.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa878.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa890.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa898.)F180003350U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003350() noexcept {
    return kFunction_0x180003350;
}

// 0x1800033f0 FUN_1800033f0
// source: re/dump/decompile/0x1800033f0_FUN_1800033f0.c
// size: 141 bytes; thunk: false
// body sha256: 8a0f4876a0ca398a0903ceee1ae9875b86e092b51a786d59d2758f77595749b6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800033f0{
    "0x1800033f0",
    "FUN_1800033f0",
    R"F1800033f0S(undefined FUN_1800033f0())F1800033f0S",
    R"B1800033f0(// 0x1800033f0  FUN_1800033f0
// size=141 thunk=false
// signature: undefined FUN_1800033f0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800033f0(void)

{
  _DAT_1803fa820 = 0;
  DAT_1803fa828 = FUN_1802d8350(0x18);
  *(longlong *)DAT_1803fa828 = DAT_1803fa828;
  *(longlong *)(DAT_1803fa828 + 8) = DAT_1803fa828;
  _DAT_1803fa838 = 0;
  _DAT_1803fa840 = 0;
  uRam00000001803fa848 = 0;
  _DAT_1803fa850 = 7;
  _DAT_1803fa858 = 8;
  _DAT_1803fa820 = 0x3f800000;
  FUN_18022c1b0(&DAT_1803fa838,0x10,DAT_1803fa828);
  atexit(FUN_18030ace0);
  return;
}


)B1800033f0",
    "8a0f4876a0ca398a0903ceee1ae9875b86e092b51a786d59d2758f77595749b6",
    R"F1800033f0C(FUN_18022c1b0
FUN_1802d8350
FUN_18030ace0)F1800033f0C",
    R"F1800033f0D(DAT_1803fa828
DAT_1803fa838)F1800033f0D",
    R"F1800033f0T()F1800033f0T",
    R"F1800033f0F(25: return;)F1800033f0F",
    R"F1800033f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa828.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa838.)F1800033f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800033f0() noexcept {
    return kFunction_0x1800033f0;
}

// 0x180003490 FUN_180003490
// source: re/dump/decompile/0x180003490_FUN_180003490.c
// size: 54 bytes; thunk: false
// body sha256: 08e335d744e5ba4f39fb9e69c82b63611394f78c91c7ec9d605b54e5f2aa12d9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003490{
    "0x180003490",
    "FUN_180003490",
    R"F180003490S(undefined FUN_180003490())F180003490S",
    R"B180003490(// 0x180003490  FUN_180003490
// size=54 thunk=false
// signature: undefined FUN_180003490()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003490(void)

{
  _DAT_1804581f0 = FUN_1802d8350(0x48);
  *(longlong *)_DAT_1804581f0 = _DAT_1804581f0;
  *(longlong *)(_DAT_1804581f0 + 8) = _DAT_1804581f0;
  *(longlong *)(_DAT_1804581f0 + 0x10) = _DAT_1804581f0;
  *(undefined2 *)(_DAT_1804581f0 + 0x18) = 0x101;
  atexit(FUN_18030ad90);
  return;
}


)B180003490",
    "08e335d744e5ba4f39fb9e69c82b63611394f78c91c7ec9d605b54e5f2aa12d9",
    R"F180003490C(FUN_1802d8350
FUN_18030ad90)F180003490C",
    R"F180003490D()F180003490D",
    R"F180003490T()F180003490T",
    R"F180003490F(19: return;)F180003490F",
    R"F180003490U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180003490U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003490() noexcept {
    return kFunction_0x180003490;
}

// 0x1800034d0 FUN_1800034d0
// source: re/dump/decompile/0x1800034d0_FUN_1800034d0.c
// size: 54 bytes; thunk: false
// body sha256: 1fee95ea68051ddcb40415086ddf8616d91c9a26d2662421830363de3f716a25
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800034d0{
    "0x1800034d0",
    "FUN_1800034d0",
    R"F1800034d0S(undefined FUN_1800034d0())F1800034d0S",
    R"B1800034d0(// 0x1800034d0  FUN_1800034d0
// size=54 thunk=false
// signature: undefined FUN_1800034d0()
// callers:
// status: ok


void FUN_1800034d0(void)

{
  DAT_180458200 = FUN_1802d8350(0x30);
  *(longlong *)DAT_180458200 = DAT_180458200;
  *(longlong *)(DAT_180458200 + 8) = DAT_180458200;
  *(longlong *)(DAT_180458200 + 0x10) = DAT_180458200;
  *(undefined2 *)(DAT_180458200 + 0x18) = 0x101;
  atexit(FUN_18030ada0);
  return;
}


)B1800034d0",
    "1fee95ea68051ddcb40415086ddf8616d91c9a26d2662421830363de3f716a25",
    R"F1800034d0C(FUN_1802d8350
FUN_18030ada0)F1800034d0C",
    R"F1800034d0D(DAT_180458200)F1800034d0D",
    R"F1800034d0T()F1800034d0T",
    R"F1800034d0F(17: return;)F1800034d0F",
    R"F1800034d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180458200.)F1800034d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800034d0() noexcept {
    return kFunction_0x1800034d0;
}

// 0x180003510 FUN_180003510
// source: re/dump/decompile/0x180003510_FUN_180003510.c
// size: 54 bytes; thunk: false
// body sha256: 571601641f2d9fd06885abc57391119584b63dc35f7e3bc27db8f9658890e50c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003510{
    "0x180003510",
    "FUN_180003510",
    R"F180003510S(undefined FUN_180003510())F180003510S",
    R"B180003510(// 0x180003510  FUN_180003510
// size=54 thunk=false
// signature: undefined FUN_180003510()
// callers:
// status: ok


void FUN_180003510(void)

{
  DAT_180570810 = FUN_1802d8350(0x60);
  *(longlong *)DAT_180570810 = DAT_180570810;
  *(longlong *)(DAT_180570810 + 8) = DAT_180570810;
  *(longlong *)(DAT_180570810 + 0x10) = DAT_180570810;
  *(undefined2 *)(DAT_180570810 + 0x18) = 0x101;
  atexit(FUN_18030adb0);
  return;
}


)B180003510",
    "571601641f2d9fd06885abc57391119584b63dc35f7e3bc27db8f9658890e50c",
    R"F180003510C(FUN_1802d8350
FUN_18030adb0)F180003510C",
    R"F180003510D(DAT_180570810)F180003510D",
    R"F180003510T()F180003510T",
    R"F180003510F(17: return;)F180003510F",
    R"F180003510U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180570810.)F180003510U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003510() noexcept {
    return kFunction_0x180003510;
}

// 0x1800035d0 FUN_1800035d0
// source: re/dump/decompile/0x1800035d0_FUN_1800035d0.c
// size: 141 bytes; thunk: false
// body sha256: c37cf822e64d738fe9565333148da758a20379b6b1192685a27746663a29d348
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800035d0{
    "0x1800035d0",
    "FUN_1800035d0",
    R"F1800035d0S(undefined FUN_1800035d0())F1800035d0S",
    R"B1800035d0(// 0x1800035d0  FUN_1800035d0
// size=141 thunk=false
// signature: undefined FUN_1800035d0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800035d0(void)

{
  DAT_1804ecae0 = 0;
  DAT_1804ecae8 = FUN_1802d8350(0x20);
  *(longlong *)DAT_1804ecae8 = DAT_1804ecae8;
  *(longlong *)(DAT_1804ecae8 + 8) = DAT_1804ecae8;
  DAT_1804ecaf8 = 0;
  _DAT_1804ecb00 = 0;
  uRam00000001804ecb08 = 0;
  DAT_1804ecb10 = 7;
  DAT_1804ecb18 = 8;
  DAT_1804ecae0 = 0x3f800000;
  FUN_18022c1b0(&DAT_1804ecaf8,0x10,DAT_1804ecae8);
  atexit(FUN_18030adc0);
  return;
}


)B1800035d0",
    "c37cf822e64d738fe9565333148da758a20379b6b1192685a27746663a29d348",
    R"F1800035d0C(FUN_18022c1b0
FUN_1802d8350
FUN_18030adc0)F1800035d0C",
    R"F1800035d0D(DAT_1804ecae0
DAT_1804ecae8
DAT_1804ecaf8
DAT_1804ecb10
DAT_1804ecb18)F1800035d0D",
    R"F1800035d0T()F1800035d0T",
    R"F1800035d0F(25: return;)F1800035d0F",
    R"F1800035d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1804ecae0.
TODO: recover the declaration, type and value for global/data reference DAT_1804ecae8.
TODO: recover the declaration, type and value for global/data reference DAT_1804ecaf8.
TODO: recover the declaration, type and value for global/data reference DAT_1804ecb10.
TODO: recover the declaration, type and value for global/data reference DAT_1804ecb18.)F1800035d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800035d0() noexcept {
    return kFunction_0x1800035d0;
}

// 0x180003660 FUN_180003660
// source: re/dump/decompile/0x180003660_FUN_180003660.c
// size: 141 bytes; thunk: false
// body sha256: 35a18b800b9886fc828522a4c6c10b5e41ccc84d8c19814d822b08ad6978201a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003660{
    "0x180003660",
    "FUN_180003660",
    R"F180003660S(undefined FUN_180003660())F180003660S",
    R"B180003660(// 0x180003660  FUN_180003660
// size=141 thunk=false
// signature: undefined FUN_180003660()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003660(void)

{
  DAT_180458aa0 = 0;
  DAT_180458aa8 = FUN_1802d8350(0x20);
  *(longlong *)DAT_180458aa8 = DAT_180458aa8;
  *(longlong *)(DAT_180458aa8 + 8) = DAT_180458aa8;
  DAT_180458ab8 = 0;
  _DAT_180458ac0 = 0;
  uRam0000000180458ac8 = 0;
  DAT_180458ad0 = 7;
  DAT_180458ad8 = 8;
  DAT_180458aa0 = 0x3f800000;
  FUN_18022c1b0(&DAT_180458ab8,0x10,DAT_180458aa8);
  atexit(FUN_18030adf0);
  return;
}


)B180003660",
    "35a18b800b9886fc828522a4c6c10b5e41ccc84d8c19814d822b08ad6978201a",
    R"F180003660C(FUN_18022c1b0
FUN_1802d8350
FUN_18030adf0)F180003660C",
    R"F180003660D(DAT_180458aa0
DAT_180458aa8
DAT_180458ab8
DAT_180458ad0
DAT_180458ad8)F180003660D",
    R"F180003660T()F180003660T",
    R"F180003660F(25: return;)F180003660F",
    R"F180003660U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180458aa0.
TODO: recover the declaration, type and value for global/data reference DAT_180458aa8.
TODO: recover the declaration, type and value for global/data reference DAT_180458ab8.
TODO: recover the declaration, type and value for global/data reference DAT_180458ad0.
TODO: recover the declaration, type and value for global/data reference DAT_180458ad8.)F180003660U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003660() noexcept {
    return kFunction_0x180003660;
}

// 0x180003750 FUN_180003750
// source: re/dump/decompile/0x180003750_FUN_180003750.c
// size: 55 bytes; thunk: false
// body sha256: 2e31884673a4c0a637da2cb22ea47461e7a2ef9e1b05a6a513facbad56645136
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003750{
    "0x180003750",
    "FUN_180003750",
    R"F180003750S(undefined FUN_180003750())F180003750S",
    R"B180003750(// 0x180003750  FUN_180003750
// size=55 thunk=false
// signature: undefined FUN_180003750()
// callers:
// status: ok


void FUN_180003750(void)

{
  DAT_18056df10 = (undefined8 *)FUN_1802d8350(0x10);
  DAT_18056df10[1] = 0;
  *DAT_18056df10 = &DAT_18056df10;
  atexit(FUN_18030af90);
  return;
}


)B180003750",
    "2e31884673a4c0a637da2cb22ea47461e7a2ef9e1b05a6a513facbad56645136",
    R"F180003750C(FUN_1802d8350
FUN_18030af90)F180003750C",
    R"F180003750D(DAT_18056df10)F180003750D",
    R"F180003750T()F180003750T",
    R"F180003750F(15: return;)F180003750F",
    R"F180003750U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18056df10.)F180003750U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003750() noexcept {
    return kFunction_0x180003750;
}

// 0x180003790 FUN_180003790
// source: re/dump/decompile/0x180003790_FUN_180003790.c
// size: 141 bytes; thunk: false
// body sha256: 3a28e89e7d6f9d38c259afc3a869e6f617b33851c3c08320a3bee8a3c5602dd1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003790{
    "0x180003790",
    "FUN_180003790",
    R"F180003790S(undefined FUN_180003790())F180003790S",
    R"B180003790(// 0x180003790  FUN_180003790
// size=141 thunk=false
// signature: undefined FUN_180003790()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003790(void)

{
  _DAT_18056ded0 = 0;
  DAT_18056ded8 = FUN_1802d8350(0x18);
  *(longlong *)DAT_18056ded8 = DAT_18056ded8;
  *(longlong *)(DAT_18056ded8 + 8) = DAT_18056ded8;
  _DAT_18056dee8 = 0;
  _DAT_18056def0 = 0;
  uRam000000018056def8 = 0;
  _DAT_18056df00 = 7;
  _DAT_18056df08 = 8;
  _DAT_18056ded0 = 0x3f800000;
  FUN_18022be40(&DAT_18056dee8,0x10,DAT_18056ded8);
  atexit(FUN_18030b0c0);
  return;
}


)B180003790",
    "3a28e89e7d6f9d38c259afc3a869e6f617b33851c3c08320a3bee8a3c5602dd1",
    R"F180003790C(FUN_18022be40
FUN_1802d8350
FUN_18030b0c0)F180003790C",
    R"F180003790D(DAT_18056ded8
DAT_18056dee8)F180003790D",
    R"F180003790T()F180003790T",
    R"F180003790F(25: return;)F180003790F",
    R"F180003790U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18056ded8.
TODO: recover the declaration, type and value for global/data reference DAT_18056dee8.)F180003790U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003790() noexcept {
    return kFunction_0x180003790;
}

// 0x180003920 FUN_180003920
// source: re/dump/decompile/0x180003920_FUN_180003920.c
// size: 45 bytes; thunk: false
// body sha256: f91528ef8144d9bad14fde4065e02de6647683e5eb24387f0bd5cca3aa90a102
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003920{
    "0x180003920",
    "FUN_180003920",
    R"F180003920S(undefined FUN_180003920())F180003920S",
    R"B180003920(// 0x180003920  FUN_180003920
// size=45 thunk=false
// signature: undefined FUN_180003920()
// callers:
// status: ok


void FUN_180003920(void)

{
  FUN_18001d080(&DAT_1803fa8c0,"Configs are stored in Documents/mayrrX64/settings.",0x32);
  atexit((_func_5014 *)&LAB_18030b270);
  return;
}


)B180003920",
    "f91528ef8144d9bad14fde4065e02de6647683e5eb24387f0bd5cca3aa90a102",
    R"F180003920C(FUN_18001d080)F180003920C",
    R"F180003920D(LAB_18030b270
DAT_1803fa8c0)F180003920D",
    R"F180003920T("Configs are stored in Documents/mayrrX64/settings.")F180003920T",
    R"F180003920F(13: return;)F180003920F",
    R"F180003920U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18030b270.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa8c0.)F180003920U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003920() noexcept {
    return kFunction_0x180003920;
}

// 0x180003950 FUN_180003950
// source: re/dump/decompile/0x180003950_FUN_180003950.c
// size: 66 bytes; thunk: false
// body sha256: c6c9110cfa8329b71b1c645a3dab2b44bf1df68f22821b6f991855ebc054d2de
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003950{
    "0x180003950",
    "FUN_180003950",
    R"F180003950S(undefined FUN_180003950())F180003950S",
    R"B180003950(// 0x180003950  FUN_180003950
// size=66 thunk=false
// signature: undefined FUN_180003950()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003950(void)

{
  _DAT_1805b88c8 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1805b88c8 = _DAT_1805b88c8;
  *(longlong *)(_DAT_1805b88c8 + 8) = _DAT_1805b88c8;
  *(longlong *)(_DAT_1805b88c8 + 0x10) = _DAT_1805b88c8;
  *(undefined2 *)(_DAT_1805b88c8 + 0x18) = 0x101;
  atexit(FUN_18030b4a0);
  return;
}


)B180003950",
    "c6c9110cfa8329b71b1c645a3dab2b44bf1df68f22821b6f991855ebc054d2de",
    R"F180003950C(FUN_1802d8350
FUN_18030b4a0)F180003950C",
    R"F180003950D()F180003950D",
    R"F180003950T()F180003950T",
    R"F180003950F(19: return;)F180003950F",
    R"F180003950U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180003950U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003950() noexcept {
    return kFunction_0x180003950;
}

// 0x1800039a0 FUN_1800039a0
// source: re/dump/decompile/0x1800039a0_FUN_1800039a0.c
// size: 66 bytes; thunk: false
// body sha256: 072ff5bcabfc73c6800918044cbbda2238eee62bcbaa59ccc2ff39322fe57df4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800039a0{
    "0x1800039a0",
    "FUN_1800039a0",
    R"F1800039a0S(undefined FUN_1800039a0())F1800039a0S",
    R"B1800039a0(// 0x1800039a0  FUN_1800039a0
// size=66 thunk=false
// signature: undefined FUN_1800039a0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800039a0(void)

{
  _DAT_1805c7bb8 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1805c7bb8 = _DAT_1805c7bb8;
  *(longlong *)(_DAT_1805c7bb8 + 8) = _DAT_1805c7bb8;
  *(longlong *)(_DAT_1805c7bb8 + 0x10) = _DAT_1805c7bb8;
  *(undefined2 *)(_DAT_1805c7bb8 + 0x18) = 0x101;
  atexit(FUN_18030b4c0);
  return;
}


)B1800039a0",
    "072ff5bcabfc73c6800918044cbbda2238eee62bcbaa59ccc2ff39322fe57df4",
    R"F1800039a0C(FUN_1802d8350
FUN_18030b4c0)F1800039a0C",
    R"F1800039a0D()F1800039a0D",
    R"F1800039a0T()F1800039a0T",
    R"F1800039a0F(19: return;)F1800039a0F",
    R"F1800039a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800039a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800039a0() noexcept {
    return kFunction_0x1800039a0;
}

// 0x1800039f0 FUN_1800039f0
// source: re/dump/decompile/0x1800039f0_FUN_1800039f0.c
// size: 66 bytes; thunk: false
// body sha256: 87c69b6b2240b2bb5cdaf7f1f65247e99a178b56e59c8fe0fb5035482c812a12
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800039f0{
    "0x1800039f0",
    "FUN_1800039f0",
    R"F1800039f0S(undefined FUN_1800039f0())F1800039f0S",
    R"B1800039f0(// 0x1800039f0  FUN_1800039f0
// size=66 thunk=false
// signature: undefined FUN_1800039f0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800039f0(void)

{
  _DAT_1803fa970 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803fa970 = _DAT_1803fa970;
  *(longlong *)(_DAT_1803fa970 + 8) = _DAT_1803fa970;
  *(longlong *)(_DAT_1803fa970 + 0x10) = _DAT_1803fa970;
  *(undefined2 *)(_DAT_1803fa970 + 0x18) = 0x101;
  atexit(FUN_18030b4e0);
  return;
}


)B1800039f0",
    "87c69b6b2240b2bb5cdaf7f1f65247e99a178b56e59c8fe0fb5035482c812a12",
    R"F1800039f0C(FUN_1802d8350
FUN_18030b4e0)F1800039f0C",
    R"F1800039f0D()F1800039f0D",
    R"F1800039f0T()F1800039f0T",
    R"F1800039f0F(19: return;)F1800039f0F",
    R"F1800039f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800039f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800039f0() noexcept {
    return kFunction_0x1800039f0;
}

// 0x180003a40 FUN_180003a40
// source: re/dump/decompile/0x180003a40_FUN_180003a40.c
// size: 66 bytes; thunk: false
// body sha256: 71ebfb7b5b2d60f6b549f11ab62d3322a961366655e36cfe9e240f2f13626535
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003a40{
    "0x180003a40",
    "FUN_180003a40",
    R"F180003a40S(undefined FUN_180003a40())F180003a40S",
    R"B180003a40(// 0x180003a40  FUN_180003a40
// size=66 thunk=false
// signature: undefined FUN_180003a40()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003a40(void)

{
  _DAT_1803faa70 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803faa70 = _DAT_1803faa70;
  *(longlong *)(_DAT_1803faa70 + 8) = _DAT_1803faa70;
  *(longlong *)(_DAT_1803faa70 + 0x10) = _DAT_1803faa70;
  *(undefined2 *)(_DAT_1803faa70 + 0x18) = 0x101;
  atexit(FUN_18030b500);
  return;
}


)B180003a40",
    "71ebfb7b5b2d60f6b549f11ab62d3322a961366655e36cfe9e240f2f13626535",
    R"F180003a40C(FUN_1802d8350
FUN_18030b500)F180003a40C",
    R"F180003a40D()F180003a40D",
    R"F180003a40T()F180003a40T",
    R"F180003a40F(19: return;)F180003a40F",
    R"F180003a40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180003a40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003a40() noexcept {
    return kFunction_0x180003a40;
}

// 0x180003a90 FUN_180003a90
// source: re/dump/decompile/0x180003a90_FUN_180003a90.c
// size: 66 bytes; thunk: false
// body sha256: e2317a794aaa58a0dd1d1f4d14ec06be7375126ae9a16fb4a3136c388c0014f6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003a90{
    "0x180003a90",
    "FUN_180003a90",
    R"F180003a90S(undefined FUN_180003a90())F180003a90S",
    R"B180003a90(// 0x180003a90  FUN_180003a90
// size=66 thunk=false
// signature: undefined FUN_180003a90()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003a90(void)

{
  _DAT_1803fa9d0 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803fa9d0 = _DAT_1803fa9d0;
  *(longlong *)(_DAT_1803fa9d0 + 8) = _DAT_1803fa9d0;
  *(longlong *)(_DAT_1803fa9d0 + 0x10) = _DAT_1803fa9d0;
  *(undefined2 *)(_DAT_1803fa9d0 + 0x18) = 0x101;
  atexit(FUN_18030b520);
  return;
}


)B180003a90",
    "e2317a794aaa58a0dd1d1f4d14ec06be7375126ae9a16fb4a3136c388c0014f6",
    R"F180003a90C(FUN_1802d8350
FUN_18030b520)F180003a90C",
    R"F180003a90D()F180003a90D",
    R"F180003a90T()F180003a90T",
    R"F180003a90F(19: return;)F180003a90F",
    R"F180003a90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180003a90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003a90() noexcept {
    return kFunction_0x180003a90;
}

// 0x180003ae0 FUN_180003ae0
// source: re/dump/decompile/0x180003ae0_FUN_180003ae0.c
// size: 66 bytes; thunk: false
// body sha256: 3f1ea162cf62df713299cc38f39aa3e0d9e847b78c4a22776c6eb3a896f5ec39
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003ae0{
    "0x180003ae0",
    "FUN_180003ae0",
    R"F180003ae0S(undefined FUN_180003ae0())F180003ae0S",
    R"B180003ae0(// 0x180003ae0  FUN_180003ae0
// size=66 thunk=false
// signature: undefined FUN_180003ae0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003ae0(void)

{
  _DAT_1803faa90 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803faa90 = _DAT_1803faa90;
  *(longlong *)(_DAT_1803faa90 + 8) = _DAT_1803faa90;
  *(longlong *)(_DAT_1803faa90 + 0x10) = _DAT_1803faa90;
  *(undefined2 *)(_DAT_1803faa90 + 0x18) = 0x101;
  atexit(FUN_18030b540);
  return;
}


)B180003ae0",
    "3f1ea162cf62df713299cc38f39aa3e0d9e847b78c4a22776c6eb3a896f5ec39",
    R"F180003ae0C(FUN_1802d8350
FUN_18030b540)F180003ae0C",
    R"F180003ae0D()F180003ae0D",
    R"F180003ae0T()F180003ae0T",
    R"F180003ae0F(19: return;)F180003ae0F",
    R"F180003ae0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180003ae0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003ae0() noexcept {
    return kFunction_0x180003ae0;
}

// 0x180003b30 FUN_180003b30
// source: re/dump/decompile/0x180003b30_FUN_180003b30.c
// size: 66 bytes; thunk: false
// body sha256: 43c8ae745d6cb85da3c7caae91523abc665b349b12680e8c8d4d2aa46bc66dab
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003b30{
    "0x180003b30",
    "FUN_180003b30",
    R"F180003b30S(undefined FUN_180003b30())F180003b30S",
    R"B180003b30(// 0x180003b30  FUN_180003b30
// size=66 thunk=false
// signature: undefined FUN_180003b30()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003b30(void)

{
  _DAT_1803faa30 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803faa30 = _DAT_1803faa30;
  *(longlong *)(_DAT_1803faa30 + 8) = _DAT_1803faa30;
  *(longlong *)(_DAT_1803faa30 + 0x10) = _DAT_1803faa30;
  *(undefined2 *)(_DAT_1803faa30 + 0x18) = 0x101;
  atexit(FUN_18030b560);
  return;
}


)B180003b30",
    "43c8ae745d6cb85da3c7caae91523abc665b349b12680e8c8d4d2aa46bc66dab",
    R"F180003b30C(FUN_1802d8350
FUN_18030b560)F180003b30C",
    R"F180003b30D()F180003b30D",
    R"F180003b30T()F180003b30T",
    R"F180003b30F(19: return;)F180003b30F",
    R"F180003b30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180003b30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003b30() noexcept {
    return kFunction_0x180003b30;
}

// 0x180003b80 FUN_180003b80
// source: re/dump/decompile/0x180003b80_FUN_180003b80.c
// size: 66 bytes; thunk: false
// body sha256: 5114fb25cef3904f0d1f1ae5b616f90a98c005f9a3004009866b6948d693cfaa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003b80{
    "0x180003b80",
    "FUN_180003b80",
    R"F180003b80S(undefined FUN_180003b80())F180003b80S",
    R"B180003b80(// 0x180003b80  FUN_180003b80
// size=66 thunk=false
// signature: undefined FUN_180003b80()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003b80(void)

{
  _DAT_1803fa9b0 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803fa9b0 = _DAT_1803fa9b0;
  *(longlong *)(_DAT_1803fa9b0 + 8) = _DAT_1803fa9b0;
  *(longlong *)(_DAT_1803fa9b0 + 0x10) = _DAT_1803fa9b0;
  *(undefined2 *)(_DAT_1803fa9b0 + 0x18) = 0x101;
  atexit(FUN_18030b580);
  return;
}


)B180003b80",
    "5114fb25cef3904f0d1f1ae5b616f90a98c005f9a3004009866b6948d693cfaa",
    R"F180003b80C(FUN_1802d8350
FUN_18030b580)F180003b80C",
    R"F180003b80D()F180003b80D",
    R"F180003b80T()F180003b80T",
    R"F180003b80F(19: return;)F180003b80F",
    R"F180003b80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180003b80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003b80() noexcept {
    return kFunction_0x180003b80;
}

// 0x180003bd0 FUN_180003bd0
// source: re/dump/decompile/0x180003bd0_FUN_180003bd0.c
// size: 66 bytes; thunk: false
// body sha256: 9ab94402696083a2f602a75e5717d3f4aa1e5b81215792b992e9d6e37799d3d8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003bd0{
    "0x180003bd0",
    "FUN_180003bd0",
    R"F180003bd0S(undefined FUN_180003bd0())F180003bd0S",
    R"B180003bd0(// 0x180003bd0  FUN_180003bd0
// size=66 thunk=false
// signature: undefined FUN_180003bd0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003bd0(void)

{
  _DAT_1803fa990 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803fa990 = _DAT_1803fa990;
  *(longlong *)(_DAT_1803fa990 + 8) = _DAT_1803fa990;
  *(longlong *)(_DAT_1803fa990 + 0x10) = _DAT_1803fa990;
  *(undefined2 *)(_DAT_1803fa990 + 0x18) = 0x101;
  atexit(FUN_18030b5a0);
  return;
}


)B180003bd0",
    "9ab94402696083a2f602a75e5717d3f4aa1e5b81215792b992e9d6e37799d3d8",
    R"F180003bd0C(FUN_1802d8350
FUN_18030b5a0)F180003bd0C",
    R"F180003bd0D()F180003bd0D",
    R"F180003bd0T()F180003bd0T",
    R"F180003bd0F(19: return;)F180003bd0F",
    R"F180003bd0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180003bd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003bd0() noexcept {
    return kFunction_0x180003bd0;
}

// 0x180003c20 FUN_180003c20
// source: re/dump/decompile/0x180003c20_FUN_180003c20.c
// size: 66 bytes; thunk: false
// body sha256: d34d7a24df8cb37b27b53f93e20adc1813fd1ea6fbdf27fff43dcb5370e51b8d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003c20{
    "0x180003c20",
    "FUN_180003c20",
    R"F180003c20S(undefined FUN_180003c20())F180003c20S",
    R"B180003c20(// 0x180003c20  FUN_180003c20
// size=66 thunk=false
// signature: undefined FUN_180003c20()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003c20(void)

{
  _DAT_1803fab20 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803fab20 = _DAT_1803fab20;
  *(longlong *)(_DAT_1803fab20 + 8) = _DAT_1803fab20;
  *(longlong *)(_DAT_1803fab20 + 0x10) = _DAT_1803fab20;
  *(undefined2 *)(_DAT_1803fab20 + 0x18) = 0x101;
  atexit(FUN_18030b5c0);
  return;
}


)B180003c20",
    "d34d7a24df8cb37b27b53f93e20adc1813fd1ea6fbdf27fff43dcb5370e51b8d",
    R"F180003c20C(FUN_1802d8350
FUN_18030b5c0)F180003c20C",
    R"F180003c20D()F180003c20D",
    R"F180003c20T()F180003c20T",
    R"F180003c20F(19: return;)F180003c20F",
    R"F180003c20U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180003c20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003c20() noexcept {
    return kFunction_0x180003c20;
}

// 0x180003c70 FUN_180003c70
// source: re/dump/decompile/0x180003c70_FUN_180003c70.c
// size: 66 bytes; thunk: false
// body sha256: ed8115473405f395d2e062f0b1ed85d525250def2670e8bc8732308f579ea124
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003c70{
    "0x180003c70",
    "FUN_180003c70",
    R"F180003c70S(undefined FUN_180003c70())F180003c70S",
    R"B180003c70(// 0x180003c70  FUN_180003c70
// size=66 thunk=false
// signature: undefined FUN_180003c70()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003c70(void)

{
  _DAT_1803fab00 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803fab00 = _DAT_1803fab00;
  *(longlong *)(_DAT_1803fab00 + 8) = _DAT_1803fab00;
  *(longlong *)(_DAT_1803fab00 + 0x10) = _DAT_1803fab00;
  *(undefined2 *)(_DAT_1803fab00 + 0x18) = 0x101;
  atexit(FUN_18030b5e0);
  return;
}


)B180003c70",
    "ed8115473405f395d2e062f0b1ed85d525250def2670e8bc8732308f579ea124",
    R"F180003c70C(FUN_1802d8350
FUN_18030b5e0)F180003c70C",
    R"F180003c70D()F180003c70D",
    R"F180003c70T()F180003c70T",
    R"F180003c70F(19: return;)F180003c70F",
    R"F180003c70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180003c70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003c70() noexcept {
    return kFunction_0x180003c70;
}

// 0x180003cc0 FUN_180003cc0
// source: re/dump/decompile/0x180003cc0_FUN_180003cc0.c
// size: 66 bytes; thunk: false
// body sha256: 5430fe1e8d89c4a013fdd9192fc8dd3921c766cbe66ed4a985442d31d2127170
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003cc0{
    "0x180003cc0",
    "FUN_180003cc0",
    R"F180003cc0S(undefined FUN_180003cc0())F180003cc0S",
    R"B180003cc0(// 0x180003cc0  FUN_180003cc0
// size=66 thunk=false
// signature: undefined FUN_180003cc0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003cc0(void)

{
  _DAT_1803faa50 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803faa50 = _DAT_1803faa50;
  *(longlong *)(_DAT_1803faa50 + 8) = _DAT_1803faa50;
  *(longlong *)(_DAT_1803faa50 + 0x10) = _DAT_1803faa50;
  *(undefined2 *)(_DAT_1803faa50 + 0x18) = 0x101;
  atexit(FUN_18030b600);
  return;
}


)B180003cc0",
    "5430fe1e8d89c4a013fdd9192fc8dd3921c766cbe66ed4a985442d31d2127170",
    R"F180003cc0C(FUN_1802d8350
FUN_18030b600)F180003cc0C",
    R"F180003cc0D()F180003cc0D",
    R"F180003cc0T()F180003cc0T",
    R"F180003cc0F(19: return;)F180003cc0F",
    R"F180003cc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180003cc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003cc0() noexcept {
    return kFunction_0x180003cc0;
}

// 0x180003d10 FUN_180003d10
// source: re/dump/decompile/0x180003d10_FUN_180003d10.c
// size: 66 bytes; thunk: false
// body sha256: 3ad4e676342803472beff714322e16bb157209ebf87809f01c4acdc50a29c35b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003d10{
    "0x180003d10",
    "FUN_180003d10",
    R"F180003d10S(undefined FUN_180003d10())F180003d10S",
    R"B180003d10(// 0x180003d10  FUN_180003d10
// size=66 thunk=false
// signature: undefined FUN_180003d10()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003d10(void)

{
  _DAT_1803faae0 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803faae0 = _DAT_1803faae0;
  *(longlong *)(_DAT_1803faae0 + 8) = _DAT_1803faae0;
  *(longlong *)(_DAT_1803faae0 + 0x10) = _DAT_1803faae0;
  *(undefined2 *)(_DAT_1803faae0 + 0x18) = 0x101;
  atexit(FUN_18030b620);
  return;
}


)B180003d10",
    "3ad4e676342803472beff714322e16bb157209ebf87809f01c4acdc50a29c35b",
    R"F180003d10C(FUN_1802d8350
FUN_18030b620)F180003d10C",
    R"F180003d10D()F180003d10D",
    R"F180003d10T()F180003d10T",
    R"F180003d10F(19: return;)F180003d10F",
    R"F180003d10U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180003d10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003d10() noexcept {
    return kFunction_0x180003d10;
}

// 0x180003d60 FUN_180003d60
// source: re/dump/decompile/0x180003d60_FUN_180003d60.c
// size: 66 bytes; thunk: false
// body sha256: f663fdf7f9d5e2505f99fd1ab207d31bdcab6e7bc814a166c8fcb320e1af9cdd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003d60{
    "0x180003d60",
    "FUN_180003d60",
    R"F180003d60S(undefined FUN_180003d60())F180003d60S",
    R"B180003d60(// 0x180003d60  FUN_180003d60
// size=66 thunk=false
// signature: undefined FUN_180003d60()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003d60(void)

{
  _DAT_1803faa10 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803faa10 = _DAT_1803faa10;
  *(longlong *)(_DAT_1803faa10 + 8) = _DAT_1803faa10;
  *(longlong *)(_DAT_1803faa10 + 0x10) = _DAT_1803faa10;
  *(undefined2 *)(_DAT_1803faa10 + 0x18) = 0x101;
  atexit(FUN_18030b640);
  return;
}


)B180003d60",
    "f663fdf7f9d5e2505f99fd1ab207d31bdcab6e7bc814a166c8fcb320e1af9cdd",
    R"F180003d60C(FUN_1802d8350
FUN_18030b640)F180003d60C",
    R"F180003d60D()F180003d60D",
    R"F180003d60T()F180003d60T",
    R"F180003d60F(19: return;)F180003d60F",
    R"F180003d60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180003d60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003d60() noexcept {
    return kFunction_0x180003d60;
}

// 0x180003db0 FUN_180003db0
// source: re/dump/decompile/0x180003db0_FUN_180003db0.c
// size: 66 bytes; thunk: false
// body sha256: 1570f6da3713bb477a8449908ed23daad7cf64a46e59716066b789a733f94ff9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003db0{
    "0x180003db0",
    "FUN_180003db0",
    R"F180003db0S(undefined FUN_180003db0())F180003db0S",
    R"B180003db0(// 0x180003db0  FUN_180003db0
// size=66 thunk=false
// signature: undefined FUN_180003db0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003db0(void)

{
  _DAT_1803faab0 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803faab0 = _DAT_1803faab0;
  *(longlong *)(_DAT_1803faab0 + 8) = _DAT_1803faab0;
  *(longlong *)(_DAT_1803faab0 + 0x10) = _DAT_1803faab0;
  *(undefined2 *)(_DAT_1803faab0 + 0x18) = 0x101;
  atexit(FUN_18030b660);
  return;
}


)B180003db0",
    "1570f6da3713bb477a8449908ed23daad7cf64a46e59716066b789a733f94ff9",
    R"F180003db0C(FUN_1802d8350
FUN_18030b660)F180003db0C",
    R"F180003db0D()F180003db0D",
    R"F180003db0T()F180003db0T",
    R"F180003db0F(19: return;)F180003db0F",
    R"F180003db0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180003db0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003db0() noexcept {
    return kFunction_0x180003db0;
}

// 0x180003e00 FUN_180003e00
// source: re/dump/decompile/0x180003e00_FUN_180003e00.c
// size: 66 bytes; thunk: false
// body sha256: 7893d4e95e40714890086b9d904a621b1888f081305f1fd6887ac30d5a83f44e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003e00{
    "0x180003e00",
    "FUN_180003e00",
    R"F180003e00S(undefined FUN_180003e00())F180003e00S",
    R"B180003e00(// 0x180003e00  FUN_180003e00
// size=66 thunk=false
// signature: undefined FUN_180003e00()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003e00(void)

{
  _DAT_1803fa9f0 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803fa9f0 = _DAT_1803fa9f0;
  *(longlong *)(_DAT_1803fa9f0 + 8) = _DAT_1803fa9f0;
  *(longlong *)(_DAT_1803fa9f0 + 0x10) = _DAT_1803fa9f0;
  *(undefined2 *)(_DAT_1803fa9f0 + 0x18) = 0x101;
  atexit(FUN_18030b680);
  return;
}


)B180003e00",
    "7893d4e95e40714890086b9d904a621b1888f081305f1fd6887ac30d5a83f44e",
    R"F180003e00C(FUN_1802d8350
FUN_18030b680)F180003e00C",
    R"F180003e00D()F180003e00D",
    R"F180003e00T()F180003e00T",
    R"F180003e00F(19: return;)F180003e00F",
    R"F180003e00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180003e00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003e00() noexcept {
    return kFunction_0x180003e00;
}

// 0x180003e50 FUN_180003e50
// source: re/dump/decompile/0x180003e50_FUN_180003e50.c
// size: 54 bytes; thunk: false
// body sha256: 00f687afbde45e82ca3b2c04af4c2b4df2e53b620c5431153e8f67da06a955d9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003e50{
    "0x180003e50",
    "FUN_180003e50",
    R"F180003e50S(undefined FUN_180003e50())F180003e50S",
    R"B180003e50(// 0x180003e50  FUN_180003e50
// size=54 thunk=false
// signature: undefined FUN_180003e50()
// callers:
// status: ok


void FUN_180003e50(void)

{
  DAT_1803faac0 = FUN_1802d8350(0x30);
  *(longlong *)DAT_1803faac0 = DAT_1803faac0;
  *(longlong *)(DAT_1803faac0 + 8) = DAT_1803faac0;
  *(longlong *)(DAT_1803faac0 + 0x10) = DAT_1803faac0;
  *(undefined2 *)(DAT_1803faac0 + 0x18) = 0x101;
  atexit(FUN_18030b6a0);
  return;
}


)B180003e50",
    "00f687afbde45e82ca3b2c04af4c2b4df2e53b620c5431153e8f67da06a955d9",
    R"F180003e50C(FUN_1802d8350
FUN_18030b6a0)F180003e50C",
    R"F180003e50D(DAT_1803faac0)F180003e50D",
    R"F180003e50T()F180003e50T",
    R"F180003e50F(17: return;)F180003e50F",
    R"F180003e50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803faac0.)F180003e50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003e50() noexcept {
    return kFunction_0x180003e50;
}

// 0x180003e90 FUN_180003e90
// source: re/dump/decompile/0x180003e90_FUN_180003e90.c
// size: 66 bytes; thunk: false
// body sha256: 2be5e066574a7e17a016c064074595ed98ccc607c3ee8121a9ef4cd09c2af868
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003e90{
    "0x180003e90",
    "FUN_180003e90",
    R"F180003e90S(undefined FUN_180003e90())F180003e90S",
    R"B180003e90(// 0x180003e90  FUN_180003e90
// size=66 thunk=false
// signature: undefined FUN_180003e90()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003e90(void)

{
  _DAT_1803fad90 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803fad90 = _DAT_1803fad90;
  *(longlong *)(_DAT_1803fad90 + 8) = _DAT_1803fad90;
  *(longlong *)(_DAT_1803fad90 + 0x10) = _DAT_1803fad90;
  *(undefined2 *)(_DAT_1803fad90 + 0x18) = 0x101;
  atexit(FUN_18030b6b0);
  return;
}


)B180003e90",
    "2be5e066574a7e17a016c064074595ed98ccc607c3ee8121a9ef4cd09c2af868",
    R"F180003e90C(FUN_1802d8350
FUN_18030b6b0)F180003e90C",
    R"F180003e90D()F180003e90D",
    R"F180003e90T()F180003e90T",
    R"F180003e90F(19: return;)F180003e90F",
    R"F180003e90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180003e90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003e90() noexcept {
    return kFunction_0x180003e90;
}

// 0x180003ee0 FUN_180003ee0
// source: re/dump/decompile/0x180003ee0_FUN_180003ee0.c
// size: 66 bytes; thunk: false
// body sha256: cb22d6aca648fa80b3752b736f5f08a91215b1ed6b43521401f5b77988985818
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003ee0{
    "0x180003ee0",
    "FUN_180003ee0",
    R"F180003ee0S(undefined FUN_180003ee0())F180003ee0S",
    R"B180003ee0(// 0x180003ee0  FUN_180003ee0
// size=66 thunk=false
// signature: undefined FUN_180003ee0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003ee0(void)

{
  _DAT_1803face8 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803face8 = _DAT_1803face8;
  *(longlong *)(_DAT_1803face8 + 8) = _DAT_1803face8;
  *(longlong *)(_DAT_1803face8 + 0x10) = _DAT_1803face8;
  *(undefined2 *)(_DAT_1803face8 + 0x18) = 0x101;
  atexit(FUN_18030b6d0);
  return;
}


)B180003ee0",
    "cb22d6aca648fa80b3752b736f5f08a91215b1ed6b43521401f5b77988985818",
    R"F180003ee0C(FUN_1802d8350
FUN_18030b6d0)F180003ee0C",
    R"F180003ee0D()F180003ee0D",
    R"F180003ee0T()F180003ee0T",
    R"F180003ee0F(19: return;)F180003ee0F",
    R"F180003ee0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180003ee0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003ee0() noexcept {
    return kFunction_0x180003ee0;
}

// 0x180003f30 FUN_180003f30
// source: re/dump/recovered_f30/0x180003f30_FUN_180003f30.c
// size: 52526 bytes; thunk: false
// body sha256: 839fce097d5aebb87cd96880acb02723d7b00476a718e9cad65eff33a038d84b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180003f30{
    "0x180003f30",
    "FUN_180003f30",
    R"F180003f30S(undefined FUN_180003f30())F180003f30S",
    R"B180003f30(// 180003f30  FUN_180003f30
// signature: undefined FUN_180003f30()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180003f30(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 uStack_1bda8;
  undefined1 uStack_1bda7;
  undefined1 uStack_1bda6;
  undefined1 uStack_1bda5;
  undefined1 uStack_1bda4;
  undefined1 uStack_1bda3;
  undefined1 uStack_1bda2;
  undefined1 uStack_1bda1;
  undefined1 uStack_1bda0;
  undefined1 uStack_1bd9f;
  undefined1 uStack_1bd9e;
  undefined1 uStack_1bd9d;
  undefined1 uStack_1bd9c;
  undefined1 uStack_1bd9b;
  undefined1 uStack_1bd9a;
  undefined1 uStack_1bd99;
  undefined1 uStack_1bd98;
  undefined1 uStack_1bd97;
  undefined1 uStack_1bd96;
  undefined1 uStack_1bd95;
  undefined1 uStack_1bd94;
  undefined1 uStack_1bd93;
  undefined1 uStack_1bd92;
  undefined1 uStack_1bd91;
  undefined1 uStack_1bd90;
  undefined1 uStack_1bd8f;
  undefined1 uStack_1bd8e;
  undefined1 uStack_1bd8d;
  undefined1 uStack_1bd8c;
  undefined1 uStack_1bd8b;
  undefined1 uStack_1bd8a;
  undefined1 uStack_1bd89;
  undefined1 uStack_1bd88;
  undefined1 uStack_1bd87;
  undefined1 uStack_1bd86;
  undefined1 uStack_1bd85;
  undefined1 uStack_1bd84;
  undefined1 uStack_1bd83;
  undefined1 uStack_1bd82;
  undefined1 uStack_1bd81;
  undefined1 uStack_1bd80;
  undefined1 uStack_1bd7f;
  undefined1 uStack_1bd7e;
  undefined1 uStack_1bd7d;
  undefined1 uStack_1bd7c;
  undefined1 uStack_1bd7b;
  undefined1 uStack_1bd7a;
  undefined1 uStack_1bd79;
  undefined1 uStack_1bd78;
  undefined1 uStack_1bd77;
  undefined1 uStack_1bd76;
  undefined1 uStack_1bd75;
  undefined1 uStack_1bd74;
  undefined1 uStack_1bd73;
  undefined1 uStack_1bd72;
  undefined1 uStack_1bd71;
  undefined1 uStack_1bd70;
  undefined1 uStack_1bd6f;
  undefined1 uStack_1bd6e;
  undefined1 uStack_1bd6d;
  undefined1 uStack_1bd6c;
  undefined1 uStack_1bd6b;
  undefined1 uStack_1bd6a;
  undefined1 uStack_1bd69;
  undefined1 uStack_1bd68;
  undefined1 uStack_1bd67;
  undefined1 uStack_1bd66;
  undefined1 uStack_1bd65;
  undefined1 uStack_1bd64;
  undefined1 uStack_1bd63;
  undefined1 uStack_1bd62;
  undefined1 uStack_1bd61;
  undefined1 uStack_1bd60;
  undefined1 uStack_1bd5f;
  undefined1 uStack_1bd5e;
  undefined1 uStack_1bd5d;
  undefined1 uStack_1bd5c;
  undefined1 uStack_1bd5b;
  undefined1 uStack_1bd5a;
  undefined1 uStack_1bd59;
  undefined1 uStack_1bd58;
  undefined1 uStack_1bd57;
  undefined1 uStack_1bd56;
  undefined1 uStack_1bd55;
  undefined1 uStack_1bd54;
  undefined1 uStack_1bd53;
  undefined1 uStack_1bd52;
  undefined1 uStack_1bd51;
  undefined1 uStack_1bd50;
  undefined1 uStack_1bd4f;
  undefined1 uStack_1bd4e;
  undefined1 uStack_1bd4d;
  undefined1 uStack_1bd4c;
  undefined1 uStack_1bd4b;
  undefined1 uStack_1bd4a;
  undefined1 uStack_1bd49;
  undefined1 uStack_1bd48;
  undefined1 uStack_1bd47;
  undefined1 uStack_1bd46;
  undefined1 uStack_1bd45;
  undefined1 uStack_1bd44;
  undefined1 uStack_1bd43;
  undefined1 uStack_1bd42;
  undefined1 uStack_1bd41;
  undefined1 uStack_1bd40;
  undefined1 uStack_1bd3f;
  undefined1 uStack_1bd3e;
  undefined1 uStack_1bd3d;
  undefined1 uStack_1bd3c;
  undefined1 uStack_1bd3b;
  undefined1 uStack_1bd3a;
  undefined1 uStack_1bd39;
  undefined1 uStack_1bd38;
  undefined1 uStack_1bd37;
  undefined1 uStack_1bd36;
  undefined1 uStack_1bd35;
  undefined1 uStack_1bd34;
  undefined1 uStack_1bd33;
  undefined1 uStack_1bd32;
  undefined1 uStack_1bd31;
  undefined1 uStack_1bd30;
  undefined1 uStack_1bd2f;
  undefined1 uStack_1bd2e;
  undefined1 uStack_1bd2d;
  undefined1 uStack_1bd2c;
  undefined1 uStack_1bd2b;
  undefined1 uStack_1bd2a;
  undefined1 uStack_1bd29;
  undefined1 uStack_1bd28;
  undefined1 uStack_1bd27;
  undefined1 uStack_1bd26;
  undefined1 uStack_1bd25;
  undefined1 uStack_1bd24;
  undefined1 uStack_1bd23;
  undefined1 uStack_1bd22;
  undefined1 uStack_1bd21;
  undefined1 uStack_1bd20;
  undefined1 uStack_1bd1f;
  undefined1 uStack_1bd1e;
  undefined1 uStack_1bd1d;
  undefined1 uStack_1bd1c;
  undefined1 uStack_1bd1b;
  undefined1 uStack_1bd1a;
  undefined1 uStack_1bd19;
  undefined1 uStack_1bd18;
  undefined1 uStack_1bd17;
  undefined1 uStack_1bd16;
  undefined1 uStack_1bd15;
  undefined1 uStack_1bd14;
  undefined1 uStack_1bd13;
  undefined1 uStack_1bd12;
  undefined1 uStack_1bd11;
  undefined1 uStack_1bd10;
  undefined1 uStack_1bd0f;
  undefined1 uStack_1bd0e;
  undefined1 uStack_1bd0d;
  undefined1 uStack_1bd0c;
  undefined1 uStack_1bd0b;
  undefined1 uStack_1bd0a;
  undefined1 uStack_1bd09;
  undefined1 uStack_1bd08;
  undefined1 uStack_1bd07;
  undefined1 uStack_1bd06;
  undefined1 uStack_1bd05;
  undefined1 uStack_1bd04;
  undefined1 uStack_1bd03;
  undefined1 uStack_1bd02;
  undefined1 uStack_1bd01;
  undefined1 uStack_1bd00;
  undefined1 uStack_1bcff;
  undefined1 uStack_1bcfe;
  undefined1 uStack_1bcfd;
  undefined1 uStack_1bcfc;
  undefined1 uStack_1bcfb;
  undefined1 uStack_1bcfa;
  undefined1 uStack_1bcf9;
  undefined1 uStack_1bcf8;
  undefined1 uStack_1bcf7;
  undefined1 uStack_1bcf6;
  undefined1 uStack_1bcf5;
  undefined1 uStack_1bcf4;
  undefined1 uStack_1bcf3;
  undefined1 uStack_1bcf2;
  undefined1 uStack_1bcf1;
  undefined1 uStack_1bcf0;
  undefined1 uStack_1bcef;
  undefined1 uStack_1bcee;
  undefined1 uStack_1bced;
  undefined1 uStack_1bcec;
  undefined1 uStack_1bceb;
  undefined1 uStack_1bcea;
  undefined1 uStack_1bce9;
  undefined1 uStack_1bce8;
  undefined1 auStack_1bce7 [3];
  undefined4 uStack_1bce4;
  undefined4 uStack_1bce0;
  undefined4 uStack_1bcdc;
  undefined4 uStack_1bcd8;
  undefined4 uStack_1bcd4;
  undefined4 uStack_1bcd0;
  undefined4 uStack_1bccc;
  undefined4 uStack_1bcc8;
  undefined4 uStack_1bcc4;
  undefined4 uStack_1bcc0;
  undefined4 uStack_1bcbc;
  undefined4 uStack_1bcb8;
  undefined4 uStack_1bcb4;
  undefined4 uStack_1bcb0;
  undefined4 uStack_1bcac;
  undefined4 uStack_1bca8;
  undefined4 uStack_1bca4;
  undefined4 uStack_1bca0;
  undefined4 uStack_1bc9c;
  undefined4 uStack_1bc98;
  undefined4 uStack_1bc94;
  undefined4 uStack_1bc90;
  undefined4 uStack_1bc8c;
  undefined4 uStack_1bc88;
  undefined4 uStack_1bc84;
  undefined4 uStack_1bc80;
  undefined4 uStack_1bc7c;
  undefined4 uStack_1bc78;
  undefined4 uStack_1bc74;
  undefined4 uStack_1bc70;
  undefined4 uStack_1bc6c;
  undefined4 uStack_1bc68;
  undefined4 uStack_1bc64;
  undefined4 uStack_1bc60;
  undefined4 uStack_1bc5c;
  undefined4 uStack_1bc58;
  undefined4 uStack_1bc54;
  undefined4 uStack_1bc50;
  undefined4 uStack_1bc4c;
  undefined4 uStack_1bc48;
  undefined4 uStack_1bc44;
  undefined4 uStack_1bc40;
  undefined4 uStack_1bc3c;
  undefined4 uStack_1bc38;
  undefined4 uStack_1bc34;
  undefined4 uStack_1bc30;
  undefined4 uStack_1bc2c;
  undefined4 uStack_1bc28;
  undefined4 uStack_1bc24;
  undefined4 uStack_1bc20;
  undefined4 uStack_1bc1c;
  undefined4 uStack_1bc18;
  undefined4 uStack_1bc14;
  undefined4 uStack_1bc10;
  undefined4 uStack_1bc0c;
  undefined4 uStack_1bc08;
  undefined4 uStack_1bc04;
  undefined4 uStack_1bc00;
  undefined4 uStack_1bbfc;
  undefined4 uStack_1bbf8;
  undefined4 uStack_1bbf4;
  undefined4 uStack_1bbf0;
  undefined4 uStack_1bbec;
  undefined4 uStack_1bbe8;
  undefined4 uStack_1bbe4;
  undefined4 uStack_1bbe0;
  undefined4 uStack_1bbdc;
  undefined4 uStack_1bbd8;
  undefined4 uStack_1bbd4;
  undefined4 uStack_1bbd0;
  undefined4 uStack_1bbcc;
  undefined4 uStack_1bbc8;
  undefined4 uStack_1bbc4;
  undefined4 uStack_1bbc0;
  undefined4 uStack_1bbbc;
  undefined4 uStack_1bbb8;
  undefined4 uStack_1bbb4;
  undefined4 uStack_1bbb0;
  undefined4 uStack_1bbac;
  undefined4 uStack_1bba8;
  undefined4 uStack_1bba4;
  undefined4 uStack_1bba0;
  undefined4 uStack_1bb9c;
  undefined4 uStack_1bb98;
  undefined4 uStack_1bb94;
  undefined4 uStack_1bb90;
  undefined4 uStack_1bb8c;
  undefined4 uStack_1bb88;
  undefined4 uStack_1bb84;
  undefined4 uStack_1bb80;
  undefined4 uStack_1bb7c;
  undefined4 uStack_1bb78;
  undefined4 uStack_1bb74;
  undefined4 uStack_1bb70;
  undefined4 uStack_1bb6c;
  undefined4 uStack_1bb68;
  undefined4 uStack_1bb64;
  undefined4 uStack_1bb60;
  undefined4 uStack_1bb5c;
  undefined4 uStack_1bb58;
  undefined4 uStack_1bb54;
  undefined4 uStack_1bb50;
  undefined4 uStack_1bb4c;
  undefined4 uStack_1bb48;
  undefined4 uStack_1bb44;
  undefined4 uStack_1bb40;
  undefined4 uStack_1bb3c;
  undefined4 uStack_1bb38;
  undefined4 uStack_1bb34;
  undefined4 uStack_1bb30;
  undefined4 uStack_1bb2c;
  undefined4 uStack_1bb28;
  undefined4 uStack_1bb24;
  undefined4 uStack_1bb20;
  undefined4 uStack_1bb1c;
  undefined4 uStack_1bb18;
  undefined4 uStack_1bb14;
  undefined4 uStack_1bb10;
  undefined4 uStack_1bb0c;
  undefined4 uStack_1bb08;
  undefined4 uStack_1bb04;
  undefined4 uStack_1bb00;
  undefined4 uStack_1bafc;
  undefined4 uStack_1baf8;
  undefined4 uStack_1baf4;
  undefined4 uStack_1baf0;
  undefined4 uStack_1baec;
  undefined4 uStack_1bae8;
  undefined4 uStack_1bae4;
  undefined4 uStack_1bae0;
  undefined4 uStack_1badc;
  undefined4 uStack_1bad8;
  undefined4 uStack_1bad4;
  undefined4 uStack_1bad0;
  undefined4 uStack_1bacc;
  undefined4 uStack_1bac8;
  undefined4 uStack_1bac4;
  undefined4 uStack_1bac0;
  undefined4 uStack_1babc;
  undefined4 uStack_1bab8;
  undefined4 uStack_1bab4;
  undefined4 uStack_1bab0;
  undefined4 uStack_1baac;
  undefined4 uStack_1baa8;
  undefined4 uStack_1baa4;
  undefined4 uStack_1baa0;
  undefined4 uStack_1ba9c;
  undefined4 uStack_1ba98;
  undefined4 uStack_1ba94;
  undefined4 uStack_1ba90;
  undefined4 uStack_1ba8c;
  undefined4 uStack_1ba88;
  undefined4 uStack_1ba84;
  undefined4 uStack_1ba80;
  undefined4 uStack_1ba7c;
  undefined4 uStack_1ba78;
  undefined4 uStack_1ba74;
  undefined4 uStack_1ba70;
  undefined4 uStack_1ba6c;
  undefined4 uStack_1ba68;
  undefined4 uStack_1ba64;
  undefined4 uStack_1ba60;
  undefined4 uStack_1ba5c;
  undefined4 uStack_1ba58;
  undefined4 uStack_1ba54;
  undefined4 uStack_1ba50;
  undefined4 uStack_1ba4c;
  undefined4 uStack_1ba48;
  undefined4 uStack_1ba44;
  undefined4 uStack_1ba40;
  undefined4 uStack_1ba3c;
  undefined4 uStack_1ba38;
  undefined4 uStack_1ba34;
  undefined4 uStack_1ba30;
  undefined4 uStack_1ba2c;
  undefined4 uStack_1ba28;
  undefined4 uStack_1ba24;
  undefined4 uStack_1ba20;
  undefined4 uStack_1ba1c;
  undefined4 uStack_1ba18;
  undefined4 uStack_1ba14;
  undefined4 uStack_1ba10;
  undefined4 uStack_1ba0c;
  undefined4 uStack_1ba08;
  undefined4 uStack_1ba04;
  undefined4 uStack_1ba00;
  undefined4 uStack_1b9fc;
  undefined4 uStack_1b9f8;
  undefined4 uStack_1b9f4;
  undefined4 uStack_1b9f0;
  undefined4 uStack_1b9ec;
  undefined4 uStack_1b9e8;
  undefined4 uStack_1b9e4;
  undefined4 uStack_1b9e0;
  undefined4 uStack_1b9dc;
  undefined4 uStack_1b9d8;
  undefined4 uStack_1b9d4;
  undefined4 uStack_1b9d0;
  undefined4 uStack_1b9cc;
  undefined4 uStack_1b9c8;
  undefined4 uStack_1b9c4;
  undefined4 uStack_1b9c0;
  undefined4 uStack_1b9bc;
  undefined4 uStack_1b9b8;
  undefined4 uStack_1b9b4;
  undefined4 uStack_1b9b0;
  undefined4 uStack_1b9ac;
  undefined4 uStack_1b9a8;
  undefined4 uStack_1b9a4;
  undefined4 uStack_1b9a0;
  undefined4 uStack_1b99c;
  undefined4 uStack_1b998;
  undefined4 uStack_1b994;
  undefined4 uStack_1b990;
  undefined4 uStack_1b98c;
  undefined4 uStack_1b988;
  undefined4 uStack_1b984;
  undefined4 uStack_1b980;
  undefined4 uStack_1b97c;
  undefined4 uStack_1b978;
  undefined4 uStack_1b974;
  undefined4 uStack_1b970;
  undefined4 uStack_1b96c;
  undefined4 uStack_1b968;
  undefined4 uStack_1b964;
  undefined4 uStack_1b960;
  undefined4 uStack_1b95c;
  undefined4 uStack_1b958;
  undefined4 auStack_1b954 [3];
  undefined1 *puStack_1b948;
  undefined1 *puStack_1b940;
  undefined8 *puStack_1b938;
  undefined8 *puStack_1b930;
  undefined8 uStack_1b928;
  undefined8 uStack_1b920;
  undefined8 uStack_1b918;
  undefined8 uStack_1b910;
  undefined8 uStack_1b908;
  undefined8 uStack_1b900;
  undefined8 uStack_1b8f8;
  undefined8 uStack_1b8f0;
  undefined8 uStack_1b8e8;
  undefined8 uStack_1b8e0;
  undefined8 uStack_1b8d8;
  undefined8 uStack_1b8d0;
  undefined8 uStack_1b8c8;
  undefined8 uStack_1b8c0;
  undefined8 uStack_1b8b8;
  undefined8 uStack_1b8b0;
  undefined8 uStack_1b8a8;
  undefined8 uStack_1b8a0;
  undefined8 uStack_1b898;
  undefined8 uStack_1b890;
  undefined8 uStack_1b888;
  undefined8 uStack_1b880;
  undefined8 uStack_1b878;
  undefined8 uStack_1b870;
  undefined8 uStack_1b868;
  undefined8 uStack_1b860;
  undefined8 uStack_1b858;
  undefined8 uStack_1b850;
  undefined8 uStack_1b848;
  undefined8 uStack_1b840;
  undefined8 uStack_1b838;
  undefined8 uStack_1b830;
  undefined8 uStack_1b828;
  undefined8 uStack_1b820;
  undefined8 uStack_1b818;
  undefined8 uStack_1b810;
  undefined8 uStack_1b808;
  undefined8 uStack_1b800;
  undefined8 uStack_1b7f8;
  undefined8 uStack_1b7f0;
  undefined8 uStack_1b7e8;
  undefined8 uStack_1b7e0;
  undefined8 uStack_1b7d8;
  undefined8 uStack_1b7d0;
  undefined8 uStack_1b7c8;
  undefined8 uStack_1b7c0;
  undefined8 uStack_1b7b8;
  undefined8 uStack_1b7b0;
  undefined8 uStack_1b7a8;
  undefined8 uStack_1b7a0;
  undefined8 uStack_1b798;
  undefined8 uStack_1b790;
  undefined8 uStack_1b788;
  undefined8 uStack_1b780;
  undefined8 uStack_1b778;
  undefined8 uStack_1b770;
  undefined8 uStack_1b768;
  undefined8 uStack_1b760;
  undefined8 uStack_1b758;
  undefined8 uStack_1b750;
  undefined8 uStack_1b748;
  undefined8 uStack_1b740;
  undefined8 uStack_1b738;
  undefined8 uStack_1b730;
  undefined8 uStack_1b728;
  undefined8 uStack_1b720;
  undefined8 uStack_1b718;
  undefined8 uStack_1b710;
  undefined8 uStack_1b708;
  undefined8 uStack_1b700;
  undefined8 uStack_1b6f8;
  undefined8 uStack_1b6f0;
  undefined8 uStack_1b6e8;
  undefined8 uStack_1b6e0;
  undefined8 uStack_1b6d8;
  undefined8 uStack_1b6d0;
  undefined8 uStack_1b6c8;
  undefined8 uStack_1b6c0;
  undefined8 uStack_1b6b8;
  undefined8 uStack_1b6b0;
  undefined8 uStack_1b6a8;
  undefined8 uStack_1b6a0;
  undefined8 uStack_1b698;
  undefined8 uStack_1b690;
  undefined8 uStack_1b688;
  undefined8 uStack_1b680;
  undefined8 uStack_1b678;
  undefined8 uStack_1b670;
  undefined8 uStack_1b668;
  undefined8 uStack_1b660;
  undefined8 uStack_1b658;
  undefined8 uStack_1b650;
  undefined8 uStack_1b648;
  undefined8 uStack_1b640;
  undefined8 uStack_1b638;
  undefined8 uStack_1b630;
  undefined8 uStack_1b628;
  undefined8 uStack_1b620;
  undefined8 uStack_1b618;
  undefined8 uStack_1b610;
  undefined8 uStack_1b608;
  undefined8 uStack_1b600;
  undefined8 uStack_1b5f8;
  undefined8 uStack_1b5f0;
  undefined8 uStack_1b5e8;
  undefined8 uStack_1b5e0;
  undefined8 uStack_1b5d8;
  undefined8 uStack_1b5d0;
  undefined8 uStack_1b5c8;
  undefined8 uStack_1b5c0;
  undefined8 uStack_1b5b8;
  undefined8 uStack_1b5b0;
  undefined8 uStack_1b5a8;
  undefined8 uStack_1b5a0;
  undefined8 uStack_1b598;
  undefined8 uStack_1b590;
  undefined8 uStack_1b588;
  undefined8 uStack_1b580;
  undefined8 uStack_1b578;
  undefined8 uStack_1b570;
  undefined8 uStack_1b568;
  undefined8 uStack_1b560;
  undefined8 uStack_1b558;
  undefined8 uStack_1b550;
  undefined8 uStack_1b548;
  undefined8 uStack_1b540;
  undefined8 uStack_1b538;
  undefined8 uStack_1b530;
  undefined8 uStack_1b528;
  undefined8 uStack_1b520;
  undefined8 uStack_1b518;
  undefined8 uStack_1b510;
  undefined8 uStack_1b508;
  undefined8 uStack_1b500;
  undefined8 uStack_1b4f8;
  undefined8 uStack_1b4f0;
  undefined8 uStack_1b4e8;
  undefined8 uStack_1b4e0;
  undefined8 uStack_1b4d8;
  undefined8 uStack_1b4d0;
  undefined8 uStack_1b4c8;
  undefined8 uStack_1b4c0;
  undefined8 uStack_1b4b8;
  undefined8 uStack_1b4b0;
  undefined8 uStack_1b4a8;
  undefined8 uStack_1b4a0;
  undefined8 uStack_1b498;
  undefined8 uStack_1b490;
  undefined8 uStack_1b488;
  undefined8 uStack_1b480;
  undefined8 uStack_1b478;
  undefined8 uStack_1b470;
  undefined8 uStack_1b468;
  undefined8 uStack_1b460;
  undefined8 uStack_1b458;
  undefined8 uStack_1b450;
  undefined8 uStack_1b448;
  undefined8 uStack_1b440;
  undefined8 uStack_1b438;
  undefined8 uStack_1b430;
  undefined8 uStack_1b428;
  undefined8 uStack_1b420;
  undefined8 uStack_1b418;
  undefined8 uStack_1b410;
  undefined8 uStack_1b408;
  undefined8 uStack_1b400;
  undefined8 uStack_1b3f8;
  undefined8 uStack_1b3f0;
  undefined8 uStack_1b3e8;
  undefined8 uStack_1b3e0;
  undefined8 uStack_1b3d8;
  undefined8 uStack_1b3d0;
  undefined8 uStack_1b3c8;
  undefined8 uStack_1b3c0;
  undefined8 uStack_1b3b8;
  undefined8 uStack_1b3b0;
  undefined8 uStack_1b3a8;
  undefined8 uStack_1b3a0;
  undefined8 uStack_1b398;
  undefined8 uStack_1b390;
  undefined8 uStack_1b388;
  undefined8 uStack_1b380;
  undefined8 uStack_1b378;
  undefined8 uStack_1b370;
  undefined8 uStack_1b368;
  undefined8 uStack_1b360;
  undefined8 uStack_1b358;
  undefined8 uStack_1b350;
  undefined8 uStack_1b348;
  undefined8 uStack_1b340;
  undefined8 uStack_1b338;
  undefined8 uStack_1b330;
  undefined8 uStack_1b328;
  undefined8 uStack_1b320;
  undefined8 uStack_1b318;
  undefined8 uStack_1b310;
  undefined8 uStack_1b308;
  undefined8 uStack_1b300;
  undefined8 uStack_1b2f8;
  undefined8 uStack_1b2f0;
  undefined8 uStack_1b2e8;
  undefined8 uStack_1b2e0;
  undefined8 uStack_1b2d8;
  undefined8 uStack_1b2d0;
  undefined8 uStack_1b2c8;
  undefined8 uStack_1b2c0;
  undefined8 uStack_1b2b8;
  undefined8 uStack_1b2b0;
  undefined8 uStack_1b2a8;
  undefined8 uStack_1b2a0;
  undefined8 uStack_1b298;
  undefined8 uStack_1b290;
  undefined8 uStack_1b288;
  undefined8 uStack_1b280;
  undefined8 uStack_1b278;
  undefined8 uStack_1b270;
  undefined8 uStack_1b268;
  undefined8 uStack_1b260;
  undefined8 uStack_1b258;
  undefined8 uStack_1b250;
  undefined8 uStack_1b248;
  undefined8 uStack_1b240;
  undefined8 uStack_1b238;
  undefined8 uStack_1b230;
  undefined8 uStack_1b228;
  undefined8 uStack_1b220;
  undefined8 uStack_1b218;
  undefined8 uStack_1b210;
  undefined8 uStack_1b208;
  undefined8 uStack_1b200;
  undefined8 uStack_1b1f8;
  undefined8 uStack_1b1f0;
  undefined8 uStack_1b1e8;
  undefined8 uStack_1b1e0;
  undefined8 uStack_1b1d8;
  undefined8 uStack_1b1d0;
  undefined8 uStack_1b1c8;
  undefined8 uStack_1b1c0;
  undefined8 uStack_1b1b8;
  undefined8 uStack_1b1b0;
  undefined8 uStack_1b1a8;
  undefined8 uStack_1b1a0;
  undefined8 uStack_1b198;
  undefined8 uStack_1b190;
  undefined8 uStack_1b188;
  undefined8 uStack_1b180;
  undefined8 uStack_1b178;
  undefined8 uStack_1b170;
  undefined8 uStack_1b168;
  undefined8 uStack_1b160;
  undefined8 uStack_1b158;
  undefined8 uStack_1b150;
  undefined8 uStack_1b148;
  undefined8 uStack_1b140;
  undefined8 uStack_1b138;
  undefined8 uStack_1b130;
  undefined8 uStack_1b128;
  undefined8 uStack_1b120;
  undefined8 uStack_1b118;
  undefined8 uStack_1b110;
  undefined8 uStack_1b108;
  undefined8 uStack_1b100;
  undefined8 uStack_1b0f8;
  undefined8 uStack_1b0f0;
  undefined8 uStack_1b0e8;
  undefined8 uStack_1b0e0;
  undefined8 uStack_1b0d8;
  undefined8 uStack_1b0d0;
  undefined8 uStack_1b0c8;
  undefined8 uStack_1b0c0;
  undefined8 uStack_1b0b8;
  undefined8 uStack_1b0b0;
  undefined8 uStack_1b0a8;
  undefined8 uStack_1b0a0;
  undefined8 uStack_1b098;
  undefined8 uStack_1b090;
  undefined8 uStack_1b088;
  undefined8 uStack_1b080;
  undefined8 uStack_1b078;
  undefined8 uStack_1b070;
  undefined8 uStack_1b068;
  undefined8 uStack_1b060;
  undefined8 uStack_1b058;
  undefined8 uStack_1b050;
  undefined8 uStack_1b048;
  undefined8 uStack_1b040;
  undefined8 uStack_1b038;
  undefined8 uStack_1b030;
  undefined8 uStack_1b028;
  undefined8 uStack_1b020;
  undefined8 uStack_1b018;
  undefined8 uStack_1b010;
  undefined8 uStack_1b008;
  undefined8 uStack_1b000;
  undefined8 uStack_1aff8;
  undefined8 uStack_1aff0;
  undefined8 uStack_1afe8;
  undefined8 uStack_1afe0;
  undefined8 uStack_1afd8;
  undefined8 uStack_1afd0;
  undefined8 uStack_1afc8;
  undefined8 uStack_1afc0;
  undefined8 uStack_1afb8;
  undefined8 uStack_1afb0;
  undefined8 uStack_1afa8;
  undefined8 uStack_1afa0;
  undefined8 uStack_1af98;
  undefined8 uStack_1af90;
  undefined8 uStack_1af88;
  undefined8 uStack_1af80;
  undefined8 uStack_1af78;
  undefined8 uStack_1af70;
  undefined8 uStack_1af68;
  undefined8 uStack_1af60;
  undefined8 uStack_1af58;
  undefined8 uStack_1af50;
  undefined8 uStack_1af48;
  undefined8 uStack_1af40;
  undefined8 uStack_1af38;
  undefined8 uStack_1af30;
  undefined8 uStack_1af28;
  undefined8 uStack_1af20;
  undefined8 uStack_1af18;
  undefined8 uStack_1af10;
  undefined8 uStack_1af08;
  undefined8 uStack_1af00;
  undefined8 uStack_1aef8;
  undefined8 uStack_1aef0;
  undefined8 uStack_1aee8;
  undefined8 uStack_1aee0;
  undefined8 uStack_1aed8;
  undefined8 uStack_1aed0;
  undefined8 uStack_1aec8;
  undefined8 uStack_1aec0;
  undefined8 uStack_1aeb8;
  undefined8 uStack_1aeb0;
  undefined8 uStack_1aea8;
  undefined8 uStack_1aea0;
  undefined8 uStack_1ae98;
  undefined8 uStack_1ae90;
  undefined8 uStack_1ae88;
  undefined8 uStack_1ae80;
  undefined8 uStack_1ae78;
  undefined8 uStack_1ae70;
  undefined8 uStack_1ae68;
  undefined8 uStack_1ae60;
  undefined8 uStack_1ae58;
  undefined8 uStack_1ae50;
  undefined8 uStack_1ae48;
  undefined8 uStack_1ae40;
  undefined8 uStack_1ae38;
  undefined8 uStack_1ae30;
  undefined8 uStack_1ae28;
  undefined8 uStack_1ae20;
  undefined8 uStack_1ae18;
  undefined8 uStack_1ae10;
  undefined8 uStack_1ae08;
  undefined8 uStack_1ae00;
  undefined8 uStack_1adf8;
  undefined8 uStack_1adf0;
  undefined8 uStack_1ade8;
  undefined8 uStack_1ade0;
  undefined8 uStack_1add8;
  undefined8 uStack_1add0;
  undefined8 uStack_1adc8;
  undefined8 uStack_1adc0;
  undefined8 uStack_1adb8;
  undefined8 uStack_1adb0;
  undefined8 uStack_1ada8;
  undefined8 uStack_1ada0;
  undefined8 uStack_1ad98;
  undefined8 uStack_1ad90;
  undefined8 uStack_1ad88;
  undefined8 uStack_1ad80;
  undefined8 uStack_1ad78;
  undefined8 uStack_1ad70;
  undefined8 uStack_1ad68;
  undefined8 uStack_1ad60;
  undefined8 uStack_1ad58;
  undefined8 uStack_1ad50;
  undefined8 uStack_1ad48;
  undefined8 uStack_1ad40;
  undefined8 uStack_1ad38;
  undefined8 uStack_1ad30;
  undefined8 uStack_1ad28;
  undefined8 uStack_1ad20;
  undefined8 uStack_1ad18;
  undefined8 uStack_1ad10;
  undefined8 uStack_1ad08;
  undefined8 uStack_1ad00;
  undefined8 uStack_1acf8;
  undefined8 uStack_1acf0;
  undefined8 uStack_1ace8;
  undefined8 uStack_1ace0;
  undefined8 uStack_1acd8;
  undefined8 uStack_1acd0;
  undefined8 uStack_1acc8;
  undefined8 uStack_1acc0;
  undefined8 uStack_1acb8;
  undefined8 uStack_1acb0;
  undefined8 uStack_1aca8;
  undefined8 uStack_1aca0;
  undefined8 uStack_1ac98;
  undefined8 uStack_1ac90;
  undefined8 uStack_1ac88;
  undefined8 uStack_1ac80;
  undefined8 uStack_1ac78;
  undefined8 uStack_1ac70;
  undefined8 uStack_1ac68;
  undefined8 uStack_1ac60;
  undefined8 uStack_1ac58;
  undefined8 uStack_1ac50;
  undefined8 uStack_1ac48;
  undefined8 uStack_1ac40;
  undefined8 uStack_1ac38;
  undefined8 uStack_1ac30;
  undefined8 uStack_1ac28;
  undefined8 uStack_1ac20;
  undefined8 uStack_1ac18;
  undefined8 uStack_1ac10;
  undefined8 uStack_1ac08;
  undefined8 uStack_1ac00;
  undefined8 uStack_1abf8;
  undefined8 uStack_1abf0;
  undefined8 uStack_1abe8;
  undefined8 uStack_1abe0;
  undefined8 uStack_1abd8;
  undefined8 uStack_1abd0;
  undefined8 uStack_1abc8;
  undefined8 uStack_1abc0;
  undefined8 uStack_1abb8;
  undefined8 uStack_1abb0;
  undefined8 uStack_1aba8;
  undefined8 uStack_1aba0;
  undefined8 uStack_1ab98;
  undefined8 uStack_1ab90;
  undefined8 uStack_1ab88;
  undefined8 uStack_1ab80;
  undefined8 uStack_1ab78;
  undefined8 uStack_1ab70;
  undefined8 uStack_1ab68;
  undefined8 uStack_1ab60;
  undefined1 *puStack_1ab58;
  undefined1 *puStack_1ab50;
  undefined1 *puStack_1ab48;
  undefined1 *puStack_1ab40;
  undefined1 *puStack_1ab38;
  undefined1 *puStack_1ab30;
  undefined1 *puStack_1ab28;
  undefined1 *puStack_1ab20;
  undefined8 auStack_1ab18 [2];
  undefined8 *puStack_1ab08;
  undefined1 *puStack_1ab00;
  longlong *plStack_1aaf8;
  longlong *plStack_1aaf0;
  undefined1 *puStack_1aae8;
  undefined1 *puStack_1aae0;
  undefined1 *puStack_1aad8;
  undefined1 *puStack_1aad0;
  undefined1 *puStack_1aac8;
  undefined1 *puStack_1aac0;
  undefined8 auStack_1aab8 [2];
  undefined8 uStack_1aaa8;
  longlong lStack_1aaa0;
  longlong lStack_1aa98;
  undefined8 uStack_1aa90;
  undefined8 uStack_1aa88;
  undefined8 uStack_1aa80;
  undefined8 uStack_1aa78;
  undefined8 uStack_1aa70;
  undefined8 uStack_1aa68;
  undefined8 uStack_1aa60;
  undefined8 uStack_1aa58;
  undefined8 uStack_1aa50;
  longlong lStack_1aa48;
  longlong lStack_1aa40;
  undefined8 uStack_1aa38;
  undefined8 uStack_1aa30;
  undefined8 uStack_1aa28;
  undefined8 uStack_1aa20;
  undefined8 uStack_1aa18;
  undefined8 uStack_1aa10;
  undefined8 uStack_1aa08;
  undefined8 uStack_1aa00;
  longlong lStack_1a9f8;
  undefined8 uStack_1a9f0;
  undefined8 uStack_1a9e8;
  undefined8 uStack_1a9e0;
  undefined8 uStack_1a9d8;
  undefined8 uStack_1a9d0;
  undefined8 uStack_1a9c8;
  undefined8 uStack_1a9c0;
  undefined8 uStack_1a9b8;
  undefined8 uStack_1a9b0;
  longlong *plStack_1a9a8;
  undefined4 *puStack_1a9a0;
  longlong *plStack_1a998;
  longlong *plStack_1a990;
  undefined8 *puStack_1a988;
  undefined8 *puStack_1a980;
  undefined1 *puStack_1a978;
  undefined8 *puStack_1a970;
  longlong *plStack_1a968;
  longlong *plStack_1a960;
  undefined4 *puStack_1a958;
  longlong *plStack_1a950;
  longlong *plStack_1a948;
  undefined8 *puStack_1a940;
  longlong *plStack_1a938;
  longlong *plStack_1a930;
  undefined8 *puStack_1a928;
  longlong *plStack_1a920;
  longlong *plStack_1a918;
  undefined8 *puStack_1a910;
  longlong *plStack_1a908;
  longlong *plStack_1a900;
  undefined8 *puStack_1a8f8;
  longlong *plStack_1a8f0;
  longlong *plStack_1a8e8;
  undefined8 *puStack_1a8e0;
  longlong *plStack_1a8d8;
  longlong *plStack_1a8d0;
  undefined8 *puStack_1a8c8;
  longlong *plStack_1a8c0;
  longlong *plStack_1a8b8;
  undefined1 *puStack_1a8b0;
  undefined1 *puStack_1a8a8;
  undefined1 *puStack_1a8a0;
  undefined1 *puStack_1a898;
  undefined1 *puStack_1a890;
  undefined1 *puStack_1a888;
  undefined1 *puStack_1a880;
  undefined1 *puStack_1a878;
  undefined1 *puStack_1a870;
  undefined1 *puStack_1a868;
  undefined1 *puStack_1a860;
  undefined1 *puStack_1a858;
  undefined1 *puStack_1a850;
  undefined1 *puStack_1a848;
  undefined1 *puStack_1a840;
  undefined1 *puStack_1a838;
  undefined1 *puStack_1a830;
  undefined1 *puStack_1a828;
  undefined1 *puStack_1a820;
  undefined1 *puStack_1a818;
  undefined1 *puStack_1a810;
  undefined1 *puStack_1a808;
  undefined1 *puStack_1a800;
  undefined1 *puStack_1a7f8;
  undefined1 *puStack_1a7f0;
  undefined1 *puStack_1a7e8;
  undefined1 *puStack_1a7e0;
  undefined1 *puStack_1a7d8;
  undefined1 *puStack_1a7d0;
  undefined1 *puStack_1a7c8;
  undefined1 *puStack_1a7c0;
  undefined1 *puStack_1a7b8;
  undefined1 *puStack_1a7b0;
  undefined1 *puStack_1a7a8;
  undefined1 *puStack_1a7a0;
  undefined1 *puStack_1a798;
  undefined1 *puStack_1a790;
  undefined1 *puStack_1a788;
  undefined1 *puStack_1a780;
  undefined1 *puStack_1a778;
  undefined1 *puStack_1a770;
  undefined1 *puStack_1a768;
  undefined1 *puStack_1a760;
  undefined1 *puStack_1a758;
  undefined1 *puStack_1a750;
  undefined1 *puStack_1a748;
  undefined1 *puStack_1a740;
  undefined1 *puStack_1a738;
  undefined1 *puStack_1a730;
  undefined1 *puStack_1a728;
  undefined1 *puStack_1a720;
  undefined1 *puStack_1a718;
  undefined1 *puStack_1a710;
  undefined1 *puStack_1a708;
  undefined1 *puStack_1a700;
  undefined1 *puStack_1a6f8;
  undefined1 *puStack_1a6f0;
  undefined1 *puStack_1a6e8;
  undefined1 *puStack_1a6e0;
  undefined1 *puStack_1a6d8;
  undefined1 *puStack_1a6d0;
  undefined1 *puStack_1a6c8;
  undefined1 *puStack_1a6c0;
  undefined1 *puStack_1a6b8;
  undefined1 *puStack_1a6b0;
  undefined1 *puStack_1a6a8;
  undefined1 *puStack_1a6a0;
  undefined1 *puStack_1a698;
  undefined1 *puStack_1a690;
  undefined1 *puStack_1a688;
  undefined1 *puStack_1a680;
  undefined1 *puStack_1a678;
  undefined1 *puStack_1a670;
  undefined1 *puStack_1a668;
  undefined1 *puStack_1a660;
  undefined1 *puStack_1a658;
  undefined1 *puStack_1a650;
  undefined1 *puStack_1a648;
  undefined1 *puStack_1a640;
  undefined1 *puStack_1a638;
  undefined1 *puStack_1a630;
  undefined1 *puStack_1a628;
  undefined1 *puStack_1a620;
  undefined1 *puStack_1a618;
  undefined1 *puStack_1a610;
  undefined1 *puStack_1a608;
  undefined1 *puStack_1a600;
  undefined1 *puStack_1a5f8;
  undefined1 *puStack_1a5f0;
  undefined1 *puStack_1a5e8;
  undefined1 *puStack_1a5e0;
  undefined1 *puStack_1a5d8;
  undefined1 *puStack_1a5d0;
  undefined1 *puStack_1a5c8;
  undefined1 *puStack_1a5c0;
  undefined1 *puStack_1a5b8;
  undefined1 *puStack_1a5b0;
  undefined1 *puStack_1a5a8;
  undefined1 *puStack_1a5a0;
  undefined1 *puStack_1a598;
  undefined1 *puStack_1a590;
  undefined1 *puStack_1a588;
  undefined1 *puStack_1a580;
  undefined1 *puStack_1a578;
  undefined1 *puStack_1a570;
  undefined1 *puStack_1a568;
  undefined1 *puStack_1a560;
  undefined1 *puStack_1a558;
  undefined1 *puStack_1a550;
  undefined1 *puStack_1a548;
  undefined1 *puStack_1a540;
  undefined1 *puStack_1a538;
  undefined1 *puStack_1a530;
  undefined1 *puStack_1a528;
  undefined1 *puStack_1a520;
  undefined1 *puStack_1a518;
  undefined1 *puStack_1a510;
  undefined1 *puStack_1a508;
  undefined1 *puStack_1a500;
  undefined1 *puStack_1a4f8;
  undefined1 *puStack_1a4f0;
  undefined1 *puStack_1a4e8;
  undefined1 *puStack_1a4e0;
  undefined1 *puStack_1a4d8;
  undefined1 *puStack_1a4d0;
  undefined1 *puStack_1a4c8;
  undefined1 *puStack_1a4c0;
  undefined1 *puStack_1a4b8;
  undefined1 *puStack_1a4b0;
  undefined1 *puStack_1a4a8;
  undefined1 *puStack_1a4a0;
  undefined1 *puStack_1a498;
  undefined1 *puStack_1a490;
  undefined1 *puStack_1a488;
  undefined1 *puStack_1a480;
  undefined1 *puStack_1a478;
  undefined1 *puStack_1a470;
  undefined1 *puStack_1a468;
  undefined1 *puStack_1a460;
  undefined1 *puStack_1a458;
  undefined1 *puStack_1a450;
  undefined1 *puStack_1a448;
  undefined1 *puStack_1a440;
  undefined1 *puStack_1a438;
  undefined1 *puStack_1a430;
  undefined1 *puStack_1a428;
  undefined1 *puStack_1a420;
  undefined1 *puStack_1a418;
  undefined1 *puStack_1a410;
  undefined1 *puStack_1a408;
  undefined1 *puStack_1a400;
  undefined1 *puStack_1a3f8;
  undefined1 *puStack_1a3f0;
  undefined1 *puStack_1a3e8;
  undefined1 *puStack_1a3e0;
  undefined1 *puStack_1a3d8;
  undefined1 *puStack_1a3d0;
  undefined1 *puStack_1a3c8;
  undefined1 *puStack_1a3c0;
  undefined1 *puStack_1a3b8;
  undefined1 *puStack_1a3b0;
  undefined1 *puStack_1a3a8;
  undefined1 *puStack_1a3a0;
  undefined1 *puStack_1a398;
  undefined1 *puStack_1a390;
  undefined1 *puStack_1a388;
  undefined1 *puStack_1a380;
  undefined1 *puStack_1a378;
  undefined1 *puStack_1a370;
  undefined1 *puStack_1a368;
  undefined1 *puStack_1a360;
  undefined1 *puStack_1a358;
  undefined1 *puStack_1a350;
  undefined1 *puStack_1a348;
  undefined1 *puStack_1a340;
  undefined1 *puStack_1a338;
  undefined1 *puStack_1a330;
  undefined1 *puStack_1a328;
  undefined1 *puStack_1a320;
  undefined1 *puStack_1a318;
  undefined1 *puStack_1a310;
  undefined1 *puStack_1a308;
  undefined1 *puStack_1a300;
  undefined1 *puStack_1a2f8;
  undefined1 *puStack_1a2f0;
  undefined1 *puStack_1a2e8;
  undefined1 *puStack_1a2e0;
  undefined1 *puStack_1a2d8;
  undefined1 *puStack_1a2d0;
  undefined1 *puStack_1a2c8;
  undefined1 *puStack_1a2c0;
  undefined1 *puStack_1a2b8;
  undefined1 *puStack_1a2b0;
  undefined1 *puStack_1a2a8;
  undefined1 *puStack_1a2a0;
  undefined1 *puStack_1a298;
  undefined1 *puStack_1a290;
  undefined1 *puStack_1a288;
  undefined1 *puStack_1a280;
  undefined1 *puStack_1a278;
  undefined1 *puStack_1a270;
  undefined1 *puStack_1a268;
  undefined1 *puStack_1a260;
  undefined1 *puStack_1a258;
  undefined1 *puStack_1a250;
  undefined1 *puStack_1a248;
  undefined1 *puStack_1a240;
  undefined1 *puStack_1a238;
  undefined1 *puStack_1a230;
  undefined1 *puStack_1a228;
  undefined1 *puStack_1a220;
  undefined1 *puStack_1a218;
  undefined1 *puStack_1a210;
  undefined1 *puStack_1a208;
  undefined1 *puStack_1a200;
  undefined1 *puStack_1a1f8;
  undefined1 *puStack_1a1f0;
  undefined1 *puStack_1a1e8;
  undefined1 *puStack_1a1e0;
  undefined1 *puStack_1a1d8;
  undefined1 *puStack_1a1d0;
  undefined1 *puStack_1a1c8;
  undefined1 *puStack_1a1c0;
  undefined1 *puStack_1a1b8;
  undefined1 *puStack_1a1b0;
  undefined1 *puStack_1a1a8;
  undefined1 *puStack_1a1a0;
  undefined1 *puStack_1a198;
  undefined1 *puStack_1a190;
  undefined1 *puStack_1a188;
  undefined1 *puStack_1a180;
  undefined1 *puStack_1a178;
  undefined1 *puStack_1a170;
  undefined1 *puStack_1a168;
  undefined1 *puStack_1a160;
  undefined1 *puStack_1a158;
  undefined1 *puStack_1a150;
  undefined1 *puStack_1a148;
  undefined1 *puStack_1a140;
  undefined1 *puStack_1a138;
  undefined1 *puStack_1a130;
  undefined1 *puStack_1a128;
  undefined1 *puStack_1a120;
  undefined1 *puStack_1a118;
  undefined1 *puStack_1a110;
  undefined1 *puStack_1a108;
  undefined1 *puStack_1a100;
  undefined1 *puStack_1a0f8;
  undefined1 *puStack_1a0f0;
  undefined1 *puStack_1a0e8;
  undefined1 *puStack_1a0e0;
  undefined1 *puStack_1a0d8;
  undefined1 *puStack_1a0d0;
  undefined1 *puStack_1a0c8;
  undefined1 *puStack_1a0c0;
  undefined1 *puStack_1a0b8;
  undefined1 *puStack_1a0b0;
  undefined1 *puStack_1a0a8;
  undefined1 *puStack_1a0a0;
  undefined1 *puStack_1a098;
  undefined1 *puStack_1a090;
  undefined1 *puStack_1a088;
  undefined1 *puStack_1a080;
  undefined1 *puStack_1a078;
  undefined1 *puStack_1a070;
  undefined1 *puStack_1a068;
  undefined1 *puStack_1a060;
  undefined1 *puStack_1a058;
  undefined1 *puStack_1a050;
  undefined1 *puStack_1a048;
  undefined1 *puStack_1a040;
  undefined1 *puStack_1a038;
  undefined1 *puStack_1a030;
  undefined1 *puStack_1a028;
  undefined1 *puStack_1a020;
  undefined1 *puStack_1a018;
  undefined1 *puStack_1a010;
  undefined1 *puStack_1a008;
  undefined1 *puStack_1a000;
  undefined1 *puStack_19ff8;
  undefined1 *puStack_19ff0;
  undefined1 *puStack_19fe8;
  undefined1 *puStack_19fe0;
  undefined1 *puStack_19fd8;
  undefined1 *puStack_19fd0;
  undefined1 *puStack_19fc8;
  undefined1 *puStack_19fc0;
  undefined1 *puStack_19fb8;
  undefined1 *puStack_19fb0;
  undefined1 *puStack_19fa8;
  undefined1 *puStack_19fa0;
  undefined1 *puStack_19f98;
  undefined1 *puStack_19f90;
  undefined1 *puStack_19f88;
  undefined1 *puStack_19f80;
  undefined1 *puStack_19f78;
  undefined1 *puStack_19f70;
  undefined1 *puStack_19f68;
  undefined1 *puStack_19f60;
  undefined1 *puStack_19f58;
  undefined1 *puStack_19f50;
  undefined1 *puStack_19f48;
  undefined1 *puStack_19f40;
  undefined1 *puStack_19f38;
  undefined1 *puStack_19f30;
  undefined1 *puStack_19f28;
  undefined1 *puStack_19f20;
  undefined1 *puStack_19f18;
  undefined1 *puStack_19f10;
  undefined1 *puStack_19f08;
  undefined1 *puStack_19f00;
  undefined1 *puStack_19ef8;
  undefined1 *puStack_19ef0;
  undefined1 *puStack_19ee8;
  undefined1 *puStack_19ee0;
  undefined1 *puStack_19ed8;
  undefined1 *puStack_19ed0;
  undefined1 *puStack_19ec8;
  undefined1 *puStack_19ec0;
  undefined1 *puStack_19eb8;
  undefined1 *puStack_19eb0;
  undefined1 *puStack_19ea8;
  undefined1 *puStack_19ea0;
  undefined1 *puStack_19e98;
  undefined1 *puStack_19e90;
  undefined1 *puStack_19e88;
  undefined1 *puStack_19e80;
  undefined1 *puStack_19e78;
  undefined1 *puStack_19e70;
  undefined1 *puStack_19e68;
  undefined1 *puStack_19e60;
  undefined1 *puStack_19e58;
  undefined1 *puStack_19e50;
  undefined1 *puStack_19e48;
  undefined1 *puStack_19e40;
  undefined1 *puStack_19e38;
  undefined1 *puStack_19e30;
  undefined1 *puStack_19e28;
  undefined1 *puStack_19e20;
  undefined1 *puStack_19e18;
  undefined1 *puStack_19e10;
  undefined1 *puStack_19e08;
  undefined1 *puStack_19e00;
  undefined1 *puStack_19df8;
  undefined1 *puStack_19df0;
  undefined1 *puStack_19de8;
  undefined1 *puStack_19de0;
  undefined1 *puStack_19dd8;
  undefined1 *puStack_19dd0;
  undefined1 *puStack_19dc8;
  undefined1 *puStack_19dc0;
  undefined1 *puStack_19db8;
  undefined1 *puStack_19db0;
  undefined1 *puStack_19da8;
  undefined1 *puStack_19da0;
  undefined1 *puStack_19d98;
  undefined1 *puStack_19d90;
  undefined1 *puStack_19d88;
  undefined1 *puStack_19d80;
  undefined1 *puStack_19d78;
  undefined1 *puStack_19d70;
  undefined1 *puStack_19d68;
  undefined1 *puStack_19d60;
  undefined1 *puStack_19d58;
  undefined1 *puStack_19d50;
  undefined1 *puStack_19d48;
  undefined1 *puStack_19d40;
  undefined1 *puStack_19d38;
  undefined1 *puStack_19d30;
  undefined1 *puStack_19d28;
  undefined1 *puStack_19d20;
  undefined1 *puStack_19d18;
  undefined1 *puStack_19d10;
  undefined1 *puStack_19d08;
  undefined1 *puStack_19d00;
  undefined1 *puStack_19cf8;
  undefined1 *puStack_19cf0;
  undefined1 *puStack_19ce8;
  undefined1 *puStack_19ce0;
  undefined1 *puStack_19cd8;
  undefined1 *puStack_19cd0;
  undefined1 *puStack_19cc8;
  undefined1 *puStack_19cc0;
  undefined1 *puStack_19cb8;
  undefined1 *puStack_19cb0;
  undefined1 *puStack_19ca8;
  undefined1 *puStack_19ca0;
  undefined1 *puStack_19c98;
  undefined1 *puStack_19c90;
  undefined1 *puStack_19c88;
  undefined1 *puStack_19c80;
  undefined1 *puStack_19c78;
  undefined1 *puStack_19c70;
  undefined1 *puStack_19c68;
  undefined1 *puStack_19c60;
  undefined1 *puStack_19c58;
  undefined1 *puStack_19c50;
  undefined1 *puStack_19c48;
  undefined1 *puStack_19c40;
  undefined1 *puStack_19c38;
  undefined1 *puStack_19c30;
  undefined1 *puStack_19c28;
  undefined1 *puStack_19c20;
  undefined1 *puStack_19c18;
  undefined1 *puStack_19c10;
  undefined1 *puStack_19c08;
  undefined1 *puStack_19c00;
  undefined1 *puStack_19bf8;
  undefined1 *puStack_19bf0;
  undefined1 *puStack_19be8;
  undefined1 *puStack_19be0;
  undefined1 *puStack_19bd8;
  undefined1 *puStack_19bd0;
  undefined1 *puStack_19bc8;
  undefined1 *puStack_19bc0;
  undefined1 *puStack_19bb8;
  undefined1 *puStack_19bb0;
  undefined1 *puStack_19ba8;
  undefined1 *puStack_19ba0;
  undefined1 *puStack_19b98;
  undefined1 *puStack_19b90;
  undefined1 *puStack_19b88;
  undefined1 *puStack_19b80;
  undefined1 *puStack_19b78;
  undefined1 *puStack_19b70;
  undefined1 *puStack_19b68;
  undefined1 *puStack_19b60;
  undefined1 *puStack_19b58;
  undefined1 *puStack_19b50;
  undefined1 *puStack_19b48;
  undefined1 *puStack_19b40;
  undefined1 *puStack_19b38;
  undefined1 *puStack_19b30;
  undefined1 *puStack_19b28;
  undefined1 *puStack_19b20;
  undefined1 *puStack_19b18;
  undefined1 auStack_19b10 [16];
  undefined1 auStack_19b00 [16];
  undefined1 auStack_19af0 [16];
  undefined1 auStack_19ae0 [16];
  undefined1 auStack_19ad0 [16];
  undefined1 auStack_19ac0 [16];
  undefined1 auStack_19ab0 [16];
  undefined1 auStack_19aa0 [16];
  undefined1 auStack_19a90 [16];
  undefined1 auStack_19a80 [16];
  undefined1 auStack_19a70 [16];
  undefined1 auStack_19a60 [16];
  undefined1 auStack_19a50 [16];
  undefined4 uStack_19a40;
  undefined8 uStack_19a3c;
  undefined8 uStack_19a34;
  undefined8 uStack_19a2c;
  undefined8 uStack_19a24;
  undefined8 uStack_19a1c;
  undefined8 uStack_19a14;
  undefined4 uStack_19a0c;
  TypeDescriptor *pTStack_19a08;
  undefined4 uStack_19a00;
  undefined8 uStack_199fc;
  undefined8 uStack_199f4;
  undefined8 uStack_199ec;
  undefined8 uStack_199e4;
  undefined8 uStack_199dc;
  undefined8 uStack_199d4;
  undefined4 uStack_199cc;
  TypeDescriptor *pTStack_199c8;
  undefined4 uStack_199c0;
  undefined8 uStack_199bc;
  undefined8 uStack_199b4;
  undefined8 uStack_199ac;
  undefined8 uStack_199a4;
  undefined8 uStack_1999c;
  undefined8 uStack_19994;
  undefined4 uStack_1998c;
  TypeDescriptor *pTStack_19988;
  undefined8 uStack_19980;
  undefined8 uStack_19978;
  undefined8 uStack_19970;
  undefined8 uStack_19968;
  undefined8 uStack_19960;
  undefined8 uStack_19958;
  undefined8 uStack_19950;
  TypeDescriptor *pTStack_19948;
  undefined8 uStack_19940;
  undefined8 uStack_19938;
  undefined8 uStack_19930;
  undefined8 uStack_19928;
  undefined8 uStack_19920;
  undefined8 uStack_19918;
  undefined8 uStack_19910;
  TypeDescriptor *pTStack_19908;
  undefined8 uStack_19900;
  undefined8 uStack_198f8;
  undefined8 uStack_198f0;
  undefined8 uStack_198e8;
  undefined8 uStack_198e0;
  undefined8 uStack_198d8;
  undefined8 uStack_198d0;
  TypeDescriptor *pTStack_198c8;
  undefined4 *puStack_198c0;
  longlong *plStack_198b8;
  undefined8 uStack_198b0;
  undefined8 uStack_198a8;
  undefined8 uStack_198a0;
  undefined8 uStack_19898;
  undefined8 uStack_19890;
  undefined8 uStack_19888;
  undefined8 uStack_19880;
  TypeDescriptor *pTStack_19878;
  undefined8 uStack_19870;
  undefined8 uStack_19868;
  undefined8 uStack_19860;
  undefined8 uStack_19858;
  undefined8 uStack_19850;
  undefined8 uStack_19848;
  undefined8 uStack_19840;
  TypeDescriptor *pTStack_19838;
  undefined8 uStack_19830;
  undefined8 uStack_19828;
  undefined8 uStack_19820;
  undefined8 uStack_19818;
  undefined8 uStack_19810;
  undefined8 uStack_19808;
  undefined8 uStack_19800;
  TypeDescriptor *pTStack_197f8;
  undefined8 uStack_197f0;
  undefined8 uStack_197e8;
  undefined8 uStack_197e0;
  undefined8 uStack_197d8;
  undefined8 uStack_197d0;
  undefined8 uStack_197c8;
  undefined8 uStack_197c0;
  TypeDescriptor *pTStack_197b8;
  undefined1 auStack_197b0 [32];
  undefined1 auStack_19790 [32];
  undefined1 auStack_19770 [32];
  undefined1 auStack_19750 [32];
  undefined1 auStack_19730 [32];
  undefined1 auStack_19710 [32];
  undefined1 auStack_196f0 [32];
  undefined1 auStack_196d0 [40];
  undefined1 auStack_196a8 [88];
  undefined1 auStack_19650 [8];
  undefined1 auStack_19648 [88];
  undefined1 auStack_195f0 [8];
  undefined8 uStack_195e8;
  longlong lStack_195e0;
  longlong lStack_195d8;
  undefined8 uStack_195d0;
  undefined8 uStack_195c8;
  undefined8 uStack_195c0;
  undefined8 uStack_195b8;
  undefined8 uStack_195b0;
  undefined8 uStack_195a8;
  undefined8 uStack_195a0;
  undefined8 uStack_19598;
  undefined8 uStack_19590;
  longlong lStack_19588;
  longlong lStack_19580;
  undefined8 uStack_19578;
  undefined8 uStack_19570;
  undefined8 uStack_19568;
  undefined8 uStack_19560;
  undefined8 uStack_19558;
  undefined8 uStack_19550;
  undefined8 uStack_19548;
  undefined8 uStack_19540;
  undefined8 uStack_19538;
  longlong lStack_19530;
  longlong lStack_19528;
  undefined8 uStack_19520;
  undefined8 uStack_19518;
  undefined8 uStack_19510;
  undefined8 uStack_19508;
  undefined8 uStack_19500;
  undefined8 uStack_194f8;
  undefined8 uStack_194f0;
  undefined8 uStack_194e8;
  undefined8 uStack_194e0;
  longlong lStack_194d8;
  longlong lStack_194d0;
  undefined8 uStack_194c8;
  undefined8 uStack_194c0;
  undefined8 uStack_194b8;
  undefined8 uStack_194b0;
  undefined8 uStack_194a8;
  undefined8 uStack_194a0;
  undefined8 uStack_19498;
  undefined8 uStack_19490;
  undefined8 uStack_19488;
  longlong lStack_19480;
  longlong lStack_19478;
  undefined8 uStack_19470;
  undefined8 uStack_19468;
  undefined8 uStack_19460;
  undefined8 uStack_19458;
  undefined8 uStack_19450;
  undefined8 uStack_19448;
  undefined8 uStack_19440;
  undefined8 uStack_19438;
  undefined8 uStack_19430;
  longlong lStack_19428;
  longlong lStack_19420;
  undefined8 uStack_19418;
  undefined8 uStack_19410;
  undefined8 uStack_19408;
  undefined8 uStack_19400;
  undefined8 uStack_193f8;
  undefined8 uStack_193f0;
  undefined8 uStack_193e8;
  undefined8 uStack_193e0;
  undefined8 uStack_193d8;
  longlong lStack_193d0;
  longlong lStack_193c8;
  undefined8 uStack_193c0;
  undefined8 uStack_193b8;
  undefined8 uStack_193b0;
  undefined8 uStack_193a8;
  undefined8 uStack_193a0;
  undefined8 uStack_19398;
  undefined8 uStack_19390;
  undefined8 uStack_19388;
  undefined8 uStack_19380;
  longlong alStack_19378 [2];
  undefined1 auStack_19368 [64];
  undefined1 auStack_19328 [88];
  undefined1 auStack_192d0 [88];
  undefined1 auStack_19278 [88];
  undefined1 auStack_19220 [88];
  undefined1 auStack_191c8 [88];
  undefined1 auStack_19170 [88];
  undefined1 auStack_19118 [88];
  undefined1 auStack_190c0 [88];
  undefined1 auStack_19068 [88];
  undefined1 auStack_19010 [88];
  undefined1 auStack_18fb8 [88];
  undefined1 auStack_18f60 [88];
  undefined1 auStack_18f08 [88];
  undefined1 auStack_18eb0 [88];
  undefined1 auStack_18e58 [88];
  undefined1 auStack_18e00 [88];
  undefined1 auStack_18da8 [88];
  undefined1 auStack_18d50 [88];
  undefined1 auStack_18cf8 [88];
  undefined1 auStack_18ca0 [88];
  undefined1 auStack_18c48 [88];
  undefined1 auStack_18bf0 [88];
  undefined1 auStack_18b98 [88];
  undefined1 auStack_18b40 [88];
  undefined1 auStack_18ae8 [88];
  undefined1 auStack_18a90 [88];
  undefined1 auStack_18a38 [88];
  undefined1 auStack_189e0 [88];
  undefined1 auStack_18988 [88];
  undefined1 auStack_18930 [88];
  undefined1 auStack_188d8 [88];
  undefined1 auStack_18880 [88];
  undefined1 auStack_18828 [88];
  undefined1 auStack_187d0 [88];
  undefined1 auStack_18778 [88];
  undefined1 auStack_18720 [88];
  undefined1 auStack_186c8 [88];
  undefined1 auStack_18670 [88];
  undefined1 auStack_18618 [88];
  undefined1 auStack_185c0 [88];
  undefined1 auStack_18568 [88];
  undefined1 auStack_18510 [88];
  undefined1 auStack_184b8 [88];
  undefined1 auStack_18460 [88];
  undefined1 auStack_18408 [88];
  undefined1 auStack_183b0 [8];
  undefined1 auStack_183a8 [64];
  undefined1 auStack_18368 [64];
  undefined1 auStack_18328 [64];
  undefined1 auStack_182e8 [64];
  undefined1 auStack_182a8 [64];
  undefined1 auStack_18268 [64];
  undefined1 auStack_18228 [64];
  undefined1 auStack_181e8 [64];
  undefined1 auStack_181a8 [64];
  undefined1 auStack_18168 [64];
  undefined1 auStack_18128 [64];
  undefined1 auStack_180e8 [64];
  undefined1 auStack_180a8 [64];
  undefined1 auStack_18068 [64];
  undefined1 auStack_18028 [64];
  undefined1 auStack_17fe8 [64];
  undefined1 auStack_17fa8 [64];
  undefined1 auStack_17f68 [64];
  undefined1 auStack_17f28 [64];
  undefined1 auStack_17ee8 [64];
  undefined1 auStack_17ea8 [64];
  undefined1 auStack_17e68 [64];
  undefined1 auStack_17e28 [64];
  undefined1 auStack_17de8 [64];
  undefined1 auStack_17da8 [64];
  undefined1 auStack_17d68 [64];
  undefined1 auStack_17d28 [64];
  undefined1 auStack_17ce8 [64];
  undefined1 auStack_17ca8 [64];
  undefined1 auStack_17c68 [64];
  undefined1 auStack_17c28 [64];
  undefined1 auStack_17be8 [64];
  undefined1 auStack_17ba8 [64];
  undefined1 auStack_17b68 [64];
  undefined1 auStack_17b28 [64];
  undefined1 auStack_17ae8 [64];
  undefined1 auStack_17aa8 [64];
  undefined1 auStack_17a68 [64];
  undefined1 auStack_17a28 [64];
  undefined1 auStack_179e8 [64];
  undefined1 auStack_179a8 [64];
  undefined1 auStack_17968 [64];
  undefined1 auStack_17928 [64];
  undefined8 auStack_178e8 [8];
  undefined1 auStack_178a8 [64];
  undefined1 auStack_17868 [64];
  undefined1 auStack_17828 [64];
  undefined1 auStack_177e8 [64];
  undefined1 auStack_177a8 [64];
  undefined1 auStack_17768 [64];
  undefined1 auStack_17728 [64];
  undefined1 auStack_176e8 [64];
  undefined1 auStack_176a8 [64];
  undefined1 auStack_17668 [64];
  undefined1 auStack_17628 [64];
  undefined1 auStack_175e8 [64];
  undefined1 auStack_175a8 [64];
  undefined1 auStack_17568 [64];
  undefined1 auStack_17528 [64];
  undefined1 auStack_174e8 [64];
  undefined1 auStack_174a8 [64];
  undefined1 auStack_17468 [64];
  undefined1 auStack_17428 [64];
  undefined1 auStack_173e8 [64];
  undefined1 auStack_173a8 [64];
  undefined1 auStack_17368 [64];
  undefined1 auStack_17328 [64];
  undefined1 auStack_172e8 [64];
  undefined1 auStack_172a8 [64];
  undefined1 auStack_17268 [64];
  undefined1 auStack_17228 [64];
  undefined1 auStack_171e8 [64];
  undefined1 auStack_171a8 [64];
  undefined1 auStack_17168 [64];
  undefined1 auStack_17128 [64];
  undefined1 auStack_170e8 [64];
  undefined1 auStack_170a8 [64];
  undefined1 auStack_17068 [64];
  undefined1 auStack_17028 [64];
  undefined1 auStack_16fe8 [64];
  undefined1 auStack_16fa8 [64];
  undefined1 auStack_16f68 [64];
  undefined1 auStack_16f28 [64];
  undefined1 auStack_16ee8 [64];
  undefined1 auStack_16ea8 [64];
  undefined1 auStack_16e68 [64];
  undefined1 auStack_16e28 [64];
  undefined1 auStack_16de8 [64];
  undefined1 auStack_16da8 [64];
  undefined1 auStack_16d68 [64];
  undefined1 auStack_16d28 [64];
  undefined1 auStack_16ce8 [64];
  undefined1 auStack_16ca8 [64];
  undefined1 auStack_16c68 [64];
  undefined1 auStack_16c28 [64];
  undefined1 auStack_16be8 [64];
  undefined1 auStack_16ba8 [64];
  undefined1 auStack_16b68 [64];
  undefined1 auStack_16b28 [64];
  undefined1 auStack_16ae8 [64];
  undefined1 auStack_16aa8 [64];
  undefined1 auStack_16a68 [64];
  undefined1 auStack_16a28 [64];
  undefined1 auStack_169e8 [64];
  undefined1 auStack_169a8 [64];
  undefined1 auStack_16968 [64];
  undefined1 auStack_16928 [64];
  undefined1 auStack_168e8 [64];
  undefined1 auStack_168a8 [64];
  undefined1 auStack_16868 [64];
  undefined1 auStack_16828 [64];
  undefined1 auStack_167e8 [64];
  undefined1 auStack_167a8 [64];
  undefined1 auStack_16768 [64];
  undefined1 auStack_16728 [64];
  undefined1 auStack_166e8 [64];
  undefined1 auStack_166a8 [64];
  undefined1 auStack_16668 [64];
  undefined1 auStack_16628 [64];
  undefined1 auStack_165e8 [64];
  undefined1 auStack_165a8 [64];
  undefined1 auStack_16568 [64];
  undefined1 auStack_16528 [64];
  undefined1 auStack_164e8 [64];
  undefined1 auStack_164a8 [64];
  undefined1 auStack_16468 [64];
  undefined1 auStack_16428 [64];
  undefined1 auStack_163e8 [64];
  undefined1 auStack_163a8 [64];
  undefined1 auStack_16368 [64];
  undefined1 auStack_16328 [64];
  undefined1 auStack_162e8 [64];
  undefined1 auStack_162a8 [64];
  undefined1 auStack_16268 [64];
  undefined1 auStack_16228 [64];
  undefined1 auStack_161e8 [64];
  undefined1 auStack_161a8 [64];
  undefined1 auStack_16168 [64];
  undefined1 auStack_16128 [64];
  undefined1 auStack_160e8 [64];
  undefined1 auStack_160a8 [64];
  undefined1 auStack_16068 [64];
  undefined1 auStack_16028 [64];
  undefined1 auStack_15fe8 [64];
  undefined1 auStack_15fa8 [64];
  undefined1 auStack_15f68 [64];
  undefined1 auStack_15f28 [64];
  undefined1 auStack_15ee8 [64];
  undefined1 auStack_15ea8 [64];
  undefined1 auStack_15e68 [64];
  undefined1 auStack_15e28 [64];
  undefined1 auStack_15de8 [64];
  undefined1 auStack_15da8 [64];
  undefined1 auStack_15d68 [64];
  undefined1 auStack_15d28 [64];
  undefined1 auStack_15ce8 [64];
  undefined1 auStack_15ca8 [64];
  undefined1 auStack_15c68 [64];
  undefined1 auStack_15c28 [64];
  undefined1 auStack_15be8 [64];
  undefined1 auStack_15ba8 [64];
  undefined1 auStack_15b68 [64];
  undefined1 auStack_15b28 [64];
  undefined1 auStack_15ae8 [64];
  undefined1 auStack_15aa8 [64];
  undefined1 auStack_15a68 [64];
  undefined1 auStack_15a28 [64];
  undefined1 auStack_159e8 [64];
  undefined1 auStack_159a8 [64];
  undefined1 auStack_15968 [64];
  undefined1 auStack_15928 [64];
  undefined1 auStack_158e8 [64];
  undefined1 auStack_158a8 [64];
  undefined1 auStack_15868 [64];
  undefined1 auStack_15828 [64];
  undefined1 auStack_157e8 [64];
  undefined1 auStack_157a8 [64];
  undefined1 auStack_15768 [64];
  undefined1 auStack_15728 [64];
  undefined1 auStack_156e8 [64];
  undefined1 auStack_156a8 [64];
  undefined1 auStack_15668 [64];
  undefined1 auStack_15628 [64];
  undefined1 auStack_155e8 [64];
  undefined1 auStack_155a8 [64];
  undefined1 auStack_15568 [64];
  undefined1 auStack_15528 [64];
  undefined1 auStack_154e8 [64];
  undefined1 auStack_154a8 [64];
  undefined1 auStack_15468 [64];
  undefined1 auStack_15428 [64];
  undefined1 auStack_153e8 [64];
  undefined1 auStack_153a8 [64];
  undefined1 auStack_15368 [64];
  undefined1 auStack_15328 [64];
  undefined1 auStack_152e8 [64];
  undefined1 auStack_152a8 [64];
  undefined1 auStack_15268 [64];
  undefined1 auStack_15228 [64];
  undefined1 auStack_151e8 [64];
  undefined1 auStack_151a8 [64];
  undefined1 auStack_15168 [64];
  undefined1 auStack_15128 [64];
  undefined1 auStack_150e8 [64];
  undefined1 auStack_150a8 [64];
  undefined1 auStack_15068 [64];
  undefined1 auStack_15028 [64];
  undefined1 auStack_14fe8 [64];
  undefined1 auStack_14fa8 [64];
  undefined1 auStack_14f68 [64];
  undefined1 auStack_14f28 [64];
  undefined1 auStack_14ee8 [64];
  undefined1 auStack_14ea8 [64];
  undefined1 auStack_14e68 [64];
  undefined1 auStack_14e28 [64];
  undefined1 auStack_14de8 [64];
  undefined1 auStack_14da8 [64];
  undefined1 auStack_14d68 [64];
  undefined1 auStack_14d28 [64];
  undefined1 auStack_14ce8 [64];
  undefined1 auStack_14ca8 [64];
  undefined1 auStack_14c68 [64];
  undefined1 auStack_14c28 [64];
  undefined1 auStack_14be8 [64];
  undefined1 auStack_14ba8 [64];
  undefined1 auStack_14b68 [64];
  undefined1 auStack_14b28 [64];
  undefined1 auStack_14ae8 [64];
  undefined1 auStack_14aa8 [64];
  undefined1 auStack_14a68 [64];
  undefined1 auStack_14a28 [64];
  undefined1 auStack_149e8 [64];
  undefined1 auStack_149a8 [64];
  undefined1 auStack_14968 [64];
  undefined1 auStack_14928 [64];
  undefined1 auStack_148e8 [64];
  undefined1 auStack_148a8 [64];
  undefined1 auStack_14868 [64];
  undefined1 auStack_14828 [64];
  undefined1 auStack_147e8 [64];
  undefined1 auStack_147a8 [64];
  undefined1 auStack_14768 [64];
  undefined1 auStack_14728 [64];
  undefined1 auStack_146e8 [64];
  undefined1 auStack_146a8 [64];
  undefined1 auStack_14668 [64];
  undefined1 auStack_14628 [64];
  undefined1 auStack_145e8 [64];
  undefined1 auStack_145a8 [64];
  undefined1 auStack_14568 [64];
  undefined1 auStack_14528 [64];
  undefined1 auStack_144e8 [64];
  undefined1 auStack_144a8 [64];
  undefined1 auStack_14468 [64];
  undefined1 auStack_14428 [64];
  undefined1 auStack_143e8 [64];
  undefined1 auStack_143a8 [64];
  undefined1 auStack_14368 [64];
  undefined1 auStack_14328 [64];
  undefined1 auStack_142e8 [64];
  undefined1 auStack_142a8 [64];
  undefined1 auStack_14268 [64];
  undefined1 auStack_14228 [64];
  undefined1 auStack_141e8 [64];
  undefined1 auStack_141a8 [64];
  undefined1 auStack_14168 [64];
  undefined1 auStack_14128 [64];
  undefined1 auStack_140e8 [64];
  undefined1 auStack_140a8 [64];
  undefined1 auStack_14068 [64];
  undefined1 auStack_14028 [64];
  undefined1 auStack_13fe8 [64];
  undefined1 auStack_13fa8 [64];
  undefined1 auStack_13f68 [64];
  undefined1 auStack_13f28 [64];
  undefined1 auStack_13ee8 [64];
  undefined1 auStack_13ea8 [64];
  undefined1 auStack_13e68 [64];
  undefined1 auStack_13e28 [64];
  undefined1 auStack_13de8 [64];
  undefined1 auStack_13da8 [64];
  undefined1 auStack_13d68 [64];
  undefined1 auStack_13d28 [64];
  undefined1 auStack_13ce8 [64];
  undefined1 auStack_13ca8 [64];
  undefined1 auStack_13c68 [64];
  undefined1 auStack_13c28 [64];
  undefined1 auStack_13be8 [64];
  undefined1 auStack_13ba8 [64];
  undefined1 auStack_13b68 [64];
  undefined1 auStack_13b28 [64];
  undefined1 auStack_13ae8 [64];
  undefined1 auStack_13aa8 [64];
  undefined1 auStack_13a68 [64];
  undefined1 auStack_13a28 [64];
  undefined1 auStack_139e8 [64];
  undefined1 auStack_139a8 [64];
  undefined1 auStack_13968 [64];
  undefined1 auStack_13928 [64];
  undefined1 auStack_138e8 [64];
  undefined1 auStack_138a8 [64];
  undefined1 auStack_13868 [64];
  undefined1 auStack_13828 [64];
  undefined1 auStack_137e8 [64];
  undefined1 auStack_137a8 [64];
  undefined1 auStack_13768 [64];
  undefined1 auStack_13728 [64];
  undefined1 auStack_136e8 [64];
  undefined1 auStack_136a8 [64];
  undefined1 auStack_13668 [64];
  undefined1 auStack_13628 [64];
  undefined1 auStack_135e8 [64];
  undefined1 auStack_135a8 [64];
  undefined1 auStack_13568 [64];
  undefined1 auStack_13528 [64];
  undefined1 auStack_134e8 [64];
  undefined1 auStack_134a8 [64];
  undefined1 auStack_13468 [64];
  undefined1 auStack_13428 [64];
  undefined1 auStack_133e8 [64];
  undefined1 auStack_133a8 [64];
  undefined1 auStack_13368 [64];
  undefined1 auStack_13328 [64];
  undefined1 auStack_132e8 [64];
  undefined1 auStack_132a8 [64];
  undefined1 auStack_13268 [64];
  undefined1 auStack_13228 [64];
  undefined1 auStack_131e8 [64];
  undefined1 auStack_131a8 [64];
  undefined1 auStack_13168 [64];
  undefined1 auStack_13128 [64];
  undefined1 auStack_130e8 [64];
  undefined1 auStack_130a8 [64];
  undefined1 auStack_13068 [64];
  undefined1 auStack_13028 [64];
  undefined1 auStack_12fe8 [64];
  undefined1 auStack_12fa8 [64];
  undefined1 auStack_12f68 [64];
  undefined1 auStack_12f28 [64];
  undefined1 auStack_12ee8 [64];
  undefined1 auStack_12ea8 [64];
  undefined1 auStack_12e68 [64];
  undefined1 auStack_12e28 [64];
  undefined1 auStack_12de8 [64];
  undefined1 auStack_12da8 [64];
  undefined1 auStack_12d68 [64];
  undefined1 auStack_12d28 [64];
  undefined1 auStack_12ce8 [64];
  undefined1 auStack_12ca8 [64];
  undefined1 auStack_12c68 [64];
  undefined1 auStack_12c28 [64];
  undefined1 auStack_12be8 [64];
  undefined1 auStack_12ba8 [64];
  undefined1 auStack_12b68 [64];
  undefined1 auStack_12b28 [64];
  undefined1 auStack_12ae8 [64];
  undefined1 auStack_12aa8 [64];
  undefined1 auStack_12a68 [64];
  undefined1 auStack_12a28 [64];
  undefined1 auStack_129e8 [64];
  undefined1 auStack_129a8 [64];
  undefined1 auStack_12968 [64];
  undefined1 auStack_12928 [64];
  undefined1 auStack_128e8 [64];
  undefined1 auStack_128a8 [64];
  undefined1 auStack_12868 [64];
  undefined1 auStack_12828 [64];
  undefined1 auStack_127e8 [64];
  undefined1 auStack_127a8 [64];
  undefined1 auStack_12768 [64];
  undefined1 auStack_12728 [64];
  undefined1 auStack_126e8 [64];
  undefined1 auStack_126a8 [64];
  undefined1 auStack_12668 [64];
  undefined1 auStack_12628 [64];
  undefined1 auStack_125e8 [64];
  undefined1 auStack_125a8 [64];
  undefined1 auStack_12568 [64];
  undefined1 auStack_12528 [64];
  undefined1 auStack_124e8 [64];
  undefined1 auStack_124a8 [64];
  undefined1 auStack_12468 [64];
  undefined1 auStack_12428 [64];
  undefined1 auStack_123e8 [64];
  undefined1 auStack_123a8 [64];
  undefined1 auStack_12368 [64];
  undefined1 auStack_12328 [64];
  undefined1 auStack_122e8 [64];
  undefined1 auStack_122a8 [64];
  undefined1 auStack_12268 [64];
  undefined1 auStack_12228 [64];
  undefined1 auStack_121e8 [64];
  undefined1 auStack_121a8 [64];
  undefined1 auStack_12168 [64];
  undefined1 auStack_12128 [64];
  undefined1 auStack_120e8 [64];
  undefined1 auStack_120a8 [64];
  undefined1 auStack_12068 [64];
  undefined1 auStack_12028 [64];
  undefined1 auStack_11fe8 [64];
  undefined1 auStack_11fa8 [64];
  undefined1 auStack_11f68 [64];
  undefined1 auStack_11f28 [64];
  undefined1 auStack_11ee8 [64];
  undefined1 auStack_11ea8 [64];
  undefined1 auStack_11e68 [64];
  undefined1 auStack_11e28 [64];
  undefined1 auStack_11de8 [64];
  undefined1 auStack_11da8 [64];
  undefined1 auStack_11d68 [64];
  undefined1 auStack_11d28 [64];
  undefined1 auStack_11ce8 [64];
  undefined1 auStack_11ca8 [64];
  undefined1 auStack_11c68 [64];
  undefined1 auStack_11c28 [64];
  undefined1 auStack_11be8 [64];
  undefined1 auStack_11ba8 [64];
  undefined1 auStack_11b68 [64];
  undefined1 auStack_11b28 [64];
  undefined1 auStack_11ae8 [64];
  undefined1 auStack_11aa8 [64];
  undefined1 auStack_11a68 [64];
  undefined1 auStack_11a28 [64];
  undefined1 auStack_119e8 [64];
  undefined1 auStack_119a8 [64];
  undefined1 auStack_11968 [64];
  undefined1 auStack_11928 [64];
  undefined1 auStack_118e8 [64];
  undefined8 auStack_118a8 [8];
  undefined1 auStack_11868 [64];
  undefined1 auStack_11828 [64];
  undefined1 auStack_117e8 [64];
  undefined1 auStack_117a8 [64];
  undefined1 auStack_11768 [64];
  undefined8 uStack_11728;
  longlong lStack_11720;
  undefined8 uStack_11718;
  undefined8 uStack_11710;
  undefined8 uStack_11708;
  undefined8 uStack_11700;
  undefined8 uStack_116f8;
  undefined8 uStack_116f0;
  undefined8 uStack_116e8;
  undefined8 uStack_116e0;
  undefined8 uStack_116d8;
  undefined1 auStack_116d0 [88];
  undefined1 auStack_11678 [88];
  undefined1 auStack_11620 [88];
  undefined1 auStack_115c8 [88];
  undefined1 auStack_11570 [88];
  undefined1 auStack_11518 [88];
  undefined1 auStack_114c0 [88];
  undefined1 auStack_11468 [88];
  undefined1 auStack_11410 [8];
  undefined1 auStack_11408 [64];
  undefined1 auStack_113c8 [80];
  undefined1 auStack_11378 [80];
  undefined1 auStack_11328 [80];
  undefined1 auStack_112d8 [80];
  undefined1 auStack_11288 [80];
  undefined1 auStack_11238 [80];
  undefined1 auStack_111e8 [80];
  undefined1 auStack_11198 [80];
  undefined1 auStack_11148 [80];
  undefined1 auStack_110f8 [80];
  undefined1 auStack_110a8 [80];
  undefined1 auStack_11058 [80];
  undefined1 auStack_11008 [80];
  undefined1 auStack_10fb8 [80];
  undefined1 auStack_10f68 [80];
  undefined1 auStack_10f18 [80];
  undefined1 auStack_10ec8 [80];
  undefined1 auStack_10e78 [80];
  undefined1 auStack_10e28 [80];
  undefined1 auStack_10dd8 [80];
  undefined1 auStack_10d88 [80];
  undefined1 auStack_10d38 [80];
  undefined1 auStack_10ce8 [80];
  undefined1 auStack_10c98 [80];
  undefined1 auStack_10c48 [80];
  undefined1 auStack_10bf8 [80];
  undefined1 auStack_10ba8 [80];
  undefined1 auStack_10b58 [80];
  undefined1 auStack_10b08 [80];
  undefined1 auStack_10ab8 [80];
  undefined1 auStack_10a68 [80];
  undefined1 auStack_10a18 [80];
  undefined1 auStack_109c8 [80];
  undefined1 auStack_10978 [80];
  undefined1 auStack_10928 [80];
  undefined1 auStack_108d8 [80];
  undefined1 auStack_10888 [80];
  undefined1 auStack_10838 [80];
  undefined1 auStack_107e8 [80];
  undefined1 auStack_10798 [80];
  undefined1 auStack_10748 [80];
  undefined1 auStack_106f8 [80];
  undefined1 auStack_106a8 [80];
  undefined1 auStack_10658 [80];
  undefined1 auStack_10608 [80];
  undefined1 auStack_105b8 [80];
  undefined1 auStack_10568 [80];
  undefined1 auStack_10518 [80];
  undefined1 auStack_104c8 [80];
  undefined1 auStack_10478 [80];
  undefined1 auStack_10428 [80];
  undefined1 auStack_103d8 [80];
  undefined1 auStack_10388 [80];
  undefined1 auStack_10338 [80];
  undefined1 auStack_102e8 [80];
  undefined1 auStack_10298 [80];
  undefined1 auStack_10248 [80];
  undefined1 auStack_101f8 [80];
  undefined1 auStack_101a8 [80];
  undefined1 auStack_10158 [80];
  undefined1 auStack_10108 [80];
  undefined1 auStack_100b8 [80];
  undefined1 auStack_10068 [80];
  undefined1 auStack_10018 [80];
  undefined1 local_ffc8 [80];
  undefined1 local_ff78 [80];
  undefined1 local_ff28 [80];
  undefined1 local_fed8 [80];
  undefined1 local_fe88 [80];
  undefined1 local_fe38 [80];
  undefined1 local_fde8 [80];
  undefined1 local_fd98 [80];
  undefined1 local_fd48 [80];
  undefined1 local_fcf8 [80];
  undefined1 local_fca8 [80];
  undefined1 local_fc58 [80];
  undefined1 local_fc08 [80];
  undefined1 local_fbb8 [80];
  undefined1 local_fb68 [80];
  undefined1 local_fb18 [80];
  undefined1 local_fac8 [80];
  undefined1 local_fa78 [80];
  undefined1 local_fa28 [80];
  undefined1 local_f9d8 [80];
  undefined1 local_f988 [80];
  undefined1 local_f938 [80];
  undefined1 local_f8e8 [80];
  undefined1 local_f898 [80];
  undefined1 local_f848 [80];
  undefined1 local_f7f8 [80];
  undefined1 local_f7a8 [80];
  undefined1 local_f758 [80];
  undefined1 local_f708 [80];
  undefined1 local_f6b8 [80];
  undefined1 local_f668 [80];
  undefined1 local_f618 [80];
  undefined1 local_f5c8 [80];
  undefined1 local_f578 [80];
  undefined1 local_f528 [80];
  undefined1 local_f4d8 [80];
  undefined1 local_f488 [80];
  undefined1 local_f438 [80];
  undefined1 local_f3e8 [80];
  undefined1 local_f398 [80];
  undefined1 local_f348 [80];
  undefined1 local_f2f8 [80];
  undefined1 local_f2a8 [80];
  undefined1 local_f258 [80];
  undefined1 local_f208 [80];
  undefined1 local_f1b8 [80];
  undefined1 local_f168 [80];
  undefined1 local_f118 [80];
  undefined1 local_f0c8 [80];
  undefined1 local_f078 [80];
  undefined1 local_f028 [80];
  undefined1 local_efd8 [80];
  undefined1 local_ef88 [80];
  undefined1 local_ef38 [80];
  undefined1 local_eee8 [80];
  undefined1 local_ee98 [80];
  undefined1 local_ee48 [80];
  undefined1 local_edf8 [80];
  undefined1 local_eda8 [80];
  undefined1 local_ed58 [80];
  undefined1 local_ed08 [80];
  undefined1 local_ecb8 [80];
  undefined1 local_ec68 [80];
  undefined1 local_ec18 [80];
  undefined1 local_ebc8 [80];
  undefined1 local_eb78 [80];
  undefined1 local_eb28 [80];
  undefined1 local_ead8 [80];
  undefined1 local_ea88 [80];
  undefined1 local_ea38 [80];
  undefined1 local_e9e8 [80];
  undefined1 local_e998 [80];
  undefined1 local_e948 [80];
  undefined1 local_e8f8 [80];
  undefined1 local_e8a8 [80];
  undefined1 local_e858 [80];
  undefined1 local_e808 [80];
  undefined1 local_e7b8 [80];
  undefined1 local_e768 [80];
  undefined1 local_e718 [80];
  undefined1 local_e6c8 [80];
  undefined1 local_e678 [80];
  undefined1 local_e628 [80];
  undefined1 local_e5d8 [80];
  undefined1 local_e588 [80];
  undefined1 local_e538 [80];
  undefined1 local_e4e8 [80];
  undefined1 local_e498 [80];
  undefined1 local_e448 [80];
  undefined1 local_e3f8 [80];
  undefined1 local_e3a8 [80];
  undefined1 local_e358 [80];
  undefined1 local_e308 [80];
  undefined1 local_e2b8 [80];
  undefined1 local_e268 [80];
  undefined1 local_e218 [80];
  undefined1 local_e1c8 [80];
  undefined1 local_e178 [80];
  undefined1 local_e128 [80];
  undefined1 local_e0d8 [80];
  undefined1 local_e088 [80];
  undefined1 local_e038 [80];
  undefined1 local_dfe8 [80];
  undefined1 local_df98 [80];
  undefined1 local_df48 [80];
  undefined1 local_def8 [80];
  undefined1 local_dea8 [80];
  undefined1 local_de58 [80];
  undefined1 local_de08 [80];
  undefined1 local_ddb8 [80];
  undefined1 local_dd68 [80];
  undefined1 local_dd18 [80];
  undefined1 local_dcc8 [80];
  undefined1 local_dc78 [80];
  undefined1 local_dc28 [80];
  undefined1 local_dbd8 [80];
  undefined1 local_db88 [80];
  undefined1 local_db38 [80];
  undefined1 local_dae8 [80];
  undefined1 local_da98 [80];
  undefined1 local_da48 [80];
  undefined1 local_d9f8 [80];
  undefined1 local_d9a8 [80];
  undefined1 local_d958 [80];
  undefined1 local_d908 [80];
  undefined1 local_d8b8 [80];
  undefined1 local_d868 [80];
  undefined1 local_d818 [80];
  undefined1 local_d7c8 [80];
  undefined1 local_d778 [80];
  undefined1 local_d728 [80];
  undefined1 local_d6d8 [80];
  undefined1 local_d688 [80];
  undefined1 local_d638 [80];
  undefined1 local_d5e8 [80];
  undefined1 local_d598 [80];
  undefined1 local_d548 [80];
  undefined1 local_d4f8 [80];
  undefined1 local_d4a8 [80];
  undefined1 local_d458 [80];
  undefined1 local_d408 [80];
  undefined1 local_d3b8 [80];
  undefined1 local_d368 [80];
  undefined1 local_d318 [80];
  undefined1 local_d2c8 [80];
  undefined1 local_d278 [80];
  undefined1 local_d228 [80];
  undefined1 local_d1d8 [80];
  undefined1 local_d188 [80];
  undefined1 local_d138 [80];
  undefined1 local_d0e8 [80];
  undefined1 local_d098 [80];
  undefined1 local_d048 [80];
  undefined1 local_cff8 [80];
  undefined1 local_cfa8 [80];
  undefined1 local_cf58 [80];
  undefined1 local_cf08 [80];
  undefined1 local_ceb8 [80];
  undefined1 local_ce68 [80];
  undefined1 local_ce18 [80];
  undefined1 local_cdc8 [80];
  undefined1 local_cd78 [80];
  undefined1 local_cd28 [80];
  undefined1 local_ccd8 [80];
  undefined1 local_cc88 [80];
  undefined1 local_cc38 [80];
  undefined1 local_cbe8 [80];
  undefined1 local_cb98 [80];
  undefined1 local_cb48 [80];
  undefined1 local_caf8 [80];
  undefined1 local_caa8 [80];
  undefined1 local_ca58 [80];
  undefined1 local_ca08 [80];
  undefined1 local_c9b8 [80];
  undefined1 local_c968 [80];
  undefined1 local_c918 [80];
  undefined1 local_c8c8 [80];
  undefined1 local_c878 [80];
  undefined1 local_c828 [80];
  undefined1 local_c7d8 [80];
  undefined1 local_c788 [80];
  undefined1 local_c738 [80];
  undefined1 local_c6e8 [80];
  undefined1 local_c698 [80];
  undefined1 local_c648 [80];
  undefined1 local_c5f8 [80];
  undefined1 local_c5a8 [80];
  undefined1 local_c558 [80];
  undefined1 local_c508 [80];
  undefined1 local_c4b8 [80];
  undefined1 local_c468 [80];
  undefined1 local_c418 [80];
  undefined1 local_c3c8 [80];
  undefined1 local_c378 [80];
  undefined1 local_c328 [80];
  undefined1 local_c2d8 [80];
  undefined1 local_c288 [80];
  undefined1 local_c238 [80];
  undefined1 local_c1e8 [80];
  undefined1 local_c198 [80];
  undefined1 local_c148 [80];
  undefined1 local_c0f8 [80];
  undefined1 local_c0a8 [80];
  undefined1 local_c058 [80];
  undefined1 local_c008 [80];
  undefined1 local_bfb8 [80];
  undefined1 local_bf68 [80];
  undefined1 local_bf18 [80];
  undefined1 local_bec8 [80];
  undefined1 local_be78 [80];
  undefined1 local_be28 [80];
  undefined1 local_bdd8 [80];
  undefined1 local_bd88 [80];
  undefined1 local_bd38 [80];
  undefined1 local_bce8 [80];
  undefined1 local_bc98 [80];
  undefined1 local_bc48 [80];
  undefined1 local_bbf8 [80];
  undefined1 local_bba8 [80];
  undefined1 local_bb58 [80];
  undefined1 local_bb08 [80];
  undefined1 local_bab8 [80];
  undefined1 local_ba68 [80];
  undefined1 local_ba18 [80];
  undefined1 local_b9c8 [80];
  undefined1 local_b978 [80];
  undefined1 local_b928 [80];
  undefined1 local_b8d8 [80];
  undefined1 local_b888 [80];
  undefined1 local_b838 [80];
  undefined1 local_b7e8 [80];
  undefined1 local_b798 [80];
  undefined1 local_b748 [80];
  undefined1 local_b6f8 [80];
  undefined1 local_b6a8 [80];
  undefined1 local_b658 [80];
  undefined1 local_b608 [80];
  undefined1 local_b5b8 [80];
  undefined1 local_b568 [80];
  undefined1 local_b518 [80];
  undefined1 local_b4c8 [80];
  undefined1 local_b478 [80];
  undefined1 local_b428 [80];
  undefined1 local_b3d8 [80];
  undefined1 local_b388 [80];
  undefined1 local_b338 [80];
  undefined1 local_b2e8 [80];
  undefined1 local_b298 [80];
  undefined1 local_b248 [80];
  undefined1 local_b1f8 [80];
  undefined1 local_b1a8 [80];
  undefined1 local_b158 [80];
  undefined1 local_b108 [80];
  undefined1 local_b0b8 [80];
  undefined1 local_b068 [80];
  undefined1 local_b018 [80];
  undefined1 local_afc8 [80];
  undefined1 local_af78 [80];
  undefined1 local_af28 [80];
  undefined1 local_aed8 [80];
  undefined1 local_ae88 [80];
  undefined1 local_ae38 [80];
  undefined1 local_ade8 [80];
  undefined1 local_ad98 [80];
  undefined1 local_ad48 [80];
  undefined1 local_acf8 [80];
  undefined1 local_aca8 [80];
  undefined1 local_ac58 [80];
  undefined1 local_ac08 [80];
  undefined1 local_abb8 [80];
  undefined1 local_ab68 [80];
  undefined1 local_ab18 [80];
  undefined1 local_aac8 [80];
  undefined1 local_aa78 [80];
  undefined1 local_aa28 [80];
  undefined1 local_a9d8 [80];
  undefined1 local_a988 [80];
  undefined1 local_a938 [80];
  undefined1 local_a8e8 [80];
  undefined1 local_a898 [80];
  undefined1 local_a848 [80];
  undefined1 local_a7f8 [80];
  undefined1 local_a7a8 [80];
  undefined1 local_a758 [80];
  undefined1 local_a708 [80];
  undefined1 local_a6b8 [80];
  undefined1 local_a668 [80];
  undefined1 local_a618 [80];
  undefined1 local_a5c8 [80];
  undefined1 local_a578 [80];
  undefined1 local_a528 [80];
  undefined1 local_a4d8 [80];
  undefined1 local_a488 [80];
  undefined1 local_a438 [80];
  undefined1 local_a3e8 [80];
  undefined1 local_a398 [80];
  undefined1 local_a348 [80];
  undefined1 local_a2f8 [80];
  undefined1 local_a2a8 [80];
  undefined1 local_a258 [80];
  undefined1 local_a208 [80];
  undefined1 local_a1b8 [80];
  undefined1 local_a168 [80];
  undefined1 local_a118 [80];
  undefined1 local_a0c8 [80];
  undefined1 local_a078 [80];
  undefined1 local_a028 [80];
  undefined1 local_9fd8 [80];
  undefined1 local_9f88 [80];
  undefined1 local_9f38 [80];
  undefined1 local_9ee8 [80];
  undefined1 local_9e98 [80];
  undefined1 local_9e48 [80];
  undefined1 local_9df8 [80];
  undefined1 local_9da8 [80];
  undefined1 local_9d58 [80];
  undefined1 local_9d08 [80];
  undefined1 local_9cb8 [80];
  undefined1 local_9c68 [80];
  undefined1 local_9c18 [80];
  undefined1 local_9bc8 [80];
  undefined1 local_9b78 [80];
  undefined1 local_9b28 [80];
  undefined1 local_9ad8 [80];
  undefined1 local_9a88 [80];
  undefined1 local_9a38 [80];
  undefined1 local_99e8 [80];
  undefined1 local_9998 [80];
  undefined1 local_9948 [80];
  undefined1 local_98f8 [80];
  undefined1 local_98a8 [80];
  undefined1 local_9858 [80];
  undefined1 local_9808 [80];
  undefined1 local_97b8 [80];
  undefined1 local_9768 [80];
  undefined1 local_9718 [80];
  undefined1 local_96c8 [80];
  undefined1 local_9678 [80];
  undefined1 local_9628 [80];
  undefined1 local_95d8 [80];
  undefined1 local_9588 [80];
  undefined1 local_9538 [80];
  undefined1 local_94e8 [80];
  undefined1 local_9498 [80];
  undefined1 local_9448 [80];
  undefined1 local_93f8 [80];
  undefined1 local_93a8 [80];
  undefined1 local_9358 [80];
  undefined1 local_9308 [80];
  undefined1 local_92b8 [80];
  undefined1 local_9268 [80];
  undefined1 local_9218 [80];
  undefined1 local_91c8 [80];
  undefined1 local_9178 [80];
  undefined1 local_9128 [80];
  undefined1 local_90d8 [80];
  undefined1 local_9088 [80];
  undefined1 local_9038 [80];
  undefined1 local_8fe8 [80];
  undefined1 local_8f98 [80];
  undefined1 local_8f48 [80];
  undefined1 local_8ef8 [80];
  undefined1 local_8ea8 [80];
  undefined1 local_8e58 [80];
  undefined1 local_8e08 [80];
  undefined1 local_8db8 [80];
  undefined1 local_8d68 [80];
  undefined1 local_8d18 [80];
  undefined1 local_8cc8 [80];
  undefined1 local_8c78 [80];
  undefined1 local_8c28 [80];
  undefined1 local_8bd8 [80];
  undefined1 local_8b88 [80];
  undefined1 local_8b38 [80];
  undefined1 local_8ae8 [80];
  undefined1 local_8a98 [80];
  undefined1 local_8a48 [80];
  undefined1 local_89f8 [80];
  undefined1 local_89a8 [80];
  undefined1 local_8958 [80];
  undefined1 local_8908 [80];
  undefined1 local_88b8 [80];
  undefined1 local_8868 [80];
  undefined1 local_8818 [80];
  undefined1 local_87c8 [80];
  undefined1 local_8778 [80];
  undefined1 local_8728 [80];
  undefined1 local_86d8 [80];
  undefined1 local_8688 [80];
  undefined1 local_8638 [80];
  undefined1 local_85e8 [88];
  undefined1 local_8590 [88];
  undefined1 local_8538 [88];
  undefined1 local_84e0 [8];
  undefined1 local_84d8 [88];
  undefined1 local_8480 [88];
  undefined1 local_8428 [88];
  undefined1 local_83d0 [88];
  undefined1 local_8378 [88];
  undefined1 local_8320 [88];
  undefined1 local_82c8 [88];
  undefined1 local_8270 [88];
  undefined1 local_8218 [88];
  undefined1 local_81c0 [8];
  undefined1 local_81b8 [88];
  undefined1 local_8160 [88];
  undefined1 local_8108 [88];
  undefined1 local_80b0 [88];
  undefined1 local_8058 [88];
  undefined1 local_8000 [88];
  undefined1 local_7fa8 [88];
  undefined1 local_7f50 [88];
  undefined1 local_7ef8 [88];
  undefined1 local_7ea0 [88];
  undefined1 local_7e48 [88];
  undefined1 local_7df0 [88];
  undefined1 local_7d98 [88];
  undefined1 local_7d40 [88];
  undefined1 local_7ce8 [88];
  undefined1 local_7c90 [88];
  undefined1 local_7c38 [88];
  undefined1 local_7be0 [88];
  undefined1 local_7b88 [88];
  undefined1 local_7b30 [88];
  undefined1 local_7ad8 [88];
  undefined1 local_7a80 [88];
  undefined1 local_7a28 [88];
  undefined1 local_79d0 [88];
  undefined1 local_7978 [88];
  undefined1 local_7920 [88];
  undefined1 local_78c8 [88];
  undefined1 local_7870 [88];
  undefined1 local_7818 [88];
  undefined1 local_77c0 [88];
  undefined1 local_7768 [88];
  undefined1 local_7710 [8];
  undefined1 local_7708 [88];
  undefined1 local_76b0 [88];
  undefined1 local_7658 [88];
  undefined1 local_7600 [88];
  undefined1 local_75a8 [88];
  undefined1 local_7550 [88];
  undefined1 local_74f8 [88];
  undefined1 local_74a0 [88];
  undefined1 local_7448 [88];
  undefined1 local_73f0 [88];
  undefined1 local_7398 [88];
  undefined1 local_7340 [88];
  undefined1 local_72e8 [88];
  undefined1 local_7290 [88];
  undefined1 local_7238 [88];
  undefined1 local_71e0 [88];
  undefined1 local_7188 [88];
  undefined1 local_7130 [88];
  undefined1 local_70d8 [88];
  undefined1 local_7080 [88];
  undefined1 local_7028 [88];
  undefined1 local_6fd0 [88];
  undefined1 local_6f78 [88];
  undefined1 local_6f20 [88];
  undefined1 local_6ec8 [88];
  undefined1 local_6e70 [88];
  undefined1 local_6e18 [88];
  undefined1 local_6dc0 [88];
  undefined1 local_6d68 [88];
  undefined1 local_6d10 [88];
  undefined1 local_6cb8 [88];
  undefined1 local_6c60 [88];
  undefined1 local_6c08 [88];
  undefined1 local_6bb0 [88];
  undefined1 local_6b58 [88];
  undefined1 local_6b00 [88];
  undefined1 local_6aa8 [88];
  undefined1 local_6a50 [88];
  undefined1 local_69f8 [88];
  undefined1 local_69a0 [88];
  undefined1 local_6948 [88];
  undefined1 local_68f0 [88];
  undefined1 local_6898 [88];
  undefined1 local_6840 [88];
  undefined1 local_67e8 [88];
  undefined1 local_6790 [88];
  undefined1 local_6738 [88];
  undefined1 local_66e0 [88];
  undefined1 local_6688 [88];
  undefined1 local_6630 [88];
  undefined1 local_65d8 [88];
  undefined1 local_6580 [88];
  undefined8 local_6528 [11];
  undefined1 local_64d0 [88];
  undefined1 local_6478 [88];
  undefined1 local_6420 [88];
  undefined1 local_63c8 [88];
  undefined1 local_6370 [88];
  undefined1 local_6318 [88];
  undefined1 local_62c0 [88];
  undefined1 local_6268 [88];
  undefined1 local_6210 [88];
  undefined1 local_61b8 [88];
  undefined1 local_6160 [88];
  undefined1 local_6108 [88];
  undefined1 local_60b0 [88];
  undefined1 local_6058 [88];
  undefined1 local_6000 [88];
  undefined1 local_5fa8 [88];
  undefined1 local_5f50 [88];
  undefined1 local_5ef8 [88];
  undefined1 local_5ea0 [88];
  undefined1 local_5e48 [88];
  undefined1 local_5df0 [88];
  undefined1 local_5d98 [88];
  undefined1 local_5d40 [88];
  undefined1 local_5ce8 [88];
  undefined1 local_5c90 [88];
  undefined1 local_5c38 [88];
  undefined1 local_5be0 [88];
  undefined1 local_5b88 [88];
  undefined1 local_5b30 [88];
  undefined1 local_5ad8 [88];
  undefined1 local_5a80 [88];
  undefined1 local_5a28 [88];
  undefined1 local_59d0 [88];
  undefined1 local_5978 [88];
  undefined1 local_5920 [88];
  undefined1 local_58c8 [88];
  undefined1 local_5870 [88];
  undefined1 local_5818 [88];
  undefined1 local_57c0 [88];
  undefined1 local_5768 [88];
  undefined1 local_5710 [88];
  undefined1 local_56b8 [88];
  undefined1 local_5660 [88];
  undefined1 local_5608 [88];
  undefined1 local_55b0 [88];
  undefined1 local_5558 [88];
  undefined1 local_5500 [88];
  undefined1 local_54a8 [88];
  undefined1 local_5450 [88];
  undefined1 local_53f8 [88];
  undefined1 local_53a0 [88];
  undefined1 local_5348 [88];
  undefined1 local_52f0 [88];
  undefined1 local_5298 [88];
  undefined1 local_5240 [88];
  undefined1 local_51e8 [88];
  undefined1 local_5190 [88];
  undefined1 local_5138 [88];
  undefined1 local_50e0 [88];
  undefined1 local_5088 [88];
  undefined1 local_5030 [88];
  undefined1 local_4fd8 [88];
  undefined1 local_4f80 [88];
  undefined1 local_4f28 [88];
  undefined1 local_4ed0 [88];
  undefined1 local_4e78 [88];
  undefined1 local_4e20 [88];
  undefined1 local_4dc8 [88];
  undefined1 local_4d70 [88];
  undefined1 local_4d18 [88];
  undefined1 local_4cc0 [88];
  undefined1 local_4c68 [88];
  undefined1 local_4c10 [88];
  undefined1 local_4bb8 [88];
  undefined1 local_4b60 [88];
  undefined1 local_4b08 [88];
  undefined1 local_4ab0 [88];
  undefined1 local_4a58 [88];
  undefined1 local_4a00 [88];
  undefined1 local_49a8 [88];
  undefined1 local_4950 [88];
  undefined1 local_48f8 [88];
  undefined1 local_48a0 [88];
  undefined1 local_4848 [88];
  undefined1 local_47f0 [88];
  undefined1 local_4798 [88];
  undefined1 local_4740 [88];
  undefined1 local_46e8 [88];
  undefined1 local_4690 [88];
  undefined1 local_4638 [88];
  undefined1 local_45e0 [88];
  undefined1 local_4588 [88];
  undefined1 local_4530 [88];
  undefined1 local_44d8 [88];
  undefined1 local_4480 [88];
  undefined1 local_4428 [88];
  undefined1 local_43d0 [88];
  undefined1 local_4378 [88];
  undefined1 local_4320 [88];
  undefined1 local_42c8 [88];
  undefined1 local_4270 [88];
  undefined1 local_4218 [88];
  undefined1 local_41c0 [88];
  undefined1 local_4168 [88];
  undefined1 local_4110 [88];
  undefined1 local_40b8 [88];
  undefined1 local_4060 [88];
  undefined1 local_4008 [88];
  undefined1 local_3fb0 [88];
  undefined1 local_3f58 [88];
  undefined1 local_3f00 [88];
  undefined1 local_3ea8 [88];
  undefined1 local_3e50 [88];
  undefined1 local_3df8 [88];
  undefined1 local_3da0 [88];
  undefined1 local_3d48 [88];
  undefined1 local_3cf0 [88];
  undefined1 local_3c98 [88];
  undefined1 local_3c40 [88];
  undefined1 local_3be8 [88];
  undefined1 local_3b90 [88];
  undefined1 local_3b38 [88];
  undefined1 local_3ae0 [88];
  undefined1 local_3a88 [88];
  undefined1 local_3a30 [88];
  undefined1 local_39d8 [88];
  undefined1 local_3980 [88];
  undefined1 local_3928 [88];
  undefined1 local_38d0 [88];
  undefined1 local_3878 [88];
  undefined1 local_3820 [88];
  undefined1 local_37c8 [88];
  undefined1 local_3770 [88];
  undefined1 local_3718 [88];
  undefined1 local_36c0 [88];
  undefined1 local_3668 [88];
  undefined1 local_3610 [88];
  undefined1 local_35b8 [88];
  undefined1 local_3560 [88];
  undefined1 local_3508 [88];
  undefined1 local_34b0 [88];
  undefined1 local_3458 [88];
  undefined1 local_3400 [88];
  undefined1 local_33a8 [88];
  undefined1 local_3350 [88];
  undefined1 local_32f8 [88];
  undefined1 local_32a0 [88];
  undefined1 local_3248 [88];
  undefined1 local_31f0 [88];
  undefined1 local_3198 [88];
  undefined1 local_3140 [88];
  undefined1 local_30e8 [88];
  undefined1 local_3090 [88];
  undefined1 local_3038 [88];
  undefined1 local_2fe0 [88];
  undefined1 local_2f88 [88];
  undefined1 local_2f30 [88];
  undefined1 local_2ed8 [88];
  undefined1 local_2e80 [88];
  undefined1 local_2e28 [88];
  undefined1 local_2dd0 [88];
  undefined1 local_2d78 [88];
  undefined1 local_2d20 [88];
  undefined1 local_2cc8 [88];
  undefined1 local_2c70 [88];
  undefined1 local_2c18 [88];
  undefined1 local_2bc0 [88];
  undefined1 local_2b68 [88];
  undefined1 local_2b10 [88];
  undefined1 local_2ab8 [88];
  undefined1 local_2a60 [88];
  undefined1 local_2a08 [88];
  undefined1 local_29b0 [88];
  undefined1 local_2958 [88];
  undefined1 local_2900 [88];
  undefined1 local_28a8 [88];
  undefined1 local_2850 [88];
  undefined1 local_27f8 [88];
  undefined1 local_27a0 [88];
  undefined1 local_2748 [88];
  undefined1 local_26f0 [88];
  undefined1 local_2698 [88];
  undefined1 local_2640 [88];
  undefined1 local_25e8 [88];
  undefined1 local_2590 [88];
  undefined1 local_2538 [88];
  undefined1 local_24e0 [88];
  undefined1 local_2488 [88];
  undefined1 local_2430 [88];
  undefined1 local_23d8 [88];
  undefined1 local_2380 [88];
  undefined1 local_2328 [88];
  undefined1 local_22d0 [88];
  undefined1 local_2278 [88];
  undefined1 local_2220 [88];
  undefined1 local_21c8 [88];
  undefined1 local_2170 [88];
  undefined1 local_2118 [88];
  undefined1 local_20c0 [88];
  undefined1 local_2068 [88];
  undefined1 local_2010 [88];
  undefined1 local_1fb8 [88];
  undefined1 local_1f60 [88];
  undefined1 local_1f08 [88];
  undefined1 local_1eb0 [88];
  undefined1 local_1e58 [88];
  undefined1 local_1e00 [88];
  undefined1 local_1da8 [88];
  undefined1 local_1d50 [88];
  undefined1 local_1cf8 [88];
  undefined1 local_1ca0 [88];
  undefined1 local_1c48 [88];
  undefined1 local_1bf0 [88];
  undefined1 local_1b98 [88];
  undefined1 local_1b40 [88];
  undefined1 local_1ae8 [88];
  undefined1 local_1a90 [88];
  undefined1 local_1a38 [88];
  undefined1 local_19e0 [88];
  undefined1 local_1988 [88];
  undefined1 local_1930 [88];
  undefined1 local_18d8 [88];
  undefined1 local_1880 [88];
  undefined1 local_1828 [88];
  undefined1 local_17d0 [88];
  undefined1 local_1778 [88];
  undefined1 local_1720 [88];
  undefined1 local_16c8 [88];
  undefined1 local_1670 [88];
  undefined1 local_1618 [88];
  undefined1 local_15c0 [88];
  undefined1 local_1568 [88];
  undefined1 local_1510 [88];
  undefined1 local_14b8 [88];
  undefined1 local_1460 [88];
  undefined1 local_1408 [88];
  undefined1 local_13b0 [88];
  undefined1 local_1358 [88];
  undefined1 local_1300 [88];
  undefined1 local_12a8 [88];
  undefined1 local_1250 [88];
  undefined1 local_11f8 [88];
  undefined1 local_11a0 [88];
  undefined1 local_1148 [88];
  undefined1 local_10f0 [88];
  undefined1 local_1098 [88];
  undefined1 local_1040 [88];
  undefined1 local_fe8 [88];
  undefined1 local_f90 [88];
  undefined1 local_f38 [88];
  undefined1 local_ee0 [88];
  undefined1 local_e88 [88];
  undefined1 local_e30 [88];
  undefined1 local_dd8 [88];
  undefined1 local_d80 [88];
  undefined1 local_d28 [88];
  undefined1 local_cd0 [88];
  undefined1 local_c78 [88];
  undefined1 local_c20 [88];
  undefined1 local_bc8 [88];
  undefined1 local_b70 [88];
  undefined1 local_b18 [88];
  undefined1 local_ac0 [88];
  undefined1 local_a68 [88];
  undefined1 local_a10 [88];
  undefined1 local_9b8 [88];
  undefined1 local_960 [88];
  undefined1 local_908 [88];
  undefined1 local_8b0 [88];
  undefined1 local_858 [88];
  undefined1 local_800 [88];
  undefined1 local_7a8 [88];
  undefined1 local_750 [88];
  undefined1 local_6f8 [88];
  undefined1 local_6a0 [88];
  undefined1 local_648 [88];
  undefined1 local_5f0 [88];
  undefined1 local_598 [88];
  undefined1 local_540 [88];
  undefined1 local_4e8 [88];
  undefined1 local_490 [88];
  undefined1 local_438 [88];
  undefined1 local_3e0 [88];
  undefined1 local_388 [88];
  undefined1 local_330 [88];
  undefined1 local_2d8 [88];
  undefined1 local_280 [88];
  undefined1 local_228 [88];
  undefined1 local_1d0 [88];
  undefined1 local_178 [88];
  undefined1 local_120 [88];
  undefined1 local_c8 [88];
  undefined1 local_70 [88];
  undefined8 local_18;
  
  local_18 = 0x180003f45;
  puStack_19b20 = auStack_19a50;
  puStack_198c0 = &uStack_19a40;
  uStack_19a3c = 0;
  uStack_19a34 = 0;
  uStack_19a2c = 0;
  uStack_19a24 = 0;
  uStack_19a1c = 0;
  uStack_19a14 = 0;
  uStack_19a0c = 0;
  uStack_19a40 = 0;
  pTStack_19a08 = &.H::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_87c8,&uStack_19a40);
  uStack_1aaa8 = 0x14c358f5c0f9e5a0;
  plStack_198b8 = &lStack_1aaa0;
  plStack_1a9a8 = &lStack_1aaa0;
  lStack_1aaa0 = 0;
  lStack_1aa98 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  lStack_1aaa0 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = lStack_1aa98;
  uStack_1aa90 = 0;
  uStack_1aa88 = 0;
  uStack_1aa80 = 0;
  uStack_1aa78 = 0;
  uStack_1aa70 = 0;
  uStack_1aa68 = 0;
  uStack_1aa60 = 0;
  uStack_1aa58 = 0;
  lStack_1aa98 = lVar2;
  FUN_180014190(&uStack_1aa90,plVar1 + 2);
  puStack_1a9a0 = &uStack_19a00;
  uStack_199fc = 0;
  uStack_199f4 = 0;
  uStack_199ec = 0;
  uStack_199e4 = 0;
  uStack_199dc = 0;
  uStack_199d4 = 0;
  uStack_199cc = 0;
  uStack_19a00 = 0;
  pTStack_199c8 = &.H::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_8818,&uStack_19a00);
  uStack_1aa50 = 0xe5fa2f778a975d38;
  plStack_1a998 = &lStack_1aa48;
  plStack_1aaf8 = &lStack_1aa48;
  lStack_1aa48 = 0;
  lStack_1aa40 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  lStack_1aa48 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = lStack_1aa40;
  uStack_1aa38 = 0;
  uStack_1aa30 = 0;
  uStack_1aa28 = 0;
  uStack_1aa20 = 0;
  uStack_1aa18 = 0;
  uStack_1aa10 = 0;
  uStack_1aa08 = 0;
  uStack_1aa00 = 0;
  lStack_1aa40 = lVar2;
  FUN_180014190(&uStack_1aa38,plVar1 + 2);
  plStack_1aaf8 = &uStack_1aaa8;
  plStack_1aaf0 = &lStack_1a9f8;
  plVar1 = (longlong *)FUN_1802417d0(auStack_19b10,&plStack_1aaf8);
  plStack_1a990 = plVar1;
  FUN_180241930(&lStack_1a9f8,plVar1);
  uStack_1a9e8 = 0;
  uStack_1a9e0 = 0;
  uStack_1a9d8 = 0;
  uStack_1a9d0 = 0;
  uStack_1a9c8 = 0;
  uStack_1a9c0 = 0;
  uStack_1a9b8 = 0;
  uStack_1a9b0 = 0;
  FUN_180241ba0(plVar1,plVar1,*(undefined8 *)(*plVar1 + 8));
  free((void *)*plVar1);
  uStack_11728 = 0x9b836e00c638db51;
  puStack_1a988 = &lStack_11720;
  puStack_1a980 = &lStack_11720;
  lStack_11720 = 0;
  uStack_11718 = 0;
  lVar2 = FUN_1802d8350(0x78);
  uVar3 = uStack_11718;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  lStack_11720 = lStack_1a9f8;
  uStack_11718 = uStack_1a9f0;
  uStack_1a9f0 = uVar3;
  uStack_11710 = 0;
  uStack_11708 = 0;
  uStack_11700 = 0;
  uStack_116f8 = 0;
  uStack_116f0 = 0;
  uStack_116e8 = 0;
  uStack_116e0 = 0;
  uStack_116d8 = 0;
  lStack_1a9f8 = lVar2;
  FUN_180014190(&uStack_11710,&uStack_1a9e8);
  puStack_1a978 = auStack_19ad0;
  puStack_1a970 = &uStack_198b0;
  uStack_198b0 = 0;
  uStack_198a8 = 0;
  uStack_198a0 = 0;
  uStack_19898 = 0;
  uStack_19890 = 0;
  uStack_19888 = 0;
  uStack_19880 = 0;
  pTStack_19878 = &._N::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_8868,&uStack_198b0);
  uStack_195e8 = 0x402819404e703058;
  plStack_1a968 = &lStack_195e0;
  plStack_1a960 = &lStack_195e0;
  lStack_195e0 = 0;
  lStack_195d8 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  lStack_195e0 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = lStack_195d8;
  uStack_195d0 = 0;
  uStack_195c8 = 0;
  uStack_195c0 = 0;
  uStack_195b8 = 0;
  uStack_195b0 = 0;
  uStack_195a8 = 0;
  uStack_195a0 = 0;
  uStack_19598 = 0;
  lStack_195d8 = lVar2;
  FUN_180014190(&uStack_195d0,plVar1 + 2);
  puStack_1a958 = &uStack_199c0;
  uStack_199bc = 0;
  uStack_199b4 = 0;
  uStack_199ac = 0;
  uStack_199a4 = 0;
  uStack_1999c = 0;
  uStack_19994 = 0;
  uStack_1998c = 0;
  uStack_199c0 = 0;
  pTStack_19988 = &.H::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_88b8,&uStack_199c0);
  uStack_19590 = 0x4064f70bc33de70a;
  plStack_1a950 = &lStack_19588;
  plStack_1a948 = &lStack_19588;
  lStack_19588 = 0;
  lStack_19580 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  lStack_19588 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = lStack_19580;
  uStack_19578 = 0;
  uStack_19570 = 0;
  uStack_19568 = 0;
  uStack_19560 = 0;
  uStack_19558 = 0;
  uStack_19550 = 0;
  uStack_19548 = 0;
  uStack_19540 = 0;
  lStack_19580 = lVar2;
  FUN_180014190(&uStack_19578,plVar1 + 2);
  puStack_1a940 = &uStack_19980;
  uStack_19978 = 0;
  uStack_19970 = 0;
  uStack_19968 = 0;
  uStack_19960 = 0;
  uStack_19958 = 0;
  uStack_19950 = 0;
  uStack_19980 = 1;
  pTStack_19948 = &._N::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_8908,&uStack_19980);
  uStack_19538 = 0xd82019af4eb08e8c;
  plStack_1a938 = &lStack_19530;
  plStack_1a930 = &lStack_19530;
  lStack_19530 = 0;
  lStack_19528 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  lStack_19530 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = lStack_19528;
  uStack_19520 = 0;
  uStack_19518 = 0;
  uStack_19510 = 0;
  uStack_19508 = 0;
  uStack_19500 = 0;
  uStack_194f8 = 0;
  uStack_194f0 = 0;
  uStack_194e8 = 0;
  lStack_19528 = lVar2;
  FUN_180014190(&uStack_19520,plVar1 + 2);
  puStack_1a928 = &uStack_19870;
  uStack_19870 = 0;
  uStack_19868 = 0;
  uStack_19860 = 0;
  uStack_19858 = 0;
  uStack_19850 = 0;
  uStack_19848 = 0;
  uStack_19840 = 0;
  pTStack_19838 = &._N::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_8958,&uStack_19870);
  uStack_194e0 = 0x98b61f50425db001;
  plStack_1a920 = &lStack_194d8;
  plStack_1a918 = &lStack_194d8;
  lStack_194d8 = 0;
  lStack_194d0 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  lStack_194d8 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = lStack_194d0;
  uStack_194c8 = 0;
  uStack_194c0 = 0;
  uStack_194b8 = 0;
  uStack_194b0 = 0;
  uStack_194a8 = 0;
  uStack_194a0 = 0;
  uStack_19498 = 0;
  uStack_19490 = 0;
  lStack_194d0 = lVar2;
  FUN_180014190(&uStack_194c8,plVar1 + 2);
  puStack_1a910 = &uStack_19830;
  uStack_19830 = 0;
  uStack_19828 = 0;
  uStack_19820 = 0;
  uStack_19818 = 0;
  uStack_19810 = 0;
  uStack_19808 = 0;
  uStack_19800 = 0;
  pTStack_197f8 = &._N::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_89a8,&uStack_19830);
  uStack_19488 = 0xef1c37d3998fa2e7;
  plStack_1a908 = &lStack_19480;
  plStack_1a900 = &lStack_19480;
  lStack_19480 = 0;
  lStack_19478 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  lStack_19480 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = lStack_19478;
  uStack_19470 = 0;
  uStack_19468 = 0;
  uStack_19460 = 0;
  uStack_19458 = 0;
  uStack_19450 = 0;
  uStack_19448 = 0;
  uStack_19440 = 0;
  uStack_19438 = 0;
  lStack_19478 = lVar2;
  FUN_180014190(&uStack_19470,plVar1 + 2);
  puStack_1a8f8 = &uStack_197f0;
  uStack_197f0 = 0;
  uStack_197e8 = 0;
  uStack_197e0 = 0;
  uStack_197d8 = 0;
  uStack_197d0 = 0;
  uStack_197c8 = 0;
  uStack_197c0 = 0;
  pTStack_197b8 = &._N::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_89f8,&uStack_197f0);
  uStack_19430 = 0x6c034efd213a832;
  plStack_1a8f0 = &lStack_19428;
  plStack_1a8e8 = &lStack_19428;
  lStack_19428 = 0;
  lStack_19420 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  lStack_19428 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = lStack_19420;
  uStack_19418 = 0;
  uStack_19410 = 0;
  uStack_19408 = 0;
  uStack_19400 = 0;
  uStack_193f8 = 0;
  uStack_193f0 = 0;
  uStack_193e8 = 0;
  uStack_193e0 = 0;
  lStack_19420 = lVar2;
  FUN_180014190(&uStack_19418,plVar1 + 2);
  puStack_1a8e0 = &uStack_19940;
  uStack_19938 = 0;
  uStack_19930 = 0;
  uStack_19928 = 0;
  uStack_19920 = 0;
  uStack_19918 = 0;
  uStack_19910 = 0;
  uStack_19940 = 1;
  pTStack_19908 = &._N::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_8a48,&uStack_19940);
  uStack_193d8 = 0x55a65b38bc54c4a2;
  plStack_1a8d8 = &lStack_193d0;
  plStack_1a8d0 = &lStack_193d0;
  lStack_193d0 = 0;
  lStack_193c8 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  lStack_193d0 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = lStack_193c8;
  uStack_193c0 = 0;
  uStack_193b8 = 0;
  uStack_193b0 = 0;
  uStack_193a8 = 0;
  uStack_193a0 = 0;
  uStack_19398 = 0;
  uStack_19390 = 0;
  uStack_19388 = 0;
  lStack_193c8 = lVar2;
  FUN_180014190(&uStack_193c0,plVar1 + 2);
  puStack_1a8c8 = &uStack_19900;
  uStack_198f8 = 0;
  uStack_198f0 = 0;
  uStack_198e8 = 0;
  uStack_198e0 = 0;
  uStack_198d8 = 0;
  uStack_198d0 = 0;
  uStack_19900 = 1;
  pTStack_198c8 = &._N::RTTI_Type_Descriptor;
  lVar2 = FUN_1802414c0(local_8a98,&uStack_19900);
  uStack_19380 = 0x9653fa4f0c4e1755;
  plStack_1a8c0 = alStack_19378;
  plStack_1a8b8 = alStack_19378;
  alStack_19378[0] = 0;
  alStack_19378[1] = 0;
  alStack_19378[0] = FUN_1802d8350(0x78);
  *(longlong *)alStack_19378[0] = alStack_19378[0];
  *(longlong *)(alStack_19378[0] + 8) = alStack_19378[0];
  *(longlong *)(alStack_19378[0] + 0x10) = alStack_19378[0];
  *(undefined2 *)(alStack_19378[0] + 0x18) = 0x101;
  FUN_180241e20(alStack_19378,lVar2);
  FUN_180241310(auStack_19368,lVar2 + 0x10);
  puStack_1a8b0 = auStack_132e8;
  local_res8[0] = 0;
  uVar3 = FUN_18021efd0(auStack_132e8,local_res8);
  uVar3 = FUN_1802414c0(local_8ae8,uVar3);
  auStack_1ab18[0] = 0x1ff3938001ecac80;
  FUN_180241700(auStack_19328,auStack_1ab18,uVar3);
  puStack_1a8a8 = auStack_11828;
  local_res10[0] = 1;
  uVar3 = FUN_18021efd0(auStack_11828,local_res10);
  uVar3 = FUN_1802414c0(local_8b38,uVar3);
  auStack_1aab8[0] = 0xf49ef2058e631d85;
  FUN_180241700(auStack_192d0,auStack_1aab8,uVar3);
  puStack_1a8a0 = auStack_117e8;
  local_res18[0] = 1;
  uVar3 = FUN_18021efd0(auStack_117e8,local_res18);
  uVar3 = FUN_1802414c0(local_8b88,uVar3);
  uStack_1b928 = 0xd80d0afae9fc7f5a;
  FUN_180241700(auStack_19278,&uStack_1b928,uVar3);
  puStack_1a898 = auStack_117a8;
  local_res20[0] = 0;
  uVar3 = FUN_18021efd0(auStack_117a8,local_res20);
  uVar3 = FUN_1802414c0(local_8bd8,uVar3);
  uStack_1b920 = 0xe455dd426f2b5319;
  FUN_180241700(auStack_19220,&uStack_1b920,uVar3);
  puStack_1a890 = auStack_11768;
  uStack_1bda8 = 0;
  uVar3 = FUN_18021efd0(auStack_11768,&uStack_1bda8);
  uVar3 = FUN_1802414c0(local_8c28,uVar3);
  uStack_1b918 = 0x69dd0449bc44a7a5;
  FUN_180241700(auStack_191c8,&uStack_1b918,uVar3);
  puStack_1a888 = auStack_183a8;
  uStack_1bda7 = 1;
  uVar3 = FUN_18021efd0(auStack_183a8,&uStack_1bda7);
  uVar3 = FUN_1802414c0(local_8c78,uVar3);
  uStack_1b910 = 0xfbdfb712f0666000;
  FUN_180241700(auStack_19170,&uStack_1b910,uVar3);
  puStack_1a880 = auStack_18368;
  uStack_1bda6 = 1;
  uVar3 = FUN_18021efd0(auStack_18368,&uStack_1bda6);
  uVar3 = FUN_1802414c0(local_8cc8,uVar3);
  uStack_1b908 = 0x527acabecbc8e53b;
  FUN_180241700(auStack_19118,&uStack_1b908,uVar3);
  puStack_1a878 = auStack_18328;
  uStack_1bda5 = 0;
  uVar3 = FUN_18021efd0(auStack_18328,&uStack_1bda5);
  uVar3 = FUN_1802414c0(local_8d18,uVar3);
  uStack_1b900 = 0x27a024ee121fd9f2;
  FUN_180241700(auStack_190c0,&uStack_1b900,uVar3);
  puStack_1a870 = auStack_182e8;
  uStack_1bda4 = 0;
  uVar3 = FUN_18021efd0(auStack_182e8,&uStack_1bda4);
  uVar3 = FUN_1802414c0(local_8d68,uVar3);
  uStack_1b8f8 = 0x171b9c7bb87aad2c;
  FUN_180241700(auStack_19068,&uStack_1b8f8,uVar3);
  puStack_1a868 = auStack_19ae0;
  puStack_1a860 = auStack_19af0;
  puStack_1a858 = auStack_19b00;
  puStack_1a850 = auStack_182a8;
  uStack_1bce4 = 0x41200000;
  uVar3 = FUN_18021f090(auStack_182a8,&uStack_1bce4);
  uVar3 = FUN_1802414c0(local_8db8,uVar3);
  uStack_1b8f0 = 0x1b82d4fa2b9cb358;
  FUN_180241700(local_85e8,&uStack_1b8f0,uVar3);
  puStack_1a848 = auStack_18268;
  uStack_1bce0 = 0;
  uVar3 = FUN_18021f090(auStack_18268,&uStack_1bce0);
  uVar3 = FUN_1802414c0(local_8e08,uVar3);
  uStack_1b8e8 = 0x46bd02514660fe35;
  FUN_180241700(local_8590,&uStack_1b8e8,uVar3);
  puStack_1ab28 = auStack_18228;
  uStack_1bcdc = 0x3f000000;
  uVar3 = FUN_18021f090(auStack_18228,&uStack_1bcdc);
  uVar3 = FUN_1802414c0(local_8e58,uVar3);
  uStack_1b8e0 = 0x46d7ec514677a08b;
  FUN_180241700(local_8538,&uStack_1b8e0,uVar3);
  puStack_1ab28 = local_85e8;
  puStack_1ab20 = local_84e0;
  uVar3 = FUN_1802417d0(auStack_19b00,&puStack_1ab28);
  puStack_1b948 = auStack_181e8;
  uStack_1bda3 = 0;
  uVar3 = FUN_18021efd0(auStack_181e8,&uStack_1bda3,uVar3);
  uVar3 = FUN_180241340(local_8ea8,uVar3);
  uStack_1b8d8 = 0xe9473bbe1ee63386;
  FUN_180241700(auStack_19648,&uStack_1b8d8,uVar3);
  puStack_1b948 = auStack_19648;
  puStack_1b940 = auStack_195f0;
  uVar3 = FUN_1802417d0(auStack_19af0,&puStack_1b948);
  uVar3 = FUN_180241460(local_8ef8,uVar3);
  uStack_1b8d0 = 0x3203b4acc51e8a98;
  FUN_180241700(auStack_196a8,&uStack_1b8d0,uVar3);
  puStack_1b948 = auStack_196a8;
  puStack_1b940 = auStack_19650;
  uVar3 = FUN_1802417d0(auStack_19ae0,&puStack_1b948);
  puStack_1a840 = auStack_181a8;
  uStack_1bcd8 = 0;
  uVar3 = FUN_18021f090(auStack_181a8,&uStack_1bcd8,uVar3);
  uVar3 = FUN_180241340(local_8f48,uVar3);
  uStack_1b8c8 = 0xdc8f15f640c36b21;
  FUN_180241700(auStack_19010,&uStack_1b8c8,uVar3);
  puStack_1a838 = auStack_18168;
  uStack_1bcd4 = 0x41000000;
  uVar3 = FUN_18021f090(auStack_18168,&uStack_1bcd4);
  uVar3 = FUN_1802414c0(local_8f98,uVar3);
  uStack_1b8c0 = 0xc7aca84756c0deaa;
  FUN_180241700(auStack_18fb8,&uStack_1b8c0,uVar3);
  puStack_1a830 = auStack_18128;
  uStack_1bcd0 = 0;
  uVar3 = FUN_18021f090(auStack_18128,&uStack_1bcd0);
  uVar3 = FUN_1802414c0(local_8fe8,uVar3);
  uStack_1b8b8 = 0xfb3877511c4b6892;
  FUN_180241700(auStack_18f60,&uStack_1b8b8,uVar3);
  puStack_1a828 = auStack_180e8;
  uStack_1bccc = 0;
  uVar3 = FUN_18021f060(auStack_180e8,&uStack_1bccc);
  uVar3 = FUN_1802414c0(local_9038,uVar3);
  uStack_1b8b0 = 0x549a0576bfe235e1;
  FUN_180241700(auStack_18f08,&uStack_1b8b0,uVar3);
  puStack_1a820 = auStack_180a8;
  uStack_1bda2 = 0;
  uVar3 = FUN_18021efd0(auStack_180a8,&uStack_1bda2);
  uVar3 = FUN_1802414c0(local_9088,uVar3);
  uStack_1b8a8 = 0xfd8fb219a478c8e5;
  FUN_180241700(auStack_18eb0,&uStack_1b8a8,uVar3);
  puStack_1a818 = auStack_18068;
  uStack_1bda1 = 1;
  uVar3 = FUN_18021efd0(auStack_18068,&uStack_1bda1);
  uVar3 = FUN_1802414c0(local_90d8,uVar3);
  uStack_1b8a0 = 0xc811eaac2acc1f62;
  FUN_180241700(auStack_18e58,&uStack_1b8a0,uVar3);
  puStack_1a810 = auStack_18028;
  uStack_1bcc8 = 0;
  uVar3 = FUN_18021f090(auStack_18028,&uStack_1bcc8);
  uVar3 = FUN_1802414c0(local_9128,uVar3);
  uStack_1b898 = 0xe54c15e402c9ceb4;
  FUN_180241700(auStack_18e00,&uStack_1b898,uVar3);
  puStack_1a808 = auStack_17fe8;
  uStack_1bcc4 = 0;
  uVar3 = FUN_18021f090(auStack_17fe8,&uStack_1bcc4);
  uVar3 = FUN_1802414c0(local_9178,uVar3);
  uStack_1b890 = 0xe54c02e402c9ae6b;
  FUN_180241700(auStack_18da8,&uStack_1b890,uVar3);
  puStack_1a800 = auStack_17fa8;
  uStack_1bcc0 = 0;
  uVar3 = FUN_18021f090(auStack_17fa8,&uStack_1bcc0);
  uVar3 = FUN_1802414c0(local_91c8,uVar3);
  uStack_1b888 = 0xe54c05e402c9b384;
  FUN_180241700(auStack_18d50,&uStack_1b888,uVar3);
  puStack_1a7f8 = auStack_17f68;
  uStack_1bcbc = 0x3e99999a;
  uVar3 = FUN_18021f090(auStack_17f68,&uStack_1bcbc);
  uVar3 = FUN_1802414c0(local_9218,uVar3);
  uStack_1b880 = 0xe54c08e402c9b89d;
  FUN_180241700(auStack_18cf8,&uStack_1b880,uVar3);
  puStack_1a7f0 = auStack_17f28;
  uStack_1bda0 = 0;
  uVar3 = FUN_18021efd0(auStack_17f28,&uStack_1bda0);
  uVar3 = FUN_1802414c0(local_9268,uVar3);
  uStack_1b878 = 0xc12dea166e54d7d9;
  FUN_180241700(auStack_18ca0,&uStack_1b878,uVar3);
  puStack_1a7e8 = auStack_17ee8;
  uStack_1bd9f = 0;
  uVar3 = FUN_18021efd0(auStack_17ee8,&uStack_1bd9f);
  uVar3 = FUN_1802414c0(local_92b8,uVar3);
  uStack_1b870 = 0x699671ccb6cec028;
  FUN_180241700(auStack_18c48,&uStack_1b870,uVar3);
  puStack_1a7e0 = auStack_17ea8;
  uStack_1bd9e = 1;
  uVar3 = FUN_18021efd0(auStack_17ea8,&uStack_1bd9e);
  uVar3 = FUN_1802414c0(local_9308,uVar3);
  uStack_1b868 = 0xd782259d0bddef5c;
  FUN_180241700(auStack_18bf0,&uStack_1b868,uVar3);
  puStack_1a7d8 = auStack_17e68;
  uStack_1bd9d = 1;
  uVar3 = FUN_18021efd0(auStack_17e68,&uStack_1bd9d);
  uVar3 = FUN_1802414c0(local_9358,uVar3);
  uStack_1b860 = 0x50665d13ff420b11;
  FUN_180241700(auStack_18b98,&uStack_1b860,uVar3);
  puStack_1a7d0 = auStack_17e28;
  uStack_1bd9c = 1;
  uVar3 = FUN_18021efd0(auStack_17e28,&uStack_1bd9c);
  uVar3 = FUN_1802414c0(local_93a8,uVar3);
  uStack_1b858 = 0x216df9830429193f;
  FUN_180241700(auStack_18b40,&uStack_1b858,uVar3);
  puStack_1a7c8 = auStack_17de8;
  uStack_1bd9b = 1;
  uVar3 = FUN_18021efd0(auStack_17de8,&uStack_1bd9b);
  uVar3 = FUN_1802414c0(local_93f8,uVar3);
  uStack_1b850 = 0xe5e03453c741697f;
  FUN_180241700(auStack_18ae8,&uStack_1b850,uVar3);
  puStack_1a7c0 = auStack_17da8;
  uStack_1bd9a = 0;
  uVar3 = FUN_18021efd0(auStack_17da8,&uStack_1bd9a);
  uVar3 = FUN_1802414c0(local_9448,uVar3);
  uStack_1b848 = 0x8dbcb6da1c093609;
  FUN_180241700(auStack_18a90,&uStack_1b848,uVar3);
  puStack_1a7b8 = auStack_17d68;
  uStack_1bd99 = 0;
  uVar3 = FUN_18021efd0(auStack_17d68,&uStack_1bd99);
  uVar3 = FUN_1802414c0(local_9498,uVar3);
  uStack_1b840 = 0x585adea58af62688;
  FUN_180241700(auStack_18a38,&uStack_1b840,uVar3);
  puStack_1a7b0 = auStack_17d28;
  uStack_1bd98 = 0;
  uVar3 = FUN_18021efd0(auStack_17d28,&uStack_1bd98);
  uVar3 = FUN_1802414c0(local_94e8,uVar3);
  uStack_1b838 = 0xb893a7799007b22f;
  FUN_180241700(auStack_189e0,&uStack_1b838,uVar3);
  puStack_1a7a8 = auStack_17ce8;
  uStack_1bd97 = 0;
  uVar3 = FUN_18021efd0(auStack_17ce8,&uStack_1bd97);
  uVar3 = FUN_1802414c0(local_9538,uVar3);
  uStack_1b830 = 0x8ae1ad0adb54c4f0;
  FUN_180241700(auStack_18988,&uStack_1b830,uVar3);
  puStack_1a7a0 = auStack_17ca8;
  uStack_1bd96 = 0;
  uVar3 = FUN_18021efd0(auStack_17ca8,&uStack_1bd96);
  uVar3 = FUN_1802414c0(local_9588,uVar3);
  uStack_1b828 = 0x841e60f2a28125db;
  FUN_180241700(auStack_18930,&uStack_1b828,uVar3);
  puStack_1a798 = auStack_17c68;
  uStack_1bcb8 = 0x42c00000;
  uVar3 = FUN_18021f090(auStack_17c68,&uStack_1bcb8);
  uVar3 = FUN_1802414c0(local_95d8,uVar3);
  uStack_1b820 = 0x4d3af9f5fe2c9c98;
  FUN_180241700(auStack_188d8,&uStack_1b820,uVar3);
  puStack_1a790 = auStack_17c28;
  uStack_1bd95 = 1;
  uVar3 = FUN_18021efd0(auStack_17c28,&uStack_1bd95);
  uVar3 = FUN_1802414c0(local_9628,uVar3);
  uStack_1b818 = 0xf7e7f1435da8388f;
  FUN_180241700(auStack_18880,&uStack_1b818,uVar3);
  puStack_1a788 = auStack_17be8;
  uStack_1bd94 = 0;
  uVar3 = FUN_18021efd0(auStack_17be8,&uStack_1bd94);
  uVar3 = FUN_1802414c0(local_9678,uVar3);
  uStack_1b810 = 0xe89b321d94ba62e7;
  FUN_180241700(auStack_18828,&uStack_1b810,uVar3);
  puStack_1a780 = auStack_17ba8;
  uStack_1bd93 = 1;
  uVar3 = FUN_18021efd0(auStack_17ba8,&uStack_1bd93);
  uVar3 = FUN_1802414c0(local_96c8,uVar3);
  uStack_1b808 = 0x13c84f53e7f68d8c;
  FUN_180241700(auStack_187d0,&uStack_1b808,uVar3);
  puStack_1a778 = auStack_17b68;
  uStack_1bd92 = 1;
  uVar3 = FUN_18021efd0(auStack_17b68,&uStack_1bd92);
  uVar3 = FUN_1802414c0(local_9718,uVar3);
  uStack_1b800 = 0xd250cd42f963fefb;
  FUN_180241700(auStack_18778,&uStack_1b800,uVar3);
  puStack_1a770 = auStack_17b28;
  uStack_1bd91 = 1;
  uVar3 = FUN_18021efd0(auStack_17b28,&uStack_1bd91);
  uVar3 = FUN_1802414c0(local_9768,uVar3);
  uStack_1b7f8 = 0x510e3af75e01d7bb;
  FUN_180241700(auStack_18720,&uStack_1b7f8,uVar3);
  puStack_1a768 = auStack_17ae8;
  uStack_1bd90 = 1;
  uVar3 = FUN_18021efd0(auStack_17ae8,&uStack_1bd90);
  uVar3 = FUN_1802414c0(local_97b8,uVar3);
  uStack_1b7f0 = 0x27e309181a7f6085;
  FUN_180241700(auStack_186c8,&uStack_1b7f0,uVar3);
  puStack_1a760 = auStack_17aa8;
  uStack_1bd8f = 1;
  uVar3 = FUN_18021efd0(auStack_17aa8,&uStack_1bd8f);
  uVar3 = FUN_1802414c0(local_9808,uVar3);
  uStack_1b7e8 = 0x574f5671b7de6287;
  FUN_180241700(auStack_18670,&uStack_1b7e8,uVar3);
  puStack_1a758 = auStack_17a68;
  uStack_1bcb4 = 0;
  uVar3 = FUN_18021f060(auStack_17a68,&uStack_1bcb4);
  uVar3 = FUN_1802414c0(local_9858,uVar3);
  uStack_1b7e0 = 0xec3e0e78b5602cd;
  FUN_180241700(auStack_18618,&uStack_1b7e0,uVar3);
  puStack_1a750 = auStack_17a28;
  uStack_1bcb0 = 0;
  uVar3 = FUN_18021f060(auStack_17a28,&uStack_1bcb0);
  uVar3 = FUN_1802414c0(local_98a8,uVar3);
  uStack_1b7d8 = 0x87c123d070d26543;
  FUN_180241700(auStack_185c0,&uStack_1b7d8,uVar3);
  puStack_1a748 = auStack_179e8;
  uStack_1bd8e = 1;
  uVar3 = FUN_18021efd0(auStack_179e8,&uStack_1bd8e);
  uVar3 = FUN_1802414c0(local_98f8,uVar3);
  uStack_1b7d0 = 0xcb531a901b22d600;
  FUN_180241700(auStack_18568,&uStack_1b7d0,uVar3);
  puStack_1a740 = auStack_179a8;
  uStack_1bd8d = 1;
  uVar3 = FUN_18021efd0(auStack_179a8,&uStack_1bd8d);
  uVar3 = FUN_1802414c0(local_9948,uVar3);
  uStack_1b7c8 = 0xd0ed55109de221bb;
  FUN_180241700(auStack_18510,&uStack_1b7c8,uVar3);
  puStack_1a738 = auStack_17968;
  uStack_1bd8c = 0;
  uVar3 = FUN_18021efd0(auStack_17968,&uStack_1bd8c);
  uVar3 = FUN_1802414c0(local_9998,uVar3);
  uStack_1b7c0 = 0xe0a48c0d8e551c4c;
  FUN_180241700(auStack_184b8,&uStack_1b7c0,uVar3);
  puStack_1a730 = auStack_17928;
  uStack_1bcac = 0x41000000;
  uVar3 = FUN_18021f090(auStack_17928,&uStack_1bcac);
  uVar3 = FUN_1802414c0(local_99e8,uVar3);
  uStack_1b7b8 = 0xef946101541b4e0d;
  FUN_180241700(auStack_18460,&uStack_1b7b8,uVar3);
  puStack_1ab08 = auStack_178e8;
  uStack_1bca8 = 1;
  uVar3 = FUN_18021f060(auStack_178e8,&uStack_1bca8);
  uVar3 = FUN_1802414c0(local_9a38,uVar3);
  uStack_1b7b0 = 0xe7e1311753777c16;
  FUN_180241700(auStack_18408,&uStack_1b7b0,uVar3);
  puStack_1ab08 = &uStack_195e8;
  puStack_1ab00 = auStack_183b0;
  uVar3 = FUN_1802417d0(auStack_19ad0,&puStack_1ab08);
  uVar3 = FUN_180241460(local_9a88,uVar3);
  uStack_1b7a8 = 0xf7521f28977a3033;
  FUN_180241700(auStack_116d0,&uStack_1b7a8,uVar3);
  puStack_1a728 = auStack_19ac0;
  puStack_1a720 = auStack_178a8;
  uStack_1bd8b = 0;
  uVar3 = FUN_18021efd0(auStack_178a8,&uStack_1bd8b);
  uVar3 = FUN_1802414c0(local_9ad8,uVar3);
  uStack_1b7a0 = 0x402819404e703058;
  FUN_180241700(local_84d8,&uStack_1b7a0,uVar3);
  puStack_1a718 = auStack_17868;
  uStack_1bca4 = 0;
  uVar3 = FUN_18021f060(auStack_17868,&uStack_1bca4);
  uVar3 = FUN_1802414c0(local_9b28,uVar3);
  uStack_1b798 = 0x549a0576bfe235e1;
  FUN_180241700(local_8480,&uStack_1b798,uVar3);
  puStack_1a710 = auStack_17828;
  uStack_1bca0 = 0x14;
  uVar3 = FUN_18021f060(auStack_17828,&uStack_1bca0);
  uVar3 = FUN_1802414c0(local_9b78,uVar3);
  uStack_1b790 = 0xc645d24a36bb943e;
  FUN_180241700(local_8428,&uStack_1b790,uVar3);
  puStack_1ab48 = auStack_177e8;
  uStack_1bc9c = 0x3f4ccccd;
  uVar3 = FUN_18021f090(auStack_177e8,&uStack_1bc9c);
  uVar3 = FUN_1802414c0(local_9bc8,uVar3);
  uStack_1b788 = 0x6ac2a43546cc4271;
  FUN_180241700(local_83d0,&uStack_1b788,uVar3);
  puStack_1ab48 = local_84d8;
  puStack_1ab40 = local_8378;
  uVar3 = FUN_1802417d0(auStack_19ac0,&puStack_1ab48);
  uVar3 = FUN_180241460(local_9c18,uVar3);
  uStack_1b780 = 0x237bcfbdef3b6800;
  FUN_180241700(auStack_11678,&uStack_1b780,uVar3);
  puStack_1a708 = auStack_19ab0;
  puStack_1a700 = auStack_177a8;
  uStack_1bd8a = 0;
  uVar3 = FUN_18021efd0(auStack_177a8,&uStack_1bd8a);
  uVar3 = FUN_1802414c0(local_9c68,uVar3);
  uStack_1b778 = 0x402819404e703058;
  FUN_180241700(local_8378,&uStack_1b778,uVar3);
  puStack_1a6f8 = auStack_17768;
  uStack_1bc98 = 0;
  uVar3 = FUN_18021f060(auStack_17768,&uStack_1bc98);
  uVar3 = FUN_1802414c0(local_9cb8,uVar3);
  uStack_1b770 = 0x549a0576bfe235e1;
  FUN_180241700(local_8320,&uStack_1b770,uVar3);
  puStack_1a6f0 = auStack_17728;
  uStack_1bc94 = 5;
  uVar3 = FUN_18021f060(auStack_17728,&uStack_1bc94);
  uVar3 = FUN_1802414c0(local_9d08,uVar3);
  uStack_1b768 = 0x278f2665d9fce53c;
  FUN_180241700(local_82c8,&uStack_1b768,uVar3);
  puStack_1a6e8 = auStack_176e8;
  uStack_1bc90 = 0;
  uVar3 = FUN_18021f060(auStack_176e8,&uStack_1bc90);
  uVar3 = FUN_1802414c0(local_9d58,uVar3);
  uStack_1b760 = 0x8776ac2cca5b5bb8;
  FUN_180241700(local_8270,&uStack_1b760,uVar3);
  puStack_1ab38 = auStack_176a8;
  uStack_1bc8c = 0;
  uVar3 = FUN_18021f060(auStack_176a8,&uStack_1bc8c);
  uVar3 = FUN_1802414c0(local_9da8,uVar3);
  uStack_1b758 = 0x9bf05500c69582b6;
  FUN_180241700(local_8218,&uStack_1b758,uVar3);
  puStack_1ab38 = local_8378;
  puStack_1ab30 = local_81c0;
  uVar3 = FUN_1802417d0(auStack_19ab0,&puStack_1ab38);
  uVar3 = FUN_180241460(local_9df8,uVar3);
  uStack_1b750 = 0x575dfe7fd1bc6251;
  FUN_180241700(auStack_11620,&uStack_1b750,uVar3);
  puStack_1a6e0 = auStack_19aa0;
  puStack_1a6d8 = auStack_17668;
  uStack_1bd89 = 0;
  uVar3 = FUN_18021efd0(auStack_17668,&uStack_1bd89);
  uVar3 = FUN_1802414c0(local_9e48,uVar3);
  uStack_1b748 = 0x1014d57bcb173b0c;
  FUN_180241700(local_7c38,&uStack_1b748,uVar3);
  puStack_1a6d0 = auStack_17628;
  uStack_1bc88 = 0x5a;
  uVar3 = FUN_18021f060(auStack_17628,&uStack_1bc88);
  uVar3 = FUN_1802414c0(local_9e98,uVar3);
  uStack_1b740 = 0xfb3877511c4b6892;
  FUN_180241700(local_7be0,&uStack_1b740,uVar3);
  puStack_1a6c8 = auStack_175e8;
  uStack_1bd88 = 0;
  uVar3 = FUN_18021efd0(auStack_175e8,&uStack_1bd88);
  uVar3 = FUN_1802414c0(local_9ee8,uVar3);
  uStack_1b738 = 0x98851fb6087b0463;
  FUN_180241700(local_7b88,&uStack_1b738,uVar3);
  puStack_1a6c0 = auStack_175a8;
  uStack_1bd87 = 0;
  uVar3 = FUN_18021efd0(auStack_175a8,&uStack_1bd87);
  uVar3 = FUN_1802414c0(local_9f38,uVar3);
  uStack_1b730 = 0x3506af0b5263e534;
  FUN_180241700(local_7b30,&uStack_1b730,uVar3);
  puStack_1a6b8 = auStack_17568;
  uStack_1bc84 = 0x3e;
  uVar3 = FUN_18021f060(auStack_17568,&uStack_1bc84);
  uVar3 = FUN_1802414c0(local_9f88,uVar3);
  uStack_1b728 = 0x14198b18bdb8cdca;
  FUN_180241700(local_7ad8,&uStack_1b728,uVar3);
  puStack_1a6b0 = auStack_17528;
  uStack_1bc80 = 0;
  uVar3 = FUN_18021f090(auStack_17528,&uStack_1bc80);
  uVar3 = FUN_1802414c0(local_9fd8,uVar3);
  uStack_1b720 = 0xe268578e777a09e5;
  FUN_180241700(local_7a80,&uStack_1b720,uVar3);
  puStack_1a6a8 = auStack_174e8;
  uStack_1bc7c = 0;
  uVar3 = FUN_18021f090(auStack_174e8,&uStack_1bc7c);
  uVar3 = FUN_1802414c0(local_a028,uVar3);
  uStack_1b718 = 0x2c59d7d0279662e0;
  FUN_180241700(local_7a28,&uStack_1b718,uVar3);
  puStack_1a6a0 = auStack_174a8;
  uStack_1bd86 = 0;
  uVar3 = FUN_18021efd0(auStack_174a8,&uStack_1bd86);
  uVar3 = FUN_1802414c0(local_a078,uVar3);
  uStack_1b710 = 0x6b51d6e205141ff1;
  FUN_180241700(local_79d0,&uStack_1b710,uVar3);
  puStack_1a698 = auStack_17468;
  uStack_1bc78 = 0x10;
  uVar3 = FUN_18021f060(auStack_17468,&uStack_1bc78);
  uVar3 = FUN_1802414c0(local_a0c8,uVar3);
  uStack_1b708 = 0xaf72b5e3ad14de05;
  FUN_180241700(local_7978,&uStack_1b708,uVar3);
  puStack_1a690 = auStack_17428;
  uStack_1bc74 = 9;
  uVar3 = FUN_18021f060(auStack_17428,&uStack_1bc74);
  uVar3 = FUN_1802414c0(local_a118,uVar3);
  uStack_1b700 = 0xaf72c6e3ad14fae8;
  FUN_180241700(local_7920,&uStack_1b700,uVar3);
  puStack_1a688 = auStack_173e8;
  uStack_1bd85 = 1;
  uVar3 = FUN_18021efd0(auStack_173e8,&uStack_1bd85);
  uVar3 = FUN_1802414c0(local_a168,uVar3);
  uStack_1b6f8 = 0x630699bb15a84dfa;
  FUN_180241700(local_78c8,&uStack_1b6f8,uVar3);
  puStack_1a680 = auStack_173a8;
  uStack_1bc70 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_173a8,&uStack_1bc70);
  uVar3 = FUN_1802414c0(local_a1b8,uVar3);
  uStack_1b6f0 = 0xa317ec6c0b19990a;
  FUN_180241700(local_7870,&uStack_1b6f0,uVar3);
  puStack_1a678 = auStack_17368;
  uStack_1bc6c = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_17368,&uStack_1bc6c);
  uVar3 = FUN_1802414c0(local_a208,uVar3);
  uStack_1b6e8 = 0xa317ed6c0b199abd;
  FUN_180241700(local_7818,&uStack_1b6e8,uVar3);
  puStack_1a670 = auStack_17328;
  uStack_1bd84 = 0;
  uVar3 = FUN_18021efd0(auStack_17328,&uStack_1bd84);
  uVar3 = FUN_1802414c0(local_a258,uVar3);
  uStack_1b6e0 = 0x1f3365743787d63f;
  FUN_180241700(local_77c0,&uStack_1b6e0,uVar3);
  puStack_1ab58 = auStack_172e8;
  uStack_1bc68 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_172e8,&uStack_1bc68);
  uVar3 = FUN_1802414c0(local_a2a8,uVar3);
  uStack_1b6d8 = 0xd242d32ac1a8eeef;
  FUN_180241700(local_7768,&uStack_1b6d8,uVar3);
  puStack_1ab58 = local_7c38;
  puStack_1ab50 = local_7710;
  uVar3 = FUN_1802417d0(auStack_19aa0,&puStack_1ab58);
  uVar3 = FUN_180241460(local_a2f8,uVar3);
  uStack_1b6d0 = 0xf4f1688ffe5269e4;
  FUN_180241700(auStack_115c8,&uStack_1b6d0,uVar3);
  puStack_1a668 = auStack_19a90;
  puStack_1a660 = auStack_172a8;
  uStack_1bd83 = 0;
  uVar3 = FUN_18021efd0(auStack_172a8,&uStack_1bd83);
  uVar3 = FUN_1802414c0(local_a348,uVar3);
  uStack_1b6c8 = 0x402819404e703058;
  FUN_180241700(local_7fa8,&uStack_1b6c8,uVar3);
  puStack_1a658 = auStack_17268;
  uStack_1bc64 = 200;
  uVar3 = FUN_18021f060(auStack_17268,&uStack_1bc64);
  uVar3 = FUN_1802414c0(local_a398,uVar3);
  uStack_1b6c0 = 0x6018685605485a;
  FUN_180241700(local_7f50,&uStack_1b6c0,uVar3);
  puStack_1a650 = auStack_17228;
  uStack_1bd82 = 1;
  uVar3 = FUN_18021efd0(auStack_17228,&uStack_1bd82);
  uVar3 = FUN_1802414c0(local_a3e8,uVar3);
  uStack_1b6b8 = 0x72114d0ef27e6e77;
  FUN_180241700(local_7ef8,&uStack_1b6b8,uVar3);
  puStack_1a648 = auStack_171e8;
  uStack_1bc60 = 1;
  uVar3 = FUN_18021f060(auStack_171e8,&uStack_1bc60);
  uVar3 = FUN_1802414c0(local_a438,uVar3);
  uStack_1b6b0 = 0x28d1724205c8b8ad;
  FUN_180241700(local_7ea0,&uStack_1b6b0,uVar3);
  puStack_1a640 = auStack_171a8;
  uStack_1bc5c = 0x18;
  uVar3 = FUN_18021f060(auStack_171a8,&uStack_1bc5c);
  uVar3 = FUN_1802414c0(local_a488,uVar3);
  uStack_1b6a8 = 0xfc3bf28ed4bc2e57;
  FUN_180241700(local_7e48,&uStack_1b6a8,uVar3);
  puStack_1a638 = auStack_17168;
  uStack_1bd81 = 1;
  uVar3 = FUN_18021efd0(auStack_17168,&uStack_1bd81);
  uVar3 = FUN_1802414c0(local_a4d8,uVar3);
  uStack_1b6a0 = 0xb651be2253fff5d1;
  FUN_180241700(local_7df0,&uStack_1b6a0,uVar3);
  puStack_1a630 = auStack_17128;
  uStack_1bc58 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_17128,&uStack_1bc58);
  uVar3 = FUN_1802414c0(local_a528,uVar3);
  uStack_1b698 = 0xe092ff67ce3c617e;
  FUN_180241700(local_7d98,&uStack_1b698,uVar3);
  puStack_1a628 = auStack_170e8;
  uStack_1bc54 = 0x3f5c28f6;
  uVar3 = FUN_18021f090(auStack_170e8,&uStack_1bc54);
  uVar3 = FUN_1802414c0(local_a578,uVar3);
  uStack_1b690 = 0xe0931467ce3c852d;
  FUN_180241700(local_7d40,&uStack_1b690,uVar3);
  puStack_1a620 = auStack_170a8;
  uStack_1bc50 = 0x3e3851ec;
  uVar3 = FUN_18021f090(auStack_170a8,&uStack_1bc50);
  uVar3 = FUN_1802414c0(local_a5c8,uVar3);
  uStack_1b688 = 0xe0930f67ce3c7cae;
  FUN_180241700(local_7ce8,&uStack_1b688,uVar3);
  puStack_1aad8 = auStack_17068;
  uStack_1bd80 = 0;
  uVar3 = FUN_18021efd0(auStack_17068,&uStack_1bd80);
  uVar3 = FUN_1802414c0(local_a618,uVar3);
  uStack_1b680 = 0x34f63b042c73cf80;
  FUN_180241700(local_7c90,&uStack_1b680,uVar3);
  puStack_1aad8 = local_7fa8;
  puStack_1aad0 = local_7c38;
  uVar3 = FUN_1802417d0(auStack_19a90,&puStack_1aad8);
  uVar3 = FUN_180241460(local_a668,uVar3);
  uStack_1b678 = 0x13806d9e35de0023;
  FUN_180241700(auStack_11570,&uStack_1b678,uVar3);
  puStack_1a618 = auStack_19a80;
  puStack_1a610 = auStack_17028;
  uStack_1bd7f = 0;
  uVar3 = FUN_18021efd0(auStack_17028,&uStack_1bd7f);
  uVar3 = FUN_1802414c0(local_a6b8,uVar3);
  uStack_1b670 = 0x402819404e703058;
  FUN_180241700(local_81b8,&uStack_1b670,uVar3);
  puStack_1a608 = auStack_16fe8;
  uStack_1bc4c = 0;
  uVar3 = FUN_18021f060(auStack_16fe8,&uStack_1bc4c);
  uVar3 = FUN_1802414c0(local_a708,uVar3);
  uStack_1b668 = 0x549a0576bfe235e1;
  FUN_180241700(local_8160,&uStack_1b668,uVar3);
  puStack_1a600 = auStack_16fa8;
  uStack_1bd7e = 1;
  uVar3 = FUN_18021efd0(auStack_16fa8,&uStack_1bd7e);
  uVar3 = FUN_1802414c0(local_a758,uVar3);
  uStack_1b660 = 0xad8998a7cc2812c;
  FUN_180241700(local_8108,&uStack_1b660,uVar3);
  puStack_1a5f8 = auStack_16f68;
  uStack_1bd7d = 1;
  uVar3 = FUN_18021efd0(auStack_16f68,&uStack_1bd7d);
  uVar3 = FUN_1802414c0(local_a7a8,uVar3);
  uStack_1b658 = 0x4064f70bc33de70a;
  FUN_180241700(local_80b0,&uStack_1b658,uVar3);
  puStack_1a5f0 = auStack_16f28;
  uStack_1bd7c = 1;
  uVar3 = FUN_18021efd0(auStack_16f28,&uStack_1bd7c);
  uVar3 = FUN_1802414c0(local_a7f8,uVar3);
  uStack_1b650 = 0x44f6ba6c1a751b7f;
  FUN_180241700(local_8058,&uStack_1b650,uVar3);
  puStack_1aac8 = auStack_16ee8;
  uStack_1bd7b = 0;
  uVar3 = FUN_18021efd0(auStack_16ee8,&uStack_1bd7b);
  uVar3 = FUN_1802414c0(local_a848,uVar3);
  uStack_1b648 = 0x150438b5fa29716a;
  FUN_180241700(local_8000,&uStack_1b648,uVar3);
  puStack_1aac8 = local_81b8;
  puStack_1aac0 = local_7fa8;
  uVar3 = FUN_1802417d0(auStack_19a80,&puStack_1aac8);
  uVar3 = FUN_180241460(local_a898,uVar3);
  uStack_1b640 = 0x2723fc3764d74742;
  FUN_180241700(auStack_11518,&uStack_1b640,uVar3);
  puStack_1a5e8 = auStack_19a70;
  puStack_1a5e0 = auStack_16ea8;
  uStack_1bd7a = 0;
  uVar3 = FUN_18021efd0(auStack_16ea8,&uStack_1bd7a);
  uVar3 = FUN_1802414c0(local_a8e8,uVar3);
  uStack_1b638 = 0xf877df6876fb9434;
  FUN_180241700(local_7708,&uStack_1b638,uVar3);
  puStack_1a5d8 = auStack_16e68;
  uStack_1bc48 = 0;
  uVar3 = FUN_18021f060(auStack_16e68,&uStack_1bc48);
  uVar3 = FUN_1802414c0(local_a938,uVar3);
  uStack_1b630 = 0xd2ceb89ade8cdec;
  FUN_180241700(local_76b0,&uStack_1b630,uVar3);
  puStack_1a5d0 = auStack_16e28;
  uStack_1bc44 = 0;
  uVar3 = FUN_18021f060(auStack_16e28,&uStack_1bc44);
  uVar3 = FUN_1802414c0(local_a988,uVar3);
  uStack_1b628 = 0x398cc31e81e2db51;
  FUN_180241700(local_7658,&uStack_1b628,uVar3);
  puStack_1a5c8 = auStack_16de8;
  uStack_1bc40 = 0x5a;
  uVar3 = FUN_18021f060(auStack_16de8,&uStack_1bc40);
  uVar3 = FUN_1802414c0(local_a9d8,uVar3);
  uStack_1b620 = 0xeddd7019415d29f4;
  FUN_180241700(local_7600,&uStack_1b620,uVar3);
  puStack_1a5c0 = auStack_16da8;
  uStack_1bc3c = 8;
  uVar3 = FUN_18021f060(auStack_16da8,&uStack_1bc3c);
  uVar3 = FUN_1802414c0(local_aa28,uVar3);
  uStack_1b618 = 0xa93407069741444e;
  FUN_180241700(local_75a8,&uStack_1b618,uVar3);
  puStack_1a5b8 = auStack_16d68;
  uStack_1bc38 = 100;
  uVar3 = FUN_18021f060(auStack_16d68,&uStack_1bc38);
  uVar3 = FUN_1802414c0(local_aa78,uVar3);
  uStack_1b610 = 0xd253a18c1def955d;
  FUN_180241700(local_7550,&uStack_1b610,uVar3);
  puStack_1a5b0 = auStack_16d28;
  uStack_1bc34 = 0x78;
  uVar3 = FUN_18021f060(auStack_16d28,&uStack_1bc34);
  uVar3 = FUN_1802414c0(local_aac8,uVar3);
  uStack_1b608 = 0xc5d1df3fb454def6;
  FUN_180241700(local_74f8,&uStack_1b608,uVar3);
  puStack_1a5a8 = auStack_16ce8;
  uStack_1bd79 = 0;
  uVar3 = FUN_18021efd0(auStack_16ce8,&uStack_1bd79);
  uVar3 = FUN_1802414c0(local_ab18,uVar3);
  uStack_1b600 = 0xb11c6c42591b6fcf;
  FUN_180241700(local_74a0,&uStack_1b600,uVar3);
  puStack_1a5a0 = auStack_16ca8;
  uStack_1bd78 = 0;
  uVar3 = FUN_18021efd0(auStack_16ca8,&uStack_1bd78);
  uVar3 = FUN_1802414c0(local_ab68,uVar3);
  uStack_1b5f8 = 0x604d6bbb4537d70d;
  FUN_180241700(local_7448,&uStack_1b5f8,uVar3);
  puStack_1a598 = auStack_16c68;
  uStack_1bc30 = 0;
  uVar3 = FUN_18021f060(auStack_16c68,&uStack_1bc30);
  uVar3 = FUN_1802414c0(local_abb8,uVar3);
  uStack_1b5f0 = 0x896c5505eb940c1d;
  FUN_180241700(local_73f0,&uStack_1b5f0,uVar3);
  puStack_1a590 = auStack_16c28;
  uStack_1bd77 = 1;
  uVar3 = FUN_18021efd0(auStack_16c28,&uStack_1bd77);
  uVar3 = FUN_1802414c0(local_ac08,uVar3);
  uStack_1b5e8 = 0x3d5b6f9e4e0af044;
  FUN_180241700(local_7398,&uStack_1b5e8,uVar3);
  puStack_1a588 = auStack_16be8;
  uStack_1bd76 = 1;
  uVar3 = FUN_18021efd0(auStack_16be8,&uStack_1bd76);
  uVar3 = FUN_1802414c0(local_ac58,uVar3);
  uStack_1b5e0 = 0xdf7c8b38eaee4e25;
  FUN_180241700(local_7340,&uStack_1b5e0,uVar3);
  puStack_1a580 = auStack_16ba8;
  uStack_1bd75 = 0;
  uVar3 = FUN_18021efd0(auStack_16ba8,&uStack_1bd75);
  uVar3 = FUN_1802414c0(local_aca8,uVar3);
  uStack_1b5d8 = 0x5b93262b0c9c00e0;
  FUN_180241700(local_72e8,&uStack_1b5d8,uVar3);
  puStack_1a578 = auStack_16b68;
  uStack_1bd74 = 1;
  uVar3 = FUN_18021efd0(auStack_16b68,&uStack_1bd74);
  uVar3 = FUN_1802414c0(local_acf8,uVar3);
  uStack_1b5d0 = 0x87b687d7366a2a99;
  FUN_180241700(local_7290,&uStack_1b5d0,uVar3);
  puStack_1a570 = auStack_16b28;
  uStack_1bd73 = 0;
  uVar3 = FUN_18021efd0(auStack_16b28,&uStack_1bd73);
  uVar3 = FUN_1802414c0(local_ad48,uVar3);
  uStack_1b5c8 = 0x59fd2f0c010a554e;
  FUN_180241700(local_7238,&uStack_1b5c8,uVar3);
  puStack_1a568 = auStack_16ae8;
  uStack_1bc2c = 3;
  uVar3 = FUN_18021f060(auStack_16ae8,&uStack_1bc2c);
  uVar3 = FUN_1802414c0(local_ad98,uVar3);
  uStack_1b5c0 = 0xf4577e7766fe48a2;
  FUN_180241700(local_71e0,&uStack_1b5c0,uVar3);
  puStack_1a560 = auStack_16aa8;
  uStack_1bd72 = 0;
  uVar3 = FUN_18021efd0(auStack_16aa8,&uStack_1bd72);
  uVar3 = FUN_1802414c0(local_ade8,uVar3);
  uStack_1b5b8 = 0xca54131a617b42f4;
  FUN_180241700(local_7188,&uStack_1b5b8,uVar3);
  puStack_1a558 = auStack_16a68;
  uStack_1bd71 = 1;
  uVar3 = FUN_18021efd0(auStack_16a68,&uStack_1bd71);
  uVar3 = FUN_1802414c0(local_ae38,uVar3);
  uStack_1b5b0 = 0x160d61dbc3aba2bb;
  FUN_180241700(local_7130,&uStack_1b5b0,uVar3);
  puStack_1a550 = auStack_16a28;
  uStack_1bd70 = 0;
  uVar3 = FUN_18021efd0(auStack_16a28,&uStack_1bd70);
  uVar3 = FUN_1802414c0(local_ae88,uVar3);
  uStack_1b5a8 = 0xee6638fef6f481c0;
  FUN_180241700(local_70d8,&uStack_1b5a8,uVar3);
  puStack_1a548 = auStack_169e8;
  uStack_1bc28 = 0x46;
  uVar3 = FUN_18021f060(auStack_169e8,&uStack_1bc28);
  uVar3 = FUN_1802414c0(local_aed8,uVar3);
  uStack_1b5a0 = 0x4f6f32755f56219;
  FUN_180241700(local_7080,&uStack_1b5a0,uVar3);
  puStack_1a540 = auStack_169a8;
  uStack_1bd6f = 0;
  uVar3 = FUN_18021efd0(auStack_169a8,&uStack_1bd6f);
  uVar3 = FUN_1802414c0(local_af28,uVar3);
  uStack_1b598 = 0x6ab593f4aff6a4b1;
  FUN_180241700(local_7028,&uStack_1b598,uVar3);
  puStack_1a538 = auStack_16968;
  uStack_1bd6e = 0;
  uVar3 = FUN_18021efd0(auStack_16968,&uStack_1bd6e);
  uVar3 = FUN_1802414c0(local_af78,uVar3);
  uStack_1b590 = 0x72114d0ef27e6e77;
  FUN_180241700(local_6fd0,&uStack_1b590,uVar3);
  puStack_1a530 = auStack_16928;
  uStack_1bd6d = 0;
  uVar3 = FUN_18021efd0(auStack_16928,&uStack_1bd6d);
  uVar3 = FUN_1802414c0(local_afc8,uVar3);
  uStack_1b588 = 0x1cb083bf379fe263;
  FUN_180241700(local_6f78,&uStack_1b588,uVar3);
  puStack_1a528 = auStack_168e8;
  uStack_1bd6c = 0;
  uVar3 = FUN_18021efd0(auStack_168e8,&uStack_1bd6c);
  uVar3 = FUN_1802414c0(local_b018,uVar3);
  uStack_1b580 = 0xc980722e39863cca;
  FUN_180241700(local_6f20,&uStack_1b580,uVar3);
  puStack_1a520 = auStack_168a8;
  uStack_1bd6b = 0;
  uVar3 = FUN_18021efd0(auStack_168a8,&uStack_1bd6b);
  uVar3 = FUN_1802414c0(local_b068,uVar3);
  uStack_1b578 = 0x8823bab96cef1ea;
  FUN_180241700(local_6ec8,&uStack_1b578,uVar3);
  puStack_1a518 = auStack_16868;
  uStack_1bc24 = 0;
  uVar3 = FUN_18021f060(auStack_16868,&uStack_1bc24);
  uVar3 = FUN_1802414c0(local_b0b8,uVar3);
  uStack_1b570 = 0x423a90540ddbc421;
  FUN_180241700(local_6e70,&uStack_1b570,uVar3);
  puStack_1a510 = auStack_16828;
  uStack_1bd6a = 0;
  uVar3 = FUN_18021efd0(auStack_16828,&uStack_1bd6a);
  uVar3 = FUN_1802414c0(local_b108,uVar3);
  uStack_1b568 = 0x52e8e7a5c772ca6c;
  FUN_180241700(local_6e18,&uStack_1b568,uVar3);
  puStack_1a508 = auStack_167e8;
  uStack_1bc20 = 0;
  uVar3 = FUN_18021f060(auStack_167e8,&uStack_1bc20);
  uVar3 = FUN_1802414c0(local_b158,uVar3);
  uStack_1b560 = 0x2e7b87382f9b768;
  FUN_180241700(local_6dc0,&uStack_1b560,uVar3);
  puStack_1a500 = auStack_167a8;
  uStack_1bd69 = 0;
  uVar3 = FUN_18021efd0(auStack_167a8,&uStack_1bd69);
  uVar3 = FUN_1802414c0(local_b1a8,uVar3);
  uStack_1b558 = 0x421c37ab4bbb9fa9;
  FUN_180241700(local_6d68,&uStack_1b558,uVar3);
  puStack_1a4f8 = auStack_16768;
  uStack_1bc1c = 0;
  uVar3 = FUN_18021f060(auStack_16768,&uStack_1bc1c);
  uVar3 = FUN_1802414c0(local_b1f8,uVar3);
  uStack_1b550 = 0xa9b614a7a14b0311;
  FUN_180241700(local_6d10,&uStack_1b550,uVar3);
  puStack_1a4f0 = auStack_16728;
  uStack_1bc18 = 0x3c;
  uVar3 = FUN_18021f060(auStack_16728,&uStack_1bc18);
  uVar3 = FUN_1802414c0(local_b248,uVar3);
  uStack_1b548 = 0xd0bdc5255ffea357;
  FUN_180241700(local_6cb8,&uStack_1b548,uVar3);
  puStack_1a4e8 = auStack_166e8;
  uStack_1bc14 = 8;
  uVar3 = FUN_18021f060(auStack_166e8,&uStack_1bc14);
  uVar3 = FUN_1802414c0(local_b298,uVar3);
  uStack_1b540 = 0x87caec02f83d070d;
  FUN_180241700(local_6c60,&uStack_1b540,uVar3);
  puStack_1a4e0 = auStack_166a8;
  uStack_1bd68 = 0;
  uVar3 = FUN_18021efd0(auStack_166a8,&uStack_1bd68);
  uVar3 = FUN_1802414c0(local_b2e8,uVar3);
  uStack_1b538 = 0xd34643a33790f520;
  FUN_180241700(local_6c08,&uStack_1b538,uVar3);
  puStack_1a4d8 = auStack_16668;
  uStack_1bc10 = 0;
  uVar3 = FUN_18021f060(auStack_16668,&uStack_1bc10);
  uVar3 = FUN_1802414c0(local_b338,uVar3);
  uStack_1b530 = 0xb13946245d7c0048;
  FUN_180241700(local_6bb0,&uStack_1b530,uVar3);
  puStack_1a4d0 = auStack_16628;
  uStack_1bc0c = 0;
  uVar3 = FUN_18021f060(auStack_16628,&uStack_1bc0c);
  uVar3 = FUN_1802414c0(local_b388,uVar3);
  uStack_1b528 = 0x59dd15dc32d48bd;
  FUN_180241700(local_6b58,&uStack_1b528,uVar3);
  puStack_1a4c8 = auStack_165e8;
  uStack_1bc08 = 0;
  uVar3 = FUN_18021f060(auStack_165e8,&uStack_1bc08);
  uVar3 = FUN_1802414c0(local_b3d8,uVar3);
  uStack_1b520 = 0xf702e5968aa6c59a;
  FUN_180241700(local_6b00,&uStack_1b520,uVar3);
  puStack_1a4c0 = auStack_165a8;
  uStack_1bc04 = 0;
  uVar3 = FUN_18021f060(auStack_165a8,&uStack_1bc04);
  uVar3 = FUN_1802414c0(local_b428,uVar3);
  uStack_1b518 = 0xaae97fae090a88e9;
  FUN_180241700(local_6aa8,&uStack_1b518,uVar3);
  puStack_1a4b8 = auStack_16568;
  uStack_1bd67 = 1;
  uVar3 = FUN_18021efd0(auStack_16568,&uStack_1bd67);
  uVar3 = FUN_1802414c0(local_b478,uVar3);
  uStack_1b510 = 0xaf1968f7424da736;
  FUN_180241700(local_6a50,&uStack_1b510,uVar3);
  puStack_1a4b0 = auStack_16528;
  uStack_1bc00 = 0;
  uVar3 = FUN_18021f060(auStack_16528,&uStack_1bc00);
  uVar3 = FUN_1802414c0(local_b4c8,uVar3);
  uStack_1b508 = 0xa9c1817373260c25;
  FUN_180241700(local_69f8,&uStack_1b508,uVar3);
  puStack_1a4a8 = auStack_164e8;
  uStack_1bd66 = 1;
  uVar3 = FUN_18021efd0(auStack_164e8,&uStack_1bd66);
  uVar3 = FUN_1802414c0(local_b518,uVar3);
  uStack_1b500 = 0x1c0fbb64b84b566e;
  FUN_180241700(local_69a0,&uStack_1b500,uVar3);
  puStack_1a4a0 = auStack_164a8;
  uStack_1bd65 = 1;
  uVar3 = FUN_18021efd0(auStack_164a8,&uStack_1bd65);
  uVar3 = FUN_1802414c0(local_b568,uVar3);
  uStack_1b4f8 = 0xd4036f972fdb6911;
  FUN_180241700(local_6948,&uStack_1b4f8,uVar3);
  puStack_1a498 = auStack_16468;
  uStack_1bbfc = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_16468,&uStack_1bbfc);
  uVar3 = FUN_1802414c0(local_b5b8,uVar3);
  uStack_1b4f0 = 0xef633722fde02243;
  FUN_180241700(local_68f0,&uStack_1b4f0,uVar3);
  puStack_1a490 = auStack_16428;
  uStack_1bbf8 = 0x3df5c28f;
  uVar3 = FUN_18021f090(auStack_16428,&uStack_1bbf8);
  uVar3 = FUN_1802414c0(local_b608,uVar3);
  uStack_1b4e8 = 0xef632a22fde00c2c;
  FUN_180241700(local_6898,&uStack_1b4e8,uVar3);
  puStack_1a488 = auStack_163e8;
  uStack_1bbf4 = 0x3df5c28f;
  uVar3 = FUN_18021f090(auStack_163e8,&uStack_1bbf4);
  uVar3 = FUN_1802414c0(local_b658,uVar3);
  uStack_1b4e0 = 0xef632722fde00713;
  FUN_180241700(local_6840,&uStack_1b4e0,uVar3);
  puStack_1a480 = auStack_163a8;
  uStack_1bd64 = 0;
  uVar3 = FUN_18021efd0(auStack_163a8,&uStack_1bd64);
  uVar3 = FUN_1802414c0(local_b6a8,uVar3);
  uStack_1b4d8 = 0xe0c32a7e4da84b2e;
  FUN_180241700(local_67e8,&uStack_1b4d8,uVar3);
  puStack_1a478 = auStack_16368;
  uStack_1bbf0 = 0;
  uVar3 = FUN_18021f060(auStack_16368,&uStack_1bbf0);
  uVar3 = FUN_1802414c0(local_b6f8,uVar3);
  uStack_1b4d0 = 0x80da9dc943fdf3cc;
  FUN_180241700(local_6790,&uStack_1b4d0,uVar3);
  puStack_1a470 = auStack_16328;
  uStack_1bbec = 0;
  uVar3 = FUN_18021f060(auStack_16328,&uStack_1bbec);
  uVar3 = FUN_1802414c0(local_b748,uVar3);
  uStack_1b4c8 = 0x4fc289ac518c30d0;
  FUN_180241700(local_6738,&uStack_1b4c8,uVar3);
  puStack_1a468 = auStack_162e8;
  uStack_1bd63 = 0;
  uVar3 = FUN_18021efd0(auStack_162e8,&uStack_1bd63);
  uVar3 = FUN_1802414c0(local_b798,uVar3);
  uStack_1b4c0 = 0x758f1875f440310a;
  FUN_180241700(local_66e0,&uStack_1b4c0,uVar3);
  puStack_1a460 = auStack_162a8;
  uStack_1bbe8 = 300;
  uVar3 = FUN_18021f060(auStack_162a8,&uStack_1bbe8);
  uVar3 = FUN_1802414c0(local_b7e8,uVar3);
  uStack_1b4b8 = 0x1fdde58283cebf32;
  FUN_180241700(local_6688,&uStack_1b4b8,uVar3);
  puStack_1a458 = auStack_16268;
  uStack_1bd62 = 0;
  uVar3 = FUN_18021efd0(auStack_16268,&uStack_1bd62);
  uVar3 = FUN_1802414c0(local_b838,uVar3);
  uStack_1b4b0 = 0x1d9ceb5d1400d87;
  FUN_180241700(local_6630,&uStack_1b4b0,uVar3);
  puStack_1a450 = auStack_16228;
  uStack_1bd61 = 1;
  uVar3 = FUN_18021efd0(auStack_16228,&uStack_1bd61);
  uVar3 = FUN_1802414c0(local_b888,uVar3);
  uStack_1b4a8 = 0xdfb199559e5fc2fa;
  FUN_180241700(local_65d8,&uStack_1b4a8,uVar3);
  puStack_1aae8 = auStack_161e8;
  uStack_1bd60 = 0;
  uVar3 = FUN_18021efd0(auStack_161e8,&uStack_1bd60);
  uVar3 = FUN_1802414c0(local_b8d8,uVar3);
  uStack_1b4a0 = 0xf56e486121667a2b;
  FUN_180241700(local_6580,&uStack_1b4a0,uVar3);
  puStack_1aae8 = local_7708;
  puStack_1aae0 = (undefined1 *)local_6528;
  uVar3 = FUN_1802417d0(auStack_19a70,&puStack_1aae8);
  uVar3 = FUN_180241460(local_b928,uVar3);
  uStack_1b498 = 0x2d8f695138585a77;
  FUN_180241700(auStack_114c0,&uStack_1b498,uVar3);
  puStack_1a448 = auStack_19a60;
  puStack_1a440 = auStack_161a8;
  uStack_1bbe4 = 0;
  uVar3 = FUN_18021f090(auStack_161a8,&uStack_1bbe4);
  uVar3 = FUN_1802414c0(local_b978,uVar3);
  uStack_1b490 = 0x885658c050fa79d2;
  FUN_180241700(local_6528,&uStack_1b490,uVar3);
  puStack_1a438 = auStack_16168;
  uStack_1bd5f = 0;
  uVar3 = FUN_18021efd0(auStack_16168,&uStack_1bd5f);
  uVar3 = FUN_1802414c0(local_b9c8,uVar3);
  uStack_1b488 = 0x4660102069c10657;
  FUN_180241700(local_64d0,&uStack_1b488,uVar3);
  puStack_1a430 = auStack_16128;
  uStack_1bd5e = 0;
  uVar3 = FUN_18021efd0(auStack_16128,&uStack_1bd5e);
  uVar3 = FUN_1802414c0(local_ba18,uVar3);
  uStack_1b480 = 0x148d378145076092;
  FUN_180241700(local_6478,&uStack_1b480,uVar3);
  puStack_1a428 = auStack_160e8;
  uStack_1bbe0 = 0;
  uVar3 = FUN_18021f060(auStack_160e8,&uStack_1bbe0);
  uVar3 = FUN_1802414c0(local_ba68,uVar3);
  uStack_1b478 = 0x9fc064cf8b020230;
  FUN_180241700(local_6420,&uStack_1b478,uVar3);
  puStack_1a420 = auStack_160a8;
  uStack_1bd5d = 0;
  uVar3 = FUN_18021efd0(auStack_160a8,&uStack_1bd5d);
  uVar3 = FUN_1802414c0(local_bab8,uVar3);
  uStack_1b470 = 0x3c5438a1a47f8b76;
  FUN_180241700(local_63c8,&uStack_1b470,uVar3);
  puStack_1a418 = auStack_16068;
  uStack_1bd5c = 0;
  uVar3 = FUN_18021efd0(auStack_16068,&uStack_1bd5c);
  uVar3 = FUN_1802414c0(local_bb08,uVar3);
  uStack_1b468 = 0x5a9cbbd2dc8bfb63;
  FUN_180241700(local_6370,&uStack_1b468,uVar3);
  puStack_1a410 = auStack_16028;
  uStack_1bd5b = 1;
  uVar3 = FUN_18021efd0(auStack_16028,&uStack_1bd5b);
  uVar3 = FUN_1802414c0(local_bb58,uVar3);
  uStack_1b460 = 0xfc192b983f5bff62;
  FUN_180241700(local_6318,&uStack_1b460,uVar3);
  puStack_1a408 = auStack_15fe8;
  uStack_1bd5a = 0;
  uVar3 = FUN_18021efd0(auStack_15fe8,&uStack_1bd5a);
  uVar3 = FUN_1802414c0(local_bba8,uVar3);
  uStack_1b458 = 0xf25e6b861d4180c9;
  FUN_180241700(local_62c0,&uStack_1b458,uVar3);
  puStack_1a400 = auStack_15fa8;
  uStack_1bd59 = 0;
  uVar3 = FUN_18021efd0(auStack_15fa8,&uStack_1bd59);
  uVar3 = FUN_1802414c0(local_bbf8,uVar3);
  uStack_1b450 = 0xf13ca7dd4fb3e293;
  FUN_180241700(local_6268,&uStack_1b450,uVar3);
  puStack_1a3f8 = auStack_15f68;
  uStack_1bd58 = 1;
  uVar3 = FUN_18021efd0(auStack_15f68,&uStack_1bd58);
  uVar3 = FUN_1802414c0(local_bc48,uVar3);
  uStack_1b448 = 0x1efab65b168823bb;
  FUN_180241700(local_6210,&uStack_1b448,uVar3);
  puStack_1a3f0 = auStack_15f28;
  uVar3 = FUN_1800209f0(auStack_196d0);
  uVar3 = FUN_18021f000(auStack_15f28,uVar3);
  uVar3 = FUN_1802414c0(local_bc98,uVar3);
  uStack_1b440 = 0xc262839f3cb156d3;
  FUN_180241700(local_61b8,&uStack_1b440,uVar3);
  puStack_1a3e8 = auStack_15ee8;
  uStack_1bd57 = 1;
  uVar3 = FUN_18021efd0(auStack_15ee8,&uStack_1bd57);
  uVar3 = FUN_1802414c0(local_bce8,uVar3);
  uStack_1b438 = 0xb180266dc2efa3d2;
  FUN_180241700(local_6160,&uStack_1b438,uVar3);
  puStack_1a3e0 = auStack_15ea8;
  uStack_1bd56 = 1;
  uVar3 = FUN_18021efd0(auStack_15ea8,&uStack_1bd56);
  uVar3 = FUN_1802414c0(local_bd38,uVar3);
  uStack_1b430 = 0x3b4f6d0984fb7935;
  FUN_180241700(local_6108,&uStack_1b430,uVar3);
  puStack_1a3d8 = auStack_15e68;
  uStack_1bd55 = 1;
  uVar3 = FUN_18021efd0(auStack_15e68,&uStack_1bd55);
  uVar3 = FUN_1802414c0(local_bd88,uVar3);
  uStack_1b428 = 0x4eeac9b4b69916b0;
  FUN_180241700(local_60b0,&uStack_1b428,uVar3);
  puStack_1a3d0 = auStack_15e28;
  uStack_1bd54 = 0;
  uVar3 = FUN_18021efd0(auStack_15e28,&uStack_1bd54);
  uVar3 = FUN_1802414c0(local_bdd8,uVar3);
  uStack_1b420 = 0x5e23024750be0215;
  FUN_180241700(local_6058,&uStack_1b420,uVar3);
  puStack_1a3c8 = auStack_15de8;
  uStack_1bd53 = 1;
  uVar3 = FUN_18021efd0(auStack_15de8,&uStack_1bd53);
  uVar3 = FUN_1802414c0(local_be28,uVar3);
  uStack_1b418 = 0x24281ae302625222;
  FUN_180241700(local_6000,&uStack_1b418,uVar3);
  puStack_1a3c0 = auStack_15da8;
  uStack_1bd52 = 0;
  uVar3 = FUN_18021efd0(auStack_15da8,&uStack_1bd52);
  uVar3 = FUN_1802414c0(local_be78,uVar3);
  uStack_1b410 = 0x664dead32a23502e;
  FUN_180241700(local_5fa8,&uStack_1b410,uVar3);
  puStack_1a3b8 = auStack_15d68;
  uStack_1bd51 = 1;
  uVar3 = FUN_18021efd0(auStack_15d68,&uStack_1bd51);
  uVar3 = FUN_1802414c0(local_bec8,uVar3);
  uStack_1b408 = 0x458f5bdd872c1a5a;
  FUN_180241700(local_5f50,&uStack_1b408,uVar3);
  puStack_1a3b0 = auStack_15d28;
  uStack_1bd50 = 1;
  uVar3 = FUN_18021efd0(auStack_15d28,&uStack_1bd50);
  uVar3 = FUN_1802414c0(local_bf18,uVar3);
  uStack_1b400 = 0x3444988f08a45235;
  FUN_180241700(local_5ef8,&uStack_1b400,uVar3);
  puStack_1a3a8 = auStack_15ce8;
  uStack_1bd4f = 1;
  uVar3 = FUN_18021efd0(auStack_15ce8,&uStack_1bd4f);
  uVar3 = FUN_1802414c0(local_bf68,uVar3);
  uStack_1b3f8 = 0xf0a1c0c34f189d8b;
  FUN_180241700(local_5ea0,&uStack_1b3f8,uVar3);
  puStack_1a3a0 = auStack_15ca8;
  uStack_1bd4e = 1;
  uVar3 = FUN_18021efd0(auStack_15ca8,&uStack_1bd4e);
  uVar3 = FUN_1802414c0(local_bfb8,uVar3);
  uStack_1b3f0 = 0x41733ddd14766b92;
  FUN_180241700(local_5e48,&uStack_1b3f0,uVar3);
  puStack_1a398 = auStack_15c68;
  uStack_1bbdc = 0x3f99999a;
  uVar3 = FUN_18021f090(auStack_15c68,&uStack_1bbdc);
  uVar3 = FUN_1802414c0(local_c008,uVar3);
  uStack_1b3e8 = 0xdeee6b0ba2852235;
  FUN_180241700(local_5df0,&uStack_1b3e8,uVar3);
  puStack_1a390 = auStack_15c28;
  uStack_1bbd8 = 0x40e00000;
  uVar3 = FUN_18021f090(auStack_15c28,&uStack_1bbd8);
  uVar3 = FUN_1802414c0(local_c058,uVar3);
  uStack_1b3e0 = 0x8d4e2b57d73bf615;
  FUN_180241700(local_5d98,&uStack_1b3e0,uVar3);
  puStack_1a388 = auStack_15be8;
  uStack_1bbd4 = 0x3ee66666;
  uVar3 = FUN_18021f090(auStack_15be8,&uStack_1bbd4);
  uVar3 = FUN_1802414c0(local_c0a8,uVar3);
  uStack_1b3d8 = 0x52baa275b0ded003;
  FUN_180241700(local_5d40,&uStack_1b3d8,uVar3);
  puStack_1a380 = auStack_15ba8;
  uStack_1bbd0 = 0x3f400000;
  uVar3 = FUN_18021f090(auStack_15ba8,&uStack_1bbd0);
  uVar3 = FUN_1802414c0(local_c0f8,uVar3);
  uStack_1b3d0 = 0x52ba9575b0deb9ec;
  FUN_180241700(local_5ce8,&uStack_1b3d0,uVar3);
  puStack_1a378 = auStack_15b68;
  uStack_1bbcc = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_15b68,&uStack_1bbcc);
  uVar3 = FUN_1802414c0(local_c148,uVar3);
  uStack_1b3c8 = 0x52ba9275b0deb4d3;
  FUN_180241700(local_5c90,&uStack_1b3c8,uVar3);
  puStack_1a370 = auStack_15b28;
  uStack_1bbc8 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_15b28,&uStack_1bbc8);
  uVar3 = FUN_1802414c0(local_c198,uVar3);
  uStack_1b3c0 = 0x3fefb7f2d012d053;
  FUN_180241700(local_5c38,&uStack_1b3c0,uVar3);
  puStack_1a368 = auStack_15ae8;
  uStack_1bbc4 = 0x3f333333;
  uVar3 = FUN_18021f090(auStack_15ae8,&uStack_1bbc4);
  uVar3 = FUN_1802414c0(local_c1e8,uVar3);
  uStack_1b3b8 = 0x3fefcaf2d012f09c;
  FUN_180241700(local_5be0,&uStack_1b3b8,uVar3);
  puStack_1a360 = auStack_15aa8;
  uStack_1bbc0 = 0x3e4ccccd;
  uVar3 = FUN_18021f090(auStack_15aa8,&uStack_1bbc0);
  uVar3 = FUN_1802414c0(local_c238,uVar3);
  uStack_1b3b0 = 0x3fefc7f2d012eb83;
  FUN_180241700(local_5b88,&uStack_1b3b0,uVar3);
  puStack_1a358 = auStack_15a68;
  uStack_1bbbc = 0x3f400000;
  uVar3 = FUN_18021f090(auStack_15a68,&uStack_1bbbc);
  uVar3 = FUN_1802414c0(local_c288,uVar3);
  uStack_1b3a8 = 0xe593c30362c405ee;
  FUN_180241700(local_5b30,&uStack_1b3a8,uVar3);
  puStack_1a350 = auStack_15a28;
  uStack_1bbb8 = 0x3ecccccd;
  uVar3 = FUN_18021f090(auStack_15a28,&uStack_1bbb8);
  uVar3 = FUN_1802414c0(local_c2d8,uVar3);
  uStack_1b3a0 = 0xe593b80362c3f33d;
  FUN_180241700(local_5ad8,&uStack_1b3a0,uVar3);
  puStack_1a348 = auStack_159e8;
  uStack_1bbb4 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_159e8,&uStack_1bbb4);
  uVar3 = FUN_1802414c0(local_c328,uVar3);
  uStack_1b398 = 0xe593b30362c3eabe;
  FUN_180241700(local_5a80,&uStack_1b398,uVar3);
  puStack_1a340 = auStack_159a8;
  uStack_1bbb0 = 0x3e99999a;
  uVar3 = FUN_18021f090(auStack_159a8,&uStack_1bbb0);
  uVar3 = FUN_1802414c0(local_c378,uVar3);
  uStack_1b390 = 0x275446d884c62fd9;
  FUN_180241700(local_5a28,&uStack_1b390,uVar3);
  puStack_1a338 = auStack_15968;
  uStack_1bbac = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_15968,&uStack_1bbac);
  uVar3 = FUN_1802414c0(local_c3c8,uVar3);
  uStack_1b388 = 0x275459d884c65022;
  FUN_180241700(local_59d0,&uStack_1b388,uVar3);
  puStack_1a330 = auStack_15928;
  uStack_1bba8 = 0x3ee66666;
  uVar3 = FUN_18021f090(auStack_15928,&uStack_1bba8);
  uVar3 = FUN_1802414c0(local_c418,uVar3);
  uStack_1b380 = 0x275456d884c64b09;
  FUN_180241700(local_5978,&uStack_1b380,uVar3);
  puStack_1a328 = auStack_158e8;
  uStack_1bd4d = 0;
  uVar3 = FUN_18021efd0(auStack_158e8,&uStack_1bd4d);
  uVar3 = FUN_1802414c0(local_c468,uVar3);
  uStack_1b378 = 0x1a096a9307a0dc72;
  FUN_180241700(local_5920,&uStack_1b378,uVar3);
  puStack_1a320 = auStack_158a8;
  uStack_1bba4 = 0x41700000;
  uVar3 = FUN_18021f090(auStack_158a8,&uStack_1bba4);
  uVar3 = FUN_1802414c0(local_c4b8,uVar3);
  uStack_1b370 = 0xa6fe116c060e2773;
  FUN_180241700(local_58c8,&uStack_1b370,uVar3);
  puStack_1a318 = auStack_15868;
  uStack_1bba0 = 3;
  uVar3 = FUN_18021f060(auStack_15868,&uStack_1bba0);
  uVar3 = FUN_1802414c0(local_c508,uVar3);
  uStack_1b368 = 0x8e62cf1c230948fa;
  FUN_180241700(local_5870,&uStack_1b368,uVar3);
  puStack_1a310 = auStack_15828;
  uStack_1bb9c = 1;
  uVar3 = FUN_18021f060(auStack_15828,&uStack_1bb9c);
  uVar3 = FUN_1802414c0(local_c558,uVar3);
  uStack_1b360 = 0x36e83df20bb4f44e;
  FUN_180241700(local_5818,&uStack_1b360,uVar3);
  puStack_1a308 = auStack_157e8;
  uStack_1bd4c = 0;
  uVar3 = FUN_18021efd0(auStack_157e8,&uStack_1bd4c);
  uVar3 = FUN_1802414c0(local_c5a8,uVar3);
  uStack_1b358 = 0xc81ef1c43455b3be;
  FUN_180241700(local_57c0,&uStack_1b358,uVar3);
  puStack_1a300 = auStack_157a8;
  uStack_1bb98 = 0;
  uVar3 = FUN_18021f060(auStack_157a8,&uStack_1bb98);
  uVar3 = FUN_1802414c0(local_c5f8,uVar3);
  uStack_1b350 = 0xf33b4d9fbb78de14;
  FUN_180241700(local_5768,&uStack_1b350,uVar3);
  puStack_1a2f8 = auStack_15768;
  uStack_1bd4b = 1;
  uVar3 = FUN_18021efd0(auStack_15768,&uStack_1bd4b);
  uVar3 = FUN_1802414c0(local_c648,uVar3);
  uStack_1b348 = 0x943e8f97e20d790f;
  FUN_180241700(local_5710,&uStack_1b348,uVar3);
  puStack_1a2f0 = auStack_15728;
  uStack_1bd4a = 1;
  uVar3 = FUN_18021efd0(auStack_15728,&uStack_1bd4a);
  uVar3 = FUN_1802414c0(local_c698,uVar3);
  uStack_1b340 = 0xca4e752e29553884;
  FUN_180241700(local_56b8,&uStack_1b340,uVar3);
  puStack_1a2e8 = auStack_156e8;
  uStack_1bd49 = 1;
  uVar3 = FUN_18021efd0(auStack_156e8,&uStack_1bd49);
  uVar3 = FUN_1802414c0(local_c6e8,uVar3);
  uStack_1b338 = 0xba33a12acf3fe1c3;
  FUN_180241700(local_5660,&uStack_1b338,uVar3);
  puStack_1a2e0 = auStack_156a8;
  uStack_1bb94 = 0;
  uVar3 = FUN_18021f060(auStack_156a8,&uStack_1bb94);
  uVar3 = FUN_1802414c0(local_c738,uVar3);
  uStack_1b330 = 0xc94e595f119c0d27;
  FUN_180241700(local_5608,&uStack_1b330,uVar3);
  puStack_1a2d8 = auStack_15668;
  uStack_1bb90 = 2;
  uVar3 = FUN_18021f060(auStack_15668,&uStack_1bb90);
  uVar3 = FUN_1802414c0(local_c788,uVar3);
  uStack_1b328 = 0x147e6eb3aac54b6a;
  FUN_180241700(local_55b0,&uStack_1b328,uVar3);
  puStack_1a2d0 = auStack_15628;
  uStack_1bd48 = 1;
  uVar3 = FUN_18021efd0(auStack_15628,&uStack_1bd48);
  uVar3 = FUN_1802414c0(local_c7d8,uVar3);
  uStack_1b320 = 0x3d5984117d619a29;
  FUN_180241700(local_5558,&uStack_1b320,uVar3);
  puStack_1a2c8 = auStack_155e8;
  uStack_1bd47 = 0;
  uVar3 = FUN_18021efd0(auStack_155e8,&uStack_1bd47);
  uVar3 = FUN_1802414c0(local_c828,uVar3);
  uStack_1b318 = 0xd9b9362dec8652e9;
  FUN_180241700(local_5500,&uStack_1b318,uVar3);
  puStack_1a2c0 = auStack_155a8;
  uStack_1bd46 = 1;
  uVar3 = FUN_18021efd0(auStack_155a8,&uStack_1bd46);
  uVar3 = FUN_1802414c0(local_c878,uVar3);
  uStack_1b310 = 0xd9d9a537b635808a;
  FUN_180241700(local_54a8,&uStack_1b310,uVar3);
  puStack_1a2b8 = auStack_15568;
  uStack_1bb8c = 0x40e00000;
  uVar3 = FUN_18021f090(auStack_15568,&uStack_1bb8c);
  uVar3 = FUN_1802414c0(local_c8c8,uVar3);
  uStack_1b308 = 0x37d610d6457aae0b;
  FUN_180241700(local_5450,&uStack_1b308,uVar3);
  puStack_1a2b0 = auStack_15528;
  uStack_1bb88 = 0x3eb33333;
  uVar3 = FUN_18021f090(auStack_15528,&uStack_1bb88);
  uVar3 = FUN_1802414c0(local_c918,uVar3);
  uStack_1b300 = 0x326b122a2468290;
  FUN_180241700(local_53f8,&uStack_1b300,uVar3);
  puStack_1a2a8 = auStack_154e8;
  uStack_1bb84 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_154e8,&uStack_1bb84);
  uVar3 = FUN_1802414c0(local_c968,uVar3);
  uStack_1b2f8 = 0x326a622a2466fdf;
  FUN_180241700(local_53a0,&uStack_1b2f8,uVar3);
  puStack_1a2a0 = auStack_154a8;
  uStack_1bb80 = 0x3ee66666;
  uVar3 = FUN_18021f090(auStack_154a8,&uStack_1bb80);
  uVar3 = FUN_1802414c0(local_c9b8,uVar3);
  uStack_1b2f0 = 0x326a122a2466760;
  FUN_180241700(local_5348,&uStack_1b2f0,uVar3);
  puStack_1a298 = auStack_15468;
  uStack_1bb7c = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_15468,&uStack_1bb7c);
  uVar3 = FUN_1802414c0(local_ca08,uVar3);
  uStack_1b2e8 = 0x339b38ff8a9ce8c2;
  FUN_180241700(local_52f0,&uStack_1b2e8,uVar3);
  puStack_1a290 = auStack_15428;
  uStack_1bb78 = 0x3ee66666;
  uVar3 = FUN_18021f090(auStack_15428,&uStack_1bb78);
  uVar3 = FUN_1802414c0(local_ca58,uVar3);
  uStack_1b2e0 = 0x339b25ff8a9cc879;
  FUN_180241700(local_5298,&uStack_1b2e0,uVar3);
  puStack_1a288 = auStack_153e8;
  uStack_1bb74 = 0x3e99999a;
  uVar3 = FUN_18021f090(auStack_153e8,&uStack_1bb74);
  uVar3 = FUN_1802414c0(local_caa8,uVar3);
  uStack_1b2d8 = 0x339b28ff8a9ccd92;
  FUN_180241700(local_5240,&uStack_1b2d8,uVar3);
  puStack_1a280 = auStack_153a8;
  uStack_1bb70 = 0xe;
  uVar3 = FUN_18021f060(auStack_153a8,&uStack_1bb70);
  uVar3 = FUN_1802414c0(local_caf8,uVar3);
  uStack_1b2d0 = 0x1b344e11194f3ea3;
  FUN_180241700(local_51e8,&uStack_1b2d0,uVar3);
  puStack_1a278 = auStack_15368;
  uStack_1bd45 = 0;
  uVar3 = FUN_18021efd0(auStack_15368,&uStack_1bd45);
  uVar3 = FUN_1802414c0(local_cb48,uVar3);
  uStack_1b2c8 = 0x9d10f28b96c10dd7;
  FUN_180241700(local_5190,&uStack_1b2c8,uVar3);
  uStack_1b2c0 = 0xb51863fffb940c02;
  uVar3 = FUN_1802415b0(local_cb98);
  FUN_180241700(local_5138,&uStack_1b2c0,uVar3);
  puStack_1a270 = auStack_15328;
  uStack_1bd44 = 0;
  uVar3 = FUN_18021efd0(auStack_15328,&uStack_1bd44);
  uVar3 = FUN_1802414c0(local_cbe8,uVar3);
  uStack_1b2b8 = 0x8d6c6958b3bd884;
  FUN_180241700(local_50e0,&uStack_1b2b8,uVar3);
  puStack_1a268 = auStack_152e8;
  uVar3 = FUN_1800130c0(auStack_196f0,&DAT_180350664,2);
  uVar3 = FUN_18021f000(auStack_152e8,uVar3);
  uVar3 = FUN_1802414c0(local_cc38,uVar3);
  uStack_1b2b0 = 0x2571ed13f906d189;
  FUN_180241700(local_5088,&uStack_1b2b0,uVar3);
  puStack_1a260 = auStack_152a8;
  uVar3 = FUN_1800130c0(auStack_19710,"vgui/white",10);
  uVar3 = FUN_18021f000(auStack_152a8,uVar3);
  uVar3 = FUN_1802414c0(local_cc88,uVar3);
  uStack_1b2a8 = 0xdb13c9bf8c41683a;
  FUN_180241700(local_5030,&uStack_1b2a8,uVar3);
  puStack_1a258 = auStack_15268;
  uStack_1bd43 = 0;
  uVar3 = FUN_18021efd0(auStack_15268,&uStack_1bd43);
  uVar3 = FUN_1802414c0(local_ccd8,uVar3);
  uStack_1b2a0 = 0x77529aa166dd40cf;
  FUN_180241700(local_4fd8,&uStack_1b2a0,uVar3);
  puStack_1a250 = auStack_15228;
  uStack_1bb6c = 0x3e800000;
  uVar3 = FUN_18021f090(auStack_15228,&uStack_1bb6c);
  uVar3 = FUN_1802414c0(local_cd28,uVar3);
  uStack_1b298 = 0x7a0421ca2acf25a6;
  FUN_180241700(local_4f80,&uStack_1b298,uVar3);
  puStack_1a248 = auStack_151e8;
  uStack_1bb68 = 0x3f59999a;
  uVar3 = FUN_18021f090(auStack_151e8,&uStack_1bb68);
  uVar3 = FUN_1802414c0(local_cd78,uVar3);
  uStack_1b290 = 0x7a0436ca2acf4955;
  FUN_180241700(local_4f28,&uStack_1b290,uVar3);
  puStack_1a240 = auStack_151a8;
  uStack_1bb64 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_151a8,&uStack_1bb64);
  uVar3 = FUN_1802414c0(local_cdc8,uVar3);
  uStack_1b288 = 0x7a0431ca2acf40d6;
  FUN_180241700(local_4ed0,&uStack_1b288,uVar3);
  puStack_1a238 = auStack_15168;
  uStack_1bb60 = 0x40000000;
  uVar3 = FUN_18021f090(auStack_15168,&uStack_1bb60);
  uVar3 = FUN_1802414c0(local_ce18,uVar3);
  uStack_1b280 = 0x2191660276572982;
  FUN_180241700(local_4e78,&uStack_1b280,uVar3);
  puStack_1a230 = auStack_15128;
  uStack_1bb5c = 0x45000000;
  uVar3 = FUN_18021f090(auStack_15128,&uStack_1bb5c);
  uVar3 = FUN_1802414c0(local_ce68,uVar3);
  uStack_1b278 = 0x8cf9aa16a6e38aec;
  FUN_180241700(local_4e20,&uStack_1b278,uVar3);
  puStack_1a228 = auStack_150e8;
  uStack_1bd42 = 0;
  uVar3 = FUN_18021efd0(auStack_150e8,&uStack_1bd42);
  uVar3 = FUN_1802414c0(local_ceb8,uVar3);
  uStack_1b270 = 0x63c2f5206022a3b5;
  FUN_180241700(local_4dc8,&uStack_1b270,uVar3);
  puStack_1a220 = auStack_150a8;
  uStack_1bd41 = 1;
  uVar3 = FUN_18021efd0(auStack_150a8,&uStack_1bd41);
  uVar3 = FUN_1802414c0(local_cf08,uVar3);
  uStack_1b268 = 0x9753ed81b6269b2f;
  FUN_180241700(local_4d70,&uStack_1b268,uVar3);
  puStack_1a218 = auStack_15068;
  uStack_1bb58 = 0x43700000;
  uVar3 = FUN_18021f090(auStack_15068,&uStack_1bb58);
  uVar3 = FUN_1802414c0(local_cf58,uVar3);
  uStack_1b260 = 0x50274704b678695f;
  FUN_180241700(local_4d18,&uStack_1b260,uVar3);
  puStack_1a210 = auStack_15028;
  uStack_1bb54 = 0x44bb8000;
  uVar3 = FUN_18021f090(auStack_15028,&uStack_1bb54);
  uVar3 = FUN_1802414c0(local_cfa8,uVar3);
  uStack_1b258 = 0x7138abbc8fbd554b;
  FUN_180241700(local_4cc0,&uStack_1b258,uVar3);
  puStack_1a208 = auStack_14fe8;
  uStack_1bb50 = 0x3c75c28f;
  uVar3 = FUN_18021f090(auStack_14fe8,&uStack_1bb50);
  uVar3 = FUN_1802414c0(local_cff8,uVar3);
  uStack_1b250 = 0x7ce33bb364b938d2;
  FUN_180241700(local_4c68,&uStack_1b250,uVar3);
  puStack_1a200 = auStack_14fa8;
  uStack_1bb4c = 0x3eb33333;
  uVar3 = FUN_18021f090(auStack_14fa8,&uStack_1bb4c);
  uVar3 = FUN_1802414c0(local_d048,uVar3);
  uStack_1b248 = 0x7ce33cb364b93a85;
  FUN_180241700(local_4c10,&uStack_1b248,uVar3);
  puStack_1a1f8 = auStack_14f68;
  uStack_1bb48 = 0x3ee66666;
  uVar3 = FUN_18021f090(auStack_14f68,&uStack_1bb48);
  uVar3 = FUN_1802414c0(local_d098,uVar3);
  uStack_1b240 = 0x21306c17f9cf4cda;
  FUN_180241700(local_4bb8,&uStack_1b240,uVar3);
  puStack_1a1f0 = auStack_14f28;
  uStack_1bd40 = 0;
  uVar3 = FUN_18021efd0(auStack_14f28,&uStack_1bd40);
  uVar3 = FUN_1802414c0(local_d0e8,uVar3);
  uStack_1b238 = 0x3e2e6be62248a268;
  FUN_180241700(local_4b60,&uStack_1b238,uVar3);
  puStack_1a1e8 = auStack_14ee8;
  uStack_1bd3f = 0;
  uVar3 = FUN_18021efd0(auStack_14ee8,&uStack_1bd3f);
  uVar3 = FUN_1802414c0(local_d138,uVar3);
  uStack_1b230 = 0x214e9812b55edc3;
  FUN_180241700(local_4b08,&uStack_1b230,uVar3);
  puStack_1a1e0 = auStack_14ea8;
  uStack_1bb44 = 0;
  uVar3 = FUN_18021f060(auStack_14ea8,&uStack_1bb44);
  uVar3 = FUN_1802414c0(local_d188,uVar3);
  uStack_1b228 = 0xd7a75c528ea57217;
  FUN_180241700(local_4ab0,&uStack_1b228,uVar3);
  puStack_1a1d8 = auStack_14e68;
  uStack_1bb40 = 0;
  uVar3 = FUN_18021f060(auStack_14e68,&uStack_1bb40);
  uVar3 = FUN_1802414c0(local_d1d8,uVar3);
  uStack_1b220 = 0x279c57cf06166f3d;
  FUN_180241700(local_4a58,&uStack_1b220,uVar3);
  puStack_1a1d0 = auStack_14e28;
  uVar3 = FUN_1800130c0(auStack_19730,&DAT_18033e5ea,0);
  uVar3 = FUN_18021f000(auStack_14e28,uVar3);
  uVar3 = FUN_1802414c0(local_d228,uVar3);
  uStack_1b218 = 0xf50e5e909d50b4e9;
  FUN_180241700(local_4a00,&uStack_1b218,uVar3);
  puStack_1a1c8 = auStack_14de8;
  uStack_1bb3c = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_14de8,&uStack_1bb3c);
  uVar3 = FUN_1802414c0(local_d278,uVar3);
  uStack_1b210 = 0xe07bf745bbabe848;
  FUN_180241700(local_49a8,&uStack_1b210,uVar3);
  puStack_1a1c0 = auStack_14da8;
  uStack_1bb38 = 0;
  uVar3 = FUN_18021f090(auStack_14da8,&uStack_1bb38);
  uVar3 = FUN_1802414c0(local_d2c8,uVar3);
  uStack_1b208 = 0xdaefe600c147795;
  FUN_180241700(local_4950,&uStack_1b208,uVar3);
  puStack_1a1b8 = auStack_14d68;
  uStack_1bd3e = 0;
  uVar3 = FUN_18021efd0(auStack_14d68,&uStack_1bd3e);
  uVar3 = FUN_1802414c0(local_d318,uVar3);
  uStack_1b200 = 0x7aad0bc54d55fc8a;
  FUN_180241700(local_48f8,&uStack_1b200,uVar3);
  puStack_1a1b0 = auStack_14d28;
  uStack_1bd3d = 0;
  uVar3 = FUN_18021efd0(auStack_14d28,&uStack_1bd3d);
  uVar3 = FUN_1802414c0(local_d368,uVar3);
  uStack_1b1f8 = 0xcd347fc1a3829be9;
  FUN_180241700(local_48a0,&uStack_1b1f8,uVar3);
  puStack_1a1a8 = auStack_14ce8;
  uStack_1bd3c = 0;
  uVar3 = FUN_18021efd0(auStack_14ce8,&uStack_1bd3c);
  uVar3 = FUN_1802414c0(local_d3b8,uVar3);
  uStack_1b1f0 = 0xa0267eea20a40d9a;
  FUN_180241700(local_4848,&uStack_1b1f0,uVar3);
  puStack_1a1a0 = auStack_14ca8;
  uStack_1bd3b = 1;
  uVar3 = FUN_18021efd0(auStack_14ca8,&uStack_1bd3b);
  uVar3 = FUN_1802414c0(local_d408,uVar3);
  uStack_1b1e8 = 0xccdef166ec8c517e;
  FUN_180241700(local_47f0,&uStack_1b1e8,uVar3);
  puStack_1a198 = auStack_14c68;
  uStack_1bd3a = 0;
  uVar3 = FUN_18021efd0(auStack_14c68,&uStack_1bd3a);
  uVar3 = FUN_1802414c0(local_d458,uVar3);
  uStack_1b1e0 = 0x34e7dc901c246087;
  FUN_180241700(local_4798,&uStack_1b1e0,uVar3);
  puStack_1a190 = auStack_14c28;
  uStack_1bb34 = 1;
  uVar3 = FUN_18021f060(auStack_14c28,&uStack_1bb34);
  uVar3 = FUN_1802414c0(local_d4a8,uVar3);
  uStack_1b1d8 = 0x2ea97143df721d4c;
  FUN_180241700(local_4740,&uStack_1b1d8,uVar3);
  puStack_1a188 = auStack_14be8;
  uStack_1bb30 = 0x3fc00000;
  uVar3 = FUN_18021f090(auStack_14be8,&uStack_1bb30);
  uVar3 = FUN_1802414c0(local_d4f8,uVar3);
  uStack_1b1d0 = 0x334402fc9b7038cd;
  FUN_180241700(local_46e8,&uStack_1b1d0,uVar3);
  puStack_1a180 = auStack_14ba8;
  uStack_1bb2c = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_14ba8,&uStack_1bb2c);
  uVar3 = FUN_1802414c0(local_d548,uVar3);
  uStack_1b1c8 = 0xaa0b5dfd20a7f83;
  FUN_180241700(local_4690,&uStack_1b1c8,uVar3);
  puStack_1a178 = auStack_14b68;
  uStack_1bb28 = 0x3f47ae14;
  uVar3 = FUN_18021f090(auStack_14b68,&uStack_1bb28);
  uVar3 = FUN_1802414c0(local_d598,uVar3);
  uStack_1b1c0 = 0xaa0a8dfd20a696c;
  FUN_180241700(local_4638,&uStack_1b1c0,uVar3);
  puStack_1a170 = auStack_14b28;
  uStack_1bb24 = 0;
  uVar3 = FUN_18021f090(auStack_14b28,&uStack_1bb24);
  uVar3 = FUN_1802414c0(local_d5e8,uVar3);
  uStack_1b1b8 = 0xaa0a5dfd20a6453;
  FUN_180241700(local_45e0,&uStack_1b1b8,uVar3);
  puStack_1a168 = auStack_14ae8;
  uStack_1bb20 = 1;
  uVar3 = FUN_18021f060(auStack_14ae8,&uStack_1bb20);
  uVar3 = FUN_1802414c0(local_d638,uVar3);
  uStack_1b1b0 = 0x9995061b0b99dc3b;
  FUN_180241700(local_4588,&uStack_1b1b0,uVar3);
  puStack_1a160 = auStack_14aa8;
  uStack_1bd39 = 0;
  uVar3 = FUN_18021efd0(auStack_14aa8,&uStack_1bd39);
  uVar3 = FUN_1802414c0(local_d688,uVar3);
  uStack_1b1a8 = 0x6507776eb2e9032e;
  FUN_180241700(local_4530,&uStack_1b1a8,uVar3);
  puStack_1a158 = auStack_14a68;
  uStack_1bb1c = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_14a68,&uStack_1bb1c);
  uVar3 = FUN_1802414c0(local_d6d8,uVar3);
  uStack_1b1a0 = 0x96ef6034594ad9f2;
  FUN_180241700(local_44d8,&uStack_1b1a0,uVar3);
  puStack_1a150 = auStack_14a28;
  uStack_1bd38 = 0;
  uVar3 = FUN_18021efd0(auStack_14a28,&uStack_1bd38);
  uVar3 = FUN_1802414c0(local_d728,uVar3);
  uStack_1b198 = 0xb934af652e370430;
  FUN_180241700(local_4480,&uStack_1b198,uVar3);
  puStack_1a148 = auStack_149e8;
  uStack_1bb18 = 0x40800000;
  uVar3 = FUN_18021f090(auStack_149e8,&uStack_1bb18);
  uVar3 = FUN_1802414c0(local_d778,uVar3);
  uStack_1b190 = 0xd2ed0559eaf6a240;
  FUN_180241700(local_4428,&uStack_1b190,uVar3);
  puStack_1a140 = auStack_149a8;
  uStack_1bd37 = 0;
  uVar3 = FUN_18021efd0(auStack_149a8,&uStack_1bd37);
  uVar3 = FUN_1802414c0(local_d7c8,uVar3);
  uStack_1b188 = 0x2cdd3384c259d442;
  FUN_180241700(local_43d0,&uStack_1b188,uVar3);
  puStack_1a138 = auStack_14968;
  uStack_1bd36 = 0;
  uVar3 = FUN_18021efd0(auStack_14968,&uStack_1bd36);
  uVar3 = FUN_1802414c0(local_d818,uVar3);
  uStack_1b180 = 0x5c383cfcf7076af3;
  FUN_180241700(local_4378,&uStack_1b180,uVar3);
  puStack_1a130 = auStack_14928;
  uStack_1bd35 = 0;
  uVar3 = FUN_18021efd0(auStack_14928,&uStack_1bd35);
  uVar3 = FUN_1802414c0(local_d868,uVar3);
  uStack_1b178 = 0x8af36191ef71bd97;
  FUN_180241700(local_4320,&uStack_1b178,uVar3);
  puStack_1a128 = auStack_148e8;
  uStack_1bd34 = 0;
  uVar3 = FUN_18021efd0(auStack_148e8,&uStack_1bd34);
  uVar3 = FUN_1802414c0(local_d8b8,uVar3);
  uStack_1b170 = 0xff1f894095ee67b5;
  FUN_180241700(local_42c8,&uStack_1b170,uVar3);
  puStack_1a120 = auStack_148a8;
  uStack_1bb14 = 0;
  uVar3 = FUN_18021f060(auStack_148a8,&uStack_1bb14);
  uVar3 = FUN_1802414c0(local_d908,uVar3);
  uStack_1b168 = 0xc9339fae2fcb199e;
  FUN_180241700(local_4270,&uStack_1b168,uVar3);
  puStack_1a118 = auStack_14868;
  uStack_1bb10 = 0;
  uVar3 = FUN_18021f060(auStack_14868,&uStack_1bb10);
  uVar3 = FUN_1802414c0(local_d958,uVar3);
  uStack_1b160 = 0x217a2c6fd3b34823;
  FUN_180241700(local_4218,&uStack_1b160,uVar3);
  puStack_1a110 = auStack_14828;
  uStack_1bb0c = 0;
  uVar3 = FUN_18021f060(auStack_14828,&uStack_1bb0c);
  uVar3 = FUN_1802414c0(local_d9a8,uVar3);
  uStack_1b158 = 0xdd80ea0cec10ff07;
  FUN_180241700(local_41c0,&uStack_1b158,uVar3);
  puStack_1a108 = auStack_147e8;
  uStack_1bb08 = 0;
  uVar3 = FUN_18021f060(auStack_147e8,&uStack_1bb08);
  uVar3 = FUN_1802414c0(local_d9f8,uVar3);
  uStack_1b150 = 0x65489c45ca370d45;
  FUN_180241700(local_4168,&uStack_1b150,uVar3);
  puStack_1a100 = auStack_147a8;
  uStack_1bb04 = 2;
  uVar3 = FUN_18021f060(auStack_147a8,&uStack_1bb04);
  uVar3 = FUN_1802414c0(local_da48,uVar3);
  uStack_1b148 = 0xa4ac668505cca8d5;
  FUN_180241700(local_4110,&uStack_1b148,uVar3);
  puStack_1a0f8 = auStack_14768;
  uStack_1bd33 = 0;
  uVar3 = FUN_18021efd0(auStack_14768,&uStack_1bd33);
  uVar3 = FUN_1802414c0(local_da98,uVar3);
  uStack_1b140 = 0xf2d6f3345979f232;
  FUN_180241700(local_40b8,&uStack_1b140,uVar3);
  puStack_1a0f0 = auStack_14728;
  uVar3 = FUN_1800130c0(auStack_19750,"models/player/kleiner.mdl",0x19);
  uVar3 = FUN_18021f000(auStack_14728,uVar3);
  uVar3 = FUN_1802414c0(local_dae8,uVar3);
  uStack_1b138 = 0xa8b2235b275142e2;
  FUN_180241700(local_4060,&uStack_1b138,uVar3);
  puStack_1a0e8 = auStack_146e8;
  uStack_1bb00 = 1;
  uVar3 = FUN_18021f060(auStack_146e8,&uStack_1bb00);
  uVar3 = FUN_1802414c0(local_db38,uVar3);
  uStack_1b130 = 0xd552eacbea38e69e;
  FUN_180241700(local_4008,&uStack_1b130,uVar3);
  puStack_1a0e0 = auStack_146a8;
  uStack_1bafc = 0;
  uVar3 = FUN_18021f060(auStack_146a8,&uStack_1bafc);
  uVar3 = FUN_1802414c0(local_db88,uVar3);
  uStack_1b128 = 0xa42b44cb0a75e4bc;
  FUN_180241700(local_3fb0,&uStack_1b128,uVar3);
  puStack_1a0d8 = auStack_14668;
  uStack_1bd32 = 0;
  uVar3 = FUN_18021efd0(auStack_14668,&uStack_1bd32);
  uVar3 = FUN_1802414c0(local_dbd8,uVar3);
  uStack_1b120 = 0xe4f59bc9468cfac2;
  FUN_180241700(local_3f58,&uStack_1b120,uVar3);
  puStack_1a0d0 = auStack_14628;
  uStack_1baf8 = 0;
  uVar3 = FUN_18021f060(auStack_14628,&uStack_1baf8);
  uVar3 = FUN_1802414c0(local_dc28,uVar3);
  uStack_1b118 = 0x7d8b8d6fd2a43404;
  FUN_180241700(local_3f00,&uStack_1b118,uVar3);
  puStack_1a0c8 = auStack_145e8;
  uStack_1bd31 = 0;
  uVar3 = FUN_18021efd0(auStack_145e8,&uStack_1bd31);
  uVar3 = FUN_1802414c0(local_dc78,uVar3);
  uStack_1b110 = 0x38e8f2037574e19f;
  FUN_180241700(local_3ea8,&uStack_1b110,uVar3);
  puStack_1a0c0 = auStack_145a8;
  uStack_1baf4 = 0;
  uVar3 = FUN_18021f060(auStack_145a8,&uStack_1baf4);
  uVar3 = FUN_1802414c0(local_dcc8,uVar3);
  uStack_1b108 = 0xdc9817f331935b39;
  FUN_180241700(local_3e50,&uStack_1b108,uVar3);
  puStack_1a0b8 = auStack_14568;
  uStack_1bd30 = 0;
  uVar3 = FUN_18021efd0(auStack_14568,&uStack_1bd30);
  uVar3 = FUN_1802414c0(local_dd18,uVar3);
  uStack_1b100 = 0x1ab41e6ae1d06d59;
  FUN_180241700(local_3df8,&uStack_1b100,uVar3);
  puStack_1a0b0 = auStack_14528;
  uStack_1bd2f = 0;
  uVar3 = FUN_18021efd0(auStack_14528,&uStack_1bd2f);
  uVar3 = FUN_1802414c0(local_dd68,uVar3);
  uStack_1b0f8 = 0xb900ad038caed4bd;
  FUN_180241700(local_3da0,&uStack_1b0f8,uVar3);
  puStack_1a0a8 = auStack_144e8;
  uStack_1baf0 = 0x3c;
  uVar3 = FUN_18021f060(auStack_144e8,&uStack_1baf0);
  uVar3 = FUN_1802414c0(local_ddb8,uVar3);
  uStack_1b0f0 = 0x3b8975e208102780;
  FUN_180241700(local_3d48,&uStack_1b0f0,uVar3);
  puStack_1a0a0 = auStack_144a8;
  uStack_1bd2e = 1;
  uVar3 = FUN_18021efd0(auStack_144a8,&uStack_1bd2e);
  uVar3 = FUN_1802414c0(local_de08,uVar3);
  uStack_1b0e8 = 0xd5eedd6096f28a0d;
  FUN_180241700(local_3cf0,&uStack_1b0e8,uVar3);
  puStack_1a098 = auStack_14468;
  uStack_1bd2d = 1;
  uVar3 = FUN_18021efd0(auStack_14468,&uStack_1bd2d);
  uVar3 = FUN_1802414c0(local_de58,uVar3);
  uStack_1b0e0 = 0x5ec423757a9ceab;
  FUN_180241700(local_3c98,&uStack_1b0e0,uVar3);
  puStack_1a090 = auStack_14428;
  uStack_1baec = 100;
  uVar3 = FUN_18021f060(auStack_14428,&uStack_1baec);
  uVar3 = FUN_1802414c0(local_dea8,uVar3);
  uStack_1b0d8 = 0x4f6b04c86bf5c594;
  FUN_180241700(local_3c40,&uStack_1b0d8,uVar3);
  puStack_1a088 = auStack_143e8;
  uStack_1bd2c = 0;
  uVar3 = FUN_18021efd0(auStack_143e8,&uStack_1bd2c);
  uVar3 = FUN_1802414c0(local_def8,uVar3);
  uStack_1b0d0 = 0xd1ec5445d87064a8;
  FUN_180241700(local_3be8,&uStack_1b0d0,uVar3);
  puStack_1a080 = auStack_143a8;
  uStack_1bd2b = 1;
  uVar3 = FUN_18021efd0(auStack_143a8,&uStack_1bd2b);
  uVar3 = FUN_1802414c0(local_df48,uVar3);
  uStack_1b0c8 = 0x7a7f52ad97e147b7;
  FUN_180241700(local_3b90,&uStack_1b0c8,uVar3);
  puStack_1a078 = auStack_14368;
  uStack_1bd2a = 1;
  uVar3 = FUN_18021efd0(auStack_14368,&uStack_1bd2a);
  uVar3 = FUN_1802414c0(local_df98,uVar3);
  uStack_1b0c0 = 0x2b08eda621452889;
  FUN_180241700(local_3b38,&uStack_1b0c0,uVar3);
  puStack_1a070 = auStack_14328;
  uStack_1bd29 = 1;
  uVar3 = FUN_18021efd0(auStack_14328,&uStack_1bd29);
  uVar3 = FUN_1802414c0(local_dfe8,uVar3);
  uStack_1b0b8 = 0x59d309e8a2eb12f6;
  FUN_180241700(local_3ae0,&uStack_1b0b8,uVar3);
  puStack_1a068 = auStack_142e8;
  uStack_1bd28 = 0;
  uVar3 = FUN_18021efd0(auStack_142e8,&uStack_1bd28);
  uVar3 = FUN_1802414c0(local_e038,uVar3);
  uStack_1b0b0 = 0x2e9325269e4e4100;
  FUN_180241700(local_3a88,&uStack_1b0b0,uVar3);
  puStack_1a060 = auStack_142a8;
  uStack_1bae8 = 0;
  uVar3 = FUN_18021f090(auStack_142a8,&uStack_1bae8);
  uVar3 = FUN_1802414c0(local_e088,uVar3);
  uStack_1b0a8 = 0xe41cc5816226c1db;
  FUN_180241700(local_3a30,&uStack_1b0a8,uVar3);
  puStack_1a058 = auStack_14268;
  uStack_1bae4 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_14268,&uStack_1bae4);
  uVar3 = FUN_1802414c0(local_e0d8,uVar3);
  uStack_1b0a0 = 0xe41cb8816226abc4;
  FUN_180241700(local_39d8,&uStack_1b0a0,uVar3);
  puStack_1a050 = auStack_14228;
  uStack_1bae0 = 0;
  uVar3 = FUN_18021f090(auStack_14228,&uStack_1bae0);
  uVar3 = FUN_1802414c0(local_e128,uVar3);
  uStack_1b098 = 0xe41cb5816226a6ab;
  FUN_180241700(local_3980,&uStack_1b098,uVar3);
  puStack_1a048 = auStack_141e8;
  uStack_1badc = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_141e8,&uStack_1badc);
  uVar3 = FUN_1802414c0(local_e178,uVar3);
  uStack_1b090 = 0x940197fc4ed098e7;
  FUN_180241700(local_3928,&uStack_1b090,uVar3);
  puStack_1a040 = auStack_141a8;
  uStack_1bad8 = 0;
  uVar3 = FUN_18021f090(auStack_141a8,&uStack_1bad8);
  uVar3 = FUN_1802414c0(local_e1c8,uVar3);
  uStack_1b088 = 0x940182fc4ed07538;
  FUN_180241700(local_38d0,&uStack_1b088,uVar3);
  puStack_1a038 = auStack_14168;
  uStack_1bad4 = 0;
  uVar3 = FUN_18021f090(auStack_14168,&uStack_1bad4);
  uVar3 = FUN_1802414c0(local_e218,uVar3);
  uStack_1b080 = 0x940187fc4ed07db7;
  FUN_180241700(local_3878,&uStack_1b080,uVar3);
  puStack_1a030 = auStack_14128;
  uStack_1bd27 = 0;
  uVar3 = FUN_18021efd0(auStack_14128,&uStack_1bd27);
  uVar3 = FUN_1802414c0(local_e268,uVar3);
  uStack_1b078 = 0xaff6151ce7d2a2a5;
  FUN_180241700(local_3820,&uStack_1b078,uVar3);
  puStack_1a028 = auStack_140e8;
  uStack_1bd26 = 1;
  uVar3 = FUN_18021efd0(auStack_140e8,&uStack_1bd26);
  uVar3 = FUN_1802414c0(local_e2b8,uVar3);
  uStack_1b070 = 0x25ac6bf5fc61a680;
  FUN_180241700(local_37c8,&uStack_1b070,uVar3);
  puStack_1a020 = auStack_140a8;
  uStack_1bd25 = 1;
  uVar3 = FUN_18021efd0(auStack_140a8,&uStack_1bd25);
  uVar3 = FUN_1802414c0(local_e308,uVar3);
  uStack_1b068 = 0x5bca754c19d73cdf;
  FUN_180241700(local_3770,&uStack_1b068,uVar3);
  puStack_1a018 = auStack_14068;
  uStack_1bad0 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_14068,&uStack_1bad0);
  uVar3 = FUN_1802414c0(local_e358,uVar3);
  uStack_1b060 = 0x18fc161e9b31bc79;
  FUN_180241700(local_3718,&uStack_1b060,uVar3);
  puStack_1a010 = auStack_14028;
  uStack_1bacc = 0x3e3851ec;
  uVar3 = FUN_18021f090(auStack_14028,&uStack_1bacc);
  uVar3 = FUN_1802414c0(local_e3a8,uVar3);
  uStack_1b058 = 0x18fc291e9b31dcc2;
  FUN_180241700(local_36c0,&uStack_1b058,uVar3);
  puStack_1a008 = auStack_13fe8;
  uStack_1bac8 = 0x3e3851ec;
  uVar3 = FUN_18021f090(auStack_13fe8,&uStack_1bac8);
  uVar3 = FUN_1802414c0(local_e3f8,uVar3);
  uStack_1b050 = 0x18fc261e9b31d7a9;
  FUN_180241700(local_3668,&uStack_1b050,uVar3);
  puStack_1a000 = auStack_13fa8;
  uStack_1bac4 = 0x3e4ccccd;
  uVar3 = FUN_18021f090(auStack_13fa8,&uStack_1bac4);
  uVar3 = FUN_1802414c0(local_e448,uVar3);
  uStack_1b048 = 0xafd05be4da944c2d;
  FUN_180241700(local_3610,&uStack_1b048,uVar3);
  puStack_19ff8 = auStack_13f68;
  uStack_1bac0 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_13f68,&uStack_1bac0);
  uVar3 = FUN_1802414c0(local_e498,uVar3);
  uStack_1b040 = 0xafd046e4da94287e;
  FUN_180241700(local_35b8,&uStack_1b040,uVar3);
  puStack_19ff0 = auStack_13f28;
  uStack_1babc = 0x3e99999a;
  uVar3 = FUN_18021f090(auStack_13f28,&uStack_1babc);
  uVar3 = FUN_1802414c0(local_e4e8,uVar3);
  uStack_1b038 = 0xafd04be4da9430fd;
  FUN_180241700(local_3560,&uStack_1b038,uVar3);
  puStack_19fe8 = auStack_13ee8;
  uStack_1bab8 = 0;
  uVar3 = FUN_18021f060(auStack_13ee8,&uStack_1bab8);
  uVar3 = FUN_1802414c0(local_e538,uVar3);
  uStack_1b030 = 0x2da1675bdf610d63;
  FUN_180241700(local_3508,&uStack_1b030,uVar3);
  puStack_19fe0 = auStack_13ea8;
  uStack_1bd24 = 1;
  uVar3 = FUN_18021efd0(auStack_13ea8,&uStack_1bd24);
  uVar3 = FUN_1802414c0(local_e588,uVar3);
  uStack_1b028 = 0x44e346faced5d1ce;
  FUN_180241700(local_34b0,&uStack_1b028,uVar3);
  puStack_19fd8 = auStack_13e68;
  uStack_1bd23 = 0;
  uVar3 = FUN_18021efd0(auStack_13e68,&uStack_1bd23);
  uVar3 = FUN_1802414c0(local_e5d8,uVar3);
  uStack_1b020 = 0xa280068474d1d563;
  FUN_180241700(local_3458,&uStack_1b020,uVar3);
  puStack_19fd0 = auStack_13e28;
  uStack_1bd22 = 0;
  uVar3 = FUN_18021efd0(auStack_13e28,&uStack_1bd22);
  uVar3 = FUN_1802414c0(local_e628,uVar3);
  uStack_1b018 = 0x5cded73623217c2a;
  FUN_180241700(local_3400,&uStack_1b018,uVar3);
  puStack_19fc8 = auStack_13de8;
  uStack_1bab4 = 0x40000000;
  uVar3 = FUN_18021f090(auStack_13de8,&uStack_1bab4);
  uVar3 = FUN_1802414c0(local_e678,uVar3);
  uStack_1b010 = 0x928aca364203258f;
  FUN_180241700(local_33a8,&uStack_1b010,uVar3);
  puStack_19fc0 = auStack_13da8;
  uStack_1bab0 = 1;
  uVar3 = FUN_18021f060(auStack_13da8,&uStack_1bab0);
  uVar3 = FUN_1802414c0(local_e6c8,uVar3);
  uStack_1b008 = 0x2c86430344857507;
  FUN_180241700(local_3350,&uStack_1b008,uVar3);
  puStack_19fb8 = auStack_13d68;
  uStack_1baac = 2;
  uVar3 = FUN_18021f060(auStack_13d68,&uStack_1baac);
  uVar3 = FUN_1802414c0(local_e718,uVar3);
  uStack_1b000 = 0x5d20275a62ec75ff;
  FUN_180241700(local_32f8,&uStack_1b000,uVar3);
  puStack_19fb0 = auStack_13d28;
  uStack_1bd21 = 0;
  uVar3 = FUN_18021efd0(auStack_13d28,&uStack_1bd21);
  uVar3 = FUN_1802414c0(local_e768,uVar3);
  uStack_1aff8 = 0x3db4763925009906;
  FUN_180241700(local_32a0,&uStack_1aff8,uVar3);
  puStack_19fa8 = auStack_13ce8;
  uStack_1baa8 = 2;
  uVar3 = FUN_18021f060(auStack_13ce8,&uStack_1baa8);
  uVar3 = FUN_1802414c0(local_e7b8,uVar3);
  uStack_1aff0 = 0x28549c2b3ea27228;
  FUN_180241700(local_3248,&uStack_1aff0,uVar3);
  puStack_19fa0 = auStack_13ca8;
  uStack_1bd20 = 0;
  uVar3 = FUN_18021efd0(auStack_13ca8,&uStack_1bd20);
  uVar3 = FUN_1802414c0(local_e808,uVar3);
  uStack_1afe8 = 0xfd3d160b71592661;
  FUN_180241700(local_31f0,&uStack_1afe8,uVar3);
  puStack_19f98 = auStack_13c68;
  uStack_1baa4 = 0;
  uVar3 = FUN_18021f060(auStack_13c68,&uStack_1baa4);
  uVar3 = FUN_1802414c0(local_e858,uVar3);
  uStack_1afe0 = 0xf4da6ac1d14e886e;
  FUN_180241700(local_3198,&uStack_1afe0,uVar3);
  puStack_19f90 = auStack_13c28;
  uStack_1baa0 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_13c28,&uStack_1baa0);
  uVar3 = FUN_1802414c0(local_e8a8,uVar3);
  uStack_1afd8 = 0xb3fae27070269fb2;
  FUN_180241700(local_3140,&uStack_1afd8,uVar3);
  puStack_19f88 = auStack_13be8;
  uStack_1ba9c = 0x3eb33333;
  uVar3 = FUN_18021f090(auStack_13be8,&uStack_1ba9c);
  uVar3 = FUN_1802414c0(local_e8f8,uVar3);
  uStack_1afd0 = 0xb3faef707026b5c9;
  FUN_180241700(local_30e8,&uStack_1afd0,uVar3);
  puStack_19f80 = auStack_13ba8;
  uStack_1ba98 = 0;
  uVar3 = FUN_18021f090(auStack_13ba8,&uStack_1ba98);
  uVar3 = FUN_1802414c0(local_e948,uVar3);
  uStack_1afc8 = 0xb3faf2707026bae2;
  FUN_180241700(local_3090,&uStack_1afc8,uVar3);
  puStack_19f78 = auStack_13b68;
  uStack_1ba94 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_13b68,&uStack_1ba94);
  uVar3 = FUN_1802414c0(local_e998,uVar3);
  uStack_1afc0 = 0x6b0cba63e7a076a8;
  FUN_180241700(local_3038,&uStack_1afc0,uVar3);
  puStack_19f70 = auStack_13b28;
  uStack_1bd1f = 0;
  uVar3 = FUN_18021efd0(auStack_13b28,&uStack_1bd1f);
  uVar3 = FUN_1802414c0(local_e9e8,uVar3);
  uStack_1afb8 = 0x809c2c8398aa910b;
  FUN_180241700(local_2fe0,&uStack_1afb8,uVar3);
  puStack_19f68 = auStack_13ae8;
  uStack_1ba90 = 0;
  uVar3 = FUN_18021f060(auStack_13ae8,&uStack_1ba90);
  uVar3 = FUN_1802414c0(local_ea38,uVar3);
  uStack_1afb0 = 0xea004a2b62efe75f;
  FUN_180241700(local_2f88,&uStack_1afb0,uVar3);
  puStack_19f60 = auStack_13aa8;
  uStack_1ba8c = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_13aa8,&uStack_1ba8c);
  uVar3 = FUN_1802414c0(local_ea88,uVar3);
  uStack_1afa8 = 0x17668cc7d4d6e10a;
  FUN_180241700(local_2f30,&uStack_1afa8,uVar3);
  puStack_19f58 = auStack_13a68;
  uStack_1ba88 = 0x3ecccccd;
  uVar3 = FUN_18021f090(auStack_13a68,&uStack_1ba88);
  uVar3 = FUN_1802414c0(local_ead8,uVar3);
  uStack_1afa0 = 0x176699c7d4d6f721;
  FUN_180241700(local_2ed8,&uStack_1afa0,uVar3);
  puStack_19f50 = auStack_13a28;
  uStack_1ba84 = 0;
  uVar3 = FUN_18021f090(auStack_13a28,&uStack_1ba84);
  uVar3 = FUN_1802414c0(local_eb28,uVar3);
  uStack_1af98 = 0x17669cc7d4d6fc3a;
  FUN_180241700(local_2e80,&uStack_1af98,uVar3);
  puStack_19f48 = auStack_139e8;
  uStack_1bd1e = 1;
  uVar3 = FUN_18021efd0(auStack_139e8,&uStack_1bd1e);
  uVar3 = FUN_1802414c0(local_eb78,uVar3);
  uStack_1af90 = 0x5635981221fff3b8;
  FUN_180241700(local_2e28,&uStack_1af90,uVar3);
  puStack_19f40 = auStack_139a8;
  uStack_1bd1d = 0;
  uVar3 = FUN_18021efd0(auStack_139a8,&uStack_1bd1d);
  uVar3 = FUN_1802414c0(local_ebc8,uVar3);
  uStack_1af88 = 0xc98eafbf43c0b816;
  FUN_180241700(local_2dd0,&uStack_1af88,uVar3);
  puStack_19f38 = auStack_13968;
  uStack_1ba80 = 0;
  uVar3 = FUN_18021f060(auStack_13968,&uStack_1ba80);
  uVar3 = FUN_1802414c0(local_ec18,uVar3);
  uStack_1af80 = 0x40af71b84aaf17c9;
  FUN_180241700(local_2d78,&uStack_1af80,uVar3);
  puStack_19f30 = auStack_13928;
  uStack_1bd1c = 0;
  uVar3 = FUN_18021efd0(auStack_13928,&uStack_1bd1c);
  uVar3 = FUN_1802414c0(local_ec68,uVar3);
  uStack_1af78 = 0x58109ee75c295503;
  FUN_180241700(local_2d20,&uStack_1af78,uVar3);
  puStack_19f28 = auStack_138e8;
  uStack_1ba7c = 0;
  uVar3 = FUN_18021f060(auStack_138e8,&uStack_1ba7c);
  uVar3 = FUN_1802414c0(local_ecb8,uVar3);
  uStack_1af70 = 0xf500562c270ec396;
  FUN_180241700(local_2cc8,&uStack_1af70,uVar3);
  puStack_19f20 = auStack_138a8;
  uStack_1ba78 = 500;
  uVar3 = FUN_18021f060(auStack_138a8,&uStack_1ba78);
  uVar3 = FUN_1802414c0(local_ed08,uVar3);
  uStack_1af68 = 0x1f97d96e3c2b8091;
  FUN_180241700(local_2c70,&uStack_1af68,uVar3);
  puStack_19f18 = auStack_13868;
  uStack_1bd1b = 1;
  uVar3 = FUN_18021efd0(auStack_13868,&uStack_1bd1b);
  uVar3 = FUN_1802414c0(local_ed58,uVar3);
  uStack_1af60 = 0x2deb6b899a38d4e8;
  FUN_180241700(local_2c18,&uStack_1af60,uVar3);
  puStack_19f10 = auStack_13828;
  uStack_1ba74 = 0;
  uVar3 = FUN_18021f060(auStack_13828,&uStack_1ba74);
  uVar3 = FUN_1802414c0(local_eda8,uVar3);
  uStack_1af58 = 0x207b6d725748ed5f;
  FUN_180241700(local_2bc0,&uStack_1af58,uVar3);
  puStack_19f08 = auStack_137e8;
  uStack_1ba70 = 0x2d;
  uVar3 = FUN_18021f060(auStack_137e8,&uStack_1ba70);
  uVar3 = FUN_1802414c0(local_edf8,uVar3);
  uStack_1af50 = 0xb84e8776c92be6b0;
  FUN_180241700(local_2b68,&uStack_1af50,uVar3);
  puStack_19f00 = auStack_137a8;
  uStack_1ba6c = 8;
  uVar3 = FUN_18021f060(auStack_137a8,&uStack_1ba6c);
  uVar3 = FUN_1802414c0(local_ee48,uVar3);
  uStack_1af48 = 0x9d365af164de8da;
  FUN_180241700(local_2b10,&uStack_1af48,uVar3);
  puStack_19ef8 = auStack_13768;
  uStack_1bd1a = 1;
  uVar3 = FUN_18021efd0(auStack_13768,&uStack_1bd1a);
  uVar3 = FUN_1802414c0(local_ee98,uVar3);
  uStack_1af40 = 0x7b225fe0c7fe4acf;
  FUN_180241700(local_2ab8,&uStack_1af40,uVar3);
  puStack_19ef0 = auStack_13728;
  uStack_1ba68 = 0xdc;
  uVar3 = FUN_18021f060(auStack_13728,&uStack_1ba68);
  uVar3 = FUN_1802414c0(local_eee8,uVar3);
  uStack_1af38 = 0xf8331734669552d7;
  FUN_180241700(local_2a60,&uStack_1af38,uVar3);
  puStack_19ee8 = auStack_136e8;
  uStack_1ba64 = 0x22;
  uVar3 = FUN_18021f060(auStack_136e8,&uStack_1ba64);
  uVar3 = FUN_1802414c0(local_ef38,uVar3);
  uStack_1af30 = 0x33b8c501bda95a72;
  FUN_180241700(local_2a08,&uStack_1af30,uVar3);
  puStack_19ee0 = auStack_136a8;
  uStack_1ba60 = 8;
  uVar3 = FUN_18021f060(auStack_136a8,&uStack_1ba60);
  uVar3 = FUN_1802414c0(local_ef88,uVar3);
  uStack_1af28 = 0x3a33f7e39db3c0de;
  FUN_180241700(local_29b0,&uStack_1af28,uVar3);
  puStack_19ed8 = auStack_13668;
  uStack_1bd19 = 1;
  uVar3 = FUN_18021efd0(auStack_13668,&uStack_1bd19);
  uVar3 = FUN_1802414c0(local_efd8,uVar3);
  uStack_1af20 = 0x7b11738af22a6072;
  FUN_180241700(local_2958,&uStack_1af20,uVar3);
  puStack_19ed0 = auStack_13628;
  uStack_1bd18 = 1;
  uVar3 = FUN_18021efd0(auStack_13628,&uStack_1bd18);
  uVar3 = FUN_1802414c0(local_f028,uVar3);
  uStack_1af18 = 0x8f17b5552bd5200a;
  FUN_180241700(local_2900,&uStack_1af18,uVar3);
  puStack_19ec8 = auStack_135e8;
  uStack_1bd17 = 0;
  uVar3 = FUN_18021efd0(auStack_135e8,&uStack_1bd17);
  uVar3 = FUN_1802414c0(local_f078,uVar3);
  uStack_1af10 = 0x787d072230f789c;
  FUN_180241700(local_28a8,&uStack_1af10,uVar3);
  puStack_19ec0 = auStack_135a8;
  uStack_1bd16 = 1;
  uVar3 = FUN_18021efd0(auStack_135a8,&uStack_1bd16);
  uVar3 = FUN_1802414c0(local_f0c8,uVar3);
  uStack_1af08 = 0xdc0f62887483cca2;
  FUN_180241700(local_2850,&uStack_1af08,uVar3);
  puStack_19eb8 = auStack_13568;
  uStack_1bd15 = 1;
  uVar3 = FUN_18021efd0(auStack_13568,&uStack_1bd15);
  uVar3 = FUN_1802414c0(local_f118,uVar3);
  uStack_1af00 = 0x2c88bca8be8357f2;
  FUN_180241700(local_27f8,&uStack_1af00,uVar3);
  puStack_19eb0 = auStack_13528;
  uStack_1ba5c = 0;
  uVar3 = FUN_18021f060(auStack_13528,&uStack_1ba5c);
  uVar3 = FUN_1802414c0(local_f168,uVar3);
  uStack_1aef8 = 0xaef3b7ea150d7bf;
  FUN_180241700(local_27a0,&uStack_1aef8,uVar3);
  puStack_19ea8 = auStack_134e8;
  uStack_1bd14 = 0;
  uVar3 = FUN_18021efd0(auStack_134e8,&uStack_1bd14);
  uVar3 = FUN_1802414c0(local_f1b8,uVar3);
  uStack_1aef0 = 0xad8998a7cc2812c;
  FUN_180241700(local_2748,&uStack_1aef0,uVar3);
  puStack_19ea0 = auStack_134a8;
  uStack_1bd13 = 0;
  uVar3 = FUN_18021efd0(auStack_134a8,&uStack_1bd13);
  uVar3 = FUN_1802414c0(local_f208,uVar3);
  uStack_1aee8 = 0x5c61b11ceab8fecb;
  FUN_180241700(local_26f0,&uStack_1aee8,uVar3);
  puStack_19e98 = auStack_13468;
  uStack_1ba58 = 0;
  uVar3 = FUN_18021f060(auStack_13468,&uStack_1ba58);
  uVar3 = FUN_1802414c0(local_f258,uVar3);
  uStack_1aee0 = 0x15b58d95d09e07fe;
  FUN_180241700(local_2698,&uStack_1aee0,uVar3);
  puStack_19e90 = auStack_13428;
  uStack_1bd12 = 0;
  uVar3 = FUN_18021efd0(auStack_13428,&uStack_1bd12);
  uVar3 = FUN_1802414c0(local_f2a8,uVar3);
  uStack_1aed8 = 0x42dfcfdb85d00c63;
  FUN_180241700(local_2640,&uStack_1aed8,uVar3);
  puStack_19e88 = auStack_133e8;
  uStack_1ba54 = 0;
  uVar3 = FUN_18021f060(auStack_133e8,&uStack_1ba54);
  uVar3 = FUN_1802414c0(local_f2f8,uVar3);
  uStack_1aed0 = 0x14aaa39e12056f36;
  FUN_180241700(local_25e8,&uStack_1aed0,uVar3);
  puStack_19e80 = auStack_133a8;
  uStack_1ba50 = 0x1f;
  uVar3 = FUN_18021f060(auStack_133a8,&uStack_1ba50);
  uVar3 = FUN_1802414c0(local_f348,uVar3);
  uStack_1aec8 = 0x57929d7a67798faf;
  FUN_180241700(local_2590,&uStack_1aec8,uVar3);
  puStack_19e78 = auStack_13368;
  uStack_1ba4c = 0;
  uVar3 = FUN_18021f060(auStack_13368,&uStack_1ba4c);
  uVar3 = FUN_1802414c0(local_f398,uVar3);
  uStack_1aec0 = 0xe6e21531f66dbcbd;
  FUN_180241700(local_2538,&uStack_1aec0,uVar3);
  puStack_19e70 = auStack_13328;
  uStack_1ba48 = 0x15e;
  uVar3 = FUN_18021f060(auStack_13328,&uStack_1ba48);
  uVar3 = FUN_1802414c0(local_f3e8,uVar3);
  uStack_1aeb8 = 0x73634b3d3ddd8dca;
  FUN_180241700(local_24e0,&uStack_1aeb8,uVar3);
  puStack_19e68 = auStack_124e8;
  uStack_1bd11 = 1;
  uVar3 = FUN_18021efd0(auStack_124e8,&uStack_1bd11);
  uVar3 = FUN_1802414c0(local_f438,uVar3);
  uStack_1aeb0 = 0x1f136f05274bb28d;
  FUN_180241700(local_2488,&uStack_1aeb0,uVar3);
  puStack_19e60 = auStack_132a8;
  uStack_1bd10 = 0;
  uVar3 = FUN_18021efd0(auStack_132a8,&uStack_1bd10);
  uVar3 = FUN_1802414c0(local_f488,uVar3);
  uStack_1aea8 = 0x7d7f27bdaace2ddd;
  FUN_180241700(local_2430,&uStack_1aea8,uVar3);
  puStack_19e58 = auStack_13268;
  uStack_1bd0f = 1;
  uVar3 = FUN_18021efd0(auStack_13268,&uStack_1bd0f);
  uVar3 = FUN_1802414c0(local_f4d8,uVar3);
  uStack_1aea0 = 0x1477d415bd0ac6ae;
  FUN_180241700(local_23d8,&uStack_1aea0,uVar3);
  puStack_19e50 = auStack_13228;
  uStack_1ba44 = 0;
  uVar3 = FUN_18021f060(auStack_13228,&uStack_1ba44);
  uVar3 = FUN_1802414c0(local_f528,uVar3);
  uStack_1ae98 = 0x1fba2029bab6b64c;
  FUN_180241700(local_2380,&uStack_1ae98,uVar3);
  puStack_19e48 = auStack_131e8;
  uVar3 = FUN_1800130c0(auStack_19770,&DAT_18033e5ea,0);
  uVar3 = FUN_18021f000(auStack_131e8,uVar3);
  uVar3 = FUN_1802414c0(local_f578,uVar3);
  uStack_1ae90 = 0xcf92fdbe588d8af4;
  FUN_180241700(local_2328,&uStack_1ae90,uVar3);
  puStack_19e40 = auStack_131a8;
  uVar3 = FUN_1800130c0(auStack_19790,&DAT_18033e5ea,0);
  uVar3 = FUN_18021f000(auStack_131a8,uVar3);
  uVar3 = FUN_1802414c0(local_f5c8,uVar3);
  uStack_1ae88 = 0xdf2349e24f8aaf7d;
  FUN_180241700(local_22d0,&uStack_1ae88,uVar3);
  puStack_19e38 = auStack_13168;
  uStack_1bd0e = 1;
  uVar3 = FUN_18021efd0(auStack_13168,&uStack_1bd0e);
  uVar3 = FUN_1802414c0(local_f618,uVar3);
  uStack_1ae80 = 0xcf94b2d417ed594d;
  FUN_180241700(local_2278,&uStack_1ae80,uVar3);
  puStack_19e30 = auStack_13128;
  uStack_1bd0d = 0;
  uVar3 = FUN_18021efd0(auStack_13128,&uStack_1bd0d);
  uVar3 = FUN_1802414c0(local_f668,uVar3);
  uStack_1ae78 = 0x557dfd6e6b783a85;
  FUN_180241700(local_2220,&uStack_1ae78,uVar3);
  puStack_19e28 = auStack_130e8;
  uStack_1bd0c = 0;
  uVar3 = FUN_18021efd0(auStack_130e8,&uStack_1bd0c);
  uVar3 = FUN_1802414c0(local_f6b8,uVar3);
  uStack_1ae70 = 0xb0049e7f1fd6162b;
  FUN_180241700(local_21c8,&uStack_1ae70,uVar3);
  puStack_19e20 = auStack_130a8;
  uStack_1bd0b = 0;
  uVar3 = FUN_18021efd0(auStack_130a8,&uStack_1bd0b);
  uVar3 = FUN_1802414c0(local_f708,uVar3);
  uStack_1ae68 = 0x2ef88e3203b2a28a;
  FUN_180241700(local_2170,&uStack_1ae68,uVar3);
  puStack_19e18 = auStack_13068;
  uStack_1bd0a = 0;
  uVar3 = FUN_18021efd0(auStack_13068,&uStack_1bd0a);
  uVar3 = FUN_1802414c0(local_f758,uVar3);
  uStack_1ae60 = 0xbe1e1b93f8c4635e;
  FUN_180241700(local_2118,&uStack_1ae60,uVar3);
  puStack_19e10 = auStack_13028;
  uStack_1ba40 = 0x10;
  uVar3 = FUN_18021f060(auStack_13028,&uStack_1ba40);
  uVar3 = FUN_1802414c0(local_f7a8,uVar3);
  uStack_1ae58 = 0x6340b47eaee05b97;
  FUN_180241700(local_20c0,&uStack_1ae58,uVar3);
  puStack_19e08 = auStack_12fe8;
  uStack_1bd09 = 0;
  uVar3 = FUN_18021efd0(auStack_12fe8,&uStack_1bd09);
  uVar3 = FUN_1802414c0(local_f7f8,uVar3);
  uStack_1ae50 = 0x5a1e41b8f170d0e9;
  FUN_180241700(local_2068,&uStack_1ae50,uVar3);
  puStack_19e00 = auStack_12fa8;
  uStack_1bd08 = 0;
  uVar3 = FUN_18021efd0(auStack_12fa8,&uStack_1bd08);
  uVar3 = FUN_1802414c0(local_f848,uVar3);
  uStack_1ae48 = 0xc3321d3257edd720;
  FUN_180241700(local_2010,&uStack_1ae48,uVar3);
  puStack_19df8 = auStack_12f68;
  uStack_1bd07 = 0;
  uVar3 = FUN_18021efd0(auStack_12f68,&uStack_1bd07);
  uVar3 = FUN_1802414c0(local_f898,uVar3);
  uStack_1ae40 = 0x3764b9b3f3b38cc4;
  FUN_180241700(local_1fb8,&uStack_1ae40,uVar3);
  puStack_19df0 = auStack_12f28;
  uStack_1bd06 = 0;
  uVar3 = FUN_18021efd0(auStack_12f28,&uStack_1bd06);
  uVar3 = FUN_1802414c0(local_f8e8,uVar3);
  uStack_1ae38 = 0xda92c95b279fc3b3;
  FUN_180241700(local_1f60,&uStack_1ae38,uVar3);
  puStack_19de8 = auStack_12ee8;
  uStack_1bd05 = 0;
  uVar3 = FUN_18021efd0(auStack_12ee8,&uStack_1bd05);
  uVar3 = FUN_1802414c0(local_f938,uVar3);
  uStack_1ae30 = 0x74171a7c655e59db;
  FUN_180241700(local_1f08,&uStack_1ae30,uVar3);
  puStack_19de0 = auStack_12ea8;
  uStack_1ba3c = 0xed8;
  uVar3 = FUN_18021f060(auStack_12ea8,&uStack_1ba3c);
  uVar3 = FUN_1802414c0(local_f988,uVar3);
  uStack_1ae28 = 0xc10eb5bd2b66f3db;
  FUN_180241700(local_1eb0,&uStack_1ae28,uVar3);
  puStack_19dd8 = auStack_12e68;
  uStack_1ba38 = 0x78;
  uVar3 = FUN_18021f060(auStack_12e68,&uStack_1ba38);
  uVar3 = FUN_1802414c0(local_f9d8,uVar3);
  uStack_1ae20 = 0x4ec664d7f073e110;
  FUN_180241700(local_1e58,&uStack_1ae20,uVar3);
  puStack_19dd0 = auStack_12e28;
  uStack_1ba34 = 100;
  uVar3 = FUN_18021f060(auStack_12e28,&uStack_1ba34);
  uVar3 = FUN_1802414c0(local_fa28,uVar3);
  uStack_1ae18 = 0xe58f159c1b8363b6;
  FUN_180241700(local_1e00,&uStack_1ae18,uVar3);
  puStack_19dc8 = auStack_12de8;
  uStack_1ba30 = 0;
  uVar3 = FUN_18021f060(auStack_12de8,&uStack_1ba30);
  uVar3 = FUN_1802414c0(local_fa78,uVar3);
  uStack_1ae10 = 0xcba67faee1368d86;
  FUN_180241700(local_1da8,&uStack_1ae10,uVar3);
  puStack_19dc0 = auStack_12da8;
  uStack_1bd04 = 0;
  uVar3 = FUN_18021efd0(auStack_12da8,&uStack_1bd04);
  uVar3 = FUN_1802414c0(local_fac8,uVar3);
  uStack_1ae08 = 0x46af284dbd58f0c;
  FUN_180241700(local_1d50,&uStack_1ae08,uVar3);
  puStack_19db8 = auStack_12d68;
  uStack_1ba2c = 0;
  uVar3 = FUN_18021f060(auStack_12d68,&uStack_1ba2c);
  uVar3 = FUN_1802414c0(local_fb18,uVar3);
  uStack_1ae00 = 0x64c4d3b04486d14d;
  FUN_180241700(local_1cf8,&uStack_1ae00,uVar3);
  puStack_19db0 = auStack_12d28;
  uStack_1ba28 = 5;
  uVar3 = FUN_18021f060(auStack_12d28,&uStack_1ba28);
  uVar3 = FUN_1802414c0(local_fb68,uVar3);
  uStack_1adf8 = 0xb3bc1c7136473c92;
  FUN_180241700(local_1ca0,&uStack_1adf8,uVar3);
  puStack_19da8 = auStack_12ce8;
  uStack_1ba24 = 0;
  uVar3 = FUN_18021f060(auStack_12ce8,&uStack_1ba24);
  uVar3 = FUN_1802414c0(local_fbb8,uVar3);
  uStack_1adf0 = 0x2514009f2bcc1630;
  FUN_180241700(local_1c48,&uStack_1adf0,uVar3);
  puStack_19da0 = auStack_12ca8;
  uStack_1ba20 = 0;
  uVar3 = FUN_18021f060(auStack_12ca8,&uStack_1ba20);
  uVar3 = FUN_1802414c0(local_fc08,uVar3);
  uStack_1ade8 = 0x8161971dee9d0cf8;
  FUN_180241700(local_1bf0,&uStack_1ade8,uVar3);
  puStack_19d98 = auStack_12c68;
  uStack_1bd03 = 1;
  uVar3 = FUN_18021efd0(auStack_12c68,&uStack_1bd03);
  uVar3 = FUN_1802414c0(local_fc58,uVar3);
  uStack_1ade0 = 0x76d1c005a2617483;
  FUN_180241700(local_1b98,&uStack_1ade0,uVar3);
  puStack_19d90 = auStack_12c28;
  uStack_1bd02 = 0;
  uVar3 = FUN_18021efd0(auStack_12c28,&uStack_1bd02);
  uVar3 = FUN_1802414c0(local_fca8,uVar3);
  uStack_1add8 = 0xe7781529f617a7b6;
  FUN_180241700(local_1b40,&uStack_1add8,uVar3);
  puStack_19d88 = auStack_12be8;
  uStack_1bd01 = 0;
  uVar3 = FUN_18021efd0(auStack_12be8,&uStack_1bd01);
  uVar3 = FUN_1802414c0(local_fcf8,uVar3);
  uStack_1add0 = 0x574fa339fade2366;
  FUN_180241700(local_1ae8,&uStack_1add0,uVar3);
  puStack_19d80 = auStack_12ba8;
  uStack_1ba1c = 0;
  uVar3 = FUN_18021f060(auStack_12ba8,&uStack_1ba1c);
  uVar3 = FUN_1802414c0(local_fd48,uVar3);
  uStack_1adc8 = 0xcef5d8b14b3154d9;
  FUN_180241700(local_1a90,&uStack_1adc8,uVar3);
  puStack_19d78 = auStack_12b68;
  uStack_1ba18 = 0xb4;
  uVar3 = FUN_18021f060(auStack_12b68,&uStack_1ba18);
  uVar3 = FUN_1802414c0(local_fd98,uVar3);
  uStack_1adc0 = 0x324e861f12873f9a;
  FUN_180241700(local_1a38,&uStack_1adc0,uVar3);
  puStack_19d70 = auStack_12b28;
  uStack_1bd00 = 1;
  uVar3 = FUN_18021efd0(auStack_12b28,&uStack_1bd00);
  uVar3 = FUN_1802414c0(local_fde8,uVar3);
  uStack_1adb8 = 0x6c96c33ad11a014c;
  FUN_180241700(local_19e0,&uStack_1adb8,uVar3);
  puStack_19d68 = auStack_12ae8;
  uStack_1bcff = 1;
  uVar3 = FUN_18021efd0(auStack_12ae8,&uStack_1bcff);
  uVar3 = FUN_1802414c0(local_fe38,uVar3);
  uStack_1adb0 = 0x404ea8e2391a46c5;
  FUN_180241700(local_1988,&uStack_1adb0,uVar3);
  puStack_19d60 = auStack_12aa8;
  uStack_1bcfe = 1;
  uVar3 = FUN_18021efd0(auStack_12aa8,&uStack_1bcfe);
  uVar3 = FUN_1802414c0(local_fe88,uVar3);
  uStack_1ada8 = 0x228a0511fbcdbb9;
  FUN_180241700(local_1930,&uStack_1ada8,uVar3);
  puStack_19d58 = auStack_12a68;
  uStack_1bcfd = 0;
  uVar3 = FUN_18021efd0(auStack_12a68,&uStack_1bcfd);
  uVar3 = FUN_1802414c0(local_fed8,uVar3);
  uStack_1ada0 = 0x43dc26eb12dd2e34;
  FUN_180241700(local_18d8,&uStack_1ada0,uVar3);
  puStack_19d50 = auStack_12a28;
  uStack_1ba14 = 0;
  uVar3 = FUN_18021f090(auStack_12a28,&uStack_1ba14);
  uVar3 = FUN_1802414c0(local_ff28,uVar3);
  uStack_1ad98 = 0x3de1d4a1ddc4912e;
  FUN_180241700(local_1880,&uStack_1ad98,uVar3);
  puStack_19d48 = auStack_129e8;
  uStack_1bcfc = 0;
  uVar3 = FUN_18021efd0(auStack_129e8,&uStack_1bcfc);
  uVar3 = FUN_1802414c0(local_ff78,uVar3);
  uStack_1ad90 = 0x24da2018957c545b;
  FUN_180241700(local_1828,&uStack_1ad90,uVar3);
  puStack_19d40 = auStack_129a8;
  uStack_1ba10 = 0x3f19999a;
  uVar3 = FUN_18021f090(auStack_129a8,&uStack_1ba10);
  uVar3 = FUN_1802414c0(local_ffc8,uVar3);
  uStack_1ad88 = 0xe5a471a826b01f9;
  FUN_180241700(local_17d0,&uStack_1ad88,uVar3);
  puStack_19d38 = auStack_12968;
  uStack_1ba0c = 0x3f19999a;
  uVar3 = FUN_18021f090(auStack_12968,&uStack_1ba0c);
  uVar3 = FUN_1802414c0(auStack_10018,uVar3);
  uStack_1ad80 = 0xe5a5a1a826b2242;
  FUN_180241700(local_1778,&uStack_1ad80,uVar3);
  puStack_19d30 = auStack_12928;
  uStack_1ba08 = 0x3f2e147b;
  uVar3 = FUN_18021f090(auStack_12928,&uStack_1ba08);
  uVar3 = FUN_1802414c0(auStack_10068,uVar3);
  uStack_1ad78 = 0xe5a571a826b1d29;
  FUN_180241700(local_1720,&uStack_1ad78,uVar3);
  puStack_19d28 = auStack_128e8;
  uStack_1ba04 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_128e8,&uStack_1ba04);
  uVar3 = FUN_1802414c0(auStack_100b8,uVar3);
  uStack_1ad70 = 0xe5a541a826b1810;
  FUN_180241700(local_16c8,&uStack_1ad70,uVar3);
  puStack_19d20 = auStack_128a8;
  uStack_1bcfb = 0;
  uVar3 = FUN_18021efd0(auStack_128a8,&uStack_1bcfb);
  uVar3 = FUN_1802414c0(auStack_10108,uVar3);
  uStack_1ad68 = 0x5391b64679e936ba;
  FUN_180241700(local_1670,&uStack_1ad68,uVar3);
  puStack_19d18 = auStack_12868;
  uStack_1ba00 = 0;
  uVar3 = FUN_18021f060(auStack_12868,&uStack_1ba00);
  uVar3 = FUN_1802414c0(auStack_10158,uVar3);
  uStack_1ad60 = 0x11da5b42ad2c912c;
  FUN_180241700(local_1618,&uStack_1ad60,uVar3);
  puStack_19d10 = auStack_12828;
  uStack_1b9fc = 0;
  uVar3 = FUN_18021f060(auStack_12828,&uStack_1b9fc);
  uVar3 = FUN_1802414c0(auStack_101a8,uVar3);
  uStack_1ad58 = 0x42e98a6fcf3a4937;
  FUN_180241700(local_15c0,&uStack_1ad58,uVar3);
  puStack_19d08 = auStack_127e8;
  uStack_1bcfa = 0;
  uVar3 = FUN_18021efd0(auStack_127e8,&uStack_1bcfa);
  uVar3 = FUN_1802414c0(auStack_101f8,uVar3);
  uStack_1ad50 = 0xb384791d0b14dec1;
  FUN_180241700(local_1568,&uStack_1ad50,uVar3);
  puStack_19d00 = auStack_127a8;
  uStack_1bcf9 = 0;
  uVar3 = FUN_18021efd0(auStack_127a8,&uStack_1bcf9);
  uVar3 = FUN_1802414c0(auStack_10248,uVar3);
  uStack_1ad48 = 0x377571a4549d5240;
  FUN_180241700(local_1510,&uStack_1ad48,uVar3);
  puStack_19cf8 = auStack_12768;
  uStack_1bcf8 = 1;
  uVar3 = FUN_18021efd0(auStack_12768,&uStack_1bcf8);
  uVar3 = FUN_1802414c0(auStack_10298,uVar3);
  uStack_1ad40 = 0x9fd9050fb35e0f88;
  FUN_180241700(local_14b8,&uStack_1ad40,uVar3);
  puStack_19cf0 = auStack_12728;
  uStack_1bcf7 = 0;
  uVar3 = FUN_18021efd0(auStack_12728,&uStack_1bcf7);
  uVar3 = FUN_1802414c0(auStack_102e8,uVar3);
  uStack_1ad38 = 0x161b55506f557a6d;
  FUN_180241700(local_1460,&uStack_1ad38,uVar3);
  puStack_19ce8 = auStack_126e8;
  uStack_1b9f8 = 0;
  uVar3 = FUN_18021f060(auStack_126e8,&uStack_1b9f8);
  uVar3 = FUN_1802414c0(auStack_10338,uVar3);
  uStack_1ad30 = 0xdb9ca35f44d9bb88;
  FUN_180241700(local_1408,&uStack_1ad30,uVar3);
  puStack_19ce0 = auStack_126a8;
  uStack_1b9f4 = 0xe;
  uVar3 = FUN_18021f060(auStack_126a8,&uStack_1b9f4);
  uVar3 = FUN_1802414c0(auStack_10388,uVar3);
  uStack_1ad28 = 0x35dd584952165cb0;
  FUN_180241700(local_13b0,&uStack_1ad28,uVar3);
  puStack_19cd8 = auStack_12668;
  uStack_1bcf6 = 0;
  uVar3 = FUN_18021efd0(auStack_12668,&uStack_1bcf6);
  uVar3 = FUN_1802414c0(auStack_103d8,uVar3);
  uStack_1ad20 = 0xbf7c50ae7aa0dd3e;
  FUN_180241700(local_1358,&uStack_1ad20,uVar3);
  puStack_19cd0 = auStack_12628;
  uStack_1bcf5 = 0;
  uVar3 = FUN_18021efd0(auStack_12628,&uStack_1bcf5);
  uVar3 = FUN_1802414c0(auStack_10428,uVar3);
  uStack_1ad18 = 0xa447f642f59d8736;
  FUN_180241700(local_1300,&uStack_1ad18,uVar3);
  puStack_19cc8 = auStack_125e8;
  uStack_1bcf4 = 1;
  uVar3 = FUN_18021efd0(auStack_125e8,&uStack_1bcf4);
  uVar3 = FUN_1802414c0(auStack_10478,uVar3);
  uStack_1ad10 = 0xfe939fed9e625efe;
  FUN_180241700(local_12a8,&uStack_1ad10,uVar3);
  puStack_19cc0 = auStack_125a8;
  uStack_1bcf3 = 0;
  uVar3 = FUN_18021efd0(auStack_125a8,&uStack_1bcf3);
  uVar3 = FUN_1802414c0(auStack_104c8,uVar3);
  uStack_1ad08 = 0x2cad3795fc8b129f;
  FUN_180241700(local_1250,&uStack_1ad08,uVar3);
  puStack_19cb8 = auStack_12568;
  uStack_1b9f0 = 0;
  uVar3 = FUN_18021f060(auStack_12568,&uStack_1b9f0);
  uVar3 = FUN_1802414c0(auStack_10518,uVar3);
  uStack_1ad00 = 0x647450219ebf53aa;
  FUN_180241700(local_11f8,&uStack_1ad00,uVar3);
  puStack_19cb0 = auStack_12528;
  uStack_1b9ec = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_12528,&uStack_1b9ec);
  uVar3 = FUN_1802414c0(auStack_10568,uVar3);
  uStack_1acf8 = 0x6682ac5b6cd814e3;
  FUN_180241700(local_11a0,&uStack_1acf8,uVar3);
  puStack_19ca8 = auStack_11408;
  uStack_1bcf2 = 0;
  uVar3 = FUN_18021efd0(auStack_11408,&uStack_1bcf2);
  uVar3 = FUN_1802414c0(auStack_105b8,uVar3);
  uStack_1acf0 = 0xb0295df9ff8697be;
  FUN_180241700(local_1148,&uStack_1acf0,uVar3);
  puStack_19ca0 = auStack_124a8;
  uStack_1b9e8 = 0;
  uVar3 = FUN_18021f060(auStack_124a8,&uStack_1b9e8);
  uVar3 = FUN_1802414c0(auStack_10608,uVar3);
  uStack_1ace8 = 0xd81ed85b8c49331;
  FUN_180241700(local_10f0,&uStack_1ace8,uVar3);
  puStack_19c98 = auStack_12468;
  uStack_1b9e4 = 4;
  uVar3 = FUN_18021f060(auStack_12468,&uStack_1b9e4);
  uVar3 = FUN_1802414c0(auStack_10658,uVar3);
  uStack_1ace0 = 0xffac8367807810dc;
  FUN_180241700(local_1098,&uStack_1ace0,uVar3);
  puStack_19c90 = auStack_12428;
  uStack_1b9e0 = 0x40000000;
  uVar3 = FUN_18021f090(auStack_12428,&uStack_1b9e0);
  uVar3 = FUN_1802414c0(auStack_106a8,uVar3);
  uStack_1acd8 = 0x61dd282f4fc8d8f8;
  FUN_180241700(local_1040,&uStack_1acd8,uVar3);
  puStack_19c88 = auStack_123e8;
  uStack_1b9dc = 1;
  uVar3 = FUN_18021f060(auStack_123e8,&uStack_1b9dc);
  uVar3 = FUN_1802414c0(auStack_106f8,uVar3);
  uStack_1acd0 = 0xaa2fec72fb859f6b;
  FUN_180241700(local_fe8,&uStack_1acd0,uVar3);
  puStack_19c80 = auStack_123a8;
  uStack_1b9d8 = 0x3f0ccccd;
  uVar3 = FUN_18021f090(auStack_123a8,&uStack_1b9d8);
  uVar3 = FUN_1802414c0(auStack_10748,uVar3);
  uStack_1acc8 = 0x2b9f64e127f850a9;
  FUN_180241700(local_f90,&uStack_1acc8,uVar3);
  puStack_19c78 = auStack_12368;
  uStack_1bcf1 = 0;
  uVar3 = FUN_18021efd0(auStack_12368,&uStack_1bcf1);
  uVar3 = FUN_1802414c0(auStack_10798,uVar3);
  uStack_1acc0 = 0x3cfd94a417011121;
  FUN_180241700(local_f38,&uStack_1acc0,uVar3);
  puStack_19c70 = auStack_12328;
  uStack_1b9d4 = 0;
  uVar3 = FUN_18021f060(auStack_12328,&uStack_1b9d4);
  uVar3 = FUN_1802414c0(auStack_107e8,uVar3);
  uStack_1acb8 = 0x1f5f08cfb5ace54;
  FUN_180241700(local_ee0,&uStack_1acb8,uVar3);
  puStack_19c68 = auStack_122e8;
  uStack_1b9d0 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_122e8,&uStack_1b9d0);
  uVar3 = FUN_1802414c0(auStack_10838,uVar3);
  uStack_1acb0 = 0x6e630b2ce2bdb225;
  FUN_180241700(local_e88,&uStack_1acb0,uVar3);
  puStack_19c60 = auStack_122a8;
  uStack_1b9cc = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_122a8,&uStack_1b9cc);
  uVar3 = FUN_1802414c0(auStack_10888,uVar3);
  uStack_1aca8 = 0x6e63162ce2bdc4d6;
  FUN_180241700(local_e30,&uStack_1aca8,uVar3);
  puStack_19c58 = auStack_12268;
  uStack_1b9c8 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_12268,&uStack_1b9c8);
  uVar3 = FUN_1802414c0(auStack_108d8,uVar3);
  uStack_1aca0 = 0x6e631b2ce2bdcd55;
  FUN_180241700(local_dd8,&uStack_1aca0,uVar3);
  puStack_19c50 = auStack_12228;
  uStack_1b9c4 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_12228,&uStack_1b9c4);
  uVar3 = FUN_1802414c0(auStack_10928,uVar3);
  uStack_1ac98 = 0xb407de79ef79c9ba;
  FUN_180241700(local_d80,&uStack_1ac98,uVar3);
  puStack_19c48 = auStack_121e8;
  uStack_1bcf0 = 0;
  uVar3 = FUN_18021efd0(auStack_121e8,&uStack_1bcf0);
  uVar3 = FUN_1802414c0(auStack_10978,uVar3);
  uStack_1ac90 = 0x4f0efc17f02b64be;
  FUN_180241700(local_d28,&uStack_1ac90,uVar3);
  puStack_19c40 = auStack_121a8;
  uStack_1b9c0 = 0x41200000;
  uVar3 = FUN_18021f090(auStack_121a8,&uStack_1b9c0);
  uVar3 = FUN_1802414c0(auStack_109c8,uVar3);
  uStack_1ac88 = 0xaeca5b24c521e60;
  FUN_180241700(local_cd0,&uStack_1ac88,uVar3);
  puStack_19c38 = auStack_12168;
  uStack_1b9bc = 0;
  uVar3 = FUN_18021f060(auStack_12168,&uStack_1b9bc);
  uVar3 = FUN_1802414c0(auStack_10a18,uVar3);
  uStack_1ac80 = 0x8911f3778b8c2d42;
  FUN_180241700(local_c78,&uStack_1ac80,uVar3);
  puStack_19c30 = auStack_12128;
  uStack_1b9b8 = 0;
  uVar3 = FUN_18021f060(auStack_12128,&uStack_1b9b8);
  uVar3 = FUN_1802414c0(auStack_10a68,uVar3);
  uStack_1ac78 = 0x4ebcf38ca2af7c6e;
  FUN_180241700(local_c20,&uStack_1ac78,uVar3);
  puStack_19c28 = auStack_120e8;
  uStack_1bcef = 0;
  uVar3 = FUN_18021efd0(auStack_120e8,&uStack_1bcef);
  uVar3 = FUN_1802414c0(auStack_10ab8,uVar3);
  uStack_1ac70 = 0x33ebf49592e8d668;
  FUN_180241700(local_bc8,&uStack_1ac70,uVar3);
  puStack_19c20 = auStack_120a8;
  uStack_1b9b4 = 0;
  uVar3 = FUN_18021f060(auStack_120a8,&uStack_1b9b4);
  uVar3 = FUN_1802414c0(auStack_10b08,uVar3);
  uStack_1ac68 = 0x2910e3a0aaac7743;
  FUN_180241700(local_b70,&uStack_1ac68,uVar3);
  puStack_19c18 = auStack_12068;
  uStack_1b9b0 = 0x3eb33333;
  uVar3 = FUN_18021f090(auStack_12068,&uStack_1b9b0);
  uVar3 = FUN_1802414c0(auStack_10b58,uVar3);
  uStack_1ac60 = 0xbbd46f0aa9aa58e5;
  FUN_180241700(local_b18,&uStack_1ac60,uVar3);
  puStack_19c10 = auStack_12028;
  uStack_1b9ac = 0x3ee66666;
  uVar3 = FUN_18021f090(auStack_12028,&uStack_1b9ac);
  uVar3 = FUN_1802414c0(auStack_10ba8,uVar3);
  uStack_1ac58 = 0xbbd47a0aa9aa6b96;
  FUN_180241700(local_ac0,&uStack_1ac58,uVar3);
  puStack_19c08 = auStack_11fe8;
  uStack_1b9a8 = 0x3f59999a;
  uVar3 = FUN_18021f090(auStack_11fe8,&uStack_1b9a8);
  uVar3 = FUN_1802414c0(auStack_10bf8,uVar3);
  uStack_1ac50 = 0xbbd47f0aa9aa7415;
  FUN_180241700(local_a68,&uStack_1ac50,uVar3);
  puStack_19c00 = auStack_11fa8;
  uStack_1bcee = 0;
  uVar3 = FUN_18021efd0(auStack_11fa8,&uStack_1bcee);
  uVar3 = FUN_1802414c0(auStack_10c48,uVar3);
  uStack_1ac48 = 0xb2eb02e304a12441;
  FUN_180241700(local_a10,&uStack_1ac48,uVar3);
  puStack_19bf8 = auStack_11f68;
  uStack_1bced = 0;
  uVar3 = FUN_18021efd0(auStack_11f68,&uStack_1bced);
  uVar3 = FUN_1802414c0(auStack_10c98,uVar3);
  uStack_1ac40 = 0x625d105d5fd15611;
  FUN_180241700(local_9b8,&uStack_1ac40,uVar3);
  puStack_19bf0 = auStack_11f28;
  uStack_1b9a4 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_11f28,&uStack_1b9a4);
  uVar3 = FUN_1802414c0(auStack_10ce8,uVar3);
  uStack_1ac38 = 0xd272ac8da4aab768;
  FUN_180241700(local_960,&uStack_1ac38,uVar3);
  puStack_19be8 = auStack_11ee8;
  uStack_1b9a0 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_11ee8,&uStack_1b9a0);
  uVar3 = FUN_1802414c0(auStack_10d38,uVar3);
  uStack_1ac30 = 0xd272a18da4aaa4b7;
  FUN_180241700(local_908,&uStack_1ac30,uVar3);
  puStack_19be0 = auStack_11ea8;
  uStack_1b99c = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_11ea8,&uStack_1b99c);
  uVar3 = FUN_1802414c0(auStack_10d88,uVar3);
  uStack_1ac28 = 0xd2729c8da4aa9c38;
  FUN_180241700(local_8b0,&uStack_1ac28,uVar3);
  puStack_19bd8 = auStack_11e68;
  uStack_1b998 = 0x3fc00000;
  uVar3 = FUN_18021f090(auStack_11e68,&uStack_1b998);
  uVar3 = FUN_1802414c0(auStack_10dd8,uVar3);
  uStack_1ac20 = 0x54682040994c2754;
  FUN_180241700(local_858,&uStack_1ac20,uVar3);
  puStack_19bd0 = auStack_11e28;
  uStack_1b994 = 1;
  uVar3 = FUN_18021f060(auStack_11e28,&uStack_1b994);
  uVar3 = FUN_1802414c0(auStack_10e28,uVar3);
  uStack_1ac18 = 0xf5d2d5e513b25a03;
  FUN_180241700(local_800,&uStack_1ac18,uVar3);
  puStack_19bc8 = auStack_11de8;
  uStack_1bcec = 0;
  uVar3 = FUN_18021efd0(auStack_11de8,&uStack_1bcec);
  uVar3 = FUN_1802414c0(auStack_10e78,uVar3);
  uStack_1ac10 = 0x39a166e326dd1eac;
  FUN_180241700(local_7a8,&uStack_1ac10,uVar3);
  puStack_19bc0 = auStack_11da8;
  uStack_1b990 = 0x3f19999a;
  uVar3 = FUN_18021f090(auStack_11da8,&uStack_1b990);
  uVar3 = FUN_1802414c0(auStack_10ec8,uVar3);
  uStack_1ac08 = 0x9e08b79189c0e961;
  FUN_180241700(local_750,&uStack_1ac08,uVar3);
  puStack_19bb8 = auStack_11d68;
  uStack_1b98c = 0x3f59999a;
  uVar3 = FUN_18021f090(auStack_11d68,&uStack_1b98c);
  uVar3 = FUN_1802414c0(auStack_10f18,uVar3);
  uStack_1ac00 = 0x9e08aa9189c0d34a;
  FUN_180241700(local_6f8,&uStack_1ac00,uVar3);
  puStack_19bb0 = auStack_11d28;
  uStack_1b988 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_11d28,&uStack_1b988);
  uVar3 = FUN_1802414c0(auStack_10f68,uVar3);
  uStack_1abf8 = 0x9e08a79189c0ce31;
  FUN_180241700(local_6a0,&uStack_1abf8,uVar3);
  puStack_19ba8 = auStack_11ce8;
  uStack_1b984 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_11ce8,&uStack_1b984);
  uVar3 = FUN_1802414c0(auStack_10fb8,uVar3);
  uStack_1abf0 = 0xff0dfb3785b0a4d9;
  FUN_180241700(local_648,&uStack_1abf0,uVar3);
  puStack_19ba0 = auStack_11ca8;
  uStack_1b980 = 0;
  uVar3 = FUN_18021f060(auStack_11ca8,&uStack_1b980);
  uVar3 = FUN_1802414c0(auStack_11008,uVar3);
  uStack_1abe8 = 0x9c2c141ec1380adb;
  FUN_180241700(local_5f0,&uStack_1abe8,uVar3);
  puStack_19b98 = auStack_11c68;
  uStack_1b97c = 0;
  uVar3 = FUN_18021f060(auStack_11c68,&uStack_1b97c);
  uVar3 = FUN_1802414c0(auStack_11058,uVar3);
  uStack_1abe0 = 0x25b6fbdbfceb85c6;
  FUN_180241700(local_598,&uStack_1abe0,uVar3);
  puStack_19b90 = auStack_11c28;
  uStack_1b978 = 0;
  uVar3 = FUN_18021f060(auStack_11c28,&uStack_1b978);
  uVar3 = FUN_1802414c0(auStack_110a8,uVar3);
  uStack_1abd8 = 0xc3cc876af74b4db6;
  FUN_180241700(local_540,&uStack_1abd8,uVar3);
  puStack_19b88 = auStack_11be8;
  uStack_1bceb = 0;
  uVar3 = FUN_18021efd0(auStack_11be8,&uStack_1bceb);
  uVar3 = FUN_1802414c0(auStack_110f8,uVar3);
  uStack_1abd0 = 0x6b1f1e9713c5a183;
  FUN_180241700(local_4e8,&uStack_1abd0,uVar3);
  puStack_19b80 = auStack_11ba8;
  uStack_1b974 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_11ba8,&uStack_1b974);
  uVar3 = FUN_1802414c0(auStack_11148,uVar3);
  uStack_1abc8 = 0xa15b7e45ace4b212;
  FUN_180241700(local_490,&uStack_1abc8,uVar3);
  puStack_19b78 = auStack_11b68;
  uStack_1b970 = 0x3e99999a;
  uVar3 = FUN_18021f090(auStack_11b68,&uStack_1b970);
  uVar3 = FUN_1802414c0(auStack_11198,uVar3);
  uStack_1abc0 = 0xa15b8b45ace4c829;
  FUN_180241700(local_438,&uStack_1abc0,uVar3);
  puStack_19b70 = auStack_11b28;
  uStack_1b96c = 0x3e99999a;
  uVar3 = FUN_18021f090(auStack_11b28,&uStack_1b96c);
  uVar3 = FUN_1802414c0(auStack_111e8,uVar3);
  uStack_1abb8 = 0xa15b8e45ace4cd42;
  FUN_180241700(local_3e0,&uStack_1abb8,uVar3);
  puStack_19b68 = auStack_11ae8;
  uStack_1b968 = 0x41500000;
  uVar3 = FUN_18021f090(auStack_11ae8,&uStack_1b968);
  uVar3 = FUN_1802414c0(auStack_11238,uVar3);
  uStack_1abb0 = 0x5dc2df42372b2b0d;
  FUN_180241700(local_388,&uStack_1abb0,uVar3);
  puStack_19b60 = auStack_11aa8;
  uStack_1bcea = 0;
  uVar3 = FUN_18021efd0(auStack_11aa8,&uStack_1bcea);
  uVar3 = FUN_1802414c0(auStack_11288,uVar3);
  uStack_1aba8 = 0x908f1a603f411b5c;
  FUN_180241700(local_330,&uStack_1aba8,uVar3);
  puStack_19b58 = auStack_11a68;
  uStack_1b964 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_11a68,&uStack_1b964);
  uVar3 = FUN_1802414c0(auStack_112d8,uVar3);
  uStack_1aba0 = 0xfccc7d3fa335b622;
  FUN_180241700(local_2d8,&uStack_1aba0,uVar3);
  puStack_19b50 = auStack_11a28;
  uStack_1b960 = 0x3e4ccccd;
  uVar3 = FUN_18021f090(auStack_11a28,&uStack_1b960);
  uVar3 = FUN_1802414c0(auStack_11328,uVar3);
  uStack_1ab98 = 0xfccc6a3fa33595d9;
  FUN_180241700(local_280,&uStack_1ab98,uVar3);
  puStack_19b48 = auStack_119e8;
  uStack_1b95c = 0x3e4ccccd;
  uVar3 = FUN_18021f090(auStack_119e8,&uStack_1b95c);
  uVar3 = FUN_1802414c0(auStack_11378,uVar3);
  uStack_1ab90 = 0xfccc6d3fa3359af2;
  FUN_180241700(local_228,&uStack_1ab90,uVar3);
  puStack_19b40 = auStack_119a8;
  uStack_1b958 = 0x3f800000;
  uVar3 = FUN_18021f090(auStack_119a8,&uStack_1b958);
  uVar3 = FUN_1802414c0(auStack_113c8,uVar3);
  uStack_1ab88 = 0xfccc6c3fa335993f;
  FUN_180241700(local_1d0,&uStack_1ab88,uVar3);
  puStack_19b38 = auStack_11968;
  auStack_1b954[0] = 0;
  uVar3 = FUN_18021f060(auStack_11968,auStack_1b954);
  uVar3 = FUN_1802414c0(local_8638,uVar3);
  uStack_1ab80 = 0xc0a7d35683114a67;
  FUN_180241700(local_178,&uStack_1ab80,uVar3);
  puStack_19b30 = auStack_11928;
  uStack_1bce9 = 1;
  uVar3 = FUN_18021efd0(auStack_11928,&uStack_1bce9);
  uVar3 = FUN_1802414c0(local_8688,uVar3);
  uStack_1ab78 = 0x8a386bd0bf0679d2;
  FUN_180241700(local_120,&uStack_1ab78,uVar3);
  puStack_19b28 = auStack_118e8;
  uStack_1bce8 = 1;
  uVar3 = FUN_18021efd0(auStack_118e8,&uStack_1bce8);
  uVar3 = FUN_1802414c0(local_86d8,uVar3);
  uStack_1ab70 = 0x532b2e31ad1a6312;
  FUN_180241700(local_c8,&uStack_1ab70,uVar3);
  puStack_1b938 = auStack_118a8;
  auStack_1bce7[0] = 0;
  uVar3 = FUN_18021efd0(auStack_118a8,auStack_1bce7);
  uVar3 = FUN_1802414c0(local_8728,uVar3);
  uStack_1ab68 = 0x1153f407eb06a5de;
  FUN_180241700(local_70,&uStack_1ab68,uVar3);
  puStack_1b938 = local_6528;
  puStack_1b930 = &local_18;
  uVar3 = FUN_1802417d0(auStack_19a60,&puStack_1b938);
  uVar3 = FUN_180241460(local_8778,uVar3);
  uStack_1ab60 = 0x93fd561a96ab0c67;
  FUN_180241700(auStack_11468,&uStack_1ab60,uVar3);
  puStack_1b938 = &uStack_11728;
  puStack_1b930 = (undefined8 *)auStack_11410;
  uVar3 = FUN_1802417d0(auStack_19a50,&puStack_1b938);
  puStack_19b18 = auStack_11868;
  uVar4 = FUN_1800130c0(auStack_197b0,"Default",7);
  uVar4 = FUN_18021f000(auStack_11868,uVar4);
  FUN_180241340(&DAT_1803fadf0,uVar4,uVar3);
  FUN_18020e450(auStack_197b0);
  _eh_vector_destructor_iterator_(&uStack_11728,0x58,9,FUN_1802416a0);
  FUN_180241640(local_8778);
  _eh_vector_destructor_iterator_(local_6528,0x58,0x126,FUN_1802416a0);
  FUN_180241640(local_8728);
  FUN_180241640(local_86d8);
  FUN_180241640(local_8688);
  FUN_180241640(local_8638);
  FUN_180241640(auStack_113c8);
  FUN_180241640(auStack_11378);
  FUN_180241640(auStack_11328);
  FUN_180241640(auStack_112d8);
  FUN_180241640(auStack_11288);
  FUN_180241640(auStack_11238);
  FUN_180241640(auStack_111e8);
  FUN_180241640(auStack_11198);
  FUN_180241640(auStack_11148);
  FUN_180241640(auStack_110f8);
  FUN_180241640(auStack_110a8);
  FUN_180241640(auStack_11058);
  FUN_180241640(auStack_11008);
  FUN_180241640(auStack_10fb8);
  FUN_180241640(auStack_10f68);
  FUN_180241640(auStack_10f18);
  FUN_180241640(auStack_10ec8);
  FUN_180241640(auStack_10e78);
  FUN_180241640(auStack_10e28);
  FUN_180241640(auStack_10dd8);
  FUN_180241640(auStack_10d88);
  FUN_180241640(auStack_10d38);
  FUN_180241640(auStack_10ce8);
  FUN_180241640(auStack_10c98);
  FUN_180241640(auStack_10c48);
  FUN_180241640(auStack_10bf8);
  FUN_180241640(auStack_10ba8);
  FUN_180241640(auStack_10b58);
  FUN_180241640(auStack_10b08);
  FUN_180241640(auStack_10ab8);
  FUN_180241640(auStack_10a68);
  FUN_180241640(auStack_10a18);
  FUN_180241640(auStack_109c8);
  FUN_180241640(auStack_10978);
  FUN_180241640(auStack_10928);
  FUN_180241640(auStack_108d8);
  FUN_180241640(auStack_10888);
  FUN_180241640(auStack_10838);
  FUN_180241640(auStack_107e8);
  FUN_180241640(auStack_10798);
  FUN_180241640(auStack_10748);
  FUN_180241640(auStack_106f8);
  FUN_180241640(auStack_106a8);
  FUN_180241640(auStack_10658);
  FUN_180241640(auStack_10608);
  FUN_180241640(auStack_105b8);
  FUN_180241640(auStack_10568);
  FUN_180241640(auStack_10518);
  FUN_180241640(auStack_104c8);
  FUN_180241640(auStack_10478);
  FUN_180241640(auStack_10428);
  FUN_180241640(auStack_103d8);
  FUN_180241640(auStack_10388);
  FUN_180241640(auStack_10338);
  FUN_180241640(auStack_102e8);
  FUN_180241640(auStack_10298);
  FUN_180241640(auStack_10248);
  FUN_180241640(auStack_101f8);
  FUN_180241640(auStack_101a8);
  FUN_180241640(auStack_10158);
  FUN_180241640(auStack_10108);
  FUN_180241640(auStack_100b8);
  FUN_180241640(auStack_10068);
  FUN_180241640(auStack_10018);
  FUN_180241640(local_ffc8);
  FUN_180241640(local_ff78);
  FUN_180241640(local_ff28);
  FUN_180241640(local_fed8);
  FUN_180241640(local_fe88);
  FUN_180241640(local_fe38);
  FUN_180241640(local_fde8);
  FUN_180241640(local_fd98);
  FUN_180241640(local_fd48);
  FUN_180241640(local_fcf8);
  FUN_180241640(local_fca8);
  FUN_180241640(local_fc58);
  FUN_180241640(local_fc08);
  FUN_180241640(local_fbb8);
  FUN_180241640(local_fb68);
  FUN_180241640(local_fb18);
  FUN_180241640(local_fac8);
  FUN_180241640(local_fa78);
  FUN_180241640(local_fa28);
  FUN_180241640(local_f9d8);
  FUN_180241640(local_f988);
  FUN_180241640(local_f938);
  FUN_180241640(local_f8e8);
  FUN_180241640(local_f898);
  FUN_180241640(local_f848);
  FUN_180241640(local_f7f8);
  FUN_180241640(local_f7a8);
  FUN_180241640(local_f758);
  FUN_180241640(local_f708);
  FUN_180241640(local_f6b8);
  FUN_180241640(local_f668);
  FUN_180241640(local_f618);
  FUN_180241640(local_f5c8);
  FUN_18020e450(auStack_19790);
  FUN_180241640(local_f578);
  FUN_18020e450(auStack_19770);
  FUN_180241640(local_f528);
  FUN_180241640(local_f4d8);
  FUN_180241640(local_f488);
  FUN_180241640(local_f438);
  FUN_180241640(local_f3e8);
  FUN_180241640(local_f398);
  FUN_180241640(local_f348);
  FUN_180241640(local_f2f8);
  FUN_180241640(local_f2a8);
  FUN_180241640(local_f258);
  FUN_180241640(local_f208);
  FUN_180241640(local_f1b8);
  FUN_180241640(local_f168);
  FUN_180241640(local_f118);
  FUN_180241640(local_f0c8);
  FUN_180241640(local_f078);
  FUN_180241640(local_f028);
  FUN_180241640(local_efd8);
  FUN_180241640(local_ef88);
  FUN_180241640(local_ef38);
  FUN_180241640(local_eee8);
  FUN_180241640(local_ee98);
  FUN_180241640(local_ee48);
  FUN_180241640(local_edf8);
  FUN_180241640(local_eda8);
  FUN_180241640(local_ed58);
  FUN_180241640(local_ed08);
  FUN_180241640(local_ecb8);
  FUN_180241640(local_ec68);
  FUN_180241640(local_ec18);
  FUN_180241640(local_ebc8);
  FUN_180241640(local_eb78);
  FUN_180241640(local_eb28);
  FUN_180241640(local_ead8);
  FUN_180241640(local_ea88);
  FUN_180241640(local_ea38);
  FUN_180241640(local_e9e8);
  FUN_180241640(local_e998);
  FUN_180241640(local_e948);
  FUN_180241640(local_e8f8);
  FUN_180241640(local_e8a8);
  FUN_180241640(local_e858);
  FUN_180241640(local_e808);
  FUN_180241640(local_e7b8);
  FUN_180241640(local_e768);
  FUN_180241640(local_e718);
  FUN_180241640(local_e6c8);
  FUN_180241640(local_e678);
  FUN_180241640(local_e628);
  FUN_180241640(local_e5d8);
  FUN_180241640(local_e588);
  FUN_180241640(local_e538);
  FUN_180241640(local_e4e8);
  FUN_180241640(local_e498);
  FUN_180241640(local_e448);
  FUN_180241640(local_e3f8);
  FUN_180241640(local_e3a8);
  FUN_180241640(local_e358);
  FUN_180241640(local_e308);
  FUN_180241640(local_e2b8);
  FUN_180241640(local_e268);
  FUN_180241640(local_e218);
  FUN_180241640(local_e1c8);
  FUN_180241640(local_e178);
  FUN_180241640(local_e128);
  FUN_180241640(local_e0d8);
  FUN_180241640(local_e088);
  FUN_180241640(local_e038);
  FUN_180241640(local_dfe8);
  FUN_180241640(local_df98);
  FUN_180241640(local_df48);
  FUN_180241640(local_def8);
  FUN_180241640(local_dea8);
  FUN_180241640(local_de58);
  FUN_180241640(local_de08);
  FUN_180241640(local_ddb8);
  FUN_180241640(local_dd68);
  FUN_180241640(local_dd18);
  FUN_180241640(local_dcc8);
  FUN_180241640(local_dc78);
  FUN_180241640(local_dc28);
  FUN_180241640(local_dbd8);
  FUN_180241640(local_db88);
  FUN_180241640(local_db38);
  FUN_180241640(local_dae8);
  FUN_18020e450(auStack_19750);
  FUN_180241640(local_da98);
  FUN_180241640(local_da48);
  FUN_180241640(local_d9f8);
  FUN_180241640(local_d9a8);
  FUN_180241640(local_d958);
  FUN_180241640(local_d908);
  FUN_180241640(local_d8b8);
  FUN_180241640(local_d868);
  FUN_180241640(local_d818);
  FUN_180241640(local_d7c8);
  FUN_180241640(local_d778);
  FUN_180241640(local_d728);
  FUN_180241640(local_d6d8);
  FUN_180241640(local_d688);
  FUN_180241640(local_d638);
  FUN_180241640(local_d5e8);
  FUN_180241640(local_d598);
  FUN_180241640(local_d548);
  FUN_180241640(local_d4f8);
  FUN_180241640(local_d4a8);
  FUN_180241640(local_d458);
  FUN_180241640(local_d408);
  FUN_180241640(local_d3b8);
  FUN_180241640(local_d368);
  FUN_180241640(local_d318);
  FUN_180241640(local_d2c8);
  FUN_180241640(local_d278);
  FUN_180241640(local_d228);
  FUN_18020e450(auStack_19730);
  FUN_180241640(local_d1d8);
  FUN_180241640(local_d188);
  FUN_180241640(local_d138);
  FUN_180241640(local_d0e8);
  FUN_180241640(local_d098);
  FUN_180241640(local_d048);
  FUN_180241640(local_cff8);
  FUN_180241640(local_cfa8);
  FUN_180241640(local_cf58);
  FUN_180241640(local_cf08);
  FUN_180241640(local_ceb8);
  FUN_180241640(local_ce68);
  FUN_180241640(local_ce18);
  FUN_180241640(local_cdc8);
  FUN_180241640(local_cd78);
  FUN_180241640(local_cd28);
  FUN_180241640(local_ccd8);
  FUN_180241640(local_cc88);
  FUN_18020e450(auStack_19710);
  FUN_180241640(local_cc38);
  FUN_18020e450(auStack_196f0);
  FUN_180241640(local_cbe8);
  FUN_180241640(local_cb98);
  FUN_180241640(local_cb48);
  FUN_180241640(local_caf8);
  FUN_180241640(local_caa8);
  FUN_180241640(local_ca58);
  FUN_180241640(local_ca08);
  FUN_180241640(local_c9b8);
  FUN_180241640(local_c968);
  FUN_180241640(local_c918);
  FUN_180241640(local_c8c8);
  FUN_180241640(local_c878);
  FUN_180241640(local_c828);
  FUN_180241640(local_c7d8);
  FUN_180241640(local_c788);
  FUN_180241640(local_c738);
  FUN_180241640(local_c6e8);
  FUN_180241640(local_c698);
  FUN_180241640(local_c648);
  FUN_180241640(local_c5f8);
  FUN_180241640(local_c5a8);
  FUN_180241640(local_c558);
  FUN_180241640(local_c508);
  FUN_180241640(local_c4b8);
  FUN_180241640(local_c468);
  FUN_180241640(local_c418);
  FUN_180241640(local_c3c8);
  FUN_180241640(local_c378);
  FUN_180241640(local_c328);
  FUN_180241640(local_c2d8);
  FUN_180241640(local_c288);
  FUN_180241640(local_c238);
  FUN_180241640(local_c1e8);
  FUN_180241640(local_c198);
  FUN_180241640(local_c148);
  FUN_180241640(local_c0f8);
  FUN_180241640(local_c0a8);
  FUN_180241640(local_c058);
  FUN_180241640(local_c008);
  FUN_180241640(local_bfb8);
  FUN_180241640(local_bf68);
  FUN_180241640(local_bf18);
  FUN_180241640(local_bec8);
  FUN_180241640(local_be78);
  FUN_180241640(local_be28);
  FUN_180241640(local_bdd8);
  FUN_180241640(local_bd88);
  FUN_180241640(local_bd38);
  FUN_180241640(local_bce8);
  FUN_180241640(local_bc98);
  FUN_18020e450(auStack_196d0);
  FUN_180241640(local_bc48);
  FUN_180241640(local_bbf8);
  FUN_180241640(local_bba8);
  FUN_180241640(local_bb58);
  FUN_180241640(local_bb08);
  FUN_180241640(local_bab8);
  FUN_180241640(local_ba68);
  FUN_180241640(local_ba18);
  FUN_180241640(local_b9c8);
  FUN_180241640(local_b978);
  FUN_180241640(local_b928);
  _eh_vector_destructor_iterator_(local_7708,0x58,0x34,FUN_1802416a0);
  FUN_180241640(local_b8d8);
  FUN_180241640(local_b888);
  FUN_180241640(local_b838);
  FUN_180241640(local_b7e8);
  FUN_180241640(local_b798);
  FUN_180241640(local_b748);
  FUN_180241640(local_b6f8);
  FUN_180241640(local_b6a8);
  FUN_180241640(local_b658);
  FUN_180241640(local_b608);
  FUN_180241640(local_b5b8);
  FUN_180241640(local_b568);
  FUN_180241640(local_b518);
  FUN_180241640(local_b4c8);
  FUN_180241640(local_b478);
  FUN_180241640(local_b428);
  FUN_180241640(local_b3d8);
  FUN_180241640(local_b388);
  FUN_180241640(local_b338);
  FUN_180241640(local_b2e8);
  FUN_180241640(local_b298);
  FUN_180241640(local_b248);
  FUN_180241640(local_b1f8);
  FUN_180241640(local_b1a8);
  FUN_180241640(local_b158);
  FUN_180241640(local_b108);
  FUN_180241640(local_b0b8);
  FUN_180241640(local_b068);
  FUN_180241640(local_b018);
  FUN_180241640(local_afc8);
  FUN_180241640(local_af78);
  FUN_180241640(local_af28);
  FUN_180241640(local_aed8);
  FUN_180241640(local_ae88);
  FUN_180241640(local_ae38);
  FUN_180241640(local_ade8);
  FUN_180241640(local_ad98);
  FUN_180241640(local_ad48);
  FUN_180241640(local_acf8);
  FUN_180241640(local_aca8);
  FUN_180241640(local_ac58);
  FUN_180241640(local_ac08);
  FUN_180241640(local_abb8);
  FUN_180241640(local_ab68);
  FUN_180241640(local_ab18);
  FUN_180241640(local_aac8);
  FUN_180241640(local_aa78);
  FUN_180241640(local_aa28);
  FUN_180241640(local_a9d8);
  FUN_180241640(local_a988);
  FUN_180241640(local_a938);
  FUN_180241640(local_a8e8);
  FUN_180241640(local_a898);
  _eh_vector_destructor_iterator_(local_81b8,0x58,6,FUN_1802416a0);
  FUN_180241640(local_a848);
  FUN_180241640(local_a7f8);
  FUN_180241640(local_a7a8);
  FUN_180241640(local_a758);
  FUN_180241640(local_a708);
  FUN_180241640(local_a6b8);
  FUN_180241640(local_a668);
  _eh_vector_destructor_iterator_(local_7fa8,0x58,10,FUN_1802416a0);
  FUN_180241640(local_a618);
  FUN_180241640(local_a5c8);
  FUN_180241640(local_a578);
  FUN_180241640(local_a528);
  FUN_180241640(local_a4d8);
  FUN_180241640(local_a488);
  FUN_180241640(local_a438);
  FUN_180241640(local_a3e8);
  FUN_180241640(local_a398);
  FUN_180241640(local_a348);
  FUN_180241640(local_a2f8);
  _eh_vector_destructor_iterator_(local_7c38,0x58,0xf,FUN_1802416a0);
  FUN_180241640(local_a2a8);
  FUN_180241640(local_a258);
  FUN_180241640(local_a208);
  FUN_180241640(local_a1b8);
  FUN_180241640(local_a168);
  FUN_180241640(local_a118);
  FUN_180241640(local_a0c8);
  FUN_180241640(local_a078);
  FUN_180241640(local_a028);
  FUN_180241640(local_9fd8);
  FUN_180241640(local_9f88);
  FUN_180241640(local_9f38);
  FUN_180241640(local_9ee8);
  FUN_180241640(local_9e98);
  FUN_180241640(local_9e48);
  FUN_180241640(local_9df8);
  _eh_vector_destructor_iterator_(local_8378,0x58,5,FUN_1802416a0);
  FUN_180241640(local_9da8);
  FUN_180241640(local_9d58);
  FUN_180241640(local_9d08);
  FUN_180241640(local_9cb8);
  FUN_180241640(local_9c68);
  FUN_180241640(local_9c18);
  _eh_vector_destructor_iterator_(local_84d8,0x58,4,FUN_1802416a0);
  FUN_180241640(local_9bc8);
  FUN_180241640(local_9b78);
  FUN_180241640(local_9b28);
  FUN_180241640(local_9ad8);
  FUN_180241640(local_9a88);
  _eh_vector_destructor_iterator_(&uStack_195e8,0x58,0x35,FUN_1802416a0);
  FUN_180241640(local_9a38);
  FUN_180241640(local_99e8);
  FUN_180241640(local_9998);
  FUN_180241640(local_9948);
  FUN_180241640(local_98f8);
  FUN_180241640(local_98a8);
  FUN_180241640(local_9858);
  FUN_180241640(local_9808);
  FUN_180241640(local_97b8);
  FUN_180241640(local_9768);
  FUN_180241640(local_9718);
  FUN_180241640(local_96c8);
  FUN_180241640(local_9678);
  FUN_180241640(local_9628);
  FUN_180241640(local_95d8);
  FUN_180241640(local_9588);
  FUN_180241640(local_9538);
  FUN_180241640(local_94e8);
  FUN_180241640(local_9498);
  FUN_180241640(local_9448);
  FUN_180241640(local_93f8);
  FUN_180241640(local_93a8);
  FUN_180241640(local_9358);
  FUN_180241640(local_9308);
  FUN_180241640(local_92b8);
  FUN_180241640(local_9268);
  FUN_180241640(local_9218);
  FUN_180241640(local_91c8);
  FUN_180241640(local_9178);
  FUN_180241640(local_9128);
  FUN_180241640(local_90d8);
  FUN_180241640(local_9088);
  FUN_180241640(local_9038);
  FUN_180241640(local_8fe8);
  FUN_180241640(local_8f98);
  FUN_180241640(local_8f48);
  _eh_vector_destructor_iterator_(auStack_196a8,0x58,1,FUN_1802416a0);
  FUN_180241640(local_8ef8);
  _eh_vector_destructor_iterator_(auStack_19648,0x58,1,FUN_1802416a0);
  FUN_180241640(local_8ea8);
  _eh_vector_destructor_iterator_(local_85e8,0x58,3,FUN_1802416a0);
  FUN_180241640(local_8e58);
  FUN_180241640(local_8e08);
  FUN_180241640(local_8db8);
  FUN_180241640(local_8d68);
  FUN_180241640(local_8d18);
  FUN_180241640(local_8cc8);
  FUN_180241640(local_8c78);
  FUN_180241640(local_8c28);
  FUN_180241640(local_8bd8);
  FUN_180241640(local_8b88);
  FUN_180241640(local_8b38);
  FUN_180241640(local_8ae8);
  FUN_180241640(local_8a98);
  FUN_180241640(local_8a48);
  FUN_180241640(local_89f8);
  FUN_180241640(local_89a8);
  FUN_180241640(local_8958);
  FUN_180241640(local_8908);
  FUN_180241640(local_88b8);
  FUN_180241640(local_8868);
  FUN_180241640(&lStack_1a9f8);
  _eh_vector_destructor_iterator_(&uStack_1aaa8,0x58,2,FUN_1802416a0);
  FUN_180241640(local_8818);
  FUN_180241640(local_87c8);
  atexit(FUN_18030b6f0);
  return;
}


)B180003f30",
    "839fce097d5aebb87cd96880acb02723d7b00476a718e9cad65eff33a038d84b",
    R"F180003f30C(FUN_1800130c0
FUN_180014190
FUN_1800209f0
FUN_18020e450
FUN_18021efd0
FUN_18021f000
FUN_18021f060
FUN_18021f090
FUN_180241310
FUN_180241340
FUN_180241460
FUN_1802414c0
FUN_1802415b0
FUN_180241640
FUN_1802416a0
FUN_180241700
FUN_1802417d0
FUN_180241930
FUN_180241ba0
FUN_180241e20
FUN_1802d8350
FUN_18030b6f0)F180003f30C",
    R"F180003f30D(DAT_18033e5ea
DAT_180350664
DAT_1803fadf0)F180003f30D",
    R"F180003f30T("Default"
"vgui/white"
"models/player/kleiner.mdl")F180003f30T",
    R"F180003f30F(6480: return;)F180003f30F",
    R"F180003f30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_180350664.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.)F180003f30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180003f30() noexcept {
    return kFunction_0x180003f30;
}

// 0x180010c60 FUN_180010c60
// source: re/dump/decompile/0x180010c60_FUN_180010c60.c
// size: 7309 bytes; thunk: false
// body sha256: d266c84278b5b061cc0716ddd50e9c937458373ac964124a852b0c0a070bb904
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180010c60{
    "0x180010c60",
    "FUN_180010c60",
    R"F180010c60S(undefined FUN_180010c60())F180010c60S",
    R"B180010c60(// 0x180010c60  FUN_180010c60
// size=7309 thunk=false
// signature: undefined FUN_180010c60()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180010c60(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 *local_1cd8;
  undefined1 *local_1cd0;
  undefined1 *local_1cc8;
  undefined1 *local_1cc0;
  undefined8 local_1cb8;
  undefined8 local_1cb0;
  undefined8 local_1ca8;
  undefined8 local_1ca0;
  undefined8 local_1c98;
  undefined8 local_1c90;
  undefined8 local_1c88;
  undefined8 local_1c80;
  longlong *local_1c78;
  undefined8 *local_1c70;
  longlong *local_1c68;
  undefined8 *local_1c60;
  longlong *local_1c58;
  undefined1 *local_1c50;
  undefined8 *local_1c48;
  longlong *local_1c38;
  undefined1 *local_1c30;
  longlong *local_1c28;
  undefined1 *local_1c20;
  undefined8 *local_1c18;
  longlong *local_1c08;
  undefined1 *local_1c00;
  longlong *local_1bf8;
  undefined1 *local_1bf0;
  longlong *local_1be8;
  undefined1 *local_1be0;
  undefined8 local_1bd8;
  longlong local_1bd0;
  longlong local_1bc8;
  undefined8 local_1bc0;
  undefined8 uStack_1bb8;
  undefined8 local_1bb0;
  undefined8 uStack_1ba8;
  undefined8 local_1ba0;
  undefined8 uStack_1b98;
  undefined8 local_1b90;
  undefined8 uStack_1b88;
  undefined1 local_1b80 [8];
  undefined8 local_1b78;
  longlong local_1b70;
  longlong local_1b68;
  undefined8 local_1b60;
  undefined8 uStack_1b58;
  undefined8 local_1b50;
  undefined8 uStack_1b48;
  undefined8 local_1b40;
  undefined8 uStack_1b38;
  undefined8 local_1b30;
  undefined8 uStack_1b28;
  undefined1 local_1b20 [8];
  undefined8 local_1b18;
  longlong local_1b10;
  longlong local_1b08;
  undefined8 local_1b00;
  undefined8 uStack_1af8;
  undefined8 local_1af0;
  undefined8 uStack_1ae8;
  undefined8 local_1ae0;
  undefined8 uStack_1ad8;
  undefined8 local_1ad0;
  undefined8 uStack_1ac8;
  undefined8 local_1ac0;
  longlong local_1ab8;
  longlong local_1ab0;
  undefined8 local_1aa8;
  undefined8 uStack_1aa0;
  undefined8 local_1a98;
  undefined8 uStack_1a90;
  undefined8 local_1a88;
  undefined8 uStack_1a80;
  undefined8 local_1a78;
  undefined8 uStack_1a70;
  undefined8 local_1a68;
  longlong local_1a60;
  longlong local_1a58;
  undefined8 local_1a50;
  undefined8 uStack_1a48;
  undefined8 local_1a40;
  undefined8 uStack_1a38;
  undefined8 local_1a30;
  undefined8 uStack_1a28;
  undefined8 local_1a20;
  undefined8 uStack_1a18;
  undefined8 local_1a10;
  longlong local_1a08;
  longlong local_1a00;
  undefined8 local_19f8;
  undefined8 uStack_19f0;
  undefined8 local_19e8;
  undefined8 uStack_19e0;
  undefined8 local_19d8;
  undefined8 uStack_19d0;
  undefined8 local_19c8;
  undefined8 uStack_19c0;
  undefined8 local_19b8;
  longlong local_19b0;
  longlong local_19a8;
  undefined8 local_19a0;
  undefined8 uStack_1998;
  undefined8 local_1990;
  undefined8 uStack_1988;
  undefined8 local_1980;
  undefined8 uStack_1978;
  undefined8 local_1970;
  undefined8 uStack_1968;
  undefined1 local_1960 [8];
  undefined8 local_1958;
  longlong local_1950;
  longlong local_1948;
  undefined8 local_1940;
  undefined8 uStack_1938;
  undefined8 local_1930;
  undefined8 uStack_1928;
  undefined8 local_1920;
  undefined8 uStack_1918;
  undefined8 local_1910;
  undefined8 uStack_1908;
  undefined8 local_1900;
  longlong local_18f8;
  longlong local_18f0;
  undefined8 local_18e8;
  undefined8 uStack_18e0;
  undefined8 local_18d8;
  undefined8 uStack_18d0;
  undefined8 local_18c8;
  undefined8 uStack_18c0;
  undefined8 local_18b8;
  undefined8 uStack_18b0;
  undefined8 local_18a8;
  longlong local_18a0;
  longlong local_1898;
  undefined8 local_1890;
  undefined8 uStack_1888;
  undefined8 local_1880;
  undefined8 uStack_1878;
  undefined8 local_1870;
  undefined8 uStack_1868;
  undefined8 local_1860;
  undefined8 uStack_1858;
  undefined1 local_1850 [8];
  undefined8 local_1848;
  longlong local_1840;
  longlong local_1838;
  undefined8 local_1830;
  undefined8 uStack_1828;
  undefined8 local_1820;
  undefined8 uStack_1818;
  undefined8 local_1810;
  undefined8 uStack_1808;
  undefined8 local_1800;
  undefined8 uStack_17f8;
  undefined8 local_17f0;
  longlong local_17e8;
  longlong local_17e0;
  undefined8 local_17d8;
  undefined8 uStack_17d0;
  undefined8 local_17c8;
  undefined8 uStack_17c0;
  undefined8 local_17b8;
  undefined8 uStack_17b0;
  undefined8 local_17a8;
  undefined8 uStack_17a0;
  undefined8 local_1798;
  longlong local_1790;
  longlong local_1788;
  undefined8 local_1780;
  undefined8 uStack_1778;
  undefined8 local_1770;
  undefined8 uStack_1768;
  undefined8 local_1760;
  undefined8 uStack_1758;
  undefined8 local_1750;
  undefined8 uStack_1748;
  undefined1 local_1740 [8];
  undefined8 local_1738;
  longlong local_1730;
  longlong local_1728;
  undefined8 local_1720;
  undefined8 uStack_1718;
  undefined8 local_1710;
  undefined8 uStack_1708;
  undefined8 local_1700;
  undefined8 uStack_16f8;
  undefined8 local_16f0;
  undefined8 uStack_16e8;
  undefined8 local_16e0;
  longlong local_16d8;
  longlong local_16d0;
  undefined8 local_16c8;
  undefined8 uStack_16c0;
  undefined8 local_16b8;
  undefined8 uStack_16b0;
  undefined8 local_16a8;
  undefined8 uStack_16a0;
  undefined8 local_1698;
  undefined8 uStack_1690;
  undefined8 local_1688;
  longlong local_1680;
  longlong local_1678;
  undefined1 local_1670 [64];
  undefined1 local_1630 [8];
  longlong local_1628;
  undefined8 local_1620;
  undefined8 local_1618;
  undefined8 uStack_1610;
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined8 local_15f8;
  undefined8 uStack_15f0;
  undefined8 local_15e8;
  undefined8 uStack_15e0;
  longlong local_15d8;
  undefined8 local_15d0;
  undefined8 local_15c8;
  undefined8 uStack_15c0;
  undefined8 local_15b8;
  undefined8 uStack_15b0;
  undefined8 local_15a8;
  undefined8 uStack_15a0;
  undefined8 local_1598;
  undefined8 uStack_1590;
  longlong local_1588;
  undefined8 local_1580;
  undefined8 local_1578;
  undefined8 uStack_1570;
  undefined8 local_1568;
  undefined8 uStack_1560;
  undefined8 local_1558;
  undefined8 uStack_1550;
  undefined8 local_1548;
  undefined8 uStack_1540;
  longlong local_1538;
  undefined8 local_1530;
  undefined8 local_1528;
  undefined8 uStack_1520;
  undefined8 local_1518;
  undefined8 uStack_1510;
  undefined8 local_1508;
  undefined8 uStack_1500;
  undefined8 local_14f8;
  undefined8 uStack_14f0;
  longlong *local_14e8;
  longlong *local_14e0;
  undefined4 *local_14d8;
  longlong *local_14d0;
  longlong *local_14c8;
  undefined8 *local_14c0;
  undefined8 *local_14b8;
  longlong *local_14b0;
  longlong *local_14a8;
  undefined4 *local_14a0;
  longlong *local_1498;
  longlong *local_1490;
  longlong *local_1488;
  undefined8 *local_1480;
  undefined8 *local_1478;
  longlong *local_1470;
  longlong *local_1468;
  undefined4 *local_1460;
  longlong *local_1458;
  longlong *local_1450;
  undefined4 *local_1448;
  longlong *local_1440;
  longlong *local_1438;
  undefined8 *local_1430;
  undefined8 *local_1428;
  longlong *local_1420;
  longlong *local_1418;
  undefined4 *local_1410;
  longlong *local_1408;
  longlong *local_1400;
  undefined4 *local_13f8;
  longlong *local_13f0;
  longlong *local_13e8;
  undefined8 *local_13e0;
  undefined8 *local_13d8;
  undefined1 *local_13d0;
  undefined8 *local_13c8;
  longlong *local_13c0;
  longlong *local_13b8;
  undefined4 *local_13b0;
  longlong *local_13a8;
  longlong *local_13a0;
  undefined4 *local_1398;
  longlong *local_1390;
  undefined1 *local_1388;
  undefined1 *local_1380;
  undefined1 *local_1378;
  undefined1 *local_1370;
  undefined1 *local_1368;
  undefined1 *local_1360;
  undefined1 *local_1358;
  undefined1 local_1350 [16];
  undefined1 local_1340 [16];
  undefined1 local_1330 [16];
  undefined1 local_1320 [16];
  undefined1 local_1310 [16];
  undefined1 local_1300 [16];
  undefined1 local_12f0 [16];
  undefined1 local_12e0 [16];
  undefined1 local_12d0 [16];
  undefined1 local_12c0 [16];
  undefined1 local_12b0 [16];
  undefined4 local_12a0;
  undefined8 local_129c;
  undefined8 uStack_1294;
  undefined8 local_128c;
  undefined8 uStack_1284;
  undefined8 local_127c;
  undefined8 uStack_1274;
  undefined4 local_126c;
  TypeDescriptor *local_1268;
  undefined8 local_1260;
  undefined8 uStack_1258;
  undefined8 local_1250;
  undefined8 uStack_1248;
  undefined8 local_1240;
  undefined8 uStack_1238;
  undefined8 local_1230;
  TypeDescriptor *pTStack_1228;
  undefined8 local_1220;
  undefined8 uStack_1218;
  undefined8 local_1210;
  undefined8 uStack_1208;
  undefined8 local_1200;
  undefined8 uStack_11f8;
  undefined8 local_11f0;
  TypeDescriptor *pTStack_11e8;
  undefined4 local_11e0;
  undefined8 local_11dc;
  undefined8 uStack_11d4;
  undefined8 local_11cc;
  undefined8 uStack_11c4;
  undefined8 local_11bc;
  undefined8 uStack_11b4;
  undefined4 local_11ac;
  TypeDescriptor *local_11a8;
  undefined4 local_11a0;
  undefined8 local_119c;
  undefined8 uStack_1194;
  undefined8 local_118c;
  undefined8 uStack_1184;
  undefined8 local_117c;
  undefined8 uStack_1174;
  undefined4 local_116c;
  TypeDescriptor *local_1168;
  undefined4 local_1160;
  undefined8 local_115c;
  undefined8 uStack_1154;
  undefined8 local_114c;
  undefined8 uStack_1144;
  undefined8 local_113c;
  undefined8 uStack_1134;
  undefined4 local_112c;
  TypeDescriptor *local_1128;
  undefined4 local_1120;
  undefined8 local_111c;
  undefined8 uStack_1114;
  undefined8 local_110c;
  undefined8 uStack_1104;
  undefined8 local_10fc;
  undefined8 uStack_10f4;
  undefined4 local_10ec;
  TypeDescriptor *local_10e8;
  undefined4 local_10e0;
  undefined8 local_10dc;
  undefined8 uStack_10d4;
  undefined8 local_10cc;
  undefined8 uStack_10c4;
  undefined8 local_10bc;
  undefined8 uStack_10b4;
  undefined4 local_10ac;
  TypeDescriptor *local_10a8;
  undefined4 local_10a0;
  undefined8 local_109c;
  undefined8 uStack_1094;
  undefined8 local_108c;
  undefined8 uStack_1084;
  undefined8 local_107c;
  undefined8 uStack_1074;
  undefined4 local_106c;
  TypeDescriptor *local_1068;
  undefined4 local_1060;
  undefined8 local_105c;
  undefined8 uStack_1054;
  undefined8 local_104c;
  undefined8 uStack_1044;
  undefined8 local_103c;
  undefined8 uStack_1034;
  undefined4 local_102c;
  TypeDescriptor *local_1028;
  undefined4 local_1020;
  undefined8 local_101c;
  undefined8 uStack_1014;
  undefined8 local_100c;
  undefined8 uStack_1004;
  undefined8 local_ffc;
  undefined8 uStack_ff4;
  undefined4 local_fec;
  TypeDescriptor *local_fe8;
  undefined4 local_fe0;
  undefined8 local_fdc;
  undefined8 uStack_fd4;
  undefined8 local_fcc;
  undefined8 uStack_fc4;
  undefined8 local_fbc;
  undefined8 uStack_fb4;
  undefined4 local_fac;
  TypeDescriptor *local_fa8;
  undefined1 *local_fa0;
  undefined1 *local_f98;
  undefined4 *local_f90;
  longlong *local_f88;
  undefined8 *local_f80;
  longlong *local_f78;
  undefined8 *local_f70;
  undefined8 *local_f68;
  longlong *local_f60;
  longlong *local_f58;
  undefined4 *local_f50;
  undefined8 local_f48;
  longlong local_f40;
  longlong local_f38;
  undefined8 local_f30;
  undefined8 uStack_f28;
  undefined8 local_f20;
  undefined8 uStack_f18;
  undefined8 local_f10;
  undefined8 uStack_f08;
  undefined8 local_f00;
  undefined8 uStack_ef8;
  undefined8 local_ef0;
  longlong local_ee8;
  undefined8 local_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  longlong local_e90;
  undefined8 local_e88;
  undefined8 local_e80;
  undefined8 uStack_e78;
  undefined8 local_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined8 uStack_e58;
  undefined8 local_e50;
  undefined8 uStack_e48;
  undefined8 local_e40;
  longlong local_e38;
  undefined8 local_e30;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined8 local_e18;
  undefined8 uStack_e10;
  undefined8 local_e08;
  undefined8 uStack_e00;
  undefined8 local_df8;
  undefined8 uStack_df0;
  undefined8 local_de8;
  longlong local_de0;
  undefined8 local_dd8;
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined1 local_d90 [88];
  undefined1 local_d38 [88];
  undefined1 local_ce0 [8];
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  TypeDescriptor *pTStack_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  TypeDescriptor *pTStack_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  TypeDescriptor *pTStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  TypeDescriptor *pTStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  TypeDescriptor *pTStack_ba0;
  undefined1 local_b98 [32];
  undefined1 local_b78 [88];
  undefined1 local_b20 [8];
  undefined1 local_b18 [64];
  undefined1 local_ad8 [64];
  undefined8 local_a98 [8];
  undefined1 local_a58 [64];
  undefined1 local_a18 [64];
  undefined1 local_9d8 [88];
  undefined1 local_980 [88];
  undefined1 local_928 [80];
  undefined1 local_8d8 [80];
  undefined1 local_888 [80];
  undefined1 local_838 [80];
  undefined1 local_7e8 [80];
  undefined1 local_798 [80];
  undefined1 local_748 [80];
  undefined1 local_6f8 [80];
  undefined1 local_6a8 [80];
  undefined1 local_658 [80];
  undefined1 local_608 [80];
  undefined1 local_5b8 [80];
  undefined1 local_568 [80];
  undefined1 local_518 [80];
  undefined1 local_4c8 [80];
  undefined1 local_478 [80];
  undefined1 local_428 [80];
  undefined1 local_3d8 [80];
  undefined1 local_388 [80];
  undefined1 local_338 [80];
  undefined1 local_2e8 [80];
  undefined1 local_298 [80];
  undefined1 local_248 [80];
  undefined1 local_1f8 [80];
  undefined1 local_1a8 [80];
  undefined8 local_158 [11];
  undefined1 local_100 [88];
  undefined1 local_a8 [88];
  undefined1 local_50 [8];
  undefined8 uStack_48;
  
  uStack_48 = 0x180010c7f;
  local_1370 = local_12b0;
  local_1360 = local_12d0;
  local_fa0 = local_1340;
  local_f98 = local_1350;
  local_f90 = &local_12a0;
  local_129c = 0;
  uStack_1294 = 0;
  local_128c = 0;
  uStack_1284 = 0;
  local_127c = 0;
  uStack_1274 = 0;
  local_126c = 0;
  local_12a0 = 0x41200000;
  local_1268 = &.M::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_4c8,&local_12a0);
  local_1b78 = 0x1300ae302fc434a8;
  local_f88 = &local_1b70;
  local_1c28 = &local_1b70;
  local_1b70 = 0;
  local_1b68 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_1b70 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = local_1b68;
  local_1b60 = 0;
  uStack_1b58 = 0;
  local_1b50 = 0;
  uStack_1b48 = 0;
  local_1b40 = 0;
  uStack_1b38 = 0;
  local_1b30 = 0;
  uStack_1b28 = 0;
  local_1b68 = lVar2;
  FUN_180014190(&local_1b60,plVar1 + 2);
  local_1c28 = &local_1b78;
  local_1c20 = local_1b20;
  uVar3 = FUN_1802417d0(local_1350,&local_1c28);
  local_f80 = &local_1260;
  uStack_1258 = 0;
  local_1250 = 0;
  uStack_1248 = 0;
  local_1240 = 0;
  uStack_1238 = 0;
  local_1230 = 0;
  local_1260 = 1;
  pTStack_1228 = &._N::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_180241340(local_518,&local_1260,uVar3);
  local_1bd8 = -0x71a9af25a3573fb3;
  local_f78 = &local_1bd0;
  local_1bf8 = &local_1bd0;
  local_1bd0 = 0;
  local_1bc8 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_1bd0 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = local_1bc8;
  local_1bc0 = 0;
  uStack_1bb8 = 0;
  local_1bb0 = 0;
  uStack_1ba8 = 0;
  local_1ba0 = 0;
  uStack_1b98 = 0;
  local_1b90 = 0;
  uStack_1b88 = 0;
  local_1bc8 = lVar2;
  FUN_180014190(&local_1bc0,plVar1 + 2);
  local_1bf8 = &local_1bd8;
  local_1bf0 = local_1b80;
  uVar3 = FUN_1802417d0(local_1340,&local_1bf8);
  local_f70 = &local_1220;
  uStack_1218 = 0;
  local_1210 = 0;
  uStack_1208 = 0;
  local_1200 = 0;
  uStack_11f8 = 0;
  local_11f0 = 0;
  local_1220 = 1;
  pTStack_11e8 = &._N::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_180241340(local_568,&local_1220,uVar3);
  local_f48 = 0x402819404e703058;
  local_1490 = &local_f40;
  local_1c68 = &local_f40;
  local_f40 = 0;
  local_f38 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_f40 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = local_f38;
  local_f30 = 0;
  uStack_f28 = 0;
  local_f20 = 0;
  uStack_f18 = 0;
  local_f10 = 0;
  uStack_f08 = 0;
  local_f00 = 0;
  uStack_ef8 = 0;
  local_f38 = lVar2;
  FUN_180014190(&local_f30,plVar1 + 2);
  local_f68 = &local_cd8;
  local_cd8 = 0;
  uStack_cd0 = 0;
  local_cc8 = 0;
  uStack_cc0 = 0;
  local_cb8 = 0;
  uStack_cb0 = 0;
  local_ca8 = 0;
  pTStack_ca0 = &._N::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_5b8,&local_cd8);
  local_1848 = 0x1aa5e608785fc04b;
  local_f60 = &local_1840;
  local_f58 = &local_1840;
  local_1840 = 0;
  local_1838 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_1840 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = local_1838;
  local_1830 = 0;
  uStack_1828 = 0;
  local_1820 = 0;
  uStack_1818 = 0;
  local_1810 = 0;
  uStack_1808 = 0;
  local_1800 = 0;
  uStack_17f8 = 0;
  local_1838 = lVar2;
  FUN_180014190(&local_1830,plVar1 + 2);
  local_f50 = &local_11e0;
  local_11dc = 0;
  uStack_11d4 = 0;
  local_11cc = 0;
  uStack_11c4 = 0;
  local_11bc = 0;
  uStack_11b4 = 0;
  local_11ac = 0;
  local_11e0 = 0x41200000;
  local_11a8 = &.M::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_608,&local_11e0);
  local_17f0 = 0xca116fd74c7b98bf;
  local_14e8 = &local_17e8;
  local_14e0 = &local_17e8;
  local_17e8 = 0;
  local_17e0 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_17e8 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = local_17e0;
  local_17d8 = 0;
  uStack_17d0 = 0;
  local_17c8 = 0;
  uStack_17c0 = 0;
  local_17b8 = 0;
  uStack_17b0 = 0;
  local_17a8 = 0;
  uStack_17a0 = 0;
  local_17e0 = lVar2;
  FUN_180014190(&local_17d8,plVar1 + 2);
  local_14d8 = &local_11a0;
  local_119c = 0;
  uStack_1194 = 0;
  local_118c = 0;
  uStack_1184 = 0;
  local_117c = 0;
  uStack_1174 = 0;
  local_116c = 0;
  local_11a0 = 0x41200000;
  local_1168 = &.M::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_658,&local_11a0);
  local_1798 = 0x6be2ede69e26a691;
  local_14d0 = &local_1790;
  local_1c58 = &local_1790;
  local_1790 = 0;
  local_1788 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_1790 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = local_1788;
  local_1780 = 0;
  uStack_1778 = 0;
  local_1770 = 0;
  uStack_1768 = 0;
  local_1760 = 0;
  uStack_1758 = 0;
  local_1750 = 0;
  uStack_1748 = 0;
  local_1788 = lVar2;
  FUN_180014190(&local_1780,plVar1 + 2);
  local_1c58 = &local_1848;
  local_1c50 = local_1740;
  plVar1 = (longlong *)FUN_1802417d0(local_1330,&local_1c58);
  local_14c8 = plVar1;
  FUN_180241930(&local_1538,plVar1);
  local_1528 = 0;
  uStack_1520 = 0;
  local_1518 = 0;
  uStack_1510 = 0;
  local_1508 = 0;
  uStack_1500 = 0;
  local_14f8 = 0;
  uStack_14f0 = 0;
  FUN_180241ba0(plVar1,plVar1,*(undefined8 *)(*plVar1 + 8));
  free((void *)*plVar1);
  local_ef0 = 0xc9542b81133e1aef;
  local_14c0 = &local_ee8;
  local_1c18 = &local_ee8;
  local_ee8 = 0;
  local_ee0 = 0;
  lVar2 = FUN_1802d8350(0x78);
  uVar3 = local_ee0;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_ee8 = local_1538;
  local_ee0 = local_1530;
  local_1530 = uVar3;
  local_ed8 = 0;
  uStack_ed0 = 0;
  local_ec8 = 0;
  uStack_ec0 = 0;
  local_eb8 = 0;
  uStack_eb0 = 0;
  local_ea8 = 0;
  uStack_ea0 = 0;
  local_1538 = lVar2;
  FUN_180014190(&local_ed8,&local_1528);
  local_14b8 = &local_c98;
  local_c98 = 0;
  uStack_c90 = 0;
  local_c88 = 0;
  uStack_c80 = 0;
  local_c78 = 0;
  uStack_c70 = 0;
  local_c68 = 0;
  pTStack_c60 = &._N::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_6a8,&local_c98);
  local_1b18 = 0x1aa5e608785fc04b;
  local_14b0 = &local_1b10;
  local_14a8 = &local_1b10;
  local_1b10 = 0;
  local_1b08 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_1b10 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = local_1b08;
  local_1b00 = 0;
  uStack_1af8 = 0;
  local_1af0 = 0;
  uStack_1ae8 = 0;
  local_1ae0 = 0;
  uStack_1ad8 = 0;
  local_1ad0 = 0;
  uStack_1ac8 = 0;
  local_1b08 = lVar2;
  FUN_180014190(&local_1b00,plVar1 + 2);
  local_14a0 = &local_1160;
  local_115c = 0;
  uStack_1154 = 0;
  local_114c = 0;
  uStack_1144 = 0;
  local_113c = 0;
  uStack_1134 = 0;
  local_112c = 0;
  local_1160 = 0x41700000;
  local_1128 = &.M::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_6f8,&local_1160);
  local_1ac0 = 0xca116fd74c7b98bf;
  local_1498 = &local_1ab8;
  local_1c78 = &local_1ab8;
  local_1ab8 = 0;
  local_1ab0 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_1ab8 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = local_1ab0;
  local_1aa8 = 0;
  uStack_1aa0 = 0;
  local_1a98 = 0;
  uStack_1a90 = 0;
  local_1a88 = 0;
  uStack_1a80 = 0;
  local_1a78 = 0;
  uStack_1a70 = 0;
  local_1ab0 = lVar2;
  FUN_180014190(&local_1aa8,plVar1 + 2);
  local_1c78 = &local_1b18;
  local_1c70 = &local_1a68;
  plVar1 = (longlong *)FUN_1802417d0(local_1320,&local_1c78);
  local_1488 = plVar1;
  FUN_180241930(&local_1588,plVar1);
  local_1578 = 0;
  uStack_1570 = 0;
  local_1568 = 0;
  uStack_1560 = 0;
  local_1558 = 0;
  uStack_1550 = 0;
  local_1548 = 0;
  uStack_1540 = 0;
  FUN_180241ba0(plVar1,plVar1,*(undefined8 *)(*plVar1 + 8));
  free((void *)*plVar1);
  local_e98 = 0x962922f87acd0ffd;
  local_1480 = &local_e90;
  local_1c48 = &local_e90;
  local_e90 = 0;
  local_e88 = 0;
  lVar2 = FUN_1802d8350(0x78);
  uVar3 = local_e88;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_e90 = local_1588;
  local_e88 = local_1580;
  local_1580 = uVar3;
  local_e80 = 0;
  uStack_e78 = 0;
  local_e70 = 0;
  uStack_e68 = 0;
  local_e60 = 0;
  uStack_e58 = 0;
  local_e50 = 0;
  uStack_e48 = 0;
  local_1588 = lVar2;
  FUN_180014190(&local_e80,&local_1578);
  local_1478 = &local_c58;
  local_c58 = 0;
  uStack_c50 = 0;
  local_c48 = 0;
  uStack_c40 = 0;
  local_c38 = 0;
  uStack_c30 = 0;
  local_c28 = 0;
  pTStack_c20 = &._N::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_1a8,&local_c58);
  local_1958 = 0x1aa5e608785fc04b;
  local_1470 = &local_1950;
  local_1468 = &local_1950;
  local_1950 = 0;
  local_1948 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_1950 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = local_1948;
  local_1940 = 0;
  uStack_1938 = 0;
  local_1930 = 0;
  uStack_1928 = 0;
  local_1920 = 0;
  uStack_1918 = 0;
  local_1910 = 0;
  uStack_1908 = 0;
  local_1948 = lVar2;
  FUN_180014190(&local_1940,plVar1 + 2);
  local_1460 = &local_1120;
  local_111c = 0;
  uStack_1114 = 0;
  local_110c = 0;
  uStack_1104 = 0;
  local_10fc = 0;
  uStack_10f4 = 0;
  local_10ec = 0;
  local_1120 = 0x41700000;
  local_10e8 = &.M::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_478,&local_1120);
  local_1900 = 0xca116fd74c7b98bf;
  local_1458 = &local_18f8;
  local_1450 = &local_18f8;
  local_18f8 = 0;
  local_18f0 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_18f8 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = local_18f0;
  local_18e8 = 0;
  uStack_18e0 = 0;
  local_18d8 = 0;
  uStack_18d0 = 0;
  local_18c8 = 0;
  uStack_18c0 = 0;
  local_18b8 = 0;
  uStack_18b0 = 0;
  local_18f0 = lVar2;
  FUN_180014190(&local_18e8,plVar1 + 2);
  local_1448 = &local_10e0;
  local_10dc = 0;
  uStack_10d4 = 0;
  local_10cc = 0;
  uStack_10c4 = 0;
  local_10bc = 0;
  uStack_10b4 = 0;
  local_10ac = 0;
  local_10e0 = 0x41700000;
  local_10a8 = &.M::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_428,&local_10e0);
  local_18a8 = 0x6be2ede69e26a691;
  local_1440 = &local_18a0;
  local_1c38 = &local_18a0;
  local_18a0 = 0;
  local_1898 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_18a0 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = local_1898;
  local_1890 = 0;
  uStack_1888 = 0;
  local_1880 = 0;
  uStack_1878 = 0;
  local_1870 = 0;
  uStack_1868 = 0;
  local_1860 = 0;
  uStack_1858 = 0;
  local_1898 = lVar2;
  FUN_180014190(&local_1890,plVar1 + 2);
  local_1c38 = &local_1958;
  local_1c30 = local_1850;
  plVar1 = (longlong *)FUN_1802417d0(local_1310,&local_1c38);
  local_1438 = plVar1;
  FUN_180241930(&local_15d8,plVar1);
  local_15c8 = 0;
  uStack_15c0 = 0;
  local_15b8 = 0;
  uStack_15b0 = 0;
  local_15a8 = 0;
  uStack_15a0 = 0;
  local_1598 = 0;
  uStack_1590 = 0;
  FUN_180241ba0(plVar1,plVar1,*(undefined8 *)(*plVar1 + 8));
  free((void *)*plVar1);
  local_e40 = 0xb8b171e34bce50d2;
  local_1430 = &local_e38;
  local_1c60 = &local_e38;
  local_e38 = 0;
  local_e30 = 0;
  lVar2 = FUN_1802d8350(0x78);
  uVar3 = local_e30;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_e38 = local_15d8;
  local_e30 = local_15d0;
  local_15d0 = uVar3;
  local_e28 = 0;
  uStack_e20 = 0;
  local_e18 = 0;
  uStack_e10 = 0;
  local_e08 = 0;
  uStack_e00 = 0;
  local_df8 = 0;
  uStack_df0 = 0;
  local_15d8 = lVar2;
  FUN_180014190(&local_e28,&local_15c8);
  local_1428 = &local_bd8;
  local_bd8 = 0;
  uStack_bd0 = 0;
  local_bc8 = 0;
  uStack_bc0 = 0;
  local_bb8 = 0;
  uStack_bb0 = 0;
  local_ba8 = 0;
  pTStack_ba0 = &._N::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_748,&local_bd8);
  local_1a68 = 0x1aa5e608785fc04b;
  local_1420 = &local_1a60;
  local_1418 = &local_1a60;
  local_1a60 = 0;
  local_1a58 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_1a60 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = local_1a58;
  local_1a50 = 0;
  uStack_1a48 = 0;
  local_1a40 = 0;
  uStack_1a38 = 0;
  local_1a30 = 0;
  uStack_1a28 = 0;
  local_1a20 = 0;
  uStack_1a18 = 0;
  local_1a58 = lVar2;
  FUN_180014190(&local_1a50,plVar1 + 2);
  local_1410 = &local_10a0;
  local_109c = 0;
  uStack_1094 = 0;
  local_108c = 0;
  uStack_1084 = 0;
  local_107c = 0;
  uStack_1074 = 0;
  local_106c = 0;
  local_10a0 = 0x41700000;
  local_1068 = &.M::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_798,&local_10a0);
  local_1a10 = 0xca116fd74c7b98bf;
  local_1408 = &local_1a08;
  local_1400 = &local_1a08;
  local_1a08 = 0;
  local_1a00 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_1a08 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = local_1a00;
  local_19f8 = 0;
  uStack_19f0 = 0;
  local_19e8 = 0;
  uStack_19e0 = 0;
  local_19d8 = 0;
  uStack_19d0 = 0;
  local_19c8 = 0;
  uStack_19c0 = 0;
  local_1a00 = lVar2;
  FUN_180014190(&local_19f8,plVar1 + 2);
  local_13f8 = &local_1060;
  local_105c = 0;
  uStack_1054 = 0;
  local_104c = 0;
  uStack_1044 = 0;
  local_103c = 0;
  uStack_1034 = 0;
  local_102c = 0;
  local_1060 = 0x41700000;
  local_1028 = &.M::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_7e8,&local_1060);
  local_19b8 = 0x6be2ede69e26a691;
  local_13f0 = &local_19b0;
  local_1c08 = &local_19b0;
  local_19b0 = 0;
  local_19a8 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_19b0 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = local_19a8;
  local_19a0 = 0;
  uStack_1998 = 0;
  local_1990 = 0;
  uStack_1988 = 0;
  local_1980 = 0;
  uStack_1978 = 0;
  local_1970 = 0;
  uStack_1968 = 0;
  local_19a8 = lVar2;
  FUN_180014190(&local_19a0,plVar1 + 2);
  local_1c08 = &local_1a68;
  local_1c00 = local_1960;
  plVar1 = (longlong *)FUN_1802417d0(local_1300,&local_1c08);
  local_13e8 = plVar1;
  FUN_180241930(&local_1628,plVar1);
  local_1618 = 0;
  uStack_1610 = 0;
  local_1608 = 0;
  uStack_1600 = 0;
  local_15f8 = 0;
  uStack_15f0 = 0;
  local_15e8 = 0;
  uStack_15e0 = 0;
  FUN_180241ba0(plVar1,plVar1,*(undefined8 *)(*plVar1 + 8));
  free((void *)*plVar1);
  local_de8 = 0xba4296ce1221f5d2;
  local_13e0 = &local_de0;
  local_13d8 = &local_de0;
  local_de0 = 0;
  local_dd8 = 0;
  lVar2 = FUN_1802d8350(0x78);
  uVar3 = local_dd8;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_de0 = local_1628;
  local_dd8 = local_1620;
  local_1620 = uVar3;
  local_dd0 = 0;
  uStack_dc8 = 0;
  local_dc0 = 0;
  uStack_db8 = 0;
  local_db0 = 0;
  uStack_da8 = 0;
  local_da0 = 0;
  uStack_d98 = 0;
  local_1628 = lVar2;
  FUN_180014190(&local_dd0,&local_1618);
  local_13d0 = local_12f0;
  local_13c8 = &local_c18;
  local_c18 = 0;
  uStack_c10 = 0;
  local_c08 = 0;
  uStack_c00 = 0;
  local_bf8 = 0;
  uStack_bf0 = 0;
  local_be8 = 0;
  pTStack_be0 = &._N::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_838,&local_c18);
  local_1738 = 0x1aa5e608785fc04b;
  local_13c0 = &local_1730;
  local_13b8 = &local_1730;
  local_1730 = 0;
  local_1728 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_1730 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = local_1728;
  local_1720 = 0;
  uStack_1718 = 0;
  local_1710 = 0;
  uStack_1708 = 0;
  local_1700 = 0;
  uStack_16f8 = 0;
  local_16f0 = 0;
  uStack_16e8 = 0;
  local_1728 = lVar2;
  FUN_180014190(&local_1720,plVar1 + 2);
  local_13b0 = &local_1020;
  local_101c = 0;
  uStack_1014 = 0;
  local_100c = 0;
  uStack_1004 = 0;
  local_ffc = 0;
  uStack_ff4 = 0;
  local_fec = 0;
  local_1020 = 0x41700000;
  local_fe8 = &.M::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_888,&local_1020);
  local_16e0 = 0xca116fd74c7b98bf;
  local_13a8 = &local_16d8;
  local_13a0 = &local_16d8;
  local_16d8 = 0;
  local_16d0 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_16d8 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = local_16d0;
  local_16c8 = 0;
  uStack_16c0 = 0;
  local_16b8 = 0;
  uStack_16b0 = 0;
  local_16a8 = 0;
  uStack_16a0 = 0;
  local_1698 = 0;
  uStack_1690 = 0;
  local_16d0 = lVar2;
  FUN_180014190(&local_16c8,plVar1 + 2);
  local_1398 = &local_fe0;
  local_fdc = 0;
  uStack_fd4 = 0;
  local_fcc = 0;
  uStack_fc4 = 0;
  local_fbc = 0;
  uStack_fb4 = 0;
  local_fac = 0;
  local_fe0 = 0x41700000;
  local_fa8 = &.M::RTTI_Type_Descriptor;
  plVar1 = (longlong *)FUN_1802414c0(local_8d8,&local_fe0);
  local_1688 = 0x6be2ede69e26a691;
  local_1390 = &local_1680;
  local_1be8 = &local_1680;
  local_1680 = 0;
  local_1678 = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_1680 = *plVar1;
  *plVar1 = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = local_1678;
  local_1678 = lVar2;
  FUN_180241310(local_1670,plVar1 + 2);
  local_1be8 = &local_1738;
  local_1be0 = local_1630;
  uVar3 = FUN_1802417d0(local_12f0,&local_1be8);
  uVar3 = FUN_180241460(local_928,uVar3);
  local_1cb8 = 0x435ca8b3b61b5752;
  FUN_180241700(local_d90,&local_1cb8,uVar3);
  local_1388 = local_12e0;
  local_1380 = local_b18;
  local_res8[0] = 0;
  uVar3 = FUN_18021efd0(local_b18,local_res8);
  uVar3 = FUN_1802414c0(local_1f8,uVar3);
  local_1cb0 = 0x1aa5e608785fc04b;
  FUN_180241700(local_158,&local_1cb0,uVar3);
  local_1378 = local_ad8;
  local_res18[0] = 0x41700000;
  uVar3 = FUN_18021f090(local_ad8,local_res18);
  uVar3 = FUN_1802414c0(local_248,uVar3);
  local_1ca8 = 0xca116fd74c7b98bf;
  FUN_180241700(local_100,&local_1ca8,uVar3);
  local_1cd8 = local_a98;
  local_res20[0] = 0x41700000;
  uVar3 = FUN_18021f090(local_a98,local_res20);
  uVar3 = FUN_1802414c0(local_298,uVar3);
  local_1ca0 = 0x6be2ede69e26a691;
  FUN_180241700(local_a8,&local_1ca0,uVar3);
  local_1cd8 = local_158;
  local_1cd0 = local_50;
  uVar3 = FUN_1802417d0(local_12e0,&local_1cd8);
  uVar3 = FUN_180241460(local_2e8,uVar3);
  local_1c98 = 0x52dc3fd94aa515b3;
  FUN_180241700(local_d38,&local_1c98,uVar3);
  local_1cd8 = &local_f48;
  local_1cd0 = local_ce0;
  uVar3 = FUN_1802417d0(local_12d0,&local_1cd8);
  uVar3 = FUN_180241460(local_338,uVar3);
  local_1c90 = 0x554ecea7edf07271;
  FUN_180241700(local_9d8,&local_1c90,uVar3);
  local_1368 = local_12c0;
  local_1cc8 = local_a58;
  local_res10[0] = 0;
  uVar3 = FUN_18021efd0(local_a58,local_res10);
  uVar3 = FUN_1802414c0(local_388,uVar3);
  local_1c88 = 0x7cbc0ec7d8f61b63;
  FUN_180241700(local_b78,&local_1c88,uVar3);
  local_1cc8 = local_b78;
  local_1cc0 = local_b20;
  uVar3 = FUN_1802417d0(local_12c0,&local_1cc8);
  uVar3 = FUN_180241460(local_3d8,uVar3);
  local_1c80 = 0xe2e2e50c1049d18;
  FUN_180241700(local_980,&local_1c80,uVar3);
  local_1cc8 = local_9d8;
  local_1cc0 = local_928;
  uVar3 = FUN_1802417d0(local_12b0,&local_1cc8);
  local_1358 = local_a18;
  uVar4 = FUN_1800130c0(local_b98,"theme name",10);
  uVar4 = FUN_18021f000(local_a18,uVar4);
  FUN_180241340(&DAT_1803fada0,uVar4,uVar3);
  FUN_18020e450(local_b98);
  _eh_vector_destructor_iterator_(local_9d8,0x58,2,FUN_1802416a0);
  FUN_180241640(local_3d8);
  _eh_vector_destructor_iterator_(local_b78,0x58,1,FUN_1802416a0);
  FUN_180241640(local_388);
  FUN_180241640(local_338);
  _eh_vector_destructor_iterator_(&local_f48,0x58,7,FUN_1802416a0);
  FUN_180241640(local_2e8);
  _eh_vector_destructor_iterator_(local_158,0x58,3,FUN_1802416a0);
  FUN_180241640(local_298);
  FUN_180241640(local_248);
  FUN_180241640(local_1f8);
  FUN_180241640(local_928);
  _eh_vector_destructor_iterator_(&local_1738,0x58,3,FUN_1802416a0);
  FUN_180241640(local_8d8);
  FUN_180241640(local_888);
  FUN_180241640(local_838);
  FUN_180241640(&local_1628);
  _eh_vector_destructor_iterator_(&local_1a68,0x58,3,FUN_1802416a0);
  FUN_180241640(local_7e8);
  FUN_180241640(local_798);
  FUN_180241640(local_748);
  FUN_180241640(&local_15d8);
  _eh_vector_destructor_iterator_(&local_1958,0x58,3,FUN_1802416a0);
  FUN_180241640(local_428);
  FUN_180241640(local_478);
  FUN_180241640(local_1a8);
  FUN_180241640(&local_1588);
  _eh_vector_destructor_iterator_(&local_1b18,0x58,2,FUN_1802416a0);
  FUN_180241640(local_6f8);
  FUN_180241640(local_6a8);
  FUN_180241640(&local_1538);
  _eh_vector_destructor_iterator_(&local_1848,0x58,3,FUN_1802416a0);
  FUN_180241640(local_658);
  FUN_180241640(local_608);
  FUN_180241640(local_5b8);
  FUN_180241640(local_568);
  _eh_vector_destructor_iterator_(&local_1bd8,0x58,1,FUN_1802416a0);
  FUN_180241640(local_518);
  _eh_vector_destructor_iterator_(&local_1b78,0x58,1,FUN_1802416a0);
  FUN_180241640(local_4c8);
  atexit(FUN_18030b740);
  return;
}


)B180010c60",
    "d266c84278b5b061cc0716ddd50e9c937458373ac964124a852b0c0a070bb904",
    R"F180010c60C(FUN_1800130c0
FUN_180014190
FUN_18020e450
FUN_18021efd0
FUN_18021f000
FUN_18021f090
FUN_180241310
FUN_180241340
FUN_180241460
FUN_1802414c0
FUN_180241640
FUN_1802416a0
FUN_180241700
FUN_1802417d0
FUN_180241930
FUN_180241ba0
FUN_1802d8350
FUN_18030b740)F180010c60C",
    R"F180010c60D(DAT_1803fada0)F180010c60D",
    R"F180010c60T("theme name")F180010c60T",
    R"F180010c60F(1430: return;)F180010c60F",
    R"F180010c60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fada0.)F180010c60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180010c60() noexcept {
    return kFunction_0x180010c60;
}

// 0x1800128f0 FUN_1800128f0
// source: re/dump/decompile/0x1800128f0_FUN_1800128f0.c
// size: 141 bytes; thunk: false
// body sha256: 888cd2c8c3ad03597e8b3704a999768c991166c7143430c4844ac999b907dec9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800128f0{
    "0x1800128f0",
    "FUN_1800128f0",
    R"F1800128f0S(undefined FUN_1800128f0())F1800128f0S",
    R"B1800128f0(// 0x1800128f0  FUN_1800128f0
// size=141 thunk=false
// signature: undefined FUN_1800128f0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800128f0(void)

{
  _DAT_1803fae40 = 0;
  DAT_1803fae48 = FUN_1802d8350(0x18);
  *(longlong *)DAT_1803fae48 = DAT_1803fae48;
  *(longlong *)(DAT_1803fae48 + 8) = DAT_1803fae48;
  _DAT_1803fae58 = 0;
  _DAT_1803fae60 = 0;
  uRam00000001803fae68 = 0;
  _DAT_1803fae70 = 7;
  _DAT_1803fae78 = 8;
  _DAT_1803fae40 = 0x3f800000;
  FUN_18022c1b0(&DAT_1803fae58,0x10,DAT_1803fae48);
  atexit(FUN_18030ba10);
  return;
}


)B1800128f0",
    "888cd2c8c3ad03597e8b3704a999768c991166c7143430c4844ac999b907dec9",
    R"F1800128f0C(FUN_18022c1b0
FUN_1802d8350
FUN_18030ba10)F1800128f0C",
    R"F1800128f0D(DAT_1803fae48
DAT_1803fae58)F1800128f0D",
    R"F1800128f0T()F1800128f0T",
    R"F1800128f0F(24: return;)F1800128f0F",
    R"F1800128f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fae48.
TODO: recover the declaration, type and value for global/data reference DAT_1803fae58.)F1800128f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800128f0() noexcept {
    return kFunction_0x1800128f0;
}

// 0x180012990 FUN_180012990
// source: re/dump/decompile/0x180012990_FUN_180012990.c
// size: 8 bytes; thunk: false
// body sha256: cd45aceaa5fd2f8cd3b36e77ca680956117ef587bbcca77f920b7abdb44f3efe
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180012990{
    "0x180012990",
    "FUN_180012990",
    R"F180012990S(undefined FUN_180012990())F180012990S",
    R"B180012990(// 0x180012990  FUN_180012990
// size=8 thunk=false
// signature: undefined FUN_180012990()
// status: ok


undefined * FUN_180012990(void)

{
  return &DAT_1803ff2a0;
}


)B180012990",
    "cd45aceaa5fd2f8cd3b36e77ca680956117ef587bbcca77f920b7abdb44f3efe",
    R"F180012990C()F180012990C",
    R"F180012990D(DAT_1803ff2a0)F180012990D",
    R"F180012990T()F180012990T",
    R"F180012990F(10: return &DAT_1803ff2a0;)F180012990F",
    R"F180012990U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff2a0.)F180012990U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180012990() noexcept {
    return kFunction_0x180012990;
}

// 0x1800129a0 FUN_1800129a0
// source: re/dump/decompile/0x1800129a0_FUN_1800129a0.c
// size: 8 bytes; thunk: false
// body sha256: 9a7f78be6b40941f4820be6bda72efc6409be519576011c45d7b84c5cd8b020b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800129a0{
    "0x1800129a0",
    "FUN_1800129a0",
    R"F1800129a0S(undefined FUN_1800129a0())F1800129a0S",
    R"B1800129a0(// 0x1800129a0  FUN_1800129a0
// size=8 thunk=false
// signature: undefined FUN_1800129a0()
// status: ok


undefined * FUN_1800129a0(void)

{
  return &DAT_180426220;
}


)B1800129a0",
    "9a7f78be6b40941f4820be6bda72efc6409be519576011c45d7b84c5cd8b020b",
    R"F1800129a0C()F1800129a0C",
    R"F1800129a0D(DAT_180426220)F1800129a0D",
    R"F1800129a0T()F1800129a0T",
    R"F1800129a0F(10: return &DAT_180426220;)F1800129a0F",
    R"F1800129a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180426220.)F1800129a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800129a0() noexcept {
    return kFunction_0x1800129a0;
}

// 0x1800129b0 FUN_1800129b0
// source: re/dump/decompile/0x1800129b0_FUN_1800129b0.c
// size: 69 bytes; thunk: false
// body sha256: 417c18701fbf64e8dc5665bc3b3d6f8726bc599be7882f3a23636494b959a366
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800129b0{
    "0x1800129b0",
    "FUN_1800129b0",
    R"F1800129b0S(undefined FUN_1800129b0())F1800129b0S",
    R"B1800129b0(// 0x1800129b0  FUN_1800129b0
// size=69 thunk=false
// signature: undefined FUN_1800129b0()
// status: ok


void FUN_1800129b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (undefined8 *)FUN_180012990();
  __stdio_common_vfprintf(*puVar1,param_1,param_2,0,&local_res18);
  return;
}


)B1800129b0",
    "417c18701fbf64e8dc5665bc3b3d6f8726bc599be7882f3a23636494b959a366",
    R"F1800129b0C(FUN_180012990)F1800129b0C",
    R"F1800129b0D()F1800129b0D",
    R"F1800129b0T()F1800129b0T",
    R"F1800129b0F(18: return;)F1800129b0F",
    R"F1800129b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800129b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800129b0() noexcept {
    return kFunction_0x1800129b0;
}

// 0x180012a00 FUN_180012a00
// source: re/dump/decompile/0x180012a00_FUN_180012a00.c
// size: 94 bytes; thunk: false
// body sha256: 7da1efe79784535bcfd898a5f0d31913aa2a82ba59731a38eaae9fcb568bb2c9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180012a00{
    "0x180012a00",
    "FUN_180012a00",
    R"F180012a00S(undefined FUN_180012a00())F180012a00S",
    R"B180012a00(// 0x180012a00  FUN_180012a00
// size=94 thunk=false
// signature: undefined FUN_180012a00()
// status: ok


int FUN_180012a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180012990();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,0xffffffffffffffff,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


)B180012a00",
    "7da1efe79784535bcfd898a5f0d31913aa2a82ba59731a38eaae9fcb568bb2c9",
    R"F180012a00C(FUN_180012990)F180012a00C",
    R"F180012a00D()F180012a00D",
    R"F180012a00T()F180012a00T",
    R"F180012a00F(19: if (iVar1 < 0) {
22: return iVar1;)F180012a00F",
    R"F180012a00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180012a00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180012a00() noexcept {
    return kFunction_0x180012a00;
}

// 0x180012a60 FUN_180012a60
// source: re/dump/decompile/0x180012a60_FUN_180012a60.c
// size: 88 bytes; thunk: false
// body sha256: 32b3f46e8edad6e234ed566c42b6c6d5fc584272b15b51866776d3e02c915106
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180012a60{
    "0x180012a60",
    "FUN_180012a60",
    R"F180012a60S(undefined FUN_180012a60())F180012a60S",
    R"B180012a60(// 0x180012a60  FUN_180012a60
// size=88 thunk=false
// signature: undefined FUN_180012a60()
// status: ok


int FUN_180012a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_180012990();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


)B180012a60",
    "32b3f46e8edad6e234ed566c42b6c6d5fc584272b15b51866776d3e02c915106",
    R"F180012a60C(FUN_180012990)F180012a60C",
    R"F180012a60D()F180012a60D",
    R"F180012a60T()F180012a60T",
    R"F180012a60F(17: if (iVar1 < 0) {
20: return iVar1;)F180012a60F",
    R"F180012a60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180012a60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180012a60() noexcept {
    return kFunction_0x180012a60;
}

// 0x180012ac0 FUN_180012ac0
// source: re/dump/decompile/0x180012ac0_FUN_180012ac0.c
// size: 92 bytes; thunk: false
// body sha256: cad580d0569ae921317c95c481a62cf0e1e0d342a3f4de3eede4a9a7a881044d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180012ac0{
    "0x180012ac0",
    "FUN_180012ac0",
    R"F180012ac0S(undefined FUN_180012ac0())F180012ac0S",
    R"B180012ac0(// 0x180012ac0  FUN_180012ac0
// size=92 thunk=false
// signature: undefined FUN_180012ac0()
// status: ok


int FUN_180012ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180012990();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


)B180012ac0",
    "cad580d0569ae921317c95c481a62cf0e1e0d342a3f4de3eede4a9a7a881044d",
    R"F180012ac0C(FUN_180012990)F180012ac0C",
    R"F180012ac0D()F180012ac0D",
    R"F180012ac0T()F180012ac0T",
    R"F180012ac0F(17: if (iVar1 < 0) {
20: return iVar1;)F180012ac0F",
    R"F180012ac0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180012ac0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180012ac0() noexcept {
    return kFunction_0x180012ac0;
}

// 0x180012b20 FUN_180012b20
// source: re/dump/decompile/0x180012b20_FUN_180012b20.c
// size: 98 bytes; thunk: false
// body sha256: 63757964286790375ed581185408e1c2259b57af44c0dbc552f95a659c8abb86
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180012b20{
    "0x180012b20",
    "FUN_180012b20",
    R"F180012b20S(undefined FUN_180012b20())F180012b20S",
    R"B180012b20(// 0x180012b20  FUN_180012b20
// size=98 thunk=false
// signature: undefined FUN_180012b20()
// status: ok


int FUN_180012b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_180012990();
  iVar1 = __stdio_common_vsnprintf_s(*puVar2,param_1,param_2,param_3,param_4,0,&stack0x00000028);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


)B180012b20",
    "63757964286790375ed581185408e1c2259b57af44c0dbc552f95a659c8abb86",
    R"F180012b20C(FUN_180012990)F180012b20C",
    R"F180012b20D()F180012b20D",
    R"F180012b20T()F180012b20T",
    R"F180012b20F(15: if (iVar1 < 0) {
18: return iVar1;)F180012b20F",
    R"F180012b20U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180012b20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180012b20() noexcept {
    return kFunction_0x180012b20;
}

// 0x180012b90 FUN_180012b90
// source: re/dump/decompile/0x180012b90_FUN_180012b90.c
// size: 86 bytes; thunk: false
// body sha256: a704f2be73dcb2365ac0dff1136b4948bc207011cc7c860c2136c4bdd340f9fc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180012b90{
    "0x180012b90",
    "FUN_180012b90",
    R"F180012b90S(undefined FUN_180012b90())F180012b90S",
    R"B180012b90(// 0x180012b90  FUN_180012b90
// size=86 thunk=false
// signature: undefined FUN_180012b90()
// status: ok


void FUN_180012b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (ulonglong *)FUN_1800129a0();
  __stdio_common_vsscanf(*puVar1 | 1,param_1,0xffffffffffffffff,param_2,0,&local_res18);
  return;
}


)B180012b90",
    "a704f2be73dcb2365ac0dff1136b4948bc207011cc7c860c2136c4bdd340f9fc",
    R"F180012b90C(FUN_1800129a0)F180012b90C",
    R"F180012b90D()F180012b90D",
    R"F180012b90T()F180012b90T",
    R"F180012b90F(18: return;)F180012b90F",
    R"F180012b90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180012b90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180012b90() noexcept {
    return kFunction_0x180012b90;
}

// 0x180012bf0 FUN_180012bf0
// source: re/dump/decompile/0x180012bf0_FUN_180012bf0.c
// size: 474 bytes; thunk: false
// body sha256: c99e1522d605ba50e99ce368140827fbf07e02f60207c63f776f6eab6662ac14
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180012bf0{
    "0x180012bf0",
    "FUN_180012bf0",
    R"F180012bf0S(undefined FUN_180012bf0())F180012bf0S",
    R"B180012bf0(// 0x180012bf0  FUN_180012bf0
// size=474 thunk=false
// signature: undefined FUN_180012bf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180012bf0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [32];
  undefined8 uVar9;
  undefined1 (*pauVar10) [32];
  undefined1 auVar11 [16];
  
  uVar4 = 0;
  pauVar8 = param_1;
  pauVar10 = param_2;
  if ((DAT_1803feb18 != 0) && (uVar3 = uVar4, 0xf < param_3)) {
    do {
      auVar2 = vpcmpeqw_avx2(*pauVar8,*pauVar10);
      uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar5 != 0xffffffff) {
        uVar5 = ~uVar5;
        uVar6 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        uVar9 = 1;
        if (*(ushort *)(*param_1 + ((uVar6 >> 1) + uVar3) * 2) <
            *(ushort *)(*param_2 + ((uVar6 >> 1) + uVar3) * 2)) {
          uVar9 = 0xffffffff;
        }
        return uVar9;
      }
      uVar4 = uVar3 + 0x10;
      pauVar8 = pauVar8 + 1;
      pauVar10 = pauVar10 + 1;
      uVar7 = uVar3 + 0x20;
      uVar3 = uVar4;
    } while (uVar7 <= param_3);
  }
  uVar3 = uVar4 + 8;
  while (uVar3 <= param_3) {
    auVar11._0_2_ = -(ushort)(*(short *)*pauVar8 == *(short *)*pauVar10);
    auVar11._2_2_ = -(ushort)(*(short *)(*pauVar8 + 2) == *(short *)(*pauVar10 + 2));
    auVar11._4_2_ = -(ushort)(*(short *)(*pauVar8 + 4) == *(short *)(*pauVar10 + 4));
    auVar11._6_2_ = -(ushort)(*(short *)(*pauVar8 + 6) == *(short *)(*pauVar10 + 6));
    auVar11._8_2_ = -(ushort)(*(short *)(*pauVar8 + 8) == *(short *)(*pauVar10 + 8));
    auVar11._10_2_ = -(ushort)(*(short *)(*pauVar8 + 10) == *(short *)(*pauVar10 + 10));
    auVar11._12_2_ = -(ushort)(*(short *)(*pauVar8 + 0xc) == *(short *)(*pauVar10 + 0xc));
    auVar11._14_2_ = -(ushort)(*(short *)(*pauVar8 + 0xe) == *(short *)(*pauVar10 + 0xe));
    uVar1 = (ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
            (ushort)((byte)(auVar11._14_2_ >> 7) & 1) << 0xe | auVar11._14_2_ & 0x8000;
    if (uVar1 != 0xffff) {
      uVar6 = ~(uint)uVar1;
      uVar5 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      uVar9 = 1;
      if (*(ushort *)(*param_1 + ((uVar5 >> 1) + uVar4) * 2) <
          *(ushort *)(*param_2 + ((uVar5 >> 1) + uVar4) * 2)) {
        uVar9 = 0xffffffff;
      }
      return uVar9;
    }
    pauVar8 = (undefined1 (*) [32])(*pauVar8 + 0x10);
    pauVar10 = (undefined1 (*) [32])(*pauVar10 + 0x10);
    uVar3 = uVar4 + 0x10;
    uVar4 = uVar4 + 8;
  }
  uVar3 = uVar4;
  if (uVar4 + 4 <= param_3) {
    uVar3 = uVar4 + 4;
    if (*(ulonglong *)*pauVar8 != *(ulonglong *)*pauVar10) {
      uVar7 = *(ulonglong *)*pauVar10 ^ *(ulonglong *)*pauVar8;
      uVar3 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      uVar9 = 1;
      if (*(ushort *)(*param_1 + ((uVar3 >> 4) + uVar4) * 2) <
          *(ushort *)(*param_2 + ((uVar3 >> 4) + uVar4) * 2)) {
        uVar9 = 0xffffffff;
      }
      return uVar9;
    }
  }
  while( true ) {
    if (param_3 <= uVar3) {
      return 0;
    }
    if (*(ushort *)(*param_1 + uVar3 * 2) != *(ushort *)(*param_2 + uVar3 * 2)) break;
    uVar3 = uVar3 + 1;
  }
  uVar9 = 1;
  if (*(ushort *)(*param_1 + uVar3 * 2) < *(ushort *)(*param_2 + uVar3 * 2)) {
    uVar9 = 0xffffffff;
  }
  return uVar9;
}


)B180012bf0",
    "c99e1522d605ba50e99ce368140827fbf07e02f60207c63f776f6eab6662ac14",
    R"F180012bf0C()F180012bf0C",
    R"F180012bf0D(DAT_1803feb18)F180012bf0D",
    R"F180012bf0T()F180012bf0T",
    R"F180012bf0F(27: if ((DAT_1803feb18 != 0) && (uVar3 = uVar4, 0xf < param_3)) {
28: do {
56: if (uVar5 != 0xffffffff) {
59: if (uVar5 != 0) {
60: for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
64: if (*(ushort *)(*param_1 + ((uVar6 >> 1) + uVar3) * 2) <
68: return uVar9;
78: while (uVar3 <= param_3) {
101: if (uVar1 != 0xffff) {
104: if (uVar6 != 0) {
105: for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
109: if (*(ushort *)(*param_1 + ((uVar5 >> 1) + uVar4) * 2) <
113: return uVar9;
121: if (uVar4 + 4 <= param_3) {
123: if (*(ulonglong *)*pauVar8 != *(ulonglong *)*pauVar10) {
126: if (uVar7 != 0) {
127: for (; (uVar7 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
131: if (*(ushort *)(*param_1 + ((uVar3 >> 4) + uVar4) * 2) <
135: return uVar9;
138: while( true ) {
139: if (param_3 <= uVar3) {
140: return 0;
142: if (*(ushort *)(*param_1 + uVar3 * 2) != *(ushort *)(*param_2 + uVar3 * 2)) break;
146: if (*(ushort *)(*param_1 + uVar3 * 2) < *(ushort *)(*param_2 + uVar3 * 2)) {
149: return uVar9;)F180012bf0F",
    R"F180012bf0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803feb18.)F180012bf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180012bf0() noexcept {
    return kFunction_0x180012bf0;
}

// 0x180012dd0 FUN_180012dd0
// source: re/dump/decompile/0x180012dd0_FUN_180012dd0.c
// size: 51 bytes; thunk: false
// body sha256: ed3bc750ec6ce5bfdd66c4f6d1891d32fe6bb621a7bebe627e529ddba36a469d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180012dd0{
    "0x180012dd0",
    "FUN_180012dd0",
    R"F180012dd0S(undefined FUN_180012dd0())F180012dd0S",
    R"B180012dd0(// 0x180012dd0  FUN_180012dd0
// size=51 thunk=false
// signature: undefined FUN_180012dd0()
// status: ok


undefined8 * FUN_180012dd0(undefined8 *param_1,longlong param_2)

{
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  return param_1;
}


)B180012dd0",
    "ed3bc750ec6ce5bfdd66c4f6d1891d32fe6bb621a7bebe627e529ddba36a469d",
    R"F180012dd0C()F180012dd0C",
    R"F180012dd0D()F180012dd0D",
    R"F180012dd0T()F180012dd0T",
    R"F180012dd0F(14: return param_1;)F180012dd0F",
    R"F180012dd0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180012dd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180012dd0() noexcept {
    return kFunction_0x180012dd0;
}

// 0x180012e10 FUN_180012e10
// source: re/dump/decompile/0x180012e10_FUN_180012e10.c
// size: 30 bytes; thunk: false
// body sha256: cf3b9d188d68a5f584516947d3bd5c5167d60f45a431f1b5a317a145c658b209
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180012e10{
    "0x180012e10",
    "FUN_180012e10",
    R"F180012e10S(undefined FUN_180012e10())F180012e10S",
    R"B180012e10(// 0x180012e10  FUN_180012e10
// size=30 thunk=false
// signature: undefined FUN_180012e10()
// status: ok


void FUN_180012e10(undefined8 *param_1)

{
  *param_1 = vftable_std_exception;
  __std_exception_destroy(param_1 + 1);
  return;
}


)B180012e10",
    "cf3b9d188d68a5f584516947d3bd5c5167d60f45a431f1b5a317a145c658b209",
    R"F180012e10C()F180012e10C",
    R"F180012e10D()F180012e10D",
    R"F180012e10T()F180012e10T",
    R"F180012e10F(12: return;)F180012e10F",
    R"F180012e10U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180012e10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180012e10() noexcept {
    return kFunction_0x180012e10;
}

// 0x180012e30 vfunc_shared_180012e30
// source: re/dump/decompile/0x180012e30_vfunc_shared_180012e30.c
// size: 19 bytes; thunk: false
// body sha256: ccb06d7756a371b4e754cb0681c73a3a50572bc3225cba28b3de948a60d4dccb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180012e30{
    "0x180012e30",
    "vfunc_shared_180012e30",
    R"F180012e30S(undefined vfunc_shared_180012e30())F180012e30S",
    R"B180012e30(// 0x180012e30  vfunc_shared_180012e30
// size=19 thunk=false
// signature: undefined vfunc_shared_180012e30()
// status: ok


char * vfunc_shared_180012e30(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}


)B180012e30",
    "ccb06d7756a371b4e754cb0681c73a3a50572bc3225cba28b3de948a60d4dccb",
    R"F180012e30C()F180012e30C",
    R"F180012e30D()F180012e30D",
    R"F180012e30T("Unknown exception")F180012e30T",
    R"F180012e30F(13: if (*(char **)(param_1 + 8) != (char *)0x0) {
16: return pcVar1;)F180012e30F",
    R"F180012e30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180012e30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180012e30() noexcept {
    return kFunction_0x180012e30;
}

// 0x180012e50 std_exception_vfunc00
// source: re/dump/decompile/0x180012e50_std_exception_vfunc00.c
// size: 67 bytes; thunk: false
// body sha256: dff17a19c47f4c1742ce20321050cfde03086a70003a96794bb08e25e7cc9b3a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180012e50{
    "0x180012e50",
    "std_exception_vfunc00",
    R"F180012e50S(undefined std_exception_vfunc00())F180012e50S",
    R"B180012e50(// 0x180012e50  std_exception_vfunc00
// size=67 thunk=false
// signature: undefined std_exception_vfunc00()
// status: ok


undefined8 * std_exception_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_std_exception;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B180012e50",
    "dff17a19c47f4c1742ce20321050cfde03086a70003a96794bb08e25e7cc9b3a",
    R"F180012e50C()F180012e50C",
    R"F180012e50D()F180012e50D",
    R"F180012e50T()F180012e50T",
    R"F180012e50F(12: if ((param_2 & 1) != 0) {
15: return param_1;)F180012e50F",
    R"F180012e50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180012e50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180012e50() noexcept {
    return kFunction_0x180012e50;
}

// 0x180012ea0 vfunc_shared_180012ea0
// source: re/dump/decompile/0x180012ea0_vfunc_shared_180012ea0.c
// size: 72 bytes; thunk: false
// body sha256: 206be8e45b7229ef0205838d9cb4530fada65c414891a8de8d1030818f85326e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180012ea0{
    "0x180012ea0",
    "vfunc_shared_180012ea0",
    R"F180012ea0S(undefined vfunc_shared_180012ea0())F180012ea0S",
    R"B180012ea0(// 0x180012ea0  vfunc_shared_180012ea0
// size=72 thunk=false
// signature: undefined vfunc_shared_180012ea0()
// status: ok


undefined8 * vfunc_shared_180012ea0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_std_exception;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B180012ea0",
    "206be8e45b7229ef0205838d9cb4530fada65c414891a8de8d1030818f85326e",
    R"F180012ea0C()F180012ea0C",
    R"F180012ea0D()F180012ea0D",
    R"F180012ea0T()F180012ea0T",
    R"F180012ea0F(12: if ((param_2 & 1) != 0) {
15: return param_1;)F180012ea0F",
    R"F180012ea0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180012ea0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180012ea0() noexcept {
    return kFunction_0x180012ea0;
}

// 0x180012ef0 FUN_180012ef0
// source: re/dump/decompile/0x180012ef0_FUN_180012ef0.c
// size: 35 bytes; thunk: false
// body sha256: 3942ed514050d7977aae8305381d4dfeb3631394ca62d1c7ce5cdab1ca5a6044
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180012ef0{
    "0x180012ef0",
    "FUN_180012ef0",
    R"F180012ef0S(undefined FUN_180012ef0())F180012ef0S",
    R"B180012ef0(// 0x180012ef0  FUN_180012ef0
// size=35 thunk=false
// signature: undefined FUN_180012ef0()
// status: ok


void FUN_180012ef0(undefined8 *param_1)

{
  *param_1 = vftable_std_exception;
  __std_exception_destroy(param_1 + 1);
  return;
}


)B180012ef0",
    "3942ed514050d7977aae8305381d4dfeb3631394ca62d1c7ce5cdab1ca5a6044",
    R"F180012ef0C()F180012ef0C",
    R"F180012ef0D()F180012ef0D",
    R"F180012ef0T()F180012ef0T",
    R"F180012ef0F(12: return;)F180012ef0F",
    R"F180012ef0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180012ef0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180012ef0() noexcept {
    return kFunction_0x180012ef0;
}

// 0x180012f20 FUN_180012f20
// source: re/dump/decompile/0x180012f20_FUN_180012f20.c
// size: 58 bytes; thunk: false
// body sha256: 73f9797a201facd8d023b550e1f3b54bd092151e58e4fee4df5e9b383bb50cb8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180012f20{
    "0x180012f20",
    "FUN_180012f20",
    R"F180012f20S(undefined FUN_180012f20())F180012f20S",
    R"B180012f20(// 0x180012f20  FUN_180012f20
// size=58 thunk=false
// signature: undefined FUN_180012f20()
// status: ok


undefined8 * FUN_180012f20(undefined8 *param_1)

{
  *param_1 = vftable_std_exception;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = vftable_std_bad_alloc;
  *param_1 = vftable_std_bad_array_new_length;
  return param_1;
}


)B180012f20",
    "73f9797a201facd8d023b550e1f3b54bd092151e58e4fee4df5e9b383bb50cb8",
    R"F180012f20C()F180012f20C",
    R"F180012f20D()F180012f20D",
    R"F180012f20T("bad array new length")F180012f20T",
    R"F180012f20F(15: return param_1;)F180012f20F",
    R"F180012f20U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180012f20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180012f20() noexcept {
    return kFunction_0x180012f20;
}

// 0x180012f60 vfunc_shared_180012f60
// source: re/dump/decompile/0x180012f60_vfunc_shared_180012f60.c
// size: 72 bytes; thunk: false
// body sha256: 5af9937e665d87ab2efa60256ef23b5d1ebed3dc9c2ce7ff6aa3d8da01b798e5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180012f60{
    "0x180012f60",
    "vfunc_shared_180012f60",
    R"F180012f60S(undefined vfunc_shared_180012f60())F180012f60S",
    R"B180012f60(// 0x180012f60  vfunc_shared_180012f60
// size=72 thunk=false
// signature: undefined vfunc_shared_180012f60()
// status: ok


undefined8 * vfunc_shared_180012f60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_std_exception;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B180012f60",
    "5af9937e665d87ab2efa60256ef23b5d1ebed3dc9c2ce7ff6aa3d8da01b798e5",
    R"F180012f60C()F180012f60C",
    R"F180012f60D()F180012f60D",
    R"F180012f60T()F180012f60T",
    R"F180012f60F(12: if ((param_2 & 1) != 0) {
15: return param_1;)F180012f60F",
    R"F180012f60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180012f60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180012f60() noexcept {
    return kFunction_0x180012f60;
}

// 0x180012fb0 FUN_180012fb0
// source: re/dump/decompile/0x180012fb0_FUN_180012fb0.c
// size: 35 bytes; thunk: false
// body sha256: ecad74605e5b5404fdb7104825e151c43ecc874c9773849120a4864dcf413f4d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180012fb0{
    "0x180012fb0",
    "FUN_180012fb0",
    R"F180012fb0S(undefined FUN_180012fb0())F180012fb0S",
    R"B180012fb0(// 0x180012fb0  FUN_180012fb0
// size=35 thunk=false
// signature: undefined FUN_180012fb0()
// status: ok


void FUN_180012fb0(undefined8 *param_1)

{
  *param_1 = vftable_std_exception;
  __std_exception_destroy(param_1 + 1);
  return;
}


)B180012fb0",
    "ecad74605e5b5404fdb7104825e151c43ecc874c9773849120a4864dcf413f4d",
    R"F180012fb0C()F180012fb0C",
    R"F180012fb0D()F180012fb0D",
    R"F180012fb0T()F180012fb0T",
    R"F180012fb0F(12: return;)F180012fb0F",
    R"F180012fb0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180012fb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180012fb0() noexcept {
    return kFunction_0x180012fb0;
}

// 0x180012fe0 FUN_180012fe0
// source: re/dump/decompile/0x180012fe0_FUN_180012fe0.c
// size: 31 bytes; thunk: false
// body sha256: ca2f150a255669da3c03dae7b9aed8729f107183e05f1d82aedfd3dd91590012
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180012fe0{
    "0x180012fe0",
    "FUN_180012fe0",
    R"F180012fe0S(undefined FUN_180012fe0())F180012fe0S",
    R"B180012fe0(// 0x180012fe0  FUN_180012fe0
// size=31 thunk=false
// signature: undefined FUN_180012fe0()
// status: ok


void FUN_180012fe0(void)

{
  undefined1 local_28 [40];
  
  FUN_180012f20(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1803d5900);
}


)B180012fe0",
    "ca2f150a255669da3c03dae7b9aed8729f107183e05f1d82aedfd3dd91590012",
    R"F180012fe0C(FUN_180012f20)F180012fe0C",
    R"F180012fe0D(DAT_1803d5900)F180012fe0D",
    R"F180012fe0T()F180012fe0T",
    R"F180012fe0F(linear body (no explicit branch keyword found))F180012fe0F",
    R"F180012fe0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803d5900.)F180012fe0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180012fe0() noexcept {
    return kFunction_0x180012fe0;
}

// 0x180013000 FUN_180013000
// source: re/dump/decompile/0x180013000_FUN_180013000.c
// size: 76 bytes; thunk: false
// body sha256: a44b9d6b7763c6067e45a08c3260b3ea98fa2cdc1791ef358d1a4ee62a38d813
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013000{
    "0x180013000",
    "FUN_180013000",
    R"F180013000S(undefined FUN_180013000())F180013000S",
    R"B180013000(// 0x180013000  FUN_180013000
// size=76 thunk=false
// signature: undefined FUN_180013000()
// status: ok


undefined8 * FUN_180013000(undefined8 *param_1,longlong param_2)

{
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = vftable_std_bad_alloc;
  *param_1 = vftable_std_bad_array_new_length;
  return param_1;
}


)B180013000",
    "a44b9d6b7763c6067e45a08c3260b3ea98fa2cdc1791ef358d1a4ee62a38d813",
    R"F180013000C()F180013000C",
    R"F180013000D()F180013000D",
    R"F180013000T()F180013000T",
    R"F180013000F(16: return param_1;)F180013000F",
    R"F180013000U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013000U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013000() noexcept {
    return kFunction_0x180013000;
}

// 0x180013050 FUN_180013050
// source: re/dump/decompile/0x180013050_FUN_180013050.c
// size: 66 bytes; thunk: false
// body sha256: e7ae38a27473d62121343bdbd9da4af14b0c373b56f434c23a5a647c04cbf965
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013050{
    "0x180013050",
    "FUN_180013050",
    R"F180013050S(undefined FUN_180013050())F180013050S",
    R"B180013050(// 0x180013050  FUN_180013050
// size=66 thunk=false
// signature: undefined FUN_180013050()
// status: ok


undefined8 * FUN_180013050(undefined8 *param_1,longlong param_2)

{
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = vftable_std_bad_alloc;
  return param_1;
}


)B180013050",
    "e7ae38a27473d62121343bdbd9da4af14b0c373b56f434c23a5a647c04cbf965",
    R"F180013050C()F180013050C",
    R"F180013050D()F180013050D",
    R"F180013050T()F180013050T",
    R"F180013050F(15: return param_1;)F180013050F",
    R"F180013050U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013050U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013050() noexcept {
    return kFunction_0x180013050;
}

// 0x1800130a0 FUN_1800130a0
// source: re/dump/decompile/0x1800130a0_FUN_1800130a0.c
// size: 18 bytes; thunk: false
// body sha256: 36c77702066358dc3e3dc65ea131f2d263065d12bbe61d86920e5be77f32ca12
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800130a0{
    "0x1800130a0",
    "FUN_1800130a0",
    R"F1800130a0S(undefined FUN_1800130a0())F1800130a0S",
    R"B1800130a0(// 0x1800130a0  FUN_1800130a0
// size=18 thunk=false
// signature: undefined FUN_1800130a0()
// status: ok


void FUN_1800130a0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


)B1800130a0",
    "36c77702066358dc3e3dc65ea131f2d263065d12bbe61d86920e5be77f32ca12",
    R"F1800130a0C()F1800130a0C",
    R"F1800130a0D()F1800130a0D",
    R"F1800130a0T("string too long")F1800130a0T",
    R"F1800130a0F(15: return;)F1800130a0F",
    R"F1800130a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 13: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 14: (*pcVar1)();.)F1800130a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800130a0() noexcept {
    return kFunction_0x1800130a0;
}

// 0x1800130c0 FUN_1800130c0
// source: re/dump/decompile/0x1800130c0_FUN_1800130c0.c
// size: 56 bytes; thunk: false
// body sha256: 6c39a0b705dac3388ea27d474a05f86e558657cd159b8c6c7e347db4d4d847f9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800130c0{
    "0x1800130c0",
    "FUN_1800130c0",
    R"F1800130c0S(undefined FUN_1800130c0())F1800130c0S",
    R"B1800130c0(// 0x1800130c0  FUN_1800130c0
// size=56 thunk=false
// signature: undefined FUN_1800130c0()
// status: ok


undefined8 * FUN_1800130c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_18001d080();
  return param_1;
}


)B1800130c0",
    "6c39a0b705dac3388ea27d474a05f86e558657cd159b8c6c7e347db4d4d847f9",
    R"F1800130c0C(FUN_18001d080)F1800130c0C",
    R"F1800130c0D()F1800130c0D",
    R"F1800130c0T()F1800130c0T",
    R"F1800130c0F(15: return param_1;)F1800130c0F",
    R"F1800130c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800130c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800130c0() noexcept {
    return kFunction_0x1800130c0;
}

// 0x180013100 FUN_180013100
// source: re/dump/decompile/0x180013100_FUN_180013100.c
// size: 120 bytes; thunk: false
// body sha256: 2a67564fe62d0c3c2abb0b6f67328ce0724d6079d1e55e6dc6d60c3507920c12
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013100{
    "0x180013100",
    "FUN_180013100",
    R"F180013100S(undefined FUN_180013100())F180013100S",
    R"B180013100(// 0x180013100  FUN_180013100
// size=120 thunk=false
// signature: undefined FUN_180013100()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180013100(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  char *local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  local_20 = "Invalid module passed.";
  local_18 = 1;
  local_28 = param_1;
  __std_exception_copy(&local_20);
  *param_1 = vftable_std_logic_error;
  *param_1 = vftable_std_invalid_argument;
  return param_1;
}


)B180013100",
    "2a67564fe62d0c3c2abb0b6f67328ce0724d6079d1e55e6dc6d60c3507920c12",
    R"F180013100C()F180013100C",
    R"F180013100D(DAT_1803da4c0)F180013100D",
    R"F180013100T("Invalid module passed.")F180013100T",
    R"F180013100F(28: return param_1;)F180013100F",
    R"F180013100U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180013100U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013100() noexcept {
    return kFunction_0x180013100;
}

// 0x180013180 FUN_180013180
// source: re/dump/decompile/0x180013180_FUN_180013180.c
// size: 66 bytes; thunk: false
// body sha256: cddb7759c8f77d82ee93f0cf3255cbb8bcea99a39cb01feda20d496947f5c522
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013180{
    "0x180013180",
    "FUN_180013180",
    R"F180013180S(undefined FUN_180013180())F180013180S",
    R"B180013180(// 0x180013180  FUN_180013180
// size=66 thunk=false
// signature: undefined FUN_180013180()
// status: ok


undefined8 * FUN_180013180(undefined8 *param_1,longlong param_2)

{
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = vftable_std_runtime_error;
  return param_1;
}


)B180013180",
    "cddb7759c8f77d82ee93f0cf3255cbb8bcea99a39cb01feda20d496947f5c522",
    R"F180013180C()F180013180C",
    R"F180013180D()F180013180D",
    R"F180013180T()F180013180T",
    R"F180013180F(15: return param_1;)F180013180F",
    R"F180013180U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013180U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013180() noexcept {
    return kFunction_0x180013180;
}

// 0x1800131d0 std__Generic_error_category_vfunc03
// source: re/dump/decompile/0x1800131d0_std__Generic_error_category_vfunc03.c
// size: 11 bytes; thunk: false
// body sha256: 68a93d5e14fdc30299448a5a8abf8ffa6895a80bd16107a97a43c806d3f8a94e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800131d0{
    "0x1800131d0",
    "std__Generic_error_category_vfunc03",
    R"F1800131d0S(undefined std__Generic_error_category_vfunc03())F1800131d0S",
    R"B1800131d0(// 0x1800131d0  std__Generic_error_category_vfunc03
// size=11 thunk=false
// signature: undefined std__Generic_error_category_vfunc03()
// status: ok


undefined4 *
std__Generic_error_category_vfunc03(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}


)B1800131d0",
    "68a93d5e14fdc30299448a5a8abf8ffa6895a80bd16107a97a43c806d3f8a94e",
    R"F1800131d0C()F1800131d0C",
    R"F1800131d0D()F1800131d0D",
    R"F1800131d0T()F1800131d0T",
    R"F1800131d0F(13: return param_2;)F1800131d0F",
    R"F1800131d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800131d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800131d0() noexcept {
    return kFunction_0x1800131d0;
}

// 0x1800131e0 vfunc_shared_1800131e0
// source: re/dump/decompile/0x1800131e0_vfunc_shared_1800131e0.c
// size: 63 bytes; thunk: false
// body sha256: 1e03ad0ed7c414797f4b3a4bd42d52755927fb3dbed195e4c36e109f7972a4f5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800131e0{
    "0x1800131e0",
    "vfunc_shared_1800131e0",
    R"F1800131e0S(undefined vfunc_shared_1800131e0())F1800131e0S",
    R"B1800131e0(// 0x1800131e0  vfunc_shared_1800131e0
// size=63 thunk=false
// signature: undefined vfunc_shared_1800131e0()
// status: ok


undefined8 vfunc_shared_1800131e0(longlong *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  undefined1 local_18 [16];
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x18))(param_1,local_18,param_2);
  if ((*(longlong *)(*(longlong *)(piVar1 + 2) + 8) == *(longlong *)(*(longlong *)(param_3 + 2) + 8)
      ) && (*piVar1 == *param_3)) {
    return 1;
  }
  return 0;
}


)B1800131e0",
    "1e03ad0ed7c414797f4b3a4bd42d52755927fb3dbed195e4c36e109f7972a4f5",
    R"F1800131e0C()F1800131e0C",
    R"F1800131e0D()F1800131e0D",
    R"F1800131e0T()F1800131e0T",
    R"F1800131e0F(14: if ((*(longlong *)(*(longlong *)(piVar1 + 2) + 8) == *(longlong *)(*(longlong *)(param_3 + 2) + 8)
16: return 1;
18: return 0;)F1800131e0F",
    R"F1800131e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 13: piVar1 = (int *)(**(code **)(*param_1 + 0x18))(param_1,local_18,param_2);.)F1800131e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800131e0() noexcept {
    return kFunction_0x1800131e0;
}

// 0x180013220 vfunc_shared_180013220
// source: re/dump/decompile/0x180013220_vfunc_shared_180013220.c
// size: 25 bytes; thunk: false
// body sha256: 70c2323ed24ab2e77d7f40031a4e77c6263ed0ee8f674ce5a0f7a9ad46b356ae
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013220{
    "0x180013220",
    "vfunc_shared_180013220",
    R"F180013220S(undefined vfunc_shared_180013220())F180013220S",
    R"B180013220(// 0x180013220  vfunc_shared_180013220
// size=25 thunk=false
// signature: undefined vfunc_shared_180013220()
// status: ok


longlong vfunc_shared_180013220(longlong param_1,int *param_2,int param_3)

{
  uint7 uVar1;
  
  uVar1 = (uint7)((ulonglong)*(longlong *)(param_2 + 2) >> 8);
  if ((*(longlong *)(param_1 + 8) == *(longlong *)(*(longlong *)(param_2 + 2) + 8)) &&
     (*param_2 == param_3)) {
    return CONCAT71(uVar1,1);
  }
  return (ulonglong)uVar1 << 8;
}


)B180013220",
    "70c2323ed24ab2e77d7f40031a4e77c6263ed0ee8f674ce5a0f7a9ad46b356ae",
    R"F180013220C()F180013220C",
    R"F180013220D()F180013220D",
    R"F180013220T()F180013220T",
    R"F180013220F(13: if ((*(longlong *)(param_1 + 8) == *(longlong *)(*(longlong *)(param_2 + 2) + 8)) &&
15: return CONCAT71(uVar1,1);
17: return (ulonglong)uVar1 << 8;)F180013220F",
    R"F180013220U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013220U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013220() noexcept {
    return kFunction_0x180013220;
}

// 0x180013240 FUN_180013240
// source: re/dump/decompile/0x180013240_FUN_180013240.c
// size: 17 bytes; thunk: false
// body sha256: bad93592e7fe3d16059eb16c6c365c6b06c252af3cde17dbc744a80127b92185
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013240{
    "0x180013240",
    "FUN_180013240",
    R"F180013240S(undefined FUN_180013240())F180013240S",
    R"B180013240(// 0x180013240  FUN_180013240
// size=17 thunk=false
// signature: undefined FUN_180013240()
// status: ok


undefined4 * FUN_180013240(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined ***)(param_1 + 2) = &PTR_vftable_std__Generic_error_category_1803e7370;
  return param_1;
}


)B180013240",
    "bad93592e7fe3d16059eb16c6c365c6b06c252af3cde17dbc744a80127b92185",
    R"F180013240C()F180013240C",
    R"F180013240D()F180013240D",
    R"F180013240T()F180013240T",
    R"F180013240F(12: return param_1;)F180013240F",
    R"F180013240U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013240U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013240() noexcept {
    return kFunction_0x180013240;
}

// 0x180013260 std__System_error_vfunc00
// source: re/dump/decompile/0x180013260_std__System_error_vfunc00.c
// size: 72 bytes; thunk: false
// body sha256: b11467cdc9a0a0e349232b140ba86b3b7f5ea0bea7a68323b08ee236aa7a33e0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013260{
    "0x180013260",
    "std__System_error_vfunc00",
    R"F180013260S(undefined std__System_error_vfunc00())F180013260S",
    R"B180013260(// 0x180013260  std__System_error_vfunc00
// size=72 thunk=false
// signature: undefined std__System_error_vfunc00()
// status: ok


undefined8 * std__System_error_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_std_exception;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B180013260",
    "b11467cdc9a0a0e349232b140ba86b3b7f5ea0bea7a68323b08ee236aa7a33e0",
    R"F180013260C()F180013260C",
    R"F180013260D()F180013260D",
    R"F180013260T()F180013260T",
    R"F180013260F(12: if ((param_2 & 1) != 0) {
15: return param_1;)F180013260F",
    R"F180013260U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013260U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013260() noexcept {
    return kFunction_0x180013260;
}

// 0x1800132b0 FUN_1800132b0
// source: re/dump/decompile/0x1800132b0_FUN_1800132b0.c
// size: 241 bytes; thunk: false
// body sha256: 1daf19dc3391512caa8c562f7230e56418cdf2bb30adfd9657768c57dcf1800d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800132b0{
    "0x1800132b0",
    "FUN_1800132b0",
    R"F1800132b0S(undefined FUN_1800132b0())F1800132b0S",
    R"B1800132b0(// 0x1800132b0  FUN_1800132b0
// size=241 thunk=false
// signature: undefined FUN_1800132b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800132b0(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 **local_60 [3];
  ulonglong local_48;
  undefined8 *local_40;
  undefined8 **local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  plVar3 = *(longlong **)(param_2 + 2);
  local_40 = param_1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_60,uVar1);
  local_68 = 1;
  local_38 = local_60;
  if (0xf < local_48) {
    local_38 = local_60[0];
  }
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  local_30 = 1;
  __std_exception_copy(&local_38);
  *param_1 = vftable_std_runtime_error;
  local_68 = 0;
  FUN_18020e450(local_60);
  *param_1 = vftable_std__System_error;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  param_1[4] = plVar3;
  *param_1 = vftable_std_system_error;
  return param_1;
}


)B1800132b0",
    "1daf19dc3391512caa8c562f7230e56418cdf2bb30adfd9657768c57dcf1800d",
    R"F1800132b0C(FUN_18020e450)F1800132b0C",
    R"F1800132b0D(DAT_1803da4c0)F1800132b0D",
    R"F1800132b0T()F1800132b0T",
    R"F1800132b0F(33: if (0xf < local_48) {
49: return param_1;)F1800132b0F",
    R"F1800132b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar3 + 0x10))(plVar3,local_60,uVar1);.)F1800132b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800132b0() noexcept {
    return kFunction_0x1800132b0;
}

// 0x1800133b0 FUN_1800133b0
// source: re/dump/decompile/0x1800133b0_FUN_1800133b0.c
// size: 392 bytes; thunk: false
// body sha256: 29c71d24e7a15ba7b079f51bb59eb77bd10b3046f5cf1845fdd17cb338e1124b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800133b0{
    "0x1800133b0",
    "FUN_1800133b0",
    R"F1800133b0S(undefined FUN_1800133b0())F1800133b0S",
    R"B1800133b0(// 0x1800133b0  FUN_1800133b0
// size=392 thunk=false
// signature: undefined FUN_1800133b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800133b0(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 **local_b0;
  longlong lStack_a8;
  longlong local_a0;
  ulonglong uStack_98;
  undefined8 *local_90;
  longlong *local_88;
  undefined8 *local_80 [4];
  undefined8 **local_60;
  undefined1 local_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  plVar3 = *(longlong **)(param_2 + 2);
  local_60 = local_80;
  local_90 = param_1;
  plVar4 = (longlong *)FUN_18016d4c0(local_80,param_3);
  local_88 = plVar4;
  if (plVar4[2] != 0) {
    FUN_18021aef0(plVar4,&DAT_18033e5b0,2);
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_60,uVar1);
  local_b8 = 2;
  pppuVar5 = &local_60;
  if (0xf < local_48) {
    pppuVar5 = (undefined8 ***)local_60;
  }
  FUN_18021aef0(plVar4,pppuVar5,local_50);
  local_b8 = 0;
  FUN_18020e450(&local_60);
  local_b0 = (undefined8 **)*plVar4;
  lStack_a8 = plVar4[1];
  local_a0 = plVar4[2];
  uStack_98 = plVar4[3];
  *(undefined1 *)plVar4 = 0;
  plVar4[2] = 0;
  plVar4[3] = 0xf;
  local_b8 = 1;
  FUN_18020e450(plVar4);
  local_60 = &local_b0;
  if (0xf < uStack_98) {
    local_60 = local_b0;
  }
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  local_58 = 1;
  __std_exception_copy(&local_60);
  *param_1 = vftable_std_runtime_error;
  local_b8 = 0;
  FUN_18020e450(&local_b0);
  *param_1 = vftable_std__System_error;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  param_1[4] = plVar3;
  *param_1 = vftable_std_system_error;
  return param_1;
}


)B1800133b0",
    "29c71d24e7a15ba7b079f51bb59eb77bd10b3046f5cf1845fdd17cb338e1124b",
    R"F1800133b0C(FUN_18016d4c0
FUN_18020e450
FUN_18021aef0)F1800133b0C",
    R"F1800133b0D(DAT_18033e5b0
DAT_1803da4c0)F1800133b0D",
    R"F1800133b0T()F1800133b0T",
    R"F1800133b0F(41: if (plVar4[2] != 0) {
47: if (0xf < local_48) {
63: if (0xf < uStack_98) {
79: return param_1;)F1800133b0F",
    R"F1800133b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 44: (**(code **)(*plVar3 + 0x10))(plVar3,&local_60,uVar1);.)F1800133b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800133b0() noexcept {
    return kFunction_0x1800133b0;
}

// 0x180013540 std_system_error_vfunc00
// source: re/dump/decompile/0x180013540_std_system_error_vfunc00.c
// size: 72 bytes; thunk: false
// body sha256: 0cf866c62d0fd8cddcdb94e9b9710fbbd83956946333beef1d1555c91958bf0c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013540{
    "0x180013540",
    "std_system_error_vfunc00",
    R"F180013540S(undefined std_system_error_vfunc00())F180013540S",
    R"B180013540(// 0x180013540  std_system_error_vfunc00
// size=72 thunk=false
// signature: undefined std_system_error_vfunc00()
// status: ok


undefined8 * std_system_error_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_std_exception;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B180013540",
    "0cf866c62d0fd8cddcdb94e9b9710fbbd83956946333beef1d1555c91958bf0c",
    R"F180013540C()F180013540C",
    R"F180013540D()F180013540D",
    R"F180013540T()F180013540T",
    R"F180013540F(12: if ((param_2 & 1) != 0) {
15: return param_1;)F180013540F",
    R"F180013540U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013540U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013540() noexcept {
    return kFunction_0x180013540;
}

// 0x180013590 FUN_180013590
// source: re/dump/decompile/0x180013590_FUN_180013590.c
// size: 35 bytes; thunk: false
// body sha256: e4cae28f9eb5af81f37eec6fbd887c2e38b6e245e78300e0a34e6286b4adb8e7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013590{
    "0x180013590",
    "FUN_180013590",
    R"F180013590S(undefined FUN_180013590())F180013590S",
    R"B180013590(// 0x180013590  FUN_180013590
// size=35 thunk=false
// signature: undefined FUN_180013590()
// status: ok


void FUN_180013590(undefined8 *param_1)

{
  *param_1 = vftable_std_exception;
  __std_exception_destroy(param_1 + 1);
  return;
}


)B180013590",
    "e4cae28f9eb5af81f37eec6fbd887c2e38b6e245e78300e0a34e6286b4adb8e7",
    R"F180013590C()F180013590C",
    R"F180013590D()F180013590D",
    R"F180013590T()F180013590T",
    R"F180013590F(12: return;)F180013590F",
    R"F180013590U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013590U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013590() noexcept {
    return kFunction_0x180013590;
}

// 0x1800135c0 FUN_1800135c0
// source: re/dump/decompile/0x1800135c0_FUN_1800135c0.c
// size: 56 bytes; thunk: false
// body sha256: 2026aa367ea51b7f744c2f8b427c8557993e5763576ad9c8053162b29bad9644
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800135c0{
    "0x1800135c0",
    "FUN_1800135c0",
    R"F1800135c0S(undefined FUN_1800135c0())F1800135c0S",
    R"B1800135c0(// 0x1800135c0  FUN_1800135c0
// size=56 thunk=false
// signature: undefined FUN_1800135c0()
// status: ok


void FUN_1800135c0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [56];
  
  puVar1 = (undefined4 *)FUN_180013240(local_48,param_1);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  FUN_1800132b0(local_38,&local_58);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_38,(ThrowInfo *)&DAT_1803d5960);
}


)B1800135c0",
    "2026aa367ea51b7f744c2f8b427c8557993e5763576ad9c8053162b29bad9644",
    R"F1800135c0C(FUN_180013240
FUN_1800132b0)F1800135c0C",
    R"F1800135c0D(DAT_1803d5960)F1800135c0D",
    R"F1800135c0T()F1800135c0T",
    R"F1800135c0F(linear body (no explicit branch keyword found))F1800135c0F",
    R"F1800135c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803d5960.)F1800135c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800135c0() noexcept {
    return kFunction_0x1800135c0;
}

// 0x180013600 FUN_180013600
// source: re/dump/decompile/0x180013600_FUN_180013600.c
// size: 104 bytes; thunk: false
// body sha256: f6bbb0379354644b25a9a4a062fda21a7c80d8c6f2bd40843cef7678cadf150d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013600{
    "0x180013600",
    "FUN_180013600",
    R"F180013600S(undefined FUN_180013600())F180013600S",
    R"B180013600(// 0x180013600  FUN_180013600
// size=104 thunk=false
// signature: undefined FUN_180013600()
// status: ok


undefined8 * FUN_180013600(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = vftable_std_runtime_error;
  *param_1 = vftable_std__System_error;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar1;
  *param_1 = vftable_std_system_error;
  return param_1;
}


)B180013600",
    "f6bbb0379354644b25a9a4a062fda21a7c80d8c6f2bd40843cef7678cadf150d",
    R"F180013600C()F180013600C",
    R"F180013600D()F180013600D",
    R"F180013600T()F180013600T",
    R"F180013600F(22: return param_1;)F180013600F",
    R"F180013600U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013600U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013600() noexcept {
    return kFunction_0x180013600;
}

// 0x180013670 FUN_180013670
// source: re/dump/decompile/0x180013670_FUN_180013670.c
// size: 94 bytes; thunk: false
// body sha256: dc3d6c14548b9b6d4de151d3b2578bf7d932140b145945cc9c96f15fdebffd12
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013670{
    "0x180013670",
    "FUN_180013670",
    R"F180013670S(undefined FUN_180013670())F180013670S",
    R"B180013670(// 0x180013670  FUN_180013670
// size=94 thunk=false
// signature: undefined FUN_180013670()
// status: ok


undefined8 * FUN_180013670(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = vftable_std_runtime_error;
  *param_1 = vftable_std__System_error;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar1;
  return param_1;
}


)B180013670",
    "dc3d6c14548b9b6d4de151d3b2578bf7d932140b145945cc9c96f15fdebffd12",
    R"F180013670C()F180013670C",
    R"F180013670D()F180013670D",
    R"F180013670T()F180013670T",
    R"F180013670F(21: return param_1;)F180013670F",
    R"F180013670U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013670U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013670() noexcept {
    return kFunction_0x180013670;
}

// 0x1800136e0 std__Generic_error_category_vfunc01
// source: re/dump/decompile/0x1800136e0_std__Generic_error_category_vfunc01.c
// size: 8 bytes; thunk: false
// body sha256: 3cd5b86da9044070b685c7d120a58d61866d5ebc1e633922ab16116c4de4a142
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800136e0{
    "0x1800136e0",
    "std__Generic_error_category_vfunc01",
    R"F1800136e0S(undefined std__Generic_error_category_vfunc01())F1800136e0S",
    R"B1800136e0(// 0x1800136e0  std__Generic_error_category_vfunc01
// size=8 thunk=false
// signature: undefined std__Generic_error_category_vfunc01()
// status: ok


char * std__Generic_error_category_vfunc01(void)

{
  return "generic";
}


)B1800136e0",
    "3cd5b86da9044070b685c7d120a58d61866d5ebc1e633922ab16116c4de4a142",
    R"F1800136e0C()F1800136e0C",
    R"F1800136e0D()F1800136e0D",
    R"F1800136e0T("generic")F1800136e0T",
    R"F1800136e0F(10: return "generic";)F1800136e0F",
    R"F1800136e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800136e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800136e0() noexcept {
    return kFunction_0x1800136e0;
}

// 0x1800136f0 std__Generic_error_category_vfunc02
// source: re/dump/decompile/0x1800136f0_std__Generic_error_category_vfunc02.c
// size: 105 bytes; thunk: false
// body sha256: 329400a27ee9f1a32243d5c564581dcf9ac358399b847b3abe2a732628cab959
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800136f0{
    "0x1800136f0",
    "std__Generic_error_category_vfunc02",
    R"F1800136f0S(undefined std__Generic_error_category_vfunc02())F1800136f0S",
    R"B1800136f0(// 0x1800136f0  std__Generic_error_category_vfunc02
// size=105 thunk=false
// signature: undefined std__Generic_error_category_vfunc02()
// status: ok


undefined8 *
std__Generic_error_category_vfunc02
          (undefined8 param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  _Str = std::_Syserror_map(param_3);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  sVar1 = strlen(_Str);
  FUN_18001d080(param_2,_Str,sVar1,param_4,uVar2);
  return param_2;
}


)B1800136f0",
    "329400a27ee9f1a32243d5c564581dcf9ac358399b847b3abe2a732628cab959",
    R"F1800136f0C(FUN_18001d080)F1800136f0C",
    R"F1800136f0D()F1800136f0D",
    R"F1800136f0T()F1800136f0T",
    R"F1800136f0F(24: return param_2;)F1800136f0F",
    R"F1800136f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800136f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800136f0() noexcept {
    return kFunction_0x1800136f0;
}

// 0x180013760 vfunc_shared_180013760
// source: re/dump/decompile/0x180013760_vfunc_shared_180013760.c
// size: 33 bytes; thunk: false
// body sha256: 2064c0448acbeba14e575e11cb39735073b0110a6e9e9fe73dcc8aac0da04911
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013760{
    "0x180013760",
    "vfunc_shared_180013760",
    R"F180013760S(undefined vfunc_shared_180013760())F180013760S",
    R"B180013760(// 0x180013760  vfunc_shared_180013760
// size=33 thunk=false
// signature: undefined vfunc_shared_180013760()
// status: ok


void * vfunc_shared_180013760(void *param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B180013760",
    "2064c0448acbeba14e575e11cb39735073b0110a6e9e9fe73dcc8aac0da04911",
    R"F180013760C()F180013760C",
    R"F180013760D()F180013760D",
    R"F180013760T()F180013760T",
    R"F180013760F(10: if ((param_2 & 1) != 0) {
13: return param_1;)F180013760F",
    R"F180013760U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013760U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013760() noexcept {
    return kFunction_0x180013760;
}

// 0x180013790 std__System_error_category_vfunc01
// source: re/dump/decompile/0x180013790_std__System_error_category_vfunc01.c
// size: 8 bytes; thunk: false
// body sha256: 449bea3d22bcd1ec4866b4cc51f71129295c97392d16aed055e753874fc2728e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013790{
    "0x180013790",
    "std__System_error_category_vfunc01",
    R"F180013790S(undefined std__System_error_category_vfunc01())F180013790S",
    R"B180013790(// 0x180013790  std__System_error_category_vfunc01
// size=8 thunk=false
// signature: undefined std__System_error_category_vfunc01()
// status: ok


char * std__System_error_category_vfunc01(void)

{
  return "system";
}


)B180013790",
    "449bea3d22bcd1ec4866b4cc51f71129295c97392d16aed055e753874fc2728e",
    R"F180013790C()F180013790C",
    R"F180013790D()F180013790D",
    R"F180013790T("system")F180013790T",
    R"F180013790F(10: return "system";)F180013790F",
    R"F180013790U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013790U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013790() noexcept {
    return kFunction_0x180013790;
}

// 0x1800137a0 std__System_error_category_vfunc02
// source: re/dump/decompile/0x1800137a0_std__System_error_category_vfunc02.c
// size: 186 bytes; thunk: false
// body sha256: dfeb629308fa1576fc717b5dfa28d260c2bc00ad0fdb3204f58a1d1a02daee43
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800137a0{
    "0x1800137a0",
    "std__System_error_category_vfunc02",
    R"F1800137a0S(undefined std__System_error_category_vfunc02())F1800137a0S",
    R"B1800137a0(// 0x1800137a0  std__System_error_category_vfunc02
// size=186 thunk=false
// signature: undefined std__System_error_category_vfunc02()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
std__System_error_category_vfunc02(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  HLOCAL local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_28 = (HLOCAL)0x0;
  local_30 = param_2;
  local_20 = FUN_1802d7ff4(param_3,&local_28);
  if ((local_28 == (HLOCAL)0x0) || (local_20 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_18001d080(param_2,"unknown error",0xd);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_18001d080(param_2);
  }
  local_38 = 1;
  LocalFree(local_28);
  return param_2;
}


)B1800137a0",
    "dfeb629308fa1576fc717b5dfa28d260c2bc00ad0fdb3204f58a1d1a02daee43",
    R"F1800137a0C(FUN_18001d080
FUN_1802d7ff4)F1800137a0C",
    R"F1800137a0D(DAT_1803da4c0)F1800137a0D",
    R"F1800137a0T("unknown error")F1800137a0T",
    R"F1800137a0F(25: if ((local_28 == (HLOCAL)0x0) || (local_20 == 0)) {
32: else {
41: return param_2;)F1800137a0F",
    R"F1800137a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F1800137a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800137a0() noexcept {
    return kFunction_0x1800137a0;
}

// 0x180013860 std__System_error_category_vfunc03
// source: re/dump/decompile/0x180013860_std__System_error_category_vfunc03.c
// size: 115 bytes; thunk: false
// body sha256: d63bb8b2f0fdf9817577d3f18e7f41cad18f76304a7a67c3bb13dcc2f3a4e871
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013860{
    "0x180013860",
    "std__System_error_category_vfunc03",
    R"F180013860S(undefined std__System_error_category_vfunc03())F180013860S",
    R"B180013860(// 0x180013860  std__System_error_category_vfunc03
// size=115 thunk=false
// signature: undefined std__System_error_category_vfunc03()
// status: ok


int * std__System_error_category_vfunc03(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    *param_2 = 0;
    *(undefined ***)(param_2 + 2) = &PTR_vftable_std__Generic_error_category_1803e7370;
    return param_2;
  }
  iVar1 = std::_Winerror_map(param_3);
  if (iVar1 == 0) {
    *param_2 = param_3;
    *(undefined ***)(param_2 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
    return param_2;
  }
  *param_2 = iVar1;
  *(undefined ***)(param_2 + 2) = &PTR_vftable_std__Generic_error_category_1803e7370;
  return param_2;
}


)B180013860",
    "d63bb8b2f0fdf9817577d3f18e7f41cad18f76304a7a67c3bb13dcc2f3a4e871",
    R"F180013860C()F180013860C",
    R"F180013860D()F180013860D",
    R"F180013860T()F180013860T",
    R"F180013860F(12: if (param_3 == 0) {
15: return param_2;
18: if (iVar1 == 0) {
21: return param_2;
25: return param_2;)F180013860F",
    R"F180013860U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013860U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013860() noexcept {
    return kFunction_0x180013860;
}

// 0x1800138e0 FUN_1800138e0
// source: re/dump/decompile/0x1800138e0_FUN_1800138e0.c
// size: 17 bytes; thunk: false
// body sha256: 1a5589d7dbd6f39bb8251f7f13b14c29b8505caff8c82e838e1effc6cadc8519
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800138e0{
    "0x1800138e0",
    "FUN_1800138e0",
    R"F1800138e0S(undefined FUN_1800138e0())F1800138e0S",
    R"B1800138e0(// 0x1800138e0  FUN_1800138e0
// size=17 thunk=false
// signature: undefined FUN_1800138e0()
// status: ok


undefined4 * FUN_1800138e0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined ***)(param_1 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
  return param_1;
}


)B1800138e0",
    "1a5589d7dbd6f39bb8251f7f13b14c29b8505caff8c82e838e1effc6cadc8519",
    R"F1800138e0C()F1800138e0C",
    R"F1800138e0D()F1800138e0D",
    R"F1800138e0T()F1800138e0T",
    R"F1800138e0F(12: return param_1;)F1800138e0F",
    R"F1800138e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800138e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800138e0() noexcept {
    return kFunction_0x1800138e0;
}

// 0x180013900 FUN_180013900
// source: re/dump/decompile/0x180013900_FUN_180013900.c
// size: 56 bytes; thunk: false
// body sha256: 3974089e099934406fc7cc975da98f0e002e771a81487e5c2122cea24512ebf4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013900{
    "0x180013900",
    "FUN_180013900",
    R"F180013900S(undefined FUN_180013900())F180013900S",
    R"B180013900(// 0x180013900  FUN_180013900
// size=56 thunk=false
// signature: undefined FUN_180013900()
// status: ok


void FUN_180013900(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [56];
  
  puVar1 = (undefined4 *)FUN_1800138e0(local_48,param_1);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  FUN_1800132b0(local_38,&local_58);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_38,(ThrowInfo *)&DAT_1803d5960);
}


)B180013900",
    "3974089e099934406fc7cc975da98f0e002e771a81487e5c2122cea24512ebf4",
    R"F180013900C(FUN_1800132b0
FUN_1800138e0)F180013900C",
    R"F180013900D(DAT_1803d5960)F180013900D",
    R"F180013900T()F180013900T",
    R"F180013900F(linear body (no explicit branch keyword found))F180013900F",
    R"F180013900U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803d5960.)F180013900U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013900() noexcept {
    return kFunction_0x180013900;
}

// 0x180013940 FUN_180013940
// source: re/dump/decompile/0x180013940_FUN_180013940.c
// size: 48 bytes; thunk: false
// body sha256: abf7c7c13ca3cdb5c8fca88434186cce06248a0f224a848cb9b2c2b9ad636310
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013940{
    "0x180013940",
    "FUN_180013940",
    R"F180013940S(undefined FUN_180013940())F180013940S",
    R"B180013940(// 0x180013940  FUN_180013940
// size=48 thunk=false
// signature: undefined FUN_180013940()
// status: ok


undefined8 * FUN_180013940(undefined8 *param_1)

{
  *param_1 = vftable_std_exception;
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = vftable_std_bad_cast;
  return param_1;
}


)B180013940",
    "abf7c7c13ca3cdb5c8fca88434186cce06248a0f224a848cb9b2c2b9ad636310",
    R"F180013940C()F180013940C",
    R"F180013940D()F180013940D",
    R"F180013940T("bad cast")F180013940T",
    R"F180013940F(14: return param_1;)F180013940F",
    R"F180013940U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013940U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013940() noexcept {
    return kFunction_0x180013940;
}

// 0x180013970 FUN_180013970
// source: re/dump/decompile/0x180013970_FUN_180013970.c
// size: 31 bytes; thunk: false
// body sha256: c3a3ea9dc6e11a661d36d02e86d314d4e7eca1045589034ee6878015cb5eb658
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013970{
    "0x180013970",
    "FUN_180013970",
    R"F180013970S(undefined FUN_180013970())F180013970S",
    R"B180013970(// 0x180013970  FUN_180013970
// size=31 thunk=false
// signature: undefined FUN_180013970()
// status: ok


void FUN_180013970(void)

{
  undefined1 local_28 [40];
  
  FUN_180013940(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1803d5ad8);
}


)B180013970",
    "c3a3ea9dc6e11a661d36d02e86d314d4e7eca1045589034ee6878015cb5eb658",
    R"F180013970C(FUN_180013940)F180013970C",
    R"F180013970D(DAT_1803d5ad8)F180013970D",
    R"F180013970T()F180013970T",
    R"F180013970F(linear body (no explicit branch keyword found))F180013970F",
    R"F180013970U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803d5ad8.)F180013970U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013970() noexcept {
    return kFunction_0x180013970;
}

// 0x180013990 FUN_180013990
// source: re/dump/decompile/0x180013990_FUN_180013990.c
// size: 66 bytes; thunk: false
// body sha256: f166d263b2b50a33386b1d6288037cae27b4439f5f371a8e4df8aae1894574ec
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013990{
    "0x180013990",
    "FUN_180013990",
    R"F180013990S(undefined FUN_180013990())F180013990S",
    R"B180013990(// 0x180013990  FUN_180013990
// size=66 thunk=false
// signature: undefined FUN_180013990()
// status: ok


undefined8 * FUN_180013990(undefined8 *param_1,longlong param_2)

{
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = vftable_std_bad_cast;
  return param_1;
}


)B180013990",
    "f166d263b2b50a33386b1d6288037cae27b4439f5f371a8e4df8aae1894574ec",
    R"F180013990C()F180013990C",
    R"F180013990D()F180013990D",
    R"F180013990T()F180013990T",
    R"F180013990F(15: return param_1;)F180013990F",
    R"F180013990U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013990U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013990() noexcept {
    return kFunction_0x180013990;
}

// 0x1800139e0 vfunc_shared_1800139e0
// source: re/dump/decompile/0x1800139e0_vfunc_shared_1800139e0.c
// size: 3 bytes; thunk: false
// body sha256: baf72fdf5cd1ce1e397ace7237092d17b9631d696d8163ebce51a7f49e8cd2ed
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800139e0{
    "0x1800139e0",
    "vfunc_shared_1800139e0",
    R"F1800139e0S(undefined vfunc_shared_1800139e0())F1800139e0S",
    R"B1800139e0(// 0x1800139e0  vfunc_shared_1800139e0
// size=3 thunk=false
// signature: undefined vfunc_shared_1800139e0()
// status: ok


undefined8 vfunc_shared_1800139e0(void)

{
  return 0;
}


)B1800139e0",
    "baf72fdf5cd1ce1e397ace7237092d17b9631d696d8163ebce51a7f49e8cd2ed",
    R"F1800139e0C()F1800139e0C",
    R"F1800139e0D()F1800139e0D",
    R"F1800139e0T()F1800139e0T",
    R"F1800139e0F(10: return 0;)F1800139e0F",
    R"F1800139e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800139e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800139e0() noexcept {
    return kFunction_0x1800139e0;
}

// 0x1800139f0 FUN_1800139f0
// source: re/dump/decompile/0x1800139f0_FUN_1800139f0.c
// size: 47 bytes; thunk: false
// body sha256: ba583f3648a534c94dd4ce6e7907fe27044e8edd0bad1dd3e93d19894b4ae1ce
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800139f0{
    "0x1800139f0",
    "FUN_1800139f0",
    R"F1800139f0S(undefined FUN_1800139f0())F1800139f0S",
    R"B1800139f0(// 0x1800139f0  FUN_1800139f0
// size=47 thunk=false
// signature: undefined FUN_1800139f0()
// status: ok


void FUN_1800139f0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180013a17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}


)B1800139f0",
    "ba583f3648a534c94dd4ce6e7907fe27044e8edd0bad1dd3e93d19894b4ae1ce",
    R"F1800139f0C()F1800139f0C",
    R"F1800139f0D()F1800139f0D",
    R"F1800139f0T()F1800139f0T",
    R"F1800139f0F(12: if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
14: if (puVar1 != (undefined8 *)0x0) {
18: return;
21: return;)F1800139f0F",
    R"F1800139f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 13: puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();.
TODO: resolve the indirect call in body 17: (**(code **)*puVar1)(puVar1,1);.)F1800139f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800139f0() noexcept {
    return kFunction_0x1800139f0;
}

// 0x180013a20 FUN_180013a20
// source: re/dump/decompile/0x180013a20_FUN_180013a20.c
// size: 256 bytes; thunk: false
// body sha256: ff690ddd5f95e89daafdf46db4167cf37b0a10a3ad2765746596622b8a814144
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013a20{
    "0x180013a20",
    "FUN_180013a20",
    R"F180013a20S(undefined FUN_180013a20())F180013a20S",
    R"B180013a20(// 0x180013a20  FUN_180013a20
// size=256 thunk=false
// signature: undefined FUN_180013a20()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_180013a20(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  size_t sVar7;
  undefined8 *puVar8;
  char *_Str;
  undefined4 uVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar9 = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    uStack_48 = 0;
    local_40 = _DAT_1803814b0;
    uStack_38 = _UNK_1803814b8;
    local_50 = 0;
    puVar8 = &local_50;
    bVar6 = true;
    bVar5 = false;
  }
  else {
    _Str = *(char **)(lVar1 + 0x28);
    if (_Str == (char *)0x0) {
      _Str = (char *)(lVar1 + 0x30);
    }
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    sVar7 = strlen(_Str);
    FUN_18001d080(&local_30,_Str,sVar7,param_4,uVar9);
    puVar8 = &local_30;
    bVar6 = false;
    bVar5 = true;
  }
  uVar4 = puVar8[1];
  *param_2 = *puVar8;
  param_2[1] = uVar4;
  uVar9 = *(undefined4 *)((longlong)puVar8 + 0x14);
  uVar2 = *(undefined4 *)(puVar8 + 3);
  uVar3 = *(undefined4 *)((longlong)puVar8 + 0x1c);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar8 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar9;
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar3;
  *(undefined1 *)puVar8 = 0;
  puVar8[2] = 0;
  puVar8[3] = 0xf;
  if (bVar6) {
    FUN_18020e450(&local_50);
  }
  if (bVar5) {
    FUN_18020e450(&local_30);
  }
  return param_2;
}


)B180013a20",
    "ff690ddd5f95e89daafdf46db4167cf37b0a10a3ad2765746596622b8a814144",
    R"F180013a20C(FUN_18001d080
FUN_18020e450)F180013a20C",
    R"F180013a20D()F180013a20D",
    R"F180013a20T()F180013a20T",
    R"F180013a20F(34: if (lVar1 == 0) {
43: else {
45: if (_Str == (char *)0x0) {
71: if (bVar6) {
74: if (bVar5) {
77: return param_2;)F180013a20F",
    R"F180013a20U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013a20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013a20() noexcept {
    return kFunction_0x180013a20;
}

// 0x180013b80 FUN_180013b80
// source: re/dump/decompile/0x180013b80_FUN_180013b80.c
// size: 18 bytes; thunk: false
// body sha256: 909369f5bc0e1db3db8d2d30814f7ff623940813ed9662b9a71a7ecb1fc35731
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013b80{
    "0x180013b80",
    "FUN_180013b80",
    R"F180013b80S(undefined FUN_180013b80())F180013b80S",
    R"B180013b80(// 0x180013b80  FUN_180013b80
// size=18 thunk=false
// signature: undefined FUN_180013b80()
// status: ok


void FUN_180013b80(void)

{
  code *pcVar1;
  
  std::_Xlength_error("map/set too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


)B180013b80",
    "909369f5bc0e1db3db8d2d30814f7ff623940813ed9662b9a71a7ecb1fc35731",
    R"F180013b80C()F180013b80C",
    R"F180013b80D()F180013b80D",
    R"F180013b80T("map/set too long")F180013b80T",
    R"F180013b80F(15: return;)F180013b80F",
    R"F180013b80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 13: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 14: (*pcVar1)();.)F180013b80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013b80() noexcept {
    return kFunction_0x180013b80;
}

// 0x180013ba0 FUN_180013ba0
// source: re/dump/decompile/0x180013ba0_FUN_180013ba0.c
// size: 258 bytes; thunk: false
// body sha256: 285448ea33dcb713549cc3bb2933ed9ea005ecbcddeff0504d463ef7701046bb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013ba0{
    "0x180013ba0",
    "FUN_180013ba0",
    R"F180013ba0S(undefined FUN_180013ba0())F180013ba0S",
    R"B180013ba0(// 0x180013ba0  FUN_180013ba0
// size=258 thunk=false
// signature: undefined FUN_180013ba0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180013ba0(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char *pcVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  char local_15 [5];
  ulonglong local_10;
  char *pcVar4;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  local_38 = 0;
  pcVar3 = local_15 + 2;
  uVar2 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + -1;
      *pcVar3 = (char)param_2 + (char)((ulonglong)param_2 / 10) * -10 + '0';
      param_2 = (uint)((ulonglong)param_2 / 10);
    } while (param_2 != 0);
    pcVar3 = pcVar4 + -2;
    *pcVar3 = '-';
  }
  else {
    do {
      pcVar3 = pcVar3 + -1;
      uVar1 = uVar2 / 10;
      *pcVar3 = (char)uVar2 + (char)uVar1 * -10 + '0';
      uVar2 = uVar1;
    } while ((int)uVar1 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (pcVar3 == local_15 + 2) {
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    local_30 = param_1;
    FUN_18001d080(param_1,pcVar3,local_15 + (2 - (longlong)pcVar3));
  }
  return param_1;
}


)B180013ba0",
    "285448ea33dcb713549cc3bb2933ed9ea005ecbcddeff0504d463ef7701046bb",
    R"F180013ba0C(FUN_18001d080)F180013ba0C",
    R"F180013ba0D(DAT_1803da4c0)F180013ba0D",
    R"F180013ba0T()F180013ba0T",
    R"F180013ba0F(26: if ((int)param_2 < 0) {
28: do {
37: else {
38: do {
49: if (pcVar3 == local_15 + 2) {
53: else {
57: return param_1;)F180013ba0F",
    R"F180013ba0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180013ba0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013ba0() noexcept {
    return kFunction_0x180013ba0;
}

// 0x180013cb0 FUN_180013cb0
// source: re/dump/decompile/0x180013cb0_FUN_180013cb0.c
// size: 190 bytes; thunk: false
// body sha256: 1a79b2e655b4387f2c3f850baa35ddae41132c4155a42bba4be8dd45913dacb3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013cb0{
    "0x180013cb0",
    "FUN_180013cb0",
    R"F180013cb0S(undefined FUN_180013cb0())F180013cb0S",
    R"B180013cb0(// 0x180013cb0  FUN_180013cb0
// size=190 thunk=false
// signature: undefined FUN_180013cb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_180013cb0(char *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char *pcVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char *local_30;
  char local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  local_38 = 0;
  pcVar3 = local_14 + 1;
  uVar2 = (ulonglong)param_2;
  do {
    pcVar3 = pcVar3 + -1;
    uVar1 = uVar2 / 10;
    *pcVar3 = (char)uVar2 + (char)uVar1 * -10 + '0';
    uVar2 = uVar1;
  } while ((int)uVar1 != 0);
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  if (pcVar3 == local_14 + 1) {
    param_1[0x18] = '\x0f';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    *param_1 = (char)uVar1;
  }
  else {
    local_30 = param_1;
    FUN_18001d080(param_1,pcVar3,local_14 + (1 - (longlong)pcVar3));
  }
  return param_1;
}


)B180013cb0",
    "1a79b2e655b4387f2c3f850baa35ddae41132c4155a42bba4be8dd45913dacb3",
    R"F180013cb0C(FUN_18001d080)F180013cb0C",
    R"F180013cb0D(DAT_1803da4c0)F180013cb0D",
    R"F180013cb0T()F180013cb0T",
    R"F180013cb0F(25: do {
63: if (pcVar3 == local_14 + 1) {
74: else {
78: return param_1;)F180013cb0F",
    R"F180013cb0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180013cb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013cb0() noexcept {
    return kFunction_0x180013cb0;
}

// 0x180013d70 FUN_180013d70
// source: re/dump/decompile/0x180013d70_FUN_180013d70.c
// size: 206 bytes; thunk: false
// body sha256: 7fc5199588722a4c7a52837fecf3b90773a127e53405ff28b967b9859de4e661
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013d70{
    "0x180013d70",
    "FUN_180013d70",
    R"F180013d70S(undefined FUN_180013d70())F180013d70S",
    R"B180013d70(// 0x180013d70  FUN_180013d70
// size=206 thunk=false
// signature: undefined FUN_180013d70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180013d70(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  char local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  local_38 = 0;
  pcVar2 = local_14 + 1;
  do {
    pcVar2 = pcVar2 + -1;
    uVar1 = param_2 / 10;
    *pcVar2 = (char)param_2 + (char)uVar1 * -10 + '0';
    param_2 = uVar1;
  } while (uVar1 != 0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (pcVar2 == local_14 + 1) {
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    local_30 = param_1;
    FUN_18001d080(param_1,pcVar2,local_14 + (1 - (longlong)pcVar2));
  }
  return param_1;
}


)B180013d70",
    "7fc5199588722a4c7a52837fecf3b90773a127e53405ff28b967b9859de4e661",
    R"F180013d70C(FUN_18001d080)F180013d70C",
    R"F180013d70D(DAT_1803da4c0)F180013d70D",
    R"F180013d70T()F180013d70T",
    R"F180013d70F(23: do {
33: if (pcVar2 == local_14 + 1) {
37: else {
41: return param_1;)F180013d70F",
    R"F180013d70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180013d70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013d70() noexcept {
    return kFunction_0x180013d70;
}

// 0x180013e50 std__Node_base_vfunc00
// source: re/dump/decompile/0x180013e50_std__Node_base_vfunc00.c
// size: 43 bytes; thunk: false
// body sha256: 1d14c50ace7b922839cef3817d57c2828bb91d312c99757e3714b1d473abe099
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013e50{
    "0x180013e50",
    "std__Node_base_vfunc00",
    R"F180013e50S(undefined std__Node_base_vfunc00())F180013e50S",
    R"B180013e50(// 0x180013e50  std__Node_base_vfunc00
// size=43 thunk=false
// signature: undefined std__Node_base_vfunc00()
// status: ok


undefined8 * std__Node_base_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_std__Node_base;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B180013e50",
    "1d14c50ace7b922839cef3817d57c2828bb91d312c99757e3714b1d473abe099",
    R"F180013e50C()F180013e50C",
    R"F180013e50D()F180013e50D",
    R"F180013e50T()F180013e50T",
    R"F180013e50F(11: if ((param_2 & 1) != 0) {
14: return param_1;)F180013e50F",
    R"F180013e50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013e50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013e50() noexcept {
    return kFunction_0x180013e50;
}

// 0x180013e80 std__Root_node_vfunc00
// source: re/dump/decompile/0x180013e80_std__Root_node_vfunc00.c
// size: 47 bytes; thunk: false
// body sha256: 3cdb1225bec62ee517529de814e02189f9bed9e5d5e86eed0ac8051dbaeb9321
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013e80{
    "0x180013e80",
    "std__Root_node_vfunc00",
    R"F180013e80S(undefined std__Root_node_vfunc00())F180013e80S",
    R"B180013e80(// 0x180013e80  std__Root_node_vfunc00
// size=47 thunk=false
// signature: undefined std__Root_node_vfunc00()
// status: ok


undefined8 * std__Root_node_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_std__Node_base;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B180013e80",
    "3cdb1225bec62ee517529de814e02189f9bed9e5d5e86eed0ac8051dbaeb9321",
    R"F180013e80C()F180013e80C",
    R"F180013e80D()F180013e80D",
    R"F180013e80T()F180013e80T",
    R"F180013e80F(11: if ((param_2 & 1) != 0) {
14: return param_1;)F180013e80F",
    R"F180013e80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013e80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013e80() noexcept {
    return kFunction_0x180013e80;
}

// 0x180013eb0 vfunc_shared_180013eb0
// source: re/dump/decompile/0x180013eb0_vfunc_shared_180013eb0.c
// size: 47 bytes; thunk: false
// body sha256: d18d720371e2f54b15e9256c7f8c8670ab2f786aff5bf3dd155e05265580ab55
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013eb0{
    "0x180013eb0",
    "vfunc_shared_180013eb0",
    R"F180013eb0S(undefined vfunc_shared_180013eb0())F180013eb0S",
    R"B180013eb0(// 0x180013eb0  vfunc_shared_180013eb0
// size=47 thunk=false
// signature: undefined vfunc_shared_180013eb0()
// status: ok


undefined8 * vfunc_shared_180013eb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_std__Node_base;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B180013eb0",
    "d18d720371e2f54b15e9256c7f8c8670ab2f786aff5bf3dd155e05265580ab55",
    R"F180013eb0C()F180013eb0C",
    R"F180013eb0D()F180013eb0D",
    R"F180013eb0T()F180013eb0T",
    R"F180013eb0F(11: if ((param_2 & 1) != 0) {
14: return param_1;)F180013eb0F",
    R"F180013eb0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013eb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013eb0() noexcept {
    return kFunction_0x180013eb0;
}

// 0x180013ee0 std__Node_assert_vfunc00
// source: re/dump/decompile/0x180013ee0_std__Node_assert_vfunc00.c
// size: 117 bytes; thunk: false
// body sha256: 161e5d7371b74f58f58b9f1a7b8b87e23d2a22694c9cd6bb2690f5be785d136c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013ee0{
    "0x180013ee0",
    "std__Node_assert_vfunc00",
    R"F180013ee0S(undefined std__Node_assert_vfunc00())F180013ee0S",
    R"B180013ee0(// 0x180013ee0  std__Node_assert_vfunc00
// size=117 thunk=false
// signature: undefined std__Node_assert_vfunc00()
// status: ok


undefined8 * std__Node_assert_vfunc00(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = vftable_std__Node_assert;
  puVar2 = (undefined8 *)param_1[4];
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar2[2];
    puVar2[2] = 0;
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  *param_1 = vftable_std__Node_base;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B180013ee0",
    "161e5d7371b74f58f58b9f1a7b8b87e23d2a22694c9cd6bb2690f5be785d136c",
    R"F180013ee0C()F180013ee0C",
    R"F180013ee0D()F180013ee0D",
    R"F180013ee0T()F180013ee0T",
    R"F180013ee0F(15: while (puVar2 != (undefined8 *)0x0) {
22: if ((param_2 & 1) != 0) {
25: return param_1;)F180013ee0F",
    R"F180013ee0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 18: (**(code **)*puVar2)(puVar2,1);.)F180013ee0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013ee0() noexcept {
    return kFunction_0x180013ee0;
}

// 0x180013f60 std__Node_endif_vfunc00
// source: re/dump/decompile/0x180013f60_std__Node_endif_vfunc00.c
// size: 47 bytes; thunk: false
// body sha256: bcc29317f424df9885d19c0481498db6ad7c038576196af3eb5da8b0b30e75e4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180013f60{
    "0x180013f60",
    "std__Node_endif_vfunc00",
    R"F180013f60S(undefined std__Node_endif_vfunc00())F180013f60S",
    R"B180013f60(// 0x180013f60  std__Node_endif_vfunc00
// size=47 thunk=false
// signature: undefined std__Node_endif_vfunc00()
// status: ok


undefined8 * std__Node_endif_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_std__Node_base;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B180013f60",
    "bcc29317f424df9885d19c0481498db6ad7c038576196af3eb5da8b0b30e75e4",
    R"F180013f60C()F180013f60C",
    R"F180013f60D()F180013f60D",
    R"F180013f60T()F180013f60T",
    R"F180013f60F(11: if ((param_2 & 1) != 0) {
14: return param_1;)F180013f60F",
    R"F180013f60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180013f60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180013f60() noexcept {
    return kFunction_0x180013f60;
}

}  // namespace sf::reconstructed
