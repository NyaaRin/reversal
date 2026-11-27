// 0x1801f6f60  FUN_1801f6f60
// size=237 thunk=false
// signature: undefined FUN_1801f6f60()
// status: ok


void FUN_1801f6f60(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (DAT_1803ff270 == '\0') {
    if (DAT_1803fa3c0 == (code *)0x0) {
      return;
    }
  }
  else if ((param_2 == (longlong *)0x0) || (param_2[1] == 0)) {
    DAT_1803fa5e8 = 0;
    FUN_1800ea2e0();
  }
  else {
    FUN_1801f6d80();
    cVar1 = (**(code **)(*param_2 + 0x268))(param_2);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_2 + 600))(param_2);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*param_2 + 0x260))(param_2);
        pcVar2 = "client";
        if (cVar1 == '\0') {
          pcVar2 = "unknown";
        }
        FUN_180014410("%s destroyed\n",pcVar2);
      }
      else {
        FUN_180014410("%s destroyed\n","server");
      }
    }
    else {
      FUN_180014410("%s destroyed\n",&DAT_1803406cc);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001801f704a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1803fa3c0)(param_1,param_2);
  return;
}


