// 0x1802f2af4  FUN_1802f2af4
// size=43 thunk=false
// signature: undefined FUN_1802f2af4()
// status: ok


void FUN_1802f2af4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0x7fffffff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


