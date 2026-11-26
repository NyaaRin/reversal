// 0x180092570  Features_Weapons_Backends_ZSWeaponBackend_vfunc04
// size=3410 thunk=false
// signature: undefined Features_Weapons_Backends_ZSWeaponBackend_vfunc04()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180092886) */
/* WARNING: Removing unreachable block (ram,0x0001800928a1) */
/* WARNING: Removing unreachable block (ram,0x000180092898) */
/* WARNING: Removing unreachable block (ram,0x0001800928b0) */

float * Features_Weapons_Backends_ZSWeaponBackend_vfunc04
                  (longlong *param_1,float *param_2,longlong param_3,int *param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double _X;
  double _Y;
  bool bVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  double *pdVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 extraout_var [12];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auStack_238 [32];
  float *local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  uint local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  char local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  int local_1a8;
  int local_1a4;
  float local_1a0;
  int local_19c;
  int local_198;
  double local_190;
  undefined8 *local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  char local_158;
  undefined8 local_150;
  int local_148;
  undefined1 uStack_144;
  undefined2 local_143;
  undefined1 local_141;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  float local_128;
  undefined8 local_120;
  undefined4 uStack_118;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f0;
  float local_e8;
  ulonglong local_e0;
  undefined8 extraout_XMM0_Qb;
  
  local_e0 = DAT_1803da4c0 ^ (ulonglong)auStack_238;
  if ((param_4 == (int *)0x0) || ((int)param_1[6] != *param_4)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  local_110 = param_4;
  local_100 = param_1;
  local_f0 = param_2;
  if (((*(char *)((longlong)param_1 + 0xc) == '\0') || (param_3 == 0)) || (param_4 == (int *)0x0)) {
    pcVar9 = "disabled";
    if (DAT_1803fd088 == "disabled") {
      DAT_1804007d4 = DAT_1804007d4 + 1;
      uVar7 = DAT_1804007d4 & 0x8000003f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
      }
      if (uVar7 != 0) goto LAB_1800932a0;
    }
    iVar11 = (int)param_1[1];
    goto LAB_18009326e;
  }
  if ((bVar4) || (cVar6 = (**(code **)(*param_1 + 0x40))(param_1,param_3), cVar6 != '\0')) {
    uVar22 = 0;
    uVar23 = 0;
    local_1ac = 0.0;
    if (((((int)param_1[0xc] != *param_4) ||
         (fVar5 = *(float *)((longlong)param_1 + 0x5c), *(float *)((longlong)param_1 + 0x5c) <= 0.0)
         ) && (cVar6 = FUN_18008f000(), fVar5 = local_1ac, cVar6 == '\0')) ||
       (local_1ac = fVar5, fVar5 = local_1ac, local_1ac <= 0.0)) {
      pcVar9 = "no-cone";
      goto LAB_180092647;
    }
    local_1a4 = (int)param_1[0xc];
    local_1a8 = *param_4;
    dVar27 = 0.0;
    local_190 = 0.0;
    local_130 = 0.0;
    local_1b4 = 0.0;
    local_1b0 = 0.0;
    plVar1 = param_1 + 1;
    iVar11 = (int)*plVar1;
    local_198 = local_1a4;
    local_140 = plVar1;
    if (iVar11 == 2) {
      if (*(char *)((longlong)param_1 + 0xf) == '\0') {
        local_218 = (float *)&local_130;
        cVar6 = FUN_18008fdd0(param_1,param_4[1],SUB84((double)local_1ac,0),&local_190);
        if (cVar6 == '\0') {
          pcVar9 = "sunrust-sample";
          goto LAB_180092777;
        }
      }
LAB_180092a12:
      local_19c = local_1a8;
      if ((int)DAT_1803fe6a4 < 0x28) {
LAB_180092a43:
        cVar6 = '\x01';
      }
      else {
        uVar7 = DAT_1803fe6a4 & 0x80000007;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
        }
        if (uVar7 == 0) goto LAB_180092a43;
        cVar6 = '\0';
      }
      DAT_1803fe6a4 = DAT_1803fe6a4 + 1;
      local_1a0 = -999.0;
      if (DAT_1803fa608 != 0) {
        uVar22 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
        uVar23 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
      }
      local_1b8 = cVar6;
      dVar16 = (double)FUN_18001eff0(param_3);
      iVar11 = local_1a8;
      local_1a0 = (float)(dVar16 - (double)CONCAT44(uVar23,uVar22));
      local_150 = *(longlong *)(param_4 + 2);
      local_148 = param_4[4];
      if ((*(char *)((longlong)param_4 + 0x3e) == '\0') ||
         (fVar24 = (float)param_4[0x10],
         (float)param_4[0x11] * (float)param_4[0x11] + fVar24 * fVar24 +
         (float)param_4[0x12] * (float)param_4[0x12] <= DAT_180380938)) {
        if ((((int)*plVar1 == 2) &&
            (((DAT_1803db4c0 == *param_4 && (((uint)DAT_1803db4b4 & 0x7f800000) != 0x7f800000)) &&
             (((uint)DAT_1803db4b8 & 0x7f800000) != 0x7f800000)))) &&
           ((DAT_1803db4bc & 0x7f800000) != 0x7f800000)) {
          local_150._4_4_ = (float)((ulonglong)local_150 >> 0x20);
          local_150 = CONCAT44(local_150._4_4_ + DAT_1803db4b8,(float)local_150 + DAT_1803db4b4);
        }
      }
      else {
        FUN_1802d4540(param_4 + 0x10,&local_150);
      }
      local_148 = 0;
      uVar22 = FUN_1802d3e00();
      local_150 = CONCAT44(local_150._4_4_,uVar22);
      uVar22 = FUN_1802d3e00();
      fVar15 = DAT_180380994;
      local_150 = CONCAT44(uVar22,(float)local_150);
      fVar24 = local_1b4;
      fVar14 = local_1b0;
      if ((int)*plVar1 == 1) {
LAB_180092c2d:
        fVar24 = fVar24 * DAT_180380994;
        fVar13 = tanf(fVar14 * DAT_180380994);
        fVar14 = cosf(fVar24);
        fVar14 = fVar14 * fVar13;
        fVar24 = sinf(fVar24);
        auVar25._4_4_ = extraout_var._0_4_;
        auVar25._0_4_ = fVar24;
        auVar25._8_4_ = extraout_var._4_4_;
        auVar25._12_4_ = extraout_var._8_4_;
        auVar26._4_12_ = auVar25._4_12_;
        auVar26._0_4_ = fVar24 * fVar13;
      }
      else {
        if (*(char *)((longlong)param_1 + 0xf) != '\0') {
          fVar24 = *(float *)(param_1 + 2);
          fVar14 = fVar5 * *(float *)((longlong)param_1 + 0x14);
          goto LAB_180092c2d;
        }
        fVar14 = (float)local_190;
        auVar26 = ZEXT416((uint)(float)local_130);
      }
      local_1b0 = 1.0;
      local_1b4 = 1.0;
      FUN_18008f4c0(&local_1b0,&local_1b4);
      dVar18 = DAT_180380d08;
      fVar14 = local_1b0 * fVar14;
      fVar24 = local_1b4 * auVar26._0_4_;
      _Y = (double)fVar14;
      _X = (double)fVar24;
      dVar16 = _Y * _Y + DAT_180380d08 + _X * _X;
      if (dVar16 < 0.0) {
        dVar16 = sqrt(dVar16);
      }
      else {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = dVar16;
        auVar26 = sqrtpd(auVar26,auVar2);
        dVar16 = auVar26._0_8_;
      }
      auVar19._0_8_ = sin((double)((float)local_150 * fVar15));
      auVar19._8_8_ = extraout_XMM0_Qb;
      dVar17 = _X * _X + dVar18;
      if (dVar17 < 0.0) {
        dVar17 = sqrt(dVar17);
      }
      else {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = dVar17;
        auVar26 = sqrtpd(auVar19,auVar3);
        dVar17 = auVar26._0_8_;
      }
      local_140 = (longlong *)((dVar16 * auVar19._0_8_) / dVar17);
      local_120._0_4_ = SUB84(dVar18,0);
      local_120._4_4_ = (undefined4)((ulonglong)dVar18 >> 0x20);
      pdVar8 = (double *)&local_140;
      if (dVar18 <= (double)local_140) {
        pdVar8 = (double *)&local_120;
      }
      dVar16 = *pdVar8;
      if (*pdVar8 <= DAT_1803813b0) {
        dVar16 = DAT_1803813b0;
      }
      dVar16 = asin(dVar16);
      dVar18 = atan(_X);
      local_140 = (longlong *)(dVar16 + dVar18);
      local_120._0_4_ = SUB84(DAT_180380d20,0);
      local_120._4_4_ = (undefined4)((ulonglong)DAT_180380d20 >> 0x20);
      pdVar8 = (double *)&local_140;
      if (DAT_180380d20 <= dVar16 + dVar18) {
        pdVar8 = (double *)&local_120;
      }
      dVar16 = *pdVar8;
      uVar22 = SUB84(dVar16,0);
      uVar23 = (undefined4)((ulonglong)dVar16 >> 0x20);
      if (dVar16 <= DAT_1803813b8) {
        uVar22 = SUB84(DAT_1803813b8,0);
        uVar23 = (undefined4)((ulonglong)DAT_1803813b8 >> 0x20);
      }
      dVar16 = sin((double)CONCAT44(uVar23,uVar22));
      dVar18 = cos((double)CONCAT44(uVar23,uVar22));
      atan2(_Y,dVar16 * _X + dVar18);
      fVar15 = (float)FUN_1802d3e00((float)(double)CONCAT44(uVar23,uVar22) * DAT_1803810bc);
      FUN_1802d3e00();
      fVar15 = (float)FUN_1802d3e00((float)local_150 - fVar15);
      fVar13 = (float)FUN_1802d3e00();
      local_140._0_4_ = (float)local_150 - fVar15;
      local_140._4_4_ = local_150._4_4_ - fVar13;
      local_138 = 0;
      uVar22 = FUN_1802d3e00();
      local_140 = (longlong *)CONCAT44(local_140._4_4_,uVar22);
      uVar22 = FUN_1802d3e00();
      local_140 = (longlong *)CONCAT44(uVar22,(float)local_140);
      FUN_1802d3e70(&local_140,&local_100,&local_f0,&local_110);
      fVar21 = (float)local_f0 * fVar14 + (float)local_100 + (float)local_110 * fVar24;
      fVar20 = local_f0._4_4_ * fVar14 + local_100._4_4_ + local_110._4_4_ * fVar24;
      local_130 = (double)CONCAT44(fVar20,fVar21);
      local_128 = local_e8 * fVar14 + local_f8 + local_108 * fVar24;
      fVar24 = DAT_180381384;
      if (DAT_180380938 <= fVar20 * fVar20 + fVar21 * fVar21 + local_128 * local_128) {
        local_120._4_4_ = 0;
        uStack_118 = 0;
        local_120._0_4_ = 0.0;
        FUN_1802d4540(&local_130,&local_120);
        fVar24 = (float)FUN_1802d3e00((float)local_120 - (float)local_150);
        fVar14 = (float)FUN_1802d3e00();
        fVar24 = fVar14 * fVar14 + fVar24 * fVar24;
        if (fVar24 < 0.0) {
          fVar24 = sqrtf(fVar24);
        }
        else {
          fVar24 = SQRT(fVar24);
        }
        if (DAT_1803809c4 < fVar24) {
          DAT_1803ffd78 = DAT_1803ffd78 + 1;
          uVar7 = DAT_1803ffd78 & 0x8000001f;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
          }
          if (uVar7 == 1) {
            local_200 = (double)fVar13;
            local_208 = (double)fVar15;
            local_210 = (double)local_150._4_4_;
            local_218 = (float *)(double)(float)local_150;
            FUN_180014410(&DAT_180349020,(double)fVar24,_Y,_X);
          }
        }
      }
      if (cVar6 == '\0') {
        *param_2 = fVar15;
        param_2[1] = fVar13;
      }
      else {
        local_130 = 0.0;
        cVar6 = FUN_18008f970(&local_130);
        local_1c8 = (double)fVar13;
        local_1d0 = (double)fVar15;
        iVar10 = 0;
        local_1f0 = (double)fVar5;
        if ((int)*plVar1 == 3) {
          iVar10 = 2;
        }
        if (cVar6 != '\0') {
          dVar27 = (double)param_4[1] - local_130;
        }
        local_1c0 = (double)fVar24;
        local_1f8 = (double)local_1a0;
        local_218 = (float *)&DAT_18033e9cc;
        if (cVar6 != '\0') {
          local_218 = (float *)&DAT_18033e5ea;
        }
        local_1e8 = (uint)(local_1a4 == iVar11);
        local_200 = (double)CONCAT44(local_200._4_4_,iVar10 + param_4[1]);
        local_210 = local_130;
        local_208 = dVar27;
        local_1e0 = _Y;
        local_1d8 = _X;
        FUN_180014410("[ZS-SHOT] #%d cmd=%d tick=%d luaSeed=%s%.0f gap=%+.0f ourSeed=%d next=%+.4f cone=%.5f snap=%d h=%.6f v=%.6f comp=(%.4f,%.4f) resid=%.5f\n"
                      ,DAT_1803fe6a4,*param_4);
        *param_2 = fVar15;
        param_2[1] = fVar13;
      }
      goto LAB_1800932a7;
    }
    if (iVar11 == 3) {
      if (*(char *)((longlong)param_1 + 0xf) == '\0') {
        local_218 = (float *)&local_130;
        cVar6 = FUN_180090600(param_1,param_4[1],SUB84((double)local_1ac,0),&local_190);
        if (cVar6 == '\0') {
          pcVar9 = "midnight-sample";
          goto LAB_180092777;
        }
        goto LAB_180092a12;
      }
      pcVar9 = "midnight-pattern";
      if (DAT_1803fd088 == "midnight-pattern") {
        DAT_1804007d4 = DAT_1804007d4 + 1;
        uVar7 = DAT_1804007d4 & 0x8000003f;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
        }
        if (uVar7 != 0) goto LAB_1800932a0;
      }
      iVar11 = 3;
      goto LAB_18009326e;
    }
    if (iVar11 != 1) {
      pcVar9 = "no-dialect";
      if (DAT_1803fd088 != "no-dialect") goto LAB_18009326e;
      DAT_1804007d4 = DAT_1804007d4 + 1;
      uVar7 = DAT_1804007d4 & 0x8000003f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
      }
      if (uVar7 == 0) goto LAB_18009326e;
      goto LAB_1800932a0;
    }
    if (DAT_1803fa678 != 0) {
      local_188 = (undefined8 *)0x0;
      uStack_180 = 0;
      local_178 = 0;
      FUN_18001bcd0();
      if (local_188 != (undefined8 *)0x0) {
        FUN_18002dc30(&local_170,local_188[1]);
        local_218 = &local_1b4;
        cVar6 = FUN_180090d50(local_188,"bulletrotate0",0,DAT_18038120c);
        if (cVar6 == '\0') {
LAB_180092967:
          bVar4 = false;
        }
        else {
          local_218 = &local_1b0;
          cVar6 = FUN_180090d50(local_188,"bulletangle0",(uint)fVar5 ^ DAT_1803817f0,fVar5);
          if (cVar6 == '\0') goto LAB_180092967;
          bVar4 = true;
        }
        if ((local_158 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
          (*DAT_1803faf78)(local_170,local_168,local_160,local_15c);
        }
        if (local_188 != (undefined8 *)0x0) {
          (**(code **)*local_188)();
          DAT_1803fa338 = local_178 != 0;
          DAT_1803fa330 = local_150;
          if ((bool)DAT_1803fa338) {
            DAT_1803fa330 = local_178;
          }
          DAT_1803fa339 = CONCAT13(uStack_144,local_148._1_3_);
          DAT_1803fa33d = local_143;
          DAT_1803fa33f = local_141;
        }
        if (bVar4) goto LAB_180092a12;
      }
    }
    pcVar9 = "legacy-sample";
LAB_180092777:
    if (DAT_1803fd088 == pcVar9) {
      DAT_1804007d4 = DAT_1804007d4 + 1;
      uVar7 = DAT_1804007d4 & 0x8000003f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
      }
      if (uVar7 != 0) goto LAB_1800932a0;
    }
    iVar11 = (int)*plVar1;
LAB_18009326e:
    DAT_1804007d4 = 0;
    puVar12 = &DAT_1803de118;
    if (0xf < DAT_1803de130) {
      puVar12 = DAT_1803de118;
    }
    DAT_1803fd088 = pcVar9;
    FUN_180014410("[ZS-SHOT] SKIP (%s) mode=%d class=%s\n",pcVar9,iVar11,puVar12);
  }
  else {
    pcVar9 = "not-ready";
LAB_180092647:
    if (DAT_1803fd088 != pcVar9) {
LAB_180092674:
      iVar11 = (int)param_1[1];
      goto LAB_18009326e;
    }
    DAT_1804007d4 = DAT_1804007d4 + 1;
    uVar7 = DAT_1804007d4 & 0x8000003f;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
    }
    if (uVar7 == 0) goto LAB_180092674;
  }
LAB_1800932a0:
  param_2[0] = 0.0;
  param_2[1] = 0.0;
LAB_1800932a7:
  param_2[2] = 0.0;
  return param_2;
}


