// 0x1802eae7c  FUN_1802eae7c
// size=41 thunk=false
// signature: undefined FUN_1802eae7c()
// status: ok


void FUN_1802eae7c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xf8));
  }
  return;
}


