// 0x1801169a0  FUN_1801169a0
// size=49 thunk=false
// signature: undefined FUN_1801169a0()
// status: ok


void FUN_1801169a0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1803fa630;
  if ((DAT_1803fa630 == 0) && (DAT_1803fa640 != (longlong *)0x0)) {
    lVar1 = (**(code **)(*DAT_1803fa640 + 0x330))();
  }
  FUN_180116970(lVar1);
  return;
}


