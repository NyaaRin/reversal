// 0x1802ea6f8  FUN_1802ea6f8
// size=43 thunk=false
// signature: undefined FUN_1802ea6f8()
// status: ok


void FUN_1802ea6f8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffbfff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


