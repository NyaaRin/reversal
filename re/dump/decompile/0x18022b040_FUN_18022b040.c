// 0x18022b040  FUN_18022b040
// size=37 thunk=false
// signature: undefined FUN_18022b040()
// status: ok


void FUN_18022b040(longlong param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


