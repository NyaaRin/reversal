// 0x180156320  FUN_180156320
// size=790 thunk=false
// signature: undefined FUN_180156320()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180156320(undefined8 param_1)

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
  iVar3 = 0;
  if ((((DAT_180409da0 != (code *)0x0) && (iVar3 = (*DAT_180409da0)(), 0 < iVar3)) &&
      (DAT_180409f60 != '\0')) && (cVar2 = FUN_180155d10(), cVar2 != '\0')) {
    uVar4 = (*DAT_180409e50)(param_1);
    iVar5 = (*DAT_180409f10)(param_1,uVar4);
    if (iVar5 == 5) {
      (*DAT_180409f30)(param_1,"source");
      (*DAT_180409f38)(param_1,uVar4);
      local_278[0] = 0;
      iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
      if (iVar5 == 4) {
        local_288[0] = 0;
        _Src = (void *)(*DAT_180409e58)(param_1,0xffffffff,local_288);
        if (_Src != (void *)0x0) {
          if (599 < local_288[0]) {
            local_288[0] = 599;
          }
          uVar1 = local_288[0];
          memcpy(local_278,_Src,local_288[0]);
          local_278[uVar1] = 0;
        }
      }
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
        (*DAT_180409f30)(param_1,&DAT_180360024);
        (*DAT_180409f38)(param_1,uVar4);
        iVar5 = (*DAT_180409f10)(param_1,0xffffffff);
        (*DAT_180409f20)(param_1,0xfffffffe);
        if (0 < iVar5) {
          (*DAT_180409f30)(param_1,&DAT_180360024);
          (*DAT_180409f30)(param_1,&DAT_18035ffec);
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
        LOCK();
        DAT_180409f28 = DAT_180409f28 + 1;
        UNLOCK();
      }
    }
  }
  return iVar3;
}


