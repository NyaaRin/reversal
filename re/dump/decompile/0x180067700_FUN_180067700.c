// 0x180067700  FUN_180067700
// size=261 thunk=false
// signature: undefined FUN_180067700()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180067700(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_298 [32];
  longlong local_278;
  longlong *plStack_270;
  undefined1 local_268 [44];
  short local_23c;
  short local_23a;
  short local_238;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_298;
  lVar3 = *param_1;
  do {
    iVar5 = FUN_1802d78e0(*(undefined8 *)(lVar3 + 0x40),local_268);
    if (iVar5 == 0x12) {
      local_278 = *param_1;
      *param_1 = 0;
      plVar4 = (longlong *)param_1[1];
      param_1[1] = 0;
      if (plVar4 == (longlong *)0x0) {
        return param_1;
      }
      LOCK();
      plVar1 = plVar4 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 != 1) {
        return param_1;
      }
      plStack_270 = plVar4;
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 != 1) {
        return param_1;
      }
      (**(code **)(*plVar4 + 8))(plVar4);
      return param_1;
    }
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180066f30(extraout_XMM0_Da,iVar5);
    }
  } while ((local_23c == 0x2e) && ((local_23a == 0 || ((local_23a == 0x2e && (local_238 == 0))))));
  FUN_180067450(lVar3,local_268);
  return param_1;
}


