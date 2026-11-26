// 0x1802fa1d5  FUN_1802fa1d5
// size=111 thunk=false
// signature: undefined FUN_1802fa1d5()
// status: ok


undefined8 FUN_1802fa1d5(void)

{
  DAT_1803fa566 = 0;
  DAT_1803feb1c = 0;
  DAT_180425894 = DAT_180425894 + 1;
  if ((DAT_180425894 < 0xb) || (DAT_180425894 == (DAT_180425894 / 300) * 300)) {
    FUN_180014410("[SAFE] ESP render exception #%d\n",DAT_180425894);
  }
  return 0;
}


