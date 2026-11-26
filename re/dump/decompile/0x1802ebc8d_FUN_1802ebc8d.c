// 0x1802ebc8d  FUN_1802ebc8d
// size=43 thunk=false
// signature: undefined FUN_1802ebc8d()
// status: ok


void FUN_1802ebc8d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


