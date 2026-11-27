// 0x1802e4ee2  FUN_1802e4ee2
// size=46 thunk=false
// signature: undefined FUN_1802e4ee2()
// status: ok


void FUN_1802e4ee2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    thunk_FUN_18021e290(param_2 + 0x90);
  }
  return;
}


