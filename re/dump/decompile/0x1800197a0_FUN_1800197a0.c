// 0x1800197a0  FUN_1800197a0
// size=140 thunk=false
// signature: undefined FUN_1800197a0()
// status: ok


uint FUN_1800197a0(void *param_1)

{
  BOOL BVar1;
  uint uVar2;
  void *lp;
  char *_Str;
  
  lp = *(void **)((longlong)param_1 + 0x38);
  if ((lp == (void *)0x0) || (lp == param_1)) {
LAB_1800197cd:
    lp = param_1;
  }
  else {
    BVar1 = IsBadReadPtr(lp,0x60);
    if (BVar1 != 0) goto LAB_1800197cd;
  }
  _Str = *(char **)((longlong)lp + 0x48);
  if (_Str != (char *)0x0) {
    BVar1 = IsBadReadPtr(_Str,2);
    if (BVar1 == 0) {
      FUN_180019640();
      goto LAB_1800197fa;
    }
  }
  _Str = (char *)0x0;
LAB_1800197fa:
  if ((DAT_1803da5c4 != 1) && (_Str != (char *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000180019815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = atoi(_Str);
    return uVar2;
  }
  return (uint)lp ^ *(uint *)((longlong)lp + 0x58);
}


