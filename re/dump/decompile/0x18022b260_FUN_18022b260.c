// 0x18022b260  FUN_18022b260
// size=77 thunk=false
// signature: undefined FUN_18022b260()
// status: ok


void FUN_18022b260(longlong param_1)

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


