// 0x180003b80  FUN_180003b80
// size=66 thunk=false
// signature: undefined FUN_180003b80()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003b80(void)

{
  _DAT_1803fa9b0 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803fa9b0 = _DAT_1803fa9b0;
  *(longlong *)(_DAT_1803fa9b0 + 8) = _DAT_1803fa9b0;
  *(longlong *)(_DAT_1803fa9b0 + 0x10) = _DAT_1803fa9b0;
  *(undefined2 *)(_DAT_1803fa9b0 + 0x18) = 0x101;
  atexit(FUN_18030b580);
  return;
}


