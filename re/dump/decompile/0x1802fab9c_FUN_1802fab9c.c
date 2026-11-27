// 0x1802fab9c  FUN_1802fab9c
// size=89 thunk=false
// signature: undefined FUN_1802fab9c()
// status: ok


undefined8 FUN_1802fab9c(undefined8 param_1,longlong param_2)

{
  DAT_1804260e0 = DAT_1804260e0 + 1;
  if (DAT_1804260e0 < 0xb) {
    *(longlong *)(param_2 + 0x98) = DAT_1803fcc70 - DAT_1803fcc68 >> 3;
    FUN_180014410("[SAFE] PredCM crash feat#%d/%d\n",*(undefined4 *)(param_2 + 0x70));
  }
  return 0;
}


