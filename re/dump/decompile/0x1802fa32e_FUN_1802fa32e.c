// 0x1802fa32e  FUN_1802fa32e
// size=97 thunk=false
// signature: undefined FUN_1802fa32e()
// status: ok


undefined8 FUN_1802fa32e(void)

{
  DAT_1804260c4 = DAT_1804260c4 + 1;
  if ((DAT_1804260c4 < 0xb) || (DAT_1804260c4 == (DAT_1804260c4 / 300) * 300)) {
    FUN_180014410("[SAFE] menu frame exception #%d\n",DAT_1804260c4);
  }
  return 0;
}


