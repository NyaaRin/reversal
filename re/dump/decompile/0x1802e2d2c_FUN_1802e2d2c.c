// 0x1802e2d2c  FUN_1802e2d2c
// size=38 thunk=false
// signature: undefined FUN_1802e2d2c()
// status: ok


void FUN_1802e2d2c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    FUN_180209d90(param_2 + 0x48);
  }
  return;
}


