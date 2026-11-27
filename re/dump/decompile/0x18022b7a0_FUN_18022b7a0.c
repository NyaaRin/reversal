// 0x18022b7a0  FUN_18022b7a0
// size=86 thunk=false
// signature: undefined FUN_18022b7a0()
// status: ok


void FUN_18022b7a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_18020e450(lVar1 + 0x40);
    FUN_18020e450(lVar1 + 0x20);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
  }
  return;
}


