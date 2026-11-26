// 0x180003a40  FUN_180003a40
// size=66 thunk=false
// signature: undefined FUN_180003a40()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003a40(void)

{
  _DAT_1803faa70 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803faa70 = _DAT_1803faa70;
  *(longlong *)(_DAT_1803faa70 + 8) = _DAT_1803faa70;
  *(longlong *)(_DAT_1803faa70 + 0x10) = _DAT_1803faa70;
  *(undefined2 *)(_DAT_1803faa70 + 0x18) = 0x101;
  atexit(FUN_18030b500);
  return;
}


