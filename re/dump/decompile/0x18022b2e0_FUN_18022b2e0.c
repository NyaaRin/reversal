// 0x18022b2e0  FUN_18022b2e0
// size=81 thunk=false
// signature: undefined FUN_18022b2e0()
// status: ok


void FUN_18022b2e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18020e450(*(longlong *)(param_1 + 8) + 0x20);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


