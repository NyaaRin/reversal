// 0x18022b1b0  FUN_18022b1b0
// size=68 thunk=false
// signature: undefined FUN_18022b1b0()
// status: ok


void FUN_18022b1b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18020e450();
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


