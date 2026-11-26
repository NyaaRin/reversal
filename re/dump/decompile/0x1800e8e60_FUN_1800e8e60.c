// 0x1800e8e60  FUN_1800e8e60
// size=63 thunk=false
// signature: undefined FUN_1800e8e60()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800e8e60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180039770();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1)) {
    DAT_18040a4c0 = 0;
    _DAT_1803e908c = 0xffffffff;
    DAT_1803e8a10 = 0xffffffff;
  }
  return 0;
}


