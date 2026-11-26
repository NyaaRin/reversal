// 0x180292400  FUN_180292400
// size=186 thunk=false
// signature: undefined FUN_180292400()
// status: ok


void FUN_180292400(int *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar2 = *param_1;
  iVar4 = *(int *)(*(longlong *)(param_1 + 2) + -0x20 + (longlong)iVar2 * 0x48);
  lVar1 = *(longlong *)(param_1 + 2) + (longlong)iVar2 * 0x48;
  if ((iVar4 == 0) ||
     ((*(longlong *)(lVar1 + -0x30) == *(longlong *)(param_1 + 0x1e) &&
      (*(longlong *)(lVar1 + -0x38) == *(longlong *)(param_1 + 0x1c))))) {
    if (*(longlong *)(lVar1 + -0x18) == 0) {
      if ((((iVar4 == 0) && (1 < iVar2)) &&
          (iVar4 = memcmp(param_1 + 0x18,(void *)(lVar1 + -0x90),0x24), iVar4 == 0)) &&
         ((*(int *)(lVar1 + -0x68) + *(int *)(lVar1 + -0x6c) == *(int *)(lVar1 + -0x24) &&
          (*(longlong *)(lVar1 + -0x60) == 0)))) {
        *param_1 = iVar2 + -1;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x1e);
        *(undefined8 *)(lVar1 + -0x38) = *(undefined8 *)(param_1 + 0x1c);
        *(undefined8 *)(lVar1 + -0x30) = uVar3;
      }
    }
  }
  else {
    FUN_1802922a0(param_1);
  }
  return;
}


