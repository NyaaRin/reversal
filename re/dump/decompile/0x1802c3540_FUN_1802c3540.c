// 0x1802c3540  FUN_1802c3540
// size=131 thunk=false
// signature: undefined FUN_1802c3540()
// status: ok


void FUN_1802c3540(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined2 local_22;
  
  iVar1 = param_1[1];
  if (iVar1 < 0) {
    iVar1 = iVar1 / 2 + iVar1;
    iVar4 = 0;
    if (0 < iVar1) {
      iVar4 = iVar1;
    }
    FUN_1802cf430(param_1,iVar4);
  }
  *param_1 = 0;
  if (param_1[1] == 0) {
    FUN_1802cf430(param_1,8);
  }
  lVar3 = (longlong)*param_1;
  lVar2 = *(longlong *)(param_1 + 2);
  *(undefined4 *)(lVar2 + lVar3 * 0x18) = 1;
  *(undefined2 *)(lVar2 + 4 + lVar3 * 0x18) = 0;
  lVar2 = lVar2 + lVar3 * 0x18;
  *(undefined2 *)(lVar2 + 6) = local_22;
  *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
  *param_1 = *param_1 + 1;
  return;
}


