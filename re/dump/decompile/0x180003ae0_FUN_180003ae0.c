// 0x180003ae0  FUN_180003ae0
// size=66 thunk=false
// signature: undefined FUN_180003ae0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003ae0(void)

{
  _DAT_1803faa90 = FUN_1802d8350(0x30);
  *(longlong *)_DAT_1803faa90 = _DAT_1803faa90;
  *(longlong *)(_DAT_1803faa90 + 8) = _DAT_1803faa90;
  *(longlong *)(_DAT_1803faa90 + 0x10) = _DAT_1803faa90;
  *(undefined2 *)(_DAT_1803faa90 + 0x18) = 0x101;
  atexit(FUN_18030b540);
  return;
}


