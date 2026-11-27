// 0x1802e2d95  FUN_1802e2d95
// size=43 thunk=false
// signature: undefined FUN_1802e2d95()
// status: ok


void FUN_1802e2d95(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    FUN_180209d90(param_2 + 0x48);
  }
  return;
}


