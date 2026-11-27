// 0x1801fc780  FUN_1801fc780
// size=117 thunk=false
// signature: undefined FUN_1801fc780()
// status: ok


undefined8 * FUN_1801fc780(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  puVar2 = (undefined8 *)FUN_18022a630(param_3,param_2,param_2,*puVar2,0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  uVar1 = puVar2[3];
  param_1[2] = puVar2[2];
  param_1[3] = uVar1;
  *(undefined1 *)puVar2 = 0;
  puVar2[2] = 0;
  puVar2[3] = 0xf;
  return param_1;
}


