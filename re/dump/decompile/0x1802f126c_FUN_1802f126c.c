// 0x1802f126c  FUN_1802f126c
// size=41 thunk=false
// signature: undefined FUN_1802f126c()
// status: ok


void FUN_1802f126c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x10) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x140));
  }
  return;
}


