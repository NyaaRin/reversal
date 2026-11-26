// 0x18020ca40  FUN_18020ca40
// size=175 thunk=false
// signature: undefined FUN_18020ca40()
// status: ok


undefined8 * FUN_18020ca40(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  ulonglong _Size;
  ulonglong _Size_00;
  
  if (param_1 != param_2) {
    _Dst = (void *)*param_1;
    _Src = (void *)*param_2;
    _Size = param_2[1] - (longlong)_Src;
    if ((ulonglong)(param_1[2] - (longlong)_Dst) < _Size) {
      FUN_18022e030(param_1,_Size);
      _Dst = (void *)*param_1;
      memmove(_Dst,_Src,_Size);
    }
    else {
      _Size_00 = param_1[1] - (longlong)_Dst;
      if (_Size_00 < _Size) {
        memmove(_Dst,_Src,_Size_00);
        _Dst = (void *)param_1[1];
        _Src = (void *)(_Size_00 + (longlong)_Src);
        _Size = _Size - _Size_00;
      }
      memmove(_Dst,_Src,_Size);
    }
    param_1[1] = _Size + (longlong)_Dst;
  }
  return param_1;
}


