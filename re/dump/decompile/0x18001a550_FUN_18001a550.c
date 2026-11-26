// 0x18001a550  FUN_18001a550
// size=533 thunk=false
// signature: undefined FUN_18001a550()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001a550(longlong *param_1,float param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar3 = *(uint *)(param_1 + 2);
  bVar2 = DAT_18038132c < param_2;
  iVar8 = (int)(float)((uint)param_2 & _DAT_1803817c0);
  uVar5 = -(int)(param_2 * DAT_180381070);
  if ((int)uVar5 < 0) {
    uVar5 = (int)(param_2 * DAT_180381070);
  }
  uVar5 = uVar5 & 0x1f;
  if ((int)uVar3 < *(int *)((longlong)param_1 + 0xc)) {
    if (iVar8 == 0) {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar3 & 0x1f) * 4);
    }
    else {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
      *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar3 & 0x1f) * 4);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    uVar3 = *(uint *)(param_1 + 2);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if ((int)uVar3 < *(int *)((longlong)param_1 + 0xc)) {
    if (uVar5 == 0) {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
      *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar3 & 0x1f) * 4);
    }
    else {
      puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
      *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar3 & 0x1f) * 4);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    uVar3 = *(uint *)(param_1 + 2);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  if ((iVar8 != 0) || (uVar5 != 0)) {
    if ((int)uVar3 < *(int *)((longlong)param_1 + 0xc)) {
      if (bVar2) {
        puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
        *puVar1 = *puVar1 & ~*(uint *)(&DAT_1803fa690 + (ulonglong)(uVar3 & 0x1f) * 4);
      }
      else {
        puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
        *puVar1 = *puVar1 | *(uint *)(&DAT_1803fa690 + (ulonglong)(uVar3 & 0x1f) * 4);
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      uVar3 = *(uint *)(param_1 + 2);
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    if (iVar8 != 0) {
      if ((int)(*(int *)((longlong)param_1 + 0xc) - uVar3) < 0xe) {
        *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
        *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      }
      else {
        *(uint *)(param_1 + 2) = uVar3 + 0xe;
        bVar4 = (byte)uVar3 & 0x1f;
        uVar6 = *(uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
        puVar1 = (uint *)(*param_1 + ((longlong)(int)uVar3 >> 5) * 4);
        uVar9 = iVar8 - 1U << bVar4 | iVar8 - 1U >> 0x20 - bVar4;
        uVar3 = 0x1fff >> (0x1f - bVar4 & 0x1f);
        uVar7 = uVar3 & 1;
        puVar1[uVar7] = puVar1[uVar7] ^ (uVar9 ^ puVar1[uVar7]) & uVar3;
        *puVar1 = (uVar6 ^ uVar9) & 0x3fff << bVar4 ^ uVar6;
      }
    }
    if (uVar5 != 0) {
      iVar8 = (int)param_1[2];
      if (*(int *)((longlong)param_1 + 0xc) - iVar8 < 5) {
        *(int *)(param_1 + 2) = *(int *)((longlong)param_1 + 0xc);
        *(undefined1 *)((longlong)param_1 + 0x14) = 1;
        return;
      }
      *(int *)(param_1 + 2) = iVar8 + 5;
      bVar4 = (byte)iVar8 & 0x1f;
      uVar3 = *(uint *)(*param_1 + ((longlong)iVar8 >> 5) * 4);
      puVar1 = (uint *)(*param_1 + ((longlong)iVar8 >> 5) * 4);
      uVar6 = uVar5 << bVar4 | uVar5 >> 0x20 - bVar4;
      uVar5 = 0xf >> (0x1f - bVar4 & 0x1f);
      uVar7 = uVar5 & 1;
      puVar1[uVar7] = puVar1[uVar7] ^ (uVar6 ^ puVar1[uVar7]) & uVar5;
      *puVar1 = (uVar3 ^ uVar6) & 0x1f << bVar4 ^ uVar3;
    }
  }
  return;
}


