// 0x1800029a0  FUN_1800029a0
// size=141 thunk=false
// signature: undefined FUN_1800029a0()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800029a0(void)

{
  DAT_1805c7b50 = 0;
  DAT_1805c7b58 = FUN_1802d8350(0x48);
  *(longlong *)DAT_1805c7b58 = DAT_1805c7b58;
  *(longlong *)(DAT_1805c7b58 + 8) = DAT_1805c7b58;
  DAT_1805c7b68 = 0;
  _DAT_1805c7b70 = 0;
  uRam00000001805c7b78 = 0;
  DAT_1805c7b80 = 7;
  DAT_1805c7b88 = 8;
  DAT_1805c7b50 = 0x3f800000;
  FUN_18022c1b0(&DAT_1805c7b68,0x10,DAT_1805c7b58);
  atexit(FUN_180309fe0);
  return;
}


