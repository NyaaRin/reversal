// 0x18023cc90  FUN_18023cc90
// size=412 thunk=false
// signature: undefined FUN_18023cc90()
// status: ok


void FUN_18023cc90(undefined8 param_1,void *param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,void *param_6,longlong param_7,undefined8 param_8,void *param_9
                  ,void *param_10,longlong param_11,longlong param_12)

{
  size_t _Size;
  void *_Dst;
  
  param_4 = param_4 - param_11;
  _Dst = param_10;
  if ((param_4 != 0) && (_Dst = param_9, param_12 != 0)) {
    if ((param_12 < param_4) || (param_7 < param_4)) {
      if (param_7 < param_12) {
        _Dst = param_10;
        if ((param_9 != param_2) && (_Dst = param_9, param_2 != param_10)) {
          FUN_1802d71d0(param_9,param_2,param_10);
          _Dst = (void *)((longlong)param_9 + ((longlong)param_10 - (longlong)param_2 >> 2) * 4);
        }
      }
      else {
        _Size = (longlong)param_10 - (longlong)param_2;
        memmove(param_6,param_2,_Size);
        memmove((void *)((longlong)param_10 - ((longlong)param_2 - (longlong)param_9)),param_9,
                (longlong)param_2 - (longlong)param_9);
        memmove(param_9,param_6,_Size);
        _Dst = (void *)(_Size + (longlong)param_9);
      }
    }
    else {
      memmove(param_6,param_9,(longlong)param_2 - (longlong)param_9);
      memmove(param_9,param_2,(longlong)param_10 - (longlong)param_2);
      _Dst = (void *)(((longlong)param_10 - (longlong)param_2) + (longlong)param_9);
      memmove(_Dst,param_6,(longlong)param_2 - (longlong)param_9);
    }
  }
  FUN_180221960(param_1,param_9,_Dst,param_11,param_12,param_6,param_7,param_8);
  FUN_180221960(_Dst,param_10,param_3,param_4);
  return;
}


