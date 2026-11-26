// 0x1800b4ba0  FUN_1800b4ba0
// size=72 thunk=false
// signature: undefined FUN_1800b4ba0()
// status: ok


void FUN_1800b4ba0(void)

{
  void *lp;
  BOOL BVar1;
  
  if ((((DAT_1803fa5a0 != (undefined8 *)0x0) && (lp = (void *)*DAT_1803fa5a0, lp != (void *)0x0)) &&
      (BVar1 = IsBadReadPtr(lp,0x10), BVar1 == 0)) && (*(code **)((longlong)lp + 8) != (code *)0x0))
  {
    (**(code **)((longlong)lp + 8))(DAT_1803fa5a0);
  }
  return;
}


