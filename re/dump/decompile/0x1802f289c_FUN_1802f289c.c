// 0x1802f289c  FUN_1802f289c
// size=43 thunk=false
// signature: undefined FUN_1802f289c()
// status: ok


void FUN_1802f289c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x2000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfdffffff;
    FUN_18021b3b0(param_2 + 0x78);
  }
  return;
}


