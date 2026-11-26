// 0x18022b760  FUN_18022b760
// size=63 thunk=false
// signature: undefined FUN_18022b760()
// status: ok


void FUN_18022b760(longlong param_1)

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


