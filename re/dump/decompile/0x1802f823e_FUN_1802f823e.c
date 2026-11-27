// 0x1802f823e  FUN_1802f823e
// size=41 thunk=false
// signature: undefined FUN_1802f823e()
// status: ok


void FUN_1802f823e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x110));
  }
  return;
}


