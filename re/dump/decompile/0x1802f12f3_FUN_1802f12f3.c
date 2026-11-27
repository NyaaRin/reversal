// 0x1802f12f3  FUN_1802f12f3
// size=46 thunk=false
// signature: undefined FUN_1802f12f3()
// status: ok


void FUN_1802f12f3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x80) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffff7f;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x120));
  }
  return;
}


