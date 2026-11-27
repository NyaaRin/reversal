// 0x180287b10  FUN_180287b10
// size=147 thunk=false
// signature: undefined FUN_180287b10()
// status: ok


void FUN_180287b10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *_Str;
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x2868) != 0) {
    FUN_18028a8d0(param_1 + 0x2870,0);
    FUN_1802695b0(param_1 + 0x2870,param_2,param_3);
    iVar1 = *(int *)(param_1 + 0x2870) + -1;
    if (*(int *)(param_1 + 0x2870) == 0) {
      iVar1 = 0;
    }
    _Str = &DAT_1803fa56f;
    if (*(undefined **)(param_1 + 0x2878) != (undefined *)0x0) {
      _Str = *(undefined **)(param_1 + 0x2878);
    }
                    /* WARNING: Could not recover jumptable at 0x000180287b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fwrite(_Str,1,(longlong)iVar1,*(FILE **)(param_1 + 0x2868));
    return;
  }
  FUN_1802695b0(param_1 + 0x2870);
  return;
}


