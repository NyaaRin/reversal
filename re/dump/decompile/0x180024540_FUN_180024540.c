// 0x180024540  FUN_180024540
// size=170 thunk=false
// signature: undefined FUN_180024540()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180024540(void)

{
  char cVar1;
  BOOL BVar2;
  HWND pHVar3;
  undefined1 auStack_48 [32];
  tagCURSORINFO local_28;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  if ((DAT_1803fa668 == (longlong *)0x0) ||
     (cVar1 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar1 == '\0')) {
    return 0;
  }
  if (DAT_1803fa618 != (HWND)0x0) {
    pHVar3 = GetForegroundWindow();
    if (pHVar3 != DAT_1803fa618) {
      return 0;
    }
    if (DAT_1803fa618 != (HWND)0x0) {
      local_28.cbSize = 0x18;
      local_28._4_8_ = 0;
      local_28._12_8_ = 0;
      local_28.ptScreenPos.y = 0;
      BVar2 = GetCursorInfo(&local_28);
      if (((BVar2 != 0) && ((local_28._4_8_ & 1) != 0)) && (DAT_1803fa545 == '\0')) {
        return 0;
      }
    }
  }
  return 1;
}


