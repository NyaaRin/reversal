// 0x1802ef6f0  FUN_1802ef6f0
// size=46 thunk=false
// signature: undefined FUN_1802ef6f0()
// status: ok


void FUN_1802ef6f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


