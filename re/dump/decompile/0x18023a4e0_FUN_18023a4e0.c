// 0x18023a4e0  FUN_18023a4e0
// size=214 thunk=false
// signature: undefined FUN_18023a4e0()
// status: ok


void FUN_18023a4e0(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  
  if (*(int *)(param_2 + 0x20) == *(int *)(param_1 + 0x20)) {
    bVar1 = (ulonglong)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 5) <
            (ulonglong)(*(longlong *)(param_2 + 0x30) - *(longlong *)(param_2 + 0x28) >> 5);
  }
  else {
    bVar1 = *(int *)(param_1 + 0x20) <= *(int *)(param_2 + 0x20);
  }
  if (bVar1) {
    FUN_18023a5c0(param_2,param_1);
  }
  if (*(int *)(param_3 + 0x20) == *(int *)(param_2 + 0x20)) {
    bVar1 = (ulonglong)(*(longlong *)(param_2 + 0x30) - *(longlong *)(param_2 + 0x28) >> 5) <
            (ulonglong)(*(longlong *)(param_3 + 0x30) - *(longlong *)(param_3 + 0x28) >> 5);
  }
  else {
    bVar1 = *(int *)(param_2 + 0x20) <= *(int *)(param_3 + 0x20);
  }
  if (bVar1) {
    FUN_18023a5c0(param_3,param_2);
    if (*(int *)(param_2 + 0x20) == *(int *)(param_1 + 0x20)) {
      bVar1 = (ulonglong)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 5) <
              (ulonglong)(*(longlong *)(param_2 + 0x30) - *(longlong *)(param_2 + 0x28) >> 5);
    }
    else {
      bVar1 = *(int *)(param_1 + 0x20) <= *(int *)(param_2 + 0x20);
    }
    if (bVar1) {
      FUN_18023a5c0(param_2,param_1);
    }
  }
  return;
}


