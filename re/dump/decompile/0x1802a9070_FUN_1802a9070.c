// 0x1802a9070  FUN_1802a9070
// size=122 thunk=false
// signature: undefined FUN_1802a9070()
// status: ok


void FUN_1802a9070(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x2398) != 0) {
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x23a0) + 8 + (longlong)iVar2 * 0x10);
      if ((iVar1 != -1) &&
         (lVar3 = (longlong)iVar1 * 0x250 + *(longlong *)(param_1 + 0x2390), lVar3 != 0)) {
        *(undefined4 *)(lVar3 + 100) = 0xffffffff;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != *(int *)(param_1 + 0x2398));
  }
  if (*(longlong *)(param_1 + 0x27e0) != 0) {
    *(undefined8 *)(param_1 + 0x27d8) = 0;
    FUN_18026f680();
    *(undefined8 *)(param_1 + 0x27e0) = 0;
  }
  return;
}


