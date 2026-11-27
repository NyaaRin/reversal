// 0x18003ae40  FUN_18003ae40
// size=105 thunk=false
// signature: undefined FUN_18003ae40()
// status: ok


void * FUN_18003ae40(uint param_1)

{
  BOOL BVar1;
  void *lp;
  void *pvVar2;
  
  if (((DAT_1803fa678 == (longlong *)0x0) || (2 < param_1)) ||
     (BVar1 = IsBadReadPtr(DAT_1803fa678,8), BVar1 != 0)) {
    pvVar2 = (void *)0x0;
  }
  else {
    lp = (void *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,param_1);
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


