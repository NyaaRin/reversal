// 0x180155ec0  FUN_180155ec0
// size=1111 thunk=false
// signature: undefined FUN_180155ec0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180155ec0(undefined8 param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *_Src;
  undefined1 auStack_2a8 [32];
  ulonglong local_288 [2];
  undefined1 local_278 [608];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_2a8;
  if (DAT_180409d50 == (code *)0x0) {
    return 0;
  }
  iVar3 = (*DAT_180409d50)();
  if (iVar3 < 1) {
    return iVar3;
  }
  if (DAT_180409f60 == '\0') {
    return iVar3;
  }
  if (DAT_180423571 != '\0') {
    return iVar3;
  }
  cVar2 = FUN_180155d10();
  if (cVar2 == '\0') {
    return iVar3;
  }
  uVar4 = (*DAT_180409e50)(param_1);
  iVar5 = (*DAT_180409f10)(param_1,uVar4);
  if (iVar5 != 5) {
    return iVar3;
  }
  (*DAT_180409f30)(param_1,"short_src");
  (*DAT_180409f38)(param_1,uVar4);
  local_278[0] = 0;
  iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
  if (iVar5 == 4) {
    local_288[0] = 0;
    _Src = (void *)(*DAT_180409e58)(param_1,0xffffffff,local_288);
    if (_Src == (void *)0x0) goto LAB_180155fb9;
  }
  else {
LAB_180155fb9:
    (*DAT_180409f20)(param_1,0xfffffffe);
    (*DAT_180409f30)(param_1,"source");
    (*DAT_180409f38)(param_1,uVar4);
    local_278[0] = 0;
    iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
    if (iVar5 != 4) goto LAB_180156049;
    local_288[0] = 0;
    _Src = (void *)(*DAT_180409e58)(param_1,0xffffffff,local_288);
    if (_Src == (void *)0x0) goto LAB_180156049;
  }
  if (599 < local_288[0]) {
    local_288[0] = 599;
  }
  uVar1 = local_288[0];
  memcpy(local_278,_Src,local_288[0]);
  local_278[uVar1] = 0;
LAB_180156049:
  (*DAT_180409f20)(param_1,0xfffffffe);
  cVar2 = FUN_180155db0(local_278);
  if (cVar2 != '\0') {
    (*DAT_180409f30)(param_1,"source");
    (*DAT_180409f38)(param_1,uVar4);
    iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
    (*DAT_180409f20)(param_1,0xfffffffe);
    if (0 < iVar5) {
      (*DAT_180409f30)(param_1,"source");
      (*DAT_180409f30)(param_1,&DAT_18035ffe4);
      (*DAT_180409e60)(param_1,uVar4);
    }
    (*DAT_180409f30)(param_1,"short_src");
    (*DAT_180409f38)(param_1,uVar4);
    iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
    (*DAT_180409f20)(param_1,0xfffffffe);
    if (0 < iVar5) {
      (*DAT_180409f30)(param_1,"short_src");
      (*DAT_180409f30)(param_1,&DAT_18035ffec);
      (*DAT_180409e60)(param_1,uVar4);
    }
    (*DAT_180409f30)(param_1,&DAT_18035fff0);
    (*DAT_180409f38)(param_1,uVar4);
    iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
    (*DAT_180409f20)(param_1,0xfffffffe);
    if (0 < iVar5) {
      (*DAT_180409f30)(param_1,&DAT_18035fff0);
      (*DAT_180409f30)(param_1,&DAT_18033e5e8);
      (*DAT_180409e60)(param_1,uVar4);
    }
    (*DAT_180409f30)(param_1,"linedefined");
    (*DAT_180409f38)(param_1,uVar4);
    iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
    (*DAT_180409f20)(param_1,0xfffffffe);
    if (0 < iVar5) {
      (*DAT_180409f30)(param_1,"linedefined");
      (*DAT_180409d08)(param_1,DAT_1803813b0);
      (*DAT_180409e60)(param_1,uVar4);
    }
    (*DAT_180409f30)(param_1,"lastlinedefined");
    (*DAT_180409f38)(param_1,uVar4);
    iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
    (*DAT_180409f20)(param_1,0xfffffffe);
    if (0 < iVar5) {
      (*DAT_180409f30)(param_1,"lastlinedefined");
      (*DAT_180409d08)(param_1,DAT_1803813b0);
      (*DAT_180409e60)(param_1,uVar4);
    }
    (*DAT_180409f30)(param_1,"currentline");
    (*DAT_180409f38)(param_1,uVar4);
    iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
    (*DAT_180409f20)(param_1,0xfffffffe);
    if (0 < iVar5) {
      (*DAT_180409f30)(param_1,"currentline");
      (*DAT_180409d08)(param_1,DAT_1803813b0);
      (*DAT_180409e60)(param_1,uVar4);
    }
    LOCK();
    DAT_180409f28 = DAT_180409f28 + 1;
    UNLOCK();
  }
  return iVar3;
}


