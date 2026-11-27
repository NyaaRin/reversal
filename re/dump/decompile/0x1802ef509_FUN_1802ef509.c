// 0x1802ef509  FUN_1802ef509
// size=41 thunk=false
// signature: undefined FUN_1802ef509()
// status: ok


void FUN_1802ef509(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xb8));
  }
  return;
}


