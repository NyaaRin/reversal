// 0x18022aec0  FUN_18022aec0
// size=63 thunk=false
// signature: undefined FUN_18022aec0()
// status: ok


void FUN_18022aec0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18020e450(*(longlong *)(param_1 + 8) + 0x10);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


