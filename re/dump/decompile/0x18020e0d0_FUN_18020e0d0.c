// 0x18020e0d0  FUN_18020e0d0
// size=302 thunk=false
// signature: undefined FUN_18020e0d0()
// status: ok


void FUN_18020e0d0(longlong *param_1,ulonglong param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *_Dst;
  
  lVar2 = *param_1;
  if ((ulonglong)(param_1[2] - lVar2 >> 2) < param_2) {
    FUN_18021e150(param_1);
    _Dst = (int *)*param_1;
    if (*param_3 == 0) {
      memset(_Dst,0,param_2 * 4);
      param_1[1] = (longlong)(_Dst + param_2);
      return;
    }
    if (param_2 != 0) {
      do {
        *_Dst = *param_3;
        _Dst = _Dst + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      param_1[1] = (longlong)_Dst;
      return;
    }
  }
  else {
    uVar3 = param_1[1] - lVar2 >> 2;
    if (param_2 <= uVar3) {
      lVar1 = lVar2 + param_2 * 4;
      FUN_18021a230(lVar2,lVar1);
      param_1[1] = lVar1;
      return;
    }
    FUN_18021a230();
    lVar2 = param_2 - uVar3;
    _Dst = (int *)param_1[1];
    if (*param_3 == 0) {
      memset(_Dst,0,lVar2 * 4);
      param_1[1] = (longlong)(_Dst + lVar2);
      return;
    }
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *_Dst = *param_3;
      _Dst = _Dst + 1;
    }
  }
  param_1[1] = (longlong)_Dst;
  return;
}


