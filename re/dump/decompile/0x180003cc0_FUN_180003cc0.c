// 0x180003cc0  FUN_180003cc0
// size=66 thunk=false
// signature: undefined FUN_180003cc0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003cc0(void)

{
  _DAT_1803faa50 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803faa50 = _DAT_1803faa50;
  *(longlong *)(_DAT_1803faa50 + 8) = _DAT_1803faa50;
  *(longlong *)(_DAT_1803faa50 + 0x10) = _DAT_1803faa50;
  *(undefined2 *)(_DAT_1803faa50 + 0x18) = 0x101;
  atexit(FUN_18030b600);
  return;
}


