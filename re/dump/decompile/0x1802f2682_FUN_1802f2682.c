// 0x1802f2682  FUN_1802f2682
// size=43 thunk=false
// signature: undefined FUN_1802f2682()
// status: ok


void FUN_1802f2682(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;
    FUN_18021b450(param_2 + 0x78);
  }
  return;
}


