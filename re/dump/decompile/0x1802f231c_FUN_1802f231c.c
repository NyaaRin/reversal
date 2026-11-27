// 0x1802f231c  FUN_1802f231c
// size=43 thunk=false
// signature: undefined FUN_1802f231c()
// status: ok


void FUN_1802f231c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;
    FUN_18021b230(param_2 + 0x78);
  }
  return;
}


