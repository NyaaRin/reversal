// 0x1800035d0  FUN_1800035d0
// size=141 thunk=false
// signature: undefined FUN_1800035d0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800035d0(void)

{
  DAT_1804ecae0 = 0;
  DAT_1804ecae8 = FUN_1802d8350(0x20);
  *(longlong *)DAT_1804ecae8 = DAT_1804ecae8;
  *(longlong *)(DAT_1804ecae8 + 8) = DAT_1804ecae8;
  DAT_1804ecaf8 = 0;
  _DAT_1804ecb00 = 0;
  uRam00000001804ecb08 = 0;
  DAT_1804ecb10 = 7;
  DAT_1804ecb18 = 8;
  DAT_1804ecae0 = 0x3f800000;
  FUN_18022c1b0(&DAT_1804ecaf8,0x10,DAT_1804ecae8);
  atexit(FUN_18030adc0);
  return;
}


