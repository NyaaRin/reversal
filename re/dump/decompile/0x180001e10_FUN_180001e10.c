// 0x180001e10  FUN_180001e10
// size=55 thunk=false
// signature: undefined FUN_180001e10()
// callers:
// status: ok


void FUN_180001e10(void)

{
  DAT_18042cd10 = (undefined8 *)FUN_1802d8350(0x10);
  DAT_18042cd10[1] = 0;
  *DAT_18042cd10 = &DAT_18042cd10;
  atexit(FUN_1803093c0);
  return;
}


