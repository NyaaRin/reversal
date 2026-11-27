// 0x1801f7310  FUN_1801f7310
// size=146 thunk=false
// signature: undefined FUN_1801f7310()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801f7310(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  lVar2 = (*DAT_1803fa4a0)();
  if ((lVar2 != 0) && (cVar1 = FUN_1801f72a0(lVar2), cVar1 == '\0')) {
    if (DAT_1803fe4c4 < 8) {
      DAT_1803fe4c4 = DAT_1803fe4c4 + 1;
      FUN_1801f72b0(param_1,local_58);
      FUN_180014410("[AnimGuard] pAnim -> unreadable %p (animdesc=%p, model=\'%s\'), returning NULL (stale .ani block)\n"
                    ,lVar2,param_1,local_58);
    }
    lVar2 = 0;
  }
  return lVar2;
}


