// 0x1802e2102  FUN_1802e2102
// size=38 thunk=false
// signature: undefined FUN_1802e2102()
// status: ok


void FUN_1802e2102(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_18021b640(param_2 + 0x28);
  }
  return;
}


