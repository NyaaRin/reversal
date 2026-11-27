// 0x1800e43c0  FUN_1800e43c0
// size=442 thunk=false
// signature: undefined FUN_1800e43c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800e43c0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  TypeDescriptor *pTVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  char *pcVar13;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    return 0;
  }
  uVar10 = 0x14650fb0739d0383;
  pcVar13 = "freecam";
  uVar6 = 0x14650fb0739d0383;
  do {
    if (*pcVar13 == 0) break;
    uVar6 = (uVar6 ^ (byte)*pcVar13) * 0x100000001b3;
    pcVar13 = pcVar13 + 1;
  } while ((byte *)pcVar13 != (byte *)0x0);
  plVar4 = (longlong *)DAT_1803fadf0[1];
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  plVar5 = DAT_1803fadf0;
  while (cVar1 == '\0') {
    plVar8 = plVar4;
    if ((ulonglong)plVar4[4] < uVar6) {
      plVar4 = plVar4 + 2;
      plVar8 = plVar5;
    }
    plVar4 = (longlong *)*plVar4;
    plVar5 = plVar8;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (uVar6 < (ulonglong)plVar5[4])) {
    plVar5 = DAT_1803fadf0;
  }
  if ((plVar5 == DAT_1803fadf0) || (plVar5 + 5 == (longlong *)0x0)) {
    lVar12 = *plVar3;
  }
  else {
    pcVar13 = "enabled";
    do {
      if (*pcVar13 == 0) break;
      uVar10 = (uVar10 ^ (byte)*pcVar13) * 0x100000001b3;
      pcVar13 = pcVar13 + 1;
    } while ((byte *)pcVar13 != (byte *)0x0);
    plVar4 = (longlong *)plVar5[5];
    plVar5 = (longlong *)plVar4[1];
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
    plVar8 = plVar4;
    while (cVar1 == '\0') {
      plVar7 = plVar5;
      if ((ulonglong)plVar5[4] < uVar10) {
        plVar5 = plVar5 + 2;
        plVar7 = plVar8;
      }
      plVar5 = (longlong *)*plVar5;
      plVar8 = plVar7;
      cVar1 = *(char *)((longlong)plVar5 + 0x19);
    }
    if ((*(char *)((longlong)plVar8 + 0x19) != '\0') || (uVar10 < (ulonglong)plVar8[4])) {
      plVar8 = plVar4;
    }
    lVar12 = *plVar3;
    plVar5 = (longlong *)0x0;
    if (plVar8 != plVar4) {
      plVar5 = plVar8 + 5;
    }
    if (plVar5 != (longlong *)0x0) {
      pTVar9 = &.X::RTTI_Type_Descriptor;
      if ((TypeDescriptor *)(plVar5[9] & 0xfffffffffffffffcU) != (TypeDescriptor *)0x0) {
        pTVar9 = (TypeDescriptor *)(plVar5[9] & 0xfffffffffffffffcU);
      }
      iVar2 = __std_type_info_compare(&pTVar9->spare,0x1803eddb8);
      if (iVar2 == 0) {
        if (((plVar5 + 2 == (longlong *)0x0) || ((plVar5[9] & 0xfffffffffffffffcU) == 0)) ||
           (iVar2 = __std_type_info_compare((plVar5[9] & 0xfffffffffffffffcU) + 8,0x1803eddb8),
           iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_180014070();
        }
        if ((char)plVar5[2] != '\0') {
          uVar11 = 1;
          goto LAB_1800e4546;
        }
      }
    }
  }
  uVar11 = 0;
LAB_1800e4546:
  (**(code **)(lVar12 + 0xf8))(plVar3,uVar11);
  return 1;
}


