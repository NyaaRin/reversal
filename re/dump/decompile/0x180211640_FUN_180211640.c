// 0x180211640  FUN_180211640
// size=245 thunk=false
// signature: undefined FUN_180211640()
// status: ok


undefined8 *
FUN_180211640(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < param_4) {
    puVar2 = (undefined8 *)FUN_18021fdb0(param_1,param_4,lVar1,param_4,param_3,param_4);
    return puVar2;
  }
  param_1[2] = lVar1 + param_4;
  puVar2 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  uVar3 = param_4;
  if ((puVar2 < (undefined8 *)((longlong)param_3 + param_4 * 2)) &&
     (param_3 <= (undefined8 *)((longlong)puVar2 + lVar1 * 2))) {
    if (param_3 < puVar2) {
      uVar3 = (longlong)puVar2 - (longlong)param_3 >> 1;
    }
    else {
      uVar3 = 0;
    }
  }
  memmove((void *)((longlong)puVar2 + param_4 * 2),puVar2,lVar1 * 2 + 2);
  memcpy(puVar2,param_3,uVar3 * 2);
  memcpy((void *)(uVar3 * 2 + (longlong)puVar2),(void *)((longlong)param_3 + (uVar3 + param_4) * 2),
         (param_4 - uVar3) * 2);
  return param_1;
}


