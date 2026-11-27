// 0x1802f0c90  FUN_1802f0c90
// size=43 thunk=false
// signature: undefined FUN_1802f0c90()
// status: ok


void FUN_1802f0c90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffdfffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


