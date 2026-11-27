// 0x1802f2730  FUN_1802f2730
// size=43 thunk=false
// signature: undefined FUN_1802f2730()
// status: ok


void FUN_1802f2730(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffdfffff;
    FUN_18021b230(param_2 + 0x78);
  }
  return;
}


