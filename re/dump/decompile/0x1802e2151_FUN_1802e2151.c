// 0x1802e2151  FUN_1802e2151
// size=38 thunk=false
// signature: undefined FUN_1802e2151()
// status: ok


void FUN_1802e2151(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_18021b600(param_2 + 0x78);
  }
  return;
}


