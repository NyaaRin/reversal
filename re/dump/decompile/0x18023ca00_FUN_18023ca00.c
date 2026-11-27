// 0x18023ca00  FUN_18023ca00
// size=255 thunk=false
// signature: undefined FUN_18023ca00()
// status: ok


undefined8 * FUN_18023ca00(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  ulonglong uVar1;
  size_t _Size;
  ulonglong uVar2;
  void *_Dst;
  
  if (param_1 != param_2) {
    _Dst = (void *)*param_1;
    _Src = (void *)*param_2;
    uVar1 = param_2[1] - (longlong)_Src >> 2;
    if ((ulonglong)(param_1[2] - (longlong)_Dst >> 2) < uVar1) {
      FUN_18021e150(param_1,uVar1);
      _Dst = (void *)*param_1;
      _Size = uVar1 * 4;
      memmove(_Dst,_Src,_Size);
    }
    else {
      uVar2 = param_1[1] - (longlong)_Dst >> 2;
      if (uVar2 < uVar1) {
        memmove(_Dst,_Src,uVar2 * 4);
        _Dst = (void *)param_1[1];
        _Size = (uVar1 - uVar2) * 4;
        memmove(_Dst,(void *)(uVar2 * 4 + (longlong)_Src),_Size);
      }
      else {
        _Size = uVar1 * 4;
        memmove(_Dst,_Src,_Size);
      }
    }
    param_1[1] = _Size + (longlong)_Dst;
    param_1[3] = param_2[3];
  }
  return param_1;
}


