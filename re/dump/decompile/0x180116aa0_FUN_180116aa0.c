// 0x180116aa0  FUN_180116aa0
// size=1218 thunk=false
// signature: undefined FUN_180116aa0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180116aa0(undefined8 param_1)

{
  int *piVar1;
  bool bVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong lVar8;
  ULONGLONG UVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_a8 [32];
  char local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  ulonglong local_58 [6];
  
  local_58[2] = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  if (DAT_1803fa608 == (float *)0x0) {
    fVar16 = 0.0;
LAB_180116b05:
    DAT_1804236ac = DAT_1804236ac + 1;
    PTR_s_Screen_capture_1803e90c8 = s_render_Capture_request_180351008;
    _DAT_1803e90d0 = fVar16;
  }
  else {
    fVar16 = *DAT_1803fa608;
    if ((fVar16 <= 0.0) || (DAT_180380db8 <= fVar16 - _DAT_1803e90d0)) goto LAB_180116b05;
  }
  local_58[0] = 0x93fd561a96ab0c67;
  local_58[1] = 0xb900ad038caed4bd;
  local_60 = param_1;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_80,local_58);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_70,local_58 + 1);
  pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
  if (*pcVar7 != '\0') {
    local_58[1] = 0x93fd561a96ab0c67;
    local_58[0] = 0xd5eedd6096f28a0d;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,local_58 + 1);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_80,local_58);
    pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
    if (((*pcVar7 != '\0') && (DAT_18040a378 != 0)) && (DAT_18040a389 != '\0')) {
      local_88 = '\x01';
      goto LAB_180116bdc;
    }
  }
  local_88 = '\0';
LAB_180116bdc:
  fVar3 = DAT_1803e8848;
  local_58[0] = local_58[0] & 0xffffffff00000000;
  fVar16 = 0.0;
  if (DAT_1803fa608 != (float *)0x0) {
    fVar16 = DAT_1803fa608[1];
  }
  if ((local_88 == '\0') && (DAT_1803e8848 != fVar16)) {
    lVar8 = DAT_1803fa630;
    if ((DAT_1803fa630 == 0) && (DAT_1803fa640 != (longlong *)0x0)) {
      lVar8 = (**(code **)(*DAT_1803fa640 + 0x330))();
    }
    cVar4 = FUN_180116970(lVar8);
    if ((cVar4 != '\0') && (cVar4 = FUN_180116200(param_1), cVar4 != '\0')) {
      return local_58[0] & 0xffffffff;
    }
  }
  if (DAT_18040a254 < 2) {
    DAT_18040a254 = 2;
  }
  local_58[1] = 0x93fd561a96ab0c67;
  local_58[0] = 0xb900ad038caed4bd;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,local_58 + 1);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_80,local_58);
  pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
  if (((*pcVar7 == '\0') || (cVar4 = FUN_180114710(), cVar4 == '\0')) ||
     (cVar4 = FUN_1801eb5c0(), cVar4 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  local_58[1] = 0x93fd561a96ab0c67;
  local_58[0] = 0x6c96c33ad11a014c;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,local_58 + 1);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_80,local_58);
  pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
  if ((((*pcVar7 != '\0') && ((cVar4 = FUN_1801145d0(), cVar4 == '\0' || (!bVar2)))) &&
      (fVar3 != fVar16)) && (cVar4 = FUN_180071920(&DAT_1803e9830,"render.Capture"), cVar4 != '\0'))
  {
    if (((DAT_1803fa608 != (float *)0x0) && (0.0 < *DAT_1803fa608)) &&
       (fVar15 = *DAT_1803fa608 + DAT_180380b20, DAT_18042363c <= fVar15)) {
      DAT_18042363c = fVar15;
    }
    LOCK();
    DAT_1804236a5 = '\x01';
    UNLOCK();
  }
  local_58[1] = 0x93fd561a96ab0c67;
  local_58[0] = 0xb900ad038caed4bd;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,local_58 + 1);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_80,local_58);
  pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
  uVar12 = (ulonglong)_tls_index;
  if ((((*pcVar7 == '\0') || (cVar4 = FUN_180114710(), cVar4 == '\0')) ||
      (cVar4 = FUN_1801eb5c0(), uVar14 = DAT_1804235b0, cVar4 == '\0')) ||
     ((DAT_1804236a5 != '\0' || (fVar3 == fVar16)))) {
    iVar13 = 0;
    uVar14 = DAT_1804235b0;
  }
  else {
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8);
    piVar1 = (int *)(lVar8 + 0xfec);
    *piVar1 = *piVar1 + 1;
    if (*piVar1 == 0) {
      *(undefined4 *)(lVar8 + 0xfec) = 1;
    }
    if (DAT_1803fa608 == (float *)0x0) {
      fVar15 = -NAN;
    }
    else {
      fVar15 = DAT_1803fa608[1];
    }
    *(float *)(lVar8 + 0xfe8) = fVar15;
    UVar9 = GetTickCount64();
    iVar13 = *(int *)(lVar8 + 0xfec);
    *(ULONGLONG *)(lVar8 + 0xff8) = UVar9;
    *(undefined4 *)(lVar8 + 0xff0) = 1;
    *(undefined8 *)(lVar8 + 0x1000) = uVar14;
  }
  if ((local_88 == '\0') || (fVar3 == fVar16)) {
    iVar10 = 0;
  }
  else {
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8);
    piVar1 = (int *)(lVar8 + 0xfcc);
    *piVar1 = *piVar1 + 1;
    if (*piVar1 == 0) {
      *(undefined4 *)(lVar8 + 0xfcc) = 1;
    }
    if (DAT_1803fa608 == (float *)0x0) {
      fVar16 = -NAN;
    }
    else {
      fVar16 = DAT_1803fa608[1];
    }
    *(float *)(lVar8 + 0xfc8) = fVar16;
    UVar9 = GetTickCount64();
    *(ULONGLONG *)(lVar8 + 0xfd8) = UVar9;
    *(undefined4 *)(lVar8 + 0xfd0) = 1;
    *(undefined8 *)(lVar8 + 0xfe0) = uVar14;
    iVar10 = *(int *)(lVar8 + 0xfcc);
  }
  if (DAT_180423648 == (code *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar5 = (*DAT_180423648)(local_60);
    uVar11 = (ulonglong)uVar5;
  }
  if ((iVar10 != 0) &&
     (lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8),
     *(int *)(lVar8 + 0xfcc) == iVar10)) {
    *(undefined4 *)(lVar8 + 0xfd0) = 0;
    *(undefined8 *)(lVar8 + 0xfe0) = 0;
  }
  if ((iVar13 != 0) &&
     (lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8),
     *(int *)(lVar8 + 0xfec) == iVar13)) {
    *(undefined4 *)(lVar8 + 0xff0) = 0;
    *(undefined8 *)(lVar8 + 0x1000) = 0;
  }
  return uVar11;
}


