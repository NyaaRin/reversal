// 0x18011e680  FUN_18011e680
// size=363 thunk=false
// signature: undefined FUN_18011e680()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011e680(ulonglong param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  char *local_b8;
  char local_98 [128];
  ulonglong local_18;
  
  DVar2 = DAT_1803ff984;
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  if ((DAT_1803ff954 != '\0') &&
     ((DAT_1803ff984 == 0 || (DVar3 = GetCurrentThreadId(), DVar2 == DVar3)))) {
    local_b8 = (char *)CONCAT44(local_b8._4_4_,(int)param_1);
    plVar5 = (longlong *)
             (((((param_1 & 0xffffffff) >> 0x10 & 0xff ^
                (param_1 >> 8 & 0xff ^ (param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                0x100000001b3) * 0x100000001b3 ^ (param_1 & 0xffffffff) >> 0x18) * 0x100000001b3 &
              DAT_18056e770) * 0x10 + DAT_18056e758);
    lVar4 = plVar5[1];
    if (lVar4 == DAT_18056e748) {
LAB_18011e754:
      lVar4 = 0;
    }
    else {
      iVar1 = *(int *)(lVar4 + 0x10);
      while ((int)param_1 != iVar1) {
        if (lVar4 == *plVar5) goto LAB_18011e754;
        lVar4 = *(longlong *)(lVar4 + 8);
        iVar1 = *(int *)(lVar4 + 0x10);
      }
    }
    lVar6 = DAT_18056e748;
    if (lVar4 != 0) {
      lVar6 = lVar4;
    }
    if (lVar6 == DAT_18056e748) {
      if (DAT_1804015d8 == (longlong *)0x0) {
        return;
      }
      if (*DAT_1804015d8 == 0) {
        return;
      }
      FUN_18011e150(*DAT_1804015d8,param_1 & 0xffffffff,local_98);
      if (local_98[0] == '\0') {
        return;
      }
      plVar5 = (longlong *)FUN_180204a10();
      lVar6 = *plVar5;
    }
    local_b8 = (char *)(lVar6 + 0x18);
    if (0xf < *(ulonglong *)(lVar6 + 0x30)) {
      local_b8 = *(char **)local_b8;
    }
    if ((local_b8 != (char *)0x0) && (*local_b8 != '\0')) {
      FUN_1801ff5b0();
    }
  }
  return;
}


