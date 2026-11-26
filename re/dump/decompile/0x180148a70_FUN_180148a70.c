// 0x180148a70  FUN_180148a70
// size=3466 thunk=false
// signature: undefined FUN_180148a70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180148a70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  longlong *plVar11;
  int *piVar12;
  int *piVar13;
  float *pfVar14;
  byte *pbVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  int *piVar20;
  int iVar21;
  byte bVar22;
  int iVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_2b8 [32];
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  int local_278;
  double local_270;
  int local_268;
  double local_260;
  double local_258;
  uint local_250;
  uint local_248;
  uint local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  float local_1f8;
  uint local_1f4;
  undefined8 *local_1f0;
  int local_1e8 [2];
  undefined1 *local_1e0;
  undefined8 *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [32];
  undefined8 **local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 local_168 [32];
  undefined1 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined1 *local_108;
  undefined8 *local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_1803da4c0 ^ (ulonglong)auStack_2b8;
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (DAT_1803fa608 == 0) {
    return 0;
  }
  if (DAT_1803fa668 == (longlong *)0x0) {
    return 0;
  }
  local_1e8[1] = 0x12;
  local_1e8[0] = 0;
  local_f8 = (undefined1 *)0x93fd561a96ab0c67;
  local_f0 = 0xa42b44cb0a75e4bc;
  plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_e8,&local_f8);
  plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,&local_1d8,&local_f0);
  piVar12 = (int *)FUN_1802029c0(*plVar11 + 0x28);
  piVar20 = local_1e8;
  if (-1 < *piVar12) {
    piVar20 = piVar12;
  }
  piVar13 = local_1e8 + 1;
  if (*piVar12 < 0x13) {
    piVar13 = piVar20;
  }
  iVar23 = -1;
  fVar32 = 0.0;
  if ((DAT_1803e8130 != param_2) || (DAT_1803e8138 != *piVar13)) {
    DAT_1803e8118._0_2_ = 0;
    DAT_1803e8118._2_1_ = '\x01';
    DAT_1803e8118._3_1_ = local_e8._3_1_;
    _DAT_1803e811c = 0;
    DAT_1803e8124 = -1;
    DAT_1803e8128 = 0.0;
    DAT_1803e812c = -1.0;
    FUN_180148150(param_2,*piVar13,&DAT_1803e8130);
  }
  if (DAT_1803e813c == '\0') {
    return 0;
  }
  fVar34 = (float)*(double *)(DAT_1803fa608 + 0x10);
  pfVar14 = (float *)FUN_18001d530(param_1);
  fVar30 = *pfVar14;
  local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,fVar30);
  fVar29 = pfVar14[1];
  local_f0 = CONCAT44(local_f0._4_4_,fVar29);
  fVar25 = pfVar14[2];
  fVar30 = fVar29 * fVar29 + fVar30 * fVar30;
  if (fVar30 < 0.0) {
    local_1f8 = sqrtf(fVar30);
  }
  else {
    local_1f8 = SQRT(fVar30);
  }
  fVar29 = fVar25 * fVar25 + fVar30;
  if (fVar29 < 0.0) {
    fVar29 = sqrtf(fVar29);
  }
  else {
    fVar29 = SQRT(fVar29);
  }
  pbVar15 = (byte *)FUN_18001d710(param_1,&local_f8);
  bVar22 = *pbVar15 & 1;
  puVar16 = (uint *)FUN_18001d710(param_1,&local_f8);
  local_1f4 = *puVar16 & 4;
  cVar6 = FUN_18001fcf0(param_1);
  cVar7 = FUN_18001e0a0(param_1);
  bVar24 = false;
  local_1d8 = (undefined8 *)0x0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  FUN_18001d080(&local_1d8,"DT_BasePlayer",0xd);
  local_198 = &local_1d8;
  local_190 = &local_218;
  uVar17 = FUN_18016d4c0(&local_218,&local_1d8);
  uVar17 = FUN_180018ef0(&DAT_1803fac80,uVar17);
  FUN_18020e450(&local_1d8);
  local_188 = &local_238;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  local_220 = 0;
  FUN_18001d080(&local_238,"m_hVehicle",10);
  local_180 = &local_238;
  local_1e0 = local_1b8;
  uVar18 = FUN_18016d4c0(local_1b8,&local_238);
  iVar9 = FUN_180018c10(uVar17,uVar18);
  FUN_18020e450(&local_238);
  if (iVar9 != 0) {
    iVar9 = FUN_180148a00(param_1,(longlong)iVar9);
    bVar24 = iVar9 != -1;
  }
  fVar5 = DAT_180380bb0;
  if ((cVar7 == '\b') || (bVar24)) {
    cVar8 = '\0';
    DAT_1803e8118._0_2_ = 0;
    if (bVar24) {
      uVar19 = 7;
    }
    else {
      if (cVar7 != '\b') goto LAB_180148ecc;
      uVar19 = 0;
    }
  }
  else {
    if ((((DAT_1803e8118._2_1_ == '\0') || (bVar22 != 0)) || (fVar25 <= DAT_1803810ec)) ||
       ('\x01' < cVar6)) {
      cVar8 = (char)DAT_1803e8118;
      if ((char)DAT_1803e8118 != '\0') {
        if (bVar22 != 0) goto LAB_180148e92;
LAB_180148e99:
        if (cVar8 == '\0') goto LAB_180148ecc;
        fVar25 = DAT_1803e8120;
        if (cVar6 < '\x02') goto LAB_180148eab;
LAB_180148ebd:
        cVar8 = '\0';
        DAT_1803e8118._0_2_ = (ushort)DAT_1803e8118 & 0xff00;
        DAT_1803e8124 = -1;
        goto LAB_180148ecc;
      }
      if (bVar22 != 0) {
LAB_180148e92:
        DAT_1803e8118._0_2_ = (ushort)DAT_1803e8118 & 0xff;
        goto LAB_180148e99;
      }
      if (cVar6 < '\x01') {
        if (DAT_1803e8118._1_1_ == '\0') {
          DAT_1803e8118._0_2_ = 0x100;
          _DAT_1803e811c = CONCAT44(DAT_1803e8120,fVar34);
        }
        else if ((0.0 < fVar34 - DAT_1803e811c) && (fVar30 < DAT_180380a58)) {
          cVar8 = '\x01';
          DAT_1803e8118._0_2_ = CONCAT11(DAT_1803e8118._1_1_,1);
          _DAT_1803e811c = _DAT_1803e811c & 0xffffffff;
          fVar25 = 0.0;
          goto LAB_180148eab;
        }
      }
LAB_180148ed1:
      if (DAT_1803812f0 <= fVar29 * fVar29) {
        uVar19 = 6;
        goto LAB_180148f56;
      }
    }
    else {
      cVar8 = '\x01';
      DAT_1803e8118._0_2_ = CONCAT11(DAT_1803e8118._1_1_,1);
      _DAT_1803e811c = CONCAT44(fVar34,DAT_1803e811c);
      DAT_1803e8128 = 0.0;
      DAT_1803e8124 = -1;
      fVar25 = fVar34;
LAB_180148eab:
      if (DAT_180380a3c < fVar34 - fVar25) {
        if (bVar22 != 0) goto LAB_180148ebd;
        goto LAB_180148ed1;
      }
LAB_180148ecc:
      if (bVar22 == 0) goto LAB_180148ed1;
    }
    if (cVar8 == '\0') {
      if ((cVar6 < '\x02') || (bVar22 != 0)) {
        if (local_1f4 == 0) {
          if (fVar30 <= _DAT_1803812bc) {
            uVar19 = 0;
            if (DAT_180380a58 < fVar30) {
              uVar19 = 1;
            }
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          uVar19 = (ulonglong)((DAT_180380a58 < fVar30) + 3);
        }
      }
      else {
        uVar19 = 6;
      }
    }
    else {
      uVar19 = 5;
    }
  }
LAB_180148f56:
  iVar9 = (&DAT_180339600)[uVar19 * 4];
  if (iVar9 < 0) {
    DAT_1803e8118._2_1_ = bVar22;
    return 0;
  }
  if (*(int *)(&DAT_1803e8140 + (longlong)iVar9 * 0x28) < 0) {
    iVar9 = (&DAT_180339604)[uVar19 * 4];
    if (iVar9 < 0) {
      DAT_1803e8118._2_1_ = bVar22;
      return 0;
    }
    if (*(int *)(&DAT_1803e8140 + (longlong)iVar9 * 0x28) < 0) {
      iVar9 = (&DAT_180339608)[uVar19 * 4];
      if (iVar9 < 0) {
        DAT_1803e8118._2_1_ = bVar22;
        return 0;
      }
      if (*(int *)(&DAT_1803e8140 + (longlong)iVar9 * 0x28) < 0) {
        iVar9 = *(int *)(&UNK_18033960c + uVar19 * 0x10);
        if (iVar9 < 0) {
          DAT_1803e8118._2_1_ = bVar22;
          return 0;
        }
        if (*(int *)(&DAT_1803e8140 + (longlong)iVar9 * 0x28) < 0) {
          DAT_1803e8118._2_1_ = bVar22;
          return 0;
        }
      }
    }
  }
  lVar3 = (longlong)iVar9 * 5 + 2;
  lVar1 = lVar3 * 8;
  puVar2 = &DAT_1803e8130 + lVar3;
  if (puVar2 == (undefined8 *)0x0) {
    DAT_1803e8118._2_1_ = bVar22;
    return 0;
  }
  fVar30 = (float)(&DAT_1803e8138)[lVar3 * 2];
  if (fVar30 <= DAT_180380bb0) {
    fVar30 = *(float *)(&DAT_18033c3a0 + (longlong)iVar9 * 4);
  }
  fVar25 = DAT_180380bb0;
  if ((DAT_180380a3c < fVar29) && (DAT_180380bb0 < fVar30)) {
    fVar25 = fVar29 / fVar30;
  }
  fVar26 = DAT_180380d30;
  if (fVar25 <= DAT_180380d30) {
    fVar26 = fVar25;
  }
  fVar25 = fVar26;
  if (cVar6 < '\x02') {
    if ((bVar22 == 0) && (DAT_180381278 <= fVar29)) {
      fVar25 = DAT_1803809ec;
    }
  }
  else {
    fVar25 = DAT_180380ac0;
    if (DAT_180380ac0 <= fVar26) {
      fVar25 = fVar26;
    }
  }
  if (DAT_1803e812c < 0.0) {
    fVar29 = 0.0;
  }
  else {
    fVar29 = fVar34 - DAT_1803e812c;
  }
  fVar26 = 0.0;
  if (0.0 <= fVar29) {
    fVar26 = fVar29;
  }
  fVar29 = DAT_180380a58;
  if (fVar26 <= DAT_180380a58) {
    fVar29 = fVar26;
  }
  if (iVar9 == 1) {
    if (DAT_1803e8124 != 2) {
LAB_1801490af:
      bVar24 = false;
      goto LAB_1801490b1;
    }
  }
  else if ((iVar9 != 2) || (DAT_1803e8124 != 1)) goto LAB_1801490af;
  bVar24 = true;
LAB_1801490b1:
  if ((iVar9 != DAT_1803e8124) && (!bVar24)) {
    DAT_1803e8128 = 0.0;
  }
  fVar29 = DAT_1803e8128 + fVar29 * *(float *)((longlong)&DAT_1803e8130 + lVar1 + 4) * fVar25;
  DAT_1803e8118._2_1_ = bVar22;
  DAT_1803e8124 = iVar9;
  DAT_1803e8128 = fVar29;
  DAT_1803e812c = fVar34;
  if ((&DAT_1803e813c)[lVar1] == '\0') {
    if (DAT_180380ba0 < fVar29) {
      DAT_1803e8128 = 0.999;
    }
  }
  else {
    fVar26 = floorf(fVar29);
    DAT_1803e8128 = fVar29 - fVar26;
  }
  fVar29 = local_1f8;
  fVar33 = 0.0;
  fVar26 = fVar32;
  if ((-1 < *(int *)(&DAT_1803e8140 + lVar1)) || (iVar21 = -1, -1 < *(int *)(lVar1 + 0x1803e8144)))
  {
    if (local_1f8 <= DAT_180380fcc) {
      fVar29 = 0.0;
      fVar27 = 0.0;
    }
    else {
      local_e8._4_4_ = 0.0;
      uStack_e0 = 0;
      local_e8._0_4_ = 0;
      (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_e8);
      fVar27 = atan2f((float)local_f0,local_1f0._0_4_);
      for (fVar31 = fVar27 * DAT_1803810bc - local_e8._4_4_; DAT_180381188 < fVar31;
          fVar31 = fVar31 + DAT_180381424) {
      }
      for (; fVar31 < DAT_180381420; fVar31 = fVar31 + DAT_18038120c) {
      }
      fVar27 = fVar5;
      if (fVar5 < fVar30) {
        fVar27 = fVar29 / fVar30;
      }
      fVar28 = fVar5;
      if (fVar27 <= fVar5) {
        fVar28 = fVar27;
      }
      fVar29 = 0.0;
      if (0.0 <= fVar28) {
        fVar29 = fVar28;
      }
      fVar31 = fVar31 * DAT_180380994;
      fVar27 = cosf(fVar31);
      fVar27 = fVar27 * fVar29;
      fVar31 = sinf(fVar31);
      fVar29 = (float)((uint)fVar31 ^ DAT_1803817f0) * fVar29;
    }
    iVar21 = *(int *)(&DAT_1803e8140 + lVar1);
    if (-1 < iVar21) {
      fVar31 = *(float *)(lVar1 + 0x1803e814c) - *(float *)(lVar1 + 0x1803e8148);
      iVar23 = iVar21;
      if ((fVar31 <= DAT_18038131c) || (fVar33 = DAT_180380ac0, DAT_180380948 <= fVar31)) {
        fVar31 = (fVar27 - *(float *)(lVar1 + 0x1803e8148)) / fVar31;
        if (0.0 <= fVar31) {
          fVar33 = fVar5;
          if (fVar31 <= fVar5) {
            fVar33 = fVar31;
          }
        }
        else {
          fVar33 = 0.0;
        }
      }
    }
    iVar4 = *(int *)(lVar1 + 0x1803e8144);
    iVar21 = -1;
    if (-1 < iVar4) {
      fVar27 = *(float *)(lVar1 + 0x1803e8154) - *(float *)(&DAT_1803e8150 + lVar1);
      iVar21 = iVar4;
      if ((((fVar27 <= DAT_18038131c) || (fVar26 = DAT_180380ac0, DAT_180380948 <= fVar27)) &&
          (fVar27 = (fVar29 - *(float *)(&DAT_1803e8150 + lVar1)) / fVar27, fVar26 = fVar32,
          0.0 <= fVar27)) && (fVar26 = fVar5, fVar27 <= fVar5)) {
        fVar26 = fVar27;
      }
    }
  }
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  local_220 = 0;
  FUN_18001d080(&local_238,"DT_BaseAnimating",0x10);
  local_180 = &local_238;
  local_188 = (undefined8 *)local_1b8;
  uVar17 = FUN_18016d4c0(local_1b8,&local_238);
  uVar17 = FUN_180018ef0(&DAT_1803fac80,uVar17);
  FUN_18020e450(&local_238);
  local_190 = &local_218;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  local_200 = 0;
  FUN_18001d080(&local_218,"m_nSequence",0xb);
  local_198 = (undefined8 **)&local_218;
  local_f8 = local_168;
  uVar18 = FUN_18016d4c0(local_168,&local_218);
  uVar10 = FUN_180018c10(uVar17,uVar18);
  local_f0 = CONCAT44(local_f0._4_4_,uVar10);
  FUN_18020e450(&local_218);
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  local_200 = 0;
  FUN_18001d080(&local_218,"DT_BaseAnimating",0x10);
  local_1f0 = &local_218;
  local_148 = local_168;
  uVar17 = FUN_18016d4c0(local_168,&local_218);
  uVar17 = FUN_180018ef0(&DAT_1803fac80,uVar17);
  FUN_18020e450(&local_218);
  local_140 = &local_238;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  local_220 = 0;
  FUN_18001d080(&local_238,"m_flCycle",9);
  local_138 = &local_238;
  local_178 = local_1b8;
  uVar18 = FUN_18016d4c0(local_1b8,&local_238);
  uVar10 = FUN_180018c10(uVar17,uVar18);
  local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,uVar10);
  FUN_18020e450(&local_238);
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  local_200 = 0;
  FUN_18001d080(&local_218,"DT_BaseAnimating",0x10);
  local_130 = &local_218;
  local_128 = local_168;
  uVar17 = FUN_18016d4c0(local_168,&local_218);
  uVar17 = FUN_180018ef0(&DAT_1803fac80,uVar17);
  FUN_18020e450(&local_218);
  local_120 = &local_238;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  local_220 = 0;
  FUN_18001d080(&local_238,"m_flPoseParameter",0x11);
  local_118 = &local_238;
  local_170 = local_1b8;
  uVar18 = FUN_18016d4c0(local_1b8,&local_238);
  uVar10 = FUN_180018c10(uVar17,uVar18);
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,uVar10);
  FUN_18020e450(&local_238);
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  local_200 = 0;
  FUN_18001d080(&local_218,"DT_BaseAnimating",0x10);
  local_110 = &local_218;
  local_108 = local_168;
  uVar17 = FUN_18016d4c0(local_168,&local_218);
  uVar17 = FUN_180018ef0(&DAT_1803fac80,uVar17);
  FUN_18020e450(&local_218);
  local_100 = &local_238;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  local_220 = 0;
  FUN_18001d080(&local_238,"m_flPlaybackRate",0x10);
  local_1d8 = &local_238;
  local_e8 = local_1b8;
  uVar18 = FUN_18016d4c0(local_1b8,&local_238);
  FUN_180018c10(uVar17,uVar18);
  FUN_18020e450(&local_238);
  fVar32 = DAT_1803e8128;
  if ((float)local_f0 != 0.0) {
    if (local_1f0._0_4_ != 0.0) {
      local_298 = (double)(longlong)(int)local_f8;
      if ((int)local_f8 != 0) {
        local_260 = (double)CONCAT44(local_260._4_4_,fVar26);
        local_270 = (double)CONCAT44(local_270._4_4_,fVar33);
        local_280 = (double)CONCAT44(local_280._4_4_,fVar25);
        local_288 = (double)CONCAT44(local_288._4_4_,DAT_1803e8128);
        local_290 = (double)CONCAT44(local_290._4_4_,*(undefined4 *)puVar2);
        local_278 = iVar23;
        local_268 = iVar21;
        FUN_180148a10(param_1,(longlong)(int)(float)local_f0,(longlong)(int)local_1f0._0_4_);
        DAT_1803e8280 = 1;
        DAT_1803e8284 = *(undefined4 *)puVar2;
        DAT_1803e8288 = fVar32;
        DAT_1803e828c = fVar25;
        DAT_1803e8290 = iVar23;
        DAT_1803e8294 = iVar21;
        DAT_1803e8298 = fVar33;
        DAT_1803e829c = fVar26;
        if (fVar5 < fVar34 - _DAT_18042584c) {
          local_258 = (double)local_1f8;
          local_260 = (double)fVar26;
          local_270 = (double)fVar33;
          local_280 = (double)fVar25;
          local_288 = (double)fVar30;
          local_290 = (double)(float)(&DAT_1803e8138)[lVar3 * 2];
          local_298 = (double)*(float *)((longlong)&DAT_1803e8130 + lVar1 + 4);
          local_240 = (uint)((char)DAT_1803e8118 != '\0');
          local_248 = (uint)(local_1f4 != 0);
          local_250 = (uint)bVar22;
          _DAT_18042584c = fVar34;
          local_278 = iVar23;
          local_268 = iVar21;
          FUN_180014410("[Toolbox-drv] slot=%d seq=%d cyc=%.3f cps=%.2f gs=%.0f(eff %.0f) rate=%.2f pose=(%d:%.2f, %d:%.2f) spd=%.0f ground=%d duck=%d jump=%d\n"
                        ,iVar9,DAT_1803e8284,(double)fVar32);
        }
        return 1;
      }
    }
  }
  return 0;
}


