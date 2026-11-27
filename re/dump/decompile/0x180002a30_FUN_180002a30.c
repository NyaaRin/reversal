// 0x180002a30  FUN_180002a30
// size=141 thunk=false
// signature: undefined FUN_180002a30()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002a30(void)

{
  DAT_180458250 = 0;
  DAT_180458258 = FUN_1802d8350(0x20);
  *(longlong *)DAT_180458258 = DAT_180458258;
  *(longlong *)(DAT_180458258 + 8) = DAT_180458258;
  DAT_180458268 = 0;
  _DAT_180458270 = 0;
  uRam0000000180458278 = 0;
  DAT_180458280 = 7;
  DAT_180458288 = 8;
  DAT_180458250 = 0x3f800000;
  FUN_18022c1b0(&DAT_180458268,0x10,DAT_180458258);
  atexit(FUN_18030a010);
  return;
}


