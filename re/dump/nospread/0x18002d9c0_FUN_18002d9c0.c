// 18002d9c0  FUN_18002d9c0
// signature: undefined FUN_18002d9c0()
// status: ok


void FUN_18002d9c0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  char local_10;
  
  if (DAT_1803faee8 != (code *)0x0) {
    FUN_180023010(&local_28,param_1);
    (*DAT_1803faee8)(param_1,param_2,param_3);
    if ((local_10 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_28,local_20,local_18,local_14);
    }
  }
  return;
}


