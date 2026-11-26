// 0x1801ed510  FUN_1801ed510
// size=152 thunk=false
// signature: undefined FUN_1801ed510()
// status: ok


void FUN_1801ed510(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  code *pcVar2;
  undefined1 local_38 [32];
  code *local_18;
  
  local_18 = (code *)0x0;
  cVar1 = FUN_180115420(param_1,local_38);
  pcVar2 = (code *)0x0;
  if (cVar1 != '\0') {
    pcVar2 = local_18;
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1,param_2);
    if ((((DAT_1803ff270 != '\0') && (param_1 != (longlong *)0x0)) && (DAT_180409899 != '\0')) &&
       (((DAT_180409881 == '\0' && (DAT_180409888 == '\0')) && (DAT_180409890 != 0)))) {
      DAT_180409888 = 1;
      (**(code **)(*param_1 + 0x360))(param_1);
      DAT_180409888 = '\0';
    }
  }
  return;
}


