// 0x1801fd7f0  FUN_1801fd7f0
// size=150 thunk=false
// signature: undefined FUN_1801fd7f0()
// status: ok


void FUN_1801fd7f0(undefined8 *param_1,void *param_2,longlong param_3)

{
  void *pvVar1;
  size_t _Size;
  ulonglong _Size_00;
  
  pvVar1 = (void *)*param_1;
  _Size = param_3 - (longlong)param_2;
  if ((ulonglong)(param_1[2] - (longlong)pvVar1) < _Size) {
    FUN_18022e030(param_1,_Size);
    pvVar1 = (void *)*param_1;
    memmove(pvVar1,param_2,_Size);
    param_1[1] = (longlong)pvVar1 + _Size;
    return;
  }
  _Size_00 = param_1[1] - (longlong)pvVar1;
  if (_Size_00 < _Size) {
    memmove(pvVar1,param_2,_Size_00);
    pvVar1 = (void *)param_1[1];
    param_2 = (void *)(_Size_00 + (longlong)param_2);
    _Size = _Size - _Size_00;
  }
  memmove(pvVar1,param_2,_Size);
  param_1[1] = _Size + (longlong)pvVar1;
  return;
}


