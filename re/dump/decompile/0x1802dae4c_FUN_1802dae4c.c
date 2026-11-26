// 0x1802dae4c  FUN_1802dae4c
// size=41 thunk=false
// signature: undefined FUN_1802dae4c()
// status: ok


void FUN_1802dae4c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    FUN_180028f00(*(undefined8 *)(param_2 + 0x1a0));
  }
  return;
}


