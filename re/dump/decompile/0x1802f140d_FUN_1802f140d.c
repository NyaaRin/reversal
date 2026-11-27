// 0x1802f140d  FUN_1802f140d
// size=46 thunk=false
// signature: undefined FUN_1802f140d()
// status: ok


void FUN_1802f140d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x400) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffbff;
    thunk_FUN_18021e290(param_2 + 0xe0);
  }
  return;
}


