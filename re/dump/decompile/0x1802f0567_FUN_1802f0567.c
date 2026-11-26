// 0x1802f0567  FUN_1802f0567
// size=46 thunk=false
// signature: undefined FUN_1802f0567()
// status: ok


void FUN_1802f0567(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}


