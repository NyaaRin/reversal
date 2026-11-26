// 0x1802fb100  FUN_1802fb100
// size=61 thunk=false
// signature: undefined FUN_1802fb100()
// status: ok


undefined8 FUN_1802fb100(void)

{
  DAT_1804257b0 = DAT_1804257b0 + 1;
  if (DAT_1804257b0 < 0xb) {
    FUN_180014410("[SAFE] script ui build exception #%d\n");
  }
  return 0;
}


