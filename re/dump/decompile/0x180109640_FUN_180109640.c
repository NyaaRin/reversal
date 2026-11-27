// 0x180109640  FUN_180109640
// size=48 thunk=false
// signature: undefined FUN_180109640()
// status: ok


longlong FUN_180109640(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1803fa630;
  if (DAT_1803fa630 == 0) {
    if (DAT_1803fa640 == (longlong *)0x0) {
      lVar1 = 0;
    }
    else {
      lVar1 = (**(code **)(*DAT_1803fa640 + 0x330))();
    }
  }
  return lVar1;
}


