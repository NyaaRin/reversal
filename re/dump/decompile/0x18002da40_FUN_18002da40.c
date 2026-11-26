// 0x18002da40  FUN_18002da40
// size=203 thunk=false
// signature: undefined FUN_18002da40()
// status: ok


void FUN_18002da40(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  char local_10;
  
  if (DAT_1803fb098 == (code *)0x0) {
    if (DAT_1803fe690 == '\0') {
      DAT_1803fe690 = '\x01';
      FUN_180014410(&DAT_1803413d0);
    }
    UNRECOVERED_JUMPTABLE = DAT_1803faf10;
    if ((DAT_1803faf10 != (code *)0x0) && (DAT_1803fb088 != (code *)0x0)) {
      iVar1 = (*DAT_1803fb088)(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018002dab2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,iVar1 + -1);
      return;
    }
  }
  else {
    FUN_180023010(&local_28,param_1);
    (*DAT_1803fb098)(param_1,param_2,param_3);
    if ((local_10 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_28,local_20,local_18,local_14);
    }
  }
  return;
}


