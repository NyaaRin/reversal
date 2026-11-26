// 0x1802ebd51  FUN_1802ebd51
// size=43 thunk=false
// signature: undefined FUN_1802ebd51()
// status: ok


void FUN_1802ebd51(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffbfff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


