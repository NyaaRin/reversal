// 0x1802e2352  FUN_1802e2352
// size=43 thunk=false
// signature: undefined FUN_1802e2352()
// status: ok


void FUN_1802e2352(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    FUN_18021b5c0(param_2 + 0x78);
  }
  return;
}


