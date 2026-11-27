// 0x1801f5ad0  FUN_1801f5ad0
// size=160 thunk=false
// signature: undefined FUN_1801f5ad0()
// status: ok


ulonglong FUN_1801f5ad0(undefined8 param_1,int param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (DAT_1803fa370 == (code *)0x0) {
    return 0x8876086c;
  }
  if (DAT_1803ff270 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001801f5b15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*DAT_1803fa370)();
    return uVar2;
  }
  if (DAT_1803f925f != '\0') {
    return 0;
  }
  uVar1 = (*DAT_1803fa370)();
  if ((((param_2 == 0) && (param_3 != 0)) && (-1 < (int)uVar1)) && (DAT_18040a38a != '\0')) {
    FUN_1801f5aa0(param_3);
  }
  return (ulonglong)uVar1;
}


