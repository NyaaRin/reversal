// 0x180308b30  FUN_180308b30
// size=75 thunk=false
// signature: undefined FUN_180308b30()
// status: ok


void FUN_180308b30(void)

{
  undefined8 *puVar1;
  
  FUN_18021e0d0(&DAT_1805c7bd0);
  if (DAT_1805c7bf0 != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(*DAT_1805c7bf0 + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180308b73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}


