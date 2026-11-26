// 0x18023aa40  FUN_18023aa40
// size=159 thunk=false
// signature: undefined FUN_18023aa40()
// status: ok


void FUN_18023aa40(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  bool bVar2;
  
  if (*(int *)(param_2 + 0x28) == *(int *)(param_1 + 0x28)) {
    bVar1 = FUN_180201cf0(param_2 + 8,param_1 + 8);
    bVar2 = (bool)(bVar1 >> 7);
  }
  else {
    bVar2 = *(int *)(param_1 + 0x28) <= *(int *)(param_2 + 0x28);
  }
  if (bVar2 != false) {
    FUN_18023aae0(param_2,param_1);
  }
  if (*(int *)(param_3 + 0x28) == *(int *)(param_2 + 0x28)) {
    bVar1 = FUN_180201cf0(param_3 + 8,param_2 + 8);
    bVar2 = (bool)(bVar1 >> 7);
  }
  else {
    bVar2 = *(int *)(param_2 + 0x28) <= *(int *)(param_3 + 0x28);
  }
  if (bVar2 != false) {
    FUN_18023aae0(param_3,param_2);
    if (*(int *)(param_2 + 0x28) == *(int *)(param_1 + 0x28)) {
      bVar1 = FUN_180201cf0(param_2 + 8,param_1 + 8);
      bVar2 = (bool)(bVar1 >> 7);
    }
    else {
      bVar2 = *(int *)(param_1 + 0x28) <= *(int *)(param_2 + 0x28);
    }
    if (bVar2 != false) {
      FUN_18023aae0(param_2,param_1);
    }
  }
  return;
}


