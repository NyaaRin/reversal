// 0x180003e50  FUN_180003e50
// size=54 thunk=false
// signature: undefined FUN_180003e50()
// callers:
// status: ok


void FUN_180003e50(void)

{
  DAT_1803faac0 = FUN_1802d8350(0x30);
  *(longlong *)DAT_1803faac0 = DAT_1803faac0;
  *(longlong *)(DAT_1803faac0 + 8) = DAT_1803faac0;
  *(longlong *)(DAT_1803faac0 + 0x10) = DAT_1803faac0;
  *(undefined2 *)(DAT_1803faac0 + 0x18) = 0x101;
  atexit(FUN_18030b6a0);
  return;
}


