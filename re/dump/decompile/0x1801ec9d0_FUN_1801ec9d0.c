// 0x1801ec9d0  FUN_1801ec9d0
// size=147 thunk=false
// signature: undefined FUN_1801ec9d0()
// status: ok


void FUN_1801ec9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_1803ff270 == '\0') {
    if (DAT_1803ff8f8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801eca19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_1803ff8f8)();
      return;
    }
  }
  else {
    FUN_1800575f0("PreRunCommand");
    if (DAT_1803ff8f8 != (code *)0x0) {
      (*DAT_1803ff8f8)(param_1,param_2,param_3,param_4);
    }
    FUN_1800575f0("PostRunCommand",param_2,param_3);
  }
  return;
}


