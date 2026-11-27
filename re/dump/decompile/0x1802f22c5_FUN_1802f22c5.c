// 0x1802f22c5  FUN_1802f22c5
// size=43 thunk=false
// signature: undefined FUN_1802f22c5()
// status: ok


void FUN_1802f22c5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


