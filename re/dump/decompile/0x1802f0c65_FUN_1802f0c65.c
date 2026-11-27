// 0x1802f0c65  FUN_1802f0c65
// size=43 thunk=false
// signature: undefined FUN_1802f0c65()
// status: ok


void FUN_1802f0c65(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffefffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


