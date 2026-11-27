// 0x180118b80  FUN_180118b80
// size=711 thunk=false
// signature: undefined FUN_180118b80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180118b80(void)

{
  undefined1 uVar1;
  char cVar2;
  SHORT SVar3;
  longlong *plVar4;
  char *pcVar5;
  HWND pHVar6;
  undefined6 extraout_var;
  ulonglong uVar7;
  bool bVar8;
  float fVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  local_38 = 0x93fd561a96ab0c67;
  local_30 = 0x6c96c33ad11a014c;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_58,&local_38);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_48,&local_30);
  pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
  if (*pcVar5 == '\0') {
LAB_180118cbc:
    if (((DAT_1803fa668 == (longlong *)0x0) ||
        (cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar2 == '\0')) ||
       (cVar2 = (**(code **)(*DAT_1803fa668 + 0x2a8))(), cVar2 == '\0')) goto LAB_180118d44;
    bVar8 = DAT_1804253f5 == '\0';
    DAT_1804253f5 = 1;
    if (bVar8) {
      if (DAT_1803fa608 == (HWND)0x0) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = (float)DAT_1803fa608->unused;
        if ((0.0 < fVar9) && (fVar9 - _DAT_1803e90d0 < DAT_180380db8)) goto LAB_180118d46;
      }
      DAT_1804236ac = DAT_1804236ac + 1;
      PTR_s_Screen_capture_1803e90c8 = s_Engine_screenshot_180351310;
      _DAT_1803e90d0 = fVar9;
    }
  }
  else {
    if (DAT_1803fa668 != (longlong *)0x0) {
      cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))();
      if (cVar2 != '\0') {
        cVar2 = FUN_180118a90();
        if (cVar2 == '\0') {
          DAT_1803ff0d0 = '\0';
        }
        else {
          cVar2 = FUN_1801145d0();
          if ((cVar2 == '\0') &&
             (cVar2 = FUN_180071920(&DAT_1803e6ed8,"RSC passive probe"), cVar2 != '\0')) {
            if ((DAT_1803fa608 != (HWND)0x0) &&
               ((0.0 < (float)DAT_1803fa608->unused &&
                (fVar9 = (float)DAT_1803fa608->unused + DAT_180380b20, DAT_18042363c <= fVar9)))) {
              DAT_18042363c = fVar9;
            }
            LOCK();
            DAT_1804236a5 = 1;
            UNLOCK();
          }
          if (DAT_1803ff0d0 == '\0') {
            DAT_180425880 = DAT_180425880 + 1;
            DAT_1803ff0d0 = '\x01';
            FUN_180014410("[AntiSS] RSC passive upvalue signal #%d\n");
          }
        }
      }
      goto LAB_180118cbc;
    }
LAB_180118d44:
    DAT_1804253f5 = 0;
  }
LAB_180118d46:
  pHVar6 = (HWND)FUN_1801145d0();
  if ((char)pHVar6 == '\0') {
    local_30 = 0x93fd561a96ab0c67;
    local_38 = 0x6c96c33ad11a014c;
    plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_30);
    plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_58,&local_38);
    pHVar6 = (HWND)FUN_1801fcfc0(*plVar4 + 0x28);
    if ((((char)pHVar6->unused != '\0') && (DAT_1803fa668 != (longlong *)0x0)) &&
       (pHVar6 = (HWND)(**(code **)(*DAT_1803fa668 + 0xd0))(), (char)pHVar6 != '\0')) {
      cVar2 = (**(code **)(*DAT_1803fa668 + 0x2a8))();
      pHVar6 = GetForegroundWindow();
      if (pHVar6 == DAT_1803fa618) {
        SVar3 = GetAsyncKeyState(0x7b);
        pHVar6 = (HWND)CONCAT62(extraout_var,SVar3);
        if (-1 < SVar3) goto LAB_180118def;
        bVar8 = true;
      }
      else {
LAB_180118def:
        bVar8 = false;
      }
      if (((cVar2 != '\0') || (bVar8)) ||
         ((pHVar6 = DAT_1803fa608, DAT_1803fa608 != (HWND)0x0 &&
          ((0.0 < (float)DAT_1803fa608->unused && ((float)DAT_1803fa608->unused < DAT_18042363c)))))
         ) {
        uVar7 = CONCAT71((int7)((ulonglong)pHVar6 >> 8),1);
        goto LAB_180118e21;
      }
    }
  }
  uVar7 = (ulonglong)pHVar6 & 0xffffffffffffff00;
LAB_180118e21:
  uVar1 = DAT_1804236a5;
  LOCK();
  DAT_1804236a5 = (char)uVar7;
  UNLOCK();
  return CONCAT71((int7)(uVar7 >> 8),uVar1);
}


