// 0x18022ef70  FUN_18022ef70
// size=37 thunk=false
// signature: undefined FUN_18022ef70()
// status: ok


void FUN_18022ef70(longlong param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


