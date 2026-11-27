// 0x1802ef772  FUN_1802ef772
// size=43 thunk=false
// signature: undefined FUN_1802ef772()
// status: ok


void FUN_1802ef772(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


