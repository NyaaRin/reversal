// 0x1802f08a8  FUN_1802f08a8
// size=43 thunk=false
// signature: undefined FUN_1802f08a8()
// status: ok


void FUN_1802f08a8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xefffffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


