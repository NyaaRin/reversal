// 18002db10  FUN_18002db10
// signature: undefined FUN_18002db10()
// status: ok


void FUN_18002db10(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  char local_10;
  
  if (((DAT_1803faef0 != (code *)0x0) && (DAT_1803fafa0 != (code *)0x0)) &&
     (DAT_1803fb088 != (code *)0x0)) {
    if (param_2 + 9999U < 9999) {
      iVar1 = (*DAT_1803fb088)();
      param_2 = param_2 + 1 + iVar1;
    }
    (*DAT_1803fafa0)(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00018002db80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1803faef0)(param_1,param_2);
    return;
  }
  if (DAT_1803faee8 != (code *)0x0) {
    FUN_180023010(&local_28,param_1);
    (*DAT_1803faee8)(param_1,param_2,param_3);
    if ((local_10 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_28,local_20,local_18,local_14);
    }
  }
  return;
}


