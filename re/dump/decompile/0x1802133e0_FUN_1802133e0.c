// 0x1802133e0  FUN_1802133e0
// size=158 thunk=false
// signature: undefined FUN_1802133e0()
// status: ok


void FUN_1802133e0(undefined8 *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  longlong lVar2;
  ulonglong _Size;
  
  pvVar1 = (void *)*param_1;
  if ((ulonglong)(param_1[2] - (longlong)pvVar1) < param_3) {
    FUN_18022e030(param_1,param_3);
    pvVar1 = (void *)*param_1;
    memmove(pvVar1,param_2,param_3);
    param_1[1] = (longlong)pvVar1 + param_3;
    return;
  }
  _Size = param_1[1] - (longlong)pvVar1;
  if (_Size < param_3) {
    memmove(pvVar1,param_2,_Size);
    pvVar1 = (void *)param_1[1];
    memmove(pvVar1,(void *)(_Size + (longlong)param_2),param_3 - _Size);
    lVar2 = (param_3 - _Size) + (longlong)pvVar1;
  }
  else {
    memmove(pvVar1,param_2,param_3);
    lVar2 = (longlong)pvVar1 + param_3;
  }
  param_1[1] = lVar2;
  return;
}


