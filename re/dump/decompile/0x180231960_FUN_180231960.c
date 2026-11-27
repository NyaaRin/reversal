// 0x180231960  FUN_180231960
// size=255 thunk=false
// signature: undefined FUN_180231960()
// status: ok


void FUN_180231960(int *param_1,longlong param_2,int *param_3,longlong param_4,longlong param_5,
                  longlong *param_6)

{
  int *_Dst;
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *_Src;
  size_t _Size;
  
  do {
    if (param_5 <= param_4) {
      memmove(param_3,param_1,param_2 - (longlong)param_1);
      return;
    }
    param_5 = param_5 - param_4;
    piVar1 = param_1 + param_4;
    lVar5 = param_4;
    if (param_5 < param_4) {
      lVar5 = param_5;
    }
    param_5 = param_5 - lVar5;
    piVar2 = piVar1 + lVar5;
    _Src = piVar1;
    do {
      while( true ) {
        _Dst = param_3 + 1;
        iVar3 = *param_1;
        iVar4 = *_Src;
        if (*(int *)(*param_6 + (longlong)iVar4 * 4) <= *(int *)(*param_6 + (longlong)iVar3 * 4))
        break;
        _Src = _Src + 1;
        *param_3 = iVar4;
        param_3 = _Dst;
        if (_Src == piVar2) {
          _Size = (longlong)piVar1 - (longlong)param_1;
          _Src = param_1;
          goto LAB_180231a14;
        }
      }
      param_1 = param_1 + 1;
      *param_3 = iVar3;
      param_3 = _Dst;
    } while (param_1 != piVar1);
    _Size = (longlong)piVar2 - (longlong)_Src;
LAB_180231a14:
    memmove(_Dst,_Src,_Size);
    param_3 = (int *)((longlong)_Dst + _Size);
    param_1 = piVar2;
  } while( true );
}


