// 0x180025c60  FUN_180025c60
// size=385 thunk=false
// signature: undefined FUN_180025c60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180025c60(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *_Buf1;
  undefined8 *puVar8;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 local_e0;
  char local_d8 [192];
  ulonglong local_18;
  
  if (param_1 != 0) {
    local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
    cVar2 = FUN_180025c00(param_1,local_d8);
    if (((cVar2 != '\0') && (sVar4 = strlen(local_d8), 7 < sVar4)) && (local_d8[0] == '@')) {
      lVar6 = 0;
      do {
        lVar7 = lVar6 + 1;
        if (local_d8[lVar6 + sVar4 + -4] != (&DAT_180340d34)[lVar6]) {
          return;
        }
        lVar6 = lVar7;
      } while (lVar7 != 5);
      local_e0 = &DAT_1803e7570;
      iVar3 = _Mtx_lock(&DAT_1803e7570);
      if (iVar3 != 0) {
        std::_Throw_Cpp_error(5);
      }
      if (DAT_1803e75bc == 0x7fffffff) {
        DAT_1803e75bc = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      puVar1 = DAT_1803eb400;
      puVar8 = DAT_1803eb3f8;
      if ((ulonglong)((longlong)DAT_1803eb400 - (longlong)DAT_1803eb3f8 >> 5) < 0x40) {
        for (; local_e8 = puVar8, puVar8 != puVar1; puVar8 = puVar8 + 4) {
          sVar5 = strlen(local_d8);
          sVar4 = puVar8[2];
          _Buf1 = puVar8;
          if (0xf < (ulonglong)puVar8[3]) {
            _Buf1 = (undefined8 *)*puVar8;
          }
          if ((sVar4 == sVar5) &&
             ((sVar4 == 0 || (iVar3 = memcmp(_Buf1,local_d8,sVar4), iVar3 == 0)))) {
            _Mtx_unlock(&DAT_1803e7570);
            return;
          }
        }
        FUN_180210940();
        _Mtx_unlock(&DAT_1803e7570);
      }
      else {
        _Mtx_unlock(&DAT_1803e7570);
      }
    }
  }
  return;
}


