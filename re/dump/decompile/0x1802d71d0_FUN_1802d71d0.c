// 0x1802d71d0  FUN_1802d71d0
// size=555 thunk=false
// signature: undefined FUN_1802d71d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d71d0(void *param_1,void *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong _Size;
  longlong lVar2;
  void *pvVar3;
  ulonglong _Size_00;
  size_t _Size_01;
  void *_Src;
  undefined1 auStack_268 [32];
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_268;
  do {
    while( true ) {
      _Size = (longlong)param_2 - (longlong)param_1;
      _Size_00 = param_3 - (longlong)param_2;
      if (_Size <= _Size_00) break;
      if (_Size_00 == 0) {
        return;
      }
      if ((_Size_00 < 0x201) && ((_Size_00 < 0x81 || (_Size_00 * 2 <= _Size)))) {
        memcpy(local_248,param_2,_Size_00);
        uVar1 = _Size & 0xffffffffffffe000;
        pvVar3 = (void *)(uVar1 + (longlong)((longlong)param_1 + _Size_00));
        _Src = (void *)(uVar1 + (longlong)param_1);
        if (_Size - uVar1 != 0) {
          memmove(pvVar3,_Src,_Size - uVar1);
        }
        while (pvVar3 != (void *)((longlong)param_1 + _Size_00)) {
          pvVar3 = (void *)((longlong)pvVar3 + -0x2000);
          _Src = (void *)((longlong)_Src + -0x2000);
          memmove(pvVar3,_Src,0x2000);
        }
LAB_1802d73ca:
        memcpy(param_1,local_248,_Size_00);
        return;
      }
      if (_Size < _Size_00 * 2) {
        FUN_1802d7410(param_2,param_3,param_1);
        param_1 = (void *)(_Size_00 + (longlong)param_1);
      }
      else {
        FUN_1802d6ea0(param_2,param_3,(void *)(_Size_00 + (longlong)param_1),param_1);
        param_1 = (void *)((longlong)param_1 + _Size_00 * 2);
      }
    }
    if (_Size == 0) {
      return;
    }
    if ((_Size < 0x201) && ((_Size < 0x81 || (_Size * 2 <= _Size_00)))) {
      memcpy(local_248,param_1,_Size);
      for (pvVar3 = param_1; pvVar3 != (void *)((_Size_00 & 0xffffffffffffe000) + (longlong)param_1)
          ; pvVar3 = (void *)((longlong)pvVar3 + 0x2000)) {
        memmove(pvVar3,param_2,0x2000);
        param_2 = (void *)((longlong)param_2 + 0x2000);
      }
      _Size_01 = _Size_00 - (_Size_00 & 0xffffffffffffe000);
      if (_Size_01 != 0) {
        memmove(pvVar3,param_2,_Size_01);
      }
      param_1 = (void *)((longlong)param_1 + _Size_00);
      _Size_00 = _Size;
      goto LAB_1802d73ca;
    }
    lVar2 = param_3 - _Size;
    if (_Size_00 < _Size * 2) {
      FUN_1802d7410();
      param_3 = lVar2;
    }
    else {
      FUN_1802d6ea0(lVar2,param_3,param_1,lVar2 - _Size);
      param_3 = lVar2 - _Size;
    }
  } while( true );
}


