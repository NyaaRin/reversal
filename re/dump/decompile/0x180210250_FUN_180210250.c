// 0x180210250  FUN_180210250
// size=52 thunk=false
// signature: undefined FUN_180210250()
// status: ok


void FUN_180210250(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018021027c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}


