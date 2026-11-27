// 0x18010c1b0  FUN_18010c1b0
// size=2168 thunk=false
// signature: undefined FUN_18010c1b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18010c1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  char cVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  longlong lVar20;
  int iVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  undefined *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  undefined8 local_1a0;
  undefined4 *local_198;
  undefined4 *local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  char local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong *local_108 [2];
  longlong local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined4 local_e0 [2];
  ulonglong local_d8 [2];
  ulonglong local_c8;
  
  local_c8 = DAT_1803da4c0 ^ (ulonglong)auStack_1c8;
  local_120 = param_5;
  lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar12 = *(char *)(lVar20 + 0xf6d);
  *(undefined1 *)(lVar20 + 0xf6d) = 0;
  uVar23 = DAT_1803fa378;
  if (*(char *)(lVar20 + 0xf4a) != '\0') {
    return;
  }
  local_d8[0] = DAT_1803fa378;
  if (DAT_1803fa378 == 0) {
    return;
  }
  local_148 = cVar12;
  local_118 = param_3;
  local_110 = param_2;
  local_f8 = param_4;
  local_e8 = lVar20;
  if ((cVar12 == '\0') && (cVar8 = FUN_1801093d0(), cVar8 == '\0')) {
    return;
  }
  iVar7 = DAT_1804096b8;
  iVar13 = DAT_180409698;
  uVar22 = DAT_180409660;
  iVar21 = DAT_180409650;
  uVar19 = DAT_180401634;
  if ((DAT_1803fa608 != 0) &&
     ((fVar25 = (float)*(double *)(DAT_1803fa608 + 0x10), DAT_180409648 <= fVar25 ||
      (DAT_180380f00 <= DAT_180409648 - fVar25)))) {
    DAT_180409648 = fVar25 + DAT_180380bb0;
    local_f0 = DAT_180409644;
    uVar9 = FUN_1801095c0();
    uVar10 = FUN_180109540();
    uVar11 = FUN_1801094c0();
    local_180 = (double)CONCAT44(local_180._4_4_,iVar21);
    local_188 = (double)CONCAT44(local_188._4_4_,uVar19);
    local_190 = (undefined4 *)CONCAT44(local_190._4_4_,iVar7);
    local_198 = (undefined4 *)CONCAT44(local_198._4_4_,iVar13);
    local_1a0 = CONCAT44(local_1a0._4_4_,uVar22);
    local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,local_f0);
    FUN_180014410("[GLOW] diag: outline=%d model=%d through=%d seen=%d drew=%d subview=%d filtered=%d noMat=%d noCtx=%d\n"
                  ,uVar11,uVar10,uVar9);
    DAT_180409698 = 0;
    DAT_180409650 = 0;
    DAT_180401634 = 0;
    _DAT_180409674 = 0;
    DAT_1804096b8 = 0;
    DAT_180409660 = 0;
    DAT_180409644 = 0;
    lVar20 = local_e8;
    uVar23 = local_d8[0];
    param_4 = local_f8;
    cVar12 = local_148;
  }
  lVar6 = DAT_1803fa608;
  lVar17 = 0;
  if (DAT_1804236a5 != '\0') {
    return;
  }
  if (DAT_180423650 != 0) {
    return;
  }
  if (DAT_1804236a0 != 0) {
    return;
  }
  if (DAT_1803fa46f != '\0') {
    return;
  }
  if (DAT_1803fa608 == 0) {
    return;
  }
  if (DAT_1803fa360 == 0) {
    return;
  }
  if (cVar12 == '\0') {
    iVar21 = *(int *)(param_4 + 0x44);
    iVar13 = FUN_180071b00(iVar21);
    if (0 < iVar13) {
      iVar21 = iVar13;
    }
    if (iVar21 < 1) {
      return;
    }
    if (*(int *)(lVar6 + 0x1c) < iVar21) {
      return;
    }
    cVar12 = FUN_1801098d0(iVar21);
    if (cVar12 == '\0') {
      DAT_1804096b8 = DAT_1804096b8 + 1;
      return;
    }
    local_e8 = -0x6c02a9e56954f399;
    plVar16 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_108,&local_e8);
    lVar20 = *plVar16 + 0x28;
    local_f8 = 0x18fc161e9b31bc79;
    plVar16 = (longlong *)FUN_180241a30(lVar20,&local_130,&local_f8);
    puVar14 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    local_130 = *puVar14;
    local_f8 = 0x18fc291e9b31dcc2;
    plVar16 = (longlong *)FUN_180241a30(lVar20,&local_140,&local_f8);
    puVar14 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    local_12c = *puVar14;
    local_f8 = 0x18fc261e9b31d7a9;
    plVar16 = (longlong *)FUN_180241a30(lVar20,&local_140,&local_f8);
    puVar14 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    local_128 = *puVar14;
    local_f8 = -0x502fa41b256bb3d3;
    plVar16 = (longlong *)FUN_180241a30(lVar20,&local_140,&local_f8);
    puVar14 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    local_140 = *puVar14;
    local_f8 = -0x502fb91b256bd782;
    plVar16 = (longlong *)FUN_180241a30(lVar20,local_d8,&local_f8);
    puVar14 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    local_13c = *puVar14;
    local_f8 = -0x502fb41b256bcf03;
    plVar16 = (longlong *)FUN_180241a30(lVar20,local_d8,&local_f8);
    puVar14 = (undefined4 *)FUN_180202dc0(*plVar16 + 0x28);
    local_138 = *puVar14;
    local_f8 = 0x3db4763925009906;
    plVar16 = (longlong *)FUN_180241a30(lVar20,local_d8,&local_f8);
    puVar15 = (undefined1 *)FUN_1801fcfc0(*plVar16 + 0x28);
    local_148 = *puVar15;
    local_f8 = 0x28549c2b3ea27228;
    plVar16 = (longlong *)FUN_180241a30(lVar20,local_d8,&local_f8);
    puVar14 = (undefined4 *)FUN_1802029c0(*plVar16 + 0x28);
  }
  else {
    local_130 = *(undefined4 *)(lVar20 + 0xf60);
    local_140 = *(undefined4 *)(lVar20 + 0xf50);
    local_12c = *(undefined4 *)(lVar20 + 0xf64);
    local_13c = *(undefined4 *)(lVar20 + 0xf54);
    local_128 = *(undefined4 *)(lVar20 + 0xf68);
    local_138 = *(undefined4 *)(lVar20 + 0xf58);
    local_148 = *(undefined1 *)(lVar20 + 0xf6c);
    puVar14 = (undefined4 *)(lVar20 + 0xf4c);
  }
  uVar19 = *puVar14;
  local_e8 = CONCAT44(local_e8._4_4_,uVar19);
  DAT_180409644 = DAT_180409644 + 1;
  plVar16 = (longlong *)FUN_180109640();
  if (((plVar16 == (longlong *)0x0) || (DAT_1803fa598 == 0)) || (DAT_1803f9280 == 0)) {
    DAT_180409650 = DAT_180409650 + 1;
    return;
  }
  local_108[0] = plVar16;
  cVar12 = FUN_180109710(plVar16);
  puVar24 = &DAT_180350970;
  if (cVar12 != '\0') {
    puVar24 = &DAT_180350968;
  }
  if (DAT_1803fecc8 < 0x10) {
    local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)(param_4 + 0x44));
    DAT_1803fecc8 = DAT_1803fecc8 + 1;
    local_d8[0] = local_d8[0] & 0xffffffff00000000;
    local_e0[0] = 0;
    local_f0 = 0;
    local_ec = 0;
    local_1a8 = &local_ec;
    (**(code **)(*plVar16 + 0x128))(plVar16,local_d8,local_e0,&local_f0);
    if (DAT_1803fa680 != (longlong *)0x0) {
      lVar17 = (**(code **)(*DAT_1803fa680 + 0x68))();
    }
    uVar19 = local_ec;
    iVar21 = local_f0;
    fVar5 = DAT_1803db52c;
    fVar4 = DAT_1803db528;
    fVar3 = DAT_1803db524;
    fVar2 = DAT_1803db51c;
    fVar25 = 0.0;
    if (lVar17 == 0) {
      fVar28 = 0.0;
      fVar27 = 0.0;
      fVar26 = 0.0;
    }
    else {
      fVar28 = *(float *)(lVar17 + 0x38);
      fVar27 = *(float *)(lVar17 + 0x48);
      fVar26 = *(float *)(lVar17 + 0x44);
      fVar25 = *(float *)(lVar17 + 0x40);
    }
    if (DAT_1803fa608 == 0) {
      uVar22 = 0xffffffff;
    }
    else {
      uVar22 = *(undefined4 *)(DAT_1803fa608 + 4);
    }
    uVar18 = (**(code **)(*plVar16 + 0x28))(plVar16);
    local_158 = (double)fVar2;
    local_160 = (double)fVar5;
    local_168 = (double)fVar4;
    local_170 = (double)fVar3;
    local_178 = (double)fVar28;
    local_180 = (double)fVar27;
    local_188 = (double)fVar26;
    local_190 = (undefined4 *)(double)fVar25;
    local_198 = (undefined4 *)CONCAT44(local_198._4_4_,uVar22);
    local_1a0 = CONCAT44(local_1a0._4_4_,(undefined4)local_f8);
    local_1a8 = (undefined4 *)CONCAT44(local_1a8._4_4_,uVar19);
    FUN_180014410("[GLOW] pass %s: rt=%p vp=%dx%d ent=%d frame=%d cam=(%.0f %.0f %.0f) fov=%.1f | main=(%.0f %.0f %.0f) fov=%.1f\n"
                  ,puVar24,uVar18,iVar21);
    uVar19 = (undefined4)local_e8;
  }
  cVar12 = FUN_180109710(plVar16);
  if (cVar12 == '\0') {
LAB_18010c90f:
    DAT_180409698 = DAT_180409698 + 1;
  }
  else {
    if ((DAT_1803fa608 != 0) && (uVar1 = *(uint *)(param_4 + 0x44), uVar1 < 0x2000)) {
      if (*(int *)(&DAT_180401640 + (longlong)(int)uVar1 * 4) == *(int *)(DAT_1803fa608 + 4))
      goto LAB_18010c90f;
      *(int *)(&DAT_180401640 + (longlong)(int)uVar1 * 4) = *(int *)(DAT_1803fa608 + 4);
    }
    if (DAT_180426000 == '\0') {
      DAT_180426000 = '\x01';
      FUN_180014410("[GLOW] render context = %p (global was %p)\n",plVar16,DAT_1803fa630);
    }
    cVar12 = FUN_18010a0d0();
    if (cVar12 != '\0') {
      local_180 = (double)CONCAT44(local_180._4_4_,uVar19);
      local_188 = (double)CONCAT71(local_188._1_7_,local_148);
      local_190 = &local_140;
      local_198 = &local_130;
      local_1a0 = local_120;
      local_1a8 = (undefined4 *)param_4;
      FUN_18010a680(plVar16,uVar23,local_110,local_118);
    }
  }
  return;
}


