// 0x1802f0db6  FUN_1802f0db6
// size=43 thunk=false
// signature: undefined FUN_1802f0db6()
// status: ok


void FUN_1802f0db6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffeffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}


