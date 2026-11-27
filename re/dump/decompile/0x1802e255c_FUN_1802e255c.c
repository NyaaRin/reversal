// 0x1802e255c  FUN_1802e255c
// size=43 thunk=false
// signature: undefined FUN_1802e255c()
// status: ok


void FUN_1802e255c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffbfff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


