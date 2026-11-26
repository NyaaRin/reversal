// 0x1802f0bfe  FUN_1802f0bfe
// size=43 thunk=false
// signature: undefined FUN_1802f0bfe()
// status: ok


void FUN_1802f0bfe(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


