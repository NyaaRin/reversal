// 0x180019700  FUN_180019700
// size=146 thunk=false
// signature: undefined FUN_180019700()
// status: ok


ulonglong FUN_180019700(void *param_1)

{
  BOOL BVar1;
  void *lp;
  char *_String;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 extraout_XMM0_Qb;
  
  lp = *(void **)((longlong)param_1 + 0x38);
  if ((lp == (void *)0x0) || (lp == param_1)) {
LAB_18001972d:
    lp = param_1;
  }
  else {
    BVar1 = IsBadReadPtr(lp,0x60);
    if (BVar1 != 0) goto LAB_18001972d;
  }
  _String = *(char **)((longlong)lp + 0x48);
  if (_String != (char *)0x0) {
    BVar1 = IsBadReadPtr(_String,2);
    if (BVar1 == 0) {
      FUN_180019640(extraout_XMM0_Qa,lp,_String);
      goto LAB_18001975a;
    }
  }
  _String = (char *)0x0;
LAB_18001975a:
  if ((DAT_1803da5c4 != 1) && (_String != (char *)0x0)) {
    auVar2._0_8_ = atof(_String);
    auVar2._8_8_ = extraout_XMM0_Qb;
    auVar3._4_12_ = auVar2._4_12_;
    auVar3._0_4_ = (float)auVar2._0_8_;
    return auVar3._0_8_;
  }
  return (ulonglong)((uint)lp ^ *(uint *)((longlong)lp + 0x54));
}


