// 0x18013f560  Features_FakeLag_FakeLagFeature_vfunc01
// size=1212 thunk=false
// signature: undefined Features_FakeLag_FakeLagFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_FakeLag_FakeLagFeature_vfunc01
               (undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  BOOL BVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  char *pcVar13;
  undefined8 uVar14;
  float *pfVar15;
  void *lp;
  uint *puVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_e8 [32];
  char local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  longlong *local_a0;
  float local_98;
  undefined8 local_90;
  float local_88;
  ulonglong local_80;
  
  local_80 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  local_90 = 0x93fd561a96ab0c67;
  local_a0 = (longlong *)0x46af284dbd58f0c;
  plVar12 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c0,&local_90);
  plVar12 = (longlong *)FUN_180241a30(*plVar12 + 0x28,local_b0,&local_a0);
  pcVar13 = (char *)FUN_1801fcfc0(*plVar12 + 0x28);
  if (*pcVar13 == '\0') {
    DAT_18040a634 = 0;
    DAT_18040a638 = 0;
    DAT_18040a63c = 0;
    return;
  }
  pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
  plVar12 = (longlong *)(*pcVar4)(DAT_1803fa360,uVar7);
  if (DAT_1803fa668 == (longlong *)0x0) {
    DAT_18040a634 = 0;
    DAT_18040a638 = 0;
    DAT_18040a63c = 0;
    return;
  }
  cVar5 = (**(code **)(*DAT_1803fa668 + 0xd0))();
  if (cVar5 == '\0') {
    DAT_18040a634 = 0;
    DAT_18040a638 = 0;
    DAT_18040a63c = 0;
    return;
  }
  if (plVar12 == (longlong *)0x0) {
    DAT_18040a634 = 0;
    DAT_18040a638 = 0;
    DAT_18040a63c = 0;
    return;
  }
  cVar5 = FUN_18001c330(plVar12);
  if (cVar5 == '\0') {
    DAT_18040a634 = 0;
    DAT_18040a638 = 0;
    DAT_18040a63c = 0;
    return;
  }
  if (param_3 != 0) {
    if ((*(uint *)(param_3 + 0x20) & 1) != 0) {
      return;
    }
    if ((*(uint *)(param_3 + 0x20) >> 0xb & 1) != 0) {
      return;
    }
  }
  if ((param_4 != 0) && ((*(byte *)(param_4 + 0x20) & 1) != 0)) {
    return;
  }
  local_a0 = plVar12;
  if (DAT_1803db45d == '\0') goto LAB_18013f782;
  local_c8 = 0;
  uVar14 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
  uVar14 = FUN_180241610(uVar14,0xef1c37d3998fa2e7);
  pcVar13 = (char *)FUN_1801fcfc0(uVar14);
  local_c8 = *pcVar13;
  if (local_c8 != '\0') {
    return;
  }
  uVar14 = FUN_180241610(&DAT_1803fadf0,0x2723fc3764d74742);
  uVar14 = FUN_180241610(uVar14,0x402819404e703058);
  pcVar13 = (char *)FUN_1801fcfc0(uVar14);
  if (*pcVar13 == '\0') {
LAB_18013f759:
    bVar6 = false;
  }
  else {
    uVar14 = FUN_180241610(&DAT_1803fadf0,0x2723fc3764d74742);
    uVar14 = FUN_180241610(uVar14,0xad8998a7cc2812c);
    pcVar13 = (char *)FUN_1801fcfc0(uVar14);
    if (*pcVar13 == '\0') goto LAB_18013f759;
    bVar6 = true;
  }
  if (bVar6) {
    return;
  }
  local_c8 = 0;
  if (DAT_1803db438 != '\0') {
    return;
  }
LAB_18013f782:
  iVar8 = FUN_18013f1f0();
  local_90 = 0;
  local_88 = 0.0;
  local_a0 = (longlong *)0x0;
  local_98 = 0.0;
  pfVar15 = (float *)FUN_18001d530(plVar12);
  fVar18 = *pfVar15;
  fVar1 = pfVar15[1];
  local_90 = *(undefined8 *)pfVar15;
  local_88 = pfVar15[2];
  pfVar15 = (float *)(**(code **)(*plVar12 + 0x48))(plVar12);
  fVar20 = *pfVar15;
  fVar19 = pfVar15[1];
  local_a0 = *(longlong **)pfVar15;
  fVar2 = pfVar15[2];
  local_98 = fVar2;
  if (iVar8 == 1) {
    fVar18 = fVar1 * fVar1 + fVar18 * fVar18;
    if (fVar18 < 0.0) {
      fVar18 = sqrtf(fVar18);
    }
    else {
      fVar18 = SQRT(fVar18);
    }
    if (fVar18 < DAT_180381088) {
      DAT_18040a63c = 0;
      DAT_18040a638 = 0;
      DAT_18040a634 = 0;
      return;
    }
  }
  else if ((iVar8 == 2) && (puVar16 = (uint *)FUN_18001d710(plVar12,&local_a0), (*puVar16 & 1) != 0)
          ) {
    DAT_18040a634 = 0;
    DAT_18040a638 = 0;
    DAT_18040a63c = 0;
    _DAT_1804301e0 = 0;
    return;
  }
  lp = (void *)(**(code **)(*DAT_1803fa668 + 0x240))();
  if (lp == (void *)0x0) {
    return;
  }
  BVar9 = IsBadReadPtr(lp,8);
  if (BVar9 == 0) {
    iVar3 = *(int *)((longlong)lp + 0x20);
    if (DAT_18040a634 < iVar3) {
      DAT_18040a634 = iVar3;
    }
    if (iVar3 < 1) {
      DAT_18040a634 = 0;
      iVar10 = FUN_18013f0c0();
      iVar11 = FUN_18013f130();
      iVar11 = (int)((DAT_180380bb0 - (float)iVar11 / DAT_180381120) * (float)iVar10);
      DAT_18040a63c = 1;
      if (1 < iVar11) {
        DAT_18040a63c = iVar11;
      }
      if (DAT_18040a63c < iVar10) {
        uVar17 = DAT_1803e90a0 << 0xd ^ DAT_1803e90a0;
        uVar17 = uVar17 >> 0x11 ^ uVar17;
        DAT_1803e90a0 = uVar17 << 5 ^ uVar17;
        DAT_18040a63c = DAT_18040a63c + DAT_1803e90a0 % ((iVar10 - DAT_18040a63c) + 1U);
      }
      DAT_18040a638 = '\x01';
      _DAT_1803e9bb0 = fVar20;
      _DAT_1803e9bb4 = fVar19;
      _DAT_1803e9bb8 = fVar2;
    }
    cVar5 = FUN_18013f1a0();
    if (((cVar5 != '\0') && (DAT_18040a638 != '\0')) &&
       (fVar20 = fVar20 - _DAT_1803e9bb0, fVar19 = fVar19 - _DAT_1803e9bb4,
       DAT_180381290 <
       fVar19 * fVar19 + fVar20 * fVar20 + (fVar2 - _DAT_1803e9bb8) * (fVar2 - _DAT_1803e9bb8))) {
      return;
    }
    if ((iVar8 == 3) && (cVar5 = FUN_18013f230(plVar12), cVar5 != '\0')) {
      return;
    }
    if (iVar3 < DAT_18040a63c) {
      *DAT_1803db430 = 0;
      return;
    }
    return;
  }
  return;
}


