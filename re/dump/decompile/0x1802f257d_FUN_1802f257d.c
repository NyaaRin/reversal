// 0x1802f257d  FUN_1802f257d
// size=43 thunk=false
// signature: undefined FUN_1802f257d()
// status: ok


void FUN_1802f257d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffeffff;
    FUN_18021b150(param_2 + 0x78);
  }
  return;
}


