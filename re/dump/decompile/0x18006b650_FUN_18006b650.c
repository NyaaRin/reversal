// 0x18006b650  FUN_18006b650
// size=696 thunk=false
// signature: undefined FUN_18006b650()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18006b650(char param_1,char *param_2,undefined4 param_3,undefined4 param_4,void *param_5,
                  int param_6)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  char *_Str;
  ulonglong _Size;
  size_t _Size_00;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar6;
  undefined1 auStack_e8 [32];
  undefined *local_c8;
  undefined4 local_b8;
  char local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  void *pvStack_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  _Size_00 = (size_t)param_6;
  if (DAT_18042586d == '\0') {
    return;
  }
  cVar1 = DAT_1803e95f1;
  if (param_1 != '\0') {
    cVar1 = DAT_1803e95f0;
  }
  if (cVar1 == '\0') {
    return;
  }
  local_b8 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0xf;
  local_b0 = 0;
  local_90 = 0;
  local_8c = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  pvStack_60 = (void *)0x0;
  local_58 = 0;
  if (DAT_1803fa608 != (undefined4 *)0x0) {
    local_b8 = *DAT_1803fa608;
  }
  _Str = "?";
  if (param_2 != (char *)0x0) {
    _Str = param_2;
  }
  local_b4 = param_1;
  sVar4 = strlen(_Str);
  FUN_180212700(&local_b0,_Str,sVar4);
  local_90 = param_3;
  local_8c = param_4;
  if ((param_5 != (void *)0x0) && (0 < param_6)) {
    if ((ulonglong)(local_58 - (longlong)local_68) < _Size_00) {
      FUN_18022e030(&local_68,_Size_00);
      pvVar5 = local_68;
    }
    else {
      _Size = (longlong)pvStack_60 - (longlong)local_68;
      if (_Size_00 <= _Size) {
        pvVar5 = (void *)(_Size_00 + (longlong)local_68);
        memmove(local_68,param_5,_Size_00);
        pvStack_60 = pvVar5;
        goto LAB_18006b7b4;
      }
      memmove(local_68,param_5,_Size);
      _Size_00 = _Size_00 - _Size;
      param_5 = (void *)(_Size + (longlong)param_5);
      pvVar5 = pvStack_60;
    }
    memmove(pvVar5,param_5,_Size_00);
    pvStack_60 = (void *)(_Size_00 + (longlong)pvVar5);
  }
LAB_18006b7b4:
  local_c8 = &DAT_1803e9600;
  iVar3 = _Mtx_lock(&DAT_1803e9600);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = extraout_XMM0_Da;
  if (DAT_1803e964c == 0x7fffffff) {
    DAT_1803e964c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
    uVar6 = extraout_XMM0_Da_00;
  }
  DAT_180425860 = DAT_180425860 + 1;
  local_88 = DAT_180425860;
  FUN_18020c4b0(uVar6,&local_b8);
  do {
    if (DAT_1805c7ac8 < 0x1f5) {
LAB_18006b883:
      _Mtx_unlock(&DAT_1803e9600);
      if (local_68 != (void *)0x0) {
        pvVar5 = local_68;
        if ((0xfff < (ulonglong)(local_58 - (longlong)local_68)) &&
           (pvVar5 = *(void **)((longlong)local_68 + -8),
           0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pvVar5)))) {
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        free(pvVar5);
        local_68 = (void *)0x0;
        pvStack_60 = (void *)0x0;
        local_58 = 0;
      }
      FUN_18020d5c0(&local_80);
      FUN_18020e450(&local_b0);
      return;
    }
    FUN_18006b910(*(undefined8 *)(DAT_1805c7ab0 + (DAT_1805c7ab8 - 1U & DAT_1805c7ac0) * 8));
    DAT_1805c7ac8 = DAT_1805c7ac8 - 1;
    if (DAT_1805c7ac8 == 0) {
      DAT_1805c7ac0 = 0;
      goto LAB_18006b883;
    }
    DAT_1805c7ac0 = DAT_1805c7ac0 + 1;
  } while( true );
}


