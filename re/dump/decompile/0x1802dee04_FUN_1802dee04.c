// 0x1802dee04  FUN_1802dee04
// size=41 thunk=false
// signature: undefined FUN_1802dee04()
// status: ok


void FUN_1802dee04(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


