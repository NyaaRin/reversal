// 0x1802e2c00  FUN_1802e2c00
// size=38 thunk=false
// signature: undefined FUN_1802e2c00()
// status: ok


void FUN_1802e2c00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180209d90(param_2 + 0x48);
  }
  return;
}


