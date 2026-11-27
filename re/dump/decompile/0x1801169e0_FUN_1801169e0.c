// 0x1801169e0  FUN_1801169e0
// size=117 thunk=false
// signature: undefined FUN_1801169e0()
// status: ok


void FUN_1801169e0(undefined8 param_1)

{
  char cVar1;
  
  if (DAT_1803f925b != '\0') {
    if ((DAT_1803fa630 == 0) && (DAT_1803fa640 != (longlong *)0x0)) {
      (**(code **)(*DAT_1803fa640 + 0x330))();
    }
    cVar1 = FUN_180116970();
    if (cVar1 != '\0') {
      if (DAT_1803fa608 == 0) {
        DAT_1803e8848 = 0;
      }
      else {
        DAT_1803e8848 = *(undefined4 *)(DAT_1803fa608 + 4);
      }
    }
  }
  if (DAT_180423680 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180116a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_180423680)(param_1);
  return;
}


