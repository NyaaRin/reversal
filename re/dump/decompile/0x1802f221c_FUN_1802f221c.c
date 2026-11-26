// 0x1802f221c  FUN_1802f221c
// size=38 thunk=false
// signature: undefined FUN_1802f221c()
// status: ok


void FUN_1802f221c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


