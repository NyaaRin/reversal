// 0x1802ea526  FUN_1802ea526
// size=46 thunk=false
// signature: undefined FUN_1802ea526()
// status: ok


void FUN_1802ea526(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


