// 0x18022b400  FUN_18022b400
// size=96 thunk=false
// signature: undefined FUN_18022b400()
// status: ok


void FUN_18022b400(longlong param_1)

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


