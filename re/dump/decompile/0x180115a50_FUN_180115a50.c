// 0x180115a50  FUN_180115a50
// size=776 thunk=false
// signature: undefined FUN_180115a50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180115a50(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  lVar4 = FUN_1801153f0();
  if (lVar4 == 0) {
    lVar4 = DAT_1803fa630;
  }
  if (lVar4 != 0) {
    local_38 = (longlong *)0x0;
    cVar3 = FUN_1801153d0(lVar4);
    if (cVar3 != '\0') {
      AcquireSRWLockShared((PSRWLOCK)&DAT_18040a360);
      plVar2 = local_38;
      iVar5 = 0;
      if (0 < DAT_18040a270) {
        do {
          if ((longlong *)(&DAT_18040a2a0)[(longlong)iVar5 * 6] == local_38) {
            ReleaseSRWLockShared((PSRWLOCK)&DAT_18040a360);
            return;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_18040a270);
      }
      ReleaseSRWLockShared((PSRWLOCK)&DAT_18040a360);
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_18040a360);
      iVar5 = 0;
      lVar6 = (longlong)DAT_18040a270;
      if (0 < DAT_18040a270) {
        do {
          if ((longlong *)(&DAT_18040a2a0)[(longlong)iVar5 * 6] == plVar2) goto LAB_180115d75;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_18040a270);
      }
      if (DAT_18040a270 < 4) {
        if ((DAT_18040a288 != 0) && (DAT_18040a278 != 0)) {
          local_38 = &DAT_18040a2a0 + lVar6 * 6;
          (&DAT_18040a2a8)[lVar6 * 6] = plVar2[0xf];
          (&DAT_18040a2b0)[lVar6 * 6] = plVar2[0x6d];
          *(longlong *)(&DAT_18040a2b8 + lVar6 * 0x30) = plVar2[5];
          (&DAT_18040a2c0)[lVar6 * 6] = plVar2[8];
          (&DAT_18040a2c8)[lVar6 * 6] = plVar2[0xb];
          *local_38 = (longlong)plVar2;
          DAT_18040a270 = DAT_18040a270 + 1;
          VirtualProtect(plVar2 + 0xf,8,0x40,(PDWORD)&local_38);
          plVar2[0xf] = (longlong)FUN_180115600;
          VirtualProtect(plVar2 + 0xf,8,(DWORD)local_38,(PDWORD)0x0);
          VirtualProtect(plVar2 + 0x6d,8,0x40,(PDWORD)&local_38);
          plVar2[0x6d] = (longlong)FUN_1801158b0;
          VirtualProtect(plVar2 + 0x6d,8,(DWORD)local_38,(PDWORD)0x0);
          lVar1 = DAT_18040a288;
          VirtualProtect(plVar2 + 8,8,0x40,(PDWORD)&local_38);
          plVar2[8] = lVar1;
          VirtualProtect(plVar2 + 8,8,(DWORD)local_38,(PDWORD)0x0);
          lVar1 = DAT_18040a278;
          VirtualProtect(plVar2 + 0xb,8,0x40,(PDWORD)&local_38);
          plVar2[0xb] = lVar1;
          VirtualProtect(plVar2 + 0xb,8,(DWORD)local_38,(PDWORD)0x0);
          local_48 = (&DAT_18040a2b0)[lVar6 * 6];
          local_50 = (&DAT_18040a2a8)[lVar6 * 6];
          local_58 = (&DAT_18040a2c8)[lVar6 * 6];
          local_60 = (&DAT_18040a2c0)[lVar6 * 6];
          local_68 = *(undefined8 *)(&DAT_18040a2b8 + lVar6 * 0x30);
          FUN_180014410("[SP] ctx hooks #%d installed (ctx=%p vt=%p o5=%p o8=%p o11=%p o15=%p o109=%p)\n"
                        ,DAT_18040a270,lVar4,plVar2);
        }
LAB_180115d75:
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18040a360);
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18040a360);
        DAT_1803fd0b8 = DAT_1803fd0b8 + 1;
        if (DAT_1803fd0b8 < 4) {
          FUN_180014410("[SP] context hook registry full; ctx=%p vt=%p\n",lVar4,plVar2);
        }
      }
    }
  }
  return;
}


