// 0x1802e2257  FUN_1802e2257
// size=38 thunk=false
// signature: undefined FUN_1802e2257()
// status: ok


void FUN_1802e2257(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    FUN_18021b5e0(param_2 + 0x78);
  }
  return;
}


