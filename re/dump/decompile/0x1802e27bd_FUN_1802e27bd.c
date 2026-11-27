// 0x1802e27bd  FUN_1802e27bd
// size=43 thunk=false
// signature: undefined FUN_1802e27bd()
// status: ok


void FUN_1802e27bd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffdfffff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


