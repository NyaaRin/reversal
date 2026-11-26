// 0x1800ebf80  FUN_1800ebf80
// size=100 thunk=false
// signature: undefined FUN_1800ebf80()
// status: ok


void * FUN_1800ebf80(undefined4 param_1)

{
  BOOL BVar1;
  void *lp;
  void *pvVar2;
  
  if ((DAT_1803fa678 == (longlong *)0x0) || (BVar1 = IsBadReadPtr(DAT_1803fa678,8), BVar1 != 0)) {
    pvVar2 = (void *)0x0;
  }
  else {
    lp = (void *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,param_1);
    pvVar2 = lp;
    if (lp != (void *)0x0) {
      BVar1 = IsBadReadPtr(lp,8);
      if (BVar1 == 0) {
        pvVar2 = (void *)0x0;
        if (*(longlong *)((longlong)lp + 8) != 0) {
          pvVar2 = lp;
        }
      }
      else {
        pvVar2 = (void *)0x0;
      }
    }
  }
  return pvVar2;
}


