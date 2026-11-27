// 0x18022b0a0  FUN_18022b0a0
// size=37 thunk=false
// signature: undefined FUN_18022b0a0()
// status: ok


void FUN_18022b0a0(longlong param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


