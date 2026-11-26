// 0x1802deb73  FUN_1802deb73
// size=46 thunk=false
// signature: undefined FUN_1802deb73()
// status: ok


void FUN_1802deb73(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffeffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


