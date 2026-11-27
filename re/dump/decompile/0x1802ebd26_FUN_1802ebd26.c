// 0x1802ebd26  FUN_1802ebd26
// size=43 thunk=false
// signature: undefined FUN_1802ebd26()
// status: ok


void FUN_1802ebd26(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffdfff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


