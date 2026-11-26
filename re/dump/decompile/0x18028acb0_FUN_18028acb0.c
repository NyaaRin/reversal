// 0x18028acb0  FUN_18028acb0
// size=137 thunk=false
// signature: undefined FUN_18028acb0()
// status: ok


void FUN_18028acb0(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  iVar4 = param_1[1];
  if (*param_1 == iVar4) {
    iVar6 = *param_1 + 1;
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar6 < iVar4) {
      iVar6 = iVar4;
    }
    FUN_18028ad40(param_1,iVar6);
  }
  lVar5 = (longlong)*param_1;
  uVar3 = param_2[1];
  lVar2 = *(longlong *)(param_1 + 2);
  puVar1 = (undefined8 *)(lVar2 + lVar5 * 0x48);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  uVar3 = param_2[3];
  puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar5 * 0x48);
  *puVar1 = param_2[2];
  puVar1[1] = uVar3;
  uVar3 = param_2[5];
  puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar5 * 0x48);
  *puVar1 = param_2[4];
  puVar1[1] = uVar3;
  uVar3 = param_2[7];
  puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar5 * 0x48);
  *puVar1 = param_2[6];
  puVar1[1] = uVar3;
  *(undefined8 *)(lVar2 + 0x40 + lVar5 * 0x48) = param_2[8];
  *param_1 = *param_1 + 1;
  return;
}


