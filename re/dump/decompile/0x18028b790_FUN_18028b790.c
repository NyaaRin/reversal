// 0x18028b790  FUN_18028b790
// size=329 thunk=false
// signature: undefined FUN_18028b790()
// status: ok


longlong * FUN_18028b790(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  iVar8 = 0;
  if (iVar1 < 0) {
    iVar8 = iVar1;
  }
  if (iVar8 < iVar1) {
    lVar5 = *param_2;
    iVar10 = iVar8 + 1;
    if (iVar10 < iVar1) {
      iVar3 = iVar8 + 2;
      uVar7 = (uint)CONCAT11(*(byte *)(iVar8 + lVar5),*(undefined1 *)(iVar10 + lVar5));
      if (iVar3 < iVar1) {
        lVar4 = (longlong)iVar3;
        iVar3 = iVar8 + 3;
        bVar2 = *(byte *)(lVar4 + lVar5);
      }
      else {
        bVar2 = 0;
      }
    }
    else {
      uVar7 = (uint)*(byte *)(iVar8 + lVar5) << 8;
      bVar2 = 0;
      iVar3 = iVar10;
    }
  }
  else {
    uVar7 = 0;
    bVar2 = 0;
    iVar3 = iVar8;
  }
  uVar6 = (uint)bVar2;
  iVar3 = uVar6 * param_3 + iVar3;
  if ((iVar1 < iVar3) || (iVar3 < 0)) {
    iVar3 = iVar1;
  }
  uVar11 = 0;
  *(int *)(param_2 + 1) = iVar3;
  uVar9 = 0;
  if (bVar2 != 0) {
    do {
      if (iVar3 < iVar1) {
        lVar5 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        *(int *)(param_2 + 1) = iVar3;
        bVar2 = *(byte *)(lVar5 + *param_2);
      }
      else {
        bVar2 = 0;
      }
      uVar9 = uVar9 + 1;
      uVar11 = uVar11 << 8 | (uint)bVar2;
    } while ((int)uVar9 < (int)uVar6);
    uVar9 = 0;
    iVar8 = 0;
    do {
      if (iVar3 < iVar1) {
        lVar5 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        *(int *)(param_2 + 1) = iVar3;
        bVar2 = *(byte *)(lVar5 + *param_2);
      }
      else {
        bVar2 = 0;
      }
      iVar8 = iVar8 + 1;
      uVar9 = uVar9 << 8 | (uint)bVar2;
    } while (iVar8 < (int)uVar6);
  }
  *param_1 = 0;
  param_1[1] = 0;
  iVar8 = uVar11 + 2 + (uVar7 + 1) * uVar6;
  if ((((-1 < iVar8) && (iVar10 = uVar9 - uVar11, -1 < iVar10)) && (iVar8 <= iVar1)) &&
     (iVar10 <= iVar1 - iVar8)) {
    *param_1 = (longlong)iVar8 + *param_2;
    *(int *)((longlong)param_1 + 0xc) = iVar10;
  }
  return param_1;
}


