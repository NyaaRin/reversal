// 0x1802f2421  FUN_1802f2421
// size=43 thunk=false
// signature: undefined FUN_1802f2421()
// status: ok


void FUN_1802f2421(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;
    FUN_18021b470(param_2 + 0x78);
  }
  return;
}


