// 0x18023abb0  FUN_18023abb0
// size=166 thunk=false
// signature: undefined FUN_18023abb0()
// status: ok


void FUN_18023abb0(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  bool bVar2;
  
  if (*(int *)(param_2 + 0x20) == *(int *)(param_1 + 0x20)) {
    bVar1 = FUN_180201cf0(param_2,param_1);
    bVar2 = (bool)(bVar1 >> 7);
  }
  else {
    bVar2 = *(int *)(param_1 + 0x20) <= *(int *)(param_2 + 0x20);
  }
  if (bVar2 != false) {
    FUN_18023ac60(param_2,param_1);
  }
  if (*(int *)(param_3 + 0x20) == *(int *)(param_2 + 0x20)) {
    bVar1 = FUN_180201cf0(param_3,param_2);
    bVar2 = (bool)(bVar1 >> 7);
  }
  else {
    bVar2 = *(int *)(param_2 + 0x20) <= *(int *)(param_3 + 0x20);
  }
  if (bVar2 != false) {
    FUN_18023ac60(param_3,param_2);
    if (*(int *)(param_2 + 0x20) == *(int *)(param_1 + 0x20)) {
      bVar1 = FUN_180201cf0(param_2,param_1);
      bVar2 = (bool)(bVar1 >> 7);
    }
    else {
      bVar2 = *(int *)(param_1 + 0x20) <= *(int *)(param_2 + 0x20);
    }
    if (bVar2 != false) {
      FUN_18023ac60(param_2,param_1);
    }
  }
  return;
}


