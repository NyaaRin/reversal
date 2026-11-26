// 0x1802ea4a4  FUN_1802ea4a4
// size=46 thunk=false
// signature: undefined FUN_1802ea4a4()
// status: ok


void FUN_1802ea4a4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


