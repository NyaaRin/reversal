// 0x1802922a0  FUN_1802922a0
// size=192 thunk=false
// signature: undefined FUN_1802922a0()
// status: ok


void FUN_1802922a0(int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  iVar9 = param_1[1];
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x1a);
  iVar2 = param_1[0x20];
  uVar7 = *(undefined8 *)(param_1 + 0x1c);
  uVar8 = *(undefined8 *)(param_1 + 0x1e);
  iVar3 = param_1[4];
  if (*param_1 == iVar9) {
    iVar11 = *param_1 + 1;
    if (iVar9 == 0) {
      iVar9 = 8;
    }
    else {
      iVar9 = iVar9 / 2 + iVar9;
    }
    if (iVar11 < iVar9) {
      iVar11 = iVar9;
    }
    FUN_18028ad40(param_1,iVar11);
  }
  lVar10 = (longlong)*param_1;
  lVar4 = *(longlong *)(param_1 + 2);
  puVar1 = (undefined8 *)(lVar4 + lVar10 * 0x48);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar10 * 0x48);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar10 * 0x48);
  *puVar1 = CONCAT44(iVar3,iVar2);
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar10 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x40 + lVar10 * 0x48) = 0;
  *param_1 = *param_1 + 1;
  return;
}


