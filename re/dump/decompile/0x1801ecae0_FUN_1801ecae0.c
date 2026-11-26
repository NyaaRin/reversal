// 0x1801ecae0  FUN_1801ecae0
// size=727 thunk=false
// signature: undefined FUN_1801ecae0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ecae0(void)

{
  longlong lVar1;
  char cVar2;
  undefined1 local_68 [32];
  longlong local_48 [4];
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)local_68;
  if ((DAT_1803f9278 == (longlong *)0x0) ||
     (cVar2 = FUN_1801eca80(DAT_1803f9278,0x23), cVar2 == '\0')) {
    FUN_180014410("[VMT-FAIL] CHLClient slot %d is not code; Pre/PostFrameStageNotify disabled\n",
                  0x23);
  }
  else {
    lVar1 = *DAT_1803f9278;
    local_48[0] = 0;
    local_48[1] = 0;
    local_18 = local_48 + 2;
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[2] = FUN_1802d8350(0x30);
    *(longlong *)local_48[2] = local_48[2];
    *(longlong *)(local_48[2] + 8) = local_48[2];
    *(longlong *)(local_48[2] + 0x10) = local_48[2];
    *(undefined2 *)(local_48[2] + 0x18) = 0x101;
    local_48[0] = lVar1;
    FUN_1801ecdc0(&DAT_1805b88b8,local_48);
    local_28 = local_48 + 2;
    FUN_1802095f0(local_48 + 2);
    local_28 = (longlong *)CONCAT44(local_28._4_4_,0x23);
    local_20 = *(undefined8 *)(DAT_1805b88b8 + 0x118);
    FUN_180208e00(&DAT_1805b88c8,local_48,&local_28);
    DAT_1803ff900 = *(undefined8 *)(local_48[0] + 0x28);
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1805b88b8 + 0x118),8,0x40,(PDWORD)&local_18);
    *(code **)(DAT_1805b88b8 + 0x118) = FUN_1801ec910;
    VirtualProtect((LPVOID)(DAT_1805b88b8 + 0x118),8,(DWORD)local_18,(PDWORD)0x0);
    FUN_180014410("[VMT] CHLClient: FrameStageNotify(%d)=%p\n",0x23,DAT_1803ff900);
  }
  if ((DAT_1803f9290 != (longlong *)0x0) &&
     (cVar2 = FUN_1801eca80(DAT_1803f9290,0x11), cVar2 != '\0')) {
    lVar1 = *DAT_1803f9290;
    local_48[0] = 0;
    local_48[1] = 0;
    local_28 = local_48 + 2;
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[2] = FUN_1802d8350(0x30);
    *(longlong *)local_48[2] = local_48[2];
    *(longlong *)(local_48[2] + 8) = local_48[2];
    *(longlong *)(local_48[2] + 0x10) = local_48[2];
    *(undefined2 *)(local_48[2] + 0x18) = 0x101;
    local_48[0] = lVar1;
    FUN_1801ecdc0(&DAT_1805c7ba8,local_48);
    local_18 = local_48 + 2;
    FUN_1802095f0(local_48 + 2);
    local_28 = (longlong *)CONCAT44(local_28._4_4_,0x11);
    local_20 = *(undefined8 *)(DAT_1805c7ba8 + 0x88);
    FUN_180208e00(&DAT_1805c7bb8,local_48,&local_28);
    DAT_1803ff8f8 = *(undefined8 *)(local_48[0] + 0x28);
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1805c7ba8 + 0x88),8,0x40,(PDWORD)&local_18);
    *(code **)(DAT_1805c7ba8 + 0x88) = FUN_1801ec9d0;
    VirtualProtect((LPVOID)(DAT_1805c7ba8 + 0x88),8,(DWORD)local_18,(PDWORD)0x0);
    FUN_180014410("[VMT] CPrediction: RunCommand(%d)=%p\n",0x11,DAT_1803ff8f8);
    return;
  }
  FUN_180014410("[VMT-FAIL] CPrediction slot %d is not code; Pre/PostRunCommand disabled\n",0x11);
  return;
}


