// 0x180001f10  FUN_180001f10
// size=54 thunk=false
// signature: undefined FUN_180001f10()
// callers:
// status: ok


void FUN_180001f10(void)

{
  DAT_1805c7c50 = FUN_1802d8350(0x78);
  *(longlong *)DAT_1805c7c50 = DAT_1805c7c50;
  *(longlong *)(DAT_1805c7c50 + 8) = DAT_1805c7c50;
  *(longlong *)(DAT_1805c7c50 + 0x10) = DAT_1805c7c50;
  *(undefined2 *)(DAT_1805c7c50 + 0x18) = 0x101;
  atexit(FUN_180309480);
  return;
}


