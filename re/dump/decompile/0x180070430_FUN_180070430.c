// 0x180070430  FUN_180070430
// size=149 thunk=false
// signature: undefined FUN_180070430()
// status: ok


void FUN_180070430(undefined8 param_1)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((DAT_18042586d != '\0') && (DAT_1803feff0 != '\0')) {
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_18001d080(&local_28,"net.WriteMatrix(...)",0x14);
    if (DAT_1803feff0 != '\0') {
      FUN_18020d6f0(&DAT_1803eb820,&local_28);
    }
    FUN_18020e450(&local_28);
                    /* WARNING: Could not recover jumptable at 0x0001800704b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1803feef8)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800704c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1803feef8)(param_1);
  return;
}


