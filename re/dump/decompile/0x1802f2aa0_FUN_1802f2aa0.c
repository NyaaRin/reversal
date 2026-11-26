// 0x1802f2aa0  FUN_1802f2aa0
// size=43 thunk=false
// signature: undefined FUN_1802f2aa0()
// status: ok


void FUN_1802f2aa0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xbfffffff;
    FUN_18021b2f0(param_2 + 0x28);
  }
  return;
}


