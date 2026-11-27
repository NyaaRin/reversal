// 0x1800bdd80  Features_HVH_AntiAim_AntiAimFeature_vfunc02
// size=3935 thunk=false
// signature: undefined Features_HVH_AntiAim_AntiAimFeature_vfunc02()
// status: ok


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_HVH_AntiAim_AntiAimFeature_vfunc02
               (longlong param_1,undefined8 param_2,uint *param_3,longlong param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  byte *pbVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  BOOL BVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  HMODULE lp;
  longlong lVar14;
  undefined8 uVar15;
  char *pcVar16;
  longlong lVar17;
  int *piVar18;
  float *pfVar19;
  float *pfVar20;
  int *piVar21;
  int iVar22;
  bool bVar23;
  HMODULE pHVar24;
  HMODULE pHVar25;
  uint *puVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_174;
  float local_170;
  float local_16c;
  float local_168 [2];
  undefined8 local_160;
  int local_158;
  float local_154;
  uint *local_150;
  float local_148;
  int local_144;
  int local_140 [8];
  int local_120;
  int local_11c;
  longlong local_118;
  byte *local_110;
  uint *local_108;
  int local_f8;
  int local_f4;
  int local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined2 local_d6;
  
  local_160 = param_4;
  local_150 = param_3;
  local_118 = param_1;
  local_108 = param_3;
  cVar6 = FUN_1800b21b0();
  if (DAT_180409a2c == '\0') {
LAB_1800bdf16:
    if (cVar6 == '\0') {
      if (DAT_180409a2c != '\0') goto LAB_1800bdf29;
    }
    else if (DAT_180409a2c == '\0') {
      FUN_1800b2c30();
    }
  }
  else {
    if (DAT_1803fa620 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0xffffffff;
      if (*(uint *)(DAT_1803fa620 + 0x20b88) < 0x80) {
        uVar11 = *(uint *)(DAT_1803fa620 + 0x20b88);
      }
    }
    pHVar24 = (HMODULE)0x0;
    if ((int)DAT_180409a4c < (int)uVar11) {
      DAT_180409a4c = uVar11;
    }
    bVar23 = false;
    lp = GetModuleHandleA("server.dll");
    pHVar25 = pHVar24;
    if (((lp != (HMODULE)0x0) && (BVar9 = IsBadReadPtr(lp,0x40), BVar9 == 0)) &&
       (pHVar25 = (HMODULE)0x0, (short)lp->unused == 0x5a4d)) {
      piVar18 = (int *)((longlong)&lp->unused + (longlong)lp[0xf].unused);
      BVar9 = IsBadReadPtr(piVar18,0x108);
      pHVar25 = pHVar24;
      param_4 = local_160;
      if ((BVar9 == 0) && (*piVar18 == 0x4550)) {
        bVar23 = 0x1000 < (uint)piVar18[0x14];
        pHVar25 = lp;
      }
    }
    if ((bVar23) && (pHVar25 == DAT_180409a38)) goto LAB_1800bdf16;
    if (bVar23) {
      pHVar24 = pHVar25;
    }
    FUN_180014410("[ANIMPROBE] server.dll went away or moved (%p -> %p) - disarming\n",DAT_180409a38
                  ,pHVar24);
    if (bVar23) {
LAB_1800bdf29:
      FUN_1800b2eb0();
    }
    else {
      FUN_1800b2c10();
      DAT_180409a58 = 0;
      DAT_180409a38 = (HMODULE)0x0;
      DAT_180409a10 = 0;
      DAT_180409a2c = '\0';
    }
  }
  if (param_3 == (uint *)0x0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar10 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar14 = (*pcVar2)(DAT_1803fa360,uVar10);
  if ((lVar14 == 0) || (local_e0 = lVar14, cVar6 = FUN_18001c330(lVar14), cVar6 == '\0')) {
    DAT_1803e876c = 0xffffffff;
    DAT_180409a1c = 0;
    DAT_180409ce8 = 0;
    DAT_180409cf0._0_2_ = 0;
    DAT_180409cf0._2_2_ = local_d6;
    DAT_180409cf9 = 0;
    return;
  }
  FUN_1800bda90(lVar14,*param_3);
  cVar6 = FUN_1800b8160();
  if (cVar6 == '\0') {
    return;
  }
  cVar6 = FUN_18001e0a0(lVar14);
  if ((cVar6 != '\x02') || (cVar6 = FUN_18001fcf0(lVar14), '\x01' < cVar6)) {
    DAT_180409ce4 = 0;
    return;
  }
  uVar15 = FUN_180241610(&DAT_1803fadf0,0x237bcfbdef3b6800);
  uVar15 = FUN_180241610(uVar15,0x402819404e703058);
  pcVar16 = (char *)FUN_1801fcfc0(uVar15);
  if (*pcVar16 != '\0') {
    DAT_180409ce4 = 0;
    return;
  }
  bVar7 = (byte)param_3[8] & 1;
  if ((bVar7 == 0) && ((*(byte *)(param_4 + 0x20) & 1) == 0)) {
    bVar23 = false;
  }
  else {
    bVar23 = true;
  }
  if (((int)DAT_1803e8774 < 0) || (DAT_1803e8774 != *param_3)) {
    bVar27 = false;
  }
  else {
    bVar27 = true;
  }
  if ((bVar7 == 0) || ((*(byte *)(param_4 + 0x20) & 1) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar23) {
    if (bVar27) {
      DAT_180409ce4 = 0;
      return;
    }
    if (bVar3) {
      DAT_180409ce4 = 0;
      return;
    }
    cVar6 = FUN_1800bd830();
    if (cVar6 == '\0') {
      DAT_180409ce4 = 0;
      return;
    }
    lVar17 = FUN_18001dbf0(lVar14);
    if (lVar17 == 0) {
      DAT_180409ce4 = 0;
      return;
    }
    DAT_180409cfc = DAT_180409cfc + 1;
    local_e8 = lVar17;
    cVar6 = FUN_1800bd880(lVar17);
    if (cVar6 != '\0') {
      DAT_180409cdc = DAT_180409cdc + 1;
    }
    uVar11 = DAT_180409cfc & 0x8000003f;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xffffffc0) + 1;
    }
    if (uVar11 == 0) {
      cVar8 = FUN_1800bd8a0(lVar17);
      pcVar16 = "NO (Lua clock -- this option cannot help here)";
      if (cVar8 != '\0') {
        pcVar16 = "yes";
      }
      FUN_180014410("[AA-COOLDOWN] retook %d of %d attack ticks | engine fire clock: %s\n",
                    DAT_180409cdc,DAT_180409cfc,pcVar16);
    }
    if (cVar6 == '\0') {
      DAT_180409ce4 = 0;
      return;
    }
  }
  if ((param_3[8] & 0x20) != 0) {
    DAT_180409ce4 = 0;
    return;
  }
  uVar15 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
  uVar15 = FUN_180241610(uVar15,0xd2ceb89ade8cdec);
  piVar18 = (int *)FUN_1802029c0(uVar15);
  iVar13 = *piVar18;
  local_f8 = iVar13;
  uVar15 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
  uVar15 = FUN_180241610(uVar15,0x398cc31e81e2db51);
  piVar18 = (int *)FUN_1802029c0(uVar15);
  iVar22 = *piVar18;
  local_158 = iVar22;
  local_144 = iVar22;
  uVar15 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
  uVar15 = FUN_180241610(uVar15,0xeddd7019415d29f4);
  pfVar19 = (float *)FUN_1802029c0(uVar15);
  local_154 = *pfVar19;
  local_148 = local_154;
  uVar15 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
  uVar15 = FUN_180241610(uVar15,0xa93407069741444e);
  pfVar19 = (float *)FUN_1802029c0(uVar15);
  lVar17 = local_160;
  local_170 = *pfVar19;
  if ((iVar13 == 0) && (iVar22 == 0)) {
    DAT_180409ce4 = 0;
    return;
  }
  bVar7 = (byte)*param_3 & 1;
  fVar31 = *(float *)(local_160 + 0xc);
  local_174 = 0.0;
  local_168[0] = local_170;
  cVar6 = FUN_1800bcf30(lVar14,local_160 + 8,&local_174);
  fVar4 = DAT_180409ce0;
  if (cVar6 != '\0') {
    fVar31 = local_174;
  }
  _DAT_1803eb878 = *(undefined4 *)(lVar17 + 8);
  _DAT_1803eb87c = *(undefined4 *)(lVar17 + 0xc);
  _DAT_1803eb880 = *(undefined4 *)(lVar17 + 0x10);
  local_160._0_4_ = DAT_180409ce0;
  if ((DAT_180409ce0 == 0.0) || (bVar23 = true, local_158 == 9)) {
    bVar23 = false;
  }
  if ((DAT_1803db430 == (char *)0x0) || (bVar27 = false, *DAT_1803db430 != '\0')) {
    bVar27 = true;
  }
  uVar11 = *local_150;
  local_110 = (byte *)(local_118 + 0x10);
  local_16c = fVar31;
  uVar12 = FUN_1800bdcb0();
  pbVar5 = local_110;
  lVar17 = local_118;
  *local_110 = (byte)(uVar11 / uVar12) & 1;
  iVar22 = 0;
  if (iVar13 == 1) {
    param_3[2] = 0x42b20000;
  }
  else if (iVar13 == 2) {
    param_3[2] = 0xc2b20000;
  }
  else if (iVar13 == 3) {
    if (bVar7 == 0) {
      param_3[2] = DAT_180381410;
    }
    else {
      param_3[2] = DAT_180381108;
    }
  }
  else if (iVar13 == 4) {
    param_3[2] = 0;
  }
  fVar28 = DAT_180380ac0;
  puVar26 = local_150;
  switch(local_158) {
  case 1:
    uVar11 = FUN_1802d3e00(fVar31 + DAT_180381188);
    param_3[3] = uVar11;
    puVar26 = local_150;
    fVar28 = DAT_180380ac0;
    break;
  case 2:
    local_174 = 2.52234e-43;
    local_16c = 1.4013e-44;
    pfVar19 = &local_16c;
    if (9 < (int)local_154) {
      pfVar19 = &local_148;
    }
    pfVar20 = &local_174;
    if ((int)local_154 < 0xb5) {
      pfVar20 = pfVar19;
    }
    fVar32 = (float)(int)*pfVar20 * DAT_180380ac0;
    if (bVar7 == 0) {
      fVar32 = (float)((uint)fVar32 ^ DAT_1803817f0);
    }
    uVar11 = FUN_1802d3e00(fVar31 + DAT_180381188 + fVar32);
    param_3[3] = uVar11;
    puVar26 = local_150;
    break;
  case 3:
    local_154 = 2.52234e-44;
    local_16c = 1.4013e-45;
    pfVar19 = &local_16c;
    if (0 < (int)local_170) {
      pfVar19 = local_168;
    }
    pfVar20 = &local_154;
    if ((int)local_170 < 0x13) {
      pfVar20 = pfVar19;
    }
    uVar11 = FUN_1802d3e00((float)(int)*pfVar20 + *(float *)(local_118 + 8));
    *(uint *)(lVar17 + 8) = uVar11;
    param_3[3] = uVar11;
    puVar26 = local_150;
    fVar28 = DAT_180380ac0;
    break;
  case 4:
    fVar28 = fVar31 + DAT_18038110c;
    goto LAB_1800be4bd;
  case 5:
    fVar28 = fVar31 - DAT_18038110c;
LAB_1800be4bd:
    uVar11 = FUN_1802d3e00(fVar28);
    param_3[3] = uVar11;
    puVar26 = local_150;
    fVar28 = DAT_180380ac0;
    break;
  case 6:
    local_168[0] = 2.52234e-43;
    local_170 = 1.4013e-44;
    pfVar19 = &local_170;
    if (9 < (int)local_154) {
      pfVar19 = &local_148;
    }
    pfVar20 = local_168;
    if ((int)local_154 < 0xb5) {
      pfVar20 = pfVar19;
    }
    fVar32 = (float)(int)*pfVar20 * DAT_180380ac0;
    uVar11 = FUN_1800bdcb0();
    puVar26 = local_150;
    if (((ulonglong)*local_150 / (ulonglong)uVar11 & 1) == 0) {
      fVar32 = (float)((uint)fVar32 ^ DAT_1803817f0);
    }
    uVar11 = FUN_1802d3e00(fVar31 + DAT_180381188 + fVar32,(ulonglong)*local_150 % (ulonglong)uVar11
                          );
    param_3[3] = uVar11;
    break;
  case 7:
  case 8:
  case 9:
    local_174 = 0.0;
    uVar15 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar15 = FUN_180241610(uVar15,0x423a90540ddbc421);
    pfVar19 = (float *)FUN_1802029c0(uVar15);
    puVar26 = local_150;
    fVar28 = DAT_180380ac0;
    local_174 = *pfVar19;
    local_170 = 8.40779e-44;
    local_160._0_4_ = 0.0;
    pfVar19 = (float *)&local_160;
    if (-1 < (int)local_174) {
      pfVar19 = &local_174;
    }
    pfVar20 = &local_170;
    if ((int)local_174 < 0x3d) {
      pfVar20 = pfVar19;
    }
    fVar32 = (float)(int)*pfVar20 * DAT_180380ac0;
    if (fVar4 == 1.4013e-45) {
      iVar13 = 1;
    }
    else {
      iVar13 = (fVar4 != 2.8026e-45) - 1;
      if ((fVar4 != 2.8026e-45) &&
         ((cVar6 = FUN_1800bd7e0(), cVar6 == '\0' || (iVar13 = FUN_1800bd570(lVar14), iVar13 == 0)))
         ) {
        iVar13 = FUN_1800bd320();
      }
    }
    if (DAT_180409cfa != '\0') {
      iVar13 = -iVar13;
    }
    if (iVar13 == 0) {
      fVar29 = fVar31;
      if (*pbVar5 != 0) {
        fVar32 = (float)((uint)fVar32 ^ DAT_1803817f0);
      }
    }
    else {
      if (iVar13 < 1) {
        fVar32 = (float)((uint)fVar32 ^ DAT_1803817f0);
      }
      fVar29 = (float)FUN_1802d3e00((float)iVar13 * DAT_180381094 + fVar31);
    }
    local_174 = 0.0;
    cVar6 = FUN_1800bd8d0(lVar14,&local_174);
    fVar33 = local_174;
    if ((cVar6 == '\0') && (DAT_180409cf9 != '\0')) {
      fVar33 = DAT_180409ce8._4_4_;
      local_170 = (float)FUN_180022110();
      local_168[0] = 60.0;
      local_160._0_4_ = -60.0;
      pfVar19 = (float *)&local_160;
      if (DAT_180381408 <= local_170) {
        pfVar19 = &local_170;
      }
      pfVar20 = local_168;
      if (local_170 <= DAT_1803810c8) {
        pfVar20 = pfVar19;
      }
      fVar34 = *pfVar20;
      cVar8 = '\x01';
LAB_1800be7a4:
      fVar32 = (float)FUN_1802d3e00(fVar31 + DAT_180381188 + fVar34 + fVar32);
      DAT_180409d00 = '\x01';
      DAT_180409ccc = fVar33;
    }
    else {
      fVar34 = 0.0;
      cVar8 = cVar6;
      if (cVar6 != '\0') {
        fVar34 = (float)FUN_180022110();
        goto LAB_1800be7a4;
      }
      fVar32 = (float)FUN_1802d3e00(fVar31 + DAT_180381188 + 0.0 + fVar32);
      fVar33 = local_174;
    }
    if (bVar27) {
      param_3[3] = (uint)fVar32;
      uVar11 = DAT_1803fd0bc & 0x8000000f;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
      }
      DAT_1803fd0bc = DAT_1803fd0bc + 1;
      if (uVar11 == 0) {
        if (cVar8 == '\0') {
          fVar30 = 0.0;
        }
        else {
          fVar30 = (float)FUN_180022110();
        }
        if (((DAT_1803fa660 != 0) && (DAT_1803fa620 != 0)) &&
           (*(uint *)(DAT_1803fa620 + 0x20b88) < 0x80)) {
          iVar13 = *(int *)(DAT_1803fa620 + 0x20b84);
          if (iVar13 < 0) {
            iVar13 = -1;
          }
          if (-1 < iVar13) {
            iVar22 = *(uint *)(DAT_1803fa620 + 0x20b88) + 1;
          }
        }
        if (cVar6 == '\0') {
          pcVar16 = "none";
          if (cVar8 != '\0') {
            pcVar16 = "mirror";
          }
        }
        else {
          pcVar16 = "batch";
        }
        FUN_180014410("[AA-DESYNC] cmd=%u base=%.2f pull=%.2f shown=%.2f | body batch=%.2f mirror=%.2f src=%s | bodyOff raw=%.1f used=%.1f | batch=%d steps=%d skips=%d\n"
                      ,*puVar26,(double)fVar31,(double)fVar29,(double)fVar32,(double)fVar33,
                      (double)DAT_180409ce8._4_4_,pcVar16,(double)fVar30,(double)fVar34,iVar22,
                      DAT_180409cf4,DAT_180409cc8);
      }
    }
    else {
      param_3[3] = (uint)fVar29;
    }
  }
  if (bVar23) {
    if (((fVar4 == 1.4013e-45) || (fVar4 == 2.8026e-45)) || (fVar4 == 4.2039e-45)) {
      fVar31 = (float)FUN_1802d3e00();
    }
    if (DAT_180409cfa != '\0') {
      fVar31 = (float)FUN_1802d3e00();
    }
    param_3[3] = (uint)fVar31;
  }
  if (local_158 == 0) {
    bVar27 = fVar4 == 0.0;
LAB_1800be9b4:
    if (bVar27) goto LAB_1800bec2f;
  }
  else if (local_158 == 9) {
    bVar27 = !bVar27;
    goto LAB_1800be9b4;
  }
  uVar15 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
  uVar15 = FUN_180241610(uVar15,0xa9b614a7a14b0311);
  piVar18 = (int *)FUN_1802029c0(uVar15);
  iVar13 = *piVar18;
  local_11c = iVar13;
  uVar15 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
  uVar15 = FUN_180241610(uVar15,0xd0bdc5255ffea357);
  piVar18 = (int *)FUN_1802029c0(uVar15);
  iVar22 = *piVar18;
  local_f4 = iVar22;
  uVar15 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
  uVar15 = FUN_180241610(uVar15);
  piVar18 = (int *)FUN_1802029c0(uVar15);
  iVar1 = *piVar18;
  local_f0 = iVar1;
  if (iVar13 != 0) {
    local_140[6] = iVar1;
    local_140[2] = iVar22;
    local_140[4] = 0xb4;
    local_140[0] = 0;
    piVar18 = local_140;
    if (-1 < iVar22) {
      piVar18 = local_140 + 2;
    }
    piVar21 = local_140 + 4;
    if (iVar22 < 0xb5) {
      piVar21 = piVar18;
    }
    iVar22 = *piVar21;
    if ((0.0 < (float)iVar22 * fVar28) || (iVar13 == 3)) {
      uVar11 = *puVar26;
      uVar12 = FUN_1800bdcb0();
      local_120 = 0xb4;
      local_140[5] = 1;
      piVar18 = local_140 + 5;
      if (0 < iVar1) {
        piVar18 = local_140 + 6;
      }
      piVar21 = &local_120;
      if (iVar1 < 0xb5) {
        piVar21 = piVar18;
      }
      if (iVar13 != 1) {
        if (iVar13 == 2) {
          fVar31 = ((float)iVar22 * fVar28 * DAT_180380e9c) / (float)*piVar21;
          if (DAT_180380d30 <= fVar31) {
            fmodf((float)((ulonglong)uVar11 / (ulonglong)uVar12),fVar31);
          }
        }
        else if (iVar13 == 3) {
          fmodf((float)((ulonglong)uVar11 / (ulonglong)uVar12) * (float)*piVar21,DAT_18038120c);
          FUN_1802d3e00();
        }
      }
    }
    uVar11 = FUN_1802d3e00();
    param_3[3] = uVar11;
  }
LAB_1800bec2f:
  uVar11 = FUN_1802d3e00();
  param_3[2] = uVar11;
  uVar11 = FUN_1802d3e00();
  param_3[3] = uVar11;
  DAT_1803eb85c = (float)param_3[3];
  if (DAT_180409d00 != '\0') {
    DAT_1803eb85c = DAT_180409ccc;
    DAT_180409d00 = '\0';
  }
  DAT_180409ce4 = 1;
  _DAT_1803eb860 = param_3[4];
  DAT_1803eb858 = param_3[2];
  DAT_1803e8770 = *puVar26;
  return;
}


