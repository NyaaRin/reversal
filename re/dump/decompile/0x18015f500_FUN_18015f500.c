// 0x18015f500  FUN_18015f500
// size=3032 thunk=false
// signature: undefined FUN_18015f500()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_18015f500(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4,
             longlong *param_5)

{
  ulonglong *puVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  longlong *plVar19;
  byte *pbVar20;
  byte *pbVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  byte *pbVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  int iVar32;
  longlong lVar33;
  byte *pbVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 extraout_XMM0_Qb;
  float fVar40;
  double dVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  int local_168;
  int local_164;
  int local_160;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  
  iVar28 = (int)(DAT_1803e9a58 - DAT_1803e9a50 >> 3) * -0x1642c859;
  if (0 < iVar28) {
    iVar10 = *(int *)(param_3 + 0x10);
    if (iVar10 - 2U < 0xfff) {
      lVar33 = *param_1;
      local_164 = 0;
      if (0x163 < (ulonglong)(param_1[1] - lVar33)) {
        local_164 = *(int *)(lVar33 + 0x160);
      }
      iVar22 = 0;
      if (0x167 < (ulonglong)(param_1[1] - lVar33)) {
        iVar22 = *(int *)(lVar33 + 0x164);
      }
      local_fc = 0x7fc00000;
      local_100 = 0x7fc00000;
      local_104 = 0x7fc00000;
      local_108 = 0x7fc00000;
      FUN_18020a0c0(lVar33,(longlong)iVar10 * (longlong)iVar28,&local_108);
      uVar18 = DAT_1803817f0;
      fVar17 = DAT_180380bb0;
      fVar16 = DAT_180380934;
      local_160 = 0;
      if (0 < iVar10) {
        fVar35 = DAT_180380ac0;
        dVar41 = DAT_180380ac8;
        do {
          iVar32 = 0;
          lVar33 = (longlong)local_160 * (longlong)iVar28 * 0x1c + DAT_1803edd30;
          if (iVar28 < 4) goto LAB_18015f7b9;
          do {
            lVar31 = (longlong)iVar32;
            iVar32 = iVar32 + 4;
            lVar25 = lVar31 * 0xb8;
            lVar30 = lVar31 * 0x1c;
            puVar5 = (undefined8 *)(lVar25 + 8 + DAT_1803e9a50);
            uVar39 = puVar5[1];
            *(undefined8 *)(lVar30 + lVar33) = *puVar5;
            ((undefined8 *)(lVar30 + lVar33))[1] = uVar39;
            lVar12 = DAT_1803e9a50;
            *(undefined4 *)(lVar30 + 0x10 + lVar33) = *(undefined4 *)(lVar25 + 0x18 + DAT_1803e9a50)
            ;
            *(undefined4 *)(lVar30 + 0x14 + lVar33) = *(undefined4 *)(lVar25 + 0x1c + lVar12);
            *(undefined4 *)(lVar30 + 0x18 + lVar33) = *(undefined4 *)(lVar25 + 0x20 + lVar12);
            lVar30 = (lVar31 + 1) * 0x1c;
            lVar25 = (lVar31 + 1) * 0xb8;
            puVar5 = (undefined8 *)(lVar25 + 8 + DAT_1803e9a50);
            uVar39 = puVar5[1];
            *(undefined8 *)(lVar30 + lVar33) = *puVar5;
            ((undefined8 *)(lVar30 + lVar33))[1] = uVar39;
            lVar12 = DAT_1803e9a50;
            *(undefined4 *)(lVar30 + 0x10 + lVar33) = *(undefined4 *)(lVar25 + 0x18 + DAT_1803e9a50)
            ;
            *(undefined4 *)(lVar30 + 0x14 + lVar33) = *(undefined4 *)(lVar25 + 0x1c + lVar12);
            *(undefined4 *)(lVar30 + 0x18 + lVar33) = *(undefined4 *)(lVar25 + 0x20 + lVar12);
            lVar30 = (lVar31 + 2) * 0x1c;
            lVar25 = (lVar31 + 2) * 0xb8;
            puVar5 = (undefined8 *)(lVar25 + 8 + DAT_1803e9a50);
            uVar39 = puVar5[1];
            *(undefined8 *)(lVar30 + lVar33) = *puVar5;
            ((undefined8 *)(lVar30 + lVar33))[1] = uVar39;
            lVar12 = DAT_1803e9a50;
            *(undefined4 *)(lVar30 + 0x10 + lVar33) = *(undefined4 *)(lVar25 + 0x18 + DAT_1803e9a50)
            ;
            *(undefined4 *)(lVar30 + 0x14 + lVar33) = *(undefined4 *)(lVar25 + 0x1c + lVar12);
            *(undefined4 *)(lVar30 + 0x18 + lVar33) = *(undefined4 *)(lVar25 + 0x20 + lVar12);
            lVar30 = (lVar31 + 3) * 0x1c;
            lVar25 = (lVar31 + 3) * 0xb8;
            puVar6 = (undefined4 *)(lVar25 + 8 + DAT_1803e9a50);
            uVar13 = puVar6[1];
            uVar14 = puVar6[2];
            uVar15 = puVar6[3];
            puVar3 = (undefined4 *)(lVar30 + lVar33);
            *puVar3 = *puVar6;
            puVar3[1] = uVar13;
            puVar3[2] = uVar14;
            puVar3[3] = uVar15;
            lVar12 = DAT_1803e9a50;
            *(undefined4 *)(lVar30 + 0x10 + lVar33) = *(undefined4 *)(lVar25 + 0x18 + DAT_1803e9a50)
            ;
            *(undefined4 *)(lVar30 + 0x14 + lVar33) = *(undefined4 *)(lVar25 + 0x1c + lVar12);
            *(undefined4 *)(lVar30 + 0x18 + lVar33) = *(undefined4 *)(lVar25 + 0x20 + lVar12);
          } while (iVar32 < iVar28 + -3);
          for (; iVar32 < iVar28; iVar32 = iVar32 + 1) {
LAB_18015f7b9:
            lVar30 = (longlong)iVar32 * 0x1c;
            lVar25 = (longlong)iVar32 * 0xb8;
            puVar6 = (undefined4 *)(lVar25 + 8 + DAT_1803e9a50);
            uVar13 = puVar6[1];
            uVar14 = puVar6[2];
            uVar15 = puVar6[3];
            puVar3 = (undefined4 *)(lVar30 + lVar33);
            *puVar3 = *puVar6;
            puVar3[1] = uVar13;
            puVar3[2] = uVar14;
            puVar3[3] = uVar15;
            lVar12 = DAT_1803e9a50;
            *(undefined4 *)(lVar30 + 0x10 + lVar33) = *(undefined4 *)(lVar25 + 0x18 + DAT_1803e9a50)
            ;
            *(undefined4 *)(lVar30 + 0x14 + lVar33) = *(undefined4 *)(lVar25 + 0x1c + lVar12);
            *(undefined4 *)(lVar30 + 0x18 + lVar33) = *(undefined4 *)(lVar25 + 0x20 + lVar12);
          }
          iVar32 = *(int *)(param_3 + 0x54);
          if (iVar32 < 1) {
            iVar24 = *(int *)(param_3 + 0x34);
            iVar23 = *(int *)(param_3 + 0x38);
            iVar32 = local_160;
          }
          else {
            piVar4 = (int *)(*(int *)(param_3 + 0x50) + param_3 + (longlong)(local_160 / iVar32) * 8
                            );
            piVar11 = (int *)*param_1;
            if (((piVar4 < piVar11) || ((ulonglong)(param_1[1] - (longlong)piVar11) < 8)) ||
               ((param_1[1] - (longlong)piVar11) - 8U <
                (ulonglong)((longlong)piVar4 - (longlong)piVar11))) goto LAB_180160045;
            iVar24 = *piVar4;
            iVar23 = piVar4[1];
            iVar32 = local_160 - (local_160 / iVar32) * iVar32;
          }
          if (iVar24 == 0) {
            pbVar34 = (byte *)(iVar23 + param_3);
            plVar19 = param_1;
          }
          else {
            if (((*param_2 == param_2[1]) || (iVar24 < 0)) || (local_164 <= iVar24)) {
LAB_180160045:
              if (DAT_1803edd30 == DAT_1803edd38) {
                return 0;
              }
              DAT_1803edd38 = DAT_1803edd30;
              return 0;
            }
            iVar29 = 0;
            lVar12 = (longlong)iVar22 + (longlong)iVar24 * 8;
            if (lVar12 + 4U <= (ulonglong)(param_1[1] - *param_1)) {
              iVar29 = *(int *)(lVar12 + *param_1);
            }
            pbVar34 = (byte *)((longlong)iVar23 + (longlong)iVar29 + *param_2);
            plVar19 = param_2;
          }
          local_168 = 0;
          do {
            if (((pbVar34 == (byte *)0x0) || (pbVar27 = (byte *)*plVar19, pbVar34 < pbVar27)) ||
               (((ulonglong)(plVar19[1] - (longlong)pbVar27) < 4 ||
                ((plVar19[1] - (longlong)pbVar27) - 4U <
                 (ulonglong)((longlong)pbVar34 - (longlong)pbVar27))))) break;
            lVar12 = *param_4;
            bVar7 = *pbVar34;
            if ((int)(uint)bVar7 < (int)(param_4[1] - lVar12 >> 3) * -0x1642c859) {
              puVar1 = (ulonglong *)(pbVar34 + 4);
              bVar8 = pbVar34[1];
              lVar25 = (ulonglong)bVar7 * 0xb8;
              iVar23 = *(int *)(*param_5 + (ulonglong)bVar7 * 4);
              if ((bVar8 & 2) == 0) {
                if ((bVar8 & 0x20) == 0) {
                  fVar47 = *(float *)(lVar12 + 8 + lVar25);
                  fVar46 = *(float *)(lVar12 + 0xc + lVar25);
                  fVar45 = *(float *)(lVar12 + 0x10 + lVar25);
                  fVar42 = *(float *)(lVar12 + 0x14 + lVar25);
                  if ((bVar8 & 8) != 0) {
                    if (((short)(ushort)*puVar1 < 1) ||
                       (pbVar27 = (byte *)((longlong)(short)(ushort)*puVar1 + (longlong)puVar1),
                       pbVar27 == (byte *)0x0)) {
LAB_18015fb78:
                      fVar47 = 0.0;
                    }
                    else {
                      iVar29 = 0;
                      pbVar20 = pbVar27;
                      iVar24 = iVar32;
                      if ((int)(uint)pbVar27[1] <= iVar32) {
                        do {
                          pbVar27 = pbVar20 + (ulonglong)*pbVar20 * 2 + 2;
                          pbVar21 = pbVar20 + (ulonglong)*pbVar20 * 2 + 3;
                          if ((*pbVar21 == 0) || (iVar29 = iVar29 + 1, 0x200 < iVar29))
                          goto LAB_18015fb78;
                          iVar24 = iVar24 - (uint)pbVar20[1];
                          pbVar20 = pbVar27;
                        } while ((int)(uint)*pbVar21 <= iVar24);
                      }
                      uVar26 = (ulonglong)*pbVar27;
                      if (iVar24 < (int)(uint)*pbVar27) {
                        uVar26 = (ulonglong)(iVar24 + 1);
                      }
                      fVar47 = (float)(int)*(short *)(pbVar27 + uVar26 * 2) *
                               *(float *)(lVar12 + 0x3c + lVar25);
                    }
                    if ((*(short *)(pbVar34 + 6) < 1) ||
                       (pbVar27 = (byte *)((longlong)*(short *)(pbVar34 + 6) + (longlong)puVar1),
                       pbVar27 == (byte *)0x0)) {
LAB_18015fbf8:
                      fVar46 = 0.0;
                    }
                    else {
                      iVar29 = 0;
                      pbVar20 = pbVar27;
                      iVar24 = iVar32;
                      if ((int)(uint)pbVar27[1] <= iVar32) {
                        do {
                          pbVar27 = pbVar20 + (ulonglong)*pbVar20 * 2 + 2;
                          pbVar21 = pbVar20 + (ulonglong)*pbVar20 * 2 + 3;
                          if ((*pbVar21 == 0) || (iVar29 = iVar29 + 1, 0x200 < iVar29))
                          goto LAB_18015fbf8;
                          iVar24 = iVar24 - (uint)pbVar20[1];
                          pbVar20 = pbVar27;
                        } while ((int)(uint)*pbVar21 <= iVar24);
                      }
                      uVar26 = (ulonglong)*pbVar27;
                      if (iVar24 < (int)(uint)*pbVar27) {
                        uVar26 = (ulonglong)(iVar24 + 1);
                      }
                      fVar46 = (float)(int)*(short *)(pbVar27 + uVar26 * 2) *
                               *(float *)(lVar12 + 0x40 + lVar25);
                    }
                    if ((*(short *)(pbVar34 + 8) < 1) ||
                       (pbVar27 = (byte *)((longlong)*(short *)(pbVar34 + 8) + (longlong)puVar1),
                       pbVar27 == (byte *)0x0)) {
LAB_18015fc75:
                      fVar45 = 0.0;
                    }
                    else {
                      iVar29 = 0;
                      pbVar20 = pbVar27;
                      iVar24 = iVar32;
                      if ((int)(uint)pbVar27[1] <= iVar32) {
                        do {
                          pbVar27 = pbVar20 + (ulonglong)*pbVar20 * 2 + 2;
                          pbVar21 = pbVar20 + (ulonglong)*pbVar20 * 2 + 3;
                          if ((*pbVar21 == 0) || (iVar29 = iVar29 + 1, 0x200 < iVar29))
                          goto LAB_18015fc75;
                          iVar24 = iVar24 - (uint)pbVar20[1];
                          pbVar20 = pbVar27;
                        } while ((int)(uint)*pbVar21 <= iVar24);
                      }
                      uVar26 = (ulonglong)*pbVar27;
                      if (iVar24 < (int)(uint)*pbVar27) {
                        uVar26 = (ulonglong)(iVar24 + 1);
                      }
                      fVar45 = (float)(int)*(short *)(pbVar27 + uVar26 * 2) *
                               *(float *)(lVar12 + 0x44 + lVar25);
                    }
                    if ((bVar8 & 0x10) == 0) {
                      fVar47 = fVar47 + *(float *)(lVar12 + 0x24 + lVar25);
                      fVar46 = fVar46 + *(float *)(lVar12 + 0x28 + lVar25);
                      fVar45 = fVar45 + *(float *)(lVar12 + 0x2c + lVar25);
                    }
                    fVar42 = sinf(fVar45 * fVar35);
                    fVar37 = cosf(fVar45 * fVar35);
                    fVar40 = sinf(fVar46 * fVar35);
                    fVar35 = cosf(fVar46 * fVar35);
                    fVar47 = fVar47 * DAT_180380ac0;
                    fVar38 = sinf(fVar47);
                    fVar36 = cosf(fVar47);
                    fVar47 = fVar38 * fVar35 * fVar37 - fVar36 * fVar40 * fVar42;
                    fVar46 = fVar36 * fVar40 * fVar37 + fVar38 * fVar35 * fVar42;
                    fVar45 = fVar36 * fVar35 * fVar42 - fVar38 * fVar40 * fVar37;
                    fVar42 = fVar36 * fVar35 * fVar37 + fVar38 * fVar40 * fVar42;
                    fVar35 = DAT_180380ac0;
                  }
                }
                else {
                  uVar26 = *puVar1;
                  fVar47 = (float)(int)(((uint)*puVar1 & 0x1fffff) - 0x100000) * fVar16;
                  fVar46 = (float)(int)(((uint)(uVar26 >> 0x15) & 0x1fffff) - 0x100000) * fVar16;
                  fVar45 = (float)(int)(((uint)(uVar26 >> 0x2a) & 0x1fffff) - 0x100000) * fVar16;
                  fVar42 = ((fVar17 - fVar47 * fVar47) - fVar46 * fVar46) - fVar45 * fVar45;
                  if (fVar42 < 0.0) {
                    fVar42 = sqrtf(fVar42);
                  }
                  else {
                    fVar42 = SQRT(fVar42);
                  }
                  if ((longlong)uVar26 < 0) {
                    fVar42 = (float)((uint)fVar42 ^ uVar18);
                  }
                }
              }
              else {
                uVar9 = *(ushort *)(pbVar34 + 8);
                fVar47 = (float)((double)(int)((ushort)*puVar1 - 0x8000) * dVar41);
                fVar46 = (float)((double)(int)(*(ushort *)(pbVar34 + 6) - 0x8000) * dVar41);
                fVar45 = (float)((double)(int)((uVar9 & 0x7fff) - 0x4000) * _DAT_180380ad8);
                fVar42 = ((fVar17 - fVar47 * fVar47) - fVar46 * fVar46) - fVar45 * fVar45;
                if (fVar42 < 0.0) {
                  fVar42 = sqrtf(fVar42);
                }
                else {
                  fVar42 = SQRT(fVar42);
                }
                if ((short)uVar9 < 0) {
                  fVar42 = (float)((uint)fVar42 ^ uVar18);
                }
              }
              bVar7 = pbVar34[1];
              pbVar27 = (byte *)((longlong)puVar1 +
                                (ulonglong)(-(uint)((bVar8 & 2) != 0) & 6) +
                                (ulonglong)(bVar7 >> 2 & 8) +
                                (ulonglong)(-(uint)((bVar7 & 8) != 0) & 6));
              if ((bVar7 & 1) == 0) {
                fVar37 = *(float *)(lVar12 + 0x18 + lVar25);
                fVar40 = *(float *)(lVar12 + 0x1c + lVar25);
                fVar38 = *(float *)(lVar12 + 0x20 + lVar25);
                if ((bVar7 & 4) != 0) {
                  if ((*(short *)pbVar27 < 1) ||
                     (pbVar20 = pbVar27 + *(short *)pbVar27, pbVar20 == (byte *)0x0)) {
LAB_18015fe45:
                    fVar40 = 0.0;
                  }
                  else {
                    iVar29 = 0;
                    pbVar21 = pbVar20;
                    iVar24 = iVar32;
                    if ((int)(uint)pbVar20[1] <= iVar32) {
                      do {
                        pbVar20 = pbVar21 + (ulonglong)*pbVar21 * 2 + 2;
                        pbVar2 = pbVar21 + (ulonglong)*pbVar21 * 2 + 3;
                        if ((*pbVar2 == 0) || (iVar29 = iVar29 + 1, 0x200 < iVar29))
                        goto LAB_18015fe45;
                        iVar24 = iVar24 - (uint)pbVar21[1];
                        pbVar21 = pbVar20;
                      } while ((int)(uint)*pbVar2 <= iVar24);
                    }
                    uVar26 = (ulonglong)*pbVar20;
                    if (iVar24 < (int)(uint)*pbVar20) {
                      uVar26 = (ulonglong)(iVar24 + 1);
                    }
                    fVar40 = (float)(int)*(short *)(pbVar20 + uVar26 * 2) *
                             *(float *)(lVar12 + 0x30 + lVar25);
                  }
                  if ((*(short *)(pbVar27 + 2) < 1) ||
                     (pbVar20 = pbVar27 + *(short *)(pbVar27 + 2), pbVar20 == (byte *)0x0)) {
LAB_18015fec5:
                    auVar44 = ZEXT816(0);
                  }
                  else {
                    iVar29 = 0;
                    pbVar21 = pbVar20;
                    iVar24 = iVar32;
                    if ((int)(uint)pbVar20[1] <= iVar32) {
                      do {
                        pbVar20 = pbVar21 + (ulonglong)*pbVar21 * 2 + 2;
                        pbVar2 = pbVar21 + (ulonglong)*pbVar21 * 2 + 3;
                        if ((*pbVar2 == 0) || (iVar29 = iVar29 + 1, 0x200 < iVar29))
                        goto LAB_18015fec5;
                        iVar24 = iVar24 - (uint)pbVar21[1];
                        pbVar21 = pbVar20;
                      } while ((int)(uint)*pbVar2 <= iVar24);
                    }
                    uVar26 = (ulonglong)*pbVar20;
                    if (iVar24 < (int)(uint)*pbVar20) {
                      uVar26 = (ulonglong)(iVar24 + 1);
                    }
                    auVar44 = ZEXT416((uint)((float)(int)*(short *)(pbVar20 + uVar26 * 2) *
                                            *(float *)(lVar12 + 0x34 + lVar25)));
                  }
                  if ((*(short *)(pbVar27 + 4) < 1) ||
                     (pbVar27 = pbVar27 + *(short *)(pbVar27 + 4), pbVar27 == (byte *)0x0)) {
LAB_18015ff45:
                    fVar38 = 0.0;
                  }
                  else {
                    iVar29 = 0;
                    pbVar20 = pbVar27;
                    iVar24 = iVar32;
                    if ((int)(uint)pbVar27[1] <= iVar32) {
                      do {
                        pbVar27 = pbVar20 + (ulonglong)*pbVar20 * 2 + 2;
                        pbVar21 = pbVar20 + (ulonglong)*pbVar20 * 2 + 3;
                        if ((*pbVar21 == 0) || (iVar29 = iVar29 + 1, 0x200 < iVar29))
                        goto LAB_18015ff45;
                        iVar24 = iVar24 - (uint)pbVar20[1];
                        pbVar20 = pbVar27;
                      } while ((int)(uint)*pbVar21 <= iVar24);
                    }
                    uVar26 = (ulonglong)*pbVar27;
                    if (iVar24 < (int)(uint)*pbVar27) {
                      uVar26 = (ulonglong)(iVar24 + 1);
                    }
                    fVar38 = (float)(int)*(short *)(pbVar27 + uVar26 * 2) *
                             *(float *)(lVar12 + 0x38 + lVar25);
                  }
                  if ((bVar7 & 0x10) == 0) {
                    auVar44._0_4_ = auVar44._0_4_ + *(float *)(lVar12 + 0x1c + lVar25);
                    fVar38 = fVar38 + *(float *)(lVar12 + 0x20 + lVar25);
                    fVar40 = fVar40 + fVar37;
                  }
                  fVar37 = fVar40;
                  fVar40 = auVar44._0_4_;
                }
              }
              else {
                fVar37 = (float)FUN_18001bac0(pbVar27);
                uVar39 = FUN_18001bac0(pbVar27 + 2);
                auVar43._8_4_ = (int)extraout_XMM0_Qb;
                auVar43._0_8_ = uVar39;
                auVar43._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
                fVar38 = (float)FUN_18001bac0(pbVar27 + 4);
                fVar40 = auVar43._0_4_;
              }
              dVar41 = DAT_180380ac8;
              if ((-1 < iVar23) && (iVar23 < iVar28)) {
                lVar31 = (longlong)iVar23 * 0x1c;
                lVar30 = (longlong)iVar23 * 0xb8;
                *(float *)(lVar31 + lVar33) = fVar47;
                *(float *)(lVar31 + 4 + lVar33) = fVar46;
                *(float *)(lVar31 + 8 + lVar33) = fVar45;
                *(float *)(lVar31 + 0xc + lVar33) = fVar42;
                fVar47 = *(float *)(lVar12 + 0x20 + lVar25);
                fVar46 = *(float *)(lVar12 + 0x18 + lVar25);
                fVar45 = *(float *)(lVar30 + 0x20 + DAT_1803e9a50);
                fVar42 = *(float *)(lVar30 + 0x18 + DAT_1803e9a50);
                *(float *)(lVar31 + 0x14 + lVar33) =
                     (fVar40 - *(float *)(lVar12 + 0x1c + lVar25)) +
                     *(float *)(lVar30 + 0x1c + DAT_1803e9a50);
                *(float *)(lVar31 + 0x18 + lVar33) = (fVar38 - fVar47) + fVar45;
                *(float *)(lVar31 + 0x10 + lVar33) = (fVar37 - fVar46) + fVar42;
              }
            }
            if (*(short *)(pbVar34 + 2) == 0) {
              pbVar34 = (byte *)0x0;
            }
            else {
              pbVar34 = pbVar34 + *(short *)(pbVar34 + 2);
            }
            local_168 = local_168 + 1;
          } while (local_168 < 0x400);
          local_160 = local_160 + 1;
        } while (local_160 < iVar10);
      }
      DAT_1803e9328 = *(float *)(param_3 + 8);
      if (*(float *)(param_3 + 8) <= fVar17) {
        DAT_1803e9328 = DAT_180381068;
      }
      DAT_180423a6c = iVar10;
      return 1;
    }
  }
  return 0;
}


