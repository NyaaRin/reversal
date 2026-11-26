// 0x180308ae0  FUN_180308ae0
// size=75 thunk=false
// signature: undefined FUN_180308ae0()
// status: ok


void FUN_180308ae0(void)

{
  undefined8 *puVar1;
  
  FUN_18021e0d0(&DAT_180430130);
  if (DAT_180430150 != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(*DAT_180430150 + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180308b23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}


