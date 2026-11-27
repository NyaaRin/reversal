// 0x18006e740  FUN_18006e740
// size=543 thunk=false
// signature: undefined FUN_18006e740()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18006e740(void *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  size_t _Size;
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined8 *local_60;
  void *local_58;
  longlong lStack_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  if (((param_1 != (void *)0x0) && (local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_88, 0 < param_2))
     && (0 < param_3)) {
    local_58 = (void *)0x0;
    lStack_50 = 0;
    local_48 = 0;
    _Size = (size_t)param_2;
    if (_Size == 0) {
      memmove((void *)0x0,param_1,0);
      lStack_50 = 0;
    }
    else {
      FUN_18022e030(&local_58,_Size);
      pvVar7 = local_58;
      memmove(local_58,param_1,_Size);
      lStack_50 = _Size + (longlong)pvVar7;
    }
    local_68 = &DAT_1803e7260;
    local_40 = param_3;
    iVar5 = _Mtx_lock(&DAT_1803e7260);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (DAT_1803e72ac == 0x7fffffff) {
      DAT_1803e72ac = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    if (DAT_1805c3978 <= DAT_1805c3988 + 1U) {
      FUN_18022d240();
    }
    DAT_1805c3980 = DAT_1805c3980 & DAT_1805c3978 - 1;
    uVar1 = DAT_1805c3980 + DAT_1805c3988;
    lVar2 = (DAT_1805c3978 - 1 & uVar1) * 8;
    if (*(longlong *)(lVar2 + DAT_1805c3970) == 0) {
      uVar6 = FUN_1802d8350(0x20);
      *(undefined8 *)(lVar2 + DAT_1805c3970) = uVar6;
    }
    lVar4 = local_48;
    lVar2 = lStack_50;
    pvVar7 = local_58;
    local_60 = *(undefined8 **)(DAT_1805c3970 + (DAT_1805c3978 - 1 & uVar1) * 8);
    local_48 = 0;
    lStack_50 = 0;
    local_58 = (void *)0x0;
    *local_60 = pvVar7;
    local_60[1] = lVar2;
    local_60[2] = lVar4;
    *(int *)(local_60 + 3) = local_40;
    DAT_1805c3988 = DAT_1805c3988 + 1;
    _Mtx_unlock(&DAT_1803e7260);
    if (local_58 != (void *)0x0) {
      pvVar7 = local_58;
      if ((0xfff < (ulonglong)(local_48 - (longlong)local_58)) &&
         (pvVar7 = *(void **)((longlong)local_58 + -8),
         0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar7)))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      free(pvVar7);
    }
  }
  return;
}


