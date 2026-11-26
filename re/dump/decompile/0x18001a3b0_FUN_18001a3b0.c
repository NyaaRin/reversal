// 0x18001a3b0  FUN_18001a3b0
// size=409 thunk=false
// signature: undefined FUN_18001a3b0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001a3b0(longlong *param_1,float param_2,char param_3,byte param_4)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  double dVar12;
  
  iVar11 = (int)(float)((uint)param_2 & _DAT_1803817c0);
  if (param_4 == 0) {
    uVar7 = -(int)(param_2 * DAT_180381070);
    if ((int)uVar7 < 0) {
      uVar7 = (int)(param_2 * DAT_180381070);
    }
    uVar7 = uVar7 & 0x1f;
    dVar12 = DAT_180381390;
  }
  else {
    uVar7 = -(int)(param_2 * DAT_180380fa8);
    if ((int)uVar7 < 0) {
      uVar7 = (int)(param_2 * DAT_180380fa8);
    }
    uVar7 = uVar7 & 7;
    dVar12 = DAT_1803813a0;
  }
  bVar3 = (double)param_2 <= dVar12;
  if (param_3 == '\0') {
    iVar8 = (param_4 ^ 1) * 2;
    if (iVar11 == 0) {
      uVar7 = ((uint)bVar3 + uVar7 * 2) * 4 + 1;
      iVar8 = iVar8 + 6;
    }
    else {
      iVar4 = uVar7 << 0xe;
      if (0x7ff < iVar11) {
        iVar4 = uVar7 << 0x11;
      }
      iVar5 = 0x14;
      if (iVar11 < 0x800) {
        iVar5 = 0x11;
      }
      uVar7 = (uint)(iVar11 < 0x800) + iVar4 + -6 + ((uint)bVar3 + iVar11 * 2) * 4;
      iVar8 = iVar8 + iVar5;
    }
  }
  else if (iVar11 == 0) {
    iVar8 = 2;
    uVar7 = 1;
  }
  else {
    uVar7 = ((uint)(iVar11 < 0x800) + ((uint)bVar3 + iVar11 * 2) * 4) - 6;
    iVar8 = 0x11;
    if (iVar11 < 0x800) {
      iVar8 = 0xe;
    }
  }
  iVar11 = (int)param_1[2];
  if (iVar8 <= *(int *)((longlong)param_1 + 0xc) - iVar11) {
    *(int *)(param_1 + 2) = iVar11 + iVar8;
    bVar6 = (byte)iVar11 & 0x1f;
    uVar2 = *(uint *)(*param_1 + ((longlong)iVar11 >> 5) * 4);
    puVar1 = (uint *)(*param_1 + ((longlong)iVar11 >> 5) * 4);
    uVar9 = uVar7 << bVar6 | uVar7 >> 0x20 - bVar6;
    iVar11 = 1 << ((char)iVar8 - 1U & 0x1f);
    uVar7 = iVar11 - 1U >> (0x1f - bVar6 & 0x1f);
    uVar10 = uVar7 & 1;
    puVar1[uVar10] = puVar1[uVar10] ^ (puVar1[uVar10] ^ uVar9) & uVar7;
    *puVar1 = iVar11 * 2 + -1 << bVar6 & (uVar2 ^ uVar9) ^ uVar2;
    return;
  }
  *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}


