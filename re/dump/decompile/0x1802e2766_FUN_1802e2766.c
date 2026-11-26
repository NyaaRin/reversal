// 0x1802e2766  FUN_1802e2766
// size=43 thunk=false
// signature: undefined FUN_1802e2766()
// status: ok


void FUN_1802e2766(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffefffff;
    FUN_18021b500(param_2 + 0x78);
  }
  return;
}


