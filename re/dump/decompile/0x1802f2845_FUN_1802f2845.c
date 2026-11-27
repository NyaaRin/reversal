// 0x1802f2845  FUN_1802f2845
// size=43 thunk=false
// signature: undefined FUN_1802f2845()
// status: ok


void FUN_1802f2845(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfeffffff;
    FUN_18021b3f0(param_2 + 0x78);
  }
  return;
}


