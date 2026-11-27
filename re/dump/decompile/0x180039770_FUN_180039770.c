// 0x180039770  FUN_180039770
// size=98 thunk=false
// signature: undefined FUN_180039770()
// status: ok


void * FUN_180039770(void)

{
  BOOL BVar1;
  void *lp;
  void *pvVar2;
  
  if ((DAT_1803fa678 == (longlong *)0x0) || (BVar1 = IsBadReadPtr(DAT_1803fa678,8), BVar1 != 0)) {
    pvVar2 = (void *)0x0;
  }
  else {
    lp = (void *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
    if ((lp == (void *)0x0) || (BVar1 = IsBadReadPtr(lp,8), BVar1 != 0)) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)0x0;
      if (*(longlong *)((longlong)lp + 8) != 0) {
        pvVar2 = lp;
      }
    }
  }
  return pvVar2;
}


