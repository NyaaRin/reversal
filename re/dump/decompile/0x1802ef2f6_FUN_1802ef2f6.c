// 0x1802ef2f6  FUN_1802ef2f6
// size=38 thunk=false
// signature: undefined FUN_1802ef2f6()
// status: ok


void FUN_1802ef2f6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


