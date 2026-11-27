// 0x180183140  FUN_180183140
// size=154 thunk=false
// signature: undefined FUN_180183140()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180183140(undefined4 param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_188 [32];
  undefined1 local_168 [168];
  uint local_c0;
  char local_3c;
  ulonglong local_18;
  
  plVar1 = DAT_1803fa668;
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  if (DAT_1803fa668 != (longlong *)0x0) {
    memset(local_168,0,0x144);
    cVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1,local_168);
    if (((cVar2 != '\0') && (local_3c == '\0')) && (local_c0 != 0)) {
      return (ulonglong)local_c0 + 0x110000100000000;
    }
  }
  return 0;
}


