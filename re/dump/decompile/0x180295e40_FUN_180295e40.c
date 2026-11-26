// 0x180295e40  FUN_180295e40
// size=3592 thunk=false
// signature: undefined FUN_180295e40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180295e40(longlong param_1,float *param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  undefined4 *puVar8;
  short sVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int *piVar12;
  int *piVar13;
  float fVar14;
  char cVar15;
  undefined8 uVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  longlong *plVar24;
  ulonglong uVar25;
  int iVar26;
  int iVar27;
  int *piVar28;
  short sVar29;
  short sVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_f8 [32];
  uint local_d8;
  uint local_d4;
  longlong local_c8;
  int local_c0 [2];
  int *local_b8;
  undefined8 *puStack_b0;
  int local_a8;
  longlong *local_a0;
  uint local_98;
  ulonglong local_90;
  ulonglong uVar23;
  
  if ((param_4 & 0xff000000) != 0) {
    local_90 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
    uVar1 = **(undefined4 **)(param_1 + 0x38);
    uVar2 = (*(undefined4 **)(param_1 + 0x38))[1];
    local_c0[0] = 0;
    local_b8 = (int *)0x0;
    puStack_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    local_a0 = (longlong *)0x0;
    local_98 = 0;
    local_d8 = param_4;
    local_c8 = param_1;
    if ((*(byte *)(param_1 + 0x30) & 4) == 0) {
      FUN_1802927a0(0,0xc,6);
      **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)param_2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar6 + 8) = uVar1;
      *(undefined4 *)(lVar6 + 0xc) = uVar2;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(param_2 + 2);
      lVar6 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar6 + 8) = uVar1;
      *(undefined4 *)(lVar6 + 0xc) = uVar2;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(param_2 + 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar6 + 8) = uVar1;
      *(undefined4 *)(lVar6 + 0xc) = uVar2;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(param_2 + 6);
      lVar6 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar6 + 8) = uVar1;
      *(undefined4 *)(lVar6 + 0xc) = uVar2;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(param_2 + 8);
      lVar6 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar6 + 8) = uVar1;
      *(undefined4 *)(lVar6 + 0xc) = uVar2;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(param_2 + 10);
      lVar6 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar6 + 8) = uVar1;
      *(undefined4 *)(lVar6 + 0xc) = uVar2;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      lVar6 = *(longlong *)(param_1 + 0x38);
      if (*(int *)(lVar6 + 0x4c) < 0x25) {
        if (*(longlong *)(lVar6 + 0x50) != 0) {
          FUN_18026f680();
        }
        uVar16 = FUN_18026f580(0x128);
        *(undefined8 *)(lVar6 + 0x50) = uVar16;
        *(undefined4 *)(lVar6 + 0x4c) = 0x25;
      }
      FUN_180295780(local_c0,param_2);
      local_d8 = local_c0[0];
      piVar20 = local_b8;
      puVar10 = puStack_b0;
      uVar22 = local_a8;
      plVar11 = local_a0;
      while (0 < (int)local_d8) {
        local_d4 = uVar22;
        local_c0[0] = local_d8;
        local_b8 = piVar20;
        puStack_b0 = puVar10;
        local_a0 = plVar11;
        if (uVar22 == 0) {
          piVar28 = *(int **)(piVar20 + 4);
          *(int **)(piVar20 + 4) = piVar20;
          *(int **)(piVar20 + 6) = piVar20;
          piVar13 = piVar20;
          while (piVar12 = piVar28, piVar28 = piVar13, iVar26 = local_d8, piVar12 != piVar20) {
            piVar28 = *(int **)(piVar12 + 4);
            *(int **)(piVar12 + 4) = piVar13;
            *(int **)(piVar13 + 6) = piVar12;
            *(int **)(piVar20 + 4) = piVar12;
            *(int **)(piVar12 + 6) = piVar20;
            piVar13 = piVar12;
          }
          for (; -1 < iVar26; iVar26 = iVar26 + -1) {
            *piVar28 = 0;
            piVar28 = *(int **)(piVar28 + 4);
          }
          uVar23 = 0;
          local_98 = 0;
          if (-1 < (int)local_d8) {
            piVar20 = piVar13;
            iVar26 = local_d8;
            if (3 < (int)(local_d8 + 1)) {
              do {
                if ((*(float *)(*(longlong *)(piVar20 + 4) + 0xc) - (float)piVar20[3]) *
                    ((float)piVar20[2] - *(float *)(*(longlong *)(piVar20 + 6) + 8)) -
                    ((float)piVar20[3] - *(float *)(*(longlong *)(piVar20 + 6) + 0xc)) *
                    (*(float *)(*(longlong *)(piVar20 + 4) + 8) - (float)piVar20[2]) <= 0.0) {
                  iVar27 = (int)uVar23;
                  local_98 = iVar27 + 1;
                  uVar23 = (ulonglong)local_98;
                  *piVar20 = 2;
                  plVar11[iVar27] = (longlong)piVar20;
                }
                puVar8 = *(undefined4 **)(piVar20 + 4);
                if ((*(float *)(*(longlong *)(puVar8 + 4) + 0xc) - (float)puVar8[3]) *
                    ((float)puVar8[2] - *(float *)(*(longlong *)(puVar8 + 6) + 8)) -
                    ((float)puVar8[3] - *(float *)(*(longlong *)(puVar8 + 6) + 0xc)) *
                    (*(float *)(*(longlong *)(puVar8 + 4) + 8) - (float)puVar8[2]) <= 0.0) {
                  iVar27 = (int)uVar23;
                  local_98 = iVar27 + 1;
                  uVar23 = (ulonglong)local_98;
                  *puVar8 = 2;
                  plVar11[iVar27] = (longlong)puVar8;
                }
                puVar8 = *(undefined4 **)(puVar8 + 4);
                if ((*(float *)(*(longlong *)(puVar8 + 4) + 0xc) - (float)puVar8[3]) *
                    ((float)puVar8[2] - *(float *)(*(longlong *)(puVar8 + 6) + 8)) -
                    ((float)puVar8[3] - *(float *)(*(longlong *)(puVar8 + 6) + 0xc)) *
                    (*(float *)(*(longlong *)(puVar8 + 4) + 8) - (float)puVar8[2]) <= 0.0) {
                  iVar27 = (int)uVar23;
                  local_98 = iVar27 + 1;
                  uVar23 = (ulonglong)local_98;
                  *puVar8 = 2;
                  plVar11[iVar27] = (longlong)puVar8;
                }
                puVar8 = *(undefined4 **)(puVar8 + 4);
                if ((*(float *)(*(longlong *)(puVar8 + 4) + 0xc) - (float)puVar8[3]) *
                    ((float)puVar8[2] - *(float *)(*(longlong *)(puVar8 + 6) + 8)) -
                    ((float)puVar8[3] - *(float *)(*(longlong *)(puVar8 + 6) + 0xc)) *
                    (*(float *)(*(longlong *)(puVar8 + 4) + 8) - (float)puVar8[2]) <= 0.0) {
                  iVar27 = (int)uVar23;
                  local_98 = iVar27 + 1;
                  uVar23 = (ulonglong)local_98;
                  *puVar8 = 2;
                  plVar11[iVar27] = (longlong)puVar8;
                }
                piVar20 = *(int **)(puVar8 + 4);
                iVar26 = iVar26 + -4;
              } while (2 < iVar26);
              if (iVar26 < 0) goto LAB_180296aa3;
            }
            do {
              if ((*(float *)(*(longlong *)(piVar20 + 4) + 0xc) - (float)piVar20[3]) *
                  ((float)piVar20[2] - *(float *)(*(longlong *)(piVar20 + 6) + 8)) -
                  ((float)piVar20[3] - *(float *)(*(longlong *)(piVar20 + 6) + 0xc)) *
                  (*(float *)(*(longlong *)(piVar20 + 4) + 8) - (float)piVar20[2]) <= 0.0) {
                iVar27 = (int)uVar23;
                uVar23 = (ulonglong)(iVar27 + 1);
                *piVar20 = 2;
                plVar11[iVar27] = (longlong)piVar20;
              }
              iVar26 = iVar26 + -1;
              piVar20 = *(int **)(piVar20 + 4);
            } while (-1 < iVar26);
            local_98 = (uint)uVar23;
          }
LAB_180296aa3:
          local_a8 = 0;
          piVar28 = piVar13;
          local_b8 = piVar13;
          piVar20 = piVar13;
          if (-1 < (int)local_d8) {
            do {
              if (*piVar28 == 0) {
                iVar26 = (int)uVar23;
                if (plVar11 < plVar11 + iVar26) {
                  lVar6 = *(longlong *)(piVar28 + 6);
                  iVar27 = *(int *)(lVar6 + 4);
                  plVar24 = plVar11;
                  do {
                    iVar5 = *(int *)(*plVar24 + 4);
                    if ((((iVar5 != iVar27) && (iVar5 != piVar28[1])) &&
                        (iVar5 != *(int *)(*(longlong *)(piVar28 + 4) + 4))) &&
                       (cVar15 = FUN_180268360(lVar6 + 8,piVar28 + 2,*(longlong *)(piVar28 + 4) + 8,
                                               *plVar24 + 8), uVar22 = local_d4, cVar15 != '\0'))
                    goto LAB_180296b2f;
                    plVar24 = plVar24 + 1;
                  } while (plVar24 < plVar11 + iVar26);
                }
                *piVar28 = 1;
                puVar10[(int)local_d4] = piVar28;
                local_d4 = local_d4 + 1;
                uVar22 = local_d4;
              }
LAB_180296b2f:
              local_d8 = local_d8 + -1;
              piVar28 = *(int **)(piVar28 + 4);
            } while (-1 < (int)local_d8);
            param_1 = local_c8;
            if (uVar22 != 0) goto LAB_180296b5b;
          }
          uVar22 = 1;
          *puStack_b0 = piVar13;
        }
LAB_180296b5b:
        local_a8 = uVar22 + -1;
        piVar28 = (int *)puStack_b0[(longlong)(int)uVar22 + -1];
        iVar26 = piVar28[1];
        uVar1 = *(undefined4 *)(*(longlong *)(piVar28 + 6) + 4);
        uVar2 = *(undefined4 *)(*(longlong *)(piVar28 + 4) + 4);
        *(longlong *)(*(longlong *)(piVar28 + 4) + 0x18) = *(longlong *)(piVar28 + 6);
        *(undefined8 *)(*(longlong *)(piVar28 + 6) + 0x10) = *(undefined8 *)(piVar28 + 4);
        if (piVar28 == piVar20) {
          local_b8 = *(int **)(piVar28 + 4);
        }
        FUN_180295c80(local_c0,*(undefined8 *)(piVar28 + 6));
        FUN_180295c80(local_c0,*(undefined8 *)(piVar28 + 4));
        local_d8 = local_c0[0] + -1;
        **(short **)(param_1 + 0x48) = (short)uVar1 + *(short *)(param_1 + 0x34);
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = (short)iVar26 + *(short *)(param_1 + 0x34);
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = (short)uVar2 + *(short *)(param_1 + 0x34);
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
        piVar20 = local_b8;
        puVar10 = puStack_b0;
        uVar22 = local_a8;
        plVar11 = local_a0;
      }
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 6;
    }
    else {
      fVar39 = *(float *)(param_1 + 0xd0);
      local_d4 = param_4 & 0xffffff;
      FUN_1802927a0(0,0x30,0xc);
      lVar6 = *(longlong *)(param_1 + 0x38);
      uVar3 = *(undefined4 *)(param_1 + 0x34);
      if (*(int *)(lVar6 + 0x4c) < 0x25) {
        if (*(longlong *)(lVar6 + 0x50) != 0) {
          FUN_18026f680();
        }
        uVar16 = FUN_18026f580(0x128);
        *(undefined8 *)(lVar6 + 0x50) = uVar16;
        *(undefined4 *)(lVar6 + 0x4c) = 0x25;
      }
      FUN_180295780(local_c0,param_2);
      sVar29 = (short)uVar3;
      uVar22 = param_4 & 0xffffff;
      piVar20 = local_b8;
      while (local_b8 = piVar20, 0 < local_c0[0]) {
        if (local_a8 == 0) {
          piVar28 = *(int **)(piVar20 + 4);
          *(int **)(piVar20 + 4) = piVar20;
          *(int **)(piVar20 + 6) = piVar20;
          while (piVar13 = piVar28, piVar28 = local_b8, iVar26 = local_c0[0], piVar13 != piVar20) {
            piVar28 = *(int **)(piVar13 + 4);
            *(int **)(piVar13 + 4) = local_b8;
            *(int **)(local_b8 + 6) = piVar13;
            *(int **)(piVar20 + 4) = piVar13;
            *(int **)(piVar13 + 6) = piVar20;
            local_b8 = piVar13;
          }
          for (; -1 < iVar26; iVar26 = iVar26 + -1) {
            *piVar28 = 0;
            piVar28 = *(int **)(piVar28 + 4);
          }
          local_98 = 0;
          FUN_180295950(local_c0);
          FUN_180295bb0(local_c0);
          if (local_a8 == 0) {
            local_a8 = 1;
            *puStack_b0 = local_b8;
          }
        }
        piVar20 = (int *)puStack_b0[(longlong)local_a8 + -1];
        iVar26 = piVar20[1];
        uVar3 = *(undefined4 *)(*(longlong *)(piVar20 + 6) + 4);
        uVar4 = *(undefined4 *)(*(longlong *)(piVar20 + 4) + 4);
        *(longlong *)(*(longlong *)(piVar20 + 4) + 0x18) = *(longlong *)(piVar20 + 6);
        *(undefined8 *)(*(longlong *)(piVar20 + 6) + 0x10) = *(undefined8 *)(piVar20 + 4);
        if (piVar20 == local_b8) {
          local_b8 = *(int **)(piVar20 + 4);
        }
        local_a8 = local_a8 + -1;
        FUN_180295c80(local_c0,*(undefined8 *)(piVar20 + 6));
        FUN_180295c80(local_c0,*(undefined8 *)(piVar20 + 4));
        **(short **)(param_1 + 0x48) = (short)uVar3 * 2 + sVar29;
        local_c0[0] = local_c0[0] + -1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = (short)iVar26 * 2 + sVar29;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = (short)uVar4 * 2 + sVar29;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
        uVar22 = local_d4;
        piVar20 = local_b8;
        param_4 = local_d8;
      }
      uVar23 = 0;
      lVar6 = *(longlong *)(param_1 + 0x38);
      if (*(int *)(lVar6 + 0x4c) < 6) {
        if (*(longlong *)(lVar6 + 0x50) != 0) {
          FUN_18026f680();
        }
        uVar16 = FUN_18026f580(0x30);
        *(undefined8 *)(lVar6 + 0x50) = uVar16;
        *(undefined4 *)(lVar6 + 0x4c) = 6;
      }
      uVar21 = DAT_1803817f0;
      fVar36 = *param_2 - param_2[10];
      fVar31 = param_2[1] - param_2[0xb];
      pfVar7 = *(float **)(*(longlong *)(param_1 + 0x38) + 0x50);
      fVar33 = fVar31 * fVar31 + fVar36 * fVar36;
      if (0.0 < fVar33) {
        auVar35 = rsqrtss(ZEXT416((uint)fVar33),ZEXT416((uint)fVar33));
        fVar31 = fVar31 * auVar35._0_4_;
        fVar36 = auVar35._0_4_ * fVar36;
      }
      pfVar7[10] = fVar31;
      pfVar7[0xb] = (float)((uint)fVar36 ^ uVar21);
      fVar36 = param_2[2] - *param_2;
      fVar31 = param_2[3] - param_2[1];
      fVar33 = fVar31 * fVar31 + fVar36 * fVar36;
      if (0.0 < fVar33) {
        auVar35 = rsqrtss(ZEXT416((uint)fVar33),ZEXT416((uint)fVar33));
        fVar36 = fVar36 * auVar35._0_4_;
        fVar31 = fVar31 * auVar35._0_4_;
      }
      *pfVar7 = fVar31;
      pfVar7[1] = (float)((uint)fVar36 ^ uVar21);
      fVar31 = param_2[4] - param_2[2];
      fVar36 = param_2[5] - param_2[3];
      fVar33 = fVar36 * fVar36 + fVar31 * fVar31;
      if (0.0 < fVar33) {
        auVar35 = rsqrtss(ZEXT416((uint)fVar33),ZEXT416((uint)fVar33));
        fVar31 = fVar31 * auVar35._0_4_;
        fVar36 = fVar36 * auVar35._0_4_;
      }
      pfVar7[2] = fVar36;
      pfVar7[3] = (float)((uint)fVar31 ^ uVar21);
      fVar36 = param_2[6] - param_2[4];
      fVar31 = param_2[7] - param_2[5];
      fVar33 = fVar31 * fVar31 + fVar36 * fVar36;
      if (0.0 < fVar33) {
        auVar35 = rsqrtss(ZEXT416((uint)fVar33),ZEXT416((uint)fVar33));
        fVar36 = fVar36 * auVar35._0_4_;
        fVar31 = fVar31 * auVar35._0_4_;
      }
      pfVar7[4] = fVar31;
      pfVar7[5] = (float)((uint)fVar36 ^ uVar21);
      fVar36 = param_2[8] - param_2[6];
      fVar31 = param_2[9] - param_2[7];
      fVar33 = fVar36 * fVar36 + fVar31 * fVar31;
      if (0.0 < fVar33) {
        auVar35 = rsqrtss(ZEXT416((uint)fVar33),ZEXT416((uint)fVar33));
        fVar36 = fVar36 * auVar35._0_4_;
        fVar31 = fVar31 * auVar35._0_4_;
      }
      pfVar7[6] = fVar31;
      pfVar7[7] = (float)((uint)fVar36 ^ uVar21);
      fVar14 = DAT_180381120;
      fVar33 = DAT_180380bb0;
      fVar31 = DAT_180380ac0;
      fVar36 = DAT_180380938;
      fVar34 = param_2[10] - param_2[8];
      fVar37 = param_2[0xb] - param_2[9];
      fVar32 = fVar34 * fVar34 + fVar37 * fVar37;
      if (0.0 < fVar32) {
        auVar35 = rsqrtss(ZEXT416((uint)fVar32),ZEXT416((uint)fVar32));
        fVar34 = fVar34 * auVar35._0_4_;
        fVar37 = fVar37 * auVar35._0_4_;
      }
      iVar26 = 5;
      pfVar7[8] = fVar37;
      pfVar7[9] = (float)((uint)fVar34 ^ uVar21);
      fVar39 = fVar39 * fVar31;
      uVar25 = uVar23;
      do {
        fVar32 = (pfVar7[(longlong)iVar26 * 2] + pfVar7[uVar25 * 2]) * fVar31;
        fVar37 = (pfVar7[(longlong)iVar26 * 2 + 1] + pfVar7[uVar25 * 2 + 1]) * fVar31;
        fVar34 = fVar37 * fVar37 + fVar32 * fVar32;
        if (fVar36 < fVar34) {
          fVar34 = fVar33 / fVar34;
          fVar38 = fVar14;
          if (fVar34 <= fVar14) {
            fVar38 = fVar34;
          }
          fVar37 = fVar38 * fVar37;
          fVar32 = fVar38 * fVar32;
        }
        sVar19 = (short)uVar23;
        sVar17 = (short)iVar26 * 2;
        sVar30 = sVar19 * 2 + sVar29;
        **(float **)(param_1 + 0x40) = param_2[uVar25 * 2] - fVar39 * fVar32;
        *(float *)(*(longlong *)(param_1 + 0x40) + 4) = param_2[uVar25 * 2 + 1] - fVar39 * fVar37;
        lVar6 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar6 + 8) = uVar1;
        *(undefined4 *)(lVar6 + 0xc) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x14) = fVar39 * fVar32 + param_2[uVar25 * 2];
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x18) = fVar39 * fVar37 + param_2[uVar25 * 2 + 1]
        ;
        lVar6 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar6 + 0x1c) = uVar1;
        *(undefined4 *)(lVar6 + 0x20) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = uVar22;
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
        **(short **)(param_1 + 0x48) = sVar30;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar17 + sVar29;
        sVar17 = sVar17 + sVar29 + 1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar17;
        *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar17;
        sVar17 = sVar19 * 2 + sVar29 + 1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar17;
        *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar30;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
        fVar34 = (pfVar7[uVar25 * 2 + 2] + pfVar7[uVar25 * 2]) * fVar31;
        fVar37 = (pfVar7[uVar25 * 2 + 3] + pfVar7[uVar25 * 2 + 1]) * fVar31;
        fVar32 = fVar37 * fVar37 + fVar34 * fVar34;
        if (fVar36 < fVar32) {
          fVar32 = fVar33 / fVar32;
          fVar38 = fVar14;
          if (fVar32 <= fVar14) {
            fVar38 = fVar32;
          }
          fVar34 = fVar34 * fVar38;
          fVar37 = fVar37 * fVar38;
        }
        sVar9 = sVar19 * 2;
        sVar18 = sVar29 + 2 + sVar9;
        **(float **)(param_1 + 0x40) = param_2[uVar25 * 2 + 2] - fVar39 * fVar34;
        *(float *)(*(longlong *)(param_1 + 0x40) + 4) = param_2[uVar25 * 2 + 3] - fVar39 * fVar37;
        lVar6 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar6 + 8) = uVar1;
        *(undefined4 *)(lVar6 + 0xc) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x14) = fVar39 * fVar34 + param_2[uVar25 * 2 + 2]
        ;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x18) = fVar39 * fVar37 + param_2[uVar25 * 2 + 3]
        ;
        lVar6 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar6 + 0x1c) = uVar1;
        *(undefined4 *)(lVar6 + 0x20) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = uVar22;
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
        **(short **)(param_1 + 0x48) = sVar18;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar30;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar17;
        *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar17;
        *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar29 + 3 + sVar9;
        *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar18;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
        fVar34 = (pfVar7[uVar25 * 2 + 2] + pfVar7[uVar25 * 2 + 4]) * fVar31;
        fVar37 = (pfVar7[uVar25 * 2 + 5] + pfVar7[uVar25 * 2 + 3]) * fVar31;
        fVar32 = fVar37 * fVar37 + fVar34 * fVar34;
        if (fVar36 < fVar32) {
          fVar32 = fVar33 / fVar32;
          fVar38 = fVar14;
          if (fVar32 <= fVar14) {
            fVar38 = fVar32;
          }
          fVar34 = fVar34 * fVar38;
          fVar37 = fVar37 * fVar38;
        }
        sVar17 = (sVar19 + 1) * 2;
        sVar19 = sVar29 + 4 + sVar9;
        **(float **)(param_1 + 0x40) = param_2[uVar25 * 2 + 4] - fVar39 * fVar34;
        *(float *)(*(longlong *)(param_1 + 0x40) + 4) = param_2[uVar25 * 2 + 5] - fVar39 * fVar37;
        lVar6 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar6 + 8) = uVar1;
        *(undefined4 *)(lVar6 + 0xc) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x14) = fVar39 * fVar34 + param_2[uVar25 * 2 + 4]
        ;
        lVar6 = uVar25 * 2;
        uVar25 = uVar25 + 3;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x18) = fVar39 * fVar37 + param_2[lVar6 + 5];
        lVar6 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar6 + 0x1c) = uVar1;
        *(undefined4 *)(lVar6 + 0x20) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = uVar22;
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
        **(short **)(param_1 + 0x48) = sVar19;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar17 + sVar29;
        sVar17 = sVar29 + 1 + sVar17;
        iVar26 = (int)uVar23 + 2;
        uVar21 = (int)uVar23 + 3;
        uVar23 = (ulonglong)uVar21;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar17;
        *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar17;
        *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar29 + 5 + sVar9;
        *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar19;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
      } while ((int)uVar21 < 6);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 0xc;
    }
  }
  return;
}


