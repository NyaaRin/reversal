// 0x18022b800  FUN_18022b800
// size=72 thunk=false
// signature: undefined FUN_18022b800()
// status: ok


void FUN_18022b800(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18020e450(*(longlong *)(param_1 + 8) + 0x28);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


