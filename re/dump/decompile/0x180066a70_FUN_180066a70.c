// 0x180066a70  FUN_180066a70
// size=90 thunk=false
// signature: undefined FUN_180066a70()
// status: ok


longlong * FUN_180066a70(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  *param_2 = (longlong)puVar1 + param_1[2] * 2;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 7;
  *(undefined2 *)(param_2 + 1) = 0;
  param_2[5] = (longlong)param_1;
  return param_2;
}


