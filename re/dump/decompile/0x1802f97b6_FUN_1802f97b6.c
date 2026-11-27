// 0x1802f97b6  FUN_1802f97b6
// size=52 thunk=false
// signature: undefined FUN_1802f97b6()
// status: ok


void FUN_1802f97b6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x84) & 0x80) != 0) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xffffff7f;
    FUN_18022b4b0(param_2 + 0x11d0);
  }
  return;
}


