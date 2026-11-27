// 0x18022ef40  FUN_18022ef40
// size=37 thunk=false
// signature: undefined FUN_18022ef40()
// status: ok


void FUN_18022ef40(longlong param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


