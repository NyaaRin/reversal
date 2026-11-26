// 0x180002cd0  FUN_180002cd0
// size=55 thunk=false
// signature: undefined FUN_180002cd0()
// callers:
// status: ok


void FUN_180002cd0(void)

{
  DAT_18056dea0 = (undefined8 *)FUN_1802d8350(0x10);
  DAT_18056dea0[1] = 0;
  *DAT_18056dea0 = &DAT_18056dea0;
  atexit(FUN_18030a420);
  return;
}


