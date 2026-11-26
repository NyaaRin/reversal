// 0x1802ea68c  FUN_1802ea68c
// size=41 thunk=false
// signature: undefined FUN_1802ea68c()
// status: ok


void FUN_1802ea68c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x90));
  }
  return;
}


