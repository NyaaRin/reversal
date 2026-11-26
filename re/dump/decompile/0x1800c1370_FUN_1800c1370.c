// 0x1800c1370  FUN_1800c1370
// size=258 thunk=false
// signature: undefined FUN_1800c1370()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1800c1370(void *param_1)

{
  BOOL BVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  void **local_28;
  void *local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  if ((param_1 != (void *)0x0) &&
     (local_20 = param_1, BVar1 = IsBadReadPtr(param_1,0x150), BVar1 == 0)) {
    local_28 = &local_20;
    if ((-1 < DAT_1803e8704) && (lVar2 = FUN_1800c1480(&local_28), lVar2 != 0)) {
      return lVar2;
    }
    lVar2 = FUN_1800c1480(&local_28,0x140);
    if (lVar2 != 0) {
      if (DAT_1803e8704 == 0x140) {
        return lVar2;
      }
      DAT_1803e8704 = 0x140;
      FUN_180014410("[ANIMRES] owner back-pointer +0x%X confirmed\n",0x140);
      return lVar2;
    }
    iVar3 = 0x30;
    do {
      lVar2 = FUN_1800c1480(&local_28,iVar3);
      if (lVar2 != 0) {
        DAT_1803e8704 = iVar3;
        FUN_180014410("[ANIMRES] owner back-pointer +0x%X confirmed (scan)\n",iVar3);
        return lVar2;
      }
      iVar3 = iVar3 + 8;
    } while (iVar3 < 0x149);
  }
  return 0;
}


