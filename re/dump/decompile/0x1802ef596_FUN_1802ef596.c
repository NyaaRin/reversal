// 0x1802ef596  FUN_1802ef596
// size=38 thunk=false
// signature: undefined FUN_1802ef596()
// status: ok


void FUN_1802ef596(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


