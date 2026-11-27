// 0x180209d90  FUN_180209d90
// size=20 thunk=false
// signature: undefined FUN_180209d90()
// status: ok


void FUN_180209d90(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180209da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}


