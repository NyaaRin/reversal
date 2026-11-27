// 0x180002b70  FUN_180002b70
// size=141 thunk=false
// signature: undefined FUN_180002b70()
// callers:
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002b70(void)

{
  _DAT_1805c7b10 = 0;
  DAT_1805c7b18 = FUN_1802d8350(0x30);
  *(longlong *)DAT_1805c7b18 = DAT_1805c7b18;
  *(longlong *)(DAT_1805c7b18 + 8) = DAT_1805c7b18;
  _DAT_1805c7b28 = 0;
  _DAT_1805c7b30 = 0;
  uRam00000001805c7b38 = 0;
  _DAT_1805c7b40 = 7;
  _DAT_1805c7b48 = 8;
  _DAT_1805c7b10 = 0x3f800000;
  FUN_18022be40(&DAT_1805c7b28,0x10,DAT_1805c7b18);
  atexit(FUN_18030a090);
  return;
}


