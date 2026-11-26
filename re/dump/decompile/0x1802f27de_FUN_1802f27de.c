// 0x1802f27de  FUN_1802f27de
// size=43 thunk=false
// signature: undefined FUN_1802f27de()
// status: ok


void FUN_1802f27de(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xff7fffff;
    FUN_18021b410(param_2 + 0x78);
  }
  return;
}


