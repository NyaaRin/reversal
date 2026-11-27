// 0x180233f10  FUN_180233f10
// size=160 thunk=false
// signature: undefined FUN_180233f10()
// status: ok


undefined8 *
FUN_180233f10(undefined8 *param_1,char *param_2,char *param_3,undefined8 param_4,char *param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (param_5 == "\n") {
    uVar1 = thunk_FUN_1802d5c20(param_2,param_3,&DAT_18033bc0d);
    *param_1 = uVar1;
    return param_1;
  }
  if (0xf < (longlong)param_3 - (longlong)param_2) {
    uVar1 = FUN_1802d7070(param_2,param_3,&DAT_18033bce8,param_5);
    *param_1 = uVar1;
    return param_1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    if (param_5 != "\r\n") {
      pcVar2 = "\r\n";
      do {
        if (*param_2 == *pcVar2) goto LAB_180233fa4;
        pcVar2 = pcVar2 + 1;
      } while (pcVar2 != param_5);
    }
  }
LAB_180233fa4:
  *param_1 = param_2;
  return param_1;
}


