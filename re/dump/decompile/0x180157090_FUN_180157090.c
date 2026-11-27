// 0x180157090  FUN_180157090
// size=539 thunk=false
// signature: undefined FUN_180157090()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180157090(undefined8 param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  void *_Src;
  undefined8 uVar5;
  undefined1 auStack_528 [32];
  undefined *local_508;
  ulonglong local_500;
  undefined1 local_4f8 [608];
  undefined1 local_298 [640];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_528;
  if (DAT_180409d90 == (code *)0x0) {
    return;
  }
  if (((DAT_180409f60 == '\0') || (DAT_180423571 != '\0')) ||
     (cVar3 = FUN_180155560(), cVar3 == '\0')) {
    (*DAT_180409d90)(param_1);
    return;
  }
  local_4f8[0] = 0;
  iVar4 = (*DAT_180409f10)(param_1,1);
  if (iVar4 != 4) goto LAB_180157263;
  local_500 = 0;
  _Src = (void *)(*DAT_180409e58)(param_1,1,&local_500);
  if (_Src == (void *)0x0) goto LAB_180157263;
  if (599 < local_500) {
    local_500 = 599;
  }
  uVar2 = local_500;
  memcpy(local_4f8,_Src,local_500);
  local_4f8[uVar2] = 0;
  uVar5 = FUN_180154f20(local_4f8,&DAT_18033e5ea,local_298,0x280);
  local_508 = &DAT_1803e8780;
  iVar4 = _Mtx_lock(&DAT_1803e8780);
  if (iVar4 != 0) {
LAB_18015726e:
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e87cc == 0x7fffffff) {
LAB_18015721c:
    DAT_1803e87cc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  else {
    if (DAT_1803e9df0 == DAT_1803e9df8) {
      _Mtx_unlock(&DAT_1803e8780);
      (*DAT_180409d90)(param_1);
      return;
    }
    iVar4 = FUN_180155310(local_298,uVar5);
    _Mtx_unlock(&DAT_1803e8780);
    if (iVar4 != 1) goto LAB_180157263;
    LOCK();
    DAT_180409d30 = DAT_180409d30 + 1;
    UNLOCK();
    local_508 = &DAT_1803e8780;
    iVar4 = _Mtx_lock(&DAT_1803e8780);
    if (iVar4 != 0) goto LAB_18015726e;
    if (DAT_1803e87cc == 0x7fffffff) goto LAB_18015721c;
  }
  FUN_180012ac0(&DAT_180409e70,0xa0,&DAT_1803431ac,local_4f8);
  _Mtx_unlock(&DAT_1803e8780);
  FUN_180155480(param_1,0);
LAB_180157263:
  (*DAT_180409d90)(param_1);
  return;
}


