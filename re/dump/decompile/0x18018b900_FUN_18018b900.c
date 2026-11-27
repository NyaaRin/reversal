// 0x18018b900  FUN_18018b900
// size=3066 thunk=false
// signature: undefined FUN_18018b900()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18018b900(longlong *param_1)

{
  code *pcVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  BOOL BVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  char *pcVar12;
  byte *pbVar13;
  longlong *plVar14;
  float *pfVar15;
  float *pfVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  char cVar20;
  longlong lVar21;
  undefined8 *puVar22;
  float extraout_XMM0_Da;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_b18 [32];
  char local_af8;
  undefined8 *local_af0;
  char local_ae8;
  char local_ae7;
  char local_ae6;
  undefined8 local_ae0;
  float local_ad8;
  int local_ad0;
  int local_acc [3];
  longlong *local_ac0;
  longlong *local_ab8;
  longlong *local_ab0 [3];
  undefined1 local_a98 [24];
  undefined1 local_a80 [24];
  undefined8 local_a68 [5];
  undefined2 local_a3c;
  undefined4 local_138;
  undefined1 local_134;
  undefined4 local_130;
  undefined8 local_128;
  longlong local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined8 local_f0 [3];
  ulonglong local_d8;
  
  local_d8 = DAT_1803da4c0 ^ (ulonglong)auStack_b18;
  if (((param_1 == (longlong *)0x0) ||
      (local_ab8 = param_1, BVar6 = IsBadReadPtr(param_1,8), BVar6 != 0)) ||
     (BVar6 = IsBadReadPtr((void *)*param_1,8), BVar6 != 0)) {
    return 0;
  }
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
  plVar10 = (longlong *)(*pcVar1)(DAT_1803fa360,uVar7);
  if (plVar10 == (longlong *)0x0) {
    return 0;
  }
  local_ac0 = plVar10;
  BVar6 = IsBadReadPtr(param_1,8);
  if (BVar6 != 0) {
    return 0;
  }
  BVar6 = IsBadReadPtr((void *)*param_1,8);
  if (BVar6 != 0) {
    return 0;
  }
  cVar3 = (**(code **)(*param_1 + 0x420))(param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  plVar11 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
  iVar8 = (**(code **)(*plVar11 + 0x48))(plVar11);
  if (0xfe < iVar8 - 1U) {
    return 0;
  }
  pcVar12 = (char *)FUN_18018a4c0(&local_128,param_1,iVar8);
  if (((*pcVar12 != '\0') || (pcVar12[4] == '\0')) &&
     ((pcVar12[1] == '\0' && (plVar11 = DAT_1803fb100, pcVar12[2] == '\0')))) {
    while( true ) {
      if (plVar11 == DAT_1803fb108) {
        return 0;
      }
      if ((*plVar11 != 0) && (*(char *)(*plVar11 + 0x16) != '\0')) break;
      plVar11 = plVar11 + 1;
    }
  }
  local_ae6 = pcVar12[3];
  if (param_1 == plVar10) {
    return 0;
  }
  local_ae8 = 0;
  local_ae8 = (**(code **)(*param_1 + 0x420))(param_1);
  pcVar12 = "ESP_ShouldDrawEntity";
  if (local_ae8 != '\0') {
    pcVar12 = "ESP_ShouldDrawPlayer";
  }
  cVar3 = FUN_18003a090(pcVar12);
  if (((cVar3 != '\0') &&
      (plVar11 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1), plVar11 != (longlong *)0x0))
     && (iVar8 = (**(code **)(*plVar11 + 0x48))(plVar11), 0 < iVar8)) {
    local_128 = CONCAT44(local_128._4_4_,iVar8);
    cVar3 = FUN_180207bb0(pcVar12);
    if (cVar3 != '\0') {
      return 0;
    }
  }
  cVar3 = (**(code **)(*param_1 + 0x420))(param_1);
  if (cVar3 != '\0') {
    local_120 = -0x6c02a9e56954f399;
    plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_ae0,&local_120);
    lVar21 = *plVar11 + 0x28;
    local_128 = 0x7aad0bc54d55fc8a;
    plVar11 = (longlong *)FUN_180241a30(lVar21,local_ab0,&local_128);
    pcVar12 = (char *)FUN_1801fcfc0(*plVar11 + 0x28);
    if (((*pcVar12 != '\0') && (iVar8 = FUN_18001c560(plVar10), 0 < iVar8)) &&
       (iVar9 = FUN_18001c560(param_1), iVar9 == iVar8)) {
      return 0;
    }
    local_128 = 0xcd347fc1a3829be9;
    plVar11 = (longlong *)FUN_180241a30(lVar21,local_ab0,&local_128);
    pcVar12 = (char *)FUN_1801fcfc0(*plVar11 + 0x28);
    if (((*pcVar12 != '\0') && (cVar3 = FUN_18001e0a0(param_1), cVar3 == '\b')) &&
       (cVar3 = FUN_18018ab90(param_1), cVar3 == '\0')) {
      return 0;
    }
    local_128 = 0xa0267eea20a40d9a;
    plVar11 = (longlong *)FUN_180241a30(lVar21,local_ab0,&local_128);
    pcVar12 = (char *)FUN_1801fcfc0(*plVar11 + 0x28);
    if ((*pcVar12 != '\0') &&
       (pbVar13 = (byte *)FUN_18001d710(param_1,&local_128), (*pbVar13 & 0x40) != 0)) {
      return 0;
    }
    local_128 = 0xccdef166ec8c517e;
    plVar11 = (longlong *)FUN_180241a30(lVar21,local_ab0,&local_128);
    pcVar12 = (char *)FUN_1801fcfc0(*plVar11 + 0x28);
    if ((*pcVar12 != '\0') && (cVar3 = FUN_18018ab90(param_1), cVar3 == '\0')) {
      local_ae7 = 1;
      local_ae7 = FUN_18001c330(param_1);
      if (local_ae7 == '\0') {
        return 0;
      }
    }
    plVar11 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
    if ((plVar11 != (longlong *)0x0) &&
       (iVar8 = (**(code **)(*plVar11 + 0x48))(plVar11), iVar8 - 1U < 0x80)) {
      if ((DAT_180425fd0 != (code *)0x0) && (cVar3 = (*DAT_180425fd0)(iVar8), cVar3 != '\0')) {
        return 0;
      }
      if ((DAT_180426170 != (code *)0x0) && (cVar3 = (*DAT_180426170)(iVar8), cVar3 != '\0')) {
        return 0;
      }
      if ((DAT_1804009f0 != (code *)0x0) && (cVar3 = (*DAT_1804009f0)(iVar8), cVar3 != '\0')) {
        return 0;
      }
    }
  }
  plVar11 = (longlong *)FUN_18018aab0(param_1);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1;
  }
  local_120 = -0x6c02a9e56954f399;
  local_128 = 0xdaefe600c147795;
  local_ab0[0] = plVar11;
  plVar14 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_ae0,&local_120);
  plVar14 = (longlong *)FUN_180241a30(*plVar14 + 0x28,local_f0,&local_128);
  pfVar15 = (float *)FUN_180202dc0(*plVar14 + 0x28);
  fVar26 = *pfVar15;
  if (0.0 < fVar26) {
    pfVar15 = (float *)(**(code **)(*plVar10 + 0x48))(plVar10);
    pfVar16 = (float *)(**(code **)(*plVar11 + 0x48))(plVar11);
    (*(code *)PTR_FUN_1803da018)
              ((pfVar15[1] - pfVar16[1]) * (pfVar15[1] - pfVar16[1]) +
               (*pfVar15 - *pfVar16) * (*pfVar15 - *pfVar16) +
               (pfVar15[2] - pfVar16[2]) * (pfVar15[2] - pfVar16[2]));
    if (fVar26 < extraout_XMM0_Da) {
      return 0;
    }
  }
  lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar21 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar21 = *(longlong *)(lVar21 + 0xec0);
  if (lVar21 == 0) {
    return 0;
  }
  lVar21 = *(longlong *)(lVar21 + 0x1520);
  if (lVar21 == 0) {
    return 0;
  }
  local_ae0 = *(longlong *)(lVar21 + 0x2c8);
  if (local_ae0 == 0) {
    return 0;
  }
  local_acc[1] = 2;
  puVar22 = (undefined8 *)0x0;
  local_acc[0] = 0;
  local_128 = 0x93fd561a96ab0c67;
  local_f0[0] = 0xf5d2d5e513b25a03;
  local_120 = local_ae0;
  plVar14 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_a80,&local_128);
  plVar14 = (longlong *)FUN_180241a30(*plVar14 + 0x28,local_a98,local_f0);
  piVar17 = (int *)FUN_1802029c0(*plVar14 + 0x28);
  piVar19 = local_acc;
  if (-1 < *piVar17) {
    piVar19 = piVar17;
  }
  piVar18 = local_acc + 1;
  if (*piVar17 < 3) {
    piVar18 = piVar19;
  }
  iVar8 = *piVar18;
  local_128 = CONCAT44(local_128._4_4_,iVar8);
  local_ad0 = 0;
  plVar14 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
  iVar9 = (**(code **)(*plVar14 + 0x48))(plVar14);
  local_ad0 = iVar9;
  cVar3 = FUN_18018a2e0(param_1);
  if ((cVar3 == '\0') && ((plVar11 == param_1 || (cVar3 = FUN_18018a2e0(plVar11), cVar3 == '\0'))))
  {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  if (iVar9 - 1U < 0xff) {
    lVar21 = (longlong)iVar9;
    puVar22 = &DAT_180458ae0 + lVar21 * 0x128;
    if ((longlong *)*puVar22 != plVar11) {
      local_a68[0] = 0;
      local_a3c = 0;
      local_138 = 0;
      local_134 = 0;
      local_130 = 0;
      FUN_18018a8f0(puVar22,local_a68);
      *puVar22 = plVar11;
    }
    FUN_18018a830(&local_ae0,plVar11);
    if ((((*(char *)(&DAT_180458b0c + lVar21 * 0x4a0) != '\0') && ((float)local_ae0 == 0.0)) &&
        (local_ae0._4_4_ == 0.0)) && (local_ad8 == 0.0)) {
      local_ae0 = *(longlong *)(&DAT_180458b00 + lVar21 * 0x940);
      local_ad8 = *(float *)(&DAT_180458b08 + lVar21 * 0x940);
    }
  }
  else {
    FUN_18018a830(&local_ae0,plVar11);
  }
  if (((cVar3 != '\0') && (puVar22 != (undefined8 *)0x0)) &&
     ((*(char *)((longlong)puVar22 + 0x2c) != '\0' &&
      (pfVar15 = (float *)FUN_18018f0f0(local_a98,puVar22,iVar8,&local_ae0),
      *(char *)(pfVar15 + 4) != '\0')))) {
    fVar26 = pfVar15[1];
    fVar25 = pfVar15[2];
    fVar24 = pfVar15[3];
    fVar27 = *pfVar15;
    goto LAB_18018c390;
  }
  local_f4 = 0;
  if (iVar8 == 2) {
    pfVar15 = (float *)FUN_18018e910();
  }
  else if (iVar8 == 1) {
    pfVar15 = (float *)FUN_18018ac10();
  }
  else {
    pfVar15 = (float *)FUN_18018e280(local_a98,plVar11,&local_118);
  }
  fVar26 = pfVar15[1];
  fVar25 = pfVar15[2];
  fVar24 = pfVar15[3];
  cVar20 = *(char *)(pfVar15 + 4);
  if (cVar20 == '\0') {
    if (iVar8 != 2) {
      if (iVar8 == 1) {
        return 1;
      }
LAB_18018c33f:
      pfVar15 = (float *)FUN_18018ac10(local_f0,plVar11,&local_118);
      fVar27 = *pfVar15;
      fVar26 = pfVar15[1];
      fVar25 = pfVar15[2];
      fVar24 = pfVar15[3];
      cVar20 = *(char *)(pfVar15 + 4);
      if (cVar20 == '\0') {
        return 1;
      }
      goto LAB_18018c1db;
    }
    if (((puVar22 == (undefined8 *)0x0) || (*(char *)((longlong)puVar22 + 0x2c) == '\0')) ||
       (*(char *)((longlong)puVar22 + 0x2d) == '\0')) {
LAB_18018c1a5:
      pfVar15 = (float *)FUN_18018e280(local_ab0,plVar11,&local_118);
      cVar20 = *(char *)(pfVar15 + 4);
      if (cVar20 != '\0') {
        fVar26 = pfVar15[1];
        fVar25 = pfVar15[2];
        fVar24 = pfVar15[3];
        goto LAB_18018c1d7;
      }
      goto LAB_18018c33f;
    }
    pfVar15 = (float *)FUN_18018f0f0(local_a80,puVar22,2,&local_ae0);
    cVar20 = *(char *)(pfVar15 + 4);
    if (cVar20 == '\0') goto LAB_18018c1a5;
    fVar27 = *pfVar15;
    fVar26 = pfVar15[1];
    fVar25 = pfVar15[2];
    fVar24 = pfVar15[3];
LAB_18018c1e4:
    if ((((cVar3 == '\0') && (local_f4._1_1_ != '\0')) &&
        (cVar4 = FUN_18018c550(&local_118,&local_10c), cVar4 != '\0')) &&
       (((sVar5 = _fdclass(), sVar5 < 1 && (sVar5 = _fdclass(), sVar5 < 1)) &&
        (sVar5 = _fdclass(), sVar5 < 1)))) {
      fVar23 = local_108 - local_114;
      if (local_108 - local_114 <= local_104 - local_110) {
        fVar23 = local_104 - local_110;
      }
      fVar2 = local_10c - local_118;
      if (local_10c - local_118 <= fVar23) {
        fVar2 = fVar23;
      }
      if (fVar2 < DAT_180381290) {
        *(float *)(puVar22 + 1) = local_118;
        *(float *)((longlong)puVar22 + 0xc) = local_114;
        *(float *)(puVar22 + 2) = local_110;
        *(float *)((longlong)puVar22 + 0x14) = local_10c;
        *(float *)(puVar22 + 3) = local_108;
        *(float *)((longlong)puVar22 + 0x1c) = local_104;
        *(undefined4 *)(puVar22 + 4) = local_100;
        *(undefined4 *)((longlong)puVar22 + 0x24) = local_fc;
        *(undefined4 *)(puVar22 + 5) = local_f8;
        *(undefined1 *)((longlong)puVar22 + 0x2d) = (undefined1)local_f4;
        *(undefined1 *)((longlong)puVar22 + 0x2c) = 1;
        if (DAT_1803fa608 == 0) {
          fVar23 = 0.0;
        }
        else {
          fVar23 = (float)*(double *)(DAT_1803fa608 + 0x10);
        }
        *(float *)(puVar22 + 0x127) = fVar23;
      }
    }
  }
  else {
LAB_18018c1d7:
    fVar27 = *pfVar15;
LAB_18018c1db:
    if (puVar22 != (undefined8 *)0x0) goto LAB_18018c1e4;
  }
  if (cVar20 == '\0') {
    return 1;
  }
LAB_18018c390:
  pfVar15 = (float *)(**(code **)(*plVar10 + 0x48))(plVar10);
  pfVar16 = (float *)(**(code **)(*plVar11 + 0x48))(plVar11);
  DAT_1803fcb68 =
       (*(code *)PTR_FUN_1803da018)
                 ((pfVar15[1] - pfVar16[1]) * (pfVar15[1] - pfVar16[1]) +
                  (*pfVar15 - *pfVar16) * (*pfVar15 - *pfVar16) +
                  (pfVar15[2] - pfVar16[2]) * (pfVar15[2] - pfVar16[2]));
  fVar24 = ceilf(fVar24);
  fVar25 = ceilf(fVar25);
  iVar8 = (int)fVar26;
  if ((fVar26 < 0.0) && ((float)iVar8 != fVar26)) {
    iVar8 = iVar8 + -1;
  }
  iVar9 = (int)fVar27;
  if ((fVar27 < 0.0) && ((float)iVar9 != fVar27)) {
    iVar9 = iVar9 + -1;
  }
  fVar26 = (float)iVar9;
  fVar27 = (float)iVar8;
  _DAT_1803fcb78 = (fVar26 + fVar25) * DAT_180380ac0;
  _DAT_1803fcb7c = (fVar27 + fVar24) * DAT_180380ac0;
  _DAT_1803fcb50 = fVar26 - _DAT_1803fcb78;
  _DAT_1803fcb54 = fVar27 - _DAT_1803fcb7c;
  DAT_1803fcb58 = fVar25 - _DAT_1803fcb78;
  DAT_1803fcb5c = fVar24 - _DAT_1803fcb7c;
  _DAT_1803fcb70 = (fVar25 - fVar26) / DAT_180381178;
  _DAT_1803fcb74 = (fVar24 - fVar27) / DAT_1803811dc;
  DAT_1803fcb6c = (_DAT_1803fcb74 + _DAT_1803fcb70) * DAT_180380ac0;
  DAT_1803fcb80 = 0;
  DAT_1803fcb81 = local_ae6;
  DAT_1803fcb60 = param_1;
  FUN_180174130(local_120,CONCAT44(_DAT_1803fcb7c,_DAT_1803fcb78));
  local_af0 = &local_ae0;
  local_af8 = cVar3;
  FUN_18018aee0(local_120,param_1,plVar11,puVar22);
  return 1;
}


