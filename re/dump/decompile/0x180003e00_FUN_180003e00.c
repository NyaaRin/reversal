// 0x180003e00  FUN_180003e00
// size=66 thunk=false
// signature: undefined FUN_180003e00()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003e00(void)

{
  _DAT_1803fa9f0 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803fa9f0 = _DAT_1803fa9f0;
  *(longlong *)(_DAT_1803fa9f0 + 8) = _DAT_1803fa9f0;
  *(longlong *)(_DAT_1803fa9f0 + 0x10) = _DAT_1803fa9f0;
  *(undefined2 *)(_DAT_1803fa9f0 + 0x18) = 0x101;
  atexit(FUN_18030b680);
  return;
}


