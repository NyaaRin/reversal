// 0x180155db0  FUN_180155db0
// size=272 thunk=false
// signature: undefined FUN_180155db0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180155db0(char *param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_2c8 [32];
  undefined *local_2a8;
  undefined1 local_298 [640];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_2c8;
  uVar5 = local_18;
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    uVar5 = 0;
    if (((cVar1 != '\0') &&
        (((cVar1 != '=' && (cVar1 != '@')) || (param_1 = param_1 + 1, *param_1 != '\0')))) &&
       (*param_1 != '[')) {
      lVar4 = FUN_180154f20(param_1,&DAT_18033e5ea,local_298,0x280);
      uVar5 = 0;
      if (lVar4 != 0) {
        local_2a8 = &DAT_1803e8780;
        iVar3 = _Mtx_lock(&DAT_1803e8780);
        if (iVar3 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
        if (DAT_1803e87cc == 0x7fffffff) {
          DAT_1803e87cc = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        if (DAT_1803e9df0 == DAT_1803e9df8) {
          uVar5 = _Mtx_unlock(&DAT_1803e8780);
        }
        else {
          iVar3 = FUN_180155310(local_298,lVar4);
          uVar5 = _Mtx_unlock(&DAT_1803e8780);
          if (iVar3 == 1) {
            return 1;
          }
        }
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}


