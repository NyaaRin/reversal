// 0x18018aab0  FUN_18018aab0
// size=223 thunk=false
// signature: undefined FUN_18018aab0()
// status: ok


undefined8 * FUN_18018aab0(longlong *param_1)

{
  int iVar1;
  BOOL BVar2;
  longlong *plVar3;
  undefined8 *lp;
  
  if ((param_1 == (longlong *)0x0) || (DAT_1803fa360 == (longlong *)0x0)) {
    lp = (undefined8 *)0x0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))();
    lp = (undefined8 *)0x0;
    if (plVar3 != (longlong *)0x0) {
      iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
      if (((((DAT_1803e9240 < 0.0) || (DAT_1803fa608 == (float *)0x0)) ||
           ((double)*DAT_1803fa608 - DAT_1803e9240 < 0.0)) ||
          ((DAT_180380cb0 < (double)*DAT_1803fa608 - DAT_1803e9240 || (0x7f < iVar1 - 1U)))) ||
         (*(int *)(&DAT_180423760 + (longlong)iVar1 * 4) < 1)) {
        lp = (undefined8 *)0x0;
      }
      else {
        lp = (undefined8 *)(**(code **)(*DAT_1803fa360 + 0x18))();
        if (((lp == (undefined8 *)0x0) || (BVar2 = IsBadReadPtr(lp,8), BVar2 != 0)) ||
           (BVar2 = IsBadReadPtr((void *)*lp,8), BVar2 != 0)) {
          lp = (undefined8 *)0x0;
        }
      }
    }
  }
  return lp;
}


