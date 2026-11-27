// 0x180003d60  FUN_180003d60
// size=66 thunk=false
// signature: undefined FUN_180003d60()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003d60(void)

{
  _DAT_1803faa10 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803faa10 = _DAT_1803faa10;
  *(longlong *)(_DAT_1803faa10 + 8) = _DAT_1803faa10;
  *(longlong *)(_DAT_1803faa10 + 0x10) = _DAT_1803faa10;
  *(undefined2 *)(_DAT_1803faa10 + 0x18) = 0x101;
  atexit(FUN_18030b640);
  return;
}


