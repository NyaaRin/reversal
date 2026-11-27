// 0x180211740  FUN_180211740
// size=122 thunk=false
// signature: undefined FUN_180211740()
// status: ok


undefined8 * FUN_180211740(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < param_3) {
    puVar2 = (undefined8 *)FUN_18021ff50(param_1,param_3,param_3,param_2,param_3);
    return puVar2;
  }
  param_1[2] = lVar1 + param_3;
  puVar2 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  memmove((void *)((longlong)puVar2 + lVar1 * 2),param_2,param_3 * 2);
  *(undefined2 *)((longlong)puVar2 + (lVar1 + param_3) * 2) = 0;
  return param_1;
}


