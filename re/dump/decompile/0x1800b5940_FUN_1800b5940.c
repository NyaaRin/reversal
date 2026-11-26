// 0x1800b5940  FUN_1800b5940
// size=94 thunk=false
// signature: undefined FUN_1800b5940()
// status: ok


undefined8 * FUN_1800b5940(longlong param_1,longlong param_2)

{
  void *lp;
  BOOL BVar1;
  undefined8 *lp_00;
  
  lp_00 = *(undefined8 **)(param_1 + param_2);
  if ((lp_00 == (undefined8 *)0x0) || (BVar1 = IsBadReadPtr(lp_00,0x150), BVar1 != 0)) {
    lp_00 = (undefined8 *)0x0;
  }
  else {
    lp = (void *)*lp_00;
    if ((lp == (void *)0x0) ||
       ((BVar1 = IsBadReadPtr(lp,0x40), BVar1 != 0 || (*(longlong *)((longlong)lp + 8) == 0)))) {
      lp_00 = (undefined8 *)0x0;
    }
  }
  return lp_00;
}


