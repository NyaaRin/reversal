// 0x1800df780  Features_Nospread_NospreadFeature_vfunc10
// size=4031 thunk=false
// signature: undefined Features_Nospread_NospreadFeature_vfunc10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Nospread_NospreadFeature_vfunc10(longlong param_1,undefined8 param_2,longlong param_3)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  char *pcVar7;
  size_t sVar8;
  longlong *plVar9;
  float *pfVar10;
  undefined4 *puVar11;
  double dVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  double *pdVar15;
  undefined8 *puVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_288 [32];
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  undefined4 local_210;
  float local_208;
  uint local_204;
  longlong local_200;
  longlong local_1f8;
  double local_1f0;
  longlong local_1e8;
  longlong *local_1e0;
  float *local_1d8;
  float *local_1d0;
  undefined8 local_1c8;
  ulonglong uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  float *local_1a0 [2];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  float fStack_14c;
  float fStack_148;
  undefined8 local_140;
  undefined4 local_138;
  float *local_130;
  undefined8 local_128;
  undefined4 uStack_120;
  float local_118;
  undefined8 local_114;
  undefined8 local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_288;
  uVar18 = 0;
  uVar19 = 0;
  local_204 = 0;
  if (*(char *)(param_3 + 0x58) == '\0') {
    return;
  }
  local_200 = param_1;
  local_1f8 = param_3;
  lVar6 = FUN_18001dbf0(param_2);
  if (((lVar6 != 0) && (pcVar7 = (char *)FUN_18001e4e0(lVar6), pcVar7 != (char *)0x0)) &&
     ((char *)0x10000 < pcVar7)) {
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    sVar8 = strlen(pcVar7);
    uVar20 = FUN_18001d080(&local_1c8,pcVar7,sVar8);
    plVar9 = (longlong *)FUN_18020c000(uVar20,&local_128,&local_1c8);
    pfVar10 = DAT_1803fa8b0;
    local_1a0[0] = DAT_1803fa8b0;
    local_130 = (float *)*plVar9;
    FUN_18020e450(&local_1c8);
    if ((*(float *)(param_3 + 0x1c) == 0.0) && (*(float *)(param_3 + 0x20) == 0.0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_130 == pfVar10) {
LAB_1800df9a5:
      bVar4 = false;
    }
    else {
      local_190 = 0;
      uStack_188 = 0;
      local_180 = 0;
      local_178 = 0;
      sVar8 = strlen(pcVar7);
      uVar20 = FUN_18001d080(&local_190,pcVar7,sVar8);
      uVar18 = 1;
      local_204 = 1;
      pfVar10 = (float *)FUN_18020c120(uVar20,&local_190);
      if (*pfVar10 == 0.0) {
        local_108 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        local_f0 = 0;
        sVar8 = strlen(pcVar7);
        uVar20 = FUN_18001d080(&local_108,pcVar7,sVar8);
        uVar18 = 3;
        local_204 = 3;
        lVar6 = FUN_18020c120(uVar20,&local_108);
        if (*(float *)(lVar6 + 4) == 0.0) goto LAB_1800df9a5;
      }
      bVar4 = true;
    }
    if ((uVar18 & 2) != 0) {
      uVar18 = uVar18 & 0xfffffffd;
      local_204 = uVar18;
      FUN_18020e450(&local_108);
    }
    if ((uVar18 & 1) != 0) {
      local_204 = uVar18 & 0xfffffffe;
      FUN_18020e450(&local_190);
    }
    if ((!bVar3) || (!bVar4)) {
      local_170 = 0;
      uStack_168 = 0;
      local_160 = 0;
      local_158 = 0;
      sVar8 = strlen(pcVar7);
      uVar20 = FUN_18001d080(&local_170,pcVar7,sVar8);
      puVar11 = (undefined4 *)FUN_18020c120(uVar20,&local_170);
      *puVar11 = *(undefined4 *)(param_3 + 0x1c);
      puVar11[1] = *(undefined4 *)(param_3 + 0x20);
      puVar11[2] = *(undefined4 *)(param_3 + 0x24);
      FUN_18020e450(&local_170);
    }
  }
  pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar20 = (**(code **)(*DAT_1803fa668 + 0x60))();
  local_1e8 = (*pcVar2)(DAT_1803fa360,uVar20);
  if (local_1e8 == 0) {
    return;
  }
  dVar12 = (double)FUN_18001dbf0(local_1e8);
  local_1f0 = dVar12;
  plVar9 = (longlong *)FUN_180076750(dVar12);
  local_130 = (float *)0x93fd561a96ab0c67;
  local_140 = (undefined8 *)0x4660102069c10657;
  local_1e0 = plVar9;
  plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_1c8,&local_130);
  plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_108,&local_140);
  pcVar7 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
  if (((*pcVar7 != '\0') && (plVar9 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*plVar9 + 0x80))(plVar9), cVar5 != '\0')) {
    fStack_14c = 0.0;
    fStack_148 = 0.0;
    local_150 = 0.0;
    FUN_1802d4540(param_3 + 0x10,&local_150);
    local_150 = local_150 - *(float *)(param_1 + 8);
    fStack_14c = fStack_14c - *(float *)(param_1 + 0xc);
    fStack_148 = fStack_148 - *(float *)(param_1 + 0x10);
    local_150 = (float)FUN_1802d3e00();
    fStack_14c = (float)FUN_1802d3e00(fStack_14c);
    if (((uint)local_150 & 0x7f800000) == 0x7f800000) {
      return;
    }
    if (((uint)fStack_14c & 0x7f800000) == 0x7f800000) {
      return;
    }
    if (((uint)fStack_148 & 0x7f800000) == 0x7f800000) {
      return;
    }
    FUN_1802d4050(&local_150,param_3 + 0x10);
    return;
  }
  local_130 = (float *)0x93fd561a96ab0c67;
  local_140 = (undefined8 *)0x4660102069c10657;
  plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_1c8,&local_130);
  plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_108,&local_140);
  pcVar7 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
  if (*pcVar7 == '\0') {
    return;
  }
  if (plVar9 == (longlong *)0x0) {
    return;
  }
  cVar5 = (**(code **)(*plVar9 + 0x88))(plVar9);
  if (cVar5 == '\0') {
    return;
  }
  if (dVar12 != *(double *)(param_1 + 0x20)) {
    return;
  }
  pfVar10 = (float *)(param_1 + 0x14);
  if (((uint)*pfVar10 & 0x7f800000) == 0x7f800000) {
    return;
  }
  pfVar1 = (float *)(param_1 + 0x18);
  if (((uint)*pfVar1 & 0x7f800000) == 0x7f800000) {
    return;
  }
  local_130 = (float *)(param_1 + 0x1c);
  if (((uint)*local_130 & 0x7f800000) == 0x7f800000) {
    return;
  }
  local_1d8 = pfVar10;
  local_1d0 = pfVar1;
  FUN_18001c430(local_1e8,&local_1c8);
  fVar22 = *(float *)(param_3 + 4) - (float)local_1c8;
  fVar24 = *(float *)(param_3 + 8) - local_1c8._4_4_;
  fVar21 = *(float *)(param_3 + 0xc) - (float)uStack_1c0;
  fVar21 = fVar24 * fVar24 + fVar22 * fVar22 + fVar21 * fVar21;
  if (fVar21 < 0.0) {
    fVar21 = sqrtf(fVar21);
  }
  else {
    fVar21 = SQRT(fVar21);
  }
  local_140 = &DAT_1803e9f78;
  if (0xf < DAT_1803e9f90) {
    local_140 = DAT_1803e9f78;
  }
  local_208 = fVar21;
  if (((DAT_1803e9f88 < 6) ||
      (puVar16 = (undefined8 *)((longlong)local_140 + 6),
      puVar14 = (undefined8 *)thunk_FUN_1802d5870(local_140,puVar16,"tacrp_",6), puVar14 == puVar16)
      ) || ((puVar14 != local_140 || (0.0 < *(float *)(param_3 + 0x34))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (fVar21 <= DAT_180381120) {
    if (!bVar3) {
      local_114 = 0;
      local_118 = 0.0;
      local_128 = param_3 + 0x10;
      FUN_1802d4540(local_128,&local_118);
      fVar22 = (float)local_114 - *pfVar1;
      local_1a4 = (float)FUN_1802d3e00(local_118 - *pfVar10);
      local_1a8 = (float)FUN_1802d3e00(fVar22);
      lVar6 = local_1e8;
      local_140 = (undefined8 *)0x0;
      local_138 = 0;
      pdVar15 = (double *)FUN_18001f9d0(local_1e8,local_1a0);
      local_140 = (undefined8 *)*pdVar15;
      local_138 = *(undefined4 *)(pdVar15 + 1);
      local_1c8 = 0;
      uStack_1c0 = uStack_1c0 & 0xffffffff00000000;
      puVar16 = (undefined8 *)FUN_18001d350(lVar6);
      dVar12 = local_1f0;
      local_1c8 = *puVar16;
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,*(undefined4 *)(puVar16 + 1));
      (**(code **)(*plVar9 + 0xf8))(plVar9,local_1f0);
      local_108 = 0;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      if (DAT_1803fa668 != (longlong *)0x0) {
        (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_108);
      }
      local_1e8 = CONCAT44(local_1e8._4_4_,DAT_1803db4d4);
      local_208 = DAT_1803db4d8;
      fVar24 = (float)local_114 - DAT_1803db4d8;
      fVar25 = local_118 - (float)local_108;
      fVar26 = (float)local_114 - local_108._4_4_;
      local_1a0[0] = pfVar10;
      fVar22 = (float)FUN_1802d3e00(local_118 - DAT_1803db4d4);
      fVar24 = (float)FUN_1802d3e00(fVar24);
      fVar25 = (float)FUN_1802d3e00(fVar25);
      fVar26 = (float)FUN_1802d3e00(fVar26);
      iVar17 = DAT_180426028 + 1;
      if ((DAT_180426028 < 0x3c) || (DAT_180426028 = iVar17, iVar17 == (iVar17 / 0x19) * 0x19)) {
        if (DAT_1803fa608 != 0) {
          uVar19 = *(undefined4 *)(DAT_1803fa608 + 0x20);
        }
        local_238 = (double)local_140._4_4_;
        local_240 = (double)(float)local_140;
        local_218 = (double)fVar21;
        local_220 = (double)*(float *)(param_3 + 0x1c);
        local_228 = (double)local_1c8._4_4_;
        local_230 = (double)(float)local_1c8;
        local_248 = (double)*(float *)(param_1 + 0xc);
        local_250 = (double)*(float *)(param_1 + 8);
        local_258 = (double)*(float *)(param_1 + 0x18);
        local_260 = (double)*pfVar10;
        local_268 = (double)(float)local_114;
        DAT_180426028 = iVar17;
        local_210 = uVar19;
        local_1f0 = local_238;
        local_140 = (undefined8 *)local_240;
        FUN_180014410("[NS-VERIFY] err=(%.3f,%.3f) actual=(%.3f,%.3f) want=(%.3f,%.3f) dev=(%.3f,%.3f) punch=(%.2f,%.2f) eye=(%.2f,%.2f) fbspread=%.4f srcdist=%.1f tick=%d\n"
                      ,(double)local_1a4,(double)local_1a8,(double)local_118);
        fVar21 = fVar26 * fVar26 + fVar25 * fVar25;
        if (fVar21 < 0.0) {
          fVar21 = sqrtf(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        fVar23 = fVar24 * fVar24 + fVar22 * fVar22;
        if (fVar23 < 0.0) {
          fVar23 = sqrtf(fVar23);
        }
        else {
          fVar23 = SQRT(fVar23);
        }
        local_240 = (double)fVar23;
        local_248 = (double)fVar24;
        local_250 = (double)fVar22;
        local_258 = (double)local_108._4_4_;
        local_260 = (double)(float)local_108;
        local_268 = (double)local_208;
        local_218 = local_1f0;
        local_220 = (double)local_140;
        local_238 = (double)fVar25;
        local_230 = (double)fVar26;
        local_228 = (double)fVar21;
        FUN_180014410("[NS-SRCANG] bullet=(%.2f,%.2f) shipped=(%.2f,%.2f) view=(%.2f,%.2f) | bullet-vs-cmd=(%.2f,%.2f)=%.2fdeg bullet-vs-view=(%.2f,%.2f)=%.2fdeg | punch=(%.2f,%.2f)\n"
                      ,(double)local_118,(double)(float)local_114,(double)(float)local_1e8);
        (**(code **)(*plVar9 + 0xf0))(plVar9,dVar12);
      }
      local_150 = (float)*(undefined8 *)local_1a0[0];
      fStack_14c = (float)((ulonglong)*(undefined8 *)local_1a0[0] >> 0x20);
      fStack_148 = local_1a0[0][2];
      if ((((DAT_1803db4c0 == DAT_1803db4e0) && (((uint)DAT_1803db4b4 & 0x7f800000) != 0x7f800000))
          && (((uint)DAT_1803db4b8 & 0x7f800000) != 0x7f800000)) &&
         (((uint)DAT_1803db4bc & 0x7f800000) != 0x7f800000)) {
        local_150 = local_150 + DAT_1803db4b4;
        fStack_14c = fStack_14c + DAT_1803db4b8;
        fStack_148 = fStack_148 + DAT_1803db4bc;
        local_150 = (float)FUN_1802d3e00();
        fStack_14c = (float)FUN_1802d3e00(fStack_14c);
        if (((((uint)local_150 & 0x7f800000) == 0x7f800000) ||
            (((uint)fStack_14c & 0x7f800000) == 0x7f800000)) ||
           (((uint)fStack_148 & 0x7f800000) == 0x7f800000)) {
          local_150 = *pfVar10;
          fStack_14c = *pfVar1;
          fStack_148 = *local_130;
        }
      }
      iVar17 = DAT_180425910 + 1;
      if ((DAT_180425910 < 0x3c) || (DAT_180425910 = iVar17, iVar17 == (iVar17 / 0x19) * 0x19)) {
        local_240 = (double)*(float *)(param_1 + 0xc);
        local_248 = (double)*(float *)(param_1 + 8);
        local_258 = (double)DAT_1803db4b8;
        local_260 = (double)DAT_1803db4b4;
        local_268 = (double)*(float *)(param_1 + 0x18);
        local_230 = (double)CONCAT44(local_230._4_4_,DAT_1803db4e0);
        local_238 = (double)CONCAT44(local_238._4_4_,DAT_1803db4c0);
        local_250 = (double)CONCAT44(local_250._4_4_,(uint)(DAT_1803db4c0 == DAT_1803db4e0));
        DAT_180425910 = iVar17;
        FUN_180014410("[NS-VISDIR] visDir=(%.3f,%.3f) want=(%.3f,%.3f) nvr=(%.3f,%.3f) applied=%d dev=(%.3f,%.3f) cmdN=%d/%d\n"
                      ,(double)local_150,(double)fStack_14c,(double)*pfVar10);
      }
      FUN_1802d4050(&local_150,local_128);
      *(undefined8 *)(param_3 + 0x1c) = 0;
      *(undefined4 *)(param_3 + 0x24) = 0;
      cVar5 = (**(code **)(*plVar9 + 0x90))(plVar9);
      if (cVar5 == '\0') {
        return;
      }
      *(undefined4 *)(param_3 + 0x28) = 0x475db400;
      return;
    }
    if (fVar21 <= DAT_180381120) goto LAB_1800e07b1;
  }
  if ((((0.0 < *(float *)(param_3 + 0x34)) && (((uint)*pfVar10 & 0x7f800000) != 0x7f800000)) &&
      (((uint)*pfVar1 & 0x7f800000) != 0x7f800000)) &&
     (((uint)*local_130 & 0x7f800000) != 0x7f800000)) {
    local_128._4_4_ = 0.0;
    uStack_120 = 0;
    local_128._0_4_ = 0.0;
    FUN_1802d4540(param_3 + 0x10,&local_128);
    fVar24 = local_128._4_4_ - *pfVar1;
    fVar22 = (float)FUN_1802d3e00((float)local_128 - *pfVar10);
    fVar24 = (float)FUN_1802d3e00(fVar24);
    iVar17 = DAT_1803fed70 + 1;
    if ((0x3b < DAT_1803fed70) && (iVar17 != (iVar17 / 0x19) * 0x19)) {
      DAT_1803fed70 = iVar17;
      return;
    }
    if (DAT_1803fa608 != 0) {
      uVar19 = *(undefined4 *)(DAT_1803fa608 + 0x20);
    }
    local_248 = (double)*(float *)(param_3 + 0x34);
    local_250 = (double)fVar21;
    local_258 = (double)*(float *)(param_1 + 0x18);
    local_260 = (double)*pfVar10;
    local_268 = (double)local_128._4_4_;
    local_240 = (double)CONCAT44(local_240._4_4_,uVar19);
    DAT_1803fed70 = iVar17;
    FUN_180014410("[NS-VERIFY-PHYS] err=(%.3f,%.3f) flight=(%.3f,%.3f) want=(%.3f,%.3f) srcdist=%.1f dmg=%.1f tick=%d\n"
                  ,(double)fVar22,(double)fVar24,(double)(float)local_128);
    return;
  }
LAB_1800e07b1:
  iVar17 = DAT_1803f9238 + 1;
  if ((DAT_1803f9238 < 0x14) || (DAT_1803f9238 = iVar17, iVar17 == (iVar17 / 0x32) * 0x32)) {
    DAT_1803f9238 = iVar17;
    FUN_180014410("[NS-VERIFY] skip non-shot FB srcdist=%.1f dmg=%.1f\n",(double)fVar21,
                  (double)*(float *)(param_3 + 0x34));
  }
  return;
}


