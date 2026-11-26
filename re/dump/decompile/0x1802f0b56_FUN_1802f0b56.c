// 0x1802f0b56  FUN_1802f0b56
// size=41 thunk=false
// signature: undefined FUN_1802f0b56()
// status: ok


void FUN_1802f0b56(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(param_2 + 0xb0);
  }
  return;
}


