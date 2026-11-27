// 0x18028b360  FUN_18028b360
// size=272 thunk=false
// signature: undefined FUN_18028b360()
// status: ok


longlong * FUN_18028b360(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  
  iVar1 = (int)param_2[1];
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  uVar8 = 0;
  iVar7 = 2;
  iVar4 = iVar1;
  do {
    if (iVar4 < iVar2) {
      lVar6 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      bVar5 = *(byte *)(lVar6 + *param_2);
      *(int *)(param_2 + 1) = iVar4;
    }
    else {
      bVar5 = 0;
    }
    uVar8 = uVar8 << 8 | (uint)bVar5;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (uVar8 != 0) {
    if (iVar4 < iVar2) {
      lVar6 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      bVar5 = *(byte *)(lVar6 + *param_2);
    }
    else {
      bVar5 = 0;
    }
    iVar4 = uVar8 * bVar5 + iVar4;
    if ((iVar2 < iVar4) || (iVar4 < 0)) {
      iVar4 = iVar2;
    }
    uVar8 = 0;
    *(int *)(param_2 + 1) = iVar4;
    if (bVar5 != 0) {
      iVar7 = 0;
      do {
        if (iVar4 < iVar2) {
          lVar6 = (longlong)iVar4;
          iVar4 = iVar4 + 1;
          bVar3 = *(byte *)(lVar6 + *param_2);
          *(int *)(param_2 + 1) = iVar4;
        }
        else {
          bVar3 = 0;
        }
        iVar7 = iVar7 + 1;
        uVar8 = uVar8 << 8 | (uint)bVar3;
      } while (iVar7 < (int)(uint)bVar5);
    }
    iVar4 = (uVar8 - 1) + iVar4;
    if ((iVar2 < iVar4) || (iVar4 < 0)) {
      iVar4 = iVar2;
    }
    *(int *)(param_2 + 1) = iVar4;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((((-1 < iVar1) && (iVar4 = iVar4 - iVar1, -1 < iVar4)) &&
      (iVar1 <= *(int *)((longlong)param_2 + 0xc))) &&
     (iVar4 <= *(int *)((longlong)param_2 + 0xc) - iVar1)) {
    *param_1 = (longlong)iVar1 + *param_2;
    *(int *)((longlong)param_1 + 0xc) = iVar4;
  }
  return param_1;
}


