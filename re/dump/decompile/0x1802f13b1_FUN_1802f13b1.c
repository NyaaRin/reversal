// 0x1802f13b1  FUN_1802f13b1
// size=46 thunk=false
// signature: undefined FUN_1802f13b1()
// status: ok


void FUN_1802f13b1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x100) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffeff;
    thunk_FUN_18021e290(param_2 + 0x168);
  }
  return;
}


