// 0x1802eaa2b  FUN_1802eaa2b
// size=43 thunk=false
// signature: undefined FUN_1802eaa2b()
// status: ok


void FUN_1802eaa2b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


