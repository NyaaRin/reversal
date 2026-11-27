// 0x18022f000  FUN_18022f000
// size=37 thunk=false
// signature: undefined FUN_18022f000()
// status: ok


void FUN_18022f000(longlong param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


