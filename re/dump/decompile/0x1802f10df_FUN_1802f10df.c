// 0x1802f10df  FUN_1802f10df
// size=46 thunk=false
// signature: undefined FUN_1802f10df()
// status: ok


void FUN_1802f10df(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x400) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffbff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 400));
  }
  return;
}


