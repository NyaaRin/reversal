// 0x1802eafcc  FUN_1802eafcc
// size=46 thunk=false
// signature: undefined FUN_1802eafcc()
// status: ok


void FUN_1802eafcc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffdffff;
    thunk_FUN_18021e290(param_2 + 0x90);
  }
  return;
}


