// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"

namespace sf::reconstructed {

// 0x18005f9e0 FUN_18005f9e0
// source: re/dump/decompile/0x18005f9e0_FUN_18005f9e0.c
// size: 199 bytes; thunk: false
// body sha256: 06377ef0759e19484f6832d6fa125e0fc3fc46976fe5ada0706543b611c4904a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18005f9e0{
    "0x18005f9e0",
    "FUN_18005f9e0",
    R"F18005f9e0S(undefined FUN_18005f9e0())F18005f9e0S",
    R"B18005f9e0(// 0x18005f9e0  FUN_18005f9e0
// size=199 thunk=false
// signature: undefined FUN_18005f9e0()
// status: ok


undefined8 FUN_18005f9e0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar2 = (uint)dVar5;
    if (((((int)uVar2 < 1) ||
         (lVar3 = (ulonglong)(uVar2 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar3] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar3) != uVar2 >> 6)) || ((&DAT_1805b88e1)[lVar3] != '\0')) {
      lVar4 = *plVar1;
    }
    else {
      lVar4 = *plVar1;
      if (lVar3 != -0x1805b8908) {
        (**(code **)(lVar4 + 0xf0))(plVar1,(double)(*(int *)(&DAT_1805b8918 + lVar3) + 7 >> 3));
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


)B18005f9e0",
    "06377ef0759e19484f6832d6fa125e0fc3fc46976fe5ada0706543b611c4904a",
    R"F18005f9e0C(FUN_180039770)F18005f9e0C",
    R"F18005f9e0D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8918)F18005f9e0D",
    R"F18005f9e0T()F18005f9e0T",
    R"F18005f9e0F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if (((((int)uVar2 < 1) ||
25: else {
27: if (lVar3 != -0x1805b8908) {
29: return 1;
33: return 1;
35: return 0;)F18005f9e0F",
    R"F18005f9e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 28: (**(code **)(lVar4 + 0xf0))(plVar1,(double)(*(int *)(&DAT_1805b8918 + lVar3) + 7 >> 3));.
TODO: resolve the indirect call in body 32: (**(code **)(lVar4 + 0xe0))(plVar1);.)F18005f9e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18005f9e0() noexcept {
    return kFunction_0x18005f9e0;
}

// 0x18005fab0 FUN_18005fab0
// source: re/dump/decompile/0x18005fab0_FUN_18005fab0.c
// size: 199 bytes; thunk: false
// body sha256: 20165c7f7ebaf461d05ced7a16f604dbbf7a220b6b7e9278639de3b24fb3ee00
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18005fab0{
    "0x18005fab0",
    "FUN_18005fab0",
    R"F18005fab0S(undefined FUN_18005fab0())F18005fab0S",
    R"B18005fab0(// 0x18005fab0  FUN_18005fab0
// size=199 thunk=false
// signature: undefined FUN_18005fab0()
// status: ok


undefined8 FUN_18005fab0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar2 = (uint)dVar5;
    if (((((int)uVar2 < 1) ||
         (lVar3 = (ulonglong)(uVar2 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar3] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar3) != uVar2 >> 6)) || ((&DAT_1805b88e1)[lVar3] != '\0')) {
      lVar4 = *plVar1;
    }
    else {
      lVar4 = *plVar1;
      if (lVar3 != -0x1805b8908) {
        (**(code **)(lVar4 + 0xf0))
                  (plVar1,(double)(*(int *)(&DAT_1805b8914 + lVar3) -
                                   *(int *)(&DAT_1805b8918 + lVar3) >> 3));
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


)B18005fab0",
    "20165c7f7ebaf461d05ced7a16f604dbbf7a220b6b7e9278639de3b24fb3ee00",
    R"F18005fab0C(FUN_180039770)F18005fab0C",
    R"F18005fab0D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8914
DAT_1805b8918)F18005fab0D",
    R"F18005fab0T()F18005fab0T",
    R"F18005fab0F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if (((((int)uVar2 < 1) ||
25: else {
27: if (lVar3 != -0x1805b8908) {
31: return 1;
35: return 1;
37: return 0;)F18005fab0F",
    R"F18005fab0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8914.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 28: (**(code **)(lVar4 + 0xf0)).
TODO: resolve the indirect call in body 34: (**(code **)(lVar4 + 0xe0))(plVar1);.)F18005fab0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18005fab0() noexcept {
    return kFunction_0x18005fab0;
}

// 0x18005fb80 FUN_18005fb80
// source: re/dump/decompile/0x18005fb80_FUN_18005fb80.c
// size: 191 bytes; thunk: false
// body sha256: 3f6d9e4b24a36355773665e8d8030179e798f9514696f75261b6ba381b85b527
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18005fb80{
    "0x18005fb80",
    "FUN_18005fb80",
    R"F18005fb80S(undefined FUN_18005fb80())F18005fb80S",
    R"B18005fb80(// 0x18005fb80  FUN_18005fb80
// size=191 thunk=false
// signature: undefined FUN_18005fb80()
// status: ok


undefined8 FUN_18005fb80(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] != '\0')) {
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
      if (lVar4 != -0x1805b8908) {
        (**(code **)(lVar2 + 0xf0))(plVar1,(double)*(int *)(&DAT_1805b8910 + lVar4));
        return 1;
      }
    }
    (**(code **)(lVar2 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


)B18005fb80",
    "3f6d9e4b24a36355773665e8d8030179e798f9514696f75261b6ba381b85b527",
    R"F18005fb80C(FUN_180039770)F18005fb80C",
    R"F18005fb80D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8910)F18005fb80D",
    R"F18005fb80T()F18005fb80T",
    R"F18005fb80F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if (((((int)uVar3 < 1) ||
25: else {
27: if (lVar4 != -0x1805b8908) {
29: return 1;
33: return 1;
35: return 0;)F18005fb80F",
    R"F18005fb80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8910.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 28: (**(code **)(lVar2 + 0xf0))(plVar1,(double)*(int *)(&DAT_1805b8910 + lVar4));.
TODO: resolve the indirect call in body 32: (**(code **)(lVar2 + 0xe0))(plVar1);.)F18005fb80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18005fb80() noexcept {
    return kFunction_0x18005fb80;
}

// 0x18005fc40 FUN_18005fc40
// source: re/dump/decompile/0x18005fc40_FUN_18005fc40.c
// size: 242 bytes; thunk: false
// body sha256: 6d9981d90645d1feccaa9f7b6ac9f1e6f064bd2171acf33cb562709cb7cda0d3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18005fc40{
    "0x18005fc40",
    "FUN_18005fc40",
    R"F18005fc40S(undefined FUN_18005fc40())F18005fc40S",
    R"B18005fc40(// 0x18005fc40  FUN_18005fc40
// size=242 thunk=false
// signature: undefined FUN_18005fc40()
// status: ok


undefined8 FUN_18005fc40(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  double dVar8;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar5 = (uint)dVar8;
    if (((((int)uVar5 < 1) ||
         (lVar6 = (ulonglong)(uVar5 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar6] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar6) != uVar5 >> 6)) || ((&DAT_1805b88e1)[lVar6] != '\0')) {
      lVar4 = *plVar3;
    }
    else {
      lVar4 = *plVar3;
      if (lVar6 != -0x1805b8908) {
        pcVar1 = *(code **)(lVar4 + 0xf8);
        dVar8 = (double)(**(code **)(lVar4 + 0x160))(plVar3,2);
        iVar2 = (int)dVar8;
        if ((iVar2 < 0) || (*(int *)(&DAT_1805b8914 + lVar6) < iVar2)) {
          iVar2 = *(int *)(&DAT_1805b8914 + lVar6);
          uVar7 = 0;
          (&DAT_1805b891c)[lVar6] = 1;
        }
        else {
          uVar7 = 1;
        }
        *(int *)(&DAT_1805b8918 + lVar6) = iVar2;
        (*pcVar1)(plVar3,uVar7);
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar3);
    return 1;
  }
  return 0;
}


)B18005fc40",
    "6d9981d90645d1feccaa9f7b6ac9f1e6f064bd2171acf33cb562709cb7cda0d3",
    R"F18005fc40C(FUN_180039770)F18005fc40C",
    R"F18005fc40D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8914
DAT_1805b8918
DAT_1805b891c)F18005fc40D",
    R"F18005fc40T()F18005fc40T",
    R"F18005fc40F(20: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
23: if (((((int)uVar5 < 1) ||
28: else {
30: if (lVar6 != -0x1805b8908) {
34: if ((iVar2 < 0) || (*(int *)(&DAT_1805b8914 + lVar6) < iVar2)) {
39: else {
44: return 1;
48: return 1;
50: return 0;)F18005fc40F",
    R"F18005fc40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8914.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: recover the declaration, type and value for global/data reference DAT_1805b891c.
TODO: resolve the indirect call in body 21: dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 31: pcVar1 = *(code **)(lVar4 + 0xf8);.
TODO: resolve the indirect call in body 32: dVar8 = (double)(**(code **)(lVar4 + 0x160))(plVar3,2);.
TODO: resolve the indirect call in body 43: (*pcVar1)(plVar3,uVar7);.
TODO: resolve the indirect call in body 47: (**(code **)(lVar4 + 0xe0))(plVar3);.)F18005fc40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18005fc40() noexcept {
    return kFunction_0x18005fc40;
}

// 0x18005fd40 FUN_18005fd40
// source: re/dump/decompile/0x18005fd40_FUN_18005fd40.c
// size: 248 bytes; thunk: false
// body sha256: b74447ed5fc76da5b0b777143f5944a14502d6e1d9132058373d5ad42119e6dc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18005fd40{
    "0x18005fd40",
    "FUN_18005fd40",
    R"F18005fd40S(undefined FUN_18005fd40())F18005fd40S",
    R"B18005fd40(// 0x18005fd40  FUN_18005fd40
// size=248 thunk=false
// signature: undefined FUN_18005fd40()
// status: ok


undefined8 FUN_18005fd40(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar5 = (uint)dVar8;
    if (((((int)uVar5 < 1) ||
         (lVar7 = (ulonglong)(uVar5 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar5 >> 6)) || ((&DAT_1805b88e1)[lVar7] != '\0')) {
      lVar4 = *plVar3;
    }
    else {
      lVar4 = *plVar3;
      if (lVar7 != -0x1805b8908) {
        pcVar1 = *(code **)(lVar4 + 0xf8);
        dVar8 = (double)(**(code **)(lVar4 + 0x160))(plVar3,2);
        iVar6 = *(int *)(&DAT_1805b8918 + lVar7) + (int)dVar8;
        if ((iVar6 < 0) || (*(int *)(&DAT_1805b8914 + lVar7) < iVar6)) {
          iVar6 = *(int *)(&DAT_1805b8914 + lVar7);
          uVar2 = 0;
          (&DAT_1805b891c)[lVar7] = 1;
        }
        else {
          uVar2 = 1;
        }
        *(int *)(&DAT_1805b8918 + lVar7) = iVar6;
        (*pcVar1)(plVar3,uVar2);
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar3);
    return 1;
  }
  return 0;
}


)B18005fd40",
    "b74447ed5fc76da5b0b777143f5944a14502d6e1d9132058373d5ad42119e6dc",
    R"F18005fd40C(FUN_180039770)F18005fd40C",
    R"F18005fd40D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8914
DAT_1805b8918
DAT_1805b891c)F18005fd40D",
    R"F18005fd40T()F18005fd40T",
    R"F18005fd40F(20: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
23: if (((((int)uVar5 < 1) ||
28: else {
30: if (lVar7 != -0x1805b8908) {
34: if ((iVar6 < 0) || (*(int *)(&DAT_1805b8914 + lVar7) < iVar6)) {
39: else {
44: return 1;
48: return 1;
50: return 0;)F18005fd40F",
    R"F18005fd40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8914.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: recover the declaration, type and value for global/data reference DAT_1805b891c.
TODO: resolve the indirect call in body 21: dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 31: pcVar1 = *(code **)(lVar4 + 0xf8);.
TODO: resolve the indirect call in body 32: dVar8 = (double)(**(code **)(lVar4 + 0x160))(plVar3,2);.
TODO: resolve the indirect call in body 43: (*pcVar1)(plVar3,uVar2);.
TODO: resolve the indirect call in body 47: (**(code **)(lVar4 + 0xe0))(plVar3);.)F18005fd40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18005fd40() noexcept {
    return kFunction_0x18005fd40;
}

// 0x18005fe40 FUN_18005fe40
// source: re/dump/decompile/0x18005fe40_FUN_18005fe40.c
// size: 261 bytes; thunk: false
// body sha256: 7b66439f4e658b8a69ed63a93fb427f518ade5205cc0910e19fb34e2a59fc691
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18005fe40{
    "0x18005fe40",
    "FUN_18005fe40",
    R"F18005fe40S(undefined FUN_18005fe40())F18005fe40S",
    R"B18005fe40(// 0x18005fe40  FUN_18005fe40
// size=261 thunk=false
// signature: undefined FUN_18005fe40()
// status: ok


undefined8 FUN_18005fe40(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar6 = (uint)dVar8;
    if (((((int)uVar6 < 1) ||
         (lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] != '\0')) {
      lVar4 = *plVar3;
    }
    else {
      lVar4 = *plVar3;
      if ((longlong *)(&DAT_1805b8908 + lVar7) != (longlong *)0x0) {
        pcVar2 = *(code **)(lVar4 + 0xf0);
        iVar1 = *(int *)(&DAT_1805b8918 + lVar7);
        if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < 1) {
          (&DAT_1805b891c)[lVar7] = 1;
          bVar5 = 0;
        }
        else {
          bVar5 = *(byte *)(((longlong)iVar1 >> 3) + *(longlong *)(&DAT_1805b8908 + lVar7));
          *(int *)(&DAT_1805b8918 + lVar7) = iVar1 + 1;
          bVar5 = bVar5 >> ((byte)iVar1 & 7) & 1;
        }
        (*pcVar2)(plVar3,(double)bVar5);
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar3);
    return 1;
  }
  return 0;
}


)B18005fe40",
    "7b66439f4e658b8a69ed63a93fb427f518ade5205cc0910e19fb34e2a59fc691",
    R"F18005fe40C(FUN_180039770)F18005fe40C",
    R"F18005fe40D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908
DAT_1805b8914
DAT_1805b8918
DAT_1805b891c)F18005fe40D",
    R"F18005fe40T()F18005fe40T",
    R"F18005fe40F(20: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
23: if (((((int)uVar6 < 1) ||
28: else {
30: if ((longlong *)(&DAT_1805b8908 + lVar7) != (longlong *)0x0) {
33: if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < 1) {
37: else {
43: return 1;
47: return 1;
49: return 0;)F18005fe40F",
    R"F18005fe40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8914.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: recover the declaration, type and value for global/data reference DAT_1805b891c.
TODO: resolve the indirect call in body 21: dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 31: pcVar2 = *(code **)(lVar4 + 0xf0);.
TODO: resolve the indirect call in body 42: (*pcVar2)(plVar3,(double)bVar5);.
TODO: resolve the indirect call in body 46: (**(code **)(lVar4 + 0xe0))(plVar3);.)F18005fe40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18005fe40() noexcept {
    return kFunction_0x18005fe40;
}

// 0x18005ff50 FUN_18005ff50
// source: re/dump/decompile/0x18005ff50_FUN_18005ff50.c
// size: 406 bytes; thunk: false
// body sha256: 5762532698ca926708b8ae2602e334e366d85a73a99cbb9381be6cde22b23b0c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18005ff50{
    "0x18005ff50",
    "FUN_18005ff50",
    R"F18005ff50S(undefined FUN_18005ff50())F18005ff50S",
    R"B18005ff50(// 0x18005ff50  FUN_18005ff50
// size=406 thunk=false
// signature: undefined FUN_18005ff50()
// status: ok


undefined8 FUN_18005ff50(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  double dVar9;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    dVar9 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    uVar6 = (uint)dVar9;
    if (((((int)uVar6 < 1) ||
         (lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] != '\0')) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = *plVar4;
      if ((longlong *)(&DAT_1805b8908 + lVar7) != (longlong *)0x0) {
        pcVar2 = *(code **)(lVar5 + 0xf0);
        dVar9 = (double)(**(code **)(lVar5 + 0x160))(plVar4,2);
        iVar8 = (int)dVar9;
        if (iVar8 < 1) {
          iVar8 = 1;
        }
        else if (0x20 < iVar8) {
          iVar8 = 0x20;
        }
        iVar1 = *(int *)(&DAT_1805b8918 + lVar7);
        if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < iVar8) {
          *(int *)(&DAT_1805b8918 + lVar7) = *(int *)(&DAT_1805b8914 + lVar7);
          uVar6 = 0;
          (&DAT_1805b891c)[lVar7] = 1;
        }
        else {
          lVar5 = *(longlong *)(&DAT_1805b8908 + lVar7);
          *(int *)(&DAT_1805b8918 + lVar7) = iVar1 + iVar8;
          bVar3 = (byte)iVar1 & 0x1f;
          uVar6 = (*(int *)(lVar5 + (ulonglong)(uint)(iVar1 + iVar8 + -1 >> 5) * 4) <<
                   (0x20 - bVar3 & 0x1f) |
                  *(uint *)(lVar5 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar3) &
                  *(uint *)(&DAT_1803fa710 + (longlong)iVar8 * 4);
        }
        (*pcVar2)(plVar4,(double)uVar6);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar4);
    return 1;
  }
  return 0;
}


)B18005ff50",
    "5762532698ca926708b8ae2602e334e366d85a73a99cbb9381be6cde22b23b0c",
    R"F18005ff50C(FUN_180039770)F18005ff50C",
    R"F18005ff50D(DAT_1803fa710
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908
DAT_1805b8914
DAT_1805b8918
DAT_1805b891c)F18005ff50D",
    R"F18005ff50T()F18005ff50T",
    R"F18005ff50F(21: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
24: if (((((int)uVar6 < 1) ||
29: else {
31: if ((longlong *)(&DAT_1805b8908 + lVar7) != (longlong *)0x0) {
35: if (iVar8 < 1) {
38: else if (0x20 < iVar8) {
42: if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < iVar8) {
47: else {
57: return 1;
61: return 1;
63: return 0;)F18005ff50F",
    R"F18005ff50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa710.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8914.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: recover the declaration, type and value for global/data reference DAT_1805b891c.
TODO: resolve the indirect call in body 22: dVar9 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);.
TODO: resolve the indirect call in body 32: pcVar2 = *(code **)(lVar5 + 0xf0);.
TODO: resolve the indirect call in body 33: dVar9 = (double)(**(code **)(lVar5 + 0x160))(plVar4,2);.
TODO: resolve the indirect call in body 56: (*pcVar2)(plVar4,(double)uVar6);.
TODO: resolve the indirect call in body 60: (**(code **)(lVar5 + 0xe0))(plVar4);.)F18005ff50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18005ff50() noexcept {
    return kFunction_0x18005ff50;
}

// 0x1800600f0 FUN_1800600f0
// source: re/dump/decompile/0x1800600f0_FUN_1800600f0.c
// size: 255 bytes; thunk: false
// body sha256: 0a2dbda34757dc6b3fdb4a2d2877175682ecbaf3ffe6bb6b3f543e54faadba58
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800600f0{
    "0x1800600f0",
    "FUN_1800600f0",
    R"F1800600f0S(undefined FUN_1800600f0())F1800600f0S",
    R"B1800600f0(// 0x1800600f0  FUN_1800600f0
// size=255 thunk=false
// signature: undefined FUN_1800600f0()
// status: ok


undefined8 FUN_1800600f0(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    uVar4 = (uint)dVar7;
    if (((((int)uVar4 < 1) ||
         (lVar6 = (ulonglong)(uVar4 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar6] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar6) != uVar4 >> 6)) || ((&DAT_1805b88e1)[lVar6] != '\0')) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = *plVar2;
      if (&DAT_1805b8908 + lVar6 != (undefined *)0x0) {
        pcVar1 = *(code **)(lVar3 + 0xf0);
        dVar7 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);
        iVar5 = (int)dVar7;
        if (iVar5 < 1) {
          iVar5 = 1;
        }
        else if (0x20 < iVar5) {
          iVar5 = 0x20;
        }
        iVar5 = FUN_18001afe0(&DAT_1805b8908 + lVar6,iVar5);
        (*pcVar1)(plVar2,(double)iVar5);
        return 1;
      }
    }
    (**(code **)(lVar3 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


)B1800600f0",
    "0a2dbda34757dc6b3fdb4a2d2877175682ecbaf3ffe6bb6b3f543e54faadba58",
    R"F1800600f0C(FUN_18001afe0
FUN_180039770)F1800600f0C",
    R"F1800600f0D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908)F1800600f0D",
    R"F1800600f0T()F1800600f0T",
    R"F1800600f0F(19: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
22: if (((((int)uVar4 < 1) ||
27: else {
29: if (&DAT_1805b8908 + lVar6 != (undefined *)0x0) {
33: if (iVar5 < 1) {
36: else if (0x20 < iVar5) {
41: return 1;
45: return 1;
47: return 0;)F1800600f0F",
    R"F1800600f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: resolve the indirect call in body 20: dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 30: pcVar1 = *(code **)(lVar3 + 0xf0);.
TODO: resolve the indirect call in body 31: dVar7 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);.
TODO: resolve the indirect call in body 40: (*pcVar1)(plVar2,(double)iVar5);.
TODO: resolve the indirect call in body 44: (**(code **)(lVar3 + 0xe0))(plVar2);.)F1800600f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800600f0() noexcept {
    return kFunction_0x1800600f0;
}

// 0x1800601f0 FUN_1800601f0
// source: re/dump/decompile/0x1800601f0_FUN_1800601f0.c
// size: 257 bytes; thunk: false
// body sha256: 9368d8f79bc270de3a64d5c29263f8f1f3b3376c723b1ca36bc22f46921ba32b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800601f0{
    "0x1800601f0",
    "FUN_1800601f0",
    R"F1800601f0S(undefined FUN_1800601f0())F1800601f0S",
    R"B1800601f0(// 0x1800601f0  FUN_1800601f0
// size=257 thunk=false
// signature: undefined FUN_1800601f0()
// status: ok


undefined8 FUN_1800601f0(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    uVar4 = (uint)dVar7;
    if (((((int)uVar4 < 1) ||
         (lVar6 = (ulonglong)(uVar4 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar6] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar6) != uVar4 >> 6)) || ((&DAT_1805b88e1)[lVar6] != '\0')) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = *plVar2;
      if (&DAT_1805b8908 + lVar6 != (undefined *)0x0) {
        pcVar1 = *(code **)(lVar3 + 0xf0);
        dVar7 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);
        iVar5 = (int)dVar7;
        if (iVar5 < 1) {
          iVar5 = 1;
        }
        else if (0x20 < iVar5) {
          iVar5 = 0x20;
        }
        uVar4 = FUN_18001af40(&DAT_1805b8908 + lVar6,iVar5);
        (*pcVar1)(plVar2,(double)uVar4);
        return 1;
      }
    }
    (**(code **)(lVar3 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


)B1800601f0",
    "9368d8f79bc270de3a64d5c29263f8f1f3b3376c723b1ca36bc22f46921ba32b",
    R"F1800601f0C(FUN_18001af40
FUN_180039770)F1800601f0C",
    R"F1800601f0D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908)F1800601f0D",
    R"F1800601f0T()F1800601f0T",
    R"F1800601f0F(19: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
22: if (((((int)uVar4 < 1) ||
27: else {
29: if (&DAT_1805b8908 + lVar6 != (undefined *)0x0) {
33: if (iVar5 < 1) {
36: else if (0x20 < iVar5) {
41: return 1;
45: return 1;
47: return 0;)F1800601f0F",
    R"F1800601f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: resolve the indirect call in body 20: dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 30: pcVar1 = *(code **)(lVar3 + 0xf0);.
TODO: resolve the indirect call in body 31: dVar7 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);.
TODO: resolve the indirect call in body 40: (*pcVar1)(plVar2,(double)uVar4);.
TODO: resolve the indirect call in body 44: (**(code **)(lVar3 + 0xe0))(plVar2);.)F1800601f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800601f0() noexcept {
    return kFunction_0x1800601f0;
}

// 0x180060300 FUN_180060300
// source: re/dump/decompile/0x180060300_FUN_180060300.c
// size: 516 bytes; thunk: false
// body sha256: f565885318796ca3c94f4383ed06d97706b87a74ed400fe63f501a3175036dbb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180060300{
    "0x180060300",
    "FUN_180060300",
    R"F180060300S(undefined FUN_180060300())F180060300S",
    R"B180060300(// 0x180060300  FUN_180060300
// size=516 thunk=false
// signature: undefined FUN_180060300()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180060300(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  double dVar12;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
    return 0;
  }
  dVar12 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
  uVar7 = (uint)dVar12;
  if (((((int)uVar7 < 1) ||
       (lVar9 = (ulonglong)(uVar7 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar9] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar9) != uVar7 >> 6)) || ((&DAT_1805b88e1)[lVar9] != '\0')) {
    lVar6 = *plVar5;
LAB_1800604e1:
    (**(code **)(lVar6 + 0xe0))(plVar5);
    return 1;
  }
  lVar6 = *plVar5;
  if ((longlong *)(&DAT_1805b8908 + lVar9) == (longlong *)0x0) goto LAB_1800604e1;
  iVar1 = *(int *)(&DAT_1805b8914 + lVar9);
  iVar2 = *(int *)(&DAT_1805b8918 + lVar9);
  pcVar3 = *(code **)(lVar6 + 0xf0);
  if (iVar1 - iVar2 < 6) {
    *(int *)(&DAT_1805b8918 + lVar9) = iVar1;
    uVar11 = 0;
    (&DAT_1805b891c)[lVar9] = 1;
  }
  else {
    lVar6 = *(longlong *)(&DAT_1805b8908 + lVar9);
    *(int *)(&DAT_1805b8918 + lVar9) = iVar2 + 6;
    bVar4 = (byte)iVar2 & 0x1f;
    uVar11 = (*(int *)(lVar6 + (ulonglong)(uint)(iVar2 + 5 >> 5) * 4) << (-bVar4 & 0x1f) |
             *(uint *)(lVar6 + (ulonglong)(uint)(iVar2 >> 5) * 4) >> bVar4) & _DAT_1803fa728;
    uVar7 = uVar11 & 3;
    if (uVar7 != 0) {
      iVar10 = iVar2 + 2;
      *(int *)(&DAT_1805b8918 + lVar9) = iVar10;
      uVar7 = ((int)(2 - uVar7) >> 0x1f & 0x10U) + uVar7 * 4;
      iVar8 = uVar7 + 4;
      if ((iVar1 - (iVar2 + 6)) + 4 < iVar8) {
        uVar11 = 0;
        *(int *)(&DAT_1805b8918 + lVar9) = iVar1;
        (&DAT_1805b891c)[lVar9] = 1;
      }
      else {
        iVar8 = iVar2 + 2 + iVar8;
        bVar4 = (byte)iVar10 & 0x1f;
        *(int *)(&DAT_1805b8918 + lVar9) = iVar8;
        uVar11 = (*(int *)(lVar6 + (ulonglong)(uint)(iVar8 + -1 >> 5) * 4) << (0x20 - bVar4 & 0x1f)
                 | *(uint *)(lVar6 + (ulonglong)(uint)(iVar10 >> 5) * 4) >> bVar4) &
                 *(uint *)(&DAT_1803fa720 + (ulonglong)uVar7 * 4);
      }
      goto LAB_1800603d6;
    }
  }
  uVar11 = uVar11 >> 2;
LAB_1800603d6:
  (*pcVar3)(plVar5,(double)uVar11);
  return 1;
}


)B180060300",
    "f565885318796ca3c94f4383ed06d97706b87a74ed400fe63f501a3175036dbb",
    R"F180060300C(FUN_180039770)F180060300C",
    R"F180060300D(LAB_1800603d6
LAB_1800604e1
DAT_1803fa720
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908
DAT_1805b8914
DAT_1805b8918
DAT_1805b891c)F180060300D",
    R"F180060300T()F180060300T",
    R"F180060300F(26: if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
27: return 0;
31: if (((((int)uVar7 < 1) ||
35: LAB_1800604e1:
37: return 1;
40: if ((longlong *)(&DAT_1805b8908 + lVar9) == (longlong *)0x0) goto LAB_1800604e1;
44: if (iVar1 - iVar2 < 6) {
49: else {
56: if (uVar7 != 0) {
61: if ((iVar1 - (iVar2 + 6)) + 4 < iVar8) {
66: else {
74: goto LAB_1800603d6;
78: LAB_1800603d6:
80: return 1;)F180060300F",
    R"F180060300U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1800603d6.
TODO: recover the declaration, type and value for global/data reference LAB_1800604e1.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa720.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8914.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: recover the declaration, type and value for global/data reference DAT_1805b891c.
TODO: resolve the indirect call in body 29: dVar12 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);.
TODO: resolve the indirect call in body 36: (**(code **)(lVar6 + 0xe0))(plVar5);.
TODO: resolve the indirect call in body 43: pcVar3 = *(code **)(lVar6 + 0xf0);.
TODO: resolve the indirect call in body 79: (*pcVar3)(plVar5,(double)uVar11);.)F180060300U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180060300() noexcept {
    return kFunction_0x180060300;
}

// 0x180060520 FUN_180060520
// source: re/dump/decompile/0x180060520_FUN_180060520.c
// size: 197 bytes; thunk: false
// body sha256: df9a4de12255dd5e02ca9f2e44b3a2e2faaaef57c287cc0c43dde408e60c7baa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180060520{
    "0x180060520",
    "FUN_180060520",
    R"F180060520S(undefined FUN_180060520())F180060520S",
    R"B180060520(// 0x180060520  FUN_180060520
// size=197 thunk=false
// signature: undefined FUN_180060520()
// status: ok


undefined8 FUN_180060520(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar2 = (uint)dVar5;
    if (((((int)uVar2 < 1) ||
         (lVar3 = (ulonglong)(uVar2 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar3] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar3) != uVar2 >> 6)) || ((&DAT_1805b88e1)[lVar3] != '\0')) {
      lVar4 = *plVar1;
    }
    else {
      lVar4 = *plVar1;
      if (lVar3 != -0x1805b8908) {
        uVar2 = FUN_18001b060();
        (**(code **)(lVar4 + 0xf0))(plVar1,(double)uVar2);
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


)B180060520",
    "df9a4de12255dd5e02ca9f2e44b3a2e2faaaef57c287cc0c43dde408e60c7baa",
    R"F180060520C(FUN_18001b060
FUN_180039770)F180060520C",
    R"F180060520D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4)F180060520D",
    R"F180060520T()F180060520T",
    R"F180060520F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if (((((int)uVar2 < 1) ||
25: else {
27: if (lVar3 != -0x1805b8908) {
30: return 1;
34: return 1;
36: return 0;)F180060520F",
    R"F180060520U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 29: (**(code **)(lVar4 + 0xf0))(plVar1,(double)uVar2);.
TODO: resolve the indirect call in body 33: (**(code **)(lVar4 + 0xe0))(plVar1);.)F180060520U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180060520() noexcept {
    return kFunction_0x180060520;
}

// 0x1800605f0 FUN_1800605f0
// source: re/dump/decompile/0x1800605f0_FUN_1800605f0.c
// size: 206 bytes; thunk: false
// body sha256: 8d4f03c2e39cb24cef97e23d01bb1cfc77c4c92cb01f7ca4dccfc4c3f07fad1c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800605f0{
    "0x1800605f0",
    "FUN_1800605f0",
    R"F1800605f0S(undefined FUN_1800605f0())F1800605f0S",
    R"B1800605f0(// 0x1800605f0  FUN_1800605f0
// size=206 thunk=false
// signature: undefined FUN_1800605f0()
// status: ok


undefined8 FUN_1800605f0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar2 = (uint)dVar5;
    if (((((int)uVar2 < 1) ||
         (lVar3 = (ulonglong)(uVar2 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar3] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar3) != uVar2 >> 6)) || ((&DAT_1805b88e1)[lVar3] != '\0')) {
      lVar4 = *plVar1;
    }
    else {
      lVar4 = *plVar1;
      if (lVar3 != -0x1805b8908) {
        uVar2 = FUN_18001b060();
        (**(code **)(lVar4 + 0xf0))(plVar1,(double)(int)(uVar2 >> 1 ^ -(uVar2 & 1)));
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


)B1800605f0",
    "8d4f03c2e39cb24cef97e23d01bb1cfc77c4c92cb01f7ca4dccfc4c3f07fad1c",
    R"F1800605f0C(FUN_18001b060
FUN_180039770)F1800605f0C",
    R"F1800605f0D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4)F1800605f0D",
    R"F1800605f0T()F1800605f0T",
    R"F1800605f0F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if (((((int)uVar2 < 1) ||
25: else {
27: if (lVar3 != -0x1805b8908) {
30: return 1;
34: return 1;
36: return 0;)F1800605f0F",
    R"F1800605f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 29: (**(code **)(lVar4 + 0xf0))(plVar1,(double)(int)(uVar2 >> 1 ^ -(uVar2 & 1)));.
TODO: resolve the indirect call in body 33: (**(code **)(lVar4 + 0xe0))(plVar1);.)F1800605f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800605f0() noexcept {
    return kFunction_0x1800605f0;
}

// 0x1800606c0 FUN_1800606c0
// source: re/dump/decompile/0x1800606c0_FUN_1800606c0.c
// size: 250 bytes; thunk: false
// body sha256: 64559a2d43e71d97f81ebdd87d1962daf6c053af67dd389009a35fcf707b1ac5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800606c0{
    "0x1800606c0",
    "FUN_1800606c0",
    R"F1800606c0S(undefined FUN_1800606c0())F1800606c0S",
    R"B1800606c0(// 0x1800606c0  FUN_1800606c0
// size=250 thunk=false
// signature: undefined FUN_1800606c0()
// status: ok


undefined8 FUN_1800606c0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar6 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar6;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] != '\0')) {
      lVar5 = *plVar1;
    }
    else {
      lVar5 = *plVar1;
      if (lVar4 != -0x1805b8908) {
        uVar2 = FUN_18001b100();
        if (-1 < (longlong)uVar2) {
          (**(code **)(lVar5 + 0xf0))(plVar1,(double)(longlong)uVar2);
          return 1;
        }
        (**(code **)(lVar5 + 0xf0))(plVar1,(double)uVar2);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


)B1800606c0",
    "64559a2d43e71d97f81ebdd87d1962daf6c053af67dd389009a35fcf707b1ac5",
    R"F1800606c0C(FUN_18001b100
FUN_180039770)F1800606c0C",
    R"F1800606c0D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4)F1800606c0D",
    R"F1800606c0T()F1800606c0T",
    R"F1800606c0F(18: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
21: if (((((int)uVar3 < 1) ||
26: else {
28: if (lVar4 != -0x1805b8908) {
30: if (-1 < (longlong)uVar2) {
32: return 1;
35: return 1;
39: return 1;
41: return 0;)F1800606c0F",
    R"F1800606c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: resolve the indirect call in body 19: dVar6 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 31: (**(code **)(lVar5 + 0xf0))(plVar1,(double)(longlong)uVar2);.
TODO: resolve the indirect call in body 34: (**(code **)(lVar5 + 0xf0))(plVar1,(double)uVar2);.
TODO: resolve the indirect call in body 38: (**(code **)(lVar5 + 0xe0))(plVar1);.)F1800606c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800606c0() noexcept {
    return kFunction_0x1800606c0;
}

// 0x1800607c0 FUN_1800607c0
// source: re/dump/decompile/0x1800607c0_FUN_1800607c0.c
// size: 211 bytes; thunk: false
// body sha256: 497c8a6ee533a688689cb5a1d04d3bfa97ddd5d2f5e8a9efcc4ee1eeed8b36f4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800607c0{
    "0x1800607c0",
    "FUN_1800607c0",
    R"F1800607c0S(undefined FUN_1800607c0())F1800607c0S",
    R"B1800607c0(// 0x1800607c0  FUN_1800607c0
// size=211 thunk=false
// signature: undefined FUN_1800607c0()
// status: ok


undefined8 FUN_1800607c0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar2 = (uint)dVar5;
    if (((((int)uVar2 < 1) ||
         (lVar3 = (ulonglong)(uVar2 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar3] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar3) != uVar2 >> 6)) || ((&DAT_1805b88e1)[lVar3] != '\0')) {
      lVar4 = *plVar1;
    }
    else {
      lVar4 = *plVar1;
      if (lVar3 != -0x1805b8908) {
        uVar2 = FUN_18001b100();
        (**(code **)(lVar4 + 0xf0))
                  (plVar1,(double)(longlong)((ulonglong)(uVar2 >> 1) ^ -(ulonglong)(uVar2 & 1)));
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


)B1800607c0",
    "497c8a6ee533a688689cb5a1d04d3bfa97ddd5d2f5e8a9efcc4ee1eeed8b36f4",
    R"F1800607c0C(FUN_18001b100
FUN_180039770)F1800607c0C",
    R"F1800607c0D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4)F1800607c0D",
    R"F1800607c0T()F1800607c0T",
    R"F1800607c0F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if (((((int)uVar2 < 1) ||
25: else {
27: if (lVar3 != -0x1805b8908) {
31: return 1;
35: return 1;
37: return 0;)F1800607c0F",
    R"F1800607c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 29: (**(code **)(lVar4 + 0xf0)).
TODO: resolve the indirect call in body 34: (**(code **)(lVar4 + 0xe0))(plVar1);.)F1800607c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800607c0() noexcept {
    return kFunction_0x1800607c0;
}

// 0x1800608a0 FUN_1800608a0
// source: re/dump/decompile/0x1800608a0_FUN_1800608a0.c
// size: 312 bytes; thunk: false
// body sha256: bae821ebd6b4f21d538b846ec170eed231c6225d9093e83356fabb57f48d90aa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800608a0{
    "0x1800608a0",
    "FUN_1800608a0",
    R"F1800608a0S(undefined FUN_1800608a0())F1800608a0S",
    R"B1800608a0(// 0x1800608a0  FUN_1800608a0
// size=312 thunk=false
// signature: undefined FUN_1800608a0()
// status: ok


undefined8 FUN_1800608a0(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  double dVar9;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    dVar9 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    uVar6 = (uint)dVar9;
    if (((((int)uVar6 < 1) ||
         (lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] != '\0')) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = *plVar4;
      if ((longlong *)(&DAT_1805b8908 + lVar7) != (longlong *)0x0) {
        pcVar2 = *(code **)(lVar5 + 0xf0);
        iVar1 = *(int *)(&DAT_1805b8918 + lVar7);
        if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < 0x20) {
          *(int *)(&DAT_1805b8918 + lVar7) = *(int *)(&DAT_1805b8914 + lVar7);
          fVar8 = 0.0;
          (&DAT_1805b891c)[lVar7] = 1;
        }
        else {
          *(int *)(&DAT_1805b8918 + lVar7) = iVar1 + 0x20;
          bVar3 = (byte)iVar1 & 0x1f;
          lVar7 = *(longlong *)(&DAT_1805b8908 + lVar7);
          fVar8 = (float)((*(int *)(lVar7 + (ulonglong)(uint)(iVar1 + 0x1f >> 5) * 4) <<
                           (0x20 - bVar3 & 0x1f) |
                          *(uint *)(lVar7 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar3) &
                         DAT_1803fa790);
        }
        (*pcVar2)(plVar4,(double)fVar8);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar4);
    return 1;
  }
  return 0;
}


)B1800608a0",
    "bae821ebd6b4f21d538b846ec170eed231c6225d9093e83356fabb57f48d90aa",
    R"F1800608a0C(FUN_180039770)F1800608a0C",
    R"F1800608a0D(DAT_1803fa790
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908
DAT_1805b8914
DAT_1805b8918
DAT_1805b891c)F1800608a0D",
    R"F1800608a0T()F1800608a0T",
    R"F1800608a0F(21: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
24: if (((((int)uVar6 < 1) ||
29: else {
31: if ((longlong *)(&DAT_1805b8908 + lVar7) != (longlong *)0x0) {
34: if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < 0x20) {
39: else {
49: return 1;
53: return 1;
55: return 0;)F1800608a0F",
    R"F1800608a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa790.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8914.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: recover the declaration, type and value for global/data reference DAT_1805b891c.
TODO: resolve the indirect call in body 22: dVar9 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);.
TODO: resolve the indirect call in body 32: pcVar2 = *(code **)(lVar5 + 0xf0);.
TODO: resolve the indirect call in body 48: (*pcVar2)(plVar4,(double)fVar8);.
TODO: resolve the indirect call in body 52: (**(code **)(lVar5 + 0xe0))(plVar4);.)F1800608a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800608a0() noexcept {
    return kFunction_0x1800608a0;
}

// 0x1800609e0 FUN_1800609e0
// source: re/dump/decompile/0x1800609e0_FUN_1800609e0.c
// size: 316 bytes; thunk: false
// body sha256: 2c02b66e6f2da8ad61c6e3a905e7ddd077a1d702caa9a708c9cab979e7785eab
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800609e0{
    "0x1800609e0",
    "FUN_1800609e0",
    R"F1800609e0S(undefined FUN_1800609e0())F1800609e0S",
    R"B1800609e0(// 0x1800609e0  FUN_1800609e0
// size=316 thunk=false
// signature: undefined FUN_1800609e0()
// status: ok


undefined8 FUN_1800609e0(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  double dVar8;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar5 = (uint)dVar8;
    if (((((int)uVar5 < 1) ||
         (lVar6 = (ulonglong)(uVar5 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar6] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar6) != uVar5 >> 6)) || ((&DAT_1805b88e1)[lVar6] != '\0')) {
      lVar4 = *plVar3;
    }
    else {
      lVar4 = *plVar3;
      if ((longlong *)(&DAT_1805b8908 + lVar6) != (longlong *)0x0) {
        pcVar2 = *(code **)(lVar4 + 0xf0);
        iVar1 = *(int *)(&DAT_1805b8918 + lVar6);
        if (*(int *)(&DAT_1805b8914 + lVar6) - iVar1 < 8) {
          *(int *)(&DAT_1805b8918 + lVar6) = *(int *)(&DAT_1805b8914 + lVar6);
          bVar7 = 0;
          (&DAT_1805b891c)[lVar6] = 1;
        }
        else {
          *(int *)(&DAT_1805b8918 + lVar6) = iVar1 + 8;
          bVar7 = (byte)iVar1 & 0x1f;
          lVar6 = *(longlong *)(&DAT_1805b8908 + lVar6);
          bVar7 = ((byte)(*(int *)(lVar6 + (ulonglong)(uint)(iVar1 + 7 >> 5) * 4) <<
                         (0x20 - bVar7 & 0x1f)) |
                  (byte)(*(uint *)(lVar6 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar7)) &
                  (byte)DAT_1803fa730;
        }
        (*pcVar2)(plVar3,(double)(int)(char)bVar7);
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar3);
    return 1;
  }
  return 0;
}


)B1800609e0",
    "2c02b66e6f2da8ad61c6e3a905e7ddd077a1d702caa9a708c9cab979e7785eab",
    R"F1800609e0C(FUN_180039770)F1800609e0C",
    R"F1800609e0D(DAT_1803fa730
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908
DAT_1805b8914
DAT_1805b8918
DAT_1805b891c)F1800609e0D",
    R"F1800609e0T()F1800609e0T",
    R"F1800609e0F(20: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
23: if (((((int)uVar5 < 1) ||
28: else {
30: if ((longlong *)(&DAT_1805b8908 + lVar6) != (longlong *)0x0) {
33: if (*(int *)(&DAT_1805b8914 + lVar6) - iVar1 < 8) {
38: else {
48: return 1;
52: return 1;
54: return 0;)F1800609e0F",
    R"F1800609e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa730.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8914.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: recover the declaration, type and value for global/data reference DAT_1805b891c.
TODO: resolve the indirect call in body 21: dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 31: pcVar2 = *(code **)(lVar4 + 0xf0);.
TODO: resolve the indirect call in body 47: (*pcVar2)(plVar3,(double)(int)(char)bVar7);.
TODO: resolve the indirect call in body 51: (**(code **)(lVar4 + 0xe0))(plVar3);.)F1800609e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800609e0() noexcept {
    return kFunction_0x1800609e0;
}

// 0x180060b20 FUN_180060b20
// source: re/dump/decompile/0x180060b20_FUN_180060b20.c
// size: 313 bytes; thunk: false
// body sha256: 342e29dc5db5374d31acbded4d6070b466acf235c3555dd98473ffa570788c48
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180060b20{
    "0x180060b20",
    "FUN_180060b20",
    R"F180060b20S(undefined FUN_180060b20())F180060b20S",
    R"B180060b20(// 0x180060b20  FUN_180060b20
// size=313 thunk=false
// signature: undefined FUN_180060b20()
// status: ok


undefined8 FUN_180060b20(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    dVar8 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    uVar6 = (uint)dVar8;
    if (((((int)uVar6 < 1) ||
         (lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] != '\0')) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = *plVar4;
      if ((longlong *)(&DAT_1805b8908 + lVar7) != (longlong *)0x0) {
        pcVar2 = *(code **)(lVar5 + 0xf0);
        iVar1 = *(int *)(&DAT_1805b8918 + lVar7);
        if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < 8) {
          *(int *)(&DAT_1805b8918 + lVar7) = *(int *)(&DAT_1805b8914 + lVar7);
          uVar6 = 0;
          (&DAT_1805b891c)[lVar7] = 1;
        }
        else {
          *(int *)(&DAT_1805b8918 + lVar7) = iVar1 + 8;
          bVar3 = (byte)iVar1 & 0x1f;
          lVar7 = *(longlong *)(&DAT_1805b8908 + lVar7);
          uVar6 = (*(int *)(lVar7 + (ulonglong)(uint)(iVar1 + 7 >> 5) * 4) << (0x20 - bVar3 & 0x1f)
                  | *(uint *)(lVar7 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar3) & DAT_1803fa730;
        }
        (*pcVar2)(plVar4,(double)(int)uVar6);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar4);
    return 1;
  }
  return 0;
}


)B180060b20",
    "342e29dc5db5374d31acbded4d6070b466acf235c3555dd98473ffa570788c48",
    R"F180060b20C(FUN_180039770)F180060b20C",
    R"F180060b20D(DAT_1803fa730
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908
DAT_1805b8914
DAT_1805b8918
DAT_1805b891c)F180060b20D",
    R"F180060b20T()F180060b20T",
    R"F180060b20F(20: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
23: if (((((int)uVar6 < 1) ||
28: else {
30: if ((longlong *)(&DAT_1805b8908 + lVar7) != (longlong *)0x0) {
33: if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < 8) {
38: else {
46: return 1;
50: return 1;
52: return 0;)F180060b20F",
    R"F180060b20U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa730.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8914.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: recover the declaration, type and value for global/data reference DAT_1805b891c.
TODO: resolve the indirect call in body 21: dVar8 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);.
TODO: resolve the indirect call in body 31: pcVar2 = *(code **)(lVar5 + 0xf0);.
TODO: resolve the indirect call in body 45: (*pcVar2)(plVar4,(double)(int)uVar6);.
TODO: resolve the indirect call in body 49: (**(code **)(lVar5 + 0xe0))(plVar4);.)F180060b20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180060b20() noexcept {
    return kFunction_0x180060b20;
}

// 0x180060c60 FUN_180060c60
// source: re/dump/decompile/0x180060c60_FUN_180060c60.c
// size: 316 bytes; thunk: false
// body sha256: aec62177bcd956df20d207321fc451eb1f4f8328f8ce273f7469fe5f31f2a21e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180060c60{
    "0x180060c60",
    "FUN_180060c60",
    R"F180060c60S(undefined FUN_180060c60())F180060c60S",
    R"B180060c60(// 0x180060c60  FUN_180060c60
// size=316 thunk=false
// signature: undefined FUN_180060c60()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180060c60(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ushort uVar8;
  double dVar9;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    dVar9 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    uVar6 = (uint)dVar9;
    if (((((int)uVar6 < 1) ||
         (lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] != '\0')) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = *plVar4;
      if ((longlong *)(&DAT_1805b8908 + lVar7) != (longlong *)0x0) {
        pcVar2 = *(code **)(lVar5 + 0xf0);
        iVar1 = *(int *)(&DAT_1805b8918 + lVar7);
        if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < 0x10) {
          *(int *)(&DAT_1805b8918 + lVar7) = *(int *)(&DAT_1805b8914 + lVar7);
          uVar8 = 0;
          (&DAT_1805b891c)[lVar7] = 1;
        }
        else {
          *(int *)(&DAT_1805b8918 + lVar7) = iVar1 + 0x10;
          bVar3 = (byte)iVar1 & 0x1f;
          lVar7 = *(longlong *)(&DAT_1805b8908 + lVar7);
          uVar8 = ((ushort)(*(int *)(lVar7 + (ulonglong)(uint)(iVar1 + 0xf >> 5) * 4) <<
                           (0x20 - bVar3 & 0x1f)) |
                  (ushort)(*(uint *)(lVar7 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar3)) &
                  (ushort)_DAT_1803fa750;
        }
        (*pcVar2)(plVar4,(double)(int)(short)uVar8);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar4);
    return 1;
  }
  return 0;
}


)B180060c60",
    "aec62177bcd956df20d207321fc451eb1f4f8328f8ce273f7469fe5f31f2a21e",
    R"F180060c60C(FUN_180039770)F180060c60C",
    R"F180060c60D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908
DAT_1805b8914
DAT_1805b8918
DAT_1805b891c)F180060c60D",
    R"F180060c60T()F180060c60T",
    R"F180060c60F(23: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
26: if (((((int)uVar6 < 1) ||
31: else {
33: if ((longlong *)(&DAT_1805b8908 + lVar7) != (longlong *)0x0) {
36: if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < 0x10) {
41: else {
51: return 1;
55: return 1;
57: return 0;)F180060c60F",
    R"F180060c60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8914.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: recover the declaration, type and value for global/data reference DAT_1805b891c.
TODO: resolve the indirect call in body 24: dVar9 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);.
TODO: resolve the indirect call in body 34: pcVar2 = *(code **)(lVar5 + 0xf0);.
TODO: resolve the indirect call in body 50: (*pcVar2)(plVar4,(double)(int)(short)uVar8);.
TODO: resolve the indirect call in body 54: (**(code **)(lVar5 + 0xe0))(plVar4);.)F180060c60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180060c60() noexcept {
    return kFunction_0x180060c60;
}

// 0x180060da0 FUN_180060da0
// source: re/dump/decompile/0x180060da0_FUN_180060da0.c
// size: 313 bytes; thunk: false
// body sha256: 0d57b85c10d9f3df5fcd5cb61ea3f562d4f708edc95c9e1b1f2db3315f336d94
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180060da0{
    "0x180060da0",
    "FUN_180060da0",
    R"F180060da0S(undefined FUN_180060da0())F180060da0S",
    R"B180060da0(// 0x180060da0  FUN_180060da0
// size=313 thunk=false
// signature: undefined FUN_180060da0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180060da0(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    dVar8 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    uVar6 = (uint)dVar8;
    if (((((int)uVar6 < 1) ||
         (lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] != '\0')) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = *plVar4;
      if ((longlong *)(&DAT_1805b8908 + lVar7) != (longlong *)0x0) {
        pcVar2 = *(code **)(lVar5 + 0xf0);
        iVar1 = *(int *)(&DAT_1805b8918 + lVar7);
        if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < 0x10) {
          *(int *)(&DAT_1805b8918 + lVar7) = *(int *)(&DAT_1805b8914 + lVar7);
          uVar6 = 0;
          (&DAT_1805b891c)[lVar7] = 1;
        }
        else {
          *(int *)(&DAT_1805b8918 + lVar7) = iVar1 + 0x10;
          bVar3 = (byte)iVar1 & 0x1f;
          lVar7 = *(longlong *)(&DAT_1805b8908 + lVar7);
          uVar6 = (*(int *)(lVar7 + (ulonglong)(uint)(iVar1 + 0xf >> 5) * 4) <<
                   (0x20 - bVar3 & 0x1f) |
                  *(uint *)(lVar7 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar3) & _DAT_1803fa750;
        }
        (*pcVar2)(plVar4,(double)(int)uVar6);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar4);
    return 1;
  }
  return 0;
}


)B180060da0",
    "0d57b85c10d9f3df5fcd5cb61ea3f562d4f708edc95c9e1b1f2db3315f336d94",
    R"F180060da0C(FUN_180039770)F180060da0C",
    R"F180060da0D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908
DAT_1805b8914
DAT_1805b8918
DAT_1805b891c)F180060da0D",
    R"F180060da0T()F180060da0T",
    R"F180060da0F(22: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
25: if (((((int)uVar6 < 1) ||
30: else {
32: if ((longlong *)(&DAT_1805b8908 + lVar7) != (longlong *)0x0) {
35: if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < 0x10) {
40: else {
49: return 1;
53: return 1;
55: return 0;)F180060da0F",
    R"F180060da0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8914.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: recover the declaration, type and value for global/data reference DAT_1805b891c.
TODO: resolve the indirect call in body 23: dVar8 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);.
TODO: resolve the indirect call in body 33: pcVar2 = *(code **)(lVar5 + 0xf0);.
TODO: resolve the indirect call in body 48: (*pcVar2)(plVar4,(double)(int)uVar6);.
TODO: resolve the indirect call in body 52: (**(code **)(lVar5 + 0xe0))(plVar4);.)F180060da0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180060da0() noexcept {
    return kFunction_0x180060da0;
}

// 0x180060ee0 FUN_180060ee0
// source: re/dump/decompile/0x180060ee0_FUN_180060ee0.c
// size: 313 bytes; thunk: false
// body sha256: 3552a0f107f882b6c56957fc9b1f0310717ad4bdb24099cdbac12816b5887f19
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180060ee0{
    "0x180060ee0",
    "FUN_180060ee0",
    R"F180060ee0S(undefined FUN_180060ee0())F180060ee0S",
    R"B180060ee0(// 0x180060ee0  FUN_180060ee0
// size=313 thunk=false
// signature: undefined FUN_180060ee0()
// status: ok


undefined8 FUN_180060ee0(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    dVar8 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    uVar6 = (uint)dVar8;
    if (((((int)uVar6 < 1) ||
         (lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] != '\0')) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = *plVar4;
      if ((longlong *)(&DAT_1805b8908 + lVar7) != (longlong *)0x0) {
        pcVar2 = *(code **)(lVar5 + 0xf0);
        iVar1 = *(int *)(&DAT_1805b8918 + lVar7);
        if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < 0x20) {
          *(int *)(&DAT_1805b8918 + lVar7) = *(int *)(&DAT_1805b8914 + lVar7);
          uVar6 = 0;
          (&DAT_1805b891c)[lVar7] = 1;
        }
        else {
          *(int *)(&DAT_1805b8918 + lVar7) = iVar1 + 0x20;
          bVar3 = (byte)iVar1 & 0x1f;
          lVar7 = *(longlong *)(&DAT_1805b8908 + lVar7);
          uVar6 = (*(int *)(lVar7 + (ulonglong)(uint)(iVar1 + 0x1f >> 5) * 4) <<
                   (0x20 - bVar3 & 0x1f) |
                  *(uint *)(lVar7 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar3) & DAT_1803fa790;
        }
        (*pcVar2)(plVar4,(double)(int)uVar6);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar4);
    return 1;
  }
  return 0;
}


)B180060ee0",
    "3552a0f107f882b6c56957fc9b1f0310717ad4bdb24099cdbac12816b5887f19",
    R"F180060ee0C(FUN_180039770)F180060ee0C",
    R"F180060ee0D(DAT_1803fa790
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908
DAT_1805b8914
DAT_1805b8918
DAT_1805b891c)F180060ee0D",
    R"F180060ee0T()F180060ee0T",
    R"F180060ee0F(20: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
23: if (((((int)uVar6 < 1) ||
28: else {
30: if ((longlong *)(&DAT_1805b8908 + lVar7) != (longlong *)0x0) {
33: if (*(int *)(&DAT_1805b8914 + lVar7) - iVar1 < 0x20) {
38: else {
47: return 1;
51: return 1;
53: return 0;)F180060ee0F",
    R"F180060ee0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa790.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8914.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: recover the declaration, type and value for global/data reference DAT_1805b891c.
TODO: resolve the indirect call in body 21: dVar8 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);.
TODO: resolve the indirect call in body 31: pcVar2 = *(code **)(lVar5 + 0xf0);.
TODO: resolve the indirect call in body 46: (*pcVar2)(plVar4,(double)(int)uVar6);.
TODO: resolve the indirect call in body 50: (**(code **)(lVar5 + 0xe0))(plVar4);.)F180060ee0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180060ee0() noexcept {
    return kFunction_0x180060ee0;
}

// 0x180061020 FUN_180061020
// source: re/dump/decompile/0x180061020_FUN_180061020.c
// size: 429 bytes; thunk: false
// body sha256: 50edb339497edd29efad12291fc15775f221be85b7cd5690eb7a649acf3021df
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180061020{
    "0x180061020",
    "FUN_180061020",
    R"F180061020S(undefined FUN_180061020())F180061020S",
    R"B180061020(// 0x180061020  FUN_180061020
// size=429 thunk=false
// signature: undefined FUN_180061020()
// status: ok


undefined8 FUN_180061020(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  double dVar12;
  undefined8 local_res8;
  
  plVar6 = (longlong *)FUN_180039770();
  if ((plVar6 != (longlong *)0x0) && (plVar6[1] == param_2)) {
    dVar12 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,1);
    uVar8 = (uint)dVar12;
    if (((((int)uVar8 < 1) ||
         (lVar9 = (ulonglong)(uVar8 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar9] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar9) != uVar8 >> 6)) || ((&DAT_1805b88e1)[lVar9] != '\0')) {
      lVar7 = *plVar6;
    }
    else {
      lVar7 = *plVar6;
      plVar11 = (longlong *)(&DAT_1805b8908 + lVar9);
      if (plVar11 != (longlong *)0x0) {
        iVar1 = *(int *)(&DAT_1805b8914 + lVar9);
        iVar2 = *(int *)(&DAT_1805b8918 + lVar9);
        pcVar3 = *(code **)(lVar7 + 0xf0);
        if (iVar1 - iVar2 < 0x20) {
          *(int *)(&DAT_1805b8918 + lVar9) = iVar1;
          uVar8 = 0;
          (&DAT_1805b891c)[lVar9] = 1;
          iVar10 = iVar1;
        }
        else {
          iVar10 = iVar2 + 0x20;
          *(int *)(&DAT_1805b8918 + lVar9) = iVar10;
          bVar4 = (byte)iVar2 & 0x1f;
          uVar8 = (*(int *)(*plVar11 + (ulonglong)(uint)(iVar2 + 0x1f >> 5) * 4) << (-bVar4 & 0x1f)
                  | *(uint *)(*plVar11 + (ulonglong)(uint)(iVar2 >> 5) * 4) >> bVar4) &
                  DAT_1803fa790;
        }
        if (iVar1 - iVar10 < 0x20) {
          *(int *)(&DAT_1805b8918 + lVar9) = iVar1;
          uVar5 = 0;
          (&DAT_1805b891c)[lVar9] = 1;
        }
        else {
          *(int *)(&DAT_1805b8918 + lVar9) = iVar10 + 0x20;
          bVar4 = (byte)iVar10 & 0x1f;
          uVar5 = (*(int *)(*plVar11 + (ulonglong)(uint)(iVar10 + 0x1f >> 5) * 4) <<
                   (0x20 - bVar4 & 0x1f) |
                  *(uint *)(*plVar11 + (ulonglong)(uint)(iVar10 >> 5) * 4) >> bVar4) & DAT_1803fa790
          ;
        }
        local_res8 = CONCAT44(uVar5,uVar8);
        (*pcVar3)(plVar6,(double)local_res8);
        return 1;
      }
    }
    (**(code **)(lVar7 + 0xe0))(plVar6);
    return 1;
  }
  return 0;
}


)B180061020",
    "50edb339497edd29efad12291fc15775f221be85b7cd5690eb7a649acf3021df",
    R"F180061020C(FUN_180039770)F180061020C",
    R"F180061020D(DAT_1803fa790
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908
DAT_1805b8914
DAT_1805b8918
DAT_1805b891c)F180061020D",
    R"F180061020T()F180061020T",
    R"F180061020F(25: if ((plVar6 != (longlong *)0x0) && (plVar6[1] == param_2)) {
28: if (((((int)uVar8 < 1) ||
33: else {
36: if (plVar11 != (longlong *)0x0) {
40: if (iVar1 - iVar2 < 0x20) {
46: else {
54: if (iVar1 - iVar10 < 0x20) {
59: else {
69: return 1;
73: return 1;
75: return 0;)F180061020F",
    R"F180061020U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa790.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8914.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: recover the declaration, type and value for global/data reference DAT_1805b891c.
TODO: resolve the indirect call in body 26: dVar12 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,1);.
TODO: resolve the indirect call in body 39: pcVar3 = *(code **)(lVar7 + 0xf0);.
TODO: resolve the indirect call in body 68: (*pcVar3)(plVar6,(double)local_res8);.
TODO: resolve the indirect call in body 72: (**(code **)(lVar7 + 0xe0))(plVar6);.)F180061020U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180061020() noexcept {
    return kFunction_0x180061020;
}

// 0x1800611e0 FUN_1800611e0
// source: re/dump/decompile/0x1800611e0_FUN_1800611e0.c
// size: 217 bytes; thunk: false
// body sha256: bf436e3c78090a59f31199f3388f5ec68fcaec35e03a9d198e35e5589b412991
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800611e0{
    "0x1800611e0",
    "FUN_1800611e0",
    R"F1800611e0S(undefined FUN_1800611e0())F1800611e0S",
    R"B1800611e0(// 0x1800611e0  FUN_1800611e0
// size=217 thunk=false
// signature: undefined FUN_1800611e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800611e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_38 [32];
  float local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    uVar2 = 0;
  }
  else {
    dVar6 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar6;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] != '\0')) {
      lVar5 = *plVar1;
    }
    else {
      lVar5 = *plVar1;
      if (&DAT_1805b8908 + lVar4 != (undefined *)0x0) {
        FUN_18001ad50(&DAT_1805b8908 + lVar4,local_18,0x20);
        (**(code **)(lVar5 + 0xf0))(plVar1,(double)local_18[0]);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar1);
    uVar2 = 1;
  }
  return uVar2;
}


)B1800611e0",
    "bf436e3c78090a59f31199f3388f5ec68fcaec35e03a9d198e35e5589b412991",
    R"F1800611e0C(FUN_18001ad50
FUN_180039770)F1800611e0C",
    R"F1800611e0D(DAT_1803da4c0
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908)F1800611e0D",
    R"F1800611e0T()F1800611e0T",
    R"F1800611e0F(24: if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
27: else {
30: if (((((int)uVar3 < 1) ||
35: else {
37: if (&DAT_1805b8908 + lVar4 != (undefined *)0x0) {
40: return 1;
46: return uVar2;)F1800611e0F",
    R"F1800611e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: resolve the indirect call in body 28: dVar6 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 39: (**(code **)(lVar5 + 0xf0))(plVar1,(double)local_18[0]);.
TODO: resolve the indirect call in body 43: (**(code **)(lVar5 + 0xe0))(plVar1);.)F1800611e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800611e0() noexcept {
    return kFunction_0x1800611e0;
}

// 0x1800612c0 FUN_1800612c0
// source: re/dump/decompile/0x1800612c0_FUN_1800612c0.c
// size: 623 bytes; thunk: false
// body sha256: 2c64bccc43ce17c2edb932acc01dee91839d7eb7db1fcd58af3edd5712401cdc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800612c0{
    "0x1800612c0",
    "FUN_1800612c0",
    R"F1800612c0S(undefined FUN_1800612c0())F1800612c0S",
    R"B1800612c0(// 0x1800612c0  FUN_1800612c0
// size=623 thunk=false
// signature: undefined FUN_1800612c0()
// status: ok


undefined8 FUN_1800612c0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  double dVar14;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_2)) {
    dVar14 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    uVar8 = (uint)dVar14;
    if (((((int)uVar8 < 1) ||
         (lVar10 = (ulonglong)(uVar8 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar10] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar10) != uVar8 >> 6)) || ((&DAT_1805b88e1)[lVar10] != '\0')) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = *plVar4;
      if ((longlong *)(&DAT_1805b8908 + lVar10) != (longlong *)0x0) {
        iVar11 = 0x400;
        cVar3 = (**(code **)(lVar5 + 0x138))(plVar4,2,3);
        if (cVar3 != '\0') {
          dVar14 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);
          iVar11 = (int)dVar14;
          if (iVar11 < 1) {
            iVar11 = 1;
          }
          else if (0x2000 < iVar11) {
            iVar11 = 0x2000;
          }
        }
        cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,3,1);
        if (cVar3 == '\0') {
          cVar3 = '\0';
        }
        else {
          cVar3 = (**(code **)(*plVar4 + 200))(plVar4,3);
        }
        lVar5 = FUN_18005e2e0(iVar11 + 1);
        uVar2 = DAT_1803fa730;
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 0xe0))(plVar4);
          uVar6 = 1;
        }
        else {
          bVar1 = false;
          iVar13 = 0;
          while( true ) {
            iVar9 = *(int *)(&DAT_1805b8918 + lVar10);
            if (*(int *)(&DAT_1805b8914 + lVar10) - iVar9 < 8) {
              *(int *)(&DAT_1805b8918 + lVar10) = *(int *)(&DAT_1805b8914 + lVar10);
              bVar12 = 0;
              (&DAT_1805b891c)[lVar10] = 1;
            }
            else {
              lVar7 = *(longlong *)(&DAT_1805b8908 + lVar10);
              *(int *)(&DAT_1805b8918 + lVar10) = iVar9 + 8;
              bVar12 = (byte)iVar9 & 0x1f;
              bVar12 = ((byte)(*(int *)(lVar7 + (ulonglong)(uint)(iVar9 + 7 >> 5) * 4) <<
                              (0x20 - bVar12 & 0x1f)) |
                       (byte)(*(uint *)(lVar7 + (ulonglong)(uint)(iVar9 >> 5) * 4) >> bVar12)) &
                       (byte)uVar2;
            }
            if ((bVar12 == 0) || ((cVar3 != '\0' && (bVar12 == 10)))) break;
            if (iVar13 < iVar11) {
              lVar7 = (longlong)iVar13;
              iVar13 = iVar13 + 1;
              *(byte *)(lVar7 + lVar5) = bVar12;
            }
            else {
              bVar1 = true;
            }
          }
          *(undefined1 *)(iVar13 + lVar5) = 0;
          if (((&DAT_1805b891c)[lVar10] != '\0') || (bVar1)) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          iVar9 = 0;
          if (-1 < iVar13) {
            iVar9 = iVar13;
          }
          if (iVar9 <= iVar11) {
            iVar11 = iVar9;
          }
          (**(code **)(*plVar4 + 0xe8))(plVar4,lVar5,iVar11);
          (**(code **)(*plVar4 + 0xf8))(plVar4,uVar6);
          uVar6 = 2;
        }
        return uVar6;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar4);
    return 1;
  }
  return 0;
}


)B1800612c0",
    "2c64bccc43ce17c2edb932acc01dee91839d7eb7db1fcd58af3edd5712401cdc",
    R"F1800612c0C(FUN_180039770
FUN_18005e2e0)F1800612c0C",
    R"F1800612c0D(DAT_1803fa730
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908
DAT_1805b8914
DAT_1805b8918
DAT_1805b891c)F1800612c0D",
    R"F1800612c0T()F1800612c0T",
    R"F1800612c0F(26: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_2)) {
29: if (((((int)uVar8 < 1) ||
34: else {
36: if ((longlong *)(&DAT_1805b8908 + lVar10) != (longlong *)0x0) {
39: if (cVar3 != '\0') {
42: if (iVar11 < 1) {
45: else if (0x2000 < iVar11) {
50: if (cVar3 == '\0') {
53: else {
58: if (lVar5 == 0) {
62: else {
65: while( true ) {
67: if (*(int *)(&DAT_1805b8914 + lVar10) - iVar9 < 8) {
72: else {
81: if ((bVar12 == 0) || ((cVar3 != '\0' && (bVar12 == 10)))) break;
82: if (iVar13 < iVar11) {
87: else {
92: if (((&DAT_1805b891c)[lVar10] != '\0') || (bVar1)) {
95: else {
99: if (-1 < iVar13) {
102: if (iVar9 <= iVar11) {
109: return uVar6;
113: return 1;
115: return 0;)F1800612c0F",
    R"F1800612c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa730.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8914.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: recover the declaration, type and value for global/data reference DAT_1805b891c.
TODO: resolve the indirect call in body 27: dVar14 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);.
TODO: resolve the indirect call in body 38: cVar3 = (**(code **)(lVar5 + 0x138))(plVar4,2,3);.
TODO: resolve the indirect call in body 40: dVar14 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);.
TODO: resolve the indirect call in body 49: cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,3,1);.
TODO: resolve the indirect call in body 54: cVar3 = (**(code **)(*plVar4 + 200))(plVar4,3);.
TODO: resolve the indirect call in body 59: (**(code **)(*plVar4 + 0xe0))(plVar4);.
TODO: resolve the indirect call in body 105: (**(code **)(*plVar4 + 0xe8))(plVar4,lVar5,iVar11);.
TODO: resolve the indirect call in body 106: (**(code **)(*plVar4 + 0xf8))(plVar4,uVar6);.
TODO: resolve the indirect call in body 112: (**(code **)(lVar5 + 0xe0))(plVar4);.)F1800612c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800612c0() noexcept {
    return kFunction_0x1800612c0;
}

// 0x180061540 FUN_180061540
// source: re/dump/decompile/0x180061540_FUN_180061540.c
// size: 331 bytes; thunk: false
// body sha256: d5664b872c6357b7c8e100e330c6fb064de725b9d23944906cc6430a44f1be53
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180061540{
    "0x180061540",
    "FUN_180061540",
    R"F180061540S(undefined FUN_180061540())F180061540S",
    R"B180061540(// 0x180061540  FUN_180061540
// size=331 thunk=false
// signature: undefined FUN_180061540()
// status: ok


undefined8 FUN_180061540(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    return 0;
  }
  dVar7 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
  uVar3 = (uint)dVar7;
  if (((((int)uVar3 < 1) ||
       (lVar5 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar5] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar5) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar5] != '\0')) {
    lVar2 = *plVar1;
  }
  else {
    lVar2 = *plVar1;
    if (&DAT_1805b8908 + lVar5 != (undefined *)0x0) {
      dVar7 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);
      iVar4 = 0;
      if (-1 < (int)dVar7) {
        iVar4 = (int)dVar7;
      }
      iVar6 = 0x10000;
      if ((iVar4 < 0x10001) && (iVar6 = iVar4, iVar4 < 1)) {
        (**(code **)(*plVar1 + 0xe8))(plVar1,&DAT_18033e5ea,0);
        return 1;
      }
      lVar2 = FUN_18005e2e0(iVar6);
      if (lVar2 == 0) {
        (**(code **)(*plVar1 + 0xe0))(plVar1);
        return 1;
      }
      FUN_18001ad50(&DAT_1805b8908 + lVar5,lVar2,iVar6 * 8);
      (**(code **)(*plVar1 + 0xe8))(plVar1,lVar2,iVar6);
      return 1;
    }
  }
  (**(code **)(lVar2 + 0xe0))(plVar1);
  return 1;
}


)B180061540",
    "d5664b872c6357b7c8e100e330c6fb064de725b9d23944906cc6430a44f1be53",
    R"F180061540C(FUN_18001ad50
FUN_180039770
FUN_18005e2e0)F180061540C",
    R"F180061540D(DAT_18033e5ea
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908)F180061540D",
    R"F180061540T()F180061540T",
    R"F180061540F(19: if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
20: return 0;
24: if (((((int)uVar3 < 1) ||
29: else {
31: if (&DAT_1805b8908 + lVar5 != (undefined *)0x0) {
34: if (-1 < (int)dVar7) {
38: if ((iVar4 < 0x10001) && (iVar6 = iVar4, iVar4 < 1)) {
40: return 1;
43: if (lVar2 == 0) {
45: return 1;
49: return 1;
53: return 1;)F180061540F",
    R"F180061540U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: resolve the indirect call in body 22: dVar7 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 32: dVar7 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);.
TODO: resolve the indirect call in body 39: (**(code **)(*plVar1 + 0xe8))(plVar1,&DAT_18033e5ea,0);.
TODO: resolve the indirect call in body 44: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 48: (**(code **)(*plVar1 + 0xe8))(plVar1,lVar2,iVar6);.
TODO: resolve the indirect call in body 52: (**(code **)(lVar2 + 0xe0))(plVar1);.)F180061540U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180061540() noexcept {
    return kFunction_0x180061540;
}

// 0x180061690 FUN_180061690
// source: re/dump/decompile/0x180061690_FUN_180061690.c
// size: 351 bytes; thunk: false
// body sha256: 16b36aa2d85395f816864678139308887f53e12a5d0b0801ef188b6358cb644f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180061690{
    "0x180061690",
    "FUN_180061690",
    R"F180061690S(undefined FUN_180061690())F180061690S",
    R"B180061690(// 0x180061690  FUN_180061690
// size=351 thunk=false
// signature: undefined FUN_180061690()
// status: ok


undefined8 FUN_180061690(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  uVar4 = (uint)dVar7;
  if (((((int)uVar4 < 1) ||
       (lVar5 = (ulonglong)(uVar4 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar5] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar5) != uVar4 >> 6)) || ((&DAT_1805b88e1)[lVar5] != '\0')) {
    lVar3 = *plVar2;
  }
  else {
    lVar3 = *plVar2;
    if (&DAT_1805b8908 + lVar5 != (undefined *)0x0) {
      dVar7 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);
      iVar1 = 0;
      if (-1 < (int)dVar7) {
        iVar1 = (int)dVar7;
      }
      iVar6 = 0x80000;
      if ((iVar1 < 0x80001) && (iVar6 = iVar1, iVar1 < 1)) {
        (**(code **)(*plVar2 + 0xe8))(plVar2,&DAT_18033e5ea,0);
        return 1;
      }
      iVar1 = (int)(iVar6 + 7 + (iVar6 + 7 >> 0x1f & 7U)) >> 3;
      lVar3 = FUN_18005e2e0(iVar1);
      if (lVar3 == 0) {
        (**(code **)(*plVar2 + 0xe0))(plVar2);
        return 1;
      }
      FUN_18001ad50(&DAT_1805b8908 + lVar5,lVar3,iVar6);
      (**(code **)(*plVar2 + 0xe8))(plVar2,lVar3,iVar1);
      return 1;
    }
  }
  (**(code **)(lVar3 + 0xe0))(plVar2);
  return 1;
}


)B180061690",
    "16b36aa2d85395f816864678139308887f53e12a5d0b0801ef188b6358cb644f",
    R"F180061690C(FUN_18001ad50
FUN_180039770
FUN_18005e2e0)F180061690C",
    R"F180061690D(DAT_18033e5ea
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908)F180061690D",
    R"F180061690T()F180061690T",
    R"F180061690F(19: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
20: return 0;
24: if (((((int)uVar4 < 1) ||
29: else {
31: if (&DAT_1805b8908 + lVar5 != (undefined *)0x0) {
34: if (-1 < (int)dVar7) {
38: if ((iVar1 < 0x80001) && (iVar6 = iVar1, iVar1 < 1)) {
40: return 1;
44: if (lVar3 == 0) {
46: return 1;
50: return 1;
54: return 1;)F180061690F",
    R"F180061690U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: resolve the indirect call in body 22: dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 32: dVar7 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);.
TODO: resolve the indirect call in body 39: (**(code **)(*plVar2 + 0xe8))(plVar2,&DAT_18033e5ea,0);.
TODO: resolve the indirect call in body 45: (**(code **)(*plVar2 + 0xe0))(plVar2);.
TODO: resolve the indirect call in body 49: (**(code **)(*plVar2 + 0xe8))(plVar2,lVar3,iVar1);.
TODO: resolve the indirect call in body 53: (**(code **)(lVar3 + 0xe0))(plVar2);.)F180061690U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180061690() noexcept {
    return kFunction_0x180061690;
}

// 0x1800617f0 FUN_1800617f0
// source: re/dump/decompile/0x1800617f0_FUN_1800617f0.c
// size: 450 bytes; thunk: false
// body sha256: 5ce1f9772b25993ebc6dd6baf0cce082929c05047785b9e06bc1f0b2da7f00be
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800617f0{
    "0x1800617f0",
    "FUN_1800617f0",
    R"F1800617f0S(undefined FUN_1800617f0())F1800617f0S",
    R"B1800617f0(// 0x1800617f0  FUN_1800617f0
// size=450 thunk=false
// signature: undefined FUN_1800617f0()
// status: ok


undefined8 FUN_1800617f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) {
    dVar9 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
    uVar7 = (uint)dVar9;
    if (((((int)uVar7 < 1) ||
         (lVar8 = (ulonglong)(uVar7 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar8] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar8) != uVar7 >> 6)) || ((&DAT_1805b88e1)[lVar8] != '\0')) {
      lVar6 = *plVar5;
    }
    else {
      lVar6 = *plVar5;
      if ((longlong *)(&DAT_1805b8908 + lVar8) != (longlong *)0x0) {
        pcVar3 = *(code **)(lVar6 + 0xf0);
        dVar9 = (double)(**(code **)(lVar6 + 0x160))(plVar5,2);
        uVar7 = (uint)dVar9;
        if ((int)uVar7 < 1) {
          uVar7 = 1;
        }
        else if (0x20 < (int)uVar7) {
          uVar7 = 0x20;
        }
        iVar1 = *(int *)(&DAT_1805b8918 + lVar8);
        iVar2 = (&DAT_18033d650)[uVar7 & 0x1f];
        if (*(int *)(&DAT_1805b8914 + lVar8) - iVar1 < (int)uVar7) {
          *(int *)(&DAT_1805b8918 + lVar8) = *(int *)(&DAT_1805b8914 + lVar8);
          uVar7 = 0;
          (&DAT_1805b891c)[lVar8] = 1;
        }
        else {
          lVar6 = *(longlong *)(&DAT_1805b8908 + lVar8);
          *(uint *)(&DAT_1805b8918 + lVar8) = iVar1 + uVar7;
          bVar4 = (byte)iVar1 & 0x1f;
          uVar7 = (*(int *)(lVar6 + (ulonglong)(uint)((int)(iVar1 + uVar7 + -1) >> 5) * 4) <<
                   (0x20 - bVar4 & 0x1f) |
                  *(uint *)(lVar6 + (ulonglong)(uint)(iVar1 >> 5) * 4) >> bVar4) &
                  *(uint *)(&DAT_1803fa710 + (longlong)(int)uVar7 * 4);
        }
        (*pcVar3)(plVar5,(double)(float)((DAT_180380e90 / (double)iVar2) * (double)(int)uVar7));
        return 1;
      }
    }
    (**(code **)(lVar6 + 0xe0))(plVar5);
    return 1;
  }
  return 0;
}


)B1800617f0",
    "5ce1f9772b25993ebc6dd6baf0cce082929c05047785b9e06bc1f0b2da7f00be",
    R"F1800617f0C(FUN_180039770)F1800617f0C",
    R"F1800617f0D(DAT_18033d650
DAT_180380e90
DAT_1803fa710
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908
DAT_1805b8914
DAT_1805b8918
DAT_1805b891c)F1800617f0D",
    R"F1800617f0T()F1800617f0T",
    R"F1800617f0F(21: if ((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) {
24: if (((((int)uVar7 < 1) ||
29: else {
31: if ((longlong *)(&DAT_1805b8908 + lVar8) != (longlong *)0x0) {
35: if ((int)uVar7 < 1) {
38: else if (0x20 < (int)uVar7) {
43: if (*(int *)(&DAT_1805b8914 + lVar8) - iVar1 < (int)uVar7) {
48: else {
58: return 1;
62: return 1;
64: return 0;)F1800617f0F",
    R"F1800617f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033d650.
TODO: recover the declaration, type and value for global/data reference DAT_180380e90.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa710.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8914.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: recover the declaration, type and value for global/data reference DAT_1805b891c.
TODO: resolve the indirect call in body 22: dVar9 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);.
TODO: resolve the indirect call in body 32: pcVar3 = *(code **)(lVar6 + 0xf0);.
TODO: resolve the indirect call in body 33: dVar9 = (double)(**(code **)(lVar6 + 0x160))(plVar5,2);.
TODO: resolve the indirect call in body 57: (*pcVar3)(plVar5,(double)(float)((DAT_180380e90 / (double)iVar2) * (double)(int)uVar7));.
TODO: resolve the indirect call in body 61: (**(code **)(lVar6 + 0xe0))(plVar5);.)F1800617f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800617f0() noexcept {
    return kFunction_0x1800617f0;
}

// 0x1800619c0 FUN_1800619c0
// source: re/dump/decompile/0x1800619c0_FUN_1800619c0.c
// size: 253 bytes; thunk: false
// body sha256: 28d10e374e022766dd5fb445a305793b5cb3d57079334119894948facd5e97ce
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800619c0{
    "0x1800619c0",
    "FUN_1800619c0",
    R"F1800619c0S(undefined FUN_1800619c0())F1800619c0S",
    R"B1800619c0(// 0x1800619c0  FUN_1800619c0
// size=253 thunk=false
// signature: undefined FUN_1800619c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800619c0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    uVar2 = 0;
  }
  else {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) ||
       (((&DAT_1805b88e1)[lVar4] != '\0' || (&DAT_1805b8908 + lVar4 == (undefined *)0x0)))) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      uVar2 = 1;
    }
    else {
      FUN_18001b7a0(&DAT_1805b8908 + lVar4,&local_28);
      (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_28);
      (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_24);
      (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_20);
      uVar2 = 3;
    }
  }
  return uVar2;
}


)B1800619c0",
    "28d10e374e022766dd5fb445a305793b5cb3d57079334119894948facd5e97ce",
    R"F1800619c0C(FUN_18001b7a0
FUN_180039770)F1800619c0C",
    R"F1800619c0D(DAT_1803da4c0
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908)F1800619c0D",
    R"F1800619c0T()F1800619c0T",
    R"F1800619c0F(25: if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
28: else {
31: if (((((int)uVar3 < 1) ||
38: else {
46: return uVar2;)F1800619c0F",
    R"F1800619c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: resolve the indirect call in body 29: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 35: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 40: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_28);.
TODO: resolve the indirect call in body 41: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_24);.
TODO: resolve the indirect call in body 42: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_20);.)F1800619c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800619c0() noexcept {
    return kFunction_0x1800619c0;
}

// 0x180061ac0 FUN_180061ac0
// source: re/dump/decompile/0x180061ac0_FUN_180061ac0.c
// size: 194 bytes; thunk: false
// body sha256: c748055cf50deac7dbc70ec5d0bc0304aa9687efafcef18f3b143335fdc4f059
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180061ac0{
    "0x180061ac0",
    "FUN_180061ac0",
    R"F180061ac0S(undefined FUN_180061ac0())F180061ac0S",
    R"B180061ac0(// 0x180061ac0  FUN_180061ac0
// size=194 thunk=false
// signature: undefined FUN_180061ac0()
// status: ok


undefined8 FUN_180061ac0(longlong param_1)

{
  double dVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar1 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    uVar3 = (uint)dVar1;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] != '\0')) {
      lVar5 = *plVar2;
    }
    else {
      lVar5 = *plVar2;
      if (lVar4 != -0x1805b8908) {
        fVar6 = (float)FUN_18001b1a0();
        (**(code **)(lVar5 + 0xf0))(plVar2,(double)fVar6);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


)B180061ac0",
    "c748055cf50deac7dbc70ec5d0bc0304aa9687efafcef18f3b143335fdc4f059",
    R"F180061ac0C(FUN_18001b1a0
FUN_180039770)F180061ac0C",
    R"F180061ac0D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4)F180061ac0D",
    R"F180061ac0T()F180061ac0T",
    R"F180061ac0F(18: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
21: if (((((int)uVar3 < 1) ||
26: else {
28: if (lVar4 != -0x1805b8908) {
31: return 1;
35: return 1;
37: return 0;)F180061ac0F",
    R"F180061ac0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: resolve the indirect call in body 19: dVar1 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 30: (**(code **)(lVar5 + 0xf0))(plVar2,(double)fVar6);.
TODO: resolve the indirect call in body 34: (**(code **)(lVar5 + 0xe0))(plVar2);.)F180061ac0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180061ac0() noexcept {
    return kFunction_0x180061ac0;
}

// 0x180061b90 FUN_180061b90
// source: re/dump/decompile/0x180061b90_FUN_180061b90.c
// size: 354 bytes; thunk: false
// body sha256: 3b56492163e4a048632594e2d1fc6d53e20807228cad6d4fd76ec6e70a10cca3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180061b90{
    "0x180061b90",
    "FUN_180061b90",
    R"F180061b90S(undefined FUN_180061b90())F180061b90S",
    R"B180061b90(// 0x180061b90  FUN_180061b90
// size=354 thunk=false
// signature: undefined FUN_180061b90()
// status: ok


undefined8 FUN_180061b90(longlong param_1)

{
  code *pcVar1;
  double dVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  
  plVar6 = (longlong *)FUN_180039770();
  if ((plVar6 != (longlong *)0x0) && (plVar6[1] == param_1)) {
    dVar2 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,1);
    uVar8 = (uint)dVar2;
    if (((((int)uVar8 < 1) ||
         (lVar9 = (ulonglong)(uVar8 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar9] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar9) != uVar8 >> 6)) || ((&DAT_1805b88e1)[lVar9] != '\0')) {
      lVar7 = *plVar6;
    }
    else {
      lVar7 = *plVar6;
      if (&DAT_1805b8908 + lVar9 != (undefined *)0x0) {
        cVar3 = (**(code **)(lVar7 + 0x138))(plVar6,2,1);
        if (cVar3 == '\0') {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar6 + 200))(plVar6,2);
        }
        uVar10 = 0;
        cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,3,1);
        if (cVar3 == '\0') {
          uVar10 = uVar10 & 0xffffffffffffff00;
        }
        else {
          bVar5 = (**(code **)(*plVar6 + 200))(plVar6,3);
          uVar10 = (ulonglong)bVar5;
        }
        pcVar1 = *(code **)(*plVar6 + 0xf0);
        fVar11 = (float)FUN_18001b390(&DAT_1805b8908 + lVar9,uVar4,uVar10);
        (*pcVar1)(plVar6,(double)fVar11);
        return 1;
      }
    }
    (**(code **)(lVar7 + 0xe0))(plVar6);
    return 1;
  }
  return 0;
}


)B180061b90",
    "3b56492163e4a048632594e2d1fc6d53e20807228cad6d4fd76ec6e70a10cca3",
    R"F180061b90C(FUN_18001b390
FUN_180039770)F180061b90C",
    R"F180061b90D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908)F180061b90D",
    R"F180061b90T()F180061b90T",
    R"F180061b90F(23: if ((plVar6 != (longlong *)0x0) && (plVar6[1] == param_1)) {
26: if (((((int)uVar8 < 1) ||
31: else {
33: if (&DAT_1805b8908 + lVar9 != (undefined *)0x0) {
35: if (cVar3 == '\0') {
38: else {
43: if (cVar3 == '\0') {
46: else {
53: return 1;
57: return 1;
59: return 0;)F180061b90F",
    R"F180061b90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: resolve the indirect call in body 24: dVar2 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,1);.
TODO: resolve the indirect call in body 34: cVar3 = (**(code **)(lVar7 + 0x138))(plVar6,2,1);.
TODO: resolve the indirect call in body 39: uVar4 = (**(code **)(*plVar6 + 200))(plVar6,2);.
TODO: resolve the indirect call in body 42: cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,3,1);.
TODO: resolve the indirect call in body 47: bVar5 = (**(code **)(*plVar6 + 200))(plVar6,3);.
TODO: resolve the indirect call in body 50: pcVar1 = *(code **)(*plVar6 + 0xf0);.
TODO: resolve the indirect call in body 52: (*pcVar1)(plVar6,(double)fVar11);.
TODO: resolve the indirect call in body 56: (**(code **)(lVar7 + 0xe0))(plVar6);.)F180061b90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180061b90() noexcept {
    return kFunction_0x180061b90;
}

// 0x180061d00 FUN_180061d00
// source: re/dump/decompile/0x180061d00_FUN_180061d00.c
// size: 351 bytes; thunk: false
// body sha256: 7bd1949113f182918c01818eec26c2ed7a2b5da2dd0ad73bf996805f1e2520d5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180061d00{
    "0x180061d00",
    "FUN_180061d00",
    R"F180061d00S(undefined FUN_180061d00())F180061d00S",
    R"B180061d00(// 0x180061d00  FUN_180061d00
// size=351 thunk=false
// signature: undefined FUN_180061d00()
// status: ok


undefined8 FUN_180061d00(longlong param_1)

{
  code *pcVar1;
  double dVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    return 0;
  }
  dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar6 = (uint)dVar2;
  if (((((int)uVar6 < 1) ||
       (lVar8 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar8] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar8) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar8] != '\0')) {
    lVar5 = *plVar4;
LAB_180061e32:
    (**(code **)(lVar5 + 0xe0))(plVar4);
    return 1;
  }
  lVar5 = *plVar4;
  if (&DAT_1805b8908 + lVar8 == (undefined *)0x0) goto LAB_180061e32;
  dVar2 = (double)(**(code **)(lVar5 + 0x160))(plVar4,2);
  iVar9 = (int)dVar2;
  if (iVar9 < 1) {
    iVar9 = 1;
  }
  else if (0x20 < iVar9) {
    iVar9 = 0x20;
  }
  cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);
  if (cVar3 != '\0') {
    dVar2 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
    iVar7 = (int)dVar2;
    if ((-1 < iVar7) && (iVar7 < 3)) goto LAB_180061df2;
  }
  iVar7 = 0;
LAB_180061df2:
  pcVar1 = *(code **)(*plVar4 + 0xf0);
  fVar10 = (float)FUN_18001b5d0(&DAT_1805b8908 + lVar8,iVar9,iVar7);
  (*pcVar1)(plVar4,(double)fVar10);
  return 1;
}


)B180061d00",
    "7bd1949113f182918c01818eec26c2ed7a2b5da2dd0ad73bf996805f1e2520d5",
    R"F180061d00C(FUN_18001b5d0
FUN_180039770)F180061d00C",
    R"F180061d00D(LAB_180061df2
LAB_180061e32
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908)F180061d00D",
    R"F180061d00T()F180061d00T",
    R"F180061d00F(22: if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
23: return 0;
27: if (((((int)uVar6 < 1) ||
31: LAB_180061e32:
33: return 1;
36: if (&DAT_1805b8908 + lVar8 == (undefined *)0x0) goto LAB_180061e32;
39: if (iVar9 < 1) {
42: else if (0x20 < iVar9) {
46: if (cVar3 != '\0') {
49: if ((-1 < iVar7) && (iVar7 < 3)) goto LAB_180061df2;
52: LAB_180061df2:
56: return 1;)F180061d00F",
    R"F180061d00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180061df2.
TODO: recover the declaration, type and value for global/data reference LAB_180061e32.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: resolve the indirect call in body 25: dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);.
TODO: resolve the indirect call in body 32: (**(code **)(lVar5 + 0xe0))(plVar4);.
TODO: resolve the indirect call in body 37: dVar2 = (double)(**(code **)(lVar5 + 0x160))(plVar4,2);.
TODO: resolve the indirect call in body 45: cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);.
TODO: resolve the indirect call in body 47: dVar2 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);.
TODO: resolve the indirect call in body 53: pcVar1 = *(code **)(*plVar4 + 0xf0);.
TODO: resolve the indirect call in body 55: (*pcVar1)(plVar4,(double)fVar10);.)F180061d00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180061d00() noexcept {
    return kFunction_0x180061d00;
}

// 0x180061e60 FUN_180061e60
// source: re/dump/decompile/0x180061e60_FUN_180061e60.c
// size: 487 bytes; thunk: false
// body sha256: 06a577818445d96292310a9389d1374a72b0f157411e0eb1b0be0a8e676f2b70
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180061e60{
    "0x180061e60",
    "FUN_180061e60",
    R"F180061e60S(undefined FUN_180061e60())F180061e60S",
    R"B180061e60(// 0x180061e60  FUN_180061e60
// size=487 thunk=false
// signature: undefined FUN_180061e60()
// status: ok


undefined8 FUN_180061e60(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  code *pcVar11;
  double dVar12;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
    return 0;
  }
  dVar12 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
  uVar7 = (uint)dVar12;
  if (((((int)uVar7 < 1) ||
       (lVar8 = (ulonglong)(uVar7 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar8] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar8) != uVar7 >> 6)) || ((&DAT_1805b88e1)[lVar8] != '\0')) {
    lVar6 = *plVar5;
  }
  else {
    lVar6 = *plVar5;
    plVar10 = (longlong *)(&DAT_1805b8908 + lVar8);
    if (plVar10 != (longlong *)0x0) {
      cVar4 = (**(code **)(lVar6 + 0x138))(plVar5,2,1);
      if (cVar4 == '\0') {
        cVar4 = '\0';
      }
      else {
        cVar4 = (**(code **)(*plVar5 + 200))(plVar5,2);
      }
      iVar1 = *(int *)(&DAT_1805b8914 + lVar8);
      iVar2 = *(int *)(&DAT_1805b8918 + lVar8);
      iVar9 = iVar1 - iVar2;
      if (iVar9 < 0x20) {
        if ((cVar4 != '\0') || (iVar9 < 1)) {
          (&DAT_1805b891c)[lVar8] = 1;
          (**(code **)(*plVar5 + 0xe0))(plVar5);
          return 1;
        }
        lVar6 = *plVar5;
        bVar3 = (byte)iVar2 & 0x1f;
        *(int *)(&DAT_1805b8918 + lVar8) = iVar1;
        pcVar11 = *(code **)(lVar6 + 0xf0);
        uVar7 = (*(int *)(*plVar10 + (ulonglong)(uint)(iVar1 + -1 >> 5) * 4) <<
                 (0x20 - bVar3 & 0x1f) |
                *(uint *)(*plVar10 + (ulonglong)(uint)(iVar2 >> 5) * 4) >> bVar3) &
                *(uint *)(&DAT_1803fa710 + (longlong)iVar9 * 4);
      }
      else {
        bVar3 = (byte)iVar2 & 0x1f;
        pcVar11 = *(code **)(*plVar5 + 0xf0);
        *(int *)(&DAT_1805b8918 + lVar8) = iVar2 + 0x20;
        uVar7 = (*(int *)(*plVar10 + (ulonglong)(uint)(iVar2 + 0x1f >> 5) * 4) <<
                 (0x20 - bVar3 & 0x1f) |
                *(uint *)(*plVar10 + (ulonglong)(uint)(iVar2 >> 5) * 4) >> bVar3) & DAT_1803fa790;
      }
      (*pcVar11)(plVar5,(double)uVar7);
      return 1;
    }
  }
  (**(code **)(lVar6 + 0xe0))(plVar5);
  return 1;
}


)B180061e60",
    "06a577818445d96292310a9389d1374a72b0f157411e0eb1b0be0a8e676f2b70",
    R"F180061e60C(FUN_180039770)F180061e60C",
    R"F180061e60D(DAT_1803fa710
DAT_1803fa790
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908
DAT_1805b8914
DAT_1805b8918
DAT_1805b891c)F180061e60D",
    R"F180061e60T()F180061e60T",
    R"F180061e60F(24: if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
25: return 0;
29: if (((((int)uVar7 < 1) ||
34: else {
37: if (plVar10 != (longlong *)0x0) {
39: if (cVar4 == '\0') {
42: else {
48: if (iVar9 < 0x20) {
49: if ((cVar4 != '\0') || (iVar9 < 1)) {
52: return 1;
63: else {
72: return 1;
76: return 1;)F180061e60F",
    R"F180061e60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa710.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa790.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8914.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: recover the declaration, type and value for global/data reference DAT_1805b891c.
TODO: resolve the indirect call in body 27: dVar12 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);.
TODO: resolve the indirect call in body 38: cVar4 = (**(code **)(lVar6 + 0x138))(plVar5,2,1);.
TODO: resolve the indirect call in body 43: cVar4 = (**(code **)(*plVar5 + 200))(plVar5,2);.
TODO: resolve the indirect call in body 51: (**(code **)(*plVar5 + 0xe0))(plVar5);.
TODO: resolve the indirect call in body 57: pcVar11 = *(code **)(lVar6 + 0xf0);.
TODO: resolve the indirect call in body 65: pcVar11 = *(code **)(*plVar5 + 0xf0);.
TODO: resolve the indirect call in body 71: (*pcVar11)(plVar5,(double)uVar7);.
TODO: resolve the indirect call in body 75: (**(code **)(lVar6 + 0xe0))(plVar5);.)F180061e60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180061e60() noexcept {
    return kFunction_0x180061e60;
}

// 0x180062060 FUN_180062060
// source: re/dump/decompile/0x180062060_FUN_180062060.c
// size: 213 bytes; thunk: false
// body sha256: da8b1dc5b356934c72865e92ef02c8f388bee90f01235a91e1bd92d7182b87fa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180062060{
    "0x180062060",
    "FUN_180062060",
    R"F180062060S(undefined FUN_180062060())F180062060S",
    R"B180062060(// 0x180062060  FUN_180062060
// size=213 thunk=false
// signature: undefined FUN_180062060()
// status: ok


undefined8 FUN_180062060(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    return 0;
  }
  dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
  uVar2 = (uint)dVar5;
  if (((((int)uVar2 < 1) ||
       (lVar3 = (ulonglong)(uVar2 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar3] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar3) != uVar2 >> 6)) || ((&DAT_1805b88e1)[lVar3] != '\0')) {
    lVar4 = *plVar1;
  }
  else {
    lVar4 = *plVar1;
    if ((&DAT_1805b8908 + lVar3 != (undefined *)0x0) &&
       (0x1f < *(int *)(&DAT_1805b8914 + lVar3) - *(int *)(&DAT_1805b8918 + lVar3))) {
      uVar2 = FUN_18001af40(&DAT_1805b8908 + lVar3,0x20);
      (**(code **)(lVar4 + 0xf0))(plVar1,(double)uVar2);
      return 1;
    }
  }
  (**(code **)(lVar4 + 0xe0))(plVar1);
  return 1;
}


)B180062060",
    "da8b1dc5b356934c72865e92ef02c8f388bee90f01235a91e1bd92d7182b87fa",
    R"F180062060C(FUN_18001af40
FUN_180039770)F180062060C",
    R"F180062060D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908
DAT_1805b8914
DAT_1805b8918)F180062060D",
    R"F180062060T()F180062060T",
    R"F180062060F(17: if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
18: return 0;
22: if (((((int)uVar2 < 1) ||
27: else {
29: if ((&DAT_1805b8908 + lVar3 != (undefined *)0x0) &&
33: return 1;
37: return 1;)F180062060F",
    R"F180062060U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8914.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8918.
TODO: resolve the indirect call in body 20: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 32: (**(code **)(lVar4 + 0xf0))(plVar1,(double)uVar2);.
TODO: resolve the indirect call in body 36: (**(code **)(lVar4 + 0xe0))(plVar1);.)F180062060U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180062060() noexcept {
    return kFunction_0x180062060;
}

// 0x180062140 FUN_180062140
// source: re/dump/decompile/0x180062140_FUN_180062140.c
// size: 194 bytes; thunk: false
// body sha256: becb0f2138e2ff331dcd10c2ea893f56bc29f388bddac21dc75d5fdcf8e0707a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180062140{
    "0x180062140",
    "FUN_180062140",
    R"F180062140S(undefined FUN_180062140())F180062140S",
    R"B180062140(// 0x180062140  FUN_180062140
// size=194 thunk=false
// signature: undefined FUN_180062140()
// status: ok


undefined8 FUN_180062140(longlong param_1)

{
  double dVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar1 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    uVar3 = (uint)dVar1;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] != '\0')) {
      lVar5 = *plVar2;
    }
    else {
      lVar5 = *plVar2;
      if (lVar4 != -0x1805b8908) {
        fVar6 = (float)FUN_18001b8a0();
        (**(code **)(lVar5 + 0xf0))(plVar2,(double)fVar6);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


)B180062140",
    "becb0f2138e2ff331dcd10c2ea893f56bc29f388bddac21dc75d5fdcf8e0707a",
    R"F180062140C(FUN_18001b8a0
FUN_180039770)F180062140C",
    R"F180062140D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4)F180062140D",
    R"F180062140T()F180062140T",
    R"F180062140F(18: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
21: if (((((int)uVar3 < 1) ||
26: else {
28: if (lVar4 != -0x1805b8908) {
31: return 1;
35: return 1;
37: return 0;)F180062140F",
    R"F180062140U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: resolve the indirect call in body 19: dVar1 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 30: (**(code **)(lVar5 + 0xf0))(plVar2,(double)fVar6);.
TODO: resolve the indirect call in body 34: (**(code **)(lVar5 + 0xe0))(plVar2);.)F180062140U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180062140() noexcept {
    return kFunction_0x180062140;
}

// 0x180062210 FUN_180062210
// source: re/dump/decompile/0x180062210_FUN_180062210.c
// size: 274 bytes; thunk: false
// body sha256: c4b3ae8a8e2e0df32974ba7b9685f00e476677ac3b8606c76a6a76eef408807a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180062210{
    "0x180062210",
    "FUN_180062210",
    R"F180062210S(undefined FUN_180062210())F180062210S",
    R"B180062210(// 0x180062210  FUN_180062210
// size=274 thunk=false
// signature: undefined FUN_180062210()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180062210(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  float local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    uVar2 = 0;
  }
  else {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) ||
       (((&DAT_1805b88e1)[lVar4] != '\0' || (&DAT_1805b8908 + lVar4 == (undefined *)0x0)))) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      uVar2 = 1;
    }
    else {
      local_28 = 0;
      local_20 = 0.0;
      FUN_18001b7a0(&DAT_1805b8908 + lVar4,&local_28);
      (**(code **)(*plVar1 + 0xf0))(plVar1,(double)(float)local_28);
      (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_28._4_4_);
      (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_20);
      uVar2 = 3;
    }
  }
  return uVar2;
}


)B180062210",
    "c4b3ae8a8e2e0df32974ba7b9685f00e476677ac3b8606c76a6a76eef408807a",
    R"F180062210C(FUN_18001b7a0
FUN_180039770)F180062210C",
    R"F180062210D(DAT_1803da4c0
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908)F180062210D",
    R"F180062210T()F180062210T",
    R"F180062210F(24: if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
27: else {
30: if (((((int)uVar3 < 1) ||
37: else {
47: return uVar2;)F180062210F",
    R"F180062210U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: resolve the indirect call in body 28: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 34: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 41: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)(float)local_28);.
TODO: resolve the indirect call in body 42: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_28._4_4_);.
TODO: resolve the indirect call in body 43: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_20);.)F180062210U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180062210() noexcept {
    return kFunction_0x180062210;
}

// 0x180062330 FUN_180062330
// source: re/dump/decompile/0x180062330_FUN_180062330.c
// size: 274 bytes; thunk: false
// body sha256: 31888c0cf391ccfd23f7325fb53642130eabbfbf1e00edb5e18b8db8a1734276
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180062330{
    "0x180062330",
    "FUN_180062330",
    R"F180062330S(undefined FUN_180062330())F180062330S",
    R"B180062330(// 0x180062330  FUN_180062330
// size=274 thunk=false
// signature: undefined FUN_180062330()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180062330(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  float local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    uVar2 = 0;
  }
  else {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) ||
       (((&DAT_1805b88e1)[lVar4] != '\0' || (&DAT_1805b8908 + lVar4 == (undefined *)0x0)))) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      uVar2 = 1;
    }
    else {
      local_28 = 0;
      local_20 = 0.0;
      FUN_18001b960(&DAT_1805b8908 + lVar4,&local_28);
      (**(code **)(*plVar1 + 0xf0))(plVar1,(double)(float)local_28);
      (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_28._4_4_);
      (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_20);
      uVar2 = 3;
    }
  }
  return uVar2;
}


)B180062330",
    "31888c0cf391ccfd23f7325fb53642130eabbfbf1e00edb5e18b8db8a1734276",
    R"F180062330C(FUN_18001b960
FUN_180039770)F180062330C",
    R"F180062330D(DAT_1803da4c0
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908)F180062330D",
    R"F180062330T()F180062330T",
    R"F180062330F(24: if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
27: else {
30: if (((((int)uVar3 < 1) ||
37: else {
47: return uVar2;)F180062330F",
    R"F180062330U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: resolve the indirect call in body 28: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 34: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 41: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)(float)local_28);.
TODO: resolve the indirect call in body 42: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_28._4_4_);.
TODO: resolve the indirect call in body 43: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_20);.)F180062330U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180062330() noexcept {
    return kFunction_0x180062330;
}

// 0x180062450 FUN_180062450
// source: re/dump/decompile/0x180062450_FUN_180062450.c
// size: 285 bytes; thunk: false
// body sha256: 3f3cb0e8e085a946841856f79e4b534928ffa911959485a69395ae7f44ab85be
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180062450{
    "0x180062450",
    "FUN_180062450",
    R"F180062450S(undefined FUN_180062450())F180062450S",
    R"B180062450(// 0x180062450  FUN_180062450
// size=285 thunk=false
// signature: undefined FUN_180062450()
// status: ok


undefined8 FUN_180062450(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  double dVar7;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  uVar4 = (uint)dVar7;
  if (((((int)uVar4 < 1) ||
       (lVar5 = (ulonglong)(uVar4 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar5] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar5) != uVar4 >> 6)) || ((&DAT_1805b88e1)[lVar5] == '\0')) {
    lVar3 = *plVar2;
  }
  else {
    lVar3 = *plVar2;
    if ((longlong *)(&DAT_1805b8928 + lVar5) != (longlong *)0x0) {
      dVar7 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);
      uVar4 = *(uint *)(&DAT_1805b8938 + lVar5);
      if ((int)uVar4 < *(int *)(&DAT_1805b8934 + lVar5)) {
        lVar3 = *(longlong *)(&DAT_1805b8928 + lVar5);
        if ((int)dVar7 == 0) {
          puVar1 = (uint *)(lVar3 + ((longlong)(int)uVar4 >> 5) * 4);
          *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
        }
        else {
          puVar1 = (uint *)(lVar3 + ((longlong)(int)uVar4 >> 5) * 4);
          *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
        }
        *(int *)(&DAT_1805b8938 + lVar5) = *(int *)(&DAT_1805b8938 + lVar5) + 1;
      }
      else {
        (&DAT_1805b893c)[lVar5] = 1;
      }
      bVar6 = (&DAT_1805b893c)[lVar5] == '\0';
      lVar3 = *plVar2;
      goto LAB_18006253b;
    }
  }
  bVar6 = false;
LAB_18006253b:
  (**(code **)(lVar3 + 0xf8))(plVar2,bVar6);
  return 1;
}


)B180062450",
    "3f3cb0e8e085a946841856f79e4b534928ffa911959485a69395ae7f44ab85be",
    R"F180062450C(FUN_180039770)F180062450C",
    R"F180062450D(LAB_18006253b
DAT_1803fa690
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b8934
DAT_1805b8938
DAT_1805b893c)F180062450D",
    R"F180062450T()F180062450T",
    R"F180062450F(19: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
20: return 0;
24: if (((((int)uVar4 < 1) ||
29: else {
31: if ((longlong *)(&DAT_1805b8928 + lVar5) != (longlong *)0x0) {
34: if ((int)uVar4 < *(int *)(&DAT_1805b8934 + lVar5)) {
36: if ((int)dVar7 == 0) {
40: else {
46: else {
51: goto LAB_18006253b;
55: LAB_18006253b:
57: return 1;)F180062450F",
    R"F180062450U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18006253b.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa690.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8934.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8938.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 22: dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 32: dVar7 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);.
TODO: resolve the indirect call in body 56: (**(code **)(lVar3 + 0xf8))(plVar2,bVar6);.)F180062450U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180062450() noexcept {
    return kFunction_0x180062450;
}

// 0x180062570 FUN_180062570
// source: re/dump/decompile/0x180062570_FUN_180062570.c
// size: 341 bytes; thunk: false
// body sha256: 9e5af5c7b80b438751fa9ebe5f94c3982f23db5cf88541ded09e20f35794882b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180062570{
    "0x180062570",
    "FUN_180062570",
    R"F180062570S(undefined FUN_180062570())F180062570S",
    R"B180062570(// 0x180062570  FUN_180062570
// size=341 thunk=false
// signature: undefined FUN_180062570()
// status: ok


undefined8 FUN_180062570(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  double dVar7;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    uVar4 = (uint)dVar7;
    if (((((int)uVar4 < 1) ||
         (lVar5 = (ulonglong)(uVar4 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar5] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar5) != uVar4 >> 6)) || ((&DAT_1805b88e1)[lVar5] == '\0')) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = *plVar2;
      if ((longlong *)(&DAT_1805b8928 + lVar5) != (longlong *)0x0) {
        dVar7 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);
        uVar4 = (uint)dVar7;
        if (((int)uVar4 < 0) || (*(int *)(&DAT_1805b8934 + lVar5) <= (int)uVar4)) {
          lVar5 = *plVar2;
          bVar6 = false;
        }
        else {
          dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,3);
          if ((int)uVar4 < *(int *)(&DAT_1805b8934 + lVar5)) {
            lVar3 = *(longlong *)(&DAT_1805b8928 + lVar5);
            if ((int)dVar7 == 0) {
              puVar1 = (uint *)(lVar3 + ((longlong)(int)uVar4 >> 5) * 4);
              *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
            }
            else {
              puVar1 = (uint *)(lVar3 + ((longlong)(int)uVar4 >> 5) * 4);
              *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar4 & 0x1f) * 4);
            }
          }
          else {
            (&DAT_1805b893c)[lVar5] = 1;
          }
          bVar6 = (&DAT_1805b893c)[lVar5] == '\0';
          lVar5 = *plVar2;
        }
        (**(code **)(lVar5 + 0xf8))(plVar2,bVar6);
        return 1;
      }
    }
    (**(code **)(lVar3 + 0xf8))(plVar2,0);
    return 1;
  }
  return 0;
}


)B180062570",
    "9e5af5c7b80b438751fa9ebe5f94c3982f23db5cf88541ded09e20f35794882b",
    R"F180062570C(FUN_180039770)F180062570C",
    R"F180062570D(DAT_1803fa690
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b8934
DAT_1805b893c)F180062570D",
    R"F180062570T()F180062570T",
    R"F180062570F(19: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
22: if (((((int)uVar4 < 1) ||
27: else {
29: if ((longlong *)(&DAT_1805b8928 + lVar5) != (longlong *)0x0) {
32: if (((int)uVar4 < 0) || (*(int *)(&DAT_1805b8934 + lVar5) <= (int)uVar4)) {
36: else {
38: if ((int)uVar4 < *(int *)(&DAT_1805b8934 + lVar5)) {
40: if ((int)dVar7 == 0) {
44: else {
49: else {
56: return 1;
60: return 1;
62: return 0;)F180062570F",
    R"F180062570U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa690.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8934.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 20: dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 30: dVar7 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);.
TODO: resolve the indirect call in body 37: dVar7 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,3);.
TODO: resolve the indirect call in body 55: (**(code **)(lVar5 + 0xf8))(plVar2,bVar6);.
TODO: resolve the indirect call in body 59: (**(code **)(lVar3 + 0xf8))(plVar2,0);.)F180062570U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180062570() noexcept {
    return kFunction_0x180062570;
}

// 0x1800626d0 FUN_1800626d0
// source: re/dump/decompile/0x1800626d0_FUN_1800626d0.c
// size: 503 bytes; thunk: false
// body sha256: d9426cc0aec416418736e0d22ac38c90df3fc4a09cd5e8ec3ddf06199f6c08eb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800626d0{
    "0x1800626d0",
    "FUN_1800626d0",
    R"F1800626d0S(undefined FUN_1800626d0())F1800626d0S",
    R"B1800626d0(// 0x1800626d0  FUN_1800626d0
// size=503 thunk=false
// signature: undefined FUN_1800626d0()
// status: ok


undefined8 FUN_1800626d0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  
  plVar7 = (longlong *)FUN_180039770();
  if ((plVar7 != (longlong *)0x0) && (plVar7[1] == param_2)) {
    dVar3 = (double)(**(code **)(*plVar7 + 0x160))(plVar7,1);
    uVar10 = (uint)dVar3;
    if (((((int)uVar10 < 1) ||
         (lVar11 = (ulonglong)(uVar10 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar11] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar11) != uVar10 >> 6)) || ((&DAT_1805b88e1)[lVar11] == '\0'))
    {
      lVar8 = *plVar7;
    }
    else {
      lVar8 = *plVar7;
      if ((longlong *)(&DAT_1805b8928 + lVar11) != (longlong *)0x0) {
        dVar4 = (double)(**(code **)(lVar8 + 0x160))(plVar7,2);
        dVar3 = (double)(**(code **)(*plVar7 + 0x160))(plVar7,3);
        iVar14 = (int)dVar3;
        if (iVar14 < 1) {
          iVar14 = 1;
        }
        else if (0x20 < iVar14) {
          iVar14 = 0x20;
        }
        cVar5 = (**(code **)(*plVar7 + 0x138))(plVar7,4,1);
        if (cVar5 != '\0') {
          (**(code **)(*plVar7 + 200))(plVar7,4);
        }
        iVar2 = *(int *)(&DAT_1805b8938 + lVar11);
        uVar12 = (ulonglong)iVar2;
        if (*(int *)(&DAT_1805b8934 + lVar11) - iVar2 < iVar14) {
          *(int *)(&DAT_1805b8938 + lVar11) = *(int *)(&DAT_1805b8934 + lVar11);
          (&DAT_1805b893c)[lVar11] = 1;
        }
        else {
          *(int *)(&DAT_1805b8938 + lVar11) = iVar2 + iVar14;
          lVar8 = *(longlong *)(&DAT_1805b8928 + lVar11);
          uVar10 = *(uint *)(lVar8 + ((longlong)uVar12 >> 5) * 4);
          puVar1 = (uint *)(lVar8 + ((longlong)uVar12 >> 5) * 4);
          bVar9 = (byte)iVar2 & 0x1f;
          uVar13 = (uint)(longlong)dVar4 << bVar9 | (uint)(longlong)dVar4 >> 0x20 - bVar9;
          iVar14 = 1 << ((char)iVar14 - 1U & 0x1f);
          uVar6 = iVar14 - 1U >> (0x1f - bVar9 & 0x1f);
          uVar15 = uVar6 & 1;
          puVar1[uVar15] = puVar1[uVar15] ^ (puVar1[uVar15] ^ uVar13) & uVar6;
          uVar10 = iVar14 * 2 + -1 << bVar9 & (uVar10 ^ uVar13) ^ uVar10;
          uVar12 = (ulonglong)uVar10;
          *puVar1 = uVar10;
        }
        (**(code **)(*plVar7 + 0xf8))
                  (plVar7,CONCAT71((int7)(uVar12 >> 8),(&DAT_1805b893c)[lVar11] == '\0'));
        return 1;
      }
    }
    (**(code **)(lVar8 + 0xf8))(plVar7,0);
    return 1;
  }
  return 0;
}


)B1800626d0",
    "d9426cc0aec416418736e0d22ac38c90df3fc4a09cd5e8ec3ddf06199f6c08eb",
    R"F1800626d0C(FUN_180039770)F1800626d0C",
    R"F1800626d0D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b8934
DAT_1805b8938
DAT_1805b893c)F1800626d0D",
    R"F1800626d0T()F1800626d0T",
    R"F1800626d0F(27: if ((plVar7 != (longlong *)0x0) && (plVar7[1] == param_2)) {
30: if (((((int)uVar10 < 1) ||
36: else {
38: if ((longlong *)(&DAT_1805b8928 + lVar11) != (longlong *)0x0) {
42: if (iVar14 < 1) {
45: else if (0x20 < iVar14) {
49: if (cVar5 != '\0') {
54: if (*(int *)(&DAT_1805b8934 + lVar11) - iVar2 < iVar14) {
58: else {
75: return 1;
79: return 1;
81: return 0;)F1800626d0F",
    R"F1800626d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8934.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8938.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 28: dVar3 = (double)(**(code **)(*plVar7 + 0x160))(plVar7,1);.
TODO: resolve the indirect call in body 39: dVar4 = (double)(**(code **)(lVar8 + 0x160))(plVar7,2);.
TODO: resolve the indirect call in body 40: dVar3 = (double)(**(code **)(*plVar7 + 0x160))(plVar7,3);.
TODO: resolve the indirect call in body 48: cVar5 = (**(code **)(*plVar7 + 0x138))(plVar7,4,1);.
TODO: resolve the indirect call in body 50: (**(code **)(*plVar7 + 200))(plVar7,4);.
TODO: resolve the indirect call in body 73: (**(code **)(*plVar7 + 0xf8)).
TODO: resolve the indirect call in body 78: (**(code **)(lVar8 + 0xf8))(plVar7,0);.)F1800626d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800626d0() noexcept {
    return kFunction_0x1800626d0;
}

// 0x1800628e0 FUN_1800628e0
// source: re/dump/decompile/0x1800628e0_FUN_1800628e0.c
// size: 266 bytes; thunk: false
// body sha256: 7cefab1bc70fa93d283bc59c7d0ee02097e12dac2f6400e3577cd980a0904547
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800628e0{
    "0x1800628e0",
    "FUN_1800628e0",
    R"F1800628e0S(undefined FUN_1800628e0())F1800628e0S",
    R"B1800628e0(// 0x1800628e0  FUN_1800628e0
// size=266 thunk=false
// signature: undefined FUN_1800628e0()
// status: ok


undefined8 FUN_1800628e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    return 0;
  }
  dVar7 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
  uVar3 = (uint)dVar7;
  if (((((int)uVar3 < 1) ||
       (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] == '\0')) {
    lVar2 = *plVar1;
  }
  else {
    lVar2 = *plVar1;
    if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
      dVar7 = (double)(**(code **)(lVar2 + 0x160))(plVar1,3);
      iVar5 = (int)dVar7;
      if (iVar5 < 1) {
        iVar5 = 1;
      }
      else if (0x20 < iVar5) {
        iVar5 = 0x20;
      }
      dVar7 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,2);
      FUN_180019830(&DAT_1805b8928 + lVar4,(longlong)dVar7,iVar5);
      bVar6 = (&DAT_1805b893c)[lVar4] == '\0';
      lVar2 = *plVar1;
      goto LAB_1800629b8;
    }
  }
  bVar6 = false;
LAB_1800629b8:
  (**(code **)(lVar2 + 0xf8))(plVar1,bVar6);
  return 1;
}


)B1800628e0",
    "7cefab1bc70fa93d283bc59c7d0ee02097e12dac2f6400e3577cd980a0904547",
    R"F1800628e0C(FUN_180019830
FUN_180039770)F1800628e0C",
    R"F1800628e0D(LAB_1800629b8
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b893c)F1800628e0D",
    R"F1800628e0T()F1800628e0T",
    R"F1800628e0F(19: if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
20: return 0;
24: if (((((int)uVar3 < 1) ||
29: else {
31: if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
34: if (iVar5 < 1) {
37: else if (0x20 < iVar5) {
44: goto LAB_1800629b8;
48: LAB_1800629b8:
50: return 1;)F1800628e0F",
    R"F1800628e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1800629b8.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 22: dVar7 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 32: dVar7 = (double)(**(code **)(lVar2 + 0x160))(plVar1,3);.
TODO: resolve the indirect call in body 40: dVar7 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,2);.
TODO: resolve the indirect call in body 49: (**(code **)(lVar2 + 0xf8))(plVar1,bVar6);.)F1800628e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800628e0() noexcept {
    return kFunction_0x1800628e0;
}

// 0x1800629f0 FUN_1800629f0
// source: re/dump/decompile/0x1800629f0_FUN_1800629f0.c
// size: 591 bytes; thunk: false
// body sha256: 3e384706b7ccff1a810ff5c2613cfb56bb98bafdfd9ceb55393112c6fbc57440
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800629f0{
    "0x1800629f0",
    "FUN_1800629f0",
    R"F1800629f0S(undefined FUN_1800629f0())F1800629f0S",
    R"B1800629f0(// 0x1800629f0  FUN_1800629f0
// size=591 thunk=false
// signature: undefined FUN_1800629f0()
// status: ok


undefined8 FUN_1800629f0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  double dVar16;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_2)) {
    dVar16 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    uVar5 = (uint)dVar16;
    if (((((int)uVar5 < 1) ||
         (lVar7 = (ulonglong)(uVar5 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar5 >> 6)) || ((&DAT_1805b88e1)[lVar7] == '\0')) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = *plVar2;
      plVar15 = (longlong *)(&DAT_1805b8928 + lVar7);
      if (plVar15 != (longlong *)0x0) {
        dVar16 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);
        iVar14 = *(int *)(&DAT_1805b8938 + lVar7);
        uVar8 = (ulonglong)iVar14;
        uVar5 = (uint)(longlong)dVar16;
        iVar11 = (-(uint)(uVar5 < 0x100) - (uint)(uVar5 < 0x1000)) - (uint)(uVar5 < 0x10);
        iVar10 = iVar11 * 4 + 0x12;
        if (*(int *)(&DAT_1805b8934 + lVar7) - iVar14 < iVar10) {
          *(int *)(&DAT_1805b8938 + lVar7) = *(int *)(&DAT_1805b8934 + lVar7);
          (&DAT_1805b893c)[lVar7] = 1;
        }
        else {
          *(int *)(&DAT_1805b8938 + lVar7) = iVar14 + iVar10;
          uVar9 = iVar11 + 3 + uVar5 * 4;
          uVar6 = *(uint *)(*plVar15 + ((longlong)uVar8 >> 5) * 4);
          puVar1 = (uint *)(*plVar15 + ((longlong)uVar8 >> 5) * 4);
          bVar4 = (byte)iVar14 & 0x1f;
          uVar13 = uVar9 << bVar4 | uVar9 >> 0x20 - bVar4;
          iVar14 = 1 << ((char)iVar10 - 1U & 0x1f);
          uVar9 = iVar14 - 1U >> (0x1f - bVar4 & 0x1f);
          uVar12 = uVar9 & 1;
          puVar1[uVar12] = puVar1[uVar12] ^ (puVar1[uVar12] ^ uVar13) & uVar9;
          uVar6 = iVar14 * 2 + -1 << bVar4 & (uVar6 ^ uVar13) ^ uVar6;
          uVar8 = (ulonglong)uVar6;
          *puVar1 = uVar6;
        }
        if (0xfff < uVar5) {
          iVar14 = *(int *)(&DAT_1805b8938 + lVar7);
          uVar8 = (ulonglong)iVar14;
          if (*(int *)(&DAT_1805b8934 + lVar7) - iVar14 < 0x10) {
            *(int *)(&DAT_1805b8938 + lVar7) = *(int *)(&DAT_1805b8934 + lVar7);
            (&DAT_1805b893c)[lVar7] = 1;
          }
          else {
            *(int *)(&DAT_1805b8938 + lVar7) = iVar14 + 0x10;
            bVar4 = (byte)iVar14 & 0x1f;
            uVar6 = *(uint *)(*plVar15 + ((longlong)uVar8 >> 5) * 4);
            puVar1 = (uint *)(*plVar15 + ((longlong)uVar8 >> 5) * 4);
            uVar9 = (uVar5 >> 0x10) << bVar4 | (uVar5 >> 0x10) >> 0x20 - bVar4;
            uVar5 = 0x7fff >> (0x1f - bVar4 & 0x1f);
            uVar13 = uVar5 & 1;
            puVar1[uVar13] = puVar1[uVar13] ^ (puVar1[uVar13] ^ uVar9) & uVar5;
            uVar8 = (ulonglong)(uint)(0xffff << bVar4);
            *puVar1 = (uVar6 ^ uVar9) & 0xffff << bVar4 ^ uVar6;
          }
        }
        (**(code **)(*plVar2 + 0xf8))
                  (plVar2,CONCAT71((int7)(uVar8 >> 8),(&DAT_1805b893c)[lVar7] == '\0'));
        return 1;
      }
    }
    (**(code **)(lVar3 + 0xf8))(plVar2,0);
    return 1;
  }
  return 0;
}


)B1800629f0",
    "3e384706b7ccff1a810ff5c2613cfb56bb98bafdfd9ceb55393112c6fbc57440",
    R"F1800629f0C(FUN_180039770)F1800629f0C",
    R"F1800629f0D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b8934
DAT_1805b8938
DAT_1805b893c)F1800629f0D",
    R"F1800629f0T()F1800629f0T",
    R"F1800629f0F(28: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_2)) {
31: if (((((int)uVar5 < 1) ||
36: else {
39: if (plVar15 != (longlong *)0x0) {
46: if (*(int *)(&DAT_1805b8934 + lVar7) - iVar14 < iVar10) {
50: else {
65: if (0xfff < uVar5) {
68: if (*(int *)(&DAT_1805b8934 + lVar7) - iVar14 < 0x10) {
72: else {
87: return 1;
91: return 1;
93: return 0;)F1800629f0F",
    R"F1800629f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8934.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8938.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 29: dVar16 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 40: dVar16 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);.
TODO: resolve the indirect call in body 85: (**(code **)(*plVar2 + 0xf8)).
TODO: resolve the indirect call in body 90: (**(code **)(lVar3 + 0xf8))(plVar2,0);.)F1800629f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800629f0() noexcept {
    return kFunction_0x1800629f0;
}

// 0x180062c50 FUN_180062c50
// source: re/dump/decompile/0x180062c50_FUN_180062c50.c
// size: 221 bytes; thunk: false
// body sha256: 8d934a8e1455ab9042b62084302590f903eed647b9829ddec9713f7202a22bef
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180062c50{
    "0x180062c50",
    "FUN_180062c50",
    R"F180062c50S(undefined FUN_180062c50())F180062c50S",
    R"B180062c50(// 0x180062c50  FUN_180062c50
// size=221 thunk=false
// signature: undefined FUN_180062c50()
// status: ok


undefined8 FUN_180062c50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] == '\0')) {
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
      if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
        dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);
        FUN_180019910(&DAT_1805b8928 + lVar4,(longlong)dVar5);
        (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar2 + 0xf8))(plVar1,0);
    return 1;
  }
  return 0;
}


)B180062c50",
    "8d934a8e1455ab9042b62084302590f903eed647b9829ddec9713f7202a22bef",
    R"F180062c50C(FUN_180019910
FUN_180039770)F180062c50C",
    R"F180062c50D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b893c)F180062c50D",
    R"F180062c50T()F180062c50T",
    R"F180062c50F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if (((((int)uVar3 < 1) ||
25: else {
27: if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
31: return 1;
35: return 1;
37: return 0;)F180062c50F",
    R"F180062c50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 28: dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');.
TODO: resolve the indirect call in body 34: (**(code **)(lVar2 + 0xf8))(plVar1,0);.)F180062c50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180062c50() noexcept {
    return kFunction_0x180062c50;
}

// 0x180062d30 FUN_180062d30
// source: re/dump/decompile/0x180062d30_FUN_180062d30.c
// size: 230 bytes; thunk: false
// body sha256: 7423720b853b929d8e7107ead1deb6268c6b5e8855ad1c2ab3d6107451121b47
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180062d30{
    "0x180062d30",
    "FUN_180062d30",
    R"F180062d30S(undefined FUN_180062d30())F180062d30S",
    R"B180062d30(// 0x180062d30  FUN_180062d30
// size=230 thunk=false
// signature: undefined FUN_180062d30()
// status: ok


undefined8 FUN_180062d30(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] == '\0')) {
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
      if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
        dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);
        FUN_180019910(&DAT_1805b8928 + lVar4,(int)(longlong)dVar5 >> 0x1f ^ (int)(longlong)dVar5 * 2
                     );
        (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar2 + 0xf8))(plVar1,0);
    return 1;
  }
  return 0;
}


)B180062d30",
    "7423720b853b929d8e7107ead1deb6268c6b5e8855ad1c2ab3d6107451121b47",
    R"F180062d30C(FUN_180019910
FUN_180039770)F180062d30C",
    R"F180062d30D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b893c)F180062d30D",
    R"F180062d30T()F180062d30T",
    R"F180062d30F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if (((((int)uVar3 < 1) ||
25: else {
27: if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
32: return 1;
36: return 1;
38: return 0;)F180062d30F",
    R"F180062d30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 28: dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);.
TODO: resolve the indirect call in body 31: (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');.
TODO: resolve the indirect call in body 35: (**(code **)(lVar2 + 0xf8))(plVar1,0);.)F180062d30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180062d30() noexcept {
    return kFunction_0x180062d30;
}

// 0x180062e20 FUN_180062e20
// source: re/dump/decompile/0x180062e20_FUN_180062e20.c
// size: 221 bytes; thunk: false
// body sha256: 94e3e8e772b9b5b76ecd274a2893141683b3336ed2b868a5c2825a1e3bece898
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180062e20{
    "0x180062e20",
    "FUN_180062e20",
    R"F180062e20S(undefined FUN_180062e20())F180062e20S",
    R"B180062e20(// 0x180062e20  FUN_180062e20
// size=221 thunk=false
// signature: undefined FUN_180062e20()
// status: ok


undefined8 FUN_180062e20(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] == '\0')) {
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
      if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
        dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);
        FUN_180019b40(&DAT_1805b8928 + lVar4,(longlong)dVar5);
        (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar2 + 0xf8))(plVar1,0);
    return 1;
  }
  return 0;
}


)B180062e20",
    "94e3e8e772b9b5b76ecd274a2893141683b3336ed2b868a5c2825a1e3bece898",
    R"F180062e20C(FUN_180019b40
FUN_180039770)F180062e20C",
    R"F180062e20D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b893c)F180062e20D",
    R"F180062e20T()F180062e20T",
    R"F180062e20F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if (((((int)uVar3 < 1) ||
25: else {
27: if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
31: return 1;
35: return 1;
37: return 0;)F180062e20F",
    R"F180062e20U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 28: dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');.
TODO: resolve the indirect call in body 34: (**(code **)(lVar2 + 0xf8))(plVar1,0);.)F180062e20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180062e20() noexcept {
    return kFunction_0x180062e20;
}

// 0x180062f00 FUN_180062f00
// source: re/dump/decompile/0x180062f00_FUN_180062f00.c
// size: 234 bytes; thunk: false
// body sha256: 4bea7caaad71fcdb0890bd828279b31dbe91ce6a20eec8f6511d27c371982999
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180062f00{
    "0x180062f00",
    "FUN_180062f00",
    R"F180062f00S(undefined FUN_180062f00())F180062f00S",
    R"B180062f00(// 0x180062f00  FUN_180062f00
// size=234 thunk=false
// signature: undefined FUN_180062f00()
// status: ok


undefined8 FUN_180062f00(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] == '\0')) {
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
      if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
        dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);
        FUN_180019b40(&DAT_1805b8928 + lVar4,(longlong)dVar5 >> 0x3f ^ (longlong)dVar5 * 2);
        (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar2 + 0xf8))(plVar1,0);
    return 1;
  }
  return 0;
}


)B180062f00",
    "4bea7caaad71fcdb0890bd828279b31dbe91ce6a20eec8f6511d27c371982999",
    R"F180062f00C(FUN_180019b40
FUN_180039770)F180062f00C",
    R"F180062f00D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b893c)F180062f00D",
    R"F180062f00T()F180062f00T",
    R"F180062f00F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if (((((int)uVar3 < 1) ||
25: else {
27: if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
31: return 1;
35: return 1;
37: return 0;)F180062f00F",
    R"F180062f00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 28: dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');.
TODO: resolve the indirect call in body 34: (**(code **)(lVar2 + 0xf8))(plVar1,0);.)F180062f00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180062f00() noexcept {
    return kFunction_0x180062f00;
}

// 0x180062ff0 FUN_180062ff0
// source: re/dump/decompile/0x180062ff0_FUN_180062ff0.c
// size: 371 bytes; thunk: false
// body sha256: cc9818b479dfad11422cfc29acff17ebc7a5169e430b256a35ce3949581a0c60
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180062ff0{
    "0x180062ff0",
    "FUN_180062ff0",
    R"F180062ff0S(undefined FUN_180062ff0())F180062ff0S",
    R"B180062ff0(// 0x180062ff0  FUN_180062ff0
// size=371 thunk=false
// signature: undefined FUN_180062ff0()
// status: ok


undefined8 FUN_180062ff0(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_1)) {
    return 0;
  }
  dVar13 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
  uVar7 = (uint)dVar13;
  if (((((int)uVar7 < 1) ||
       (lVar8 = (ulonglong)(uVar7 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar8] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar8) != uVar7 >> 6)) || ((&DAT_1805b88e1)[lVar8] == '\0')) {
    lVar6 = *plVar5;
  }
  else {
    lVar6 = *plVar5;
    if ((longlong *)(&DAT_1805b8928 + lVar8) != (longlong *)0x0) {
      dVar13 = (double)(**(code **)(lVar6 + 0x160))(plVar5,2);
      iVar2 = *(int *)(&DAT_1805b8938 + lVar8);
      uVar9 = (ulonglong)iVar2;
      if (*(int *)(&DAT_1805b8934 + lVar8) - iVar2 < 0x20) {
        *(int *)(&DAT_1805b8938 + lVar8) = *(int *)(&DAT_1805b8934 + lVar8);
        (&DAT_1805b893c)[lVar8] = 1;
      }
      else {
        *(int *)(&DAT_1805b8938 + lVar8) = iVar2 + 0x20;
        lVar6 = *(longlong *)(&DAT_1805b8928 + lVar8);
        bVar3 = (byte)iVar2 & 0x1f;
        uVar7 = *(uint *)(lVar6 + ((longlong)uVar9 >> 5) * 4);
        puVar1 = (uint *)(lVar6 + ((longlong)uVar9 >> 5) * 4);
        uVar12 = (uint)(float)dVar13 >> (0x20 - bVar3 & 0x1f) | (int)(float)dVar13 << bVar3;
        uVar4 = 0x7fffffff >> (0x1f - bVar3 & 0x1f);
        uVar11 = uVar4 & 1;
        puVar1[uVar11] = puVar1[uVar11] ^ (puVar1[uVar11] ^ uVar12) & uVar4;
        uVar7 = (uVar7 ^ uVar12) & -1 << bVar3 ^ uVar7;
        uVar9 = (ulonglong)uVar7;
        *puVar1 = uVar7;
      }
      lVar6 = *plVar5;
      uVar10 = CONCAT71((int7)(uVar9 >> 8),(&DAT_1805b893c)[lVar8] == '\0');
      goto LAB_180063131;
    }
  }
  uVar10 = 0;
LAB_180063131:
  (**(code **)(lVar6 + 0xf8))(plVar5,uVar10);
  return 1;
}


)B180062ff0",
    "cc9818b479dfad11422cfc29acff17ebc7a5169e430b256a35ce3949581a0c60",
    R"F180062ff0C(FUN_180039770)F180062ff0C",
    R"F180062ff0D(LAB_180063131
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b8934
DAT_1805b8938
DAT_1805b893c)F180062ff0D",
    R"F180062ff0T()F180062ff0T",
    R"F180062ff0F(25: if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_1)) {
26: return 0;
30: if (((((int)uVar7 < 1) ||
35: else {
37: if ((longlong *)(&DAT_1805b8928 + lVar8) != (longlong *)0x0) {
41: if (*(int *)(&DAT_1805b8934 + lVar8) - iVar2 < 0x20) {
45: else {
61: goto LAB_180063131;
65: LAB_180063131:
67: return 1;)F180062ff0F",
    R"F180062ff0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180063131.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8934.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8938.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 28: dVar13 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);.
TODO: resolve the indirect call in body 38: dVar13 = (double)(**(code **)(lVar6 + 0x160))(plVar5,2);.
TODO: resolve the indirect call in body 66: (**(code **)(lVar6 + 0xf8))(plVar5,uVar10);.)F180062ff0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180062ff0() noexcept {
    return kFunction_0x180062ff0;
}

// 0x180063170 FUN_180063170
// source: re/dump/decompile/0x180063170_FUN_180063170.c
// size: 227 bytes; thunk: false
// body sha256: 1b441e6dc1242af897822e37ea41a777c99336ff486813389954c7c3d2a7f32f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180063170{
    "0x180063170",
    "FUN_180063170",
    R"F180063170S(undefined FUN_180063170())F180063170S",
    R"B180063170(// 0x180063170  FUN_180063170
// size=227 thunk=false
// signature: undefined FUN_180063170()
// status: ok


undefined8 FUN_180063170(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] == '\0')) {
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
      if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
        dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);
        FUN_180019830(&DAT_1805b8928 + lVar4,(longlong)dVar5,8);
        (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar2 + 0xf8))(plVar1,0);
    return 1;
  }
  return 0;
}


)B180063170",
    "1b441e6dc1242af897822e37ea41a777c99336ff486813389954c7c3d2a7f32f",
    R"F180063170C(FUN_180019830
FUN_180039770)F180063170C",
    R"F180063170D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b893c)F180063170D",
    R"F180063170T()F180063170T",
    R"F180063170F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if (((((int)uVar3 < 1) ||
25: else {
27: if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
31: return 1;
35: return 1;
37: return 0;)F180063170F",
    R"F180063170U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 28: dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');.
TODO: resolve the indirect call in body 34: (**(code **)(lVar2 + 0xf8))(plVar1,0);.)F180063170U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180063170() noexcept {
    return kFunction_0x180063170;
}

// 0x180063260 FUN_180063260
// source: re/dump/decompile/0x180063260_FUN_180063260.c
// size: 352 bytes; thunk: false
// body sha256: c606b7dcd4b0517a9468859e67a3e6bef2ff3a2b6f0b3f40c9113a8b1504f6ff
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180063260{
    "0x180063260",
    "FUN_180063260",
    R"F180063260S(undefined FUN_180063260())F180063260S",
    R"B180063260(// 0x180063260  FUN_180063260
// size=352 thunk=false
// signature: undefined FUN_180063260()
// status: ok


undefined8 FUN_180063260(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    return 0;
  }
  dVar13 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar7 = (uint)dVar13;
  if (((((int)uVar7 < 1) ||
       (lVar8 = (ulonglong)(uVar7 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar8] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar8) != uVar7 >> 6)) || ((&DAT_1805b88e1)[lVar8] == '\0')) {
    lVar5 = *plVar4;
  }
  else {
    lVar5 = *plVar4;
    if ((longlong *)(&DAT_1805b8928 + lVar8) != (longlong *)0x0) {
      dVar13 = (double)(**(code **)(lVar5 + 0x160))(plVar4,2);
      iVar2 = *(int *)(&DAT_1805b8938 + lVar8);
      uVar9 = (ulonglong)iVar2;
      if (*(int *)(&DAT_1805b8934 + lVar8) - iVar2 < 8) {
        *(int *)(&DAT_1805b8938 + lVar8) = *(int *)(&DAT_1805b8934 + lVar8);
        (&DAT_1805b893c)[lVar8] = 1;
      }
      else {
        *(int *)(&DAT_1805b8938 + lVar8) = iVar2 + 8;
        lVar5 = *(longlong *)(&DAT_1805b8928 + lVar8);
        bVar6 = (byte)iVar2 & 0x1f;
        uVar7 = *(uint *)(lVar5 + ((longlong)uVar9 >> 5) * 4);
        puVar1 = (uint *)(lVar5 + ((longlong)uVar9 >> 5) * 4);
        uVar12 = (uint)(longlong)dVar13 << bVar6 | (uint)(longlong)dVar13 >> 0x20 - bVar6;
        uVar3 = 0x7f >> (0x1f - bVar6 & 0x1f);
        uVar11 = uVar3 & 1;
        puVar1[uVar11] = puVar1[uVar11] ^ (puVar1[uVar11] ^ uVar12) & uVar3;
        uVar7 = (uVar7 ^ uVar12) & 0xff << bVar6 ^ uVar7;
        uVar9 = (ulonglong)uVar7;
        *puVar1 = uVar7;
      }
      lVar5 = *plVar4;
      uVar10 = CONCAT71((int7)(uVar9 >> 8),(&DAT_1805b893c)[lVar8] == '\0');
      goto LAB_18006338e;
    }
  }
  uVar10 = 0;
LAB_18006338e:
  (**(code **)(lVar5 + 0xf8))(plVar4,uVar10);
  return 1;
}


)B180063260",
    "c606b7dcd4b0517a9468859e67a3e6bef2ff3a2b6f0b3f40c9113a8b1504f6ff",
    R"F180063260C(FUN_180039770)F180063260C",
    R"F180063260D(LAB_18006338e
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b8934
DAT_1805b8938
DAT_1805b893c)F180063260D",
    R"F180063260T()F180063260T",
    R"F180063260F(25: if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
26: return 0;
30: if (((((int)uVar7 < 1) ||
35: else {
37: if ((longlong *)(&DAT_1805b8928 + lVar8) != (longlong *)0x0) {
41: if (*(int *)(&DAT_1805b8934 + lVar8) - iVar2 < 8) {
45: else {
61: goto LAB_18006338e;
65: LAB_18006338e:
67: return 1;)F180063260F",
    R"F180063260U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18006338e.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8934.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8938.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 28: dVar13 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);.
TODO: resolve the indirect call in body 38: dVar13 = (double)(**(code **)(lVar5 + 0x160))(plVar4,2);.
TODO: resolve the indirect call in body 66: (**(code **)(lVar5 + 0xf8))(plVar4,uVar10);.)F180063260U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180063260() noexcept {
    return kFunction_0x180063260;
}

// 0x1800633c0 FUN_1800633c0
// source: re/dump/decompile/0x1800633c0_FUN_1800633c0.c
// size: 227 bytes; thunk: false
// body sha256: a5987185c98c69b6aa3b58982cc65db8c3545c1861cbbff79d08cdf45bd36242
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800633c0{
    "0x1800633c0",
    "FUN_1800633c0",
    R"F1800633c0S(undefined FUN_1800633c0())F1800633c0S",
    R"B1800633c0(// 0x1800633c0  FUN_1800633c0
// size=227 thunk=false
// signature: undefined FUN_1800633c0()
// status: ok


undefined8 FUN_1800633c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] == '\0')) {
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
      if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
        dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);
        FUN_180019830(&DAT_1805b8928 + lVar4,(longlong)dVar5,0x10);
        (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar2 + 0xf8))(plVar1,0);
    return 1;
  }
  return 0;
}


)B1800633c0",
    "a5987185c98c69b6aa3b58982cc65db8c3545c1861cbbff79d08cdf45bd36242",
    R"F1800633c0C(FUN_180019830
FUN_180039770)F1800633c0C",
    R"F1800633c0D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b893c)F1800633c0D",
    R"F1800633c0T()F1800633c0T",
    R"F1800633c0F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if (((((int)uVar3 < 1) ||
25: else {
27: if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
31: return 1;
35: return 1;
37: return 0;)F1800633c0F",
    R"F1800633c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 28: dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');.
TODO: resolve the indirect call in body 34: (**(code **)(lVar2 + 0xf8))(plVar1,0);.)F1800633c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800633c0() noexcept {
    return kFunction_0x1800633c0;
}

// 0x1800634b0 FUN_1800634b0
// source: re/dump/decompile/0x1800634b0_FUN_1800634b0.c
// size: 352 bytes; thunk: false
// body sha256: 524fa5601d3be33faf943057d3c17fd12e5b4b57784127073c7c89d1326513a7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800634b0{
    "0x1800634b0",
    "FUN_1800634b0",
    R"F1800634b0S(undefined FUN_1800634b0())F1800634b0S",
    R"B1800634b0(// 0x1800634b0  FUN_1800634b0
// size=352 thunk=false
// signature: undefined FUN_1800634b0()
// status: ok


undefined8 FUN_1800634b0(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    return 0;
  }
  dVar13 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar7 = (uint)dVar13;
  if (((((int)uVar7 < 1) ||
       (lVar8 = (ulonglong)(uVar7 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar8] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar8) != uVar7 >> 6)) || ((&DAT_1805b88e1)[lVar8] == '\0')) {
    lVar5 = *plVar4;
  }
  else {
    lVar5 = *plVar4;
    if ((longlong *)(&DAT_1805b8928 + lVar8) != (longlong *)0x0) {
      dVar13 = (double)(**(code **)(lVar5 + 0x160))(plVar4,2);
      iVar2 = *(int *)(&DAT_1805b8938 + lVar8);
      uVar9 = (ulonglong)iVar2;
      if (*(int *)(&DAT_1805b8934 + lVar8) - iVar2 < 0x10) {
        *(int *)(&DAT_1805b8938 + lVar8) = *(int *)(&DAT_1805b8934 + lVar8);
        (&DAT_1805b893c)[lVar8] = 1;
      }
      else {
        *(int *)(&DAT_1805b8938 + lVar8) = iVar2 + 0x10;
        lVar5 = *(longlong *)(&DAT_1805b8928 + lVar8);
        bVar6 = (byte)iVar2 & 0x1f;
        uVar7 = *(uint *)(lVar5 + ((longlong)uVar9 >> 5) * 4);
        puVar1 = (uint *)(lVar5 + ((longlong)uVar9 >> 5) * 4);
        uVar12 = (uint)(longlong)dVar13 << bVar6 | (uint)(longlong)dVar13 >> 0x20 - bVar6;
        uVar3 = 0x7fff >> (0x1f - bVar6 & 0x1f);
        uVar11 = uVar3 & 1;
        puVar1[uVar11] = puVar1[uVar11] ^ (puVar1[uVar11] ^ uVar12) & uVar3;
        uVar7 = (uVar7 ^ uVar12) & 0xffff << bVar6 ^ uVar7;
        uVar9 = (ulonglong)uVar7;
        *puVar1 = uVar7;
      }
      lVar5 = *plVar4;
      uVar10 = CONCAT71((int7)(uVar9 >> 8),(&DAT_1805b893c)[lVar8] == '\0');
      goto LAB_1800635de;
    }
  }
  uVar10 = 0;
LAB_1800635de:
  (**(code **)(lVar5 + 0xf8))(plVar4,uVar10);
  return 1;
}


)B1800634b0",
    "524fa5601d3be33faf943057d3c17fd12e5b4b57784127073c7c89d1326513a7",
    R"F1800634b0C(FUN_180039770)F1800634b0C",
    R"F1800634b0D(LAB_1800635de
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b8934
DAT_1805b8938
DAT_1805b893c)F1800634b0D",
    R"F1800634b0T()F1800634b0T",
    R"F1800634b0F(25: if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
26: return 0;
30: if (((((int)uVar7 < 1) ||
35: else {
37: if ((longlong *)(&DAT_1805b8928 + lVar8) != (longlong *)0x0) {
41: if (*(int *)(&DAT_1805b8934 + lVar8) - iVar2 < 0x10) {
45: else {
61: goto LAB_1800635de;
65: LAB_1800635de:
67: return 1;)F1800634b0F",
    R"F1800634b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1800635de.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8934.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8938.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 28: dVar13 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);.
TODO: resolve the indirect call in body 38: dVar13 = (double)(**(code **)(lVar5 + 0x160))(plVar4,2);.
TODO: resolve the indirect call in body 66: (**(code **)(lVar5 + 0xf8))(plVar4,uVar10);.)F1800634b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800634b0() noexcept {
    return kFunction_0x1800634b0;
}

// 0x180063610 FUN_180063610
// source: re/dump/decompile/0x180063610_FUN_180063610.c
// size: 227 bytes; thunk: false
// body sha256: e8b74626229ba06c210acd7b83391c68f5c315c951dafa4d4de904a9d6b90488
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180063610{
    "0x180063610",
    "FUN_180063610",
    R"F180063610S(undefined FUN_180063610())F180063610S",
    R"B180063610(// 0x180063610  FUN_180063610
// size=227 thunk=false
// signature: undefined FUN_180063610()
// status: ok


undefined8 FUN_180063610(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] == '\0')) {
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
      if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
        dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);
        FUN_180019830(&DAT_1805b8928 + lVar4,(longlong)dVar5,0x20);
        (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar2 + 0xf8))(plVar1,0);
    return 1;
  }
  return 0;
}


)B180063610",
    "e8b74626229ba06c210acd7b83391c68f5c315c951dafa4d4de904a9d6b90488",
    R"F180063610C(FUN_180019830
FUN_180039770)F180063610C",
    R"F180063610D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b893c)F180063610D",
    R"F180063610T()F180063610T",
    R"F180063610F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if (((((int)uVar3 < 1) ||
25: else {
27: if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
31: return 1;
35: return 1;
37: return 0;)F180063610F",
    R"F180063610U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 28: dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');.
TODO: resolve the indirect call in body 34: (**(code **)(lVar2 + 0xf8))(plVar1,0);.)F180063610U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180063610() noexcept {
    return kFunction_0x180063610;
}

// 0x180063700 FUN_180063700
// source: re/dump/decompile/0x180063700_FUN_180063700.c
// size: 525 bytes; thunk: false
// body sha256: 7dfe00c87ce082dcd91e7f8657b932bd96bb84883f4cd8ccdf5abb4e6d527854
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180063700{
    "0x180063700",
    "FUN_180063700",
    R"F180063700S(undefined FUN_180063700())F180063700S",
    R"B180063700(// 0x180063700  FUN_180063700
// size=525 thunk=false
// signature: undefined FUN_180063700()
// status: ok


undefined8 FUN_180063700(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) {
    dVar13 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar6 = (uint)dVar13;
    if (((((int)uVar6 < 1) ||
         (lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] == '\0')) {
      lVar4 = *plVar3;
    }
    else {
      lVar4 = *plVar3;
      plVar10 = (longlong *)(&DAT_1805b8928 + lVar7);
      if (plVar10 != (longlong *)0x0) {
        dVar13 = (double)(**(code **)(lVar4 + 0x160))(plVar3,2);
        iVar2 = *(int *)(&DAT_1805b8938 + lVar7);
        if (*(int *)(&DAT_1805b8934 + lVar7) - iVar2 < 0x20) {
          *(int *)(&DAT_1805b8938 + lVar7) = *(int *)(&DAT_1805b8934 + lVar7);
          (&DAT_1805b893c)[lVar7] = 1;
        }
        else {
          *(int *)(&DAT_1805b8938 + lVar7) = iVar2 + 0x20;
          bVar5 = (byte)iVar2 & 0x1f;
          uVar6 = *(uint *)(*plVar10 + ((longlong)iVar2 >> 5) * 4);
          puVar1 = (uint *)(*plVar10 + ((longlong)iVar2 >> 5) * 4);
          uVar9 = (uint)(longlong)dVar13;
          uVar12 = uVar9 << bVar5 | uVar9 >> 0x20 - bVar5;
          uVar9 = 0x7fffffff >> (0x1f - bVar5 & 0x1f);
          uVar11 = uVar9 & 1;
          puVar1[uVar11] = puVar1[uVar11] ^ (puVar1[uVar11] ^ uVar12) & uVar9;
          *puVar1 = (uVar6 ^ uVar12) & -1 << bVar5 ^ uVar6;
        }
        iVar2 = *(int *)(&DAT_1805b8938 + lVar7);
        uVar8 = (ulonglong)iVar2;
        if (*(int *)(&DAT_1805b8934 + lVar7) - iVar2 < 0x20) {
          *(int *)(&DAT_1805b8938 + lVar7) = *(int *)(&DAT_1805b8934 + lVar7);
          (&DAT_1805b893c)[lVar7] = 1;
        }
        else {
          bVar5 = (byte)iVar2 & 0x1f;
          *(int *)(&DAT_1805b8938 + lVar7) = iVar2 + 0x20;
          uVar6 = *(uint *)(*plVar10 + ((longlong)uVar8 >> 5) * 4);
          puVar1 = (uint *)(*plVar10 + ((longlong)uVar8 >> 5) * 4);
          uVar9 = (uint)((ulonglong)(longlong)dVar13 >> 0x20);
          uVar9 = uVar9 << bVar5 | uVar9 >> 0x20 - bVar5;
          uVar12 = 0x7fffffff >> (0x1f - bVar5 & 0x1f);
          uVar11 = uVar12 & 1;
          puVar1[uVar11] = puVar1[uVar11] ^ (puVar1[uVar11] ^ uVar9) & uVar12;
          uVar6 = (uVar6 ^ uVar9) & -1 << bVar5 ^ uVar6;
          uVar8 = (ulonglong)uVar6;
          *puVar1 = uVar6;
        }
        (**(code **)(*plVar3 + 0xf8))
                  (plVar3,CONCAT71((int7)(uVar8 >> 8),(&DAT_1805b893c)[lVar7] == '\0'));
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xf8))(plVar3,0);
    return 1;
  }
  return 0;
}


)B180063700",
    "7dfe00c87ce082dcd91e7f8657b932bd96bb84883f4cd8ccdf5abb4e6d527854",
    R"F180063700C(FUN_180039770)F180063700C",
    R"F180063700D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b8934
DAT_1805b8938
DAT_1805b893c)F180063700D",
    R"F180063700T()F180063700T",
    R"F180063700F(25: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) {
28: if (((((int)uVar6 < 1) ||
33: else {
36: if (plVar10 != (longlong *)0x0) {
39: if (*(int *)(&DAT_1805b8934 + lVar7) - iVar2 < 0x20) {
43: else {
57: if (*(int *)(&DAT_1805b8934 + lVar7) - iVar2 < 0x20) {
61: else {
77: return 1;
81: return 1;
83: return 0;)F180063700F",
    R"F180063700U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8934.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8938.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 26: dVar13 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 37: dVar13 = (double)(**(code **)(lVar4 + 0x160))(plVar3,2);.
TODO: resolve the indirect call in body 75: (**(code **)(*plVar3 + 0xf8)).
TODO: resolve the indirect call in body 80: (**(code **)(lVar4 + 0xf8))(plVar3,0);.)F180063700U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180063700() noexcept {
    return kFunction_0x180063700;
}

// 0x180063920 FUN_180063920
// source: re/dump/decompile/0x180063920_FUN_180063920.c
// size: 250 bytes; thunk: false
// body sha256: 82ee009f8637c85fdb566c261a6def0335ab9cd9b3c7199410b02e415c264c6b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180063920{
    "0x180063920",
    "FUN_180063920",
    R"F180063920S(undefined FUN_180063920())F180063920S",
    R"B180063920(// 0x180063920  FUN_180063920
// size=250 thunk=false
// signature: undefined FUN_180063920()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180063920(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_38 [32];
  float local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    uVar3 = 0;
  }
  else {
    dVar6 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar4 = (uint)dVar6;
    if (((((int)uVar4 < 1) ||
         (lVar5 = (ulonglong)(uVar4 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar5] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar5) != uVar4 >> 6)) || ((&DAT_1805b88e1)[lVar5] == '\0')) {
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
      if (&DAT_1805b8928 + lVar5 != (undefined *)0x0) {
        dVar6 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);
        local_18[0] = (float)dVar6;
        FUN_180019e10(&DAT_1805b8928 + lVar5,local_18,0x20);
        (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar5] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar2 + 0xf8))(plVar1,0);
    uVar3 = 1;
  }
  return uVar3;
}


)B180063920",
    "82ee009f8637c85fdb566c261a6def0335ab9cd9b3c7199410b02e415c264c6b",
    R"F180063920C(FUN_180019e10
FUN_180039770)F180063920C",
    R"F180063920D(DAT_1803da4c0
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b893c)F180063920D",
    R"F180063920T()F180063920T",
    R"F180063920F(24: if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
27: else {
30: if (((((int)uVar4 < 1) ||
35: else {
37: if (&DAT_1805b8928 + lVar5 != (undefined *)0x0) {
42: return 1;
48: return uVar3;)F180063920F",
    R"F180063920U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 28: dVar6 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 38: dVar6 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);.
TODO: resolve the indirect call in body 41: (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar5] == '\0');.
TODO: resolve the indirect call in body 45: (**(code **)(lVar2 + 0xf8))(plVar1,0);.)F180063920U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180063920() noexcept {
    return kFunction_0x180063920;
}

// 0x180063a20 FUN_180063a20
// source: re/dump/decompile/0x180063a20_FUN_180063a20.c
// size: 316 bytes; thunk: false
// body sha256: 531012cacf2946f4b1c17b6667c9750677a49ecc57f46c4af303316bc500803c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180063a20{
    "0x180063a20",
    "FUN_180063a20",
    R"F180063a20S(undefined FUN_180063a20())F180063a20S",
    R"B180063a20(// 0x180063a20  FUN_180063a20
// size=316 thunk=false
// signature: undefined FUN_180063a20()
// status: ok


undefined8 FUN_180063a20(longlong param_1)

{
  char cVar1;
  code *pcVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  double dVar9;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar9 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar6 = (uint)dVar9;
    if (((int)uVar6 < 1) ||
       (((lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0' ||
         (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] == '\0'))))
    {
      lVar5 = *plVar3;
    }
    else {
      lVar5 = *plVar3;
      if (&DAT_1805b8928 + lVar7 != (undefined *)0x0) {
        pcVar4 = (char *)(**(code **)(lVar5 + 0x158))(plVar3,2);
        pcVar2 = *(code **)(*plVar3 + 0xf8);
        if (pcVar4 == (char *)0x0) {
          bVar8 = false;
        }
        else {
          do {
            FUN_180019830(&DAT_1805b8928 + lVar7,(int)*pcVar4,8);
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          bVar8 = (&DAT_1805b893c)[lVar7] == '\0';
        }
        (*pcVar2)(plVar3,bVar8);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xf8))(plVar3,0);
    return 1;
  }
  return 0;
}


)B180063a20",
    "531012cacf2946f4b1c17b6667c9750677a49ecc57f46c4af303316bc500803c",
    R"F180063a20C(FUN_180019830
FUN_180039770)F180063a20C",
    R"F180063a20D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b893c)F180063a20D",
    R"F180063a20T()F180063a20T",
    R"F180063a20F(21: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
24: if (((int)uVar6 < 1) ||
30: else {
32: if (&DAT_1805b8928 + lVar7 != (undefined *)0x0) {
35: if (pcVar4 == (char *)0x0) {
38: else {
39: do {
47: return 1;
51: return 1;
53: return 0;)F180063a20F",
    R"F180063a20U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 22: dVar9 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 33: pcVar4 = (char *)(**(code **)(lVar5 + 0x158))(plVar3,2);.
TODO: resolve the indirect call in body 34: pcVar2 = *(code **)(*plVar3 + 0xf8);.
TODO: resolve the indirect call in body 46: (*pcVar2)(plVar3,bVar8);.
TODO: resolve the indirect call in body 50: (**(code **)(lVar5 + 0xf8))(plVar3,0);.)F180063a20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180063a20() noexcept {
    return kFunction_0x180063a20;
}

// 0x180063b60 FUN_180063b60
// source: re/dump/decompile/0x180063b60_FUN_180063b60.c
// size: 392 bytes; thunk: false
// body sha256: 18f9f8b0fcad2cf1a5709c0f1f058765a83cc692a7f05ee5dc5282becdb85b77
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180063b60{
    "0x180063b60",
    "FUN_180063b60",
    R"F180063b60S(undefined FUN_180063b60())F180063b60S",
    R"B180063b60(// 0x180063b60  FUN_180063b60
// size=392 thunk=false
// signature: undefined FUN_180063b60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180063b60(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  void *_Src;
  void *_Dst;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_38 [32];
  uint local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    uVar4 = 0;
  }
  else {
    dVar7 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar5 = (uint)dVar7;
    if (((((int)uVar5 < 1) ||
         (lVar6 = (ulonglong)(uVar5 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar6] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar6) != uVar5 >> 6)) ||
       (((&DAT_1805b88e1)[lVar6] == '\0' || (&DAT_1805b8928 + lVar6 == (undefined *)0x0)))) {
      (**(code **)(*plVar3 + 0xf8))(plVar3,0);
    }
    else {
      local_18[0] = 0;
      _Src = (void *)(**(code **)(*plVar3 + 0xb8))(plVar3,2,local_18);
      if ((_Src == (void *)0x0) || (local_18[0] == 0)) {
        (**(code **)(*plVar3 + 0xf8))(plVar3,1);
      }
      else {
        if (0x10000 < local_18[0]) {
          local_18[0] = 0x10000;
        }
        _Dst = (void *)FUN_18005e2e0();
        if (_Dst == (void *)0x0) {
          (**(code **)(*plVar3 + 0xf8))(plVar3,0);
        }
        else {
          memcpy(_Dst,_Src,(ulonglong)local_18[0]);
          pcVar1 = *(code **)(*plVar3 + 0xf8);
          uVar2 = FUN_180019e10(&DAT_1805b8928 + lVar6,_Dst,local_18[0] * 8);
          (*pcVar1)(plVar3,uVar2);
        }
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


)B180063b60",
    "18f9f8b0fcad2cf1a5709c0f1f058765a83cc692a7f05ee5dc5282becdb85b77",
    R"F180063b60C(FUN_180019e10
FUN_180039770
FUN_18005e2e0)F180063b60C",
    R"F180063b60D(DAT_1803da4c0
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928)F180063b60D",
    R"F180063b60T()F180063b60T",
    R"F180063b60F(27: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
30: else {
33: if (((((int)uVar5 < 1) ||
39: else {
42: if ((_Src == (void *)0x0) || (local_18[0] == 0)) {
45: else {
46: if (0x10000 < local_18[0]) {
50: if (_Dst == (void *)0x0) {
53: else {
63: return uVar4;)F180063b60F",
    R"F180063b60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: resolve the indirect call in body 31: dVar7 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 37: (**(code **)(*plVar3 + 0xf8))(plVar3,0);.
TODO: resolve the indirect call in body 41: _Src = (void *)(**(code **)(*plVar3 + 0xb8))(plVar3,2,local_18);.
TODO: resolve the indirect call in body 43: (**(code **)(*plVar3 + 0xf8))(plVar3,1);.
TODO: resolve the indirect call in body 51: (**(code **)(*plVar3 + 0xf8))(plVar3,0);.
TODO: resolve the indirect call in body 55: pcVar1 = *(code **)(*plVar3 + 0xf8);.
TODO: resolve the indirect call in body 57: (*pcVar1)(plVar3,uVar2);.)F180063b60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180063b60() noexcept {
    return kFunction_0x180063b60;
}

// 0x180063cf0 FUN_180063cf0
// source: re/dump/decompile/0x180063cf0_FUN_180063cf0.c
// size: 455 bytes; thunk: false
// body sha256: 5a34a33a5fd4da500f212f92eb90afe3a512e5258396ca942e009277d9fb5124
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180063cf0{
    "0x180063cf0",
    "FUN_180063cf0",
    R"F180063cf0S(undefined FUN_180063cf0())F180063cf0S",
    R"B180063cf0(// 0x180063cf0  FUN_180063cf0
// size=455 thunk=false
// signature: undefined FUN_180063cf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180063cf0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  void *_Src;
  void *_Dst;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auStack_48 [32];
  int local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
    uVar6 = 0;
  }
  else {
    dVar9 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
    uVar7 = (uint)dVar9;
    if (((((int)uVar7 < 1) ||
         (lVar8 = (ulonglong)(uVar7 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar8] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar8) != uVar7 >> 6)) ||
       (((&DAT_1805b88e1)[lVar8] == '\0' || (&DAT_1805b8928 + lVar8 == (undefined *)0x0)))) {
      (**(code **)(*plVar5 + 0xf8))(plVar5,0);
    }
    else {
      local_28[0] = 0;
      _Src = (void *)(**(code **)(*plVar5 + 0xb8))(plVar5,2,local_28);
      if (_Src == (void *)0x0) {
        (**(code **)(*plVar5 + 0xf8))(plVar5,0);
      }
      else {
        dVar9 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,3);
        iVar4 = 0;
        if (-1 < (int)dVar9) {
          iVar4 = (int)dVar9;
        }
        if (0x80000 < iVar4) {
          iVar4 = 0x80000;
        }
        iVar2 = local_28[0] * 8;
        if (iVar4 <= local_28[0] * 8) {
          iVar2 = iVar4;
        }
        if (iVar2 < 1) {
          (**(code **)(*plVar5 + 0xf8))(plVar5,1);
        }
        else {
          iVar4 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
          _Dst = (void *)FUN_18005e2e0(iVar4);
          if (_Dst == (void *)0x0) {
            (**(code **)(*plVar5 + 0xf8))(plVar5,0);
          }
          else {
            memcpy(_Dst,_Src,(longlong)iVar4);
            pcVar1 = *(code **)(*plVar5 + 0xf8);
            uVar3 = FUN_180019e10(&DAT_1805b8928 + lVar8,_Dst,iVar2);
            (*pcVar1)(plVar5,uVar3);
          }
        }
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}


)B180063cf0",
    "5a34a33a5fd4da500f212f92eb90afe3a512e5258396ca942e009277d9fb5124",
    R"F180063cf0C(FUN_180019e10
FUN_180039770
FUN_18005e2e0)F180063cf0C",
    R"F180063cf0D(DAT_1803da4c0
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928)F180063cf0D",
    R"F180063cf0T()F180063cf0T",
    R"F180063cf0F(29: if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
32: else {
35: if (((((int)uVar7 < 1) ||
41: else {
44: if (_Src == (void *)0x0) {
47: else {
50: if (-1 < (int)dVar9) {
53: if (0x80000 < iVar4) {
57: if (iVar4 <= local_28[0] * 8) {
60: if (iVar2 < 1) {
63: else {
66: if (_Dst == (void *)0x0) {
69: else {
80: return uVar6;)F180063cf0F",
    R"F180063cf0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: resolve the indirect call in body 33: dVar9 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);.
TODO: resolve the indirect call in body 39: (**(code **)(*plVar5 + 0xf8))(plVar5,0);.
TODO: resolve the indirect call in body 43: _Src = (void *)(**(code **)(*plVar5 + 0xb8))(plVar5,2,local_28);.
TODO: resolve the indirect call in body 45: (**(code **)(*plVar5 + 0xf8))(plVar5,0);.
TODO: resolve the indirect call in body 48: dVar9 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,3);.
TODO: resolve the indirect call in body 61: (**(code **)(*plVar5 + 0xf8))(plVar5,1);.
TODO: resolve the indirect call in body 67: (**(code **)(*plVar5 + 0xf8))(plVar5,0);.
TODO: resolve the indirect call in body 71: pcVar1 = *(code **)(*plVar5 + 0xf8);.
TODO: resolve the indirect call in body 73: (*pcVar1)(plVar5,uVar3);.)F180063cf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180063cf0() noexcept {
    return kFunction_0x180063cf0;
}

// 0x180063ed0 FUN_180063ed0
// source: re/dump/decompile/0x180063ed0_FUN_180063ed0.c
// size: 368 bytes; thunk: false
// body sha256: a2658999f669af9a09631edf9281008fa3697d1d95dc8ce880da85e595cb5c77
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180063ed0{
    "0x180063ed0",
    "FUN_180063ed0",
    R"F180063ed0S(undefined FUN_180063ed0())F180063ed0S",
    R"B180063ed0(// 0x180063ed0  FUN_180063ed0
// size=368 thunk=false
// signature: undefined FUN_180063ed0()
// status: ok


undefined8 FUN_180063ed0(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  double dVar10;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar10 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar5 = (uint)dVar10;
    if (((((int)uVar5 < 1) ||
         (lVar7 = (ulonglong)(uVar5 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar5 >> 6)) || ((&DAT_1805b88e1)[lVar7] == '\0')) {
      lVar8 = *plVar3;
    }
    else {
      lVar8 = *plVar3;
      if (&DAT_1805b8928 + lVar7 != (undefined *)0x0) {
        dVar10 = (double)(**(code **)(lVar8 + 0x160))(plVar3,2);
        uVar5 = (uint)dVar10;
        if ((((int)uVar5 < 1) ||
            (lVar8 = (ulonglong)(uVar5 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar8] == '\0')) ||
           ((*(uint *)(&DAT_1805b88e4 + lVar8) != uVar5 >> 6 || ((&DAT_1805b88e1)[lVar8] != '\0'))))
        {
          lVar4 = *plVar3;
        }
        else {
          lVar4 = *plVar3;
          if (&DAT_1805b8908 + lVar8 != (undefined *)0x0) {
            dVar10 = (double)(**(code **)(lVar4 + 0x160))(plVar3,3);
            iVar6 = 0;
            if (-1 < (int)dVar10) {
              iVar6 = (int)dVar10;
            }
            pcVar1 = *(code **)(*plVar3 + 0xf8);
            iVar9 = 0x80000;
            if ((iVar6 < 0x80001) && (iVar9 = iVar6, iVar6 < 1)) {
              uVar2 = 1;
            }
            else {
              uVar2 = FUN_18001a130(&DAT_1805b8928 + lVar7,&DAT_1805b8908 + lVar8,iVar9);
            }
            (*pcVar1)(plVar3,uVar2);
            return 1;
          }
        }
        (**(code **)(lVar4 + 0xf8))(plVar3,0);
        return 1;
      }
    }
    (**(code **)(lVar8 + 0xf8))(plVar3,0);
    return 1;
  }
  return 0;
}


)B180063ed0",
    "a2658999f669af9a09631edf9281008fa3697d1d95dc8ce880da85e595cb5c77",
    R"F180063ed0C(FUN_18001a130
FUN_180039770)F180063ed0C",
    R"F180063ed0D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8908
DAT_1805b8928)F180063ed0D",
    R"F180063ed0T()F180063ed0T",
    R"F180063ed0F(22: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
25: if (((((int)uVar5 < 1) ||
30: else {
32: if (&DAT_1805b8928 + lVar7 != (undefined *)0x0) {
35: if ((((int)uVar5 < 1) ||
41: else {
43: if (&DAT_1805b8908 + lVar8 != (undefined *)0x0) {
46: if (-1 < (int)dVar10) {
51: if ((iVar6 < 0x80001) && (iVar9 = iVar6, iVar6 < 1)) {
54: else {
58: return 1;
62: return 1;
66: return 1;
68: return 0;)F180063ed0F",
    R"F180063ed0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8908.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: resolve the indirect call in body 23: dVar10 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 33: dVar10 = (double)(**(code **)(lVar8 + 0x160))(plVar3,2);.
TODO: resolve the indirect call in body 44: dVar10 = (double)(**(code **)(lVar4 + 0x160))(plVar3,3);.
TODO: resolve the indirect call in body 49: pcVar1 = *(code **)(*plVar3 + 0xf8);.
TODO: resolve the indirect call in body 57: (*pcVar1)(plVar3,uVar2);.
TODO: resolve the indirect call in body 61: (**(code **)(lVar4 + 0xf8))(plVar3,0);.
TODO: resolve the indirect call in body 65: (**(code **)(lVar8 + 0xf8))(plVar3,0);.)F180063ed0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180063ed0() noexcept {
    return kFunction_0x180063ed0;
}

// 0x180064040 FUN_180064040
// source: re/dump/decompile/0x180064040_FUN_180064040.c
// size: 507 bytes; thunk: false
// body sha256: 94c93c902d007e745b5225f2d753c03cfd39f700b5b1607b4e6c1f84eeec4acc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180064040{
    "0x180064040",
    "FUN_180064040",
    R"F180064040S(undefined FUN_180064040())F180064040S",
    R"B180064040(// 0x180064040  FUN_180064040
// size=507 thunk=false
// signature: undefined FUN_180064040()
// status: ok


undefined8 FUN_180064040(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  double dVar11;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) {
    dVar11 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar6 = (uint)dVar11;
    if (((((int)uVar6 < 1) ||
         (lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] == '\0')) {
      lVar4 = *plVar3;
    }
    else {
      lVar4 = *plVar3;
      if ((longlong *)(&DAT_1805b8928 + lVar7) != (longlong *)0x0) {
        dVar11 = (double)(**(code **)(lVar4 + 0x160))(plVar3,3);
        uVar6 = (uint)dVar11;
        if ((int)uVar6 < 1) {
          uVar6 = 1;
        }
        else if (0x20 < (int)uVar6) {
          uVar6 = 0x20;
        }
        dVar11 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);
        iVar10 = *(int *)(&DAT_1805b8938 + lVar7);
        if (*(int *)(&DAT_1805b8934 + lVar7) - iVar10 < (int)uVar6) {
          *(int *)(&DAT_1805b8938 + lVar7) = *(int *)(&DAT_1805b8934 + lVar7);
          (&DAT_1805b893c)[lVar7] = 1;
        }
        else {
          bVar5 = (byte)iVar10 & 0x1f;
          uVar8 = (&DAT_18033d650)[uVar6 & 0x1f];
          *(uint *)(&DAT_1805b8938 + lVar7) = iVar10 + uVar6;
          lVar4 = *(longlong *)(&DAT_1805b8928 + lVar7);
          uVar2 = *(uint *)(lVar4 + ((longlong)iVar10 >> 5) * 4);
          puVar1 = (uint *)(lVar4 + ((longlong)iVar10 >> 5) * 4);
          uVar8 = (int)(((double)(float)dVar11 / DAT_180380e90) * (double)uVar8) & uVar8 - 1;
          uVar8 = uVar8 << bVar5 | uVar8 >> 0x20 - bVar5;
          iVar10 = 1 << ((char)uVar6 - 1U & 0x1f);
          uVar6 = iVar10 - 1U >> (0x1f - bVar5 & 0x1f);
          uVar9 = uVar6 & 1;
          puVar1[uVar9] = puVar1[uVar9] ^ (puVar1[uVar9] ^ uVar8) & uVar6;
          *puVar1 = iVar10 * 2 + -1 << bVar5 & (uVar8 ^ uVar2) ^ uVar2;
        }
        (**(code **)(*plVar3 + 0xf8))(plVar3,(&DAT_1805b893c)[lVar7] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xf8))(plVar3,0);
    return 1;
  }
  return 0;
}


)B180064040",
    "94c93c902d007e745b5225f2d753c03cfd39f700b5b1607b4e6c1f84eeec4acc",
    R"F180064040C(FUN_180039770)F180064040C",
    R"F180064040D(DAT_18033d650
DAT_180380e90
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b8934
DAT_1805b8938
DAT_1805b893c)F180064040D",
    R"F180064040T()F180064040T",
    R"F180064040F(23: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_2)) {
26: if (((((int)uVar6 < 1) ||
31: else {
33: if ((longlong *)(&DAT_1805b8928 + lVar7) != (longlong *)0x0) {
36: if ((int)uVar6 < 1) {
39: else if (0x20 < (int)uVar6) {
44: if (*(int *)(&DAT_1805b8934 + lVar7) - iVar10 < (int)uVar6) {
48: else {
64: return 1;
68: return 1;
70: return 0;)F180064040F",
    R"F180064040U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033d650.
TODO: recover the declaration, type and value for global/data reference DAT_180380e90.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8934.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8938.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 24: dVar11 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 34: dVar11 = (double)(**(code **)(lVar4 + 0x160))(plVar3,3);.
TODO: resolve the indirect call in body 42: dVar11 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);.
TODO: resolve the indirect call in body 63: (**(code **)(*plVar3 + 0xf8))(plVar3,(&DAT_1805b893c)[lVar7] == '\0');.
TODO: resolve the indirect call in body 67: (**(code **)(lVar4 + 0xf8))(plVar3,0);.)F180064040U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180064040() noexcept {
    return kFunction_0x180064040;
}

// 0x180064250 FUN_180064250
// source: re/dump/decompile/0x180064250_FUN_180064250.c
// size: 334 bytes; thunk: false
// body sha256: 5d0a1a2be8c0e2db88fd971d7e9f1fff67c6b2163c8c25c61b2ccf72d921867f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180064250{
    "0x180064250",
    "FUN_180064250",
    R"F180064250S(undefined FUN_180064250())F180064250S",
    R"B180064250(// 0x180064250  FUN_180064250
// size=334 thunk=false
// signature: undefined FUN_180064250()
// status: ok


undefined8 FUN_180064250(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float local_38;
  float local_34;
  float local_30;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] == '\0')) {
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
      if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
        dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,4);
        dVar6 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,3);
        dVar7 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,2);
        local_38 = (float)dVar7;
        local_34 = (float)dVar6;
        local_30 = (float)dVar5;
        FUN_18001a9b0(&DAT_1805b8928 + lVar4,&local_38);
        (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar2 + 0xf8))(plVar1,0);
    return 1;
  }
  return 0;
}


)B180064250",
    "5d0a1a2be8c0e2db88fd971d7e9f1fff67c6b2163c8c25c61b2ccf72d921867f",
    R"F180064250C(FUN_18001a9b0
FUN_180039770)F180064250C",
    R"F180064250D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b893c)F180064250D",
    R"F180064250T()F180064250T",
    R"F180064250F(22: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
25: if (((((int)uVar3 < 1) ||
30: else {
32: if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
41: return 1;
45: return 1;
47: return 0;)F180064250F",
    R"F180064250U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 23: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 33: dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,4);.
TODO: resolve the indirect call in body 34: dVar6 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,3);.
TODO: resolve the indirect call in body 35: dVar7 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,2);.
TODO: resolve the indirect call in body 40: (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');.
TODO: resolve the indirect call in body 44: (**(code **)(lVar2 + 0xf8))(plVar1,0);.)F180064250U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180064250() noexcept {
    return kFunction_0x180064250;
}

// 0x1800643a0 FUN_1800643a0
// source: re/dump/decompile/0x1800643a0_FUN_1800643a0.c
// size: 223 bytes; thunk: false
// body sha256: 8c0a75d7f8959de55f2cf9ad4dfe60f5d05dc2b83d6a68bf0c8c2ad813344656
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800643a0{
    "0x1800643a0",
    "FUN_1800643a0",
    R"F1800643a0S(undefined FUN_1800643a0())F1800643a0S",
    R"B1800643a0(// 0x1800643a0  FUN_1800643a0
// size=223 thunk=false
// signature: undefined FUN_1800643a0()
// status: ok


undefined8 FUN_1800643a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] == '\0')) {
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
      if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
        dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);
        FUN_18001a550(&DAT_1805b8928 + lVar4,(float)dVar5);
        (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar2 + 0xf8))(plVar1,0);
    return 1;
  }
  return 0;
}


)B1800643a0",
    "8c0a75d7f8959de55f2cf9ad4dfe60f5d05dc2b83d6a68bf0c8c2ad813344656",
    R"F1800643a0C(FUN_18001a550
FUN_180039770)F1800643a0C",
    R"F1800643a0D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b893c)F1800643a0D",
    R"F1800643a0T()F1800643a0T",
    R"F1800643a0F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if (((((int)uVar3 < 1) ||
25: else {
27: if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
31: return 1;
35: return 1;
37: return 0;)F1800643a0F",
    R"F1800643a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 28: dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');.
TODO: resolve the indirect call in body 34: (**(code **)(lVar2 + 0xf8))(plVar1,0);.)F1800643a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800643a0() noexcept {
    return kFunction_0x1800643a0;
}

// 0x180064480 FUN_180064480
// source: re/dump/decompile/0x180064480_FUN_180064480.c
// size: 374 bytes; thunk: false
// body sha256: 80a800180030d02f0cb56b749be7d317f667d2434d01e4fc2a0af3fccc5fe16b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180064480{
    "0x180064480",
    "FUN_180064480",
    R"F180064480S(undefined FUN_180064480())F180064480S",
    R"B180064480(// 0x180064480  FUN_180064480
// size=374 thunk=false
// signature: undefined FUN_180064480()
// status: ok


undefined8 FUN_180064480(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    dVar8 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    uVar6 = (uint)dVar8;
    if (((((int)uVar6 < 1) ||
         (lVar7 = (ulonglong)(uVar6 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar7] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar7) != uVar6 >> 6)) || ((&DAT_1805b88e1)[lVar7] == '\0')) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = *plVar4;
      if (&DAT_1805b8928 + lVar7 != (undefined *)0x0) {
        dVar8 = (double)(**(code **)(lVar5 + 0x160))(plVar4,2);
        cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,3,1);
        if (cVar1 == '\0') {
          uVar2 = 0;
        }
        else {
          uVar2 = (**(code **)(*plVar4 + 200))(plVar4,3);
        }
        cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,4,1);
        if (cVar1 == '\0') {
          uVar3 = 0;
        }
        else {
          uVar3 = (**(code **)(*plVar4 + 200))(plVar4,4);
        }
        FUN_18001a3b0(&DAT_1805b8928 + lVar7,(float)dVar8,uVar2,uVar3);
        (**(code **)(*plVar4 + 0xf8))(plVar4,(&DAT_1805b893c)[lVar7] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xf8))(plVar4,0);
    return 1;
  }
  return 0;
}


)B180064480",
    "80a800180030d02f0cb56b749be7d317f667d2434d01e4fc2a0af3fccc5fe16b",
    R"F180064480C(FUN_18001a3b0
FUN_180039770)F180064480C",
    R"F180064480D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b893c)F180064480D",
    R"F180064480T()F180064480T",
    R"F180064480F(20: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
23: if (((((int)uVar6 < 1) ||
28: else {
30: if (&DAT_1805b8928 + lVar7 != (undefined *)0x0) {
33: if (cVar1 == '\0') {
36: else {
40: if (cVar1 == '\0') {
43: else {
48: return 1;
52: return 1;
54: return 0;)F180064480F",
    R"F180064480U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 21: dVar8 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);.
TODO: resolve the indirect call in body 31: dVar8 = (double)(**(code **)(lVar5 + 0x160))(plVar4,2);.
TODO: resolve the indirect call in body 32: cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,3,1);.
TODO: resolve the indirect call in body 37: uVar2 = (**(code **)(*plVar4 + 200))(plVar4,3);.
TODO: resolve the indirect call in body 39: cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,4,1);.
TODO: resolve the indirect call in body 44: uVar3 = (**(code **)(*plVar4 + 200))(plVar4,4);.
TODO: resolve the indirect call in body 47: (**(code **)(*plVar4 + 0xf8))(plVar4,(&DAT_1805b893c)[lVar7] == '\0');.
TODO: resolve the indirect call in body 51: (**(code **)(lVar5 + 0xf8))(plVar4,0);.)F180064480U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180064480() noexcept {
    return kFunction_0x180064480;
}

// 0x180064600 FUN_180064600
// source: re/dump/decompile/0x180064600_FUN_180064600.c
// size: 379 bytes; thunk: false
// body sha256: 9e7760cd082840e8a0ad9692c45a580ff6e4b6c75a145e360cf2deccf90a5997
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180064600{
    "0x180064600",
    "FUN_180064600",
    R"F180064600S(undefined FUN_180064600())F180064600S",
    R"B180064600(// 0x180064600  FUN_180064600
// size=379 thunk=false
// signature: undefined FUN_180064600()
// status: ok


undefined8 FUN_180064600(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
  uVar5 = (uint)dVar8;
  if (((((int)uVar5 < 1) ||
       (lVar6 = (ulonglong)(uVar5 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar6] == '\0')) ||
      (*(uint *)(&DAT_1805b88e4 + lVar6) != uVar5 >> 6)) || ((&DAT_1805b88e1)[lVar6] == '\0')) {
    lVar4 = *plVar3;
LAB_18006474e:
    (**(code **)(lVar4 + 0xf8))(plVar3,0);
    return 1;
  }
  lVar4 = *plVar3;
  if (&DAT_1805b8928 + lVar6 == (undefined *)0x0) goto LAB_18006474e;
  dVar8 = (double)(**(code **)(lVar4 + 0x160))(plVar3,2);
  dVar9 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,3);
  iVar7 = (int)dVar9;
  if (iVar7 < 1) {
    iVar7 = 1;
  }
  else if (0x20 < iVar7) {
    iVar7 = 0x20;
  }
  cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);
  if (cVar1 != '\0') {
    dVar9 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);
    iVar2 = (int)dVar9;
    if ((-1 < iVar2) && (iVar2 < 3)) goto LAB_18006470d;
  }
  iVar2 = 0;
LAB_18006470d:
  FUN_18001a770(&DAT_1805b8928 + lVar6,(float)dVar8,iVar7,iVar2);
  (**(code **)(*plVar3 + 0xf8))(plVar3,(&DAT_1805b893c)[lVar6] == '\0');
  return 1;
}


)B180064600",
    "9e7760cd082840e8a0ad9692c45a580ff6e4b6c75a145e360cf2deccf90a5997",
    R"F180064600C(FUN_18001a770
FUN_180039770)F180064600C",
    R"F180064600D(LAB_18006470d
LAB_18006474e
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b893c)F180064600D",
    R"F180064600T()F180064600T",
    R"F180064600F(21: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
22: return 0;
26: if (((((int)uVar5 < 1) ||
30: LAB_18006474e:
32: return 1;
35: if (&DAT_1805b8928 + lVar6 == (undefined *)0x0) goto LAB_18006474e;
39: if (iVar7 < 1) {
42: else if (0x20 < iVar7) {
46: if (cVar1 != '\0') {
49: if ((-1 < iVar2) && (iVar2 < 3)) goto LAB_18006470d;
52: LAB_18006470d:
55: return 1;)F180064600F",
    R"F180064600U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18006470d.
TODO: recover the declaration, type and value for global/data reference LAB_18006474e.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 24: dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 31: (**(code **)(lVar4 + 0xf8))(plVar3,0);.
TODO: resolve the indirect call in body 36: dVar8 = (double)(**(code **)(lVar4 + 0x160))(plVar3,2);.
TODO: resolve the indirect call in body 37: dVar9 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,3);.
TODO: resolve the indirect call in body 45: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);.
TODO: resolve the indirect call in body 47: dVar9 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);.
TODO: resolve the indirect call in body 54: (**(code **)(*plVar3 + 0xf8))(plVar3,(&DAT_1805b893c)[lVar6] == '\0');.)F180064600U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180064600() noexcept {
    return kFunction_0x180064600;
}

// 0x180064780 FUN_180064780
// source: re/dump/decompile/0x180064780_FUN_180064780.c
// size: 303 bytes; thunk: false
// body sha256: 6d7119a9158ac4b58402d2abe429079bf994f8d211fc111ec7a4f1b8706de15f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180064780{
    "0x180064780",
    "FUN_180064780",
    R"F180064780S(undefined FUN_180064780())F180064780S",
    R"B180064780(// 0x180064780  FUN_180064780
// size=303 thunk=false
// signature: undefined FUN_180064780()
// status: ok


undefined8 FUN_180064780(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  double dVar8;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    uVar4 = (uint)dVar8;
    if (((((int)uVar4 < 1) ||
         (lVar6 = (ulonglong)(uVar4 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar6] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar6) != uVar4 >> 6)) ||
       (((&DAT_1805b88e1)[lVar6] == '\0' ||
        ((longlong *)(&DAT_1805b8928 + lVar6) == (longlong *)0x0)))) {
      (**(code **)(*plVar3 + 0xf8))(plVar3,0);
    }
    else {
      if (*(int *)(&DAT_1805b8934 + lVar6) - *(int *)(&DAT_1805b8938 + lVar6) < 1) {
        (&DAT_1805b893c)[lVar6] = 1;
        uVar7 = 0;
        lVar5 = *plVar3;
      }
      else {
        dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);
        lVar2 = *(longlong *)(&DAT_1805b8928 + lVar6);
        lVar5 = (longlong)(int)*(uint *)(&DAT_1805b8938 + lVar6) >> 5;
        if ((int)dVar8 == 0) {
          puVar1 = (uint *)(lVar2 + lVar5 * 4);
          *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 +
                                        (ulonglong)(*(uint *)(&DAT_1805b8938 + lVar6) & 0x1f) * 4);
        }
        else {
          puVar1 = (uint *)(lVar2 + lVar5 * 4);
          *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 +
                                       (ulonglong)(*(uint *)(&DAT_1805b8938 + lVar6) & 0x1f) * 4);
        }
        *(int *)(&DAT_1805b8938 + lVar6) = *(int *)(&DAT_1805b8938 + lVar6) + 1;
        lVar5 = *plVar3;
        uVar7 = CONCAT71((int7)((ulonglong)lVar2 >> 8),(&DAT_1805b893c)[lVar6] == '\0');
      }
      (**(code **)(lVar5 + 0xf8))(plVar3,uVar7);
    }
    return 1;
  }
  return 0;
}


)B180064780",
    "6d7119a9158ac4b58402d2abe429079bf994f8d211fc111ec7a4f1b8706de15f",
    R"F180064780C(FUN_180039770)F180064780C",
    R"F180064780D(DAT_1803fa690
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b8934
DAT_1805b8938
DAT_1805b893c)F180064780D",
    R"F180064780T()F180064780T",
    R"F180064780F(20: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
23: if (((((int)uVar4 < 1) ||
30: else {
31: if (*(int *)(&DAT_1805b8934 + lVar6) - *(int *)(&DAT_1805b8938 + lVar6) < 1) {
36: else {
40: if ((int)dVar8 == 0) {
45: else {
56: return 1;
58: return 0;)F180064780F",
    R"F180064780U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa690.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8934.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8938.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 21: dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 28: (**(code **)(*plVar3 + 0xf8))(plVar3,0);.
TODO: resolve the indirect call in body 37: dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);.
TODO: resolve the indirect call in body 54: (**(code **)(lVar5 + 0xf8))(plVar3,uVar7);.)F180064780U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180064780() noexcept {
    return kFunction_0x180064780;
}

// 0x1800648b0 FUN_1800648b0
// source: re/dump/decompile/0x1800648b0_FUN_1800648b0.c
// size: 223 bytes; thunk: false
// body sha256: e42424bb0e1924e50c7efcd3b2a4698c1c9d963735ee293250a20136fb1f5ff7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800648b0{
    "0x1800648b0",
    "FUN_1800648b0",
    R"F1800648b0S(undefined FUN_1800648b0())F1800648b0S",
    R"B1800648b0(// 0x1800648b0  FUN_1800648b0
// size=223 thunk=false
// signature: undefined FUN_1800648b0()
// status: ok


undefined8 FUN_1800648b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] == '\0')) {
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
      if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
        dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);
        FUN_18001aaf0(&DAT_1805b8928 + lVar4,(float)dVar5);
        (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar2 + 0xf8))(plVar1,0);
    return 1;
  }
  return 0;
}


)B1800648b0",
    "e42424bb0e1924e50c7efcd3b2a4698c1c9d963735ee293250a20136fb1f5ff7",
    R"F1800648b0C(FUN_18001aaf0
FUN_180039770)F1800648b0C",
    R"F1800648b0D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b893c)F1800648b0D",
    R"F1800648b0T()F1800648b0T",
    R"F1800648b0F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if (((((int)uVar3 < 1) ||
25: else {
27: if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
31: return 1;
35: return 1;
37: return 0;)F1800648b0F",
    R"F1800648b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 28: dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');.
TODO: resolve the indirect call in body 34: (**(code **)(lVar2 + 0xf8))(plVar1,0);.)F1800648b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800648b0() noexcept {
    return kFunction_0x1800648b0;
}

// 0x180064990 FUN_180064990
// source: re/dump/decompile/0x180064990_FUN_180064990.c
// size: 334 bytes; thunk: false
// body sha256: 75190a80ee900f68e7a86a38a47ee5283958c7ab43d25a92895156e2d2c87c71
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180064990{
    "0x180064990",
    "FUN_180064990",
    R"F180064990S(undefined FUN_180064990())F180064990S",
    R"B180064990(// 0x180064990  FUN_180064990
// size=334 thunk=false
// signature: undefined FUN_180064990()
// status: ok


undefined8 FUN_180064990(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float local_38;
  float local_34;
  float local_30;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] == '\0')) {
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
      if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
        dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,4);
        dVar6 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,3);
        dVar7 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,2);
        local_38 = (float)dVar7;
        local_34 = (float)dVar6;
        local_30 = (float)dVar5;
        FUN_18001ac00(&DAT_1805b8928 + lVar4,&local_38);
        (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar2 + 0xf8))(plVar1,0);
    return 1;
  }
  return 0;
}


)B180064990",
    "75190a80ee900f68e7a86a38a47ee5283958c7ab43d25a92895156e2d2c87c71",
    R"F180064990C(FUN_18001ac00
FUN_180039770)F180064990C",
    R"F180064990D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b893c)F180064990D",
    R"F180064990T()F180064990T",
    R"F180064990F(22: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
25: if (((((int)uVar3 < 1) ||
30: else {
32: if (&DAT_1805b8928 + lVar4 != (undefined *)0x0) {
41: return 1;
45: return 1;
47: return 0;)F180064990F",
    R"F180064990U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b893c.
TODO: resolve the indirect call in body 23: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 33: dVar5 = (double)(**(code **)(lVar2 + 0x160))(plVar1,4);.
TODO: resolve the indirect call in body 34: dVar6 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,3);.
TODO: resolve the indirect call in body 35: dVar7 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,2);.
TODO: resolve the indirect call in body 40: (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar4] == '\0');.
TODO: resolve the indirect call in body 44: (**(code **)(lVar2 + 0xf8))(plVar1,0);.)F180064990U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180064990() noexcept {
    return kFunction_0x180064990;
}

// 0x180064ae0 FUN_180064ae0
// source: re/dump/decompile/0x180064ae0_FUN_180064ae0.c
// size: 219 bytes; thunk: false
// body sha256: fbe322070be20f03a5bb4f3b8ac2cb0ef8c5c018ddea8711b35ee8963c7002f3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180064ae0{
    "0x180064ae0",
    "FUN_180064ae0",
    R"F180064ae0S(undefined FUN_180064ae0())F180064ae0S",
    R"B180064ae0(// 0x180064ae0  FUN_180064ae0
// size=219 thunk=false
// signature: undefined FUN_180064ae0()
// status: ok


undefined8 FUN_180064ae0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  uVar4 = (uint)dVar6;
  if ((((0 < (int)uVar4) &&
       (lVar5 = (ulonglong)(uVar4 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar5] != '\0')) &&
      (*(uint *)(&DAT_1805b88e4 + lVar5) == uVar4 >> 6)) && ((&DAT_1805b88e1)[lVar5] != '\0')) {
    lVar3 = *plVar2;
    if (lVar5 == -0x1805b8928) goto LAB_180064b93;
    dVar6 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);
    iVar1 = (int)dVar6;
    if ((-1 < iVar1) && (iVar1 <= *(int *)(&DAT_1805b8934 + lVar5))) {
      *(int *)(&DAT_1805b8938 + lVar5) = iVar1;
      (**(code **)(*plVar2 + 0xf8))(plVar2,1);
      return 1;
    }
  }
  lVar3 = *plVar2;
LAB_180064b93:
  (**(code **)(lVar3 + 0xf8))(plVar2,0);
  return 1;
}


)B180064ae0",
    "fbe322070be20f03a5bb4f3b8ac2cb0ef8c5c018ddea8711b35ee8963c7002f3",
    R"F180064ae0C(FUN_180039770)F180064ae0C",
    R"F180064ae0D(LAB_180064b93
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8934
DAT_1805b8938)F180064ae0D",
    R"F180064ae0T()F180064ae0T",
    R"F180064ae0F(18: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
19: return 0;
23: if ((((0 < (int)uVar4) &&
27: if (lVar5 == -0x1805b8928) goto LAB_180064b93;
30: if ((-1 < iVar1) && (iVar1 <= *(int *)(&DAT_1805b8934 + lVar5))) {
33: return 1;
37: LAB_180064b93:
39: return 1;)F180064ae0F",
    R"F180064ae0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180064b93.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8934.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8938.
TODO: resolve the indirect call in body 21: dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 28: dVar6 = (double)(**(code **)(lVar3 + 0x160))(plVar2,2);.
TODO: resolve the indirect call in body 32: (**(code **)(*plVar2 + 0xf8))(plVar2,1);.
TODO: resolve the indirect call in body 38: (**(code **)(lVar3 + 0xf8))(plVar2,0);.)F180064ae0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180064ae0() noexcept {
    return kFunction_0x180064ae0;
}

// 0x180064bc0 FUN_180064bc0
// source: re/dump/decompile/0x180064bc0_FUN_180064bc0.c
// size: 193 bytes; thunk: false
// body sha256: 3d810cc23d34ef2ba7f91506bf7c7ea8b6b6b404d238981e8489e4180e1b82e9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180064bc0{
    "0x180064bc0",
    "FUN_180064bc0",
    R"F180064bc0S(undefined FUN_180064bc0())F180064bc0S",
    R"B180064bc0(// 0x180064bc0  FUN_180064bc0
// size=193 thunk=false
// signature: undefined FUN_180064bc0()
// status: ok


undefined8 FUN_180064bc0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] == '\0')) {
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
      if (lVar4 != -0x1805b8928) {
        (**(code **)(lVar2 + 0xf0))(plVar1,(double)*(int *)(&DAT_1805b8938 + lVar4));
        return 1;
      }
    }
    (**(code **)(lVar2 + 0xf8))(plVar1,0);
    return 1;
  }
  return 0;
}


)B180064bc0",
    "3d810cc23d34ef2ba7f91506bf7c7ea8b6b6b404d238981e8489e4180e1b82e9",
    R"F180064bc0C(FUN_180039770)F180064bc0C",
    R"F180064bc0D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8938)F180064bc0D",
    R"F180064bc0T()F180064bc0T",
    R"F180064bc0F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if (((((int)uVar3 < 1) ||
25: else {
27: if (lVar4 != -0x1805b8928) {
29: return 1;
33: return 1;
35: return 0;)F180064bc0F",
    R"F180064bc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8938.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 28: (**(code **)(lVar2 + 0xf0))(plVar1,(double)*(int *)(&DAT_1805b8938 + lVar4));.
TODO: resolve the indirect call in body 32: (**(code **)(lVar2 + 0xf8))(plVar1,0);.)F180064bc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180064bc0() noexcept {
    return kFunction_0x180064bc0;
}

// 0x180064c90 FUN_180064c90
// source: re/dump/decompile/0x180064c90_FUN_180064c90.c
// size: 203 bytes; thunk: false
// body sha256: fae59e662bcd138d59d6ec0cd768f074e889c3b28fbb8e6b14650313b5d525b2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180064c90{
    "0x180064c90",
    "FUN_180064c90",
    R"F180064c90S(undefined FUN_180064c90())F180064c90S",
    R"B180064c90(// 0x180064c90  FUN_180064c90
// size=203 thunk=false
// signature: undefined FUN_180064c90()
// status: ok


undefined8 FUN_180064c90(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar2 = (uint)dVar5;
    if (((((int)uVar2 < 1) ||
         (lVar3 = (ulonglong)(uVar2 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar3] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar3) != uVar2 >> 6)) || ((&DAT_1805b88e1)[lVar3] == '\0')) {
      lVar4 = *plVar1;
    }
    else {
      lVar4 = *plVar1;
      if (lVar3 != -0x1805b8928) {
        (**(code **)(lVar4 + 0xf0))(plVar1,(double)(*(int *)(&DAT_1805b8938 + lVar3) + 7 >> 3));
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xf8))(plVar1,0);
    return 1;
  }
  return 0;
}


)B180064c90",
    "fae59e662bcd138d59d6ec0cd768f074e889c3b28fbb8e6b14650313b5d525b2",
    R"F180064c90C(FUN_180039770)F180064c90C",
    R"F180064c90D(DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8938)F180064c90D",
    R"F180064c90T()F180064c90T",
    R"F180064c90F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if (((((int)uVar2 < 1) ||
25: else {
27: if (lVar3 != -0x1805b8928) {
29: return 1;
33: return 1;
35: return 0;)F180064c90F",
    R"F180064c90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8938.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 28: (**(code **)(lVar4 + 0xf0))(plVar1,(double)(*(int *)(&DAT_1805b8938 + lVar3) + 7 >> 3));.
TODO: resolve the indirect call in body 32: (**(code **)(lVar4 + 0xf8))(plVar1,0);.)F180064c90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180064c90() noexcept {
    return kFunction_0x180064c90;
}

// 0x180064d60 FUN_180064d60
// source: re/dump/decompile/0x180064d60_FUN_180064d60.c
// size: 239 bytes; thunk: false
// body sha256: 9758204d635bc2ae3fe8ec100a10036d7001f56bf6fe418803aa15c2954c956a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180064d60{
    "0x180064d60",
    "FUN_180064d60",
    R"F180064d60S(undefined FUN_180064d60())F180064d60S",
    R"B180064d60(// 0x180064d60  FUN_180064d60
// size=239 thunk=false
// signature: undefined FUN_180064d60()
// status: ok


undefined8 FUN_180064d60(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    return 0;
  }
  dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
  uVar2 = (uint)dVar4;
  if ((((0 < (int)uVar2) &&
       (lVar3 = (ulonglong)(uVar2 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar3] != '\0')) &&
      (*(uint *)(&DAT_1805b88e4 + lVar3) == uVar2 >> 6)) &&
     (((&DAT_1805b88e1)[lVar3] != '\0' &&
      ((undefined8 *)(&DAT_1805b8928 + lVar3) != (undefined8 *)0x0)))) {
    if (*(int *)(&DAT_1805b8938 + lVar3) + 7 >> 3 < 1) {
      (**(code **)(*plVar1 + 0xe8))(plVar1,&DAT_18033e5ea,0);
      return 1;
    }
    (**(code **)(*plVar1 + 0xe8))(plVar1,*(undefined8 *)(&DAT_1805b8928 + lVar3));
    return 1;
  }
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  return 1;
}


)B180064d60",
    "9758204d635bc2ae3fe8ec100a10036d7001f56bf6fe418803aa15c2954c956a",
    R"F180064d60C(FUN_180039770)F180064d60C",
    R"F180064d60D(DAT_18033e5ea
DAT_1805b88e0
DAT_1805b88e1
DAT_1805b88e4
DAT_1805b8928
DAT_1805b8938)F180064d60D",
    R"F180064d60T()F180064d60T",
    R"F180064d60F(16: if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
17: return 0;
21: if ((((0 < (int)uVar2) &&
26: if (*(int *)(&DAT_1805b8938 + lVar3) + 7 >> 3 < 1) {
28: return 1;
31: return 1;
34: return 1;)F180064d60F",
    R"F180064d60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e0.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e1.
TODO: recover the declaration, type and value for global/data reference DAT_1805b88e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8928.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8938.
TODO: resolve the indirect call in body 19: dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 27: (**(code **)(*plVar1 + 0xe8))(plVar1,&DAT_18033e5ea,0);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar1 + 0xe8))(plVar1,*(undefined8 *)(&DAT_1805b8928 + lVar3));.
TODO: resolve the indirect call in body 33: (**(code **)(*plVar1 + 0xe0))(plVar1);.)F180064d60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180064d60() noexcept {
    return kFunction_0x180064d60;
}

// 0x180064e50 FUN_180064e50
// source: re/dump/decompile/0x180064e50_FUN_180064e50.c
// size: 137 bytes; thunk: false
// body sha256: 8cff5b9827bba6b034ab00400bfbc6b633fe5c784e8a3cd8571bfa2edc6616cd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180064e50{
    "0x180064e50",
    "FUN_180064e50",
    R"F180064e50S(undefined FUN_180064e50())F180064e50S",
    R"B180064e50(// 0x180064e50  FUN_180064e50
// size=137 thunk=false
// signature: undefined FUN_180064e50()
// status: ok


undefined8 FUN_180064e50(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    pcVar1 = *(code **)(*plVar2 + 0xf0);
    dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    iVar3 = 1;
    for (uVar4 = (longlong)dVar5 & 0xffffffff; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
      iVar3 = iVar3 + 1;
    }
    (*pcVar1)(plVar2,(double)iVar3);
    return 1;
  }
  return 0;
}


)B180064e50",
    "8cff5b9827bba6b034ab00400bfbc6b633fe5c784e8a3cd8571bfa2edc6616cd",
    R"F180064e50C(FUN_180039770)F180064e50C",
    R"F180064e50D()F180064e50D",
    R"F180064e50T()F180064e50T",
    R"F180064e50F(17: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
21: for (uVar4 = (longlong)dVar5 & 0xffffffff; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
25: return 1;
27: return 0;)F180064e50F",
    R"F180064e50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 18: pcVar1 = *(code **)(*plVar2 + 0xf0);.
TODO: resolve the indirect call in body 19: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 24: (*pcVar1)(plVar2,(double)iVar3);.)F180064e50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180064e50() noexcept {
    return kFunction_0x180064e50;
}

// 0x180064ee0 FUN_180064ee0
// source: re/dump/decompile/0x180064ee0_FUN_180064ee0.c
// size: 153 bytes; thunk: false
// body sha256: 8bad02b5c6b02ce3e8d8e634853f76df2393b9493c4ff7238024a2310f16df02
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180064ee0{
    "0x180064ee0",
    "FUN_180064ee0",
    R"F180064ee0S(undefined FUN_180064ee0())F180064ee0S",
    R"B180064ee0(// 0x180064ee0  FUN_180064ee0
// size=153 thunk=false
// signature: undefined FUN_180064ee0()
// status: ok


undefined8 FUN_180064ee0(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    pcVar1 = *(code **)(*plVar2 + 0xf0);
    dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    iVar3 = 1;
    for (uVar4 = (ulonglong)(uint)((int)(longlong)dVar5 >> 0x1f ^ (int)(longlong)dVar5 * 2);
        0x7f < uVar4; uVar4 = uVar4 >> 7) {
      iVar3 = iVar3 + 1;
    }
    (*pcVar1)(plVar2,(double)iVar3);
    return 1;
  }
  return 0;
}


)B180064ee0",
    "8bad02b5c6b02ce3e8d8e634853f76df2393b9493c4ff7238024a2310f16df02",
    R"F180064ee0C(FUN_180039770)F180064ee0C",
    R"F180064ee0D()F180064ee0D",
    R"F180064ee0T()F180064ee0T",
    R"F180064ee0F(17: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
21: for (uVar4 = (ulonglong)(uint)((int)(longlong)dVar5 >> 0x1f ^ (int)(longlong)dVar5 * 2);
26: return 1;
28: return 0;)F180064ee0F",
    R"F180064ee0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 18: pcVar1 = *(code **)(*plVar2 + 0xf0);.
TODO: resolve the indirect call in body 19: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 25: (*pcVar1)(plVar2,(double)iVar3);.)F180064ee0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180064ee0() noexcept {
    return kFunction_0x180064ee0;
}

// 0x180064f80 FUN_180064f80
// source: re/dump/decompile/0x180064f80_FUN_180064f80.c
// size: 185 bytes; thunk: false
// body sha256: 48aee4db99cc1a8e4832182b1de1ae6989677000cdfe11301b1faa8c600d9474
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180064f80{
    "0x180064f80",
    "FUN_180064f80",
    R"F180064f80S(undefined FUN_180064f80())F180064f80S",
    R"B180064f80(// 0x180064f80  FUN_180064f80
// size=185 thunk=false
// signature: undefined FUN_180064f80()
// status: ok


undefined8 FUN_180064f80(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  double dVar6;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    pcVar1 = *(code **)(*plVar2 + 0xf0);
    dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    lVar3 = 0;
    if ((DAT_180381238 <= dVar6) && (dVar6 = dVar6 - DAT_180381238, dVar6 < DAT_180381238)) {
      lVar3 = -0x8000000000000000;
    }
    iVar5 = 1;
    for (uVar4 = (longlong)dVar6 + lVar3; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
      iVar5 = iVar5 + 1;
    }
    (*pcVar1)(plVar2,(double)iVar5);
    return 1;
  }
  return 0;
}


)B180064f80",
    "48aee4db99cc1a8e4832182b1de1ae6989677000cdfe11301b1faa8c600d9474",
    R"F180064f80C(FUN_180039770)F180064f80C",
    R"F180064f80D(DAT_180381238)F180064f80D",
    R"F180064f80T()F180064f80T",
    R"F180064f80F(18: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
22: if ((DAT_180381238 <= dVar6) && (dVar6 = dVar6 - DAT_180381238, dVar6 < DAT_180381238)) {
26: for (uVar4 = (longlong)dVar6 + lVar3; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
30: return 1;
32: return 0;)F180064f80F",
    R"F180064f80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180381238.
TODO: resolve the indirect call in body 19: pcVar1 = *(code **)(*plVar2 + 0xf0);.
TODO: resolve the indirect call in body 20: dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 29: (*pcVar1)(plVar2,(double)iVar5);.)F180064f80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180064f80() noexcept {
    return kFunction_0x180064f80;
}

// 0x180065040 FUN_180065040
// source: re/dump/decompile/0x180065040_FUN_180065040.c
// size: 153 bytes; thunk: false
// body sha256: 2f02e6fd504b5df5f79db25b00cb39e29622a103c84f8afb938754d4f6455e8e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180065040{
    "0x180065040",
    "FUN_180065040",
    R"F180065040S(undefined FUN_180065040())F180065040S",
    R"B180065040(// 0x180065040  FUN_180065040
// size=153 thunk=false
// signature: undefined FUN_180065040()
// status: ok


undefined8 FUN_180065040(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    pcVar1 = *(code **)(*plVar2 + 0xf0);
    dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    iVar4 = 1;
    for (uVar3 = (longlong)dVar5 >> 0x3f ^ (longlong)dVar5 * 2; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
      iVar4 = iVar4 + 1;
    }
    (*pcVar1)(plVar2,(double)iVar4);
    return 1;
  }
  return 0;
}


)B180065040",
    "2f02e6fd504b5df5f79db25b00cb39e29622a103c84f8afb938754d4f6455e8e",
    R"F180065040C(FUN_180039770)F180065040C",
    R"F180065040D()F180065040D",
    R"F180065040T()F180065040T",
    R"F180065040F(17: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
21: for (uVar3 = (longlong)dVar5 >> 0x3f ^ (longlong)dVar5 * 2; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
25: return 1;
27: return 0;)F180065040F",
    R"F180065040U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 18: pcVar1 = *(code **)(*plVar2 + 0xf0);.
TODO: resolve the indirect call in body 19: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 24: (*pcVar1)(plVar2,(double)iVar4);.)F180065040U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180065040() noexcept {
    return kFunction_0x180065040;
}

// 0x1800650e0 FUN_1800650e0
// source: re/dump/decompile/0x1800650e0_FUN_1800650e0.c
// size: 345 bytes; thunk: false
// body sha256: eddf4c77e0d9b8f17bfc8da70268962ebd0339141297fc11dcd37adf49b6c878
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800650e0{
    "0x1800650e0",
    "FUN_1800650e0",
    R"F1800650e0S(undefined FUN_1800650e0())F1800650e0S",
    R"B1800650e0(// 0x1800650e0  FUN_1800650e0
// size=345 thunk=false
// signature: undefined FUN_1800650e0()
// status: ok


undefined8 * FUN_1800650e0(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int extraout_var;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  uVar2 = param_3[1];
  if (uVar2 != 0) {
    if (0x7fffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1800135c0(0x16);
    }
    uVar2 = FUN_1802d760c(param_2,*param_3,uVar2,0,0);
    if ((int)(uVar2 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013900(uVar2 >> 0x20);
    }
    uVar1 = param_1[2];
    uVar5 = (ulonglong)(int)uVar2;
    if (uVar1 < uVar5) {
      uVar4 = uVar5 - uVar1;
      if (param_1[3] - uVar1 < uVar4) {
        FUN_18022a480(param_1,uVar4);
      }
      else {
        param_1[2] = uVar5;
        puVar3 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar3 = (undefined8 *)*param_1;
        }
        puVar6 = (undefined2 *)((longlong)puVar3 + uVar1 * 2);
        if (uVar4 != 0) {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
        }
        *(undefined2 *)((longlong)puVar3 + uVar5 * 2) = 0;
      }
    }
    else {
      param_1[2] = uVar5;
      puVar3 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar3 = (undefined8 *)*param_1;
      }
      *(undefined2 *)((longlong)puVar3 + uVar5 * 2) = 0;
    }
    puVar3 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar3 = (undefined8 *)*param_1;
    }
    FUN_1802d760c(param_2,*param_3,*(undefined4 *)(param_3 + 1),puVar3,(int)uVar2);
    if (extraout_var != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013900(extraout_var);
    }
  }
  return param_1;
}


)B1800650e0",
    "eddf4c77e0d9b8f17bfc8da70268962ebd0339141297fc11dcd37adf49b6c878",
    R"F1800650e0C(FUN_1800135c0
FUN_180013900
FUN_18022a480
FUN_1802d760c)F1800650e0C",
    R"F1800650e0D()F1800650e0D",
    R"F1800650e0T()F1800650e0T",
    R"F1800650e0F(24: if (uVar2 != 0) {
25: if (0x7fffffff < uVar2) {
30: if ((int)(uVar2 >> 0x20) != 0) {
36: if (uVar1 < uVar5) {
38: if (param_1[3] - uVar1 < uVar4) {
41: else {
44: if (7 < (ulonglong)param_1[3]) {
48: if (uVar4 != 0) {
49: for (; uVar4 != 0; uVar4 = uVar4 - 1) {
57: else {
60: if (7 < (ulonglong)param_1[3]) {
66: if (7 < (ulonglong)param_1[3]) {
70: if (extraout_var != 0) {
75: return param_1;)F1800650e0F",
    R"F1800650e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800650e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800650e0() noexcept {
    return kFunction_0x1800650e0;
}

// 0x180065240 FUN_180065240
// source: re/dump/decompile/0x180065240_FUN_180065240.c
// size: 249 bytes; thunk: false
// body sha256: 512c29187001384d001ff70e29c78b1ff178a6b1271d29fd7bb1b406bb0678c3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180065240{
    "0x180065240",
    "FUN_180065240",
    R"F180065240S(undefined FUN_180065240())F180065240S",
    R"B180065240(// 0x180065240  FUN_180065240
// size=249 thunk=false
// signature: undefined FUN_180065240()
// status: ok


uint * FUN_180065240(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_2 - (longlong)param_1 >> 1;
  if (1 < lVar4) {
    uVar2 = *param_1;
    if ((uVar2 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      return param_1 + 1;
    }
    if (((short)uVar2 == 0x5c) || ((short)uVar2 == 0x2f)) {
      sVar3 = (short)(uVar2 >> 0x10);
      if (lVar4 < 4) {
        if (lVar4 < 3) {
          return param_1;
        }
      }
      else {
        puVar1 = (uint *)((longlong)param_1 + 6);
        if (((*(short *)((longlong)param_1 + 6) == 0x5c) ||
            (*(short *)((longlong)param_1 + 6) == 0x2f)) &&
           ((lVar4 == 4 || (((short)param_1[2] != 0x5c && ((short)param_1[2] != 0x2f)))))) {
          sVar3 = *(short *)((longlong)param_1 + 2);
          if ((sVar3 == 0x5c) || (sVar3 == 0x2f)) {
            if ((short)param_1[1] == 0x3f) {
              return puVar1;
            }
            if ((short)param_1[1] == 0x2e) {
              return puVar1;
            }
          }
          if (sVar3 == 0x3f) {
            if ((short)param_1[1] != 0x3f) {
              return param_1;
            }
            return puVar1;
          }
        }
      }
      if ((((sVar3 == 0x5c) || (sVar3 == 0x2f)) && ((short)param_1[1] != 0x5c)) &&
         (((short)param_1[1] != 0x2f &&
          (param_1 = (uint *)((longlong)param_1 + 6), param_1 != param_2)))) {
        while (((short)*param_1 != 0x5c && ((short)*param_1 != 0x2f))) {
          param_1 = (uint *)((longlong)param_1 + 2);
          if (param_1 == param_2) {
            return param_1;
          }
        }
      }
    }
  }
  return param_1;
}


)B180065240",
    "512c29187001384d001ff70e29c78b1ff178a6b1271d29fd7bb1b406bb0678c3",
    R"F180065240C()F180065240C",
    R"F180065240D()F180065240D",
    R"F180065240T()F180065240T",
    R"F180065240F(16: if (1 < lVar4) {
18: if ((uVar2 & 0xffffffdf) - 0x3a0041 < 0x1a) {
19: return param_1 + 1;
21: if (((short)uVar2 == 0x5c) || ((short)uVar2 == 0x2f)) {
23: if (lVar4 < 4) {
24: if (lVar4 < 3) {
25: return param_1;
28: else {
30: if (((*(short *)((longlong)param_1 + 6) == 0x5c) ||
34: if ((sVar3 == 0x5c) || (sVar3 == 0x2f)) {
35: if ((short)param_1[1] == 0x3f) {
36: return puVar1;
38: if ((short)param_1[1] == 0x2e) {
39: return puVar1;
42: if (sVar3 == 0x3f) {
43: if ((short)param_1[1] != 0x3f) {
44: return param_1;
46: return puVar1;
50: if ((((sVar3 == 0x5c) || (sVar3 == 0x2f)) && ((short)param_1[1] != 0x5c)) &&
53: while (((short)*param_1 != 0x5c && ((short)*param_1 != 0x2f))) {
55: if (param_1 == param_2) {
56: return param_1;
62: return param_1;)F180065240F",
    R"F180065240U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180065240U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180065240() noexcept {
    return kFunction_0x180065240;
}

// 0x180065350 FUN_180065350
// source: re/dump/decompile/0x180065350_FUN_180065350.c
// size: 366 bytes; thunk: false
// body sha256: da7594c865bec4ca509cb8e4f44d7f37b5e5164562e10c6d8cd6c7c93d2d6f1b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180065350{
    "0x180065350",
    "FUN_180065350",
    R"F180065350S(undefined FUN_180065350())F180065350S",
    R"B180065350(// 0x180065350  FUN_180065350
// size=366 thunk=false
// signature: undefined FUN_180065350()
// status: ok


undefined8 * FUN_180065350(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int extraout_var;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong _Size;
  
  puVar7 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar7 = (undefined8 *)*param_1;
  }
  uVar1 = param_1[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  if (uVar1 != 0) {
    if (0x7fffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1800135c0(0x16);
    }
    uVar4 = FUN_1802d7654(0xfde9,puVar7,uVar1 & 0xffffffff,0,0);
    if ((int)((ulonglong)uVar4 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013900();
    }
    uVar2 = param_2[2];
    uVar6 = (ulonglong)(int)uVar4;
    if (uVar2 < uVar6) {
      _Size = uVar6 - uVar2;
      uVar3 = param_2[3];
      if (uVar3 - uVar2 < _Size) {
        FUN_180234150(param_2,_Size,uVar3,_Size);
      }
      else {
        param_2[2] = uVar6;
        puVar5 = param_2;
        if (0xf < uVar3) {
          puVar5 = (undefined8 *)*param_2;
        }
        memset((void *)(uVar2 + (longlong)puVar5),0,_Size);
        *(undefined1 *)(_Size + (longlong)(uVar2 + (longlong)puVar5)) = 0;
      }
    }
    else {
      param_2[2] = uVar6;
      puVar5 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar5 = (undefined8 *)*param_2;
      }
      *(undefined1 *)(uVar6 + (longlong)puVar5) = 0;
    }
    puVar5 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar5 = (undefined8 *)*param_2;
    }
    FUN_1802d7654(0xfde9,puVar7,uVar1 & 0xffffffff,puVar5,(int)uVar4);
    if (extraout_var != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013900(extraout_var);
    }
  }
  return param_2;
}


)B180065350",
    "da7594c865bec4ca509cb8e4f44d7f37b5e5164562e10c6d8cd6c7c93d2d6f1b",
    R"F180065350C(FUN_1800135c0
FUN_180013900
FUN_180234150
FUN_1802d7654)F180065350C",
    R"F180065350D()F180065350D",
    R"F180065350T()F180065350T",
    R"F180065350F(21: if (7 < (ulonglong)param_1[3]) {
30: if (uVar1 != 0) {
31: if (0x7fffffff < uVar1) {
36: if ((int)((ulonglong)uVar4 >> 0x20) != 0) {
42: if (uVar2 < uVar6) {
45: if (uVar3 - uVar2 < _Size) {
48: else {
51: if (0xf < uVar3) {
58: else {
61: if (0xf < (ulonglong)param_2[3]) {
67: if (0xf < (ulonglong)param_2[3]) {
71: if (extraout_var != 0) {
76: return param_2;)F180065350F",
    R"F180065350U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180065350U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180065350() noexcept {
    return kFunction_0x180065350;
}

// 0x1800654d0 FUN_1800654d0
// source: re/dump/decompile/0x1800654d0_FUN_1800654d0.c
// size: 429 bytes; thunk: false
// body sha256: 0b30baaf395af96e52b62ed30a7b37d77f2850085d2a6c4629bb30c8337428db
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800654d0{
    "0x1800654d0",
    "FUN_1800654d0",
    R"F1800654d0S(undefined FUN_1800654d0())F1800654d0S",
    R"B1800654d0(// 0x1800654d0  FUN_1800654d0
// size=429 thunk=false
// signature: undefined FUN_1800654d0()
// status: ok


longlong * FUN_1800654d0(longlong *param_1,longlong *param_2)

{
  short *psVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  cVar3 = FUN_180066140(param_2);
  if (cVar3 != '\0') {
LAB_18006557e:
    if (param_1 == param_2) {
      return param_1;
    }
    plVar9 = param_2 + 2;
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (longlong *)*param_2;
    }
    FUN_18021a7b0(param_1,param_2,*plVar9);
    return param_1;
  }
  plVar9 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    plVar9 = (longlong *)*param_1;
  }
  psVar1 = (short *)((longlong)plVar9 + param_1[2] * 2);
  plVar11 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    plVar11 = (longlong *)*param_2;
  }
  plVar2 = (longlong *)((longlong)plVar11 + param_2[2] * 2);
  psVar5 = (short *)FUN_180065240(plVar9,psVar1);
  plVar6 = (longlong *)FUN_180065240(plVar11,plVar2);
  uVar7 = (longlong)psVar5 - (longlong)plVar9 >> 1;
  if (plVar11 != plVar6) {
    uVar10 = (longlong)plVar6 - (longlong)plVar11 >> 1;
    uVar8 = uVar7;
    if (uVar10 < uVar7) {
      uVar8 = uVar10;
    }
    iVar4 = FUN_180012bf0(plVar9,plVar11,uVar8);
    if (((iVar4 != 0) || (uVar7 < uVar10)) || (uVar10 < uVar7)) goto LAB_18006557e;
  }
  if ((plVar6 == plVar2) || (((short)*plVar6 != 0x5c && ((short)*plVar6 != 0x2f)))) {
    if (psVar5 == psVar1) {
      if ((longlong)uVar7 < 3) goto LAB_180065649;
    }
    else if ((psVar1[-1] == 0x5c) || (psVar1[-1] == 0x2f)) goto LAB_180065649;
    uVar7 = param_1[2];
    if (uVar7 < (ulonglong)param_1[3]) {
      param_1[2] = uVar7 + 1;
      if ((ulonglong)param_1[3] < 8) {
        psVar1 = (short *)((longlong)param_1 + uVar7 * 2);
        psVar1[0] = 0x5c;
        psVar1[1] = 0;
      }
      else {
        *(undefined4 *)(*param_1 + uVar7 * 2) = 0x5c;
      }
    }
    else {
      FUN_18021a440(param_1);
    }
  }
  else {
    if ((ulonglong)param_1[2] < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18022ec00();
    }
    param_1[2] = uVar7;
    if ((ulonglong)param_1[3] < 8) {
      *(short *)((longlong)param_1 + uVar7 * 2) = 0;
    }
    else {
      *(undefined2 *)(*param_1 + uVar7 * 2) = 0;
    }
  }
LAB_180065649:
  FUN_180211740(param_1,plVar6,(longlong)plVar2 - (longlong)plVar6 >> 1);
  return param_1;
}


)B1800654d0",
    "0b30baaf395af96e52b62ed30a7b37d77f2850085d2a6c4629bb30c8337428db",
    R"F1800654d0C(FUN_180012bf0
FUN_180065240
FUN_180066140
FUN_180211740
FUN_18021a440
FUN_18021a7b0
FUN_18022ec00)F1800654d0C",
    R"F1800654d0D(LAB_18006557e
LAB_180065649)F1800654d0D",
    R"F1800654d0T()F1800654d0T",
    R"F1800654d0F(23: if (cVar3 != '\0') {
24: LAB_18006557e:
25: if (param_1 == param_2) {
26: return param_1;
29: if (7 < (ulonglong)param_2[3]) {
33: return param_1;
36: if (7 < (ulonglong)param_1[3]) {
41: if (7 < (ulonglong)param_2[3]) {
48: if (plVar11 != plVar6) {
51: if (uVar10 < uVar7) {
55: if (((iVar4 != 0) || (uVar7 < uVar10)) || (uVar10 < uVar7)) goto LAB_18006557e;
57: if ((plVar6 == plVar2) || (((short)*plVar6 != 0x5c && ((short)*plVar6 != 0x2f)))) {
58: if (psVar5 == psVar1) {
59: if ((longlong)uVar7 < 3) goto LAB_180065649;
61: else if ((psVar1[-1] == 0x5c) || (psVar1[-1] == 0x2f)) goto LAB_180065649;
63: if (uVar7 < (ulonglong)param_1[3]) {
65: if ((ulonglong)param_1[3] < 8) {
70: else {
74: else {
78: else {
79: if ((ulonglong)param_1[2] < uVar7) {
84: if ((ulonglong)param_1[3] < 8) {
87: else {
91: LAB_180065649:
93: return param_1;)F1800654d0F",
    R"F1800654d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18006557e.
TODO: recover the declaration, type and value for global/data reference LAB_180065649.)F1800654d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800654d0() noexcept {
    return kFunction_0x1800654d0;
}

// 0x180065680 FUN_180065680
// source: re/dump/decompile/0x180065680_FUN_180065680.c
// size: 385 bytes; thunk: false
// body sha256: ff525ba1be2e9f8fa32e537ce17d0d43e9eb85133f0b3264f4d24a09589bbe7c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180065680{
    "0x180065680",
    "FUN_180065680",
    R"F180065680S(undefined FUN_180065680())F180065680S",
    R"B180065680(// 0x180065680  FUN_180065680
// size=385 thunk=false
// signature: undefined FUN_180065680()
// status: ok


longlong * FUN_180065680(longlong *param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  ulonglong uVar4;
  longlong *plVar5;
  short *psVar6;
  
  plVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    plVar5 = (longlong *)*param_1;
  }
  psVar6 = (short *)((longlong)plVar5 + param_1[2] * 2);
  psVar3 = psVar6;
  psVar2 = (short *)FUN_180065240(plVar5);
  if (psVar2 != psVar3) {
    do {
      psVar1 = psVar6;
      if ((*psVar2 != 0x5c) && (*psVar2 != 0x2f)) break;
      psVar2 = psVar2 + 1;
    } while (psVar2 != psVar3);
    do {
      psVar6 = psVar1;
      if (psVar2 == psVar3) break;
      psVar3 = psVar6 + -1;
      if ((psVar6[-1] == 0x5c) || (psVar1 = psVar3, psVar6[-1] == 0x2f)) break;
    } while( true );
  }
  psVar3 = (short *)thunk_FUN_1802d5d20(psVar6);
  if ((psVar6 != psVar3) && (psVar2 = psVar3 + -1, psVar6 != psVar2)) {
    if (*psVar2 == 0x2e) {
      if ((psVar6 != psVar3 + -2) || (psVar3[-2] != 0x2e)) {
LAB_180065730:
        psVar3 = psVar2;
      }
    }
    else {
      for (psVar2 = psVar3 + -2; psVar6 != psVar2; psVar2 = psVar2 + -1) {
        if (*psVar2 == 0x2e) goto LAB_180065730;
      }
    }
  }
  uVar4 = (longlong)psVar3 - (longlong)plVar5 >> 1;
  if ((ulonglong)param_1[2] < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_18022ec00();
  }
  param_1[2] = uVar4;
  plVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    plVar5 = (longlong *)*param_1;
  }
  *(undefined2 *)((longlong)plVar5 + uVar4 * 2) = 0;
  if (*(longlong *)(param_2 + 8) != 0) {
    psVar3 = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      psVar3 = *(short **)param_2;
    }
    if (*psVar3 != 0x2e) {
      uVar4 = param_1[2];
      if (uVar4 < (ulonglong)param_1[3]) {
        param_1[2] = uVar4 + 1;
        if ((ulonglong)param_1[3] < 8) {
          *(undefined4 *)((longlong)param_1 + uVar4 * 2) = 0x2e;
        }
        else {
          *(undefined4 *)(*param_1 + uVar4 * 2) = 0x2e;
        }
      }
      else {
        FUN_18021a440(param_1);
      }
    }
  }
  psVar3 = param_2 + 8;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    param_2 = *(short **)param_2;
  }
  FUN_180211740(param_1,param_2,*(undefined8 *)psVar3);
  return param_1;
}


)B180065680",
    "ff525ba1be2e9f8fa32e537ce17d0d43e9eb85133f0b3264f4d24a09589bbe7c",
    R"F180065680C(FUN_180065240
FUN_180211740
FUN_18021a440
FUN_18022ec00)F180065680C",
    R"F180065680D(LAB_180065730)F180065680D",
    R"F180065680T()F180065680T",
    R"F180065680F(18: if (7 < (ulonglong)param_1[3]) {
24: if (psVar2 != psVar3) {
25: do {
27: if ((*psVar2 != 0x5c) && (*psVar2 != 0x2f)) break;
30: do {
32: if (psVar2 == psVar3) break;
34: if ((psVar6[-1] == 0x5c) || (psVar1 = psVar3, psVar6[-1] == 0x2f)) break;
38: if ((psVar6 != psVar3) && (psVar2 = psVar3 + -1, psVar6 != psVar2)) {
39: if (*psVar2 == 0x2e) {
40: if ((psVar6 != psVar3 + -2) || (psVar3[-2] != 0x2e)) {
41: LAB_180065730:
45: else {
46: for (psVar2 = psVar3 + -2; psVar6 != psVar2; psVar2 = psVar2 + -1) {
47: if (*psVar2 == 0x2e) goto LAB_180065730;
52: if ((ulonglong)param_1[2] < uVar4) {
58: if (7 < (ulonglong)param_1[3]) {
62: if (*(longlong *)(param_2 + 8) != 0) {
64: if (7 < *(ulonglong *)(param_2 + 0xc)) {
67: if (*psVar3 != 0x2e) {
69: if (uVar4 < (ulonglong)param_1[3]) {
71: if ((ulonglong)param_1[3] < 8) {
74: else {
78: else {
84: if (7 < *(ulonglong *)(param_2 + 0xc)) {
88: return param_1;)F180065680F",
    R"F180065680U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180065730.)F180065680U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180065680() noexcept {
    return kFunction_0x180065680;
}

// 0x180065810 FUN_180065810
// source: re/dump/decompile/0x180065810_FUN_180065810.c
// size: 272 bytes; thunk: false
// body sha256: 713921ace5ccbdd8ddeb4a5ee33ece9b3eef7ce2c31935c5c08699425e17350b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180065810{
    "0x180065810",
    "FUN_180065810",
    R"F180065810S(undefined FUN_180065810())F180065810S",
    R"B180065810(// 0x180065810  FUN_180065810
// size=272 thunk=false
// signature: undefined FUN_180065810()
// status: ok


undefined8 * FUN_180065810(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int extraout_var;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  uVar1 = param_1[2];
  uVar2 = FUN_1802d75e4();
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  if (uVar1 != 0) {
    if (0x7fffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1800135c0(0x16);
    }
    uVar3 = FUN_1802d7654(uVar2,puVar5,uVar1 & 0xffffffff,0,0);
    if ((int)((ulonglong)uVar3 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013900();
    }
    FUN_18020e770(param_2,(longlong)(int)uVar3);
    puVar4 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar4 = (undefined8 *)*param_2;
    }
    FUN_1802d7654(uVar2,puVar5,uVar1 & 0xffffffff,puVar4,(int)uVar3);
    if (extraout_var != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180013900(extraout_var);
    }
  }
  return param_2;
}


)B180065810",
    "713921ace5ccbdd8ddeb4a5ee33ece9b3eef7ce2c31935c5c08699425e17350b",
    R"F180065810C(FUN_1800135c0
FUN_180013900
FUN_18020e770
FUN_1802d75e4
FUN_1802d7654)F180065810C",
    R"F180065810D()F180065810D",
    R"F180065810T()F180065810T",
    R"F180065810F(18: if (7 < (ulonglong)param_1[3]) {
28: if (uVar1 != 0) {
29: if (0x7fffffff < uVar1) {
34: if ((int)((ulonglong)uVar3 >> 0x20) != 0) {
40: if (0xf < (ulonglong)param_2[3]) {
44: if (extraout_var != 0) {
49: return param_2;)F180065810F",
    R"F180065810U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180065810U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180065810() noexcept {
    return kFunction_0x180065810;
}

// 0x180065930 FUN_180065930
// source: re/dump/decompile/0x180065930_FUN_180065930.c
// size: 50 bytes; thunk: false
// body sha256: ab266aac0f2b38266959646836d30096268c5e4a6fb6c5cb74d0006ea6e0be13
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180065930{
    "0x180065930",
    "FUN_180065930",
    R"F180065930S(undefined FUN_180065930())F180065930S",
    R"B180065930(// 0x180065930  FUN_180065930
// size=50 thunk=false
// signature: undefined FUN_180065930()
// status: ok


undefined8
FUN_180065930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18020e540(param_2,param_1,param_3,param_4,0);
  return param_2;
}


)B180065930",
    "ab266aac0f2b38266959646836d30096268c5e4a6fb6c5cb74d0006ea6e0be13",
    R"F180065930C(FUN_18020e540)F180065930C",
    R"F180065930D()F180065930D",
    R"F180065930T()F180065930T",
    R"F180065930F(12: return param_2;)F180065930F",
    R"F180065930U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180065930U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180065930() noexcept {
    return kFunction_0x180065930;
}

// 0x180065970 FUN_180065970
// source: re/dump/decompile/0x180065970_FUN_180065970.c
// size: 496 bytes; thunk: false
// body sha256: 42e5040abee4a37e4ac1e8287d4e7059049c2fc97981b27fa1d4c0435cbc7727
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180065970{
    "0x180065970",
    "FUN_180065970",
    R"F180065970S(undefined FUN_180065970())F180065970S",
    R"B180065970(// 0x180065970  FUN_180065970
// size=496 thunk=false
// signature: undefined FUN_180065970()
// status: ok


int FUN_180065970(undefined8 *param_1,longlong *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ushort *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  
  puVar15 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar15 = (undefined8 *)*param_1;
  }
  puVar1 = (ushort *)((longlong)puVar15 + param_1[2] * 2);
  puVar6 = (ushort *)FUN_180065240(puVar15,puVar1);
  lVar14 = *param_2;
  puVar2 = (ushort *)(lVar14 + param_2[1] * 2);
  puVar7 = (ushort *)FUN_180065240(lVar14,puVar2);
  uVar10 = (longlong)puVar7 - lVar14 >> 1;
  uVar11 = (longlong)puVar6 - (longlong)puVar15 >> 1;
  uVar12 = uVar11;
  if (uVar10 < uVar11) {
    uVar12 = uVar10;
  }
  iVar5 = FUN_180012bf0(puVar15,lVar14,uVar12);
  if (iVar5 == 0) {
    if (uVar11 < uVar10) {
      iVar5 = -1;
    }
    else {
      puVar8 = puVar6;
      if (uVar10 < uVar11) {
        iVar5 = 1;
      }
      else {
        for (; (puVar13 = puVar7, puVar8 != puVar1 && ((*puVar8 == 0x5c || (*puVar8 == 0x2f))));
            puVar8 = puVar8 + 1) {
        }
        for (; (puVar13 != puVar2 && ((*puVar13 == 0x5c || (*puVar13 == 0x2f))));
            puVar13 = puVar13 + 1) {
        }
        iVar5 = (uint)(puVar6 != puVar8) - (uint)(puVar7 != puVar13);
        if (iVar5 == 0) {
          iVar5 = (uint)(puVar13 == puVar2) - (uint)(puVar8 == puVar1);
          while ((puVar8 != puVar1 && (iVar5 == 0))) {
            uVar3 = *puVar8;
            if ((uVar3 == 0x5c) || (uVar3 == 0x2f)) {
              iVar5 = 1;
            }
            else {
              iVar5 = 0;
            }
            uVar4 = *puVar13;
            if ((uVar4 == 0x5c) || (uVar4 == 0x2f)) {
              iVar9 = 1;
            }
            else {
              iVar9 = 0;
            }
            if (iVar9 - iVar5 != 0) {
              return iVar9 - iVar5;
            }
            if ((char)iVar5 == '\0') {
              if ((uint)uVar3 - (uint)uVar4 != 0) {
                return (uint)uVar3 - (uint)uVar4;
              }
              puVar8 = puVar8 + 1;
              puVar13 = puVar13 + 1;
            }
            else {
              do {
                puVar8 = puVar8 + 1;
                if (puVar8 == puVar1) break;
              } while ((*puVar8 == 0x5c) || (*puVar8 == 0x2f));
              do {
                puVar13 = puVar13 + 1;
                if (puVar13 == puVar2) break;
              } while ((*puVar13 == 0x5c) || (*puVar13 == 0x2f));
            }
            iVar5 = (uint)(puVar13 == puVar2) - (uint)(puVar8 == puVar1);
          }
        }
      }
    }
  }
  return iVar5;
}


)B180065970",
    "42e5040abee4a37e4ac1e8287d4e7059049c2fc97981b27fa1d4c0435cbc7727",
    R"F180065970C(FUN_180012bf0
FUN_180065240)F180065970C",
    R"F180065970D()F180065970D",
    R"F180065970T()F180065970T",
    R"F180065970F(27: if (7 < (ulonglong)param_1[3]) {
38: if (uVar10 < uVar11) {
42: if (iVar5 == 0) {
43: if (uVar11 < uVar10) {
46: else {
48: if (uVar10 < uVar11) {
51: else {
52: for (; (puVar13 = puVar7, puVar8 != puVar1 && ((*puVar8 == 0x5c || (*puVar8 == 0x2f))));
55: for (; (puVar13 != puVar2 && ((*puVar13 == 0x5c || (*puVar13 == 0x2f))));
59: if (iVar5 == 0) {
61: while ((puVar8 != puVar1 && (iVar5 == 0))) {
63: if ((uVar3 == 0x5c) || (uVar3 == 0x2f)) {
66: else {
70: if ((uVar4 == 0x5c) || (uVar4 == 0x2f)) {
73: else {
76: if (iVar9 - iVar5 != 0) {
77: return iVar9 - iVar5;
79: if ((char)iVar5 == '\0') {
80: if ((uint)uVar3 - (uint)uVar4 != 0) {
81: return (uint)uVar3 - (uint)uVar4;
86: else {
87: do {
89: if (puVar8 == puVar1) break;
91: do {
93: if (puVar13 == puVar2) break;
102: return iVar5;)F180065970F",
    R"F180065970U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180065970U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180065970() noexcept {
    return kFunction_0x180065970;
}

// 0x180065b60 FUN_180065b60
// source: re/dump/decompile/0x180065b60_FUN_180065b60.c
// size: 181 bytes; thunk: false
// body sha256: 7bc45faff922f1aa5d5c3bd14bc10fdf6410ce9301053ebde977f1b556655fa8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180065b60{
    "0x180065b60",
    "FUN_180065b60",
    R"F180065b60S(undefined FUN_180065b60())F180065b60S",
    R"B180065b60(// 0x180065b60  FUN_180065b60
// size=181 thunk=false
// signature: undefined FUN_180065b60()
// status: ok


undefined8 *
FUN_180065b60(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short *psVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  uVar4 = 0;
  puVar3 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  psVar2 = (short *)((longlong)puVar3 + param_1[2] * 2);
  puVar5 = param_2;
  for (psVar1 = (short *)FUN_180065240(puVar3);
      (psVar1 != psVar2 && ((*psVar1 == 0x5c || (*psVar1 == 0x2f)))); psVar1 = psVar1 + 1) {
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_180211510(param_2,puVar3,(longlong)psVar1 - (longlong)puVar3 >> 1,param_4,uVar4,puVar5,param_2
               );
  return param_2;
}


)B180065b60",
    "7bc45faff922f1aa5d5c3bd14bc10fdf6410ce9301053ebde977f1b556655fa8",
    R"F180065b60C(FUN_180065240
FUN_180211510)F180065b60C",
    R"F180065b60D()F180065b60D",
    R"F180065b60T()F180065b60T",
    R"F180065b60F(19: if (7 < (ulonglong)param_1[3]) {
24: for (psVar1 = (short *)FUN_180065240(puVar3);
33: return param_2;)F180065b60F",
    R"F180065b60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180065b60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180065b60() noexcept {
    return kFunction_0x180065b60;
}

// 0x180065c20 FUN_180065c20
// source: re/dump/decompile/0x180065c20_FUN_180065c20.c
// size: 173 bytes; thunk: false
// body sha256: e2b79e33f14a612d8a05de84dff5b709077a768dbaec4e72c49af1ca7918ff57
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180065c20{
    "0x180065c20",
    "FUN_180065c20",
    R"F180065c20S(undefined FUN_180065c20())F180065c20S",
    R"B180065c20(// 0x180065c20  FUN_180065c20
// size=173 thunk=false
// signature: undefined FUN_180065c20()
// status: ok


undefined8 *
FUN_180065c20(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short *psVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  uVar4 = 0;
  uVar5 = 0;
  puVar3 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  psVar2 = (short *)((longlong)puVar3 + param_1[2] * 2);
  puVar6 = param_2;
  for (psVar1 = (short *)FUN_180065240(puVar3);
      (psVar1 != psVar2 && ((*psVar1 == 0x5c || (*psVar1 == 0x2f)))); psVar1 = psVar1 + 1) {
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = uVar4;
  param_2[3] = uVar4;
  FUN_180211510(param_2,psVar1,(longlong)psVar2 - (longlong)psVar1 >> 1,param_4,uVar5,puVar6,param_2
               );
  return param_2;
}


)B180065c20",
    "e2b79e33f14a612d8a05de84dff5b709077a768dbaec4e72c49af1ca7918ff57",
    R"F180065c20C(FUN_180065240
FUN_180211510)F180065c20C",
    R"F180065c20D()F180065c20D",
    R"F180065c20T()F180065c20T",
    R"F180065c20F(21: if (7 < (ulonglong)param_1[3]) {
26: for (psVar1 = (short *)FUN_180065240(puVar3);
35: return param_2;)F180065c20F",
    R"F180065c20U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180065c20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180065c20() noexcept {
    return kFunction_0x180065c20;
}

// 0x180065cd0 FUN_180065cd0
// source: re/dump/decompile/0x180065cd0_FUN_180065cd0.c
// size: 267 bytes; thunk: false
// body sha256: ab55450890867ffae7aa2d05b6726462228e8207a58ff84e59009c2bf09ce20a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180065cd0{
    "0x180065cd0",
    "FUN_180065cd0",
    R"F180065cd0S(undefined FUN_180065cd0())F180065cd0S",
    R"B180065cd0(// 0x180065cd0  FUN_180065cd0
// size=267 thunk=false
// signature: undefined FUN_180065cd0()
// status: ok


undefined8 *
FUN_180065cd0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  uVar6 = 0;
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  psVar4 = (short *)((longlong)puVar5 + param_1[2] * 2);
  puVar7 = param_2;
  psVar3 = (short *)FUN_180065240(puVar5);
  if (psVar3 != psVar4) {
    do {
      if ((*psVar3 != 0x5c) && (*psVar3 != 0x2f)) break;
      psVar3 = psVar3 + 1;
    } while (psVar3 != psVar4);
    do {
      if (psVar3 == psVar4) goto LAB_180065d7e;
      sVar2 = psVar4[-1];
      psVar1 = psVar4;
    } while ((sVar2 != 0x5c) && (psVar4 = psVar4 + -1, sVar2 != 0x2f));
    do {
      psVar4 = psVar1;
      if (psVar3 == psVar4) break;
      psVar1 = psVar4 + -1;
    } while ((*psVar1 == 0x5c) || (*psVar1 == 0x2f));
  }
LAB_180065d7e:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_180211510(param_2,puVar5,(longlong)psVar4 - (longlong)puVar5 >> 1,param_4,uVar6,puVar7,param_2
               );
  return param_2;
}


)B180065cd0",
    "ab55450890867ffae7aa2d05b6726462228e8207a58ff84e59009c2bf09ce20a",
    R"F180065cd0C(FUN_180065240
FUN_180211510)F180065cd0C",
    R"F180065cd0D(LAB_180065d7e)F180065cd0D",
    R"F180065cd0T()F180065cd0T",
    R"F180065cd0F(21: if (7 < (ulonglong)param_1[3]) {
27: if (psVar3 != psVar4) {
28: do {
29: if ((*psVar3 != 0x5c) && (*psVar3 != 0x2f)) break;
32: do {
33: if (psVar3 == psVar4) goto LAB_180065d7e;
37: do {
39: if (psVar3 == psVar4) break;
43: LAB_180065d7e:
50: return param_2;)F180065cd0F",
    R"F180065cd0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180065d7e.)F180065cd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180065cd0() noexcept {
    return kFunction_0x180065cd0;
}

// 0x180065de0 FUN_180065de0
// source: re/dump/decompile/0x180065de0_FUN_180065de0.c
// size: 222 bytes; thunk: false
// body sha256: 37007b79dd2e1d5d5abc112bf0898505ce26c0f776becb9af9b2711ee51c38c7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180065de0{
    "0x180065de0",
    "FUN_180065de0",
    R"F180065de0S(undefined FUN_180065de0())F180065de0S",
    R"B180065de0(// 0x180065de0  FUN_180065de0
// size=222 thunk=false
// signature: undefined FUN_180065de0()
// status: ok


undefined8 *
FUN_180065de0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  undefined8 *puVar5;
  short *psVar6;
  
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  psVar1 = (short *)((longlong)puVar5 + param_1[2] * 2);
  psVar6 = psVar1;
  psVar4 = (short *)FUN_180065240(puVar5,psVar1,puVar5,param_4,0,param_2);
  if (psVar4 == psVar1) {
LAB_180065e5c:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_180211510(param_2,psVar6,(longlong)psVar1 - (longlong)psVar6 >> 1);
    return param_2;
  }
  do {
    psVar3 = psVar6;
    psVar2 = psVar1;
    if ((*psVar4 != 0x5c) && (*psVar4 != 0x2f)) break;
    psVar4 = psVar4 + 1;
  } while (psVar4 != psVar1);
  do {
    psVar6 = psVar3;
    if (psVar4 == psVar2) goto LAB_180065e5c;
    psVar2 = psVar6 + -1;
    if ((*psVar2 == 0x5c) || (psVar3 = psVar2, *psVar2 == 0x2f)) goto LAB_180065e5c;
  } while( true );
}


)B180065de0",
    "37007b79dd2e1d5d5abc112bf0898505ce26c0f776becb9af9b2711ee51c38c7",
    R"F180065de0C(FUN_180065240
FUN_180211510)F180065de0C",
    R"F180065de0D(LAB_180065e5c)F180065de0D",
    R"F180065de0T()F180065de0T",
    R"F180065de0F(19: if (7 < (ulonglong)param_1[3]) {
25: if (psVar4 == psVar1) {
26: LAB_180065e5c:
32: return param_2;
34: do {
37: if ((*psVar4 != 0x5c) && (*psVar4 != 0x2f)) break;
40: do {
42: if (psVar4 == psVar2) goto LAB_180065e5c;
44: if ((*psVar2 == 0x5c) || (psVar3 = psVar2, *psVar2 == 0x2f)) goto LAB_180065e5c;)F180065de0F",
    R"F180065de0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180065e5c.)F180065de0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180065de0() noexcept {
    return kFunction_0x180065de0;
}

// 0x180065ec0 FUN_180065ec0
// source: re/dump/decompile/0x180065ec0_FUN_180065ec0.c
// size: 305 bytes; thunk: false
// body sha256: e7991a9d3d455d4fa4839f0467093e86f3b81d621c8ef5e25039a3173c176231
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180065ec0{
    "0x180065ec0",
    "FUN_180065ec0",
    R"F180065ec0S(undefined FUN_180065ec0())F180065ec0S",
    R"B180065ec0(// 0x180065ec0  FUN_180065ec0
// size=305 thunk=false
// signature: undefined FUN_180065ec0()
// status: ok


undefined8 *
FUN_180065ec0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  uVar6 = 0;
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  psVar4 = (short *)((longlong)puVar5 + param_1[2] * 2);
  psVar3 = psVar4;
  puVar7 = param_2;
  psVar2 = (short *)FUN_180065240(puVar5);
  if (psVar2 != psVar3) {
    do {
      psVar1 = psVar4;
      if ((*psVar2 != 0x5c) && (*psVar2 != 0x2f)) break;
      psVar2 = psVar2 + 1;
    } while (psVar2 != psVar3);
    do {
      psVar4 = psVar1;
      if (psVar2 == psVar3) break;
      psVar3 = psVar4 + -1;
      if ((*psVar3 == 0x5c) || (psVar1 = psVar3, *psVar3 == 0x2f)) break;
    } while( true );
  }
  psVar3 = (short *)thunk_FUN_1802d5d20(psVar4);
  if ((psVar4 != psVar3) && (psVar2 = psVar3 + -1, psVar4 != psVar2)) {
    if (*psVar2 == 0x2e) {
      if ((psVar4 != psVar3 + -2) || (psVar3[-2] != 0x2e)) {
LAB_180065f72:
        psVar3 = psVar2;
      }
    }
    else {
      for (psVar2 = psVar3 + -2; psVar4 != psVar2; psVar2 = psVar2 + -1) {
        if (*psVar2 == 0x2e) goto LAB_180065f72;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_180211510(param_2,psVar4,(longlong)psVar3 - (longlong)psVar4 >> 1,param_4,uVar6,puVar7,param_2
               );
  return param_2;
}


)B180065ec0",
    "e7991a9d3d455d4fa4839f0467093e86f3b81d621c8ef5e25039a3173c176231",
    R"F180065ec0C(FUN_180065240
FUN_180211510)F180065ec0C",
    R"F180065ec0D(LAB_180065f72)F180065ec0D",
    R"F180065ec0T()F180065ec0T",
    R"F180065ec0F(21: if (7 < (ulonglong)param_1[3]) {
28: if (psVar2 != psVar3) {
29: do {
31: if ((*psVar2 != 0x5c) && (*psVar2 != 0x2f)) break;
34: do {
36: if (psVar2 == psVar3) break;
38: if ((*psVar3 == 0x5c) || (psVar1 = psVar3, *psVar3 == 0x2f)) break;
42: if ((psVar4 != psVar3) && (psVar2 = psVar3 + -1, psVar4 != psVar2)) {
43: if (*psVar2 == 0x2e) {
44: if ((psVar4 != psVar3 + -2) || (psVar3[-2] != 0x2e)) {
45: LAB_180065f72:
49: else {
50: for (psVar2 = psVar3 + -2; psVar4 != psVar2; psVar2 = psVar2 + -1) {
51: if (*psVar2 == 0x2e) goto LAB_180065f72;
61: return param_2;)F180065ec0F",
    R"F180065ec0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180065f72.)F180065ec0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180065ec0() noexcept {
    return kFunction_0x180065ec0;
}

// 0x180066000 FUN_180066000
// source: re/dump/decompile/0x180066000_FUN_180066000.c
// size: 305 bytes; thunk: false
// body sha256: dc326d0f278aa9d69682b0da07a63299ec6722f9b61b0f00fba3e2a6754b91be
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180066000{
    "0x180066000",
    "FUN_180066000",
    R"F180066000S(undefined FUN_180066000())F180066000S",
    R"B180066000(// 0x180066000  FUN_180066000
// size=305 thunk=false
// signature: undefined FUN_180066000()
// status: ok


undefined8 *
FUN_180066000(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  uVar6 = 0;
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  psVar4 = (short *)((longlong)puVar5 + param_1[2] * 2);
  psVar3 = psVar4;
  puVar7 = param_2;
  psVar2 = (short *)FUN_180065240(puVar5);
  if (psVar2 != psVar3) {
    do {
      psVar1 = psVar4;
      if ((*psVar2 != 0x5c) && (*psVar2 != 0x2f)) break;
      psVar2 = psVar2 + 1;
    } while (psVar2 != psVar3);
    do {
      psVar4 = psVar1;
      if (psVar2 == psVar3) break;
      psVar3 = psVar4 + -1;
      if ((*psVar3 == 0x5c) || (psVar1 = psVar3, *psVar3 == 0x2f)) break;
    } while( true );
  }
  psVar3 = (short *)thunk_FUN_1802d5d20(psVar4);
  if ((psVar4 != psVar3) && (psVar2 = psVar3 + -1, psVar4 != psVar2)) {
    if (*psVar2 == 0x2e) {
      if ((psVar4 != psVar3 + -2) || (psVar3[-2] != 0x2e)) goto LAB_1800660d2;
    }
    else {
      for (psVar2 = psVar3 + -2; psVar4 != psVar2; psVar2 = psVar2 + -1) {
        if (*psVar2 == 0x2e) goto LAB_1800660d2;
      }
    }
  }
  psVar2 = psVar3;
LAB_1800660d2:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_180211510(param_2,psVar2,(longlong)psVar3 - (longlong)psVar2 >> 1,param_4,uVar6,puVar7,param_2
               );
  return param_2;
}


)B180066000",
    "dc326d0f278aa9d69682b0da07a63299ec6722f9b61b0f00fba3e2a6754b91be",
    R"F180066000C(FUN_180065240
FUN_180211510)F180066000C",
    R"F180066000D(LAB_1800660d2)F180066000D",
    R"F180066000T()F180066000T",
    R"F180066000F(21: if (7 < (ulonglong)param_1[3]) {
28: if (psVar2 != psVar3) {
29: do {
31: if ((*psVar2 != 0x5c) && (*psVar2 != 0x2f)) break;
34: do {
36: if (psVar2 == psVar3) break;
38: if ((*psVar3 == 0x5c) || (psVar1 = psVar3, *psVar3 == 0x2f)) break;
42: if ((psVar4 != psVar3) && (psVar2 = psVar3 + -1, psVar4 != psVar2)) {
43: if (*psVar2 == 0x2e) {
44: if ((psVar4 != psVar3 + -2) || (psVar3[-2] != 0x2e)) goto LAB_1800660d2;
46: else {
47: for (psVar2 = psVar3 + -2; psVar4 != psVar2; psVar2 = psVar2 + -1) {
48: if (*psVar2 == 0x2e) goto LAB_1800660d2;
53: LAB_1800660d2:
60: return param_2;)F180066000F",
    R"F180066000U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1800660d2.)F180066000U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180066000() noexcept {
    return kFunction_0x180066000;
}

// 0x180066140 FUN_180066140
// source: re/dump/decompile/0x180066140_FUN_180066140.c
// size: 114 bytes; thunk: false
// body sha256: 4589ddf4cb50832e984c1c92c9314616184abd8f895e34f8304b46c04916487d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180066140{
    "0x180066140",
    "FUN_180066140",
    R"F180066140S(undefined FUN_180066140())F180066140S",
    R"B180066140(// 0x180066140  FUN_180066140
// size=114 thunk=false
// signature: undefined FUN_180066140()
// status: ok


bool FUN_180066140(uint *param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  
  puVar3 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar3 = *(uint **)param_1;
  }
  lVar2 = *(longlong *)(param_1 + 4) * 2 >> 1;
  if ((1 < lVar2) && ((*puVar3 & 0xffffffdf) - 0x3a0041 < 0x1a)) {
    if (2 < lVar2) {
      if (((short)puVar3[1] == 0x5c) || ((short)puVar3[1] == 0x2f)) {
        return true;
      }
    }
    return false;
  }
  puVar1 = (uint *)FUN_180065240(puVar3,*(longlong *)(param_1 + 4) * 2 + (longlong)puVar3);
  return puVar3 != puVar1;
}


)B180066140",
    "4589ddf4cb50832e984c1c92c9314616184abd8f895e34f8304b46c04916487d",
    R"F180066140C(FUN_180065240)F180066140C",
    R"F180066140D()F180066140D",
    R"F180066140T()F180066140T",
    R"F180066140F(15: if (7 < *(ulonglong *)(param_1 + 6)) {
19: if ((1 < lVar2) && ((*puVar3 & 0xffffffdf) - 0x3a0041 < 0x1a)) {
20: if (2 < lVar2) {
21: if (((short)puVar3[1] == 0x5c) || ((short)puVar3[1] == 0x2f)) {
22: return true;
25: return false;
28: return puVar3 != puVar1;)F180066140F",
    R"F180066140U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180066140U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180066140() noexcept {
    return kFunction_0x180066140;
}

// 0x1800661c0 FUN_1800661c0
// source: re/dump/decompile/0x1800661c0_FUN_1800661c0.c
// size: 1364 bytes; thunk: false
// body sha256: 25dcb0bf4ce1d277a28f9c45d0952b15cb738499896d8d893f8e5e9c78d5dad7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800661c0{
    "0x1800661c0",
    "FUN_1800661c0",
    R"F1800661c0S(undefined FUN_1800661c0())F1800661c0S",
    R"B1800661c0(// 0x1800661c0  FUN_1800661c0
// size=1364 thunk=false
// signature: undefined FUN_1800661c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800661c0(short *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  short *psVar5;
  int iVar6;
  short *psVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  short *psVar10;
  short *psVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  char unaff_R12B;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined4 local_b8;
  short *local_b0;
  longlong local_a8;
  undefined8 **local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  puVar14 = auStack_d8;
  puVar12 = auStack_d8;
  puVar13 = auStack_d8;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  plVar1 = (longlong *)(param_1 + 8);
  if (*plVar1 == 0) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
    goto LAB_1800666e2;
  }
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    param_1 = *(short **)param_1;
  }
  psVar11 = param_1 + *plVar1;
  local_88 = param_2;
  psVar7 = (short *)FUN_180065240(param_1,psVar11);
  local_68 = (short *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  if (param_1 == psVar7) {
    local_58 = 0;
    uStack_50 = 7;
    local_68 = (short *)0x0;
  }
  else {
    FUN_180211510(&local_68,param_1,(longlong)psVar7 - (longlong)param_1 >> 1);
  }
  psVar10 = (short *)&local_68;
  if (7 < uStack_50) {
    psVar10 = local_68;
  }
  psVar10 = psVar10 + local_58;
  psVar5 = (short *)&local_68;
  if (7 < uStack_50) {
    psVar5 = local_68;
  }
  for (; psVar5 != psVar10; psVar5 = psVar5 + 1) {
    if (*psVar5 == 0x2f) {
      *psVar5 = 0x5c;
    }
  }
  local_80 = (undefined8 *)0x0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  puVar8 = (undefined8 *)FUN_1802d8350(0x130);
  local_a0 = &local_80;
  local_90 = 0x13;
  local_98 = puVar8;
  memmove(puVar8,local_80,(longlong)puStack_78 - (longlong)local_80);
  local_98 = (undefined8 *)0x0;
  if (local_80 == (undefined8 *)0x0) {
LAB_18006634e:
    local_70 = puVar8 + 0x26;
    unaff_R12B = '\0';
    puVar14 = auStack_d8;
    local_b0 = psVar7;
    local_80 = puVar8;
    puStack_78 = puVar8;
    if (psVar7 != psVar11) {
      if ((*psVar7 != 0x5c) && (*psVar7 != 0x2f)) goto LAB_1800663f3;
      unaff_R12B = '\x01';
      if (uStack_50 <= local_58) goto LAB_1800663b5;
      psVar10 = (short *)&local_68;
      if (7 < uStack_50) {
        psVar10 = local_68;
      }
      psVar10 = psVar10 + local_58;
      local_58 = local_58 + 1;
      psVar10[0] = 0x5c;
      psVar10[1] = 0;
      unaff_R12B = '\x01';
      puVar14 = auStack_d8;
      goto LAB_1800663c1;
    }
  }
  else {
    puVar9 = local_80;
    if ((((longlong)local_70 - (longlong)local_80 & 0xfffffffffffffff0U) < 0x1000) ||
       (puVar9 = (undefined8 *)local_80[-1],
       (ulonglong)((longlong)local_80 + (-8 - (longlong)puVar9)) < 0x20)) {
      free(puVar9);
      goto LAB_18006634e;
    }
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar12 = auStack_d0;
LAB_1800663b5:
    *(undefined8 *)(puVar12 + -8) = 0x1800663bd;
    FUN_18021a440();
    puVar14 = puVar12;
LAB_1800663c1:
    do {
      psVar7 = psVar7 + 1;
      puVar8 = puStack_78;
      local_b0 = psVar7;
      if (psVar7 == psVar11) goto LAB_1800664c3;
    } while ((*psVar7 == 0x5c) || (puVar13 = puVar14, *psVar7 == 0x2f));
    while (puVar14 = puVar13, local_b0 = psVar7, psVar7 != psVar11) {
LAB_1800663f3:
      psVar7 = local_b0;
      if ((*local_b0 == 0x5c) || (*local_b0 == 0x2f)) {
        if ((local_80 == puVar8) || (puVar8[-1] != 0)) {
          if (puVar8 == local_70) {
            *(undefined8 *)(puVar13 + -8) = 0x1800664a8;
            FUN_18021fa00(&local_80,puVar8);
            puVar8 = puStack_78;
          }
          else {
            *puVar8 = 0;
            puVar8[1] = 0;
            puStack_78 = puStack_78 + 2;
            puVar8 = puStack_78;
          }
        }
        psVar7 = psVar7 + 1;
      }
      else {
        do {
          psVar7 = psVar7 + 1;
          if ((psVar7 == psVar11) || (*psVar7 == 0x5c)) break;
        } while (*psVar7 != 0x2f);
        local_a8 = (longlong)psVar7 - (longlong)local_b0 >> 1;
        if (puVar8 == local_70) {
          *(undefined8 *)(puVar13 + -8) = 0x180066469;
          FUN_18021fbd0(&local_80,puVar8,&local_b0,&local_a8);
          puVar8 = puStack_78;
        }
        else {
          *puVar8 = local_b0;
          puVar8[1] = local_a8;
          puStack_78 = puStack_78 + 2;
          puVar8 = puStack_78;
        }
      }
    }
  }
LAB_1800664c3:
  puVar9 = local_80;
  puVar15 = local_80;
  if (local_80 != puVar8) {
    do {
      puVar8 = puVar9 + 2;
      uVar2 = *puVar9;
      lVar3 = puVar9[1];
      if (lVar3 == 1) {
        *(undefined8 *)(puVar14 + -8) = 0x180066503;
        iVar6 = FUN_180012bf0(uVar2,&DAT_180345b1c,1);
        if (iVar6 != 0) goto LAB_180066571;
        puVar16 = puVar15;
        if (puVar8 == puStack_78) break;
      }
      else {
        if (lVar3 == 2) {
          *(undefined8 *)(puVar14 + -8) = 0x18006652a;
          iVar6 = FUN_180012bf0(uVar2,&DAT_180345b20,2);
          if (iVar6 != 0) goto LAB_180066571;
          if (puVar15 != local_80) {
            if (puVar15[-3] == 2) {
              uVar2 = puVar15[-4];
              *(undefined8 *)(puVar14 + -8) = 0x180066549;
              iVar6 = FUN_180012bf0(uVar2,&DAT_180345b20);
              if (iVar6 == 0) goto LAB_18006655c;
            }
            puVar15 = puVar15 + -4;
LAB_180066551:
            puVar16 = puVar15;
            if (puVar8 != puStack_78) goto LAB_18006658c;
            break;
          }
LAB_18006655c:
          if (unaff_R12B != '\0') goto LAB_180066551;
          *puVar15 = &DAT_180345b20;
          puVar15[1] = 2;
        }
        else {
LAB_180066571:
          *puVar15 = uVar2;
          puVar15[1] = lVar3;
        }
        puVar16 = puVar15 + 2;
        if (puVar8 == puStack_78) break;
        puVar15 = puVar15 + 4;
      }
LAB_18006658c:
      puVar9 = puVar9 + 4;
      puVar16 = puVar15;
    } while (puVar9 != puStack_78);
    puVar8 = puStack_78;
    if (puVar16 != puStack_78) {
      puVar8 = puVar16;
      puStack_78 = puVar16;
    }
  }
  puVar9 = local_80;
  if (((1 < (ulonglong)((longlong)puVar8 - (longlong)local_80 >> 4)) && (puVar8[-1] == 0)) &&
     (puVar8[-3] == 2)) {
    uVar2 = puVar8[-4];
    *(undefined8 *)(puVar14 + -8) = 0x1800665e1;
    iVar6 = FUN_180012bf0(uVar2,&DAT_180345b20);
    puVar9 = local_80;
    puVar8 = puStack_78;
    if (iVar6 == 0) {
      puStack_78 = puStack_78 + -2;
      puVar8 = puStack_78;
    }
  }
  for (; puVar9 != puVar8; puVar9 = puVar9 + 2) {
    if (puVar9[1] == 0) {
      if (local_58 < uStack_50) {
        psVar11 = (short *)&local_68;
        if (7 < uStack_50) {
          psVar11 = local_68;
        }
        psVar11 = psVar11 + local_58;
        local_58 = local_58 + 1;
        psVar11[0] = 0x5c;
        psVar11[1] = 0;
      }
      else {
        *(undefined8 *)(puVar14 + -8) = 0x18006663b;
        FUN_18021a440(&local_68,local_58,uStack_50,0x5c);
      }
    }
    else {
      uVar2 = *puVar9;
      *(undefined8 *)(puVar14 + -8) = 0x180066645;
      FUN_180211740(&local_68,uVar2);
    }
  }
  if (local_58 == 0) {
    *(undefined8 *)(puVar14 + -8) = 0x18006666b;
    FUN_18021a7b0(&local_68,&DAT_180345b1c,1);
  }
  *(undefined4 *)param_2 = (undefined4)local_68;
  *(undefined4 *)((longlong)param_2 + 4) = local_68._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_50._4_4_;
  local_58 = 0;
  uStack_50 = 7;
  local_68 = (short *)((ulonglong)local_68 & 0xffffffffffff0000);
  local_b8 = 1;
  if (local_80 != (undefined8 *)0x0) {
    puVar8 = local_80;
    if ((0xfff < ((longlong)local_70 - (longlong)local_80 & 0xfffffffffffffff0U)) &&
       (puVar8 = (undefined8 *)local_80[-1],
       0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)puVar8)))) {
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      pcVar4 = (code *)swi(3);
      puVar8 = (undefined8 *)(*pcVar4)();
      return puVar8;
    }
    *(undefined8 *)(puVar14 + -8) = 0x1800666cd;
    free(puVar8);
    local_80 = (undefined8 *)0x0;
    puStack_78 = (undefined8 *)0x0;
    local_70 = (undefined8 *)0x0;
  }
  *(undefined8 *)(puVar14 + -8) = 0x1800666e2;
  FUN_18021e290(&local_68);
LAB_1800666e2:
  *(undefined8 *)(puVar14 + -8) = 0x1800666f1;
  return param_2;
}


)B1800661c0",
    "25dcb0bf4ce1d277a28f9c45d0952b15cb738499896d8d893f8e5e9c78d5dad7",
    R"F1800661c0C(FUN_180012bf0
FUN_180065240
FUN_180211510
FUN_180211740
FUN_18021a440
FUN_18021a7b0
FUN_18021e290
FUN_18021fa00
FUN_18021fbd0
FUN_1802d8350)F1800661c0C",
    R"F1800661c0D(LAB_18006634e
LAB_1800663b5
LAB_1800663c1
LAB_1800663f3
LAB_1800664c3
LAB_180066551
LAB_18006655c
LAB_180066571
LAB_18006658c
LAB_1800666e2
DAT_180345b1c
DAT_180345b20
DAT_1803da4c0)F1800661c0D",
    R"F1800661c0T()F1800661c0T",
    R"F1800661c0F(53: if (*plVar1 == 0) {
61: goto LAB_1800666e2;
63: if (7 < *(ulonglong *)(param_1 + 0xc)) {
73: if (param_1 == psVar7) {
78: else {
82: if (7 < uStack_50) {
87: if (7 < uStack_50) {
90: for (; psVar5 != psVar10; psVar5 = psVar5 + 1) {
91: if (*psVar5 == 0x2f) {
104: if (local_80 == (undefined8 *)0x0) {
105: LAB_18006634e:
112: if (psVar7 != psVar11) {
113: if ((*psVar7 != 0x5c) && (*psVar7 != 0x2f)) goto LAB_1800663f3;
115: if (uStack_50 <= local_58) goto LAB_1800663b5;
117: if (7 < uStack_50) {
126: goto LAB_1800663c1;
129: else {
131: if ((((longlong)local_70 - (longlong)local_80 & 0xfffffffffffffff0U) < 0x1000) ||
135: goto LAB_18006634e;
140: LAB_1800663b5:
144: LAB_1800663c1:
145: do {
149: if (psVar7 == psVar11) goto LAB_1800664c3;
151: while (puVar14 = puVar13, local_b0 = psVar7, psVar7 != psVar11) {
152: LAB_1800663f3:
154: if ((*local_b0 == 0x5c) || (*local_b0 == 0x2f)) {
155: if ((local_80 == puVar8) || (puVar8[-1] != 0)) {
156: if (puVar8 == local_70) {
161: else {
170: else {
171: do {
173: if ((psVar7 == psVar11) || (*psVar7 == 0x5c)) break;
176: if (puVar8 == local_70) {
181: else {
190: LAB_1800664c3:
193: if (local_80 != puVar8) {
194: do {
198: if (lVar3 == 1) {
201: if (iVar6 != 0) goto LAB_180066571;
203: if (puVar8 == puStack_78) break;
205: else {
206: if (lVar3 == 2) {
209: if (iVar6 != 0) goto LAB_180066571;
210: if (puVar15 != local_80) {
211: if (puVar15[-3] == 2) {
215: if (iVar6 == 0) goto LAB_18006655c;
218: LAB_180066551:
220: if (puVar8 != puStack_78) goto LAB_18006658c;
221: break;
223: LAB_18006655c:
224: if (unaff_R12B != '\0') goto LAB_180066551;
228: else {
229: LAB_180066571:
234: if (puVar8 == puStack_78) break;
237: LAB_18006658c:
242: if (puVar16 != puStack_78) {
248: if (((1 < (ulonglong)((longlong)puVar8 - (longlong)local_80 >> 4)) && (puVar8[-1] == 0)) &&
255: if (iVar6 == 0) {
260: for (; puVar9 != puVar8; puVar9 = puVar9 + 2) {
261: if (puVar9[1] == 0) {
262: if (local_58 < uStack_50) {
264: if (7 < uStack_50) {
272: else {
277: else {
283: if (local_58 == 0) {
299: if (local_80 != (undefined8 *)0x0) {
301: if ((0xfff < ((longlong)local_70 - (longlong)local_80 & 0xfffffffffffffff0U)) &&
308: return puVar8;
318: LAB_1800666e2:
320: return param_2;)F1800661c0F",
    R"F1800661c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18006634e.
TODO: recover the declaration, type and value for global/data reference LAB_1800663b5.
TODO: recover the declaration, type and value for global/data reference LAB_1800663c1.
TODO: recover the declaration, type and value for global/data reference LAB_1800663f3.
TODO: recover the declaration, type and value for global/data reference LAB_1800664c3.
TODO: recover the declaration, type and value for global/data reference LAB_180066551.
TODO: recover the declaration, type and value for global/data reference LAB_18006655c.
TODO: recover the declaration, type and value for global/data reference LAB_180066571.
TODO: recover the declaration, type and value for global/data reference LAB_18006658c.
TODO: recover the declaration, type and value for global/data reference LAB_1800666e2.
TODO: recover the declaration, type and value for global/data reference DAT_180345b1c.
TODO: recover the declaration, type and value for global/data reference DAT_180345b20.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 137: pcVar4 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 138: (*pcVar4)(5);.
TODO: resolve the indirect call in body 304: pcVar4 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 305: (*pcVar4)(5);.
TODO: resolve the indirect call in body 306: pcVar4 = (code *)swi(3);.
TODO: resolve the indirect call in body 307: puVar8 = (undefined8 *)(*pcVar4)();.)F1800661c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800661c0() noexcept {
    return kFunction_0x1800661c0;
}

// 0x180066720 FUN_180066720
// source: re/dump/decompile/0x180066720_FUN_180066720.c
// size: 435 bytes; thunk: false
// body sha256: 3e554d4652d164505753012bed4716311d77df75e37fcc8e9fd33f27218c70fd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180066720{
    "0x180066720",
    "FUN_180066720",
    R"F180066720S(undefined FUN_180066720())F180066720S",
    R"B180066720(// 0x180066720  FUN_180066720
// size=435 thunk=false
// signature: undefined FUN_180066720()
// status: ok


undefined8 * FUN_180066720(undefined8 *param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *_Dst;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *_Src;
  
  lVar2 = *(longlong *)(param_3 + 4);
  _Src = param_3;
  if (7 < *(ulonglong *)(param_3 + 6)) {
    _Src = *(uint **)param_3;
  }
  if (((lVar2 == 0) ||
      (((3 < lVar2 * 2 && ((*_Src & 0xffffffdf) - 0x3a0041 < 0x1a)) || ((short)*_Src == 0x5c)))) ||
     ((short)*_Src == 0x2f)) {
    FUN_18020e540(param_1,param_2,param_3,param_4,1);
    FUN_1800654d0(param_1,param_3);
    return param_1;
  }
  lVar3 = *(longlong *)(param_2 + 4);
  if (7 < *(ulonglong *)(param_2 + 6)) {
    param_2 = *(uint **)param_2;
  }
  if (lVar3 == 2) {
    if (0x19 < (*param_2 & 0xffffffdf) - 0x3a0041) {
LAB_180066818:
      sVar1 = *(short *)(lVar3 * 2 + -2 + (longlong)param_2);
      if ((sVar1 != 0x5c) && (sVar1 != 0x2f)) {
        lVar6 = 1;
        goto LAB_1800667d3;
      }
    }
  }
  else if (lVar3 != 0) goto LAB_180066818;
  lVar6 = 0;
LAB_1800667d3:
  uVar5 = lVar6 + lVar3 + lVar2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  if ((ulonglong)param_1[3] < uVar5) {
    FUN_18021a2e0(param_1,uVar5 - param_1[2],param_3,param_4,1);
  }
  else {
    param_1[2] = uVar5;
  }
  puVar4 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  memcpy(puVar4,param_2,lVar3 * 2);
  _Dst = (undefined2 *)(lVar3 * 2 + (longlong)puVar4);
  if ((char)lVar6 != '\0') {
    *_Dst = 0x5c;
    _Dst = _Dst + 1;
  }
  memcpy(_Dst,_Src,lVar2 * 2);
  param_1[2] = uVar5;
  puVar4 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  *(undefined2 *)((longlong)puVar4 + uVar5 * 2) = 0;
  return param_1;
}


)B180066720",
    "3e554d4652d164505753012bed4716311d77df75e37fcc8e9fd33f27218c70fd",
    R"F180066720C(FUN_1800654d0
FUN_18020e540
FUN_18021a2e0)F180066720C",
    R"F180066720D(LAB_1800667d3
LAB_180066818)F180066720D",
    R"F180066720T()F180066720T",
    R"F180066720F(21: if (7 < *(ulonglong *)(param_3 + 6)) {
24: if (((lVar2 == 0) ||
29: return param_1;
32: if (7 < *(ulonglong *)(param_2 + 6)) {
35: if (lVar3 == 2) {
36: if (0x19 < (*param_2 & 0xffffffdf) - 0x3a0041) {
37: LAB_180066818:
39: if ((sVar1 != 0x5c) && (sVar1 != 0x2f)) {
41: goto LAB_1800667d3;
45: else if (lVar3 != 0) goto LAB_180066818;
47: LAB_1800667d3:
54: if ((ulonglong)param_1[3] < uVar5) {
57: else {
61: if (7 < (ulonglong)param_1[3]) {
66: if ((char)lVar6 != '\0') {
73: if (7 < (ulonglong)param_1[3]) {
77: return param_1;)F180066720F",
    R"F180066720U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1800667d3.
TODO: recover the declaration, type and value for global/data reference LAB_180066818.)F180066720U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180066720() noexcept {
    return kFunction_0x180066720;
}

// 0x1800668e0 FUN_1800668e0
// source: re/dump/decompile/0x1800668e0_FUN_1800668e0.c
// size: 18 bytes; thunk: false
// body sha256: 8dbfd5862a79abf60b60166f712806ae124f1cb587bf8e4bd02ae13ae953d586
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800668e0{
    "0x1800668e0",
    "FUN_1800668e0",
    R"F1800668e0S(undefined FUN_1800668e0())F1800668e0S",
    R"B1800668e0(// 0x1800668e0  FUN_1800668e0
// size=18 thunk=false
// signature: undefined FUN_1800668e0()
// status: ok


void FUN_1800668e0(void)

{
  FUN_18021e290();
  return;
}


)B1800668e0",
    "8dbfd5862a79abf60b60166f712806ae124f1cb587bf8e4bd02ae13ae953d586",
    R"F1800668e0C(FUN_18021e290)F1800668e0C",
    R"F1800668e0D()F1800668e0D",
    R"F1800668e0T()F1800668e0T",
    R"F1800668e0F(11: return;)F1800668e0F",
    R"F1800668e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800668e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800668e0() noexcept {
    return kFunction_0x1800668e0;
}

// 0x180066900 FUN_180066900
// source: re/dump/decompile/0x180066900_FUN_180066900.c
// size: 27 bytes; thunk: false
// body sha256: c6f3fc09430d615ba7ceef82ffd667d930f9a173fc4858a0c0b14271e55a7e43
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180066900{
    "0x180066900",
    "FUN_180066900",
    R"F180066900S(undefined FUN_180066900())F180066900S",
    R"B180066900(// 0x180066900  FUN_180066900
// size=27 thunk=false
// signature: undefined FUN_180066900()
// status: ok


void FUN_180066900(void)

{
  FUN_18021e290();
  return;
}


)B180066900",
    "c6f3fc09430d615ba7ceef82ffd667d930f9a173fc4858a0c0b14271e55a7e43",
    R"F180066900C(FUN_18021e290)F180066900C",
    R"F180066900D()F180066900D",
    R"F180066900T()F180066900T",
    R"F180066900F(11: return;)F180066900F",
    R"F180066900U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180066900U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180066900() noexcept {
    return kFunction_0x180066900;
}

// 0x180066920 FUN_180066920
// source: re/dump/decompile/0x180066920_FUN_180066920.c
// size: 321 bytes; thunk: false
// body sha256: 6f5ec308f07fb577fe18ba042b181b846e856e9eaa67aa7a7f007bc80ae12215
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180066920{
    "0x180066920",
    "FUN_180066920",
    R"F180066920S(undefined FUN_180066920())F180066920S",
    R"B180066920(// 0x180066920  FUN_180066920
// size=321 thunk=false
// signature: undefined FUN_180066920()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180066920(short *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  undefined4 uVar4;
  ulonglong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong *local_20;
  undefined8 *local_18;
  
  uVar4 = 0;
  psVar2 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar2 = *(short **)param_1;
  }
  psVar3 = psVar2 + *(longlong *)(param_1 + 8);
  local_18 = param_2;
  psVar1 = (short *)FUN_180065240(psVar2);
  if ((psVar2 == psVar1) && (psVar1 != psVar3)) {
    do {
      if ((*psVar1 != 0x5c) && (*psVar1 != 0x2f)) break;
      psVar1 = psVar1 + 1;
    } while (psVar1 != psVar3);
    if ((psVar2 == psVar1) && (psVar1 != psVar3)) {
      while (*psVar1 != 0x5c) {
        if ((*psVar1 == 0x2f) || (psVar1 = psVar1 + 1, psVar1 == psVar3)) break;
      }
    }
  }
  local_20 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_180211510(&local_40,psVar2,(longlong)psVar1 - (longlong)psVar2 >> 1,param_4,uVar4);
  psVar2 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar2 = *(short **)param_1;
  }
  *param_2 = psVar2;
  local_20 = param_2 + 1;
  *local_20 = local_40;
  param_2[2] = uStack_38;
  *(undefined4 *)(param_2 + 3) = (undefined4)local_30;
  *(undefined4 *)((longlong)param_2 + 0x1c) = local_30._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)uStack_28;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_28._4_4_;
  local_30 = _DAT_1803814a0;
  uStack_28 = _UNK_1803814a8;
  local_40 = local_40 & 0xffffffffffff0000;
  param_2[5] = param_1;
  FUN_18021e290(&local_40);
  return param_2;
}


)B180066920",
    "6f5ec308f07fb577fe18ba042b181b846e856e9eaa67aa7a7f007bc80ae12215",
    R"F180066920C(FUN_180065240
FUN_180211510
FUN_18021e290)F180066920C",
    R"F180066920D()F180066920D",
    R"F180066920T()F180066920T",
    R"F180066920F(25: if (7 < *(ulonglong *)(param_1 + 0xc)) {
31: if ((psVar2 == psVar1) && (psVar1 != psVar3)) {
32: do {
33: if ((*psVar1 != 0x5c) && (*psVar1 != 0x2f)) break;
36: if ((psVar2 == psVar1) && (psVar1 != psVar3)) {
37: while (*psVar1 != 0x5c) {
38: if ((*psVar1 == 0x2f) || (psVar1 = psVar1 + 1, psVar1 == psVar3)) break;
49: if (7 < *(ulonglong *)(param_1 + 0xc)) {
65: return param_2;)F180066920F",
    R"F180066920U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180066920U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180066920() noexcept {
    return kFunction_0x180066920;
}

// 0x180066a70 FUN_180066a70
// source: re/dump/decompile/0x180066a70_FUN_180066a70.c
// size: 90 bytes; thunk: false
// body sha256: 50a116a8652ee431bf7ecfc52790386a5d32fce9a294f9dc0893c3c0ce1b8123
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180066a70{
    "0x180066a70",
    "FUN_180066a70",
    R"F180066a70S(undefined FUN_180066a70())F180066a70S",
    R"B180066a70(// 0x180066a70  FUN_180066a70
// size=90 thunk=false
// signature: undefined FUN_180066a70()
// status: ok


longlong * FUN_180066a70(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  *param_2 = (longlong)puVar1 + param_1[2] * 2;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 7;
  *(undefined2 *)(param_2 + 1) = 0;
  param_2[5] = (longlong)param_1;
  return param_2;
}


)B180066a70",
    "50a116a8652ee431bf7ecfc52790386a5d32fce9a294f9dc0893c3c0ce1b8123",
    R"F180066a70C()F180066a70C",
    R"F180066a70D()F180066a70D",
    R"F180066a70T()F180066a70T",
    R"F180066a70F(13: if (7 < (ulonglong)param_1[3]) {
23: return param_2;)F180066a70F",
    R"F180066a70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180066a70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180066a70() noexcept {
    return kFunction_0x180066a70;
}

// 0x180066ad0 FUN_180066ad0
// source: re/dump/decompile/0x180066ad0_FUN_180066ad0.c
// size: 178 bytes; thunk: false
// body sha256: 68a5f11a653c6505f82d8fc5a8fbbf39340566f5e126cc7d7c2f16da9a4bb9f8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180066ad0{
    "0x180066ad0",
    "FUN_180066ad0",
    R"F180066ad0S(undefined FUN_180066ad0())F180066ad0S",
    R"B180066ad0(// 0x180066ad0  FUN_180066ad0
// size=178 thunk=false
// signature: undefined FUN_180066ad0()
// status: ok


undefined8 * FUN_180066ad0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  size_t sVar1;
  char *_Str;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_1800133b0(local_28,&local_28);
  *param_1 = vftable_std_filesystem_filesystem_error;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 7;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 7;
  *(undefined2 *)(param_1 + 9) = 0;
  _Str = "Unknown exception";
  if ((char *)param_1[1] != (char *)0x0) {
    _Str = (char *)param_1[1];
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  sVar1 = strlen(_Str);
  FUN_18001d080(param_1 + 0xd,_Str,sVar1);
  return param_1;
}


)B180066ad0",
    "68a5f11a653c6505f82d8fc5a8fbbf39340566f5e126cc7d7c2f16da9a4bb9f8",
    R"F180066ad0C(FUN_1800133b0
FUN_18001d080)F180066ad0C",
    R"F180066ad0D()F180066ad0D",
    R"F180066ad0T("Unknown exception")F180066ad0T",
    R"F180066ad0F(34: if ((char *)param_1[1] != (char *)0x0) {
43: return param_1;)F180066ad0F",
    R"F180066ad0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180066ad0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180066ad0() noexcept {
    return kFunction_0x180066ad0;
}

// 0x180066b90 FUN_180066b90
// source: re/dump/decompile/0x180066b90_FUN_180066b90.c
// size: 231 bytes; thunk: false
// body sha256: 7a914f71717f99a1202978e298ef21e141c66f3cd9deacc25753ef0c018da964
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180066b90{
    "0x180066b90",
    "FUN_180066b90",
    R"F180066b90S(undefined FUN_180066b90())F180066b90S",
    R"B180066b90(// 0x180066b90  FUN_180066b90
// size=231 thunk=false
// signature: undefined FUN_180066b90()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_180066b90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char *_Str;
  char *local_48;
  size_t sStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_48 = (char *)*param_4;
  sStack_40 = param_4[1];
  FUN_1800133b0(param_1,&local_48,param_2);
  *param_1 = vftable_std_filesystem_filesystem_error;
  FUN_18020e540(param_1 + 5,param_3);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 7;
  *(undefined2 *)(param_1 + 9) = 0;
  uStack_30 = 0;
  local_28 = _DAT_1803814a0;
  uStack_20 = _UNK_1803814a8;
  local_38 = 0;
  _Str = "Unknown exception";
  if ((char *)param_1[1] != (char *)0x0) {
    _Str = (char *)param_1[1];
  }
  sStack_40 = strlen(_Str);
  local_48 = _Str;
  FUN_180066c90(param_1 + 0xd,&local_48,param_3,&local_38);
  FUN_18021e290(&local_38);
  return param_1;
}


)B180066b90",
    "7a914f71717f99a1202978e298ef21e141c66f3cd9deacc25753ef0c018da964",
    R"F180066b90C(FUN_1800133b0
FUN_180066c90
FUN_18020e540
FUN_18021e290)F180066b90C",
    R"F180066b90D()F180066b90D",
    R"F180066b90T("Unknown exception")F180066b90T",
    R"F180066b90F(36: if ((char *)param_1[1] != (char *)0x0) {
43: return param_1;)F180066b90F",
    R"F180066b90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180066b90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180066b90() noexcept {
    return kFunction_0x180066b90;
}

// 0x180066c80 std_filesystem_filesystem_error_vfunc01
// source: re/dump/decompile/0x180066c80_std_filesystem_filesystem_error_vfunc01.c
// size: 15 bytes; thunk: false
// body sha256: f9f1348b0397fe2437c82e8456eab334000ca6e7d2d00791eac2cc9770690df9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180066c80{
    "0x180066c80",
    "std_filesystem_filesystem_error_vfunc01",
    R"F180066c80S(undefined std_filesystem_filesystem_error_vfunc01())F180066c80S",
    R"B180066c80(// 0x180066c80  std_filesystem_filesystem_error_vfunc01
// size=15 thunk=false
// signature: undefined std_filesystem_filesystem_error_vfunc01()
// status: ok


longlong * std_filesystem_filesystem_error_vfunc01(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x68);
  if (0xf < *(ulonglong *)(param_1 + 0x80)) {
    plVar1 = (longlong *)*plVar1;
  }
  return plVar1;
}


)B180066c80",
    "f9f1348b0397fe2437c82e8456eab334000ca6e7d2d00791eac2cc9770690df9",
    R"F180066c80C()F180066c80C",
    R"F180066c80D()F180066c80D",
    R"F180066c80T()F180066c80T",
    R"F180066c80F(13: if (0xf < *(ulonglong *)(param_1 + 0x80)) {
16: return plVar1;)F180066c80F",
    R"F180066c80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180066c80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180066c80() noexcept {
    return kFunction_0x180066c80;
}

// 0x180066c90 FUN_180066c90
// source: re/dump/decompile/0x180066c90_FUN_180066c90.c
// size: 473 bytes; thunk: false
// body sha256: 68d9fdcabfc00b3f6a9fade37971d60f6d2fb431c0dd9337face58c99afd597f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180066c90{
    "0x180066c90",
    "FUN_180066c90",
    R"F180066c90S(undefined FUN_180066c90())F180066c90S",
    R"B180066c90(// 0x180066c90  FUN_180066c90
// size=473 thunk=false
// signature: undefined FUN_180066c90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_180066c90(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 ***local_70 [2];
  longlong local_60;
  ulonglong local_58;
  undefined8 ***local_50 [2];
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_98 = 1;
  local_78 = param_1;
  uVar2 = FUN_1802d75e4();
  local_88 = param_3;
  if (7 < (ulonglong)param_3[3]) {
    local_88 = (undefined8 *)*param_3;
  }
  local_80 = param_3[2];
  FUN_180201d80(local_50,uVar2,&local_88);
  local_88 = param_4;
  if (7 < (ulonglong)param_4[3]) {
    local_88 = (undefined8 *)*param_4;
  }
  local_80 = param_4[2];
  FUN_180201d80(local_70,uVar2,&local_88);
  lVar1 = param_2[1];
  lVar3 = 8;
  if (local_60 == 0) {
    lVar3 = 4;
  }
  uVar4 = lVar3 + lVar1 + local_40 + local_60;
  if ((ulonglong)param_1[3] < uVar4) {
    lVar3 = param_1[2];
    FUN_18021aa80(param_1,uVar4 - lVar3);
    param_1[2] = lVar3;
  }
  FUN_18021aef0(param_1,*param_2,lVar1);
  FUN_18021aef0(param_1,&DAT_180345b28,3);
  ppppuVar5 = local_50;
  if (0xf < local_38) {
    ppppuVar5 = (undefined8 ****)local_50[0];
  }
  FUN_18021aef0(param_1,ppppuVar5,local_40);
  if (local_60 != 0) {
    FUN_18021aef0(param_1,&DAT_180345b2c,4);
    ppppuVar5 = local_70;
    if (0xf < local_58) {
      ppppuVar5 = (undefined8 ****)local_70[0];
    }
    FUN_18021aef0(param_1,ppppuVar5,local_60);
  }
  uVar4 = param_1[2];
  if (uVar4 < (ulonglong)param_1[3]) {
    param_1[2] = uVar4 + 1;
    if ((ulonglong)param_1[3] < 0x10) {
      *(undefined2 *)(uVar4 + (longlong)param_1) = 0x22;
    }
    else {
      *(undefined2 *)(uVar4 + *param_1) = 0x22;
    }
  }
  else {
    FUN_18021abd0(param_1);
  }
  FUN_18020e450(local_70);
  FUN_18020e450(local_50);
  return param_1;
}


)B180066c90",
    "68d9fdcabfc00b3f6a9fade37971d60f6d2fb431c0dd9337face58c99afd597f",
    R"F180066c90C(FUN_180201d80
FUN_18020e450
FUN_18021aa80
FUN_18021abd0
FUN_18021aef0
FUN_1802d75e4)F180066c90C",
    R"F180066c90D(DAT_180345b28
DAT_180345b2c
DAT_1803da4c0)F180066c90D",
    R"F180066c90T()F180066c90T",
    R"F180066c90F(41: if (7 < (ulonglong)param_3[3]) {
47: if (7 < (ulonglong)param_4[3]) {
54: if (local_60 == 0) {
58: if ((ulonglong)param_1[3] < uVar4) {
66: if (0xf < local_38) {
70: if (local_60 != 0) {
73: if (0xf < local_58) {
79: if (uVar4 < (ulonglong)param_1[3]) {
81: if ((ulonglong)param_1[3] < 0x10) {
84: else {
88: else {
93: return param_1;)F180066c90F",
    R"F180066c90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180345b28.
TODO: recover the declaration, type and value for global/data reference DAT_180345b2c.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180066c90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180066c90() noexcept {
    return kFunction_0x180066c90;
}

// 0x180066e70 std_filesystem_filesystem_error_vfunc00
// source: re/dump/decompile/0x180066e70_std_filesystem_filesystem_error_vfunc00.c
// size: 112 bytes; thunk: false
// body sha256: 781b44a59e20854d534e41cb4476775a786998b48ebfb2c89ef2bac42adef482
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180066e70{
    "0x180066e70",
    "std_filesystem_filesystem_error_vfunc00",
    R"F180066e70S(undefined std_filesystem_filesystem_error_vfunc00())F180066e70S",
    R"B180066e70(// 0x180066e70  std_filesystem_filesystem_error_vfunc00
// size=112 thunk=false
// signature: undefined std_filesystem_filesystem_error_vfunc00()
// status: ok


undefined8 * std_filesystem_filesystem_error_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  FUN_18020e450(param_1 + 0xd);
  FUN_18021e290();
  FUN_18021e290();
  *param_1 = vftable_std_exception;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B180066e70",
    "781b44a59e20854d534e41cb4476775a786998b48ebfb2c89ef2bac42adef482",
    R"F180066e70C(FUN_18020e450
FUN_18021e290)F180066e70C",
    R"F180066e70D()F180066e70D",
    R"F180066e70T()F180066e70T",
    R"F180066e70F(15: if ((param_2 & 1) != 0) {
18: return param_1;)F180066e70F",
    R"F180066e70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180066e70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180066e70() noexcept {
    return kFunction_0x180066e70;
}

// 0x180066ee0 FUN_180066ee0
// source: re/dump/decompile/0x180066ee0_FUN_180066ee0.c
// size: 80 bytes; thunk: false
// body sha256: 6de1bd46b3deaaa5e605acdbfb47ba341b5c027cfe31163f2b7735949a30a1b9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180066ee0{
    "0x180066ee0",
    "FUN_180066ee0",
    R"F180066ee0S(undefined FUN_180066ee0())F180066ee0S",
    R"B180066ee0(// 0x180066ee0  FUN_180066ee0
// size=80 thunk=false
// signature: undefined FUN_180066ee0()
// status: ok


void FUN_180066ee0(undefined8 *param_1)

{
  FUN_18020e450(param_1 + 0xd);
  FUN_18021e290();
  FUN_18021e290();
  *param_1 = vftable_std_exception;
  __std_exception_destroy(param_1 + 1);
  return;
}


)B180066ee0",
    "6de1bd46b3deaaa5e605acdbfb47ba341b5c027cfe31163f2b7735949a30a1b9",
    R"F180066ee0C(FUN_18020e450
FUN_18021e290)F180066ee0C",
    R"F180066ee0D()F180066ee0D",
    R"F180066ee0T()F180066ee0T",
    R"F180066ee0F(15: return;)F180066ee0F",
    R"F180066ee0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180066ee0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180066ee0() noexcept {
    return kFunction_0x180066ee0;
}

// 0x180066f30 FUN_180066f30
// source: re/dump/decompile/0x180066f30_FUN_180066f30.c
// size: 88 bytes; thunk: false
// body sha256: 303bb023090416d3be09a3acf0b2b18fb137dc94924d4d93b65c13fd8ca11068
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180066f30{
    "0x180066f30",
    "FUN_180066f30",
    R"F180066f30S(undefined FUN_180066f30())F180066f30S",
    R"B180066f30(// 0x180066f30  FUN_180066f30
// size=88 thunk=false
// signature: undefined FUN_180066f30()
// status: ok


void FUN_180066f30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [32];
  undefined1 local_a8 [168];
  
  puVar3 = (undefined8 *)FUN_1800138e0(local_d8);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  FUN_18001d010(local_c8,"directory_iterator::operator++");
  local_e8 = uVar1;
  uStack_e0 = uVar2;
  FUN_180066ad0(local_a8,local_c8,&local_e8);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_a8,(ThrowInfo *)&DAT_1803d5ab8);
}


)B180066f30",
    "303bb023090416d3be09a3acf0b2b18fb137dc94924d4d93b65c13fd8ca11068",
    R"F180066f30C(FUN_1800138e0
FUN_18001d010
FUN_180066ad0)F180066f30C",
    R"F180066f30D(DAT_1803d5ab8)F180066f30D",
    R"F180066f30T("directory_iterator::operator++")F180066f30T",
    R"F180066f30F(linear body (no explicit branch keyword found))F180066f30F",
    R"F180066f30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803d5ab8.)F180066f30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180066f30() noexcept {
    return kFunction_0x180066f30;
}

// 0x180066f90 FUN_180066f90
// source: re/dump/decompile/0x180066f90_FUN_180066f90.c
// size: 166 bytes; thunk: false
// body sha256: f1bf21fe2c484dadfdcb585ffac5f36f28b0dd6f3fdd78a5993308912709536f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180066f90{
    "0x180066f90",
    "FUN_180066f90",
    R"F180066f90S(undefined FUN_180066f90())F180066f90S",
    R"B180066f90(// 0x180066f90  FUN_180066f90
// size=166 thunk=false
// signature: undefined FUN_180066f90()
// status: ok


undefined8 * FUN_180066f90(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = vftable_std_runtime_error;
  *param_1 = vftable_std__System_error;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *param_1 = vftable_std_system_error;
  *param_1 = vftable_std_filesystem_filesystem_error;
  FUN_18020e540(param_1 + 5,param_2 + 0x28);
  FUN_18020e540(param_1 + 9,param_2 + 0x48);
  FUN_18016d4c0(param_1 + 0xd,param_2 + 0x68);
  return param_1;
}


)B180066f90",
    "f1bf21fe2c484dadfdcb585ffac5f36f28b0dd6f3fdd78a5993308912709536f",
    R"F180066f90C(FUN_18016d4c0
FUN_18020e540)F180066f90C",
    R"F180066f90D()F180066f90D",
    R"F180066f90T()F180066f90T",
    R"F180066f90F(32: return param_1;)F180066f90F",
    R"F180066f90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180066f90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180066f90() noexcept {
    return kFunction_0x180066f90;
}

// 0x180067040 FUN_180067040
// source: re/dump/decompile/0x180067040_FUN_180067040.c
// size: 95 bytes; thunk: false
// body sha256: 4391978b04438854a3ab60de5743b477996a7a38e7cec1535476ad24cd6396e8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180067040{
    "0x180067040",
    "FUN_180067040",
    R"F180067040S(undefined FUN_180067040())F180067040S",
    R"B180067040(// 0x180067040  FUN_180067040
// size=95 thunk=false
// signature: undefined FUN_180067040()
// status: ok


void FUN_180067040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [32];
  undefined1 local_a8 [160];
  
  puVar3 = (undefined8 *)FUN_1800138e0(local_d8,param_2,param_3,param_1);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  FUN_18001d010(local_c8,param_1);
  local_e8 = uVar1;
  uStack_e0 = uVar2;
  FUN_180066b90(local_a8,local_c8,param_3,&local_e8);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_a8,(ThrowInfo *)&DAT_1803d5ab8);
}


)B180067040",
    "4391978b04438854a3ab60de5743b477996a7a38e7cec1535476ad24cd6396e8",
    R"F180067040C(FUN_1800138e0
FUN_18001d010
FUN_180066b90)F180067040C",
    R"F180067040D(DAT_1803d5ab8)F180067040D",
    R"F180067040T()F180067040T",
    R"F180067040F(linear body (no explicit branch keyword found))F180067040F",
    R"F180067040U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803d5ab8.)F180067040U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180067040() noexcept {
    return kFunction_0x180067040;
}

// 0x1800670a0 FUN_1800670a0
// source: re/dump/decompile/0x1800670a0_FUN_1800670a0.c
// size: 78 bytes; thunk: false
// body sha256: 3e53dd4abbf19c5741da5387758e7bce8500b1ca6f2d38d25cb1211dc1aa32bb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800670a0{
    "0x1800670a0",
    "FUN_1800670a0",
    R"F1800670a0S(undefined FUN_1800670a0())F1800670a0S",
    R"B1800670a0(// 0x1800670a0  FUN_1800670a0
// size=78 thunk=false
// signature: undefined FUN_1800670a0()
// status: ok


void FUN_1800670a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [168];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_18001d010(local_c8,"current_path()");
  local_d8 = uVar1;
  uStack_d0 = uVar2;
  FUN_180066ad0(local_a8,local_c8,&local_d8);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_a8,(ThrowInfo *)&DAT_1803d5ab8);
}


)B1800670a0",
    "3e53dd4abbf19c5741da5387758e7bce8500b1ca6f2d38d25cb1211dc1aa32bb",
    R"F1800670a0C(FUN_18001d010
FUN_180066ad0)F1800670a0C",
    R"F1800670a0D(DAT_1803d5ab8)F1800670a0D",
    R"F1800670a0T("current_path()")F1800670a0T",
    R"F1800670a0F(linear body (no explicit branch keyword found))F1800670a0F",
    R"F1800670a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803d5ab8.)F1800670a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800670a0() noexcept {
    return kFunction_0x1800670a0;
}

// 0x1800670f0 FUN_1800670f0
// source: re/dump/decompile/0x1800670f0_FUN_1800670f0.c
// size: 82 bytes; thunk: false
// body sha256: e5a9430675b13996141a38a474b1d9c64a5d9ed7909d99d835e3d43b6306971c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800670f0{
    "0x1800670f0",
    "FUN_1800670f0",
    R"F1800670f0S(undefined FUN_1800670f0())F1800670f0S",
    R"B1800670f0(// 0x1800670f0  FUN_1800670f0
// size=82 thunk=false
// signature: undefined FUN_1800670f0()
// status: ok


void FUN_1800670f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [160];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_18001d010(local_c8,param_1);
  local_d8 = uVar1;
  uStack_d0 = uVar2;
  FUN_180066b90(local_a8,local_c8,param_3,&local_d8);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_a8,(ThrowInfo *)&DAT_1803d5ab8);
}


)B1800670f0",
    "e5a9430675b13996141a38a474b1d9c64a5d9ed7909d99d835e3d43b6306971c",
    R"F1800670f0C(FUN_18001d010
FUN_180066b90)F1800670f0C",
    R"F1800670f0D(DAT_1803d5ab8)F1800670f0D",
    R"F1800670f0T()F1800670f0T",
    R"F1800670f0F(linear body (no explicit branch keyword found))F1800670f0F",
    R"F1800670f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803d5ab8.)F1800670f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800670f0() noexcept {
    return kFunction_0x1800670f0;
}

// 0x180067150 FUN_180067150
// source: re/dump/decompile/0x180067150_FUN_180067150.c
// size: 361 bytes; thunk: false
// body sha256: 17d7b909f7040d4e40c36da8c5ac8dff9037573ab0dcca37035dbc2a14ee75e4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180067150{
    "0x180067150",
    "FUN_180067150",
    R"F180067150S(undefined FUN_180067150())F180067150S",
    R"B180067150(// 0x180067150  FUN_180067150
// size=361 thunk=false
// signature: undefined FUN_180067150()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * FUN_180067150(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  uint local_28;
  int local_24;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0xffff;
  if (((byte)*(uint *)(param_1 + 0x1c) & 3) == 3) {
    param_2[2] = 0;
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar2 = 0x16d;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0x1ff;
    }
    param_2[1] = uVar2;
    if ((uVar1 >> 10 & 1) != 0) {
      if (*(int *)(param_1 + 0x14) == -0x5ffffff4) {
LAB_1800671b6:
        uVar1 = 4;
        goto LAB_1800672a1;
      }
      if (*(int *)(param_1 + 0x14) == -0x5ffffffd) {
LAB_1800671c7:
        uVar1 = 10;
        goto LAB_1800672a1;
      }
    }
    if ((uVar1 & 0x10) == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = 3;
    }
    goto LAB_1800672a1;
  }
  if ((*(uint *)(param_1 + 0x1c) & 2) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x10);
  }
  plVar3 = (longlong *)(param_1 + 0x20);
  if (7 < *(ulonglong *)(param_1 + 0x38)) {
    plVar3 = (longlong *)*plVar3;
  }
  uVar1 = FUN_1802d7a0c(plVar3,local_38,3,uVar4);
  param_2[2] = uVar1;
  if (uVar1 == 0) {
    uVar1 = 0x16d;
    if ((local_28 & 1) == 0) {
      uVar1 = 0x1ff;
    }
    param_2[1] = uVar1;
    if ((local_28 >> 10 & 1) != 0) {
      if (local_24 == -0x5ffffff4) goto LAB_1800671b6;
      if (local_24 == -0x5ffffffd) goto LAB_1800671c7;
    }
    uVar1 = (local_28 & 0x10 | 0x20) >> 4;
    goto LAB_1800672a1;
  }
  param_2[1] = 0xffff;
  if (uVar1 < 0x41) {
    if (((uVar1 != 0x40) && (uVar1 != 2)) && (uVar1 != 3)) {
      bVar5 = uVar1 == 0x35;
LAB_180067293:
      if (!bVar5) {
        uVar1 = 0;
        goto LAB_1800672a1;
      }
    }
  }
  else if ((uVar1 != 0x7b) && (uVar1 != 0xa1)) {
    bVar5 = uVar1 == 0x10b;
    goto LAB_180067293;
  }
  uVar1 = 1;
LAB_1800672a1:
  *param_2 = uVar1;
  return param_2;
}


)B180067150",
    "17d7b909f7040d4e40c36da8c5ac8dff9037573ab0dcca37035dbc2a14ee75e4",
    R"F180067150C(FUN_1802d7a0c)F180067150C",
    R"F180067150D(LAB_1800671b6
LAB_1800671c7
LAB_180067293
LAB_1800672a1
DAT_1803da4c0)F180067150D",
    R"F180067150T()F180067150T",
    R"F180067150F(26: if (((byte)*(uint *)(param_1 + 0x1c) & 3) == 3) {
30: if ((uVar1 & 1) == 0) {
34: if ((uVar1 >> 10 & 1) != 0) {
35: if (*(int *)(param_1 + 0x14) == -0x5ffffff4) {
36: LAB_1800671b6:
38: goto LAB_1800672a1;
40: if (*(int *)(param_1 + 0x14) == -0x5ffffffd) {
41: LAB_1800671c7:
43: goto LAB_1800672a1;
46: if ((uVar1 & 0x10) == 0) {
49: else {
52: goto LAB_1800672a1;
54: if ((*(uint *)(param_1 + 0x1c) & 2) == 0) {
57: else {
61: if (7 < *(ulonglong *)(param_1 + 0x38)) {
66: if (uVar1 == 0) {
68: if ((local_28 & 1) == 0) {
72: if ((local_28 >> 10 & 1) != 0) {
73: if (local_24 == -0x5ffffff4) goto LAB_1800671b6;
74: if (local_24 == -0x5ffffffd) goto LAB_1800671c7;
77: goto LAB_1800672a1;
80: if (uVar1 < 0x41) {
81: if (((uVar1 != 0x40) && (uVar1 != 2)) && (uVar1 != 3)) {
83: LAB_180067293:
84: if (!bVar5) {
86: goto LAB_1800672a1;
90: else if ((uVar1 != 0x7b) && (uVar1 != 0xa1)) {
92: goto LAB_180067293;
95: LAB_1800672a1:
97: return param_2;)F180067150F",
    R"F180067150U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1800671b6.
TODO: recover the declaration, type and value for global/data reference LAB_1800671c7.
TODO: recover the declaration, type and value for global/data reference LAB_180067293.
TODO: recover the declaration, type and value for global/data reference LAB_1800672a1.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180067150U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180067150() noexcept {
    return kFunction_0x180067150;
}

// 0x1800672c0 FUN_1800672c0
// source: re/dump/decompile/0x1800672c0_FUN_1800672c0.c
// size: 399 bytes; thunk: false
// body sha256: 33987df0fc3976484040bec21bad4b57ca6e9615e6f1531ca476ffbe6195c78e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800672c0{
    "0x1800672c0",
    "FUN_1800672c0",
    R"F1800672c0S(undefined FUN_1800672c0())F1800672c0S",
    R"B1800672c0(// 0x1800672c0  FUN_1800672c0
// size=399 thunk=false
// signature: undefined FUN_1800672c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1800672c0(wchar_t *param_1,uint param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  int iVar2;
  size_t sVar3;
  uint *puVar4;
  wchar_t *_Str;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50 [2];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  local_78 = 0;
  _Str = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    _Str = *(wchar_t **)param_1;
  }
  sVar3 = wcslen(_Str);
  if ((sVar3 == 0) || (sVar3 != *(size_t *)(param_1 + 8))) {
    iVar2 = 2;
  }
  else {
    FUN_18020e540(local_40,param_1);
    local_50[0] = &local_70;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 0;
    FUN_180211510(&local_70,&DAT_180345b50,1);
    local_78 = 0;
    FUN_1800654d0(param_1,&local_70);
    FUN_18021e290(&local_70);
    if (7 < *(ulonglong *)(param_1 + 0xc)) {
      param_1 = *(wchar_t **)param_1;
    }
    iVar2 = FUN_1802d7920(param_1,param_3,param_4);
    if (iVar2 == 0) {
      uVar1 = *param_3;
      do {
        if ((*(short *)(param_4 + 0x2c) != 0x2e) ||
           ((*(short *)(param_4 + 0x2e) != 0 &&
            ((*(short *)(param_4 + 0x2e) != 0x2e || (*(short *)(param_4 + 0x30) != 0)))))) {
          iVar2 = 0;
          break;
        }
        iVar2 = FUN_1802d78e0(uVar1,param_4);
      } while (iVar2 == 0);
    }
    else if (iVar2 == 5) {
      if ((param_2 & 2) != 0) {
        iVar2 = 0x12;
      }
    }
    else if ((iVar2 == 2) && (puVar4 = (uint *)FUN_180067c80(local_50,local_40), 1 < *puVar4)) {
      iVar2 = 0x12;
    }
    FUN_18021e290(local_40);
  }
  return iVar2;
}


)B1800672c0",
    "33987df0fc3976484040bec21bad4b57ca6e9615e6f1531ca476ffbe6195c78e",
    R"F1800672c0C(FUN_1800654d0
FUN_180067c80
FUN_18020e540
FUN_180211510
FUN_18021e290
FUN_1802d78e0
FUN_1802d7920)F1800672c0C",
    R"F1800672c0D(DAT_180345b50
DAT_1803da4c0)F1800672c0D",
    R"F1800672c0T()F1800672c0T",
    R"F1800672c0F(30: if (7 < *(ulonglong *)(param_1 + 0xc)) {
34: if ((sVar3 == 0) || (sVar3 != *(size_t *)(param_1 + 8))) {
37: else {
48: if (7 < *(ulonglong *)(param_1 + 0xc)) {
52: if (iVar2 == 0) {
54: do {
55: if ((*(short *)(param_4 + 0x2c) != 0x2e) ||
59: break;
64: else if (iVar2 == 5) {
65: if ((param_2 & 2) != 0) {
69: else if ((iVar2 == 2) && (puVar4 = (uint *)FUN_180067c80(local_50,local_40), 1 < *puVar4)) {
74: return iVar2;)F1800672c0F",
    R"F1800672c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180345b50.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F1800672c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800672c0() noexcept {
    return kFunction_0x1800672c0;
}

// 0x180067450 FUN_180067450
// source: re/dump/decompile/0x180067450_FUN_180067450.c
// size: 364 bytes; thunk: false
// body sha256: 895a0deb6575a360931a40420fca0116e3bdf389b2145e476e49a7397559fa09
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180067450{
    "0x180067450",
    "FUN_180067450",
    R"F180067450S(undefined FUN_180067450())F180067450S",
    R"B180067450(// 0x180067450  FUN_180067450
// size=364 thunk=false
// signature: undefined FUN_180067450()
// status: ok


void FUN_180067450(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  short sVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short *psVar5;
  size_t sVar6;
  short *psVar7;
  undefined8 *puVar8;
  short *psVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *local_10;
  
  uVar11 = 0;
  *(uint *)(param_1 + 2) = *param_2;
  *(uint *)((longlong)param_1 + 0x14) = param_2[9];
  *(undefined4 *)((longlong)param_1 + 0x1c) = 6;
  if ((*param_2 & 0x400) == 0) {
    param_1[1] = CONCAT44(param_2[7],param_2[8]);
    *param_1 = *(undefined8 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0x2e;
  }
  puVar1 = param_1 + 4;
  sVar6 = wcslen((wchar_t *)(param_2 + 0xb));
  local_10 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  local_18 = 0;
  FUN_180211510(&local_30,param_2 + 0xb,sVar6,param_4,uVar11);
  uVar3 = param_1[7];
  puVar8 = puVar1;
  if (7 < uVar3) {
    puVar8 = (undefined8 *)*puVar1;
  }
  uVar4 = param_1[6];
  psVar9 = (short *)((longlong)puVar8 + uVar4 * 2);
  psVar7 = (short *)FUN_180065240(puVar8);
  if (psVar7 == psVar9) {
LAB_18006756c:
    uVar10 = (longlong)psVar9 - (longlong)puVar8 >> 1;
    if (uVar10 <= uVar4) {
      param_1[6] = uVar10;
      puVar8 = puVar1;
      if (7 < uVar3) {
        puVar8 = (undefined8 *)*puVar1;
      }
      *(undefined2 *)((longlong)puVar8 + uVar10 * 2) = 0;
      FUN_1800654d0(puVar1,&local_30);
      FUN_18021e290(&local_30);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_18022ec00();
  }
  do {
    psVar5 = psVar9;
    if ((*psVar7 != 0x5c) && (*psVar7 != 0x2f)) break;
    psVar7 = psVar7 + 1;
  } while (psVar7 != psVar9);
  do {
    psVar9 = psVar5;
    if (psVar7 == psVar9) goto LAB_18006756c;
    sVar2 = psVar9[-1];
    if ((sVar2 == 0x5c) || (psVar5 = psVar9 + -1, sVar2 == 0x2f)) goto LAB_18006756c;
  } while( true );
}


)B180067450",
    "895a0deb6575a360931a40420fca0116e3bdf389b2145e476e49a7397559fa09",
    R"F180067450C(FUN_180065240
FUN_1800654d0
FUN_180211510
FUN_18021e290
FUN_18022ec00)F180067450C",
    R"F180067450D(LAB_18006756c)F180067450D",
    R"F180067450T()F180067450T",
    R"F180067450F(31: if ((*param_2 & 0x400) == 0) {
46: if (7 < uVar3) {
52: if (psVar7 == psVar9) {
53: LAB_18006756c:
55: if (uVar10 <= uVar4) {
58: if (7 < uVar3) {
64: return;
69: do {
71: if ((*psVar7 != 0x5c) && (*psVar7 != 0x2f)) break;
74: do {
76: if (psVar7 == psVar9) goto LAB_18006756c;
78: if ((sVar2 == 0x5c) || (psVar5 = psVar9 + -1, sVar2 == 0x2f)) goto LAB_18006756c;)F180067450F",
    R"F180067450U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18006756c.)F180067450U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180067450() noexcept {
    return kFunction_0x180067450;
}

// 0x1800675c0 FUN_1800675c0
// source: re/dump/decompile/0x1800675c0_FUN_1800675c0.c
// size: 117 bytes; thunk: false
// body sha256: 6ddc55e804469227b0db02c306449a3c3fea35f59da54f54c8377c4ae1b8f2ae
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800675c0{
    "0x1800675c0",
    "FUN_1800675c0",
    R"F1800675c0S(undefined FUN_1800675c0())F1800675c0S",
    R"B1800675c0(// 0x1800675c0  FUN_1800675c0
// size=117 thunk=false
// signature: undefined FUN_1800675c0()
// status: ok


undefined8 * FUN_1800675c0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 7;
  *(undefined2 *)(param_1 + 4) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0xffffffffffffffff;
  param_1[8] = uVar1;
  FUN_180067660();
  FUN_180067450(param_1,param_2 + 0x28);
  return param_1;
}


)B1800675c0",
    "6ddc55e804469227b0db02c306449a3c3fea35f59da54f54c8377c4ae1b8f2ae",
    R"F1800675c0C(FUN_180067450
FUN_180067660)F1800675c0C",
    R"F1800675c0D()F1800675c0D",
    R"F1800675c0T()F1800675c0T",
    R"F1800675c0F(26: return param_1;)F1800675c0F",
    R"F1800675c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800675c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800675c0() noexcept {
    return kFunction_0x1800675c0;
}

// 0x180067640 FUN_180067640
// source: re/dump/decompile/0x180067640_FUN_180067640.c
// size: 27 bytes; thunk: false
// body sha256: 869f8acc0b430c985b430abed1442997fafecd2f3848925d271494c665aa65af
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180067640{
    "0x180067640",
    "FUN_180067640",
    R"F180067640S(undefined FUN_180067640())F180067640S",
    R"B180067640(// 0x180067640  FUN_180067640
// size=27 thunk=false
// signature: undefined FUN_180067640()
// status: ok


void FUN_180067640(void)

{
  FUN_18021e290();
  return;
}


)B180067640",
    "869f8acc0b430c985b430abed1442997fafecd2f3848925d271494c665aa65af",
    R"F180067640C(FUN_18021e290)F180067640C",
    R"F180067640D()F180067640D",
    R"F180067640T()F180067640T",
    R"F180067640F(11: return;)F180067640F",
    R"F180067640U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180067640U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180067640() noexcept {
    return kFunction_0x180067640;
}

// 0x180067660 FUN_180067660
// source: re/dump/decompile/0x180067660_FUN_180067660.c
// size: 149 bytes; thunk: false
// body sha256: ab4b6ec3d50c169975ff743d67255935375df08fea0265339804d26c4ae760ff
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180067660{
    "0x180067660",
    "FUN_180067660",
    R"F180067660S(undefined FUN_180067660())F180067660S",
    R"B180067660(// 0x180067660  FUN_180067660
// size=149 thunk=false
// signature: undefined FUN_180067660()
// status: ok


longlong * FUN_180067660(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  code *pcVar2;
  longlong lVar3;
  void *_Memory;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (param_1 != param_2) {
    if (7 < (ulonglong)param_1[3]) {
      pvVar1 = (void *)*param_1;
      _Memory = pvVar1;
      puVar4 = auStack_28;
      if ((0xfff < param_1[3] * 2 + 2U) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8), puVar4 = auStack_28,
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
        pcVar2 = (code *)swi(0x29);
        _Memory = (void *)(*pcVar2)(5);
        puVar4 = auStack_20;
      }
      *(undefined8 *)(puVar4 + -8) = 0x1800676b9;
      free(_Memory);
    }
    param_1[3] = 7;
    param_1[2] = 0;
    *(undefined2 *)param_1 = 0;
    lVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar3;
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
  }
  return param_1;
}


)B180067660",
    "ab4b6ec3d50c169975ff743d67255935375df08fea0265339804d26c4ae760ff",
    R"F180067660C()F180067660C",
    R"F180067660D()F180067660D",
    R"F180067660T()F180067660T",
    R"F180067660F(18: if (param_1 != param_2) {
19: if (7 < (ulonglong)param_1[3]) {
23: if ((0xfff < param_1[3] * 2 + 2U) &&
46: return param_1;)F180067660F",
    R"F180067660U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 26: pcVar2 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 27: _Memory = (void *)(*pcVar2)(5);.)F180067660U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180067660() noexcept {
    return kFunction_0x180067660;
}

// 0x180067700 FUN_180067700
// source: re/dump/decompile/0x180067700_FUN_180067700.c
// size: 261 bytes; thunk: false
// body sha256: d8d4b03facd55f0a19589edd2b466193d3e818966e1d3e8d4f2a4c2f3f604222
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180067700{
    "0x180067700",
    "FUN_180067700",
    R"F180067700S(undefined FUN_180067700())F180067700S",
    R"B180067700(// 0x180067700  FUN_180067700
// size=261 thunk=false
// signature: undefined FUN_180067700()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180067700(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_298 [32];
  longlong local_278;
  longlong *plStack_270;
  undefined1 local_268 [44];
  short local_23c;
  short local_23a;
  short local_238;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_298;
  lVar3 = *param_1;
  do {
    iVar5 = FUN_1802d78e0(*(undefined8 *)(lVar3 + 0x40),local_268);
    if (iVar5 == 0x12) {
      local_278 = *param_1;
      *param_1 = 0;
      plVar4 = (longlong *)param_1[1];
      param_1[1] = 0;
      if (plVar4 == (longlong *)0x0) {
        return param_1;
      }
      LOCK();
      plVar1 = plVar4 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 != 1) {
        return param_1;
      }
      plStack_270 = plVar4;
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 != 1) {
        return param_1;
      }
      (**(code **)(*plVar4 + 8))(plVar4);
      return param_1;
    }
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180066f30(extraout_XMM0_Da,iVar5);
    }
  } while ((local_23c == 0x2e) && ((local_23a == 0 || ((local_23a == 0x2e && (local_238 == 0))))));
  FUN_180067450(lVar3,local_268);
  return param_1;
}


)B180067700",
    "d8d4b03facd55f0a19589edd2b466193d3e818966e1d3e8d4f2a4c2f3f604222",
    R"F180067700C(FUN_180066f30
FUN_180067450
FUN_1802d78e0)F180067700C",
    R"F180067700D(DAT_1803da4c0)F180067700D",
    R"F180067700T()F180067700T",
    R"F180067700F(29: do {
31: if (iVar5 == 0x12) {
36: if (plVar4 == (longlong *)0x0) {
37: return param_1;
44: if ((int)lVar3 != 1) {
45: return param_1;
54: if (iVar5 != 1) {
55: return param_1;
58: return param_1;
60: if (iVar5 != 0) {
66: return param_1;)F180067700F",
    R"F180067700U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 48: (**(code **)*plVar4)(plVar4);.
TODO: resolve the indirect call in body 57: (**(code **)(*plVar4 + 8))(plVar4);.)F180067700U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180067700() noexcept {
    return kFunction_0x180067700;
}

// 0x180067810 FUN_180067810
// source: re/dump/decompile/0x180067810_FUN_180067810.c
// size: 142 bytes; thunk: false
// body sha256: b2e9b2ec9d1cc55cb4b72ba8c4603dca6c91a21408a4a1511089e4c73394259e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180067810{
    "0x180067810",
    "FUN_180067810",
    R"F180067810S(undefined FUN_180067810())F180067810S",
    R"B180067810(// 0x180067810  FUN_180067810
// size=142 thunk=false
// signature: undefined FUN_180067810()
// status: ok


undefined8 * FUN_180067810(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return param_1;
}


)B180067810",
    "b2e9b2ec9d1cc55cb4b72ba8c4603dca6c91a21408a4a1511089e4c73394259e",
    R"F180067810C()F180067810C",
    R"F180067810D()F180067810D",
    R"F180067810T()F180067810T",
    R"F180067810F(23: if (plVar4 != (longlong *)0x0) {
29: if ((int)lVar5 == 1) {
36: if (iVar3 == 1) {
41: return param_1;)F180067810F",
    R"F180067810U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 30: (**(code **)*plVar4)(plVar4);.
TODO: resolve the indirect call in body 37: (**(code **)(*plVar4 + 8))(plVar4);.)F180067810U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180067810() noexcept {
    return kFunction_0x180067810;
}

// 0x1800678a0 FUN_1800678a0
// source: re/dump/decompile/0x1800678a0_FUN_1800678a0.c
// size: 80 bytes; thunk: false
// body sha256: e637b093e57d7611444c74d4027d8c54b50f9a8f26a4c2a9c96855eef96f7a31
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800678a0{
    "0x1800678a0",
    "FUN_1800678a0",
    R"F1800678a0S(undefined FUN_1800678a0())F1800678a0S",
    R"B1800678a0(// 0x1800678a0  FUN_1800678a0
// size=80 thunk=false
// signature: undefined FUN_1800678a0()
// status: ok


void FUN_1800678a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}


)B1800678a0",
    "e637b093e57d7611444c74d4027d8c54b50f9a8f26a4c2a9c96855eef96f7a31",
    R"F1800678a0C()F1800678a0C",
    R"F1800678a0D()F1800678a0D",
    R"F1800678a0T()F1800678a0T",
    R"F1800678a0F(17: if (plVar4 != (longlong *)0x0) {
23: if ((int)lVar5 == 1) {
30: if (iVar3 == 1) {
35: return;)F1800678a0F",
    R"F1800678a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 24: (**(code **)*plVar4)(plVar4);.
TODO: resolve the indirect call in body 31: (**(code **)(*plVar4 + 8))(plVar4);.)F1800678a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800678a0() noexcept {
    return kFunction_0x1800678a0;
}

// 0x1800678f0 FUN_1800678f0
// source: re/dump/decompile/0x1800678f0_FUN_1800678f0.c
// size: 127 bytes; thunk: false
// body sha256: 36d145182c5c9135245e3c8b1d70bc6536d0da82e9ea0028ae839196a6bff5fb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800678f0{
    "0x1800678f0",
    "FUN_1800678f0",
    R"F1800678f0S(undefined FUN_1800678f0())F1800678f0S",
    R"B1800678f0(// 0x1800678f0  FUN_1800678f0
// size=127 thunk=false
// signature: undefined FUN_1800678f0()
// status: ok


undefined8 * FUN_1800678f0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = *(longlong **)(param_2 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return param_1;
}


)B1800678f0",
    "36d145182c5c9135245e3c8b1d70bc6536d0da82e9ea0028ae839196a6bff5fb",
    R"F1800678f0C()F1800678f0C",
    R"F1800678f0D()F1800678f0D",
    R"F1800678f0T()F1800678f0T",
    R"F1800678f0F(21: if (plVar4 != (longlong *)0x0) {
27: if ((int)lVar5 == 1) {
34: if (iVar3 == 1) {
39: return param_1;)F1800678f0F",
    R"F1800678f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 28: (**(code **)*plVar4)(plVar4);.
TODO: resolve the indirect call in body 35: (**(code **)(*plVar4 + 8))(plVar4);.)F1800678f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800678f0() noexcept {
    return kFunction_0x1800678f0;
}

// 0x180067970 FUN_180067970
// source: re/dump/decompile/0x180067970_FUN_180067970.c
// size: 778 bytes; thunk: false
// body sha256: ee9385352dc436bb612d7eb324efc65c29242102a51f5ded9b06d92163597b73
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180067970{
    "0x180067970",
    "FUN_180067970",
    R"F180067970S(undefined FUN_180067970())F180067970S",
    R"B180067970(// 0x180067970  FUN_180067970
// size=778 thunk=false
// signature: undefined FUN_180067970()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180067970(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  undefined1 auStack_68 [48];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (param_2[2] != 0) {
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    uVar3 = __std_fs_open_handle(&local_38,param_2,0x80,0x2000000);
    uVar9 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180067bbd:
      FUN_1802d75c4(local_38);
      return uVar9;
    }
    iVar4 = 0;
    puVar1 = param_1 + 2;
    uVar9 = *puVar1;
    if (uVar9 < 0x104) {
      uVar5 = 0x104 - uVar9;
      if (param_1[3] - uVar9 < uVar5) {
        FUN_18022a480(param_1);
      }
      else {
        *puVar1 = 0x104;
        puVar7 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar7 = (undefined8 *)*param_1;
        }
        puVar10 = (undefined2 *)((longlong)puVar7 + uVar9 * 2);
        if (uVar5 != 0) {
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
        }
        *(undefined2 *)(puVar7 + 0x41) = 0;
      }
    }
    else {
      *puVar1 = 0x104;
      puVar7 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar7 = (undefined8 *)*param_1;
      }
      *(undefined2 *)(puVar7 + 0x41) = 0;
      iVar4 = 0;
    }
    do {
      while( true ) {
        uVar9 = *puVar1;
        puVar7 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar7 = (undefined8 *)*param_1;
        }
        uVar5 = FUN_1802d79dc(local_38,puVar7,(uint)uVar9,iVar4);
        if ((uint)uVar5 != 0) break;
        uVar9 = uVar5 >> 0x20;
        if (((int)(uVar5 >> 0x20) != 3) || (iVar4 != 0)) {
          *puVar1 = 0;
          if (7 < (ulonglong)param_1[3]) {
            param_1 = (undefined8 *)*param_1;
          }
          *(undefined2 *)param_1 = 0;
          goto LAB_180067bbd;
        }
        iVar4 = 2;
      }
      uVar2 = *puVar1;
      uVar8 = uVar5 & 0xffffffff;
      if (uVar2 < uVar8) {
        uVar6 = uVar8 - uVar2;
        if (param_1[3] - uVar2 < uVar6) {
          FUN_18022a480(param_1,uVar6);
        }
        else {
          *puVar1 = uVar8;
          puVar7 = param_1;
          if (7 < (ulonglong)param_1[3]) {
            puVar7 = (undefined8 *)*param_1;
          }
          puVar10 = (undefined2 *)((longlong)puVar7 + uVar2 * 2);
          if (uVar6 != 0) {
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
          }
          *(undefined2 *)((longlong)puVar7 + uVar8 * 2) = 0;
        }
      }
      else {
        *puVar1 = uVar8;
        puVar7 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar7 = (undefined8 *)*param_1;
        }
        *(undefined2 *)((longlong)puVar7 + uVar8 * 2) = 0;
      }
    } while ((uint)uVar9 <= (uint)uVar5);
    FUN_1802d75c4(local_38);
    if (iVar4 == 0) {
      puVar7 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar7 = (undefined8 *)*param_1;
      }
      if (5 < *puVar1) {
        iVar4 = FUN_180012bf0(puVar7,L"\\\\?\\",4);
        if ((iVar4 == 0) && ((*(uint *)(puVar7 + 1) & 0xffffffdf) - 0x3a0041 < 0x1a)) {
          uVar9 = *puVar1;
          uVar5 = 4;
          if (uVar9 < 4) {
            uVar5 = uVar9;
          }
          if (7 < (ulonglong)param_1[3]) {
            param_1 = (undefined8 *)*param_1;
          }
          memmove(param_1,(void *)((longlong)param_1 + uVar5 * 2),(uVar9 - uVar5) * 2 + 2);
          *puVar1 = uVar9 - uVar5;
          return 0;
        }
      }
      puVar7 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar7 = (undefined8 *)*param_1;
      }
      if ((7 < *puVar1) && (iVar4 = FUN_180012bf0(puVar7,L"\\\\?\\UNC\\",8), iVar4 == 0)) {
        uVar9 = *puVar1;
        if (uVar9 < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_18022ec00();
        }
        uVar5 = 6;
        if (uVar9 - 2 < 6) {
          uVar5 = uVar9 - 2;
        }
        puVar7 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar7 = (undefined8 *)*param_1;
        }
        memmove((void *)((longlong)puVar7 + 4),(void *)((longlong)puVar7 + 4 + uVar5 * 2),
                (uVar9 - uVar5) * 2 - 2);
        param_1[2] = uVar9 - uVar5;
      }
    }
    else {
      FUN_180211640(param_1);
    }
  }
  return 0;
}


)B180067970",
    "ee9385352dc436bb612d7eb324efc65c29242102a51f5ded9b06d92163597b73",
    R"F180067970C(FUN_180012bf0
FUN_180211640
FUN_18022a480
FUN_18022ec00
FUN_1802d75c4
FUN_1802d79dc)F180067970C",
    R"F180067970D(LAB_180067bbd
DAT_1803da4c0)F180067970D",
    R"F180067970T("\\\\\\\\?\\\\"
"\\\\\\\\?\\\\UNC\\\\")F180067970T",
    R"F180067970F(27: if (param_2[2] != 0) {
28: if (7 < (ulonglong)param_2[3]) {
33: if (uVar3 != 0) {
34: LAB_180067bbd:
36: return uVar9;
41: if (uVar9 < 0x104) {
43: if (param_1[3] - uVar9 < uVar5) {
46: else {
49: if (7 < (ulonglong)param_1[3]) {
53: if (uVar5 != 0) {
54: for (; uVar5 != 0; uVar5 = uVar5 - 1) {
62: else {
65: if (7 < (ulonglong)param_1[3]) {
71: do {
72: while( true ) {
75: if (7 < (ulonglong)param_1[3]) {
79: if ((uint)uVar5 != 0) break;
81: if (((int)(uVar5 >> 0x20) != 3) || (iVar4 != 0)) {
83: if (7 < (ulonglong)param_1[3]) {
87: goto LAB_180067bbd;
93: if (uVar2 < uVar8) {
95: if (param_1[3] - uVar2 < uVar6) {
98: else {
101: if (7 < (ulonglong)param_1[3]) {
105: if (uVar6 != 0) {
106: for (; uVar6 != 0; uVar6 = uVar6 - 1) {
114: else {
117: if (7 < (ulonglong)param_1[3]) {
124: if (iVar4 == 0) {
126: if (7 < (ulonglong)param_1[3]) {
129: if (5 < *puVar1) {
131: if ((iVar4 == 0) && ((*(uint *)(puVar7 + 1) & 0xffffffdf) - 0x3a0041 < 0x1a)) {
134: if (uVar9 < 4) {
137: if (7 < (ulonglong)param_1[3]) {
142: return 0;
146: if (7 < (ulonglong)param_1[3]) {
149: if ((7 < *puVar1) && (iVar4 = FUN_180012bf0(puVar7,L"\\\\?\\UNC\\",8), iVar4 == 0)) {
151: if (uVar9 < 2) {
156: if (uVar9 - 2 < 6) {
160: if (7 < (ulonglong)param_1[3]) {
168: else {
172: return 0;)F180067970F",
    R"F180067970U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180067bbd.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180067970U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180067970() noexcept {
    return kFunction_0x180067970;
}

// 0x180067c80 FUN_180067c80
// source: re/dump/decompile/0x180067c80_FUN_180067c80.c
// size: 242 bytes; thunk: false
// body sha256: b2e27f3a65e35a3997aece8cba3aa2e39d25db433770899b984e37c84d4b6653
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180067c80{
    "0x180067c80",
    "FUN_180067c80",
    R"F180067c80S(undefined FUN_180067c80())F180067c80S",
    R"B180067c80(// 0x180067c80  FUN_180067c80
// size=242 thunk=false
// signature: undefined FUN_180067c80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * FUN_180067c80(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  uint local_28;
  int local_24;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0xffff;
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar1 = FUN_1802d7a0c(param_2,local_38,3,0xffffffff);
  param_1[2] = uVar1;
  if (uVar1 == 0) {
    uVar1 = 0x16d;
    if ((local_28 & 1) == 0) {
      uVar1 = 0x1ff;
    }
    param_1[1] = uVar1;
    if ((local_28 >> 10 & 1) != 0) {
      if (local_24 == -0x5ffffff4) {
        *param_1 = 4;
        return param_1;
      }
      if (local_24 == -0x5ffffffd) {
        *param_1 = 10;
        return param_1;
      }
    }
    uVar1 = (local_28 & 0x10 | 0x20) >> 4;
    goto LAB_180067d55;
  }
  param_1[1] = 0xffff;
  if (uVar1 < 0x41) {
    if (((uVar1 != 0x40) && (uVar1 != 2)) && (uVar1 != 3)) {
      bVar2 = uVar1 == 0x35;
LAB_180067d4a:
      if (!bVar2) {
        uVar1 = 0;
        goto LAB_180067d55;
      }
    }
  }
  else if ((uVar1 != 0x7b) && (uVar1 != 0xa1)) {
    bVar2 = uVar1 == 0x10b;
    goto LAB_180067d4a;
  }
  uVar1 = 1;
LAB_180067d55:
  *param_1 = uVar1;
  return param_1;
}


)B180067c80",
    "b2e27f3a65e35a3997aece8cba3aa2e39d25db433770899b984e37c84d4b6653",
    R"F180067c80C(FUN_1802d7a0c)F180067c80C",
    R"F180067c80D(LAB_180067d4a
LAB_180067d55
DAT_1803da4c0)F180067c80D",
    R"F180067c80T()F180067c80T",
    R"F180067c80F(23: if (7 < (ulonglong)param_2[3]) {
28: if (uVar1 == 0) {
30: if ((local_28 & 1) == 0) {
34: if ((local_28 >> 10 & 1) != 0) {
35: if (local_24 == -0x5ffffff4) {
37: return param_1;
39: if (local_24 == -0x5ffffffd) {
41: return param_1;
45: goto LAB_180067d55;
48: if (uVar1 < 0x41) {
49: if (((uVar1 != 0x40) && (uVar1 != 2)) && (uVar1 != 3)) {
51: LAB_180067d4a:
52: if (!bVar2) {
54: goto LAB_180067d55;
58: else if ((uVar1 != 0x7b) && (uVar1 != 0xa1)) {
60: goto LAB_180067d4a;
63: LAB_180067d55:
65: return param_1;)F180067c80F",
    R"F180067c80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180067d4a.
TODO: recover the declaration, type and value for global/data reference LAB_180067d55.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180067c80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180067c80() noexcept {
    return kFunction_0x180067c80;
}

// 0x180067d80 FUN_180067d80
// source: re/dump/decompile/0x180067d80_FUN_180067d80.c
// size: 588 bytes; thunk: false
// body sha256: da612caf67e75a134595a4a0dc213c37a50d1e99deb7b275661bcc9bccbcb6ef
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180067d80{
    "0x180067d80",
    "FUN_180067d80",
    R"F180067d80S(undefined FUN_180067d80())F180067d80S",
    R"B180067d80(// 0x180067d80  FUN_180067d80
// size=588 thunk=false
// signature: undefined FUN_180067d80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180067d80(uint *param_1,uint *param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  uint *puVar9;
  bool bVar10;
  undefined1 auStack_98 [36];
  uint local_74;
  undefined8 ***local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 4);
  *(undefined ***)(param_2 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
  if (lVar2 == 0) {
    *param_2 = 3;
    param_2[1] = local_74;
    uVar4 = (ulonglong)(uint3)(local_74 >> 8) << 8;
  }
  else {
    uVar8 = 0;
    *param_2 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 7;
    local_68 = (undefined8 ****)0x0;
    uVar4 = *(ulonglong *)(param_1 + 4);
    if (7 < uVar4) {
      FUN_18021a2e0(&local_68,uVar4);
      uVar4 = *(ulonglong *)(param_1 + 4);
    }
    local_58 = 0;
    if (7 < *(ulonglong *)(param_1 + 6)) {
      param_1 = *(uint **)param_1;
    }
    puVar1 = (uint *)((longlong)param_1 + uVar4 * 2);
    for (puVar3 = (uint *)FUN_180065240(param_1,puVar1);
        (puVar3 != puVar1 && (((short)*puVar3 == 0x5c || ((short)*puVar3 == 0x2f))));
        puVar3 = (uint *)((longlong)puVar3 + 2)) {
    }
    if ((((puVar3 != param_1) &&
         (5 < (longlong)((longlong)puVar1 - (longlong)puVar3 & 0xfffffffffffffffeU))) &&
        ((*puVar3 & 0xffffffdf) - 0x3a0041 < 0x1a)) &&
       (((short)puVar3[1] == 0x5c || ((short)puVar3[1] == 0x2f)))) {
      puVar3 = puVar3 + 1;
    }
    FUN_180211740(&local_68,param_1,(longlong)puVar3 - (longlong)param_1 >> 1);
    puVar9 = puVar3;
    if (puVar3 == puVar1) {
      uVar4 = 0;
      uVar6 = 0;
    }
    else {
LAB_180067ed3:
      do {
        if (((short)*puVar3 == 0x5c) || ((short)*puVar3 == 0x2f)) {
          puVar3 = (uint *)((longlong)puVar3 + 2);
          if (puVar3 != puVar1) goto LAB_180067ed3;
        }
        for (; ((puVar3 != puVar1 && ((short)*puVar3 != 0x5c)) && ((short)*puVar3 != 0x2f));
            puVar3 = (uint *)((longlong)puVar3 + 2)) {
        }
        FUN_180211740(&local_68,puVar9,(longlong)puVar3 - (longlong)puVar9 >> 1);
        ppppuVar7 = &local_68;
        if (7 < local_50) {
          ppppuVar7 = (undefined8 ****)local_68;
        }
        uVar4 = FUN_1802d786c(ppppuVar7);
        uVar5 = (uint)(uVar4 >> 0x20);
        if (uVar5 != 0) {
          if (uVar5 < 0x41) {
            if (((uVar5 != 0x40) && (uVar5 != 2)) && (uVar5 != 3)) {
              bVar10 = uVar5 == 0x35;
LAB_180067f69:
              if (!bVar10) {
                uVar8 = uVar4 >> 0x20;
              }
            }
          }
          else if ((uVar5 != 0x7b) && (uVar5 != 0xa1)) {
            bVar10 = uVar5 == 0x10b;
            goto LAB_180067f69;
          }
        }
        puVar9 = puVar3;
      } while (puVar3 != puVar1);
      uVar6 = uVar5;
      if ((uVar5 != 0) && (uVar6 = (uint)uVar8, (uint)uVar8 == 0)) {
        uVar6 = uVar5;
      }
    }
    *param_2 = uVar6;
    param_2[1] = local_74;
    *(undefined ***)(param_2 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
    FUN_18021e290(&local_68);
    uVar4 = uVar4 & 0xff;
  }
  return uVar4;
}


)B180067d80",
    "da612caf67e75a134595a4a0dc213c37a50d1e99deb7b275661bcc9bccbcb6ef",
    R"F180067d80C(FUN_180065240
FUN_180211740
FUN_18021a2e0
FUN_18021e290
FUN_1802d786c)F180067d80C",
    R"F180067d80D(LAB_180067ed3
LAB_180067f69
DAT_1803da4c0)F180067d80D",
    R"F180067d80T()F180067d80T",
    R"F180067d80F(33: if (lVar2 == 0) {
38: else {
46: if (7 < uVar4) {
51: if (7 < *(ulonglong *)(param_1 + 6)) {
55: for (puVar3 = (uint *)FUN_180065240(param_1,puVar1);
59: if ((((puVar3 != param_1) &&
67: if (puVar3 == puVar1) {
71: else {
72: LAB_180067ed3:
73: do {
74: if (((short)*puVar3 == 0x5c) || ((short)*puVar3 == 0x2f)) {
76: if (puVar3 != puVar1) goto LAB_180067ed3;
78: for (; ((puVar3 != puVar1 && ((short)*puVar3 != 0x5c)) && ((short)*puVar3 != 0x2f));
83: if (7 < local_50) {
88: if (uVar5 != 0) {
89: if (uVar5 < 0x41) {
90: if (((uVar5 != 0x40) && (uVar5 != 2)) && (uVar5 != 3)) {
92: LAB_180067f69:
93: if (!bVar10) {
98: else if ((uVar5 != 0x7b) && (uVar5 != 0xa1)) {
100: goto LAB_180067f69;
106: if ((uVar5 != 0) && (uVar6 = (uint)uVar8, (uint)uVar8 == 0)) {
116: return uVar4;)F180067d80F",
    R"F180067d80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180067ed3.
TODO: recover the declaration, type and value for global/data reference LAB_180067f69.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180067d80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180067d80() noexcept {
    return kFunction_0x180067d80;
}

// 0x180067fd0 FUN_180067fd0
// source: re/dump/decompile/0x180067fd0_FUN_180067fd0.c
// size: 439 bytes; thunk: false
// body sha256: 237a8301121f071f062a2f82438983e2ad72117647ed6a374da82691e30f2bb9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180067fd0{
    "0x180067fd0",
    "FUN_180067fd0",
    R"F180067fd0S(undefined FUN_180067fd0())F180067fd0S",
    R"B180067fd0(// 0x180067fd0  FUN_180067fd0
// size=439 thunk=false
// signature: undefined FUN_180067fd0()
// status: ok


longlong * FUN_180067fd0(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined4 local_3c;
  
  *param_2 = 0;
  *(undefined ***)(param_2 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  uVar2 = param_1[2];
  if (uVar2 < 0x104) {
    uVar3 = 0x104 - uVar2;
    if (param_1[3] - uVar2 < uVar3) {
      FUN_18022a480(param_1,uVar3,param_3,uVar3);
    }
    else {
      param_1[2] = 0x104;
      plVar4 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        plVar4 = (longlong *)*param_1;
      }
      puVar6 = (undefined2 *)((longlong)plVar4 + uVar2 * 2);
      if (uVar3 != 0) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      *(undefined2 *)(plVar4 + 0x41) = 0;
    }
  }
  else {
    param_1[2] = 0x104;
    if ((ulonglong)param_1[3] < 8) {
      *(undefined2 *)(param_1 + 0x41) = 0;
    }
    else {
      *(undefined2 *)(*param_1 + 0x208) = 0;
    }
  }
  do {
    uVar1 = *(uint *)(param_1 + 2);
    plVar4 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      plVar4 = (longlong *)*param_1;
    }
    uVar3 = FUN_1802d799c(uVar1,plVar4);
    uVar2 = param_1[2];
    uVar7 = uVar3 & 0xffffffff;
    if (uVar2 < uVar7) {
      uVar5 = uVar7 - uVar2;
      if (param_1[3] - uVar2 < uVar5) {
        FUN_18022a480(param_1,uVar5,uVar7,uVar5);
      }
      else {
        param_1[2] = uVar7;
        plVar4 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          plVar4 = (longlong *)*param_1;
        }
        puVar6 = (undefined2 *)((longlong)plVar4 + uVar2 * 2);
        if (uVar5 != 0) {
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
        }
        *(undefined2 *)((longlong)plVar4 + uVar7 * 2) = 0;
      }
    }
    else {
      param_1[2] = uVar7;
      plVar4 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        plVar4 = (longlong *)*param_1;
      }
      *(undefined2 *)((longlong)plVar4 + uVar7 * 2) = 0;
    }
  } while (uVar1 <= (uint)uVar3);
  *param_2 = (int)(uVar3 >> 0x20);
  param_2[1] = local_3c;
  *(undefined ***)(param_2 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
  return param_1;
}


)B180067fd0",
    "237a8301121f071f062a2f82438983e2ad72117647ed6a374da82691e30f2bb9",
    R"F180067fd0C(FUN_18022a480
FUN_1802d799c)F180067fd0C",
    R"F180067fd0D()F180067fd0D",
    R"F180067fd0T()F180067fd0T",
    R"F180067fd0F(27: if (uVar2 < 0x104) {
29: if (param_1[3] - uVar2 < uVar3) {
32: else {
35: if (7 < (ulonglong)param_1[3]) {
39: if (uVar3 != 0) {
40: for (; uVar3 != 0; uVar3 = uVar3 - 1) {
48: else {
50: if ((ulonglong)param_1[3] < 8) {
53: else {
57: do {
60: if (7 < (ulonglong)param_1[3]) {
66: if (uVar2 < uVar7) {
68: if (param_1[3] - uVar2 < uVar5) {
71: else {
74: if (7 < (ulonglong)param_1[3]) {
78: if (uVar5 != 0) {
79: for (; uVar5 != 0; uVar5 = uVar5 - 1) {
87: else {
90: if (7 < (ulonglong)param_1[3]) {
99: return param_1;)F180067fd0F",
    R"F180067fd0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180067fd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180067fd0() noexcept {
    return kFunction_0x180067fd0;
}

// 0x180068190 FUN_180068190
// source: re/dump/decompile/0x180068190_FUN_180068190.c
// size: 81 bytes; thunk: false
// body sha256: a8e541463a2a8913b454ea516c9d81807b4538e83b62afcd8c613c26d413cbb1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180068190{
    "0x180068190",
    "FUN_180068190",
    R"F180068190S(undefined FUN_180068190())F180068190S",
    R"B180068190(// 0x180068190  FUN_180068190
// size=81 thunk=false
// signature: undefined FUN_180068190()
// status: ok


undefined8
FUN_180068190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_20;
  undefined **local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = &PTR_vftable_std__System_error_category_1803e9500;
  local_10 = param_1;
  FUN_180067fd0(param_1,&local_20,param_3,param_4,0);
  if ((int)local_20 == 0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800670a0();
}


)B180068190",
    "a8e541463a2a8913b454ea516c9d81807b4538e83b62afcd8c613c26d413cbb1",
    R"F180068190C(FUN_1800670a0
FUN_180067fd0)F180068190C",
    R"F180068190D()F180068190D",
    R"F180068190T()F180068190T",
    R"F180068190F(19: if ((int)local_20 == 0) {
20: return param_1;)F180068190F",
    R"F180068190U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180068190U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180068190() noexcept {
    return kFunction_0x180068190;
}

// 0x1800681f0 FUN_1800681f0
// source: re/dump/decompile/0x1800681f0_FUN_1800681f0.c
// size: 1762 bytes; thunk: false
// body sha256: df55002d0e1ca4d2081231978ec2c4b7d25d2a5299741dd25c4d900a329764c9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800681f0{
    "0x1800681f0",
    "FUN_1800681f0",
    R"F1800681f0S(undefined FUN_1800681f0())F1800681f0S",
    R"B1800681f0(// 0x1800681f0  FUN_1800681f0
// size=1762 thunk=false
// signature: undefined FUN_1800681f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1800681f0(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  code *pcVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  void *_Memory;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [40];
  undefined4 local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  ulonglong local_120;
  ulonglong uStack_118;
  undefined8 local_110;
  undefined2 local_108;
  undefined2 uStack_106;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [12];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  puVar9 = auStack_188;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  local_158 = 0;
  *param_3 = 0;
  *(undefined ***)(param_3 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 7;
  local_130 = (undefined8 *)0x0;
  local_138 = param_1;
  uVar3 = FUN_180067970(&local_130);
  if (uVar3 == 0) {
    *(undefined4 *)param_1 = (undefined4)local_130;
    *(undefined4 *)((longlong)param_1 + 4) = local_130._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_128;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_128._4_4_;
    param_1[2] = local_120;
    param_1[3] = uStack_118;
    local_120 = 0;
    uStack_118 = 7;
    local_130 = (undefined8 *)((ulonglong)local_130 & 0xffffffffffff0000);
    local_158 = 1;
    goto LAB_18006880e;
  }
  if (uVar3 < 0x41) {
    if (((uVar3 != 0x40) && (uVar3 != 2)) && (uVar3 != 3)) {
      bVar11 = uVar3 == 0x35;
LAB_1800682cb:
      if (!bVar11) {
        *param_3 = uVar3;
        param_3[1] = local_148._4_4_;
        *(undefined ***)(param_3 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 7;
        *(undefined2 *)param_1 = 0;
        local_158 = 1;
        goto LAB_18006880e;
      }
    }
  }
  else if ((uVar3 != 0x7b) && (uVar3 != 0xa1)) {
    bVar11 = uVar3 == 0x10b;
    goto LAB_1800682cb;
  }
  FUN_1800661c0(param_2,local_68);
  FUN_180065b60(local_68,&local_108);
  FUN_180065c20(local_68,local_88);
  bVar11 = true;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_e8[2] = 0;
  local_e8[3] = 0;
  local_e8[4] = 0;
  local_e8[5] = 0;
  FUN_180066920(local_88,local_e8);
  local_e8[6] = 0;
  local_e8[7] = 0;
  local_e8[8] = 0;
  local_e8[9] = 0;
  local_e8[10] = 0;
  local_e8[0xb] = 0;
  FUN_180066a70(local_88,local_e8 + 6);
  if (local_e8[0] != local_e8[6]) {
    do {
      iVar4 = 0;
      FUN_1800654d0(&local_108,local_e8 + 1);
      if (bVar11) {
        local_120 = 0;
        puVar6 = &local_130;
        if (7 < uStack_118) {
          puVar6 = local_130;
        }
        *(undefined2 *)puVar6 = 0;
        if (local_f8 != 0) {
          puVar7 = &local_108;
          if (7 < uStack_f0) {
            puVar7 = (undefined2 *)CONCAT44(uStack_104,CONCAT22(uStack_106,local_108));
          }
          uVar3 = __std_fs_open_handle(&local_110,puVar7,0x80,0x2000000);
          uVar5 = local_120;
          if (uVar3 != 0) {
            FUN_1802d75c4(local_110);
LAB_18006863a:
            if (uVar3 < 0x41) {
              if (((uVar3 != 0x40) && (uVar3 != 2)) && (uVar3 != 3)) {
                bVar11 = uVar3 == 0x35;
LAB_180068661:
                if (!bVar11) {
                  *param_3 = uVar3;
                  param_3[1] = local_148._4_4_;
                  *(undefined ***)(param_3 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
                  param_1[2] = 0;
                  param_1[3] = 0;
                  *param_1 = 0;
                  param_1[1] = 0;
                  param_1[2] = 0;
                  param_1[3] = 7;
                  *(undefined2 *)param_1 = 0;
                  local_158 = 1;
                  local_150 = local_e8 + 7;
                  FUN_18021e290(local_e8 + 7);
                  local_148 = local_e8 + 1;
                  FUN_18021e290(local_e8 + 1);
                  FUN_18021e290(local_88);
                  FUN_18021e290(&local_108);
                  FUN_18021e290(local_68);
                  goto LAB_18006880e;
                }
              }
            }
            else if ((uVar3 != 0x7b) && (uVar3 != 0xa1)) {
              bVar11 = uVar3 == 0x10b;
              goto LAB_180068661;
            }
            bVar11 = false;
            goto LAB_18006878a;
          }
          if (local_120 < 0x104) {
            uVar10 = 0x104 - local_120;
            if (uStack_118 - local_120 < uVar10) {
              FUN_18022a480(&local_130);
            }
            else {
              local_120 = 0x104;
              puVar6 = &local_130;
              if (7 < uStack_118) {
                puVar6 = local_130;
              }
              puVar7 = (undefined2 *)((longlong)puVar6 + uVar5 * 2);
              if (uVar10 != 0) {
                for (; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *puVar7 = 0;
                  puVar7 = puVar7 + 1;
                }
              }
              *(undefined2 *)(puVar6 + 0x41) = 0;
            }
          }
          else {
            local_120 = 0x104;
            puVar6 = &local_130;
            if (7 < uStack_118) {
              puVar6 = local_130;
            }
            *(undefined2 *)(puVar6 + 0x41) = 0;
          }
          do {
            while( true ) {
              uVar3 = (uint)local_120;
              puVar6 = &local_130;
              if (7 < uStack_118) {
                puVar6 = local_130;
              }
              uVar5 = FUN_1802d79dc(local_110,puVar6,local_120 & 0xffffffff,iVar4);
              if ((uint)uVar5 != 0) break;
              uVar3 = (uint)(uVar5 >> 0x20);
              if ((uVar3 != 3) || (iVar4 != 0)) {
                local_120 = 0;
                puVar6 = &local_130;
                if (7 < uStack_118) {
                  puVar6 = local_130;
                }
                *(undefined2 *)puVar6 = 0;
                FUN_1802d75c4(local_110);
                if (uVar3 == 0) goto LAB_180068713;
                goto LAB_18006863a;
              }
              iVar4 = 2;
            }
            uVar10 = uVar5 & 0xffffffff;
            if (local_120 < uVar10) {
              uVar8 = uVar10 - local_120;
              if (uStack_118 - local_120 < uVar8) {
                FUN_18022a480(&local_130,uVar8,uVar10,uVar8);
              }
              else {
                puVar6 = &local_130;
                if (7 < uStack_118) {
                  puVar6 = local_130;
                }
                puVar7 = (undefined2 *)((longlong)puVar6 + local_120 * 2);
                local_120 = uVar10;
                if (uVar8 != 0) {
                  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *puVar7 = 0;
                    puVar7 = puVar7 + 1;
                  }
                }
                *(undefined2 *)((longlong)puVar6 + uVar10 * 2) = 0;
              }
            }
            else {
              puVar6 = &local_130;
              if (7 < uStack_118) {
                puVar6 = local_130;
              }
              local_120 = uVar10;
              *(undefined2 *)((longlong)puVar6 + uVar10 * 2) = 0;
            }
          } while (uVar3 <= (uint)uVar5);
          FUN_1802d75c4(local_110);
          if (iVar4 == 0) {
            puVar6 = &local_130;
            if (7 < uStack_118) {
              puVar6 = local_130;
            }
            if (((local_120 < 6) || (iVar4 = FUN_180012bf0(puVar6,L"\\\\?\\",4), iVar4 != 0)) ||
               (0x19 < (*(uint *)(puVar6 + 1) & 0xffffffdf) - 0x3a0041)) {
              puVar6 = &local_130;
              if (7 < uStack_118) {
                puVar6 = local_130;
              }
              if ((7 < local_120) && (iVar4 = FUN_180012bf0(puVar6,L"\\\\?\\UNC\\",8), iVar4 == 0))
              {
                if (local_120 < 2) goto LAB_1800688cd;
                uVar5 = 6;
                if (local_120 - 2 < 6) {
                  uVar5 = local_120 - 2;
                }
                puVar6 = &local_130;
                if (7 < uStack_118) {
                  puVar6 = local_130;
                }
                uVar10 = local_120 - uVar5;
                memmove((undefined2 *)((longlong)puVar6 + 4),
                        (undefined2 *)((longlong)puVar6 + 4) + uVar5,uVar10 * 2 - 2);
                local_120 = uVar10;
              }
            }
            else {
              uVar5 = 4;
              if (local_120 < 4) {
                uVar5 = local_120;
              }
              puVar6 = &local_130;
              if (7 < uStack_118) {
                puVar6 = local_130;
              }
              uVar10 = local_120 - uVar5;
              memmove(puVar6,(undefined2 *)((longlong)puVar6 + uVar5 * 2),uVar10 * 2 + 2);
              local_120 = uVar10;
            }
          }
          else {
            FUN_180211640(&local_130);
          }
        }
LAB_180068713:
        if (7 < uStack_f0) {
          pvVar2 = (void *)CONCAT44(uStack_104,CONCAT22(uStack_106,local_108));
          _Memory = pvVar2;
          if ((0xfff < uStack_f0 * 2 + 2) &&
             (_Memory = *(void **)((longlong)pvVar2 + -8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar9 = auStack_180;
LAB_1800688cd:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar9 + -8) = &UNK_1800688d2;
            FUN_18022ec00();
          }
          free(_Memory);
        }
        local_108 = SUB82(local_130,0);
        uStack_106 = (undefined2)((ulonglong)local_130 >> 0x10);
        uStack_104 = local_130._4_4_;
        uStack_100 = (undefined4)uStack_128;
        uStack_fc = uStack_128._4_4_;
        local_f8 = local_120;
        uStack_f0 = uStack_118;
        local_120 = 0;
        uStack_118 = 7;
        local_130 = (undefined8 *)((ulonglong)local_130 & 0xffffffffffff0000);
      }
LAB_18006878a:
      FUN_18020c660(local_e8);
    } while (local_e8[0] != local_e8[6]);
  }
  local_148 = local_e8 + 7;
  FUN_18021e290(local_e8 + 7);
  local_150 = local_e8 + 1;
  FUN_18021e290(local_e8 + 1);
  *(uint *)param_1 = CONCAT22(uStack_106,local_108);
  *(undefined4 *)((longlong)param_1 + 4) = uStack_104;
  *(undefined4 *)(param_1 + 1) = uStack_100;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_fc;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_f8;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_f8._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_f0._4_4_;
  local_f8 = 0;
  uStack_f0 = 7;
  local_108 = 0;
  local_158 = 1;
  FUN_18021e290(local_88);
  FUN_18021e290(&local_108);
  FUN_18021e290(local_68);
LAB_18006880e:
  FUN_18021e290(&local_130);
  return param_1;
}


)B1800681f0",
    "df55002d0e1ca4d2081231978ec2c4b7d25d2a5299741dd25c4d900a329764c9",
    R"F1800681f0C(FUN_180012bf0
FUN_1800654d0
FUN_180065b60
FUN_180065c20
FUN_1800661c0
FUN_180066920
FUN_180066a70
FUN_180067970
FUN_18020c660
FUN_180211640
FUN_18021e290
FUN_18022a480
FUN_18022ec00
FUN_1802d75c4
FUN_1802d79dc)F1800681f0C",
    R"F1800681f0D(LAB_1800682cb
LAB_18006863a
LAB_180068661
LAB_180068713
LAB_18006878a
LAB_18006880e
LAB_1800688cd
UNK_1800688d2
DAT_1803da4c0)F1800681f0D",
    R"F1800681f0T("\\\\\\\\?\\\\"
"\\\\\\\\?\\\\UNC\\\\")F1800681f0T",
    R"F1800681f0F(59: if (uVar3 == 0) {
70: goto LAB_18006880e;
72: if (uVar3 < 0x41) {
73: if (((uVar3 != 0x40) && (uVar3 != 2)) && (uVar3 != 3)) {
75: LAB_1800682cb:
76: if (!bVar11) {
88: goto LAB_18006880e;
92: else if ((uVar3 != 0x7b) && (uVar3 != 0xa1)) {
94: goto LAB_1800682cb;
114: if (local_e8[0] != local_e8[6]) {
115: do {
118: if (bVar11) {
121: if (7 < uStack_118) {
125: if (local_f8 != 0) {
127: if (7 < uStack_f0) {
132: if (uVar3 != 0) {
134: LAB_18006863a:
135: if (uVar3 < 0x41) {
136: if (((uVar3 != 0x40) && (uVar3 != 2)) && (uVar3 != 3)) {
138: LAB_180068661:
139: if (!bVar11) {
158: goto LAB_18006880e;
162: else if ((uVar3 != 0x7b) && (uVar3 != 0xa1)) {
164: goto LAB_180068661;
167: goto LAB_18006878a;
169: if (local_120 < 0x104) {
171: if (uStack_118 - local_120 < uVar10) {
174: else {
177: if (7 < uStack_118) {
181: if (uVar10 != 0) {
182: for (; uVar10 != 0; uVar10 = uVar10 - 1) {
190: else {
193: if (7 < uStack_118) {
198: do {
199: while( true ) {
202: if (7 < uStack_118) {
206: if ((uint)uVar5 != 0) break;
208: if ((uVar3 != 3) || (iVar4 != 0)) {
211: if (7 < uStack_118) {
216: if (uVar3 == 0) goto LAB_180068713;
217: goto LAB_18006863a;
222: if (local_120 < uVar10) {
224: if (uStack_118 - local_120 < uVar8) {
227: else {
229: if (7 < uStack_118) {
234: if (uVar8 != 0) {
235: for (; uVar8 != 0; uVar8 = uVar8 - 1) {
243: else {
245: if (7 < uStack_118) {
253: if (iVar4 == 0) {
255: if (7 < uStack_118) {
258: if (((local_120 < 6) || (iVar4 = FUN_180012bf0(puVar6,L"\\\\?\\",4), iVar4 != 0)) ||
261: if (7 < uStack_118) {
264: if ((7 < local_120) && (iVar4 = FUN_180012bf0(puVar6,L"\\\\?\\UNC\\",8), iVar4 == 0))
266: if (local_120 < 2) goto LAB_1800688cd;
268: if (local_120 - 2 < 6) {
272: if (7 < uStack_118) {
281: else {
283: if (local_120 < 4) {
287: if (7 < uStack_118) {
295: else {
299: LAB_180068713:
300: if (7 < uStack_f0) {
303: if ((0xfff < uStack_f0 * 2 + 2) &&
309: LAB_1800688cd:
327: LAB_18006878a:
350: LAB_18006880e:
352: return param_1;)F1800681f0F",
    R"F1800681f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1800682cb.
TODO: recover the declaration, type and value for global/data reference LAB_18006863a.
TODO: recover the declaration, type and value for global/data reference LAB_180068661.
TODO: recover the declaration, type and value for global/data reference LAB_180068713.
TODO: recover the declaration, type and value for global/data reference LAB_18006878a.
TODO: recover the declaration, type and value for global/data reference LAB_18006880e.
TODO: recover the declaration, type and value for global/data reference LAB_1800688cd.
TODO: recover the declaration, type and value for global/data reference UNK_1800688d2.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 306: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 307: (*pcVar1)(5);.)F1800681f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800681f0() noexcept {
    return kFunction_0x1800681f0;
}

// 0x1800688e0 FUN_1800688e0
// source: re/dump/decompile/0x1800688e0_FUN_1800688e0.c
// size: 103 bytes; thunk: false
// body sha256: f08550181287c50254c22e568de84a857cae9b3f5b856c73a22339f9a7a3b3f6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800688e0{
    "0x1800688e0",
    "FUN_1800688e0",
    R"F1800688e0S(undefined FUN_1800688e0())F1800688e0S",
    R"B1800688e0(// 0x1800688e0  FUN_1800688e0
// size=103 thunk=false
// signature: undefined FUN_1800688e0()
// status: ok


undefined8
FUN_1800688e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_20;
  undefined **local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = &PTR_vftable_std__System_error_category_1803e9500;
  local_10 = param_1;
  FUN_1800681f0(param_1,param_2,&local_20,param_4,0);
  if ((int)local_20 == 0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800670f0("weakly_canonical",&local_20,param_2,param_4,1);
}


)B1800688e0",
    "f08550181287c50254c22e568de84a857cae9b3f5b856c73a22339f9a7a3b3f6",
    R"F1800688e0C(FUN_1800670f0
FUN_1800681f0)F1800688e0C",
    R"F1800688e0D()F1800688e0D",
    R"F1800688e0T("weakly_canonical")F1800688e0T",
    R"F1800688e0F(19: if ((int)local_20 == 0) {
20: return param_1;)F1800688e0F",
    R"F1800688e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800688e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800688e0() noexcept {
    return kFunction_0x1800688e0;
}

// 0x180068950 FUN_180068950
// source: re/dump/decompile/0x180068950_FUN_180068950.c
// size: 149 bytes; thunk: false
// body sha256: 90f880655ba59fe504c7d4a437fb2872f435f15a2d75337ff30330c6e4e36605
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180068950{
    "0x180068950",
    "FUN_180068950",
    R"F180068950S(undefined FUN_180068950())F180068950S",
    R"B180068950(// 0x180068950  FUN_180068950
// size=149 thunk=false
// signature: undefined FUN_180068950()
// status: ok


undefined8 * FUN_180068950(char *param_1)

{
  size_t _Size;
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  size_t sVar4;
  undefined8 *_Buf1;
  
  puVar2 = DAT_1803eb3d0;
  puVar1 = DAT_1803eb3c8;
  if (param_1 != (char *)0x0) {
    for (; puVar1 != puVar2; puVar1 = puVar1 + 8) {
      if (*(char *)(puVar1 + 7) == '\0') {
        sVar4 = strlen(param_1);
        _Size = puVar1[2];
        _Buf1 = puVar1;
        if (0xf < (ulonglong)puVar1[3]) {
          _Buf1 = (undefined8 *)*puVar1;
        }
        if ((_Size == sVar4) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,param_1,_Size), iVar3 == 0))))
        {
          return puVar1;
        }
      }
    }
  }
  return (undefined8 *)0x0;
}


)B180068950",
    "90f880655ba59fe504c7d4a437fb2872f435f15a2d75337ff30330c6e4e36605",
    R"F180068950C()F180068950C",
    R"F180068950D(DAT_1803eb3c8
DAT_1803eb3d0)F180068950D",
    R"F180068950T()F180068950T",
    R"F180068950F(19: if (param_1 != (char *)0x0) {
20: for (; puVar1 != puVar2; puVar1 = puVar1 + 8) {
21: if (*(char *)(puVar1 + 7) == '\0') {
25: if (0xf < (ulonglong)puVar1[3]) {
28: if ((_Size == sVar4) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,param_1,_Size), iVar3 == 0))))
30: return puVar1;
35: return (undefined8 *)0x0;)F180068950F",
    R"F180068950U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb3c8.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb3d0.)F180068950U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180068950() noexcept {
    return kFunction_0x180068950;
}

// 0x1800689f0 FUN_1800689f0
// source: re/dump/decompile/0x1800689f0_FUN_1800689f0.c
// size: 1185 bytes; thunk: false
// body sha256: ebc5deba62bb480e7f1a67fa712c8dcc6c9de12248c4a7fb26a05f72da969604
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800689f0{
    "0x1800689f0",
    "FUN_1800689f0",
    R"F1800689f0S(undefined FUN_1800689f0())F1800689f0S",
    R"B1800689f0(// 0x1800689f0  FUN_1800689f0
// size=1185 thunk=false
// signature: undefined FUN_1800689f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800689f0(void)

{
  longlong lVar1;
  longlong lVar2;
  size_t _Size;
  double dVar3;
  undefined8 *puVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  HMODULE pHVar10;
  ulonglong uVar11;
  INT_PTR IVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 ****ppppuVar15;
  undefined8 *puVar16;
  char *pcVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 ***local_80 [2];
  size_t local_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  if ((((DAT_1803eb3c8 != DAT_1803eb3d0) && (DAT_1803ff980 == '\0')) &&
      (plVar9 = (longlong *)FUN_180039770(), plVar9 != (longlong *)0x0)) &&
     (lVar1 = plVar9[1], lVar1 != 0)) {
    if (DAT_1803fa608 == (float *)0x0) {
      dVar3 = 0.0;
    }
    else {
      dVar3 = (double)*DAT_1803fa608;
    }
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar10 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar10,"lua_gettop");
    }
    uVar11 = (*DAT_1803fcfa0)(lVar1);
    uVar19 = 0;
    puVar16 = DAT_1803eb3c8;
    puVar18 = DAT_1803eb3d0;
    if ((longlong)DAT_1803eb3d0 - (longlong)DAT_1803eb3c8 >> 6 != 0) {
      do {
        if ((*(char *)(puVar16 + uVar19 * 8 + 7) == '\0') &&
           ((double)puVar16[uVar19 * 8 + 4] <= dVar3)) {
          iVar8 = *(int *)((longlong)puVar16 + uVar19 * 0x40 + 0x34);
          FUN_18016d4c0(local_80);
          DAT_1803eb3c8[uVar19 * 8 + 4] = dVar3 + (double)DAT_1803eb3c8[uVar19 * 8 + 5];
          if ((0 < *(int *)(DAT_1803eb3c8 + uVar19 * 8 + 6)) &&
             (iVar7 = *(int *)(DAT_1803eb3c8 + uVar19 * 8 + 6) + -1,
             *(int *)(DAT_1803eb3c8 + uVar19 * 8 + 6) = iVar7, iVar7 == 0)) {
            *(undefined1 *)(DAT_1803eb3c8 + uVar19 * 8 + 7) = 1;
          }
          if (iVar8 < 0x40000000) {
            (**(code **)(*plVar9 + 0x128))(plVar9,iVar8);
          }
          else {
            lVar2 = plVar9[1];
            cVar6 = FUN_18002d6e0(lVar2);
            if (cVar6 != '\0') {
              (*DAT_1803faf38)(lVar2,0xffffd8ed);
              iVar7 = (*DAT_1803faff8)(lVar2,0xffffffff);
              pcVar5 = DAT_1803faf10;
              if (iVar7 == 5) {
                (*DAT_1803faf88)(lVar2,0xffffffff,iVar8 + -0x40000000);
                (*DAT_1803faee0)(lVar2,0xfffffffe);
                goto LAB_180068bdf;
              }
              iVar8 = (*DAT_1803fb088)(lVar2);
              (*pcVar5)(lVar2,iVar8 + -1);
            }
            if ((lVar2 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
              (*DAT_1803fafd8)(lVar2);
            }
          }
LAB_180068bdf:
          if (DAT_1803fe490 == (FARPROC)0x0) {
            pHVar10 = GetModuleHandleA("lua_shared.dll");
            DAT_1803fe490 = GetProcAddress(pHVar10,"lua_type");
          }
          IVar12 = (*DAT_1803fe490)(lVar1,0xffffffff);
          if ((int)IVar12 == 6) {
            DAT_1803ff8e8 = DAT_1803ff8e8 + 1;
            iVar8 = FUN_180023180(lVar1,0,0);
            if (iVar8 != 0) {
              if (DAT_1803fe490 == (FARPROC)0x0) {
                pHVar10 = GetModuleHandleA("lua_shared.dll");
                DAT_1803fe490 = GetProcAddress(pHVar10,"lua_type");
              }
              IVar12 = (*DAT_1803fe490)(lVar1,0xffffffff);
              if ((int)IVar12 == 4) {
                pcVar13 = (char *)(**(code **)(*plVar9 + 0xb8))(plVar9,0xffffffff,0);
              }
              else {
                pcVar13 = "(non-string error)";
              }
              ppppuVar15 = local_80;
              if (0xf < local_68) {
                ppppuVar15 = (undefined8 ****)local_80[0];
              }
              pcVar17 = "?";
              if (pcVar13 != (char *)0x0) {
                pcVar17 = pcVar13;
              }
              FUN_180014410("[LUATIMER] \'%s\' errored, removed: %s\n",ppppuVar15,pcVar17);
              puVar18 = DAT_1803eb3d0;
              for (puVar16 = DAT_1803eb3c8; puVar16 != puVar18; puVar16 = puVar16 + 8) {
                ppppuVar15 = local_80;
                if (0xf < local_68) {
                  ppppuVar15 = (undefined8 ****)local_80[0];
                }
                _Size = puVar16[2];
                puVar14 = puVar16;
                if (0xf < (ulonglong)puVar16[3]) {
                  puVar14 = (undefined8 *)*puVar16;
                }
                if ((_Size == local_70) &&
                   ((_Size == 0 || (iVar8 = memcmp(puVar14,ppppuVar15,_Size), iVar8 == 0)))) {
                  *(undefined1 *)(puVar16 + 7) = 1;
                }
              }
              if (DAT_1803ff978 != (code *)0x0) {
                ppppuVar15 = local_80;
                if (0xf < local_68) {
                  ppppuVar15 = (undefined8 ****)local_80[0];
                }
                (*DAT_1803ff978)("timer",ppppuVar15,pcVar17);
              }
            }
            if (0 < DAT_1803ff8e8) {
              DAT_1803ff8e8 = DAT_1803ff8e8 + -1;
            }
          }
          if (DAT_180425540 == (FARPROC)0x0) {
            pHVar10 = GetModuleHandleA("lua_shared.dll");
            DAT_180425540 = GetProcAddress(pHVar10,"lua_settop");
          }
          (*DAT_180425540)(lVar1,uVar11 & 0xffffffff);
          FUN_18020e450(local_80);
          puVar16 = DAT_1803eb3c8;
          puVar18 = DAT_1803eb3d0;
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < (ulonglong)((longlong)puVar18 - (longlong)puVar16 >> 6));
    }
    if (puVar16 != puVar18) {
      do {
        puVar14 = puVar16 + 8;
        if (*(char *)(puVar16 + 7) != '\0') {
          FUN_18002d8c0(plVar9,*(undefined4 *)((longlong)puVar16 + 0x34));
          puVar4 = DAT_1803eb3d0;
          puVar18 = puVar16;
          for (; puVar14 != puVar4; puVar14 = puVar14 + 8) {
            FUN_18020e8a0(puVar18,puVar14);
            puVar18[4] = puVar14[4];
            puVar18[5] = puVar14[5];
            *(undefined4 *)(puVar18 + 6) = *(undefined4 *)(puVar14 + 6);
            *(undefined4 *)((longlong)puVar18 + 0x34) = *(undefined4 *)((longlong)puVar14 + 0x34);
            *(undefined1 *)(puVar18 + 7) = *(undefined1 *)(puVar14 + 7);
            puVar18 = puVar18 + 8;
          }
          local_88 = DAT_1803eb3d0 + -8;
          FUN_18020e450();
          puVar18 = DAT_1803eb3d0 + -8;
          puVar14 = puVar16;
          DAT_1803eb3d0 = puVar18;
        }
        puVar16 = puVar14;
      } while (puVar14 != puVar18);
    }
  }
  return;
}


)B1800689f0",
    "ebc5deba62bb480e7f1a67fa712c8dcc6c9de12248c4a7fb26a05f72da969604",
    R"F1800689f0C(FUN_180014410
FUN_180023180
FUN_18002d6e0
FUN_18002d8c0
FUN_180039770
FUN_18016d4c0
FUN_18020e450
FUN_18020e8a0)F1800689f0C",
    R"F1800689f0D(LAB_180068bdf
DAT_1803da4c0
DAT_1803eb3c8
DAT_1803eb3d0
DAT_1803fa608
DAT_1803faee0
DAT_1803faf10
DAT_1803faf38
DAT_1803faf88
DAT_1803fafd8
DAT_1803faff8
DAT_1803fb088
DAT_1803fcfa0
DAT_1803fe490
DAT_1803ff8e8
DAT_1803ff978
DAT_1803ff980
DAT_180425540)F1800689f0D",
    R"F1800689f0T("?"
"timer"
"lua_type"
"lua_gettop"
"lua_settop"
"lua_shared.dll"
"(non-string error)"
"[LUATIMER] \\'%s\\' errored, removed: %s\\n")F1800689f0T",
    R"F1800689f0F(40: if ((((DAT_1803eb3c8 != DAT_1803eb3d0) && (DAT_1803ff980 == '\0')) &&
43: if (DAT_1803fa608 == (float *)0x0) {
46: else {
49: if (DAT_1803fcfa0 == (FARPROC)0x0) {
57: if ((longlong)DAT_1803eb3d0 - (longlong)DAT_1803eb3c8 >> 6 != 0) {
58: do {
59: if ((*(char *)(puVar16 + uVar19 * 8 + 7) == '\0') &&
64: if ((0 < *(int *)(DAT_1803eb3c8 + uVar19 * 8 + 6)) &&
69: if (iVar8 < 0x40000000) {
72: else {
75: if (cVar6 != '\0') {
79: if (iVar7 == 5) {
82: goto LAB_180068bdf;
87: if ((lVar2 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
91: LAB_180068bdf:
92: if (DAT_1803fe490 == (FARPROC)0x0) {
97: if ((int)IVar12 == 6) {
100: if (iVar8 != 0) {
101: if (DAT_1803fe490 == (FARPROC)0x0) {
106: if ((int)IVar12 == 4) {
109: else {
113: if (0xf < local_68) {
117: if (pcVar13 != (char *)0x0) {
122: for (puVar16 = DAT_1803eb3c8; puVar16 != puVar18; puVar16 = puVar16 + 8) {
124: if (0xf < local_68) {
129: if (0xf < (ulonglong)puVar16[3]) {
132: if ((_Size == local_70) &&
137: if (DAT_1803ff978 != (code *)0x0) {
139: if (0xf < local_68) {
145: if (0 < DAT_1803ff8e8) {
149: if (DAT_180425540 == (FARPROC)0x0) {
161: if (puVar16 != puVar18) {
162: do {
164: if (*(char *)(puVar16 + 7) != '\0') {
168: for (; puVar14 != puVar4; puVar14 = puVar14 + 8) {
187: return;)F1800689f0F",
    R"F1800689f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180068bdf.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb3c8.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb3d0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803faee0.
TODO: recover the declaration, type and value for global/data reference DAT_1803faf10.
TODO: recover the declaration, type and value for global/data reference DAT_1803faf38.
TODO: recover the declaration, type and value for global/data reference DAT_1803faf88.
TODO: recover the declaration, type and value for global/data reference DAT_1803fafd8.
TODO: recover the declaration, type and value for global/data reference DAT_1803faff8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fb088.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcfa0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe490.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff8e8.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff978.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff980.
TODO: recover the declaration, type and value for global/data reference DAT_180425540.
TODO: resolve the indirect call in body 53: uVar11 = (*DAT_1803fcfa0)(lVar1);.
TODO: resolve the indirect call in body 70: (**(code **)(*plVar9 + 0x128))(plVar9,iVar8);.
TODO: resolve the indirect call in body 76: (*DAT_1803faf38)(lVar2,0xffffd8ed);.
TODO: resolve the indirect call in body 77: iVar7 = (*DAT_1803faff8)(lVar2,0xffffffff);.
TODO: resolve the indirect call in body 80: (*DAT_1803faf88)(lVar2,0xffffffff,iVar8 + -0x40000000);.
TODO: resolve the indirect call in body 81: (*DAT_1803faee0)(lVar2,0xfffffffe);.
TODO: resolve the indirect call in body 84: iVar8 = (*DAT_1803fb088)(lVar2);.
TODO: resolve the indirect call in body 85: (*pcVar5)(lVar2,iVar8 + -1);.
TODO: resolve the indirect call in body 87: if ((lVar2 != 0) && (DAT_1803fafd8 != (code *)0x0)) {.
TODO: resolve the indirect call in body 88: (*DAT_1803fafd8)(lVar2);.
TODO: resolve the indirect call in body 96: IVar12 = (*DAT_1803fe490)(lVar1,0xffffffff);.
TODO: resolve the indirect call in body 105: IVar12 = (*DAT_1803fe490)(lVar1,0xffffffff);.
TODO: resolve the indirect call in body 107: pcVar13 = (char *)(**(code **)(*plVar9 + 0xb8))(plVar9,0xffffffff,0);.
TODO: resolve the indirect call in body 137: if (DAT_1803ff978 != (code *)0x0) {.
TODO: resolve the indirect call in body 142: (*DAT_1803ff978)("timer",ppppuVar15,pcVar17);.
TODO: resolve the indirect call in body 153: (*DAT_180425540)(lVar1,uVar11 & 0xffffffff);.)F1800689f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800689f0() noexcept {
    return kFunction_0x1800689f0;
}

// 0x180068ea0 FUN_180068ea0
// source: re/dump/decompile/0x180068ea0_FUN_180068ea0.c
// size: 1190 bytes; thunk: false
// body sha256: 793ff9056406d549707302023d07ef4bf63ecf4e74c6c98240b962310a50d3ba
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180068ea0{
    "0x180068ea0",
    "FUN_180068ea0",
    R"F180068ea0S(undefined FUN_180068ea0())F180068ea0S",
    R"B180068ea0(// 0x180068ea0  FUN_180068ea0
// size=1190 thunk=false
// signature: undefined FUN_180068ea0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180068ea0(undefined8 param_1)

{
  int iVar1;
  DWORD DVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_538 [32];
  wchar_t *local_518;
  undefined4 local_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 *local_4a0;
  undefined8 *local_498;
  undefined8 *local_490;
  undefined1 local_488 [32];
  undefined8 local_468;
  wchar_t local_458 [264];
  WCHAR local_248 [264];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_538;
  local_508 = 0;
  local_468 = param_1;
  memset(local_458,0,0x208);
  local_518 = local_458;
  iVar1 = SHGetFolderPathW(0,0x8005,0,0);
  if ((iVar1 < 0) || (local_458[0] == L'\0')) {
    memset(local_248,0,0x208);
    DVar2 = GetTempPathW(0x104,local_248);
    if ((DVar2 == 0) || (local_248[0] == L'\0')) {
      local_490 = &local_500;
      local_500 = 0;
      uStack_4f8 = 0;
      local_4f0 = 0;
      local_4e8 = 0;
      FUN_180211510(&local_500,L"scriptdata",10);
      local_508 = 0;
      local_498 = &local_4e0;
      local_4e0 = 0;
      uStack_4d8 = 0;
      local_4d0 = 0;
      local_4c8 = 0;
      FUN_180211510(&local_4e0,L"mayrrX64",8);
      local_508 = 0;
      local_4a0 = &local_4c0;
      local_4c0 = 0;
      uStack_4b8 = 0;
      local_4b0 = 0;
      local_4a8 = 0;
      FUN_180211510(&local_4c0,&DAT_180345b1c,1);
      local_508 = 0;
      uVar4 = FUN_180066720(local_488,&local_4c0,&local_4e0);
      FUN_180066720(param_1,uVar4,&local_500);
      local_508 = 1;
      FUN_18021e290(local_488);
      FUN_18021e290(&local_4c0);
      FUN_18021e290(&local_4e0);
    }
    else {
      local_490 = &local_500;
      local_500 = 0;
      uStack_4f8 = 0;
      local_4f0 = 0;
      local_4e8 = 0;
      FUN_180211510(&local_500,L"scriptdata",10);
      local_508 = 0;
      local_498 = &local_4e0;
      local_4e0 = 0;
      uStack_4d8 = 0;
      local_4d0 = 0;
      local_4c8 = 0;
      FUN_180211510(&local_4e0,L"mayrrX64",8);
      local_508 = 0;
      local_4a0 = &local_4c0;
      sVar3 = wcslen(local_248);
      local_4c0 = 0;
      uStack_4b8 = 0;
      local_4b0 = 0;
      local_4a8 = 0;
      FUN_180211510(&local_4c0,local_248,sVar3);
      local_508 = 0;
      uVar4 = FUN_180066720(local_488,&local_4c0,&local_4e0);
      FUN_180066720(param_1,uVar4,&local_500);
      local_508 = 1;
      FUN_18021e290(local_488);
      FUN_18021e290(&local_4c0);
      FUN_18021e290(&local_4e0);
    }
    puVar5 = &local_500;
  }
  else {
    local_4a0 = &local_4c0;
    local_4c0 = 0;
    uStack_4b8 = 0;
    local_4b0 = 0;
    local_4a8 = 0;
    FUN_180211510(&local_4c0,L"scriptdata",10);
    local_508 = 0;
    local_498 = &local_4e0;
    local_4e0 = 0;
    uStack_4d8 = 0;
    local_4d0 = 0;
    local_4c8 = 0;
    FUN_180211510(&local_4e0,L"mayrrX64",8);
    local_508 = 0;
    local_490 = &local_500;
    sVar3 = wcslen(local_458);
    local_500 = 0;
    uStack_4f8 = 0;
    local_4f0 = 0;
    local_4e8 = 0;
    FUN_180211510(&local_500,local_458,sVar3);
    local_508 = 0;
    uVar4 = FUN_180066720(local_488,&local_500,&local_4e0);
    FUN_180066720(param_1,uVar4,&local_4c0);
    local_508 = 1;
    FUN_18021e290(local_488);
    FUN_18021e290(&local_500);
    FUN_18021e290(&local_4e0);
    puVar5 = &local_4c0;
  }
  FUN_18021e290(puVar5);
  return param_1;
}


)B180068ea0",
    "793ff9056406d549707302023d07ef4bf63ecf4e74c6c98240b962310a50d3ba",
    R"F180068ea0C(FUN_180066720
FUN_180211510
FUN_18021e290)F180068ea0C",
    R"F180068ea0D(DAT_180345b1c
DAT_1803da4c0)F180068ea0D",
    R"F180068ea0T("mayrrX64"
"scriptdata")F180068ea0T",
    R"F180068ea0F(47: if ((iVar1 < 0) || (local_458[0] == L'\0')) {
50: if ((DVar2 == 0) || (local_248[0] == L'\0')) {
79: else {
111: else {
143: return param_1;)F180068ea0F",
    R"F180068ea0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180345b1c.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180068ea0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180068ea0() noexcept {
    return kFunction_0x180068ea0;
}

// 0x180069350 FUN_180069350
// source: re/dump/decompile/0x180069350_FUN_180069350.c
// size: 400 bytes; thunk: false
// body sha256: e88091569ecc4ac9408640e11a085dfe91fde343575228450d7e65ed129d4531
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180069350{
    "0x180069350",
    "FUN_180069350",
    R"F180069350S(undefined FUN_180069350())F180069350S",
    R"B180069350(// 0x180069350  FUN_180069350
// size=400 thunk=false
// signature: undefined FUN_180069350()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180069350(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  byte ****ppppbVar3;
  byte ****ppppbVar4;
  byte ****ppppbVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  byte ***local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  uVar2 = FUN_180066000(param_1,local_58);
  FUN_180065810(uVar2,local_38);
  FUN_18021e290(local_58);
  ppppbVar3 = (byte ****)local_38[0];
  if (local_20 < 0x10) {
    ppppbVar3 = local_38;
  }
  ppppbVar4 = (byte ****)((longlong)ppppbVar3 + local_28);
  for (ppppbVar5 = ppppbVar3; ppppbVar5 != ppppbVar4;
      ppppbVar5 = (byte ****)((longlong)ppppbVar5 + 1)) {
    iVar1 = tolower((uint)*(byte *)ppppbVar5);
    *(byte *)ppppbVar3 = (byte)iVar1;
    ppppbVar3 = (byte ****)((longlong)ppppbVar3 + 1);
  }
  ppppbVar3 = local_38;
  if (0xf < local_20) {
    ppppbVar3 = (byte ****)local_38[0];
  }
  if ((local_28 != 4) || (*(int *)ppppbVar3 != 0x7478742e)) {
    ppppbVar3 = local_38;
    if (0xf < local_20) {
      ppppbVar3 = (byte ****)local_38[0];
    }
    if ((local_28 != 4) || (*(int *)ppppbVar3 != 0x676f6c2e)) {
      ppppbVar3 = local_38;
      if (0xf < local_20) {
        ppppbVar3 = (byte ****)local_38[0];
      }
      if (local_28 == 5) {
        iVar1 = *(int *)ppppbVar3 + -0x6f736a2e;
        if (iVar1 == 0) {
          iVar1 = *(byte *)((longlong)ppppbVar3 + 4) - 0x6e;
        }
        if (iVar1 == 0) goto LAB_1800694ae;
      }
      ppppbVar3 = local_38;
      if (0xf < local_20) {
        ppppbVar3 = (byte ****)local_38[0];
      }
      if ((local_28 != 4) || (*(int *)ppppbVar3 != 0x7461642e)) {
        ppppbVar3 = local_38;
        if (0xf < local_20) {
          ppppbVar3 = (byte ****)local_38[0];
        }
        if ((local_28 != 4) || (*(int *)ppppbVar3 != 0x7673632e)) {
          ppppbVar3 = local_38;
          if (0xf < local_20) {
            ppppbVar3 = (byte ****)local_38[0];
          }
          if ((local_28 != 4) || (*(int *)ppppbVar3 != 0x6766632e)) {
            uVar2 = 0;
            goto LAB_1800694b4;
          }
        }
      }
    }
  }
LAB_1800694ae:
  uVar2 = 1;
LAB_1800694b4:
  FUN_18020e450(local_38);
  return uVar2;
}


)B180069350",
    "e88091569ecc4ac9408640e11a085dfe91fde343575228450d7e65ed129d4531",
    R"F180069350C(FUN_180065810
FUN_180066000
FUN_18020e450
FUN_18021e290)F180069350C",
    R"F180069350D(LAB_1800694ae
LAB_1800694b4
DAT_1803da4c0)F180069350D",
    R"F180069350T()F180069350T",
    R"F180069350F(29: if (local_20 < 0x10) {
33: for (ppppbVar5 = ppppbVar3; ppppbVar5 != ppppbVar4;
40: if (0xf < local_20) {
43: if ((local_28 != 4) || (*(int *)ppppbVar3 != 0x7478742e)) {
45: if (0xf < local_20) {
48: if ((local_28 != 4) || (*(int *)ppppbVar3 != 0x676f6c2e)) {
50: if (0xf < local_20) {
53: if (local_28 == 5) {
55: if (iVar1 == 0) {
58: if (iVar1 == 0) goto LAB_1800694ae;
61: if (0xf < local_20) {
64: if ((local_28 != 4) || (*(int *)ppppbVar3 != 0x7461642e)) {
66: if (0xf < local_20) {
69: if ((local_28 != 4) || (*(int *)ppppbVar3 != 0x7673632e)) {
71: if (0xf < local_20) {
74: if ((local_28 != 4) || (*(int *)ppppbVar3 != 0x6766632e)) {
76: goto LAB_1800694b4;
82: LAB_1800694ae:
84: LAB_1800694b4:
86: return uVar2;)F180069350F",
    R"F180069350U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1800694ae.
TODO: recover the declaration, type and value for global/data reference LAB_1800694b4.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180069350U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180069350() noexcept {
    return kFunction_0x180069350;
}

// 0x1800694e0 FUN_1800694e0
// source: re/dump/decompile/0x1800694e0_FUN_1800694e0.c
// size: 1120 bytes; thunk: false
// body sha256: feb4ba831ac52cfea05e15fe6a0d7484628a24e9941ababd08da74d711f0acf1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800694e0{
    "0x1800694e0",
    "FUN_1800694e0",
    R"F1800694e0S(undefined FUN_1800694e0())F1800694e0S",
    R"B1800694e0(// 0x1800694e0  FUN_1800694e0
// size=1120 thunk=false
// signature: undefined FUN_1800694e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1800694e0(char *param_1,undefined8 *******param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  size_t sVar4;
  longlong *plVar5;
  undefined8 *******pppppppuVar6;
  bool bVar7;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined8 *******local_1b0;
  undefined **ppuStack_1a8;
  undefined8 *******local_188;
  undefined8 local_180;
  undefined8 *******local_168;
  char local_160 [32];
  undefined8 *******local_140;
  undefined8 *******local_138;
  undefined8 local_130;
  char *local_128;
  size_t local_120;
  char *local_118;
  size_t local_110;
  undefined1 local_108 [8];
  undefined8 *****local_100 [5];
  undefined8 *******local_d8 [2];
  longlong local_c8;
  ulonglong local_c0;
  undefined8 *******local_b8 [2];
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 *******local_98;
  undefined8 *******pppppppuStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  longlong local_68 [9];
  
  local_68[6] = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  local_1b8 = 0;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return 0;
  }
  uVar3 = FUN_180068ea0(&local_188);
  FUN_1800688e0(local_d8,uVar3);
  FUN_18021e290(&local_188);
  local_1b0 = (undefined8 *******)0x0;
  ppuStack_1a8 = &PTR_vftable_std__System_error_category_1803e9500;
  FUN_180067d80(local_d8,&local_1b0);
  if ((int)local_1b0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1800670f0("create_directories",&local_1b0,local_d8);
  }
  local_138 = &local_188;
  local_118 = param_1;
  sVar4 = strlen(param_1);
  local_110 = sVar4;
  uVar1 = FUN_1802d75e4();
  local_128 = param_1;
  local_120 = sVar4;
  FUN_1800650e0(&local_188,uVar1,&local_128);
  local_1b8 = 0;
  uVar3 = FUN_180066720(&local_1b0,local_d8,&local_188);
  FUN_1800688e0(local_b8,uVar3);
  FUN_18021e290(&local_1b0);
  FUN_18021e290(&local_188);
  local_98 = (undefined8 *******)0x0;
  pppppppuStack_90 = (undefined8 *******)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_180066920(local_d8,&local_98);
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  FUN_180066920(local_b8,local_68);
  do {
    local_168 = local_d8;
    if (7 < local_c0) {
      local_168 = local_d8[0];
    }
    local_168 = (undefined8 *******)((longlong)local_168 + local_c8 * 2);
    local_118 = local_160;
    local_160[8] = '\0';
    local_160[9] = '\0';
    local_160[10] = '\0';
    local_160[0xb] = '\0';
    local_160[0xc] = '\0';
    local_160[0xd] = '\0';
    local_160[0xe] = '\0';
    local_160[0xf] = '\0';
    local_160[0x10] = '\0';
    local_160[0x11] = '\0';
    local_160[0x12] = '\0';
    local_160[0x13] = '\0';
    local_160[0x14] = '\0';
    local_160[0x15] = '\0';
    local_160[0x16] = '\0';
    local_160[0x17] = '\0';
    local_160[0x18] = '\a';
    local_160[0x19] = '\0';
    local_160[0x1a] = '\0';
    local_160[0x1b] = '\0';
    local_160[0x1c] = '\0';
    local_160[0x1d] = '\0';
    local_160[0x1e] = '\0';
    local_160[0x1f] = '\0';
    local_160[0] = '\0';
    local_160[1] = '\0';
    local_160[2] = '\0';
    local_160[3] = '\0';
    local_160[4] = '\0';
    local_160[5] = '\0';
    local_160[6] = '\0';
    local_160[7] = '\0';
    local_140 = local_d8;
    bVar7 = local_98 == local_168;
    local_1b8 = 0;
    local_128 = local_160;
    local_138 = local_168;
    FUN_18021e290(local_160);
    if (bVar7) {
      if ((undefined8 ********)param_2 != local_b8) {
        pppppppuVar6 = local_b8;
        if (7 < local_a0) {
          pppppppuVar6 = local_b8[0];
        }
        FUN_18021a7b0(param_2,pppppppuVar6,local_a8);
      }
      local_1b0 = (undefined8 *******)(local_68 + 1);
      FUN_18021e290(local_68 + 1);
      local_1b0 = &pppppppuStack_90;
      FUN_18021e290(&pppppppuStack_90);
      FUN_18021e290(local_b8);
      FUN_18021e290(local_d8);
      return 1;
    }
    plVar5 = (longlong *)FUN_180066a70(local_b8,local_108);
    local_1b8 = 1;
    if (local_68[0] == *plVar5) {
LAB_1800697db:
      bVar7 = true;
    }
    else {
      local_188 = &pppppppuStack_90;
      if (7 < local_78) {
        local_188 = pppppppuStack_90;
      }
      local_130 = uStack_80;
      local_180 = uStack_80;
      local_138 = local_188;
      iVar2 = FUN_180065970(local_68 + 1,&local_188);
      if (iVar2 != 0) goto LAB_1800697db;
      bVar7 = false;
    }
    local_1b8 = 0;
    local_1b0 = (undefined8 *******)local_100;
    FUN_18021e290(local_100);
    if (bVar7) {
      local_1b0 = (undefined8 *******)(local_68 + 1);
      FUN_18021e290(local_68 + 1);
      local_1b0 = &pppppppuStack_90;
      FUN_18021e290(&pppppppuStack_90);
      FUN_18021e290(local_b8);
      FUN_18021e290(local_d8);
      return 0;
    }
    FUN_18020c660(&local_98);
    FUN_18020c660(local_68);
  } while( true );
}


)B1800694e0",
    "feb4ba831ac52cfea05e15fe6a0d7484628a24e9941ababd08da74d711f0acf1",
    R"F1800694e0C(FUN_1800650e0
FUN_180065970
FUN_180066720
FUN_180066920
FUN_180066a70
FUN_1800670f0
FUN_180067d80
FUN_1800688e0
FUN_180068ea0
FUN_18020c660
FUN_18021a7b0
FUN_18021e290
FUN_1802d75e4)F1800694e0C",
    R"F1800694e0D(LAB_1800697db
DAT_1803da4c0)F1800694e0D",
    R"F1800694e0T("create_directories")F1800694e0T",
    R"F1800694e0F(53: if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
54: return 0;
62: if ((int)local_1b0 != 0) {
93: do {
95: if (7 < local_c0) {
138: if (bVar7) {
139: if ((undefined8 ********)param_2 != local_b8) {
141: if (7 < local_a0) {
152: return 1;
156: if (local_68[0] == *plVar5) {
157: LAB_1800697db:
160: else {
162: if (7 < local_78) {
169: if (iVar2 != 0) goto LAB_1800697db;
175: if (bVar7) {
182: return 0;)F1800694e0F",
    R"F1800694e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1800697db.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F1800694e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800694e0() noexcept {
    return kFunction_0x1800694e0;
}

// 0x180069950 FUN_180069950
// source: re/dump/decompile/0x180069950_FUN_180069950.c
// size: 708 bytes; thunk: false
// body sha256: 20ca44dff1d7b6da53e149a76ab91ef779129501d0cf50c1dfaff8b0d0cb3694
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180069950{
    "0x180069950",
    "FUN_180069950",
    R"F180069950S(undefined FUN_180069950())F180069950S",
    R"B180069950(// 0x180069950  FUN_180069950
// size=708 thunk=false
// signature: undefined FUN_180069950()
// status: ok


void FUN_180069950(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  HMODULE pHVar4;
  ulonglong uVar5;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar4,"lua_gettop");
    }
    uVar5 = (*DAT_1803fcfa0)(lVar1);
    cVar3 = FUN_1800260c0(lVar1,0x2736efefe1fb290);
    pcVar2 = DAT_1803fcbe0;
    if (cVar3 == '\0') {
      FUN_180014410("[LUATIMER] api table unavailable -- persist not ready\n");
    }
    else if (DAT_1803fcbe0 != (code *)0x0) {
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180069e40);
      (*pcVar2)(lVar1,0xfffffffe,"Simple");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006a0d0);
      (*pcVar2)(lVar1,0xfffffffe,"Create");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18006a0e0);
      (*pcVar2)(lVar1,0xfffffffe,"Exists");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18006a150);
      (*pcVar2)(lVar1,0xfffffffe,"Remove");
      (*pcVar2)(lVar1,0xfffffffe,"timer");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006a3f0);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180345d78);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006a690);
      (*pcVar2)(lVar1,0xfffffffe,"Write");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006a830);
      (*pcVar2)(lVar1,0xfffffffe,"Exists");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006a9f0);
      (*pcVar2)(lVar1,0xfffffffe,"Delete");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006ae00);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180345d90);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006afb0);
      (*pcVar2)(lVar1,0xfffffffe,"CreateDirectory");
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180345374);
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar4 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
      FUN_180014410("[LUATIMER] timer and File tables registered\n");
      return;
    }
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
    }
    (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
  }
  return;
}


)B180069950",
    "20ca44dff1d7b6da53e149a76ab91ef779129501d0cf50c1dfaff8b0d0cb3694",
    R"F180069950C(FUN_180014410
FUN_1800260c0
FUN_18006a0e0
FUN_18006a150)F180069950C",
    R"F180069950D(LAB_180069e40
LAB_18006a0d0
LAB_18006a3f0
LAB_18006a690
LAB_18006a830
LAB_18006a9f0
LAB_18006ae00
LAB_18006afb0
DAT_180345374
DAT_180345d78
DAT_180345d90
DAT_1803fcbe0
DAT_1803fcfa0
DAT_180425540)F180069950D",
    R"F180069950T("Write"
"timer"
"Create"
"Delete"
"Exists"
"Remove"
"Simple"
"lua_gettop"
"lua_settop"
"lua_shared.dll"
"CreateDirectory"
"[LUATIMER] timer and File tables registered\\n"
"[LUATIMER] api table unavailable -- persist not ready\\n")F180069950T",
    R"F180069950F(16: if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) {
17: if (DAT_1803fcfa0 == (FARPROC)0x0) {
24: if (cVar3 == '\0') {
27: else if (DAT_1803fcbe0 != (code *)0x0) {
52: if (DAT_180425540 == (FARPROC)0x0) {
58: return;
60: if (DAT_180425540 == (FARPROC)0x0) {
66: return;)F180069950F",
    R"F180069950U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180069e40.
TODO: recover the declaration, type and value for global/data reference LAB_18006a0d0.
TODO: recover the declaration, type and value for global/data reference LAB_18006a3f0.
TODO: recover the declaration, type and value for global/data reference LAB_18006a690.
TODO: recover the declaration, type and value for global/data reference LAB_18006a830.
TODO: recover the declaration, type and value for global/data reference LAB_18006a9f0.
TODO: recover the declaration, type and value for global/data reference LAB_18006ae00.
TODO: recover the declaration, type and value for global/data reference LAB_18006afb0.
TODO: recover the declaration, type and value for global/data reference DAT_180345374.
TODO: recover the declaration, type and value for global/data reference DAT_180345d78.
TODO: recover the declaration, type and value for global/data reference DAT_180345d90.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbe0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcfa0.
TODO: recover the declaration, type and value for global/data reference DAT_180425540.
TODO: resolve the indirect call in body 21: uVar5 = (*DAT_1803fcfa0)(lVar1);.
TODO: resolve the indirect call in body 27: else if (DAT_1803fcbe0 != (code *)0x0) {.
TODO: resolve the indirect call in body 28: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 29: (**(code **)(*param_1 + 0x100))(param_1,&LAB_180069e40);.
TODO: resolve the indirect call in body 30: (*pcVar2)(lVar1,0xfffffffe,"Simple");.
TODO: resolve the indirect call in body 31: (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006a0d0);.
TODO: resolve the indirect call in body 32: (*pcVar2)(lVar1,0xfffffffe,"Create");.
TODO: resolve the indirect call in body 33: (**(code **)(*param_1 + 0x100))(param_1,FUN_18006a0e0);.
TODO: resolve the indirect call in body 34: (*pcVar2)(lVar1,0xfffffffe,"Exists");.
TODO: resolve the indirect call in body 35: (**(code **)(*param_1 + 0x100))(param_1,FUN_18006a150);.
TODO: resolve the indirect call in body 36: (*pcVar2)(lVar1,0xfffffffe,"Remove");.
TODO: resolve the indirect call in body 37: (*pcVar2)(lVar1,0xfffffffe,"timer");.
TODO: resolve the indirect call in body 38: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 39: (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006a3f0);.
TODO: resolve the indirect call in body 40: (*pcVar2)(lVar1,0xfffffffe,&DAT_180345d78);.
TODO: resolve the indirect call in body 41: (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006a690);.
TODO: resolve the indirect call in body 42: (*pcVar2)(lVar1,0xfffffffe,"Write");.
TODO: resolve the indirect call in body 43: (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006a830);.
TODO: resolve the indirect call in body 44: (*pcVar2)(lVar1,0xfffffffe,"Exists");.
TODO: resolve the indirect call in body 45: (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006a9f0);.
TODO: resolve the indirect call in body 46: (*pcVar2)(lVar1,0xfffffffe,"Delete");.
TODO: resolve the indirect call in body 47: (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006ae00);.
TODO: resolve the indirect call in body 48: (*pcVar2)(lVar1,0xfffffffe,&DAT_180345d90);.
TODO: resolve the indirect call in body 49: (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006afb0);.
TODO: resolve the indirect call in body 50: (*pcVar2)(lVar1,0xfffffffe,"CreateDirectory");.
TODO: resolve the indirect call in body 51: (*pcVar2)(lVar1,0xfffffffe,&DAT_180345374);.
TODO: resolve the indirect call in body 56: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.
TODO: resolve the indirect call in body 64: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.)F180069950U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180069950() noexcept {
    return kFunction_0x180069950;
}

// 0x180069c20 FUN_180069c20
// source: re/dump/decompile/0x180069c20_FUN_180069c20.c
// size: 530 bytes; thunk: false
// body sha256: c01248b3b2569b2a113fc308a335f968dc102fdd3e29eb8af26329646a6c95d0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180069c20{
    "0x180069c20",
    "FUN_180069c20",
    R"F180069c20S(undefined FUN_180069c20())F180069c20S",
    R"B180069c20(// 0x180069c20  FUN_180069c20
// size=530 thunk=false
// signature: undefined FUN_180069c20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180069c20(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  int iVar6;
  longlong *plVar7;
  char cVar8;
  undefined1 auStack_a8 [32];
  ulonglong *local_88;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  double local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  int local_44;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  plVar7 = (longlong *)FUN_180039770();
  if ((plVar7 != (longlong *)0x0) && (plVar7[1] == param_2)) {
    dVar2 = (double)(**(code **)(*plVar7 + 0x160))(plVar7,1);
    if ((DAT_1803faff8 == (code *)0x0) || (plVar7[1] == 0)) {
      cVar8 = (**(code **)(*plVar7 + 0x138))(plVar7,2,6);
    }
    else {
      iVar6 = (*DAT_1803faff8)(plVar7[1],2);
      cVar8 = iVar6 == 6;
    }
    if (cVar8 != '\0') {
      if ((DAT_1803faf38 == (code *)0x0) || (plVar7[1] == 0)) {
        (**(code **)(*plVar7 + 8))(plVar7,2);
      }
      else {
        (*DAT_1803faf38)(plVar7[1],2);
      }
      iVar6 = FUN_18002d7a0(plVar7);
      uVar4 = _UNK_1803814b8;
      uVar3 = _DAT_1803814b0;
      if (iVar6 != -1) {
        uStack_70 = 0;
        local_68 = _DAT_1803814b0;
        uStack_60 = _UNK_1803814b8;
        local_78 = 0;
        local_58 = 0.0;
        uStack_50 = 0;
        local_48 = 0;
        local_44 = 0xffffffff;
        local_40 = 0;
        FUN_180212700(&local_78,&DAT_18033e5ea,0);
        puVar5 = DAT_1803eb3d0;
        dVar1 = 0.0;
        uStack_50 = 0;
        if (DAT_1803fa608 != (float *)0x0) {
          dVar1 = (double)*DAT_1803fa608;
        }
        local_58 = dVar2 + dVar1;
        local_48 = 1;
        local_44 = iVar6;
        if (DAT_1803eb3d0 == DAT_1803eb3d8) {
          FUN_180227990(SUB84(dVar1,0),DAT_1803eb3d0,&local_78);
        }
        else {
          local_88 = DAT_1803eb3d0;
          *DAT_1803eb3d0 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          *puVar5 = local_78;
          puVar5[1] = uStack_70;
          puVar5[2] = local_68;
          puVar5[3] = uStack_60;
          local_68 = uVar3;
          uStack_60 = uVar4;
          local_78 = local_78 & 0xffffffffffffff00;
          puVar5[4] = (ulonglong)local_58;
          puVar5[5] = 0;
          *(undefined4 *)(puVar5 + 6) = 1;
          *(int *)((longlong)puVar5 + 0x34) = iVar6;
          *(undefined1 *)(puVar5 + 7) = local_40;
          DAT_1803eb3d0 = DAT_1803eb3d0 + 8;
        }
        FUN_18020e450(&local_78);
      }
    }
  }
  return 0;
}


)B180069c20",
    "c01248b3b2569b2a113fc308a335f968dc102fdd3e29eb8af26329646a6c95d0",
    R"F180069c20C(FUN_18002d7a0
FUN_180039770
FUN_18020e450
FUN_180212700
FUN_180227990)F180069c20C",
    R"F180069c20D(DAT_18033e5ea
DAT_1803da4c0
DAT_1803eb3d0
DAT_1803eb3d8
DAT_1803fa608
DAT_1803faf38
DAT_1803faff8)F180069c20D",
    R"F180069c20T()F180069c20T",
    R"F180069c20F(36: if ((plVar7 != (longlong *)0x0) && (plVar7[1] == param_2)) {
38: if ((DAT_1803faff8 == (code *)0x0) || (plVar7[1] == 0)) {
41: else {
45: if (cVar8 != '\0') {
46: if ((DAT_1803faf38 == (code *)0x0) || (plVar7[1] == 0)) {
49: else {
55: if (iVar6 != -1) {
69: if (DAT_1803fa608 != (float *)0x0) {
75: if (DAT_1803eb3d0 == DAT_1803eb3d8) {
78: else {
102: return 0;)F180069c20F",
    R"F180069c20U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb3d0.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb3d8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803faf38.
TODO: recover the declaration, type and value for global/data reference DAT_1803faff8.
TODO: resolve the indirect call in body 37: dVar2 = (double)(**(code **)(*plVar7 + 0x160))(plVar7,1);.
TODO: resolve the indirect call in body 38: if ((DAT_1803faff8 == (code *)0x0) || (plVar7[1] == 0)) {.
TODO: resolve the indirect call in body 39: cVar8 = (**(code **)(*plVar7 + 0x138))(plVar7,2,6);.
TODO: resolve the indirect call in body 42: iVar6 = (*DAT_1803faff8)(plVar7[1],2);.
TODO: resolve the indirect call in body 46: if ((DAT_1803faf38 == (code *)0x0) || (plVar7[1] == 0)) {.
TODO: resolve the indirect call in body 47: (**(code **)(*plVar7 + 8))(plVar7,2);.
TODO: resolve the indirect call in body 50: (*DAT_1803faf38)(plVar7[1],2);.)F180069c20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180069c20() noexcept {
    return kFunction_0x180069c20;
}

}  // namespace sf::reconstructed
