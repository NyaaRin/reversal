// 0x1802929d0  FUN_1802929d0
// size=3806 thunk=false
// signature: undefined FUN_1802929d0()
// status: ok


void FUN_1802929d0(longlong param_1,float *param_2,uint param_3,uint param_4,float param_5,
                  uint param_6)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  bool bVar7;
  short sVar8;
  short sVar9;
  byte bVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  short sVar23;
  uint uVar24;
  short sVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  uint local_res18;
  uint local_d4;
  int *local_c8;
  ulonglong uVar19;
  
  fVar32 = DAT_180380bb0;
  lVar22 = (longlong)(int)param_3;
  if ((int)param_3 < 2) {
    return;
  }
  if ((param_4 & 0xff000000) == 0) {
    return;
  }
  param_6 = param_6 & 0x200;
  uVar2 = **(undefined4 **)(param_1 + 0x38);
  uVar3 = (*(undefined4 **)(param_1 + 0x38))[1];
  uVar16 = param_3;
  if (param_6 == 0) {
    uVar16 = param_3 - 1;
  }
  fVar40 = *(float *)(param_1 + 0xd0);
  bVar7 = param_5 <= fVar40;
  if ((*(uint *)(param_1 + 0x30) & 1) == 0) {
    FUN_1802927a0(param_1,uVar16 * 6,uVar16 * 4);
    uVar20 = 0;
    if ((int)uVar16 < 1) {
      return;
    }
    param_5 = param_5 * DAT_180380ac0;
    do {
      uVar29 = (int)uVar20 + 1;
      uVar27 = 0;
      if (uVar29 != param_3) {
        uVar27 = uVar29;
      }
      lVar22 = (longlong)(int)uVar27;
      fVar40 = param_2[lVar22 * 2] - param_2[uVar20 * 2];
      fVar34 = param_2[lVar22 * 2 + 1] - param_2[uVar20 * 2 + 1];
      fVar32 = fVar34 * fVar34 + fVar40 * fVar40;
      if (0.0 < fVar32) {
        auVar33 = rsqrtss(ZEXT416((uint)fVar32),ZEXT416((uint)fVar32));
        fVar40 = fVar40 * auVar33._0_4_;
        fVar34 = fVar34 * auVar33._0_4_;
      }
      fVar34 = fVar34 * param_5;
      fVar40 = fVar40 * param_5;
      **(float **)(param_1 + 0x40) = fVar34 + param_2[uVar20 * 2];
      *(float *)(*(longlong *)(param_1 + 0x40) + 4) = param_2[uVar20 * 2 + 1] - fVar40;
      lVar18 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar18 + 8) = uVar2;
      *(undefined4 *)(lVar18 + 0xc) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x14) = fVar34 + param_2[lVar22 * 2];
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x18) = param_2[lVar22 * 2 + 1] - fVar40;
      lVar18 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar18 + 0x1c) = uVar2;
      *(undefined4 *)(lVar18 + 0x20) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_4;
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x28) = param_2[lVar22 * 2] - fVar34;
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x2c) = fVar40 + param_2[lVar22 * 2 + 1];
      lVar22 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar22 + 0x30) = uVar2;
      *(undefined4 *)(lVar22 + 0x34) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x38) = param_4;
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x3c) = param_2[uVar20 * 2] - fVar34;
      lVar22 = uVar20 * 2;
      uVar20 = (ulonglong)uVar29;
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x40) = fVar40 + param_2[lVar22 + 1];
      lVar22 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar22 + 0x44) = uVar2;
      *(undefined4 *)(lVar22 + 0x48) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x4c) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x50;
      **(undefined2 **)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = *(short *)(param_1 + 0x34) + 1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = *(short *)(param_1 + 0x34) + 2;
      *(undefined2 *)(*(longlong *)(param_1 + 0x48) + 6) = *(undefined2 *)(param_1 + 0x34);
      *(short *)(*(longlong *)(param_1 + 0x48) + 8) = *(short *)(param_1 + 0x34) + 2;
      *(short *)(*(longlong *)(param_1 + 0x48) + 10) = *(short *)(param_1 + 0x34) + 3;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
    } while ((int)uVar29 < (int)uVar16);
    return;
  }
  uVar27 = param_4 & 0xffffff;
  if (param_5 <= DAT_180380bb0) {
    param_5 = DAT_180380bb0;
  }
  iVar14 = (int)param_5;
  if (((((*(uint *)(param_1 + 0x30) & 2) == 0) || (0x1f < iVar14)) ||
      (DAT_18038093c < param_5 - (float)iVar14)) || (fVar40 != DAT_180380bb0)) {
    if (bVar7) {
      bVar10 = 0;
      iVar21 = uVar16 * 0xc;
      local_d4 = param_3 * 3;
      goto LAB_180292b27;
    }
    local_d4 = param_3 * 4;
    FUN_1802927a0(param_1,uVar16 * 0x12,local_d4);
    iVar21 = 5;
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
    iVar21 = uVar16 * 6;
    local_d4 = param_3 * 2;
LAB_180292b27:
    FUN_1802927a0(param_1,iVar21,local_d4);
    iVar21 = 3;
  }
  lVar18 = *(longlong *)(param_1 + 0x38);
  iVar21 = iVar21 * param_3;
  if (*(int *)(lVar18 + 0x4c) < iVar21) {
    if (*(longlong *)(lVar18 + 0x50) != 0) {
      FUN_18026f680();
    }
    uVar11 = FUN_18026f580((longlong)iVar21 << 3);
    *(undefined8 *)(lVar18 + 0x50) = uVar11;
    *(int *)(lVar18 + 0x4c) = iVar21;
  }
  uVar29 = DAT_1803817f0;
  uVar19 = 0;
  uVar26 = 0;
  pfVar6 = *(float **)(*(longlong *)(param_1 + 0x38) + 0x50);
  pfVar1 = pfVar6 + lVar22 * 2;
  uVar28 = 0;
  uVar20 = uVar19;
  if (3 < (int)uVar16) {
    do {
      iVar21 = (int)uVar20;
      lVar18 = (longlong)iVar21;
      uVar15 = uVar26;
      if (iVar21 + 1U != param_3) {
        uVar15 = iVar21 + 1U;
      }
      fVar34 = param_2[(longlong)(int)uVar15 * 2] - param_2[lVar18 * 2];
      fVar35 = param_2[(longlong)(int)uVar15 * 2 + 1] - param_2[lVar18 * 2 + 1];
      fVar30 = fVar35 * fVar35 + fVar34 * fVar34;
      if (0.0 < fVar30) {
        auVar33 = rsqrtss(ZEXT416((uint)fVar30),ZEXT416((uint)fVar30));
        fVar35 = auVar33._0_4_ * fVar35;
        fVar34 = auVar33._0_4_ * fVar34;
      }
      pfVar6[lVar18 * 2] = fVar35;
      pfVar6[lVar18 * 2 + 1] = (float)((uint)fVar34 ^ uVar29);
      uVar15 = uVar26;
      if (iVar21 + 2U != param_3) {
        uVar15 = iVar21 + 2U;
      }
      fVar34 = param_2[(longlong)(int)uVar15 * 2] - param_2[lVar18 * 2 + 2];
      fVar35 = param_2[(longlong)(int)uVar15 * 2 + 1] - param_2[lVar18 * 2 + 3];
      fVar30 = fVar35 * fVar35 + fVar34 * fVar34;
      if (0.0 < fVar30) {
        auVar33 = rsqrtss(ZEXT416((uint)fVar30),ZEXT416((uint)fVar30));
        fVar35 = auVar33._0_4_ * fVar35;
        fVar34 = auVar33._0_4_ * fVar34;
      }
      pfVar6[lVar18 * 2 + 2] = fVar35;
      pfVar6[lVar18 * 2 + 3] = (float)((uint)fVar34 ^ uVar29);
      uVar15 = uVar26;
      if (iVar21 + 3U != param_3) {
        uVar15 = iVar21 + 3U;
      }
      fVar34 = param_2[(longlong)(int)uVar15 * 2] - param_2[lVar18 * 2 + 4];
      fVar35 = param_2[(longlong)(int)uVar15 * 2 + 1] - param_2[lVar18 * 2 + 5];
      fVar30 = fVar35 * fVar35 + fVar34 * fVar34;
      if (0.0 < fVar30) {
        auVar33 = rsqrtss(ZEXT416((uint)fVar30),ZEXT416((uint)fVar30));
        fVar35 = auVar33._0_4_ * fVar35;
        fVar34 = auVar33._0_4_ * fVar34;
      }
      pfVar6[lVar18 * 2 + 4] = fVar35;
      uVar24 = iVar21 + 4;
      uVar20 = (ulonglong)uVar24;
      pfVar6[lVar18 * 2 + 5] = (float)((uint)fVar34 ^ uVar29);
      uVar15 = uVar28;
      if (uVar24 != param_3) {
        uVar15 = uVar24;
      }
      fVar34 = param_2[(longlong)(int)uVar15 * 2] - param_2[lVar18 * 2 + 6];
      fVar35 = param_2[(longlong)(int)uVar15 * 2 + 1] - param_2[lVar18 * 2 + 7];
      fVar30 = fVar35 * fVar35 + fVar34 * fVar34;
      if (0.0 < fVar30) {
        auVar33 = rsqrtss(ZEXT416((uint)fVar30),ZEXT416((uint)fVar30));
        fVar35 = auVar33._0_4_ * fVar35;
        fVar34 = auVar33._0_4_ * fVar34;
      }
      pfVar6[lVar18 * 2 + 6] = fVar35;
      pfVar6[lVar18 * 2 + 7] = (float)((uint)fVar34 ^ uVar29);
    } while ((int)uVar24 < (int)(uVar16 - 3));
  }
  uVar15 = (uint)uVar20;
  while ((int)uVar15 < (int)uVar16) {
    uVar15 = (int)uVar20 + 1;
    uVar24 = uVar28;
    if (uVar15 != param_3) {
      uVar24 = uVar15;
    }
    lVar18 = (longlong)(int)uVar20;
    fVar34 = param_2[(longlong)(int)uVar24 * 2] - param_2[lVar18 * 2];
    fVar35 = param_2[(longlong)(int)uVar24 * 2 + 1] - param_2[lVar18 * 2 + 1];
    fVar30 = fVar35 * fVar35 + fVar34 * fVar34;
    if (0.0 < fVar30) {
      auVar33 = rsqrtss(ZEXT416((uint)fVar30),ZEXT416((uint)fVar30));
      fVar35 = auVar33._0_4_ * fVar35;
      fVar34 = auVar33._0_4_ * fVar34;
    }
    pfVar6[lVar18 * 2] = fVar35;
    pfVar6[lVar18 * 2 + 1] = (float)((uint)fVar34 ^ uVar29);
    uVar20 = (ulonglong)uVar15;
  }
  if (param_6 == 0) {
    *(undefined8 *)(pfVar6 + lVar22 * 2 + -2) = *(undefined8 *)(pfVar6 + lVar22 * 2 + -4);
  }
  fVar34 = DAT_180380ac0;
  if (bVar10 == 0) {
    if (!bVar7) {
      fVar30 = (param_5 - fVar40) * DAT_180380ac0;
      if (param_6 == 0) {
        fVar36 = fVar30 + fVar40;
        lVar18 = (longlong)(int)(param_3 * 4 + -4);
        fVar35 = pfVar6[1];
        fVar31 = param_2[1];
        *pfVar1 = fVar36 * *pfVar6 + *param_2;
        pfVar1[1] = fVar36 * fVar35 + fVar31;
        fVar35 = pfVar6[1];
        fVar31 = param_2[1];
        pfVar1[2] = fVar30 * *pfVar6 + *param_2;
        pfVar1[3] = fVar30 * fVar35 + fVar31;
        fVar35 = *pfVar6;
        fVar31 = *param_2;
        pfVar1[5] = param_2[1] - fVar30 * pfVar6[1];
        pfVar1[4] = fVar31 - fVar30 * fVar35;
        fVar35 = *param_2;
        fVar31 = *pfVar6;
        pfVar1[7] = param_2[1] - fVar36 * pfVar6[1];
        pfVar1[6] = fVar35 - fVar36 * fVar31;
        fVar35 = pfVar6[lVar22 * 2 + -1];
        fVar31 = param_2[lVar22 * 2 + -1];
        pfVar1[lVar18 * 2] = fVar36 * pfVar6[lVar22 * 2 + -2] + param_2[lVar22 * 2 + -2];
        pfVar1[lVar18 * 2 + 1] = fVar36 * fVar35 + fVar31;
        fVar35 = pfVar6[lVar22 * 2 + -1];
        fVar31 = param_2[lVar22 * 2 + -1];
        pfVar1[lVar18 * 2 + 2] = fVar30 * pfVar6[lVar22 * 2 + -2] + param_2[lVar22 * 2 + -2];
        pfVar1[lVar18 * 2 + 3] = fVar30 * fVar35 + fVar31;
        fVar35 = pfVar6[lVar22 * 2 + -2];
        fVar31 = param_2[lVar22 * 2 + -2];
        pfVar1[lVar18 * 2 + 5] = param_2[lVar22 * 2 + -1] - fVar30 * pfVar6[lVar22 * 2 + -1];
        pfVar1[lVar18 * 2 + 4] = fVar31 - fVar30 * fVar35;
        fVar35 = pfVar6[lVar22 * 2 + -2];
        fVar31 = param_2[lVar22 * 2 + -2];
        pfVar1[lVar18 * 2 + 7] = param_2[lVar22 * 2 + -1] - fVar36 * pfVar6[lVar22 * 2 + -1];
        pfVar1[lVar18 * 2 + 6] = fVar31 - fVar36 * fVar35;
      }
      fVar31 = DAT_180381120;
      fVar35 = DAT_180380938;
      local_res18 = 0;
      uVar20 = uVar19;
      if (0 < (int)uVar16) {
        uVar29 = 1;
        uVar12 = uVar19;
        iVar14 = *(int *)(param_1 + 0x34);
        do {
          if (uVar29 == param_3) {
            iVar21 = *(int *)(param_1 + 0x34);
            uVar26 = uVar28;
          }
          else {
            iVar21 = iVar14 + 4;
            uVar26 = uVar29;
          }
          lVar22 = (longlong)(int)uVar26;
          fVar38 = (pfVar6[lVar22 * 2] + pfVar6[uVar12 * 2]) * fVar34;
          fVar39 = (pfVar6[lVar22 * 2 + 1] + pfVar6[uVar12 * 2 + 1]) * fVar34;
          fVar36 = fVar39 * fVar39 + fVar38 * fVar38;
          if (fVar35 < fVar36) {
            fVar36 = fVar32 / fVar36;
            fVar37 = fVar31;
            if (fVar36 <= fVar31) {
              fVar37 = fVar36;
            }
            fVar38 = fVar38 * fVar37;
            fVar39 = fVar39 * fVar37;
          }
          lVar18 = (longlong)(int)(uVar26 * 4);
          sVar8 = (short)iVar21;
          sVar25 = sVar8 + 1;
          fVar36 = (fVar40 + fVar30) * fVar38;
          sVar23 = sVar8 + 2;
          uVar29 = uVar29 + 1;
          fVar37 = (fVar40 + fVar30) * fVar39;
          pfVar1[lVar18 * 2] = fVar36 + param_2[lVar22 * 2];
          pfVar1[lVar18 * 2 + 1] = fVar37 + param_2[lVar22 * 2 + 1];
          pfVar1[lVar18 * 2 + 2] = fVar38 * fVar30 + param_2[lVar22 * 2];
          pfVar1[lVar18 * 2 + 3] = fVar39 * fVar30 + param_2[lVar22 * 2 + 1];
          pfVar1[lVar18 * 2 + 4] = param_2[lVar22 * 2] - fVar38 * fVar30;
          pfVar1[lVar18 * 2 + 5] = param_2[lVar22 * 2 + 1] - fVar39 * fVar30;
          pfVar1[lVar18 * 2 + 6] = param_2[lVar22 * 2] - fVar36;
          sVar9 = (short)iVar14;
          sVar13 = sVar9 + 2;
          pfVar1[lVar18 * 2 + 7] = param_2[lVar22 * 2 + 1] - fVar37;
          **(short **)(param_1 + 0x48) = sVar25;
          *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar9 + 1;
          *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar13;
          *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar13;
          *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar23;
          *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar25;
          *(short *)(*(longlong *)(param_1 + 0x48) + 0xc) = sVar25;
          *(short *)(*(longlong *)(param_1 + 0x48) + 0xe) = sVar9 + 1;
          *(short *)(*(longlong *)(param_1 + 0x48) + 0x10) = sVar9;
          *(short *)(*(longlong *)(param_1 + 0x48) + 0x12) = sVar9;
          *(short *)(*(longlong *)(param_1 + 0x48) + 0x14) = sVar8;
          *(short *)(*(longlong *)(param_1 + 0x48) + 0x16) = sVar25;
          *(short *)(*(longlong *)(param_1 + 0x48) + 0x18) = sVar23;
          *(short *)(*(longlong *)(param_1 + 0x48) + 0x1a) = sVar13;
          *(short *)(*(longlong *)(param_1 + 0x48) + 0x1c) = sVar9 + 3;
          *(short *)(*(longlong *)(param_1 + 0x48) + 0x1e) = sVar9 + 3;
          *(short *)(*(longlong *)(param_1 + 0x48) + 0x20) = sVar8 + 3;
          *(short *)(*(longlong *)(param_1 + 0x48) + 0x22) = sVar23;
          *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0x24;
          local_res18 = local_res18 + 1;
          uVar12 = (ulonglong)local_res18;
          iVar14 = iVar21;
        } while ((int)local_res18 < (int)uVar16);
      }
      do {
        uVar16 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar16;
        lVar18 = (longlong)(int)uVar20;
        **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(pfVar1 + lVar18 * 2);
        lVar22 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar22 + 8) = uVar2;
        *(undefined4 *)(lVar22 + 0xc) = uVar3;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar27;
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x14) =
             *(undefined8 *)(pfVar1 + lVar18 * 2 + 2);
        lVar22 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar22 + 0x1c) = uVar2;
        *(undefined4 *)(lVar22 + 0x20) = uVar3;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_4;
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28) =
             *(undefined8 *)(pfVar1 + lVar18 * 2 + 4);
        lVar22 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar22 + 0x30) = uVar2;
        *(undefined4 *)(lVar22 + 0x34) = uVar3;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x38) = param_4;
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x3c) =
             *(undefined8 *)(pfVar1 + lVar18 * 2 + 6);
        lVar22 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar22 + 0x44) = uVar2;
        *(undefined4 *)(lVar22 + 0x48) = uVar3;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x4c) = uVar27;
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x50;
        uVar20 = (ulonglong)((int)uVar20 + 4);
      } while ((int)uVar16 < (int)param_3);
      goto LAB_18029365d;
    }
  }
  else {
    fVar40 = param_5 * DAT_180380ac0 + fVar32;
  }
  if (param_6 == 0) {
    lVar22 = lVar22 + -1;
    lVar18 = (longlong)(int)(param_3 * 2);
    fVar30 = pfVar6[1];
    fVar35 = param_2[1];
    *pfVar1 = fVar40 * *pfVar6 + *param_2;
    pfVar1[1] = fVar40 * fVar30 + fVar35;
    fVar30 = *pfVar6;
    fVar35 = *param_2;
    pfVar1[3] = param_2[1] - fVar40 * pfVar6[1];
    pfVar1[2] = fVar35 - fVar40 * fVar30;
    fVar30 = pfVar6[lVar22 * 2 + 1];
    fVar35 = param_2[lVar22 * 2 + 1];
    pfVar1[lVar18 * 2 + -4] = fVar40 * pfVar6[lVar22 * 2] + param_2[lVar22 * 2];
    pfVar1[lVar18 * 2 + -3] = fVar40 * fVar30 + fVar35;
    fVar30 = pfVar6[lVar22 * 2];
    fVar35 = param_2[lVar22 * 2];
    pfVar1[lVar18 * 2 + -1] = param_2[lVar22 * 2 + 1] - fVar40 * pfVar6[lVar22 * 2 + 1];
    pfVar1[lVar18 * 2 + -2] = fVar35 - fVar40 * fVar30;
  }
  fVar35 = DAT_180381120;
  fVar30 = DAT_180380938;
  if (0 < (int)uVar16) {
    uVar29 = 1;
    uVar20 = uVar19;
    iVar21 = *(int *)(param_1 + 0x34);
    do {
      if (uVar29 == param_3) {
        iVar17 = *(int *)(param_1 + 0x34);
        uVar28 = uVar26;
      }
      else {
        iVar17 = (bVar10 ^ 1) + 2 + iVar21;
        uVar28 = uVar29;
      }
      lVar22 = (longlong)(int)uVar28;
      fVar36 = (pfVar6[lVar22 * 2] + pfVar6[uVar20 * 2]) * fVar34;
      fVar38 = (pfVar6[lVar22 * 2 + 1] + pfVar6[uVar20 * 2 + 1]) * fVar34;
      fVar31 = fVar38 * fVar38 + fVar36 * fVar36;
      if (fVar30 < fVar31) {
        fVar31 = fVar32 / fVar31;
        fVar39 = fVar35;
        if (fVar31 <= fVar35) {
          fVar39 = fVar31;
        }
        fVar36 = fVar36 * fVar39;
        fVar38 = fVar38 * fVar39;
      }
      sVar9 = (short)iVar17;
      sVar23 = sVar9 + 1;
      lVar18 = (longlong)(int)(uVar28 * 2);
      pfVar1[lVar18 * 2] = fVar36 * fVar40 + param_2[lVar22 * 2];
      pfVar1[lVar18 * 2 + 1] = fVar38 * fVar40 + param_2[lVar22 * 2 + 1];
      pfVar1[lVar18 * 2 + 2] = param_2[lVar22 * 2] - fVar36 * fVar40;
      sVar8 = (short)iVar21;
      sVar13 = sVar8 + 1;
      pfVar1[lVar18 * 2 + 3] = param_2[lVar22 * 2 + 1] - fVar38 * fVar40;
      **(short **)(param_1 + 0x48) = sVar9;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar8;
      if (bVar10 == 0) {
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar8 + 2;
        *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar8 + 2;
        *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar9 + 2;
        *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar9;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0xc) = sVar23;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0xe) = sVar13;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x10) = sVar8;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x12) = sVar8;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x14) = sVar9;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x16) = sVar23;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0x18;
      }
      else {
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar13;
        *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar23;
        *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar13;
        *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar9;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
      }
      uVar28 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar28;
      uVar29 = uVar29 + 1;
      iVar21 = iVar17;
    } while ((int)uVar28 < (int)uVar16);
  }
  if (bVar10 == 0) {
    do {
      **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(param_2 + uVar19 * 2);
      lVar22 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar22 + 8) = uVar2;
      *(undefined4 *)(lVar22 + 0xc) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      lVar18 = (longlong)((int)uVar19 * 2);
      uVar16 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar16;
      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x14) = *(undefined8 *)(pfVar1 + lVar18 * 2);
      lVar22 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar22 + 0x1c) = uVar2;
      *(undefined4 *)(lVar22 + 0x20) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = uVar27;
      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28) =
           *(undefined8 *)(pfVar1 + lVar18 * 2 + 2);
      lVar22 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar22 + 0x30) = uVar2;
      *(undefined4 *)(lVar22 + 0x34) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x38) = uVar27;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x3c;
    } while ((int)uVar16 < (int)param_3);
  }
  else {
    lVar18 = (longlong)iVar14;
    lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    uVar2 = *(undefined4 *)(lVar22 + lVar18 * 0x10);
    uVar3 = *(undefined4 *)(lVar22 + 4 + lVar18 * 0x10);
    uVar4 = *(undefined4 *)(lVar22 + 8 + lVar18 * 0x10);
    uVar5 = *(undefined4 *)(lVar22 + 0xc + lVar18 * 0x10);
    do {
      iVar14 = (int)uVar19;
      uVar16 = iVar14 + 1;
      uVar19 = (ulonglong)uVar16;
      lVar18 = (longlong)(iVar14 * 2);
      **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(pfVar1 + lVar18 * 2);
      lVar22 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar22 + 8) = uVar2;
      *(undefined4 *)(lVar22 + 0xc) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x14) =
           *(undefined8 *)(pfVar1 + lVar18 * 2 + 2);
      lVar22 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar22 + 0x1c) = uVar4;
      *(undefined4 *)(lVar22 + 0x20) = uVar5;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
    } while ((int)uVar16 < (int)param_3);
  }
LAB_18029365d:
  local_c8 = (int *)(param_1 + 0x34);
  *local_c8 = *local_c8 + (local_d4 & 0xffff);
  return;
}


