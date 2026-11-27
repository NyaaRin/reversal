// 0x1802f2478  FUN_1802f2478
// size=43 thunk=false
// signature: undefined FUN_1802f2478()
// status: ok


void FUN_1802f2478(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffdfff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


