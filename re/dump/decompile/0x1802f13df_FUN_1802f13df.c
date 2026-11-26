// 0x1802f13df  FUN_1802f13df
// size=46 thunk=false
// signature: undefined FUN_1802f13df()
// status: ok


void FUN_1802f13df(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x200) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffdff;
    thunk_FUN_18021e290(param_2 + 0x100);
  }
  return;
}


