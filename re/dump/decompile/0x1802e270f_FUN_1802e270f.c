// 0x1802e270f  FUN_1802e270f
// size=43 thunk=false
// signature: undefined FUN_1802e270f()
// status: ok


void FUN_1802e270f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;
    FUN_18021b520(param_2 + 0x78);
  }
  return;
}


