// 0x1802a22b0  FUN_1802a22b0
// size=434 thunk=false
// signature: undefined FUN_1802a22b0()
// status: ok


void FUN_1802a22b0(longlong param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  if ((param_3 & 0x18) == 0) {
    if (((*(uint *)(param_1 + 4) & 0xe000) - 0x2000 & 0xffffdfff) == 0) {
      param_3 = param_3 | 0x10;
    }
    else {
      param_3 = param_3 | 8;
    }
  }
  uVar5 = param_3 | 0x20;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    uVar5 = param_3;
  }
  uVar2 = uVar5 | 0x200;
  if ((uVar5 & 0xc00) != 0xc00) {
    uVar2 = uVar5;
  }
  if ((uVar2 & 0x30000) == 0) {
    lVar3 = (longlong)param_2 - *(longlong *)(param_1 + 0x18);
    iVar1 = (int)(lVar3 >> 0x3f);
    uVar5 = 0x20000;
    if ((int)(lVar3 / 0x74) + iVar1 == iVar1) {
      uVar5 = 0x10000;
    }
    uVar2 = uVar5 | uVar2;
  }
  *param_2 = *param_2 & 0xf000000;
  *param_2 = *param_2 | uVar2;
  *(byte *)((longlong)param_2 + 0x71) = *(byte *)((longlong)param_2 + 0x71) & 3;
  *(undefined1 *)((longlong)param_2 + 0x72) = 0;
  if ((*(byte *)(param_1 + 4) & 8) != 0) {
    uVar5 = 0;
    bVar6 = 0;
    if (((uVar2 & 0x4000) != 0) && (uVar5 = 0, bVar6 = 0, (uVar2 >> 10 & 1) == 0)) {
      bVar6 = 2;
      uVar5 = 1;
    }
    uVar8 = uVar5;
    if (((uVar2 & 0x8000) != 0) && ((uVar2 & 0x800) == 0)) {
      bVar6 = bVar6 | 4;
      uVar8 = 2 << (char)uVar5 * '\x02' | uVar5;
      uVar5 = uVar5 + 1;
    }
    bVar7 = (byte)uVar8;
    if (((uVar2 & 0x4000) == 0) && ((uVar2 >> 10 & 1) == 0)) {
      bVar6 = bVar6 | 2;
      bVar7 = bVar7 | (byte)(1 << uVar5 * 2);
      uVar5 = uVar5 + 1;
    }
    if (((uVar2 & 0x8000) == 0) && ((uVar2 & 0x800) == 0)) {
      bVar6 = bVar6 | 4;
      bVar7 = bVar7 | (byte)(2 << (char)uVar5 * '\x02');
      uVar5 = uVar5 + 1;
    }
    bVar4 = (byte)uVar5;
    if (((*(uint *)(param_1 + 4) & 0x8000000) != 0) || (uVar5 == 0)) {
      bVar6 = bVar6 | 1;
      bVar4 = bVar4 + 1;
    }
    *(byte *)((longlong)param_2 + 0x72) = bVar7;
    bVar6 = (bVar6 << 2 | bVar4 & 3) << 2 | *(byte *)((longlong)param_2 + 0x71);
    *(byte *)((longlong)param_2 + 0x71) = bVar6;
    if ((*(short *)((longlong)param_2 + 0x5e) != -1) && (((bVar6 >> 4) >> (bVar6 & 3) & 1) == 0)) {
      *(byte *)((longlong)param_2 + 0x71) = (bVar6 ^ bVar7) & 3 ^ bVar6;
      *(undefined1 *)(param_1 + 0x23c) = 1;
    }
  }
  return;
}


