// 0x1800e2580  Features_Triggerbot_TriggerbotFeature_vfunc02
// size=3336 thunk=false
// signature: undefined Features_Triggerbot_TriggerbotFeature_vfunc02()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Triggerbot_TriggerbotFeature_vfunc02
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  BOOL BVar8;
  int iVar9;
  BOOL BVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong *plVar13;
  char *pcVar14;
  int *piVar15;
  longlong lVar16;
  ulonglong *puVar17;
  longlong *plVar18;
  longlong *lp;
  undefined8 uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar29;
  double dVar28;
  float fVar30;
  undefined4 uVar31;
  undefined1 auStack_278 [32];
  undefined8 *local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  char local_228;
  char local_227;
  char local_226;
  int local_224;
  int local_220;
  ulonglong local_218;
  longlong local_210;
  longlong *local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined **local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  longlong local_148;
  undefined8 local_140;
  float local_138;
  undefined8 local_130;
  undefined4 local_128;
  float local_120;
  float local_11c;
  float local_118;
  ulonglong local_110;
  undefined4 local_108;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined1 local_af;
  ulonglong local_a8;
  ulonglong uVar22;
  
  local_a8 = DAT_1803da4c0 ^ (ulonglong)auStack_278;
  iVar24 = DAT_1803fd0c0 + 1;
  iVar25 = (iVar24 / 200) * 200;
  local_218 = CONCAT71(local_218._1_7_,iVar24 == iVar25);
  local_148 = -0x6c02a9e56954f399;
  local_140 = 0x574fa339fade2366;
  DAT_1803fd0c0 = iVar24;
  local_210 = param_1;
  local_1f8 = param_3;
  plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1f0,&local_148);
  plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_130,&local_140);
  pcVar14 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
  if (*pcVar14 == '\0') {
    return;
  }
  local_148 = -0x6c02a9e56954f399;
  local_140 = 0xcef5d8b14b3154d9;
  plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1f0,&local_148);
  plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_130,&local_140);
  piVar15 = (int *)FUN_1802029c0(*plVar13 + 0x28);
  iVar9 = *piVar15;
  if (0 < iVar9) {
    if (0xfe < iVar9) {
      return;
    }
    cVar5 = FUN_180024540();
    if (cVar5 == '\0') {
      return;
    }
    if (DAT_1803fa545 != '\0') {
      return;
    }
    cVar5 = FUN_1800245f0(iVar9);
    if (cVar5 == '\0') {
      return;
    }
  }
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar16 = (*pcVar1)(DAT_1803fa360,uVar7);
  if (lVar16 == 0) {
    return;
  }
  uVar23 = 0;
  uVar7 = 0;
  uVar22 = uVar23;
  do {
    local_148 = lVar16;
    if (0x80 < uVar22) {
                    /* WARNING: Subroutine does not return */
      FUN_1802d8348();
    }
    (&DAT_1804097b0)[uVar22] = 0;
    uVar21 = (int)uVar22 + 1;
    uVar22 = (ulonglong)uVar21;
  } while ((int)uVar21 < 0x81);
  cVar5 = FUN_18003a090("Triggerbot_IgnoreEntities");
  if (cVar5 != '\0') {
    FUN_1801fd250("Triggerbot_IgnoreEntities");
  }
  if (DAT_1803fa545 != '\0') {
    return;
  }
  cVar5 = FUN_180071a30();
  if (cVar5 != '\0') goto LAB_1800e307f;
  if (0 < *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    return;
  }
  local_224 = iVar24;
  local_220 = iVar25;
  if (DAT_1803fa610 == (longlong *)0x0) {
    if (iVar24 != iVar25) {
      return;
    }
    pcVar14 = "[TB] g_pEngineTrace is NULL!\n";
    goto LAB_1800e27dc;
  }
  if (param_4 == 0) {
    param_4 = param_3;
  }
  local_110 = *(ulonglong *)(param_4 + 8);
  local_108 = *(undefined4 *)(param_4 + 0x10);
  FUN_18001c430(lVar16,&local_140);
  puVar17 = (ulonglong *)(param_3 + 8);
  if (param_3 == 0) {
    puVar17 = &local_110;
  }
  local_130 = *puVar17;
  fVar30 = (float)local_130;
  local_128 = (undefined4)puVar17[1];
  cVar5 = FUN_1800732a0(&local_130,&local_140,&local_120);
  if (cVar5 == '\0') {
    FUN_1802d4050(&local_110,&local_120);
    puVar17 = (ulonglong *)FUN_18001c430(lVar16,local_1f0);
    local_140 = *puVar17;
    local_138 = *(float *)(puVar17 + 1);
  }
  fVar4 = local_138;
  local_b8 = 0;
  fVar2 = (float)local_140;
  local_e8 = (local_120 * DAT_1803812a4 + (float)local_140) - (float)local_140;
  fVar3 = local_140._4_4_;
  local_e4 = (local_11c * DAT_1803812a4 + local_140._4_4_) - local_140._4_4_;
  local_e0 = (local_118 * DAT_1803812a4 + local_138) - local_138;
  fVar26 = (float)(*(code *)PTR_FUN_1803da018)();
  local_af = fVar26 != 0.0;
  local_c4 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 1;
  local_d4 = 0;
  local_d8 = 0;
  local_f8 = fVar2;
  local_f4 = fVar3;
  local_f0 = fVar4;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  plStack_160 = (longlong *)0x0;
  local_158 = 0;
  local_1d0 = vftable_CDoubleTraceFilter;
  local_1c0 = DAT_1803ff0f0;
  local_258 = &local_1b8;
  local_1c8 = lVar16;
  (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,&local_f8,0x46004003,&local_1d0);
  if (iVar24 == iVar25) {
    pcVar14 = "eye";
    if (cVar5 != '\0') {
      pcVar14 = "MUZZLE";
    }
    local_248 = (double)CONCAT44(local_248._4_4_,(uint)local_188._7_1_);
    local_250 = (double)CONCAT44(local_250._4_4_,(uint)local_188._6_1_);
    local_258 = (undefined8 *)CONCAT44(local_258._4_4_,(undefined4)local_168);
    FUN_180014410("[TB] trace: ray=%s frac=%.3f hitEnt=%p hitgroup=%d allsolid=%d startsolid=%d\n",
                  pcVar14,(double)uStack_190._4_4_,plStack_160);
    local_238 = (double)local_118;
    local_240 = (double)local_11c;
    local_248 = (double)local_120;
    local_250 = (double)local_130._4_4_;
    local_258 = (undefined8 *)(double)fVar30;
    FUN_180014410("[TB] start=(%.0f,%.0f,%.0f) angles=(%.1f,%.1f) fwd=(%.3f,%.3f,%.3f)\n",
                  (double)fVar2,(double)fVar3,(double)fVar4);
  }
  plVar13 = plStack_160;
  local_208 = plStack_160;
  plVar18 = local_208;
  if ((((plStack_160 != (longlong *)0x0) &&
       (BVar8 = IsBadReadPtr(plStack_160,8), plVar18 = local_208, BVar8 == 0)) &&
      (BVar8 = IsBadReadPtr((void *)*plVar13,8), plVar18 = local_208, BVar8 == 0)) &&
     (cVar5 = FUN_1800e2460(plVar13,lVar16), plVar18 = local_208, cVar5 == '\0')) {
    plVar18 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13);
    if (plVar18 != (longlong *)0x0) {
      uVar7 = (**(code **)(*plVar18 + 0x48))(plVar18);
    }
    local_130 = CONCAT44(local_130._4_4_,uVar7);
    iVar9 = FUN_180071b00(uVar7);
    local_140 = CONCAT44(local_140._4_4_,iVar9);
    plVar18 = local_208;
    if ((((0 < iVar9) && (DAT_1803fa360 != (longlong *)0x0)) &&
        ((lp = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar9),
         plVar18 = local_208, lp != (longlong *)0x0 &&
         ((BVar8 = IsBadReadPtr(lp,8), plVar18 = local_208, BVar8 == 0 &&
          (cVar5 = FUN_1800e2460(lp,lVar16), plVar18 = local_208, cVar5 != '\0')))))) &&
       (plVar13 = lp, plVar18 = lp, iVar24 == iVar25)) {
      FUN_180014410("[TB] body %d -> player %d\n",local_130 & 0xffffffff,local_140 & 0xffffffff);
    }
  }
  local_208 = plVar18;
  if ((uStack_190._4_4_ < DAT_180380bb0) || (plVar13 != (longlong *)0x0)) {
    cVar5 = FUN_1800e2460(plVar13,lVar16);
    if (cVar5 != '\0') {
      if ((((iVar24 == iVar25) && (plVar13 != (longlong *)0x0)) &&
          (BVar8 = IsBadReadPtr(plVar13,8), BVar8 == 0)) &&
         (BVar8 = IsBadReadPtr((void *)*plVar13,8), BVar8 == 0)) {
        plVar18 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13);
        if (plVar18 == (longlong *)0x0) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (**(code **)(*plVar18 + 0x48))(plVar18);
        }
        uVar11 = FUN_18001c560(plVar13);
        uVar12 = FUN_18001c680(plVar13);
        local_258 = (undefined8 *)CONCAT44(local_258._4_4_,uVar11);
        FUN_180014410("[TB] VALID target: ent=%p idx=%d hp=%d team=%d\n",plVar13,uVar7,uVar12);
      }
      if (plVar13 != *(longlong **)(param_1 + 8)) {
        *(longlong **)(param_1 + 8) = plVar13;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        uVar21 = rand();
        uVar21 = uVar21 & 0x80000003;
        if ((int)uVar21 < 0) {
          uVar21 = (uVar21 - 1 | 0xfffffffc) + 1;
        }
        *(uint *)(param_1 + 0x1c) = uVar21 + 2;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      local_140 = 0x93fd561a96ab0c67;
      local_130 = 0x324e861f12873f9a;
      plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1f0,&local_140);
      plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,local_1e0,&local_130);
      piVar15 = (int *)FUN_1802029c0(*plVar13 + 0x28);
      iVar9 = (int)((float)*piVar15 / DAT_180380fe4);
      if (iVar9 < 1) {
        iVar9 = 1;
      }
      local_130 = CONCAT44(local_130._4_4_,iVar9);
      local_227 = 0;
      uVar19 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
      uVar19 = FUN_180241610(uVar19,0x9653fa4f0c4e1755);
      pcVar14 = (char *)FUN_1801fcfc0(uVar19);
      local_228 = *pcVar14;
      local_227 = local_228;
      if (local_228 == '\0') {
        DAT_180400a28 = 0;
      }
      else {
        DAT_1804260e4 = DAT_1804260e4 + 1;
        iVar9 = rand();
        if (iVar9 % 0x14 + 10 < DAT_1804260e4) {
          iVar9 = rand();
          DAT_180400a28 = iVar9 % 5 + -2;
          DAT_1804260e4 = 0;
        }
      }
      iVar9 = DAT_180400a28 + (int)local_130;
      if (iVar9 < 1) {
        iVar9 = 1;
      }
      if (*(int *)(param_1 + 0x10) < iVar9) {
        if (iVar24 != iVar25) {
          return;
        }
        FUN_180014410("[TB] WAITING: holdTicks=%d delay=%d\n");
        return;
      }
      if ((local_228 != '\0') && (*(int *)(param_1 + 0x1c) <= *(int *)(param_1 + 0x18))) {
        uVar21 = rand();
        uVar21 = uVar21 & 0x80000007;
        if ((int)uVar21 < 0) {
          uVar21 = (uVar21 - 1 | 0xfffffff8) + 1;
        }
        *(uint *)(param_1 + 0x14) = uVar21 + 4;
        *(undefined4 *)(param_1 + 0x18) = 0;
        uVar21 = rand();
        uVar21 = uVar21 & 0x80000003;
        if ((int)uVar21 < 0) {
          uVar21 = (uVar21 - 1 | 0xfffffffc) + 1;
        }
        *(uint *)(param_1 + 0x1c) = uVar21 + 2;
        goto LAB_1800e307f;
      }
      lVar16 = FUN_18001dbf0(local_148);
      local_228 = '\0';
      local_148 = lVar16;
      if (lVar16 != 0) {
        cVar5 = FUN_1800e2410(lVar16);
        if (cVar5 == '\0') {
          if (iVar24 != iVar25) {
            return;
          }
          pcVar14 = "[TB] weapon does not fire bullets\n";
LAB_1800e27dc:
          FUN_180014410(pcVar14);
          return;
        }
        local_228 = FUN_1800e2330(lVar16);
        if (local_228 == '\0') {
          cVar5 = FUN_1800e2280(lVar16,local_218 & 0xff);
          if (cVar5 == '\0') {
            DAT_180409838 = 0.0;
            return;
          }
        }
        else {
          iVar9 = FUN_1800e2430();
          if (iVar9 == 0) {
            if (iVar24 != iVar25) {
              return;
            }
            pcVar14 = "[TB] auto: empty clip";
            goto LAB_1800e27dc;
          }
        }
      }
      local_226 = 0;
      uVar19 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
      uVar19 = FUN_180241610(uVar19,0x9653fa4f0c4e1755);
      pcVar14 = (char *)FUN_1801fcfc0(uVar19);
      if (*pcVar14 == '\0') {
LAB_1800e3178:
        local_226 = '\0';
      }
      else {
        uVar19 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
        uVar19 = FUN_180241610(uVar19,0xfbdfb712f0666000);
        pcVar14 = (char *)FUN_1801fcfc0(uVar19);
        if (*pcVar14 == '\0') goto LAB_1800e3178;
        local_226 = '\x01';
      }
      iVar9 = DAT_180426018;
      if (local_228 != '\0') goto LAB_1800e32de;
      if (DAT_1803fa608 == 0) {
        uVar7 = 0;
        uVar11 = 0;
        local_148 = 0;
LAB_1800e31dd:
        uVar12 = (undefined4)DAT_180380bd0;
        uVar31 = (undefined4)((ulonglong)DAT_180380bd0 >> 0x20);
      }
      else {
        local_148 = *(longlong *)(DAT_1803fa608 + 0x10);
        uVar7 = (undefined4)local_148;
        uVar11 = (undefined4)((ulonglong)local_148 >> 0x20);
        dVar28 = *(double *)(DAT_1803fa608 + 0x28);
        uVar12 = SUB84(dVar28,0);
        uVar31 = (undefined4)((ulonglong)dVar28 >> 0x20);
        if (dVar28 <= 0.0) goto LAB_1800e31dd;
      }
      local_218 = CONCAT44(uVar31,uVar12);
      uVar27 = SUB84(DAT_180409838,0);
      uVar29 = (int)((ulonglong)DAT_180409838 >> 0x20);
      if (DAT_180409838 <= 0.0) {
        DAT_180409838 = (double)CONCAT44(uVar11,uVar7);
        uVar27 = uVar7;
        uVar29 = uVar11;
      }
      if ((lVar16 != 0) && (lVar20 = FUN_180076750(lVar16), lVar20 == 0)) {
        local_200 = FUN_18001eff0(lVar16);
        uVar27 = (undefined4)local_200;
        uVar29 = (undefined4)((ulonglong)local_200 >> 0x20);
      }
      dVar28 = (double)DAT_180426018 * (double)CONCAT44(uVar31,uVar12) +
               (double)CONCAT44(uVar29,uVar27);
      if ((double)CONCAT44(uVar11,uVar7) <= dVar28 && dVar28 != (double)CONCAT44(uVar11,uVar7)) {
        return;
      }
      if ((local_226 != '\0') && ((double)CONCAT44(uVar11,uVar7) - _DAT_180426188 < DAT_180380c40))
      {
        return;
      }
      _DAT_180426188 = (double)CONCAT44(uVar11,uVar7);
      iVar9 = DAT_180426018;
      do {
        if (iVar9 != DAT_180426018) break;
        iVar9 = rand();
        iVar9 = iVar9 + (iVar9 / 3 + (iVar9 >> 0x1f) +
                        (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >>
                             0x1f)) * -3;
        uVar21 = (int)uVar23 + 1;
        uVar23 = (ulonglong)uVar21;
      } while ((int)uVar21 < 8);
LAB_1800e32de:
      DAT_180426018 = iVar9;
      *(uint *)(local_1f8 + 0x20) = *(uint *)(local_1f8 + 0x20) | 1;
      DAT_1803db5ee = 1;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      *(undefined1 *)(param_1 + 0x20) = 1;
      if (iVar24 != iVar25) {
        return;
      }
      FUN_180014410("[TB] FIRE! burst=%d/%d\n",*(undefined4 *)(param_1 + 0x18),
                    *(undefined4 *)(param_1 + 0x1c));
      return;
    }
    if ((iVar24 != iVar25) || (plVar13 == (longlong *)0x0)) goto LAB_1800e2da3;
    BVar8 = IsBadReadPtr(plVar13,8);
    local_140 = CONCAT44(local_140._4_4_,BVar8);
    if ((BVar8 == 0) && (BVar10 = IsBadReadPtr((void *)*plVar13,8), BVar10 != 0)) {
      uVar23 = 1;
LAB_1800e2d59:
      uVar11 = 0xffffffff;
      bVar6 = 1;
      uVar7 = 0xffffffff;
      uVar12 = 0xffffffff;
      iVar24 = -1;
    }
    else {
      if (BVar8 != 0) goto LAB_1800e2d59;
      plVar18 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13);
      if (plVar18 == (longlong *)0x0) {
        uVar7 = 0xffffffff;
        bVar6 = 1;
      }
      else {
        uVar7 = (**(code **)(*plVar18 + 0x48))(plVar18);
        bVar6 = (**(code **)(*plVar18 + 0x40))(plVar18);
      }
      local_224 = FUN_18001c680(plVar13);
      uVar11 = FUN_18001c560(plVar13);
      uVar12 = FUN_18001c560(lVar16);
      iVar24 = local_224;
    }
    local_238 = (double)CONCAT44(local_238._4_4_,uVar12);
    local_240 = (double)CONCAT44(local_240._4_4_,uVar11);
    local_248 = (double)CONCAT44(local_248._4_4_,iVar24);
    local_250 = (double)CONCAT44(local_250._4_4_,(uint)bVar6);
    local_258 = (undefined8 *)CONCAT44(local_258._4_4_,uVar7);
    FUN_180014410("[TB] REJECTED: ent=%p badRead=%d badVt=%d idx=%d dormant=%d hp=%d team=%d localTeam=%d\n"
                  ,plVar13,(float)local_140 != 0.0,uVar23);
  }
LAB_1800e2da3:
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
    return;
  }
LAB_1800e307f:
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


