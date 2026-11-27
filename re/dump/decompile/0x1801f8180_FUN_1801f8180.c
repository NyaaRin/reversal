// 0x1801f8180  FUN_1801f8180
// size=92 thunk=false
// signature: undefined FUN_1801f8180()
// status: ok


undefined8 FUN_1801f8180(undefined8 *param_1)

{
  void *lp;
  BOOL BVar1;
  undefined8 uVar2;
  
  if ((param_1 == (undefined8 *)0x0) || (BVar1 = IsBadReadPtr(param_1,8), BVar1 != 0)) {
    return 0xffffffff;
  }
  lp = (void *)*param_1;
  if ((lp != (void *)0x0) && (BVar1 = IsBadReadPtr(lp,0x50), BVar1 == 0)) {
    uVar2 = (**(code **)((longlong)lp + 0x38))(param_1);
    return uVar2;
  }
  return 0xffffffff;
}


