// 0x18022a630  FUN_18022a630
// size=238 thunk=false
// signature: undefined FUN_18022a630()
// status: ok


undefined8 *
FUN_18022a630(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  size_t _Size;
  
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < param_4) {
    puVar2 = (undefined8 *)FUN_180233da0(param_1,param_4,lVar1,param_4,param_3,param_4);
    return puVar2;
  }
  param_1[2] = lVar1 + param_4;
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  _Size = param_4;
  if ((puVar2 < (undefined8 *)((longlong)param_3 + param_4)) &&
     (param_3 <= (undefined8 *)(lVar1 + (longlong)puVar2))) {
    if (param_3 < puVar2) {
      _Size = (longlong)puVar2 - (longlong)param_3;
    }
    else {
      _Size = 0;
    }
  }
  memmove((void *)((longlong)puVar2 + param_4),puVar2,lVar1 + 1);
  memcpy(puVar2,param_3,_Size);
  memcpy((void *)((longlong)puVar2 + _Size),(void *)((longlong)param_3 + param_4 + _Size),
         param_4 - _Size);
  return param_1;
}


