// 0x180118fa0  FUN_180118fa0
// size=1140 thunk=false
// signature: undefined FUN_180118fa0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180118fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  char *pcVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da_00;
  float fVar13;
  undefined8 unaff_retaddr;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  if (DAT_1804235a0 == (code *)0x0) {
    return 0x8876086c;
  }
  if (DAT_1803ff270 == '\0') {
    uVar9 = (*DAT_1804235a0)();
    return uVar9;
  }
  cVar5 = FUN_180118760();
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if ((*(char *)(lVar2 + 0xec9) == '\0') && (cVar6 = FUN_1801ebc10(unaff_retaddr), cVar6 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar7 = FUN_1801eb5c0();
  if (((cVar5 != '\0') && (cVar6 = FUN_1801eb640(), cVar6 != '\0')) && (bVar3)) {
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(char *)(lVar2 + 0xec8) == '\0') {
      local_58 = 0;
      cVar6 = FUN_1801eba30(&local_58,uVar7);
      uVar12 = extraout_XMM0_Da;
      if (cVar6 != '\0') goto LAB_1801190a9;
    }
  }
  if (((DAT_1803fa668 == (longlong *)0x0) ||
      (cVar6 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar6 == '\0')) ||
     (cVar6 = (**(code **)(*DAT_1803fa668 + 0x2a8))(), cVar6 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (cVar5 == '\0') {
LAB_1801191b8:
    bVar4 = false;
    if (cVar5 != '\0') goto LAB_1801191c4;
  }
  else {
    local_58 = 0x93fd561a96ab0c67;
    local_50 = 0xb900ad038caed4bd;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_58);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_68,&local_50);
    pcVar11 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
    if (((*pcVar11 == '\0') || (cVar6 = FUN_180114710(), cVar6 == '\0')) ||
       ((DAT_1804236a5 != '\0' || (cVar6 = FUN_1801eb5c0(), cVar6 == '\0')))) goto LAB_1801191b8;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if ((*(char *)(lVar2 + 0xec8) != '\0') || (cVar6 = FUN_180116900(lVar2 + 0xfe8), cVar6 == '\0'))
    goto LAB_1801191b8;
    piVar1 = (int *)(lVar2 + 0xff0);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined8 *)(lVar2 + 0x1000) = 0;
    }
    bVar4 = true;
LAB_1801191c4:
    local_50 = 0x93fd561a96ab0c67;
    local_58 = 0xb900ad038caed4bd;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_68,&local_50);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_78,&local_58);
    pcVar11 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
    if ((((*pcVar11 != '\0') && (cVar6 = FUN_180114710(), cVar6 != '\0')) && (DAT_1804236a5 == '\0')
        ) && (cVar6 = FUN_1801eb5c0(), cVar6 != '\0')) {
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if ((*(char *)(lVar2 + 0xec8) == '\0') && ((bVar4 || (bVar3)))) {
        local_58 = 0;
        cVar6 = FUN_1801eba30(&local_58,1);
        uVar12 = extraout_XMM0_Da_00;
        if (cVar6 != '\0') {
LAB_1801190a9:
          uVar8 = FUN_180118f60(uVar12,param_1,local_58,param_3);
          FUN_1801ebb90();
          return (ulonglong)uVar8;
        }
      }
    }
  }
  cVar6 = FUN_1801145d0();
  if (((cVar6 == '\0') || (cVar6 = FUN_180114710(), cVar6 == '\0')) ||
     (cVar6 = FUN_1801eb5c0(), cVar6 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  local_50 = 0x93fd561a96ab0c67;
  local_58 = 0x6c96c33ad11a014c;
  plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_68,&local_50);
  plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_78,&local_58);
  pcVar11 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
  if (((((*pcVar11 == '\0') || (bVar3)) || (DAT_1803fa668 == (longlong *)0x0)) ||
      ((cVar6 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar6 == '\0' || (cVar5 == '\0')))) ||
     (cVar5 = FUN_180071920(&DAT_1803e79c8,"Backbuffer readback"), cVar5 == '\0'))
  goto LAB_1801193d4;
  if (DAT_1803fa608 == (float *)0x0) {
    fVar13 = 0.0;
LAB_180119375:
    DAT_1804236ac = DAT_1804236ac + 1;
    PTR_s_Screen_capture_1803e90c8 = s_Backbuffer_readback_180351328;
    _DAT_1803e90d0 = fVar13;
  }
  else {
    fVar13 = *DAT_1803fa608;
    if ((fVar13 <= 0.0) || (DAT_180380db8 <= fVar13 - _DAT_1803e90d0)) goto LAB_180119375;
  }
  if (((DAT_1803fa608 != (float *)0x0) && (0.0 < *DAT_1803fa608)) &&
     (fVar13 = *DAT_1803fa608 + DAT_180380a88, DAT_18042363c <= fVar13)) {
    DAT_18042363c = fVar13;
  }
  DAT_1804260b8 = DAT_1804260b8 + 1;
  if (DAT_1804260b8 < 0xb) {
    FUN_180014410("[AntiSS] GRTD: clean tail\n");
  }
LAB_1801193d4:
  uVar9 = (*DAT_1804235a0)(param_1,param_2,param_3);
  return uVar9;
}


