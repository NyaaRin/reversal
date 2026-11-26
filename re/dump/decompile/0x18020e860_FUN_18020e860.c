// 0x18020e860  FUN_18020e860
// size=42 thunk=false
// signature: undefined FUN_18020e860()
// status: ok


undefined8 * FUN_18020e860(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_2 + 2;
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_180212700(param_1,param_2,*puVar1);
  }
  return param_1;
}


