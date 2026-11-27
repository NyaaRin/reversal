// 0x1802e26b8  FUN_1802e26b8
// size=43 thunk=false
// signature: undefined FUN_1802e26b8()
// status: ok


void FUN_1802e26b8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffbffff;
    FUN_18021b560(param_2 + 0x78);
  }
  return;
}


