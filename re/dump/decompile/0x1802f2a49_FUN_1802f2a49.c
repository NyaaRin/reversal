// 0x1802f2a49  FUN_1802f2a49
// size=43 thunk=false
// signature: undefined FUN_1802f2a49()
// status: ok


void FUN_1802f2a49(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xdfffffff;
    FUN_18021b1b0(param_2 + 0x78);
  }
  return;
}


