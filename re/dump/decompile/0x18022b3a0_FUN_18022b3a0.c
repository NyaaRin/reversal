// 0x18022b3a0  FUN_18022b3a0
// size=81 thunk=false
// signature: undefined FUN_18022b3a0()
// status: ok


void FUN_18022b3a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18020a5a0(*(longlong *)(param_1 + 8) + 0x20);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


