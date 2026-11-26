// 0x18021b4b0  FUN_18021b4b0
// size=72 thunk=false
// signature: undefined FUN_18021b4b0()
// status: ok


void FUN_18021b4b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18020e450(*(longlong *)(param_1 + 8) + 0x18);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


