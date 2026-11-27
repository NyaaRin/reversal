// 0x1802e2457  FUN_1802e2457
// size=43 thunk=false
// signature: undefined FUN_1802e2457()
// status: ok


void FUN_1802e2457(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;
    FUN_18021b230(param_2 + 0x78);
  }
  return;
}


