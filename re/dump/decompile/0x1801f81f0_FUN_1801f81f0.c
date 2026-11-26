// 0x1801f81f0  FUN_1801f81f0
// size=51 thunk=false
// signature: undefined FUN_1801f81f0()
// status: ok


void * FUN_1801f81f0(longlong *param_1)

{
  BOOL BVar1;
  void *lp;
  
  lp = (void *)(**(code **)(*param_1 + 0x48))();
  if ((lp != (void *)0x0) && (BVar1 = IsBadReadPtr(lp,4), BVar1 == 0)) {
    return lp;
  }
  return (void *)0x0;
}


