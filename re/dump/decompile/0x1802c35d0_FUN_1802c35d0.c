// 0x1802c35d0  FUN_1802c35d0
// size=161 thunk=false
// signature: undefined FUN_1802c35d0()
// status: ok


void FUN_1802c35d0(int *param_1,undefined1 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined2 local_42;
  
  iVar2 = param_1[1];
  uVar5 = param_5;
  if (0 < param_3) {
    uVar5 = param_4;
    param_4 = param_5;
  }
  if (*param_1 == iVar2) {
    iVar4 = *param_1 + 1;
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    FUN_1802cf430(param_1,iVar4);
  }
  lVar3 = (longlong)*param_1;
  lVar1 = *(longlong *)(param_1 + 2);
  *(undefined4 *)(lVar1 + lVar3 * 0x18) = 2;
  *(undefined1 *)(lVar1 + 4 + lVar3 * 0x18) = param_2;
  *(char *)(lVar1 + 5 + lVar3 * 0x18) = (char)param_3;
  lVar1 = lVar1 + lVar3 * 0x18;
  *(undefined2 *)(lVar1 + 6) = local_42;
  *(undefined8 *)(lVar1 + 8) = uVar5;
  *(undefined8 *)(lVar1 + 0x10) = param_4;
  *param_1 = *param_1 + 1;
  return;
}


