// 0x18022af50  FUN_18022af50
// size=134 thunk=false
// signature: undefined FUN_18022af50()
// status: ok


void FUN_18022af50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_18020e450(lVar1 + 0x78);
    FUN_180209700(lVar1 + 0x50);
    FUN_18020d1d0(lVar1 + 0x40);
    FUN_18020e450(lVar1 + 0x10);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
  }
  return;
}


