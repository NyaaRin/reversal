// 0x180002900  FUN_180002900
// size=141 thunk=false
// signature: undefined FUN_180002900()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002900(void)

{
  DAT_1805c3990 = 0;
  DAT_1805c3998 = FUN_1802d8350(0xd8);
  *(longlong *)DAT_1805c3998 = DAT_1805c3998;
  *(longlong *)(DAT_1805c3998 + 8) = DAT_1805c3998;
  DAT_1805c39a8 = 0;
  _DAT_1805c39b0 = 0;
  uRam00000001805c39b8 = 0;
  DAT_1805c39c0 = 7;
  DAT_1805c39c8 = 8;
  DAT_1805c3990 = 0x3f800000;
  FUN_18022c1b0(&DAT_1805c39a8,0x10,DAT_1805c3998);
  atexit(FUN_180309f20);
  return;
}


