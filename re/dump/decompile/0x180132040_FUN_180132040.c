// 0x180132040  FUN_180132040
// size=271 thunk=false
// signature: undefined FUN_180132040()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180132040(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_438 [32];
  undefined8 local_418;
  int aiStack_410 [254];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_438;
  iVar3 = FUN_1801318c0(param_1,param_2,"GetAppOwnershipTicketLength");
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(*param_1 + (longlong)iVar3 * 8))(param_1);
  }
  if ((iVar3 - 0x19U < 1000) && (iVar4 = FUN_1801318c0(param_1), -1 < iVar4)) {
    memset(&local_418,0,0x400);
    iVar4 = FUN_1801318c0(param_1);
    (**(code **)(*param_1 + (longlong)iVar4 * 8))(param_1,4000,&local_418,iVar3);
    iVar4 = 0;
    do {
      if (0x18 < iVar4) {
        return 0;
      }
      uVar2 = *(undefined8 *)((longlong)&local_418 + (longlong)iVar4);
      if (((int)((ulonglong)uVar2 >> 0x20) == 0x1100001) &&
         (*(int *)((longlong)aiStack_410 + (longlong)iVar4) == 4000)) {
        return uVar2;
      }
      iVar1 = iVar4 + 0x10;
      iVar4 = iVar4 + 4;
    } while (iVar1 <= iVar3);
  }
  return 0;
}


