// 0x1801f6f30  FUN_1801f6f30
// size=43 thunk=false
// signature: undefined FUN_1801f6f30()
// status: ok


void FUN_1801f6f30(undefined8 param_1)

{
  FUN_1801f6d80();
  if (DAT_1803fa458 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801f6f52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1803fa458)(param_1);
    return;
  }
  return;
}


