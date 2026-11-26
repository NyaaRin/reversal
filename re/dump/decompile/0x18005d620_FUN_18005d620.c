// 0x18005d620  FUN_18005d620
// size=306 thunk=false
// signature: undefined FUN_18005d620()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005d620(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auStack_38 [32];
  int local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    uVar4 = 0;
  }
  else {
    if ((DAT_1803fa668 != (longlong *)0x0) &&
       (lVar3 = (**(code **)(*DAT_1803fa668 + 0x240))(), lVar3 != 0)) {
      if (DAT_1803ff918 == (code *)0x0) {
        (**(code **)(*plVar2 + 0xf8))(plVar2,0);
        return 1;
      }
      local_18[0] = 0;
      lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,local_18);
      if ((lVar3 != 0) && (local_18[0] != 0)) {
        _DAT_1803ff928 = _DAT_1803ff928 + 1;
        cVar1 = (*DAT_1803ff918)(lVar3);
        pcVar5 = "refused";
        if (cVar1 != '\0') {
          pcVar5 = "sent";
        }
        FUN_180014410("[LUANET] script sent voice: %u bytes -> %s\n",local_18[0],pcVar5);
        (**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);
        return 1;
      }
      (**(code **)(*plVar2 + 0xf8))(plVar2,0);
      return 1;
    }
    (**(code **)(*plVar2 + 0xe0))(plVar2);
    uVar4 = 1;
  }
  return uVar4;
}


