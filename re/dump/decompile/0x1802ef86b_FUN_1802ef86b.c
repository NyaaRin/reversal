// 0x1802ef86b  FUN_1802ef86b
// size=43 thunk=false
// signature: undefined FUN_1802ef86b()
// status: ok


void FUN_1802ef86b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


