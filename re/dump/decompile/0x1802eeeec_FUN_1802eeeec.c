// 0x1802eeeec  FUN_1802eeeec
// size=38 thunk=false
// signature: undefined FUN_1802eeeec()
// status: ok


void FUN_1802eeeec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


