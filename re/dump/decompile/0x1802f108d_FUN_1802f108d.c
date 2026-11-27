// 0x1802f108d  FUN_1802f108d
// size=46 thunk=false
// signature: undefined FUN_1802f108d()
// status: ok


void FUN_1802f108d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x188));
  }
  return;
}


