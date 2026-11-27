// 0x1802f2373  FUN_1802f2373
// size=43 thunk=false
// signature: undefined FUN_1802f2373()
// status: ok


void FUN_1802f2373(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x400) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffbff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


