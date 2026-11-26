// 0x180001e90  FUN_180001e90
// size=55 thunk=false
// signature: undefined FUN_180001e90()
// callers:
// status: ok


void FUN_180001e90(void)

{
  DAT_18042cd38 = (undefined8 *)FUN_1802d8350(0x10);
  DAT_18042cd38[1] = 0;
  *DAT_18042cd38 = &DAT_18042cd38;
  atexit(FUN_180309420);
  return;
}


