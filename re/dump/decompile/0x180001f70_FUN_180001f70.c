// 0x180001f70  FUN_180001f70
// size=55 thunk=false
// signature: undefined FUN_180001f70()
// callers:
// status: ok


void FUN_180001f70(void)

{
  DAT_1805c3968 = (undefined8 *)FUN_1802d8350(0x10);
  DAT_1805c3968[1] = 0;
  *DAT_1805c3968 = &DAT_1805c3968;
  atexit(FUN_1803094d0);
  return;
}


