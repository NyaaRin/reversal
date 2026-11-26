// 0x1802e4af7  FUN_1802e4af7
// size=46 thunk=false
// signature: undefined FUN_1802e4af7()
// status: ok


void FUN_1802e4af7(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}


