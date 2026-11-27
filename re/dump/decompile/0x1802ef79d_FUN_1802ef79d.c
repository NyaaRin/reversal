// 0x1802ef79d  FUN_1802ef79d
// size=43 thunk=false
// signature: undefined FUN_1802ef79d()
// status: ok


void FUN_1802ef79d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x400) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffbff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


