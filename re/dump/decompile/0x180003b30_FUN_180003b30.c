// 0x180003b30  FUN_180003b30
// size=66 thunk=false
// signature: undefined FUN_180003b30()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003b30(void)

{
  _DAT_1803faa30 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803faa30 = _DAT_1803faa30;
  *(longlong *)(_DAT_1803faa30 + 8) = _DAT_1803faa30;
  *(longlong *)(_DAT_1803faa30 + 0x10) = _DAT_1803faa30;
  *(undefined2 *)(_DAT_1803faa30 + 0x18) = 0x101;
  atexit(FUN_18030b560);
  return;
}


