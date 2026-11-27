// 0x1801ec910  FUN_1801ec910
// size=171 thunk=false
// signature: undefined FUN_1801ec910()
// status: ok


void FUN_1801ec910(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  if (DAT_1803ff270 == '\0') {
    if (DAT_1803ff900 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801ec949. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_1803ff900)();
      return;
    }
  }
  else {
    cVar1 = FUN_18003a090("PreFrameStageNotify");
    if (cVar1 != '\0') {
      FUN_1801feff0("PreFrameStageNotify");
    }
    if (DAT_1803ff900 != (code *)0x0) {
      (*DAT_1803ff900)(param_1,param_2);
    }
    cVar1 = FUN_18003a090("PostFrameStageNotify");
    if (cVar1 != '\0') {
      FUN_1801feff0("PostFrameStageNotify");
    }
  }
  return;
}


