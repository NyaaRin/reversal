// 0x1802f0ab6  FUN_1802f0ab6
// size=38 thunk=false
// signature: undefined FUN_1802f0ab6()
// status: ok


void FUN_1802f0ab6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 8) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


