// 0x180002dc0  FUN_180002dc0
// size=141 thunk=false
// signature: undefined FUN_180002dc0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002dc0(void)

{
  DAT_1803fad00 = 0;
  DAT_1803fad08 = FUN_1802d8350(0x38);
  *(longlong *)DAT_1803fad08 = DAT_1803fad08;
  *(longlong *)(DAT_1803fad08 + 8) = DAT_1803fad08;
  DAT_1803fad18 = 0;
  _DAT_1803fad20 = 0;
  uRam00000001803fad28 = 0;
  DAT_1803fad30 = 7;
  DAT_1803fad38 = 8;
  DAT_1803fad00 = 0x3f800000;
  FUN_18022c1b0(&DAT_1803fad18,0x10,DAT_1803fad08);
  atexit(FUN_18030a5d0);
  return;
}


