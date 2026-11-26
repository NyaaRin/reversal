// 0x1802927a0  FUN_1802927a0
// size=218 thunk=false
// signature: undefined FUN_1802927a0()
// status: ok


void FUN_1802927a0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((0xffff < (uint)(param_1[0xd] + param_3)) && ((*(byte *)(param_1 + 0xc) & 8) != 0)) {
    param_1[0x20] = param_1[8];
    param_1[0xd] = 0;
    if (*(int *)(*(longlong *)(param_1 + 2) + -0x20 + (longlong)*param_1 * 0x48) == 0) {
      *(int *)(*(longlong *)(param_1 + 2) + (longlong)*param_1 * 0x48 + -0x28) = param_1[8];
    }
    else {
      FUN_1802922a0(param_1);
    }
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 2) + -0x20 + (longlong)*param_1 * 0x48);
  *piVar1 = *piVar1 + param_2;
  iVar2 = param_1[8];
  iVar4 = param_1[9];
  param_3 = param_3 + iVar2;
  if (iVar4 < param_3) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    iVar3 = param_3;
    if (param_3 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_18028a980(param_1 + 8,iVar3);
  }
  param_1[8] = param_3;
  iVar4 = param_1[4];
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 10) + (longlong)iVar2 * 0x14;
  FUN_180260a20(param_1 + 4,iVar4 + param_2);
  *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 6) + (longlong)iVar4 * 2;
  return;
}


