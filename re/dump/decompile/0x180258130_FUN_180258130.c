// 0x180258130  FUN_180258130
// size=2064 thunk=false
// signature: undefined FUN_180258130()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180258130(longlong *param_1,longlong param_2,longlong *param_3)

{
  short *psVar1;
  short sVar2;
  undefined2 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  short sVar7;
  char cVar8;
  longlong lVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  short *psVar13;
  void *pvVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  void *pvVar18;
  ulonglong uVar19;
  longlong lVar20;
  void *pvVar21;
  void *pvVar22;
  void *pvVar23;
  longlong *plVar24;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [56];
  undefined1 local_d8 [2];
  undefined2 local_d6 [3];
  void *local_d0;
  longlong *local_c8;
  void *local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  void *pvStack_a8;
  void **local_a0;
  ulonglong local_98;
  longlong local_90;
  ulonglong *local_88;
  ulonglong *puStack_80;
  ulonglong *local_78;
  void *local_70;
  void *pvStack_68;
  void *local_60;
  undefined8 uStack_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  puVar16 = auStack_118;
  puVar15 = auStack_118;
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_118;
  cVar8 = *(char *)(param_2 + 0x21);
  plVar24 = param_1 + 4;
  if (((char)param_1[3] == cVar8) && (*plVar24 == *(longlong *)(param_2 + 0x40))) {
    bVar5 = false;
    *(char *)(param_1 + 3) = cVar8;
    *plVar24 = *(longlong *)(param_2 + 0x40);
  }
  else {
    *(char *)(param_1 + 3) = cVar8;
    *plVar24 = *(longlong *)(param_2 + 0x40);
    if (cVar8 == '\0') {
      if (*param_1 != param_1[1]) {
        param_1[1] = *param_1;
      }
      lVar11 = *param_3;
      puVar17 = auStack_118;
      uVar12 = 0;
      if ((param_3[1] - lVar11 >> 5) * -0x5555555555555555 != 0) {
        do {
          lVar20 = uVar12 * 0x60;
          uVar19 = 0;
          if (*(longlong *)(lVar11 + 8 + lVar20) - *(longlong *)(lVar11 + lVar20) >> 4 != 0) {
            do {
              if ((byte)(*(char *)(*(longlong *)(lVar20 + lVar11) + 2 + uVar19 * 0x10) - 0x10U) < 4)
              {
                *(undefined1 *)(*(longlong *)(lVar20 + lVar11) + 2 + uVar19 * 0x10) = 5;
              }
              uVar19 = uVar19 + 1;
              lVar11 = *param_3;
            } while (uVar19 < (ulonglong)
                              (*(longlong *)(lVar20 + 8 + lVar11) - *(longlong *)(lVar20 + lVar11)
                              >> 4));
          }
          uVar12 = uVar12 + 1;
          puVar17 = auStack_118;
        } while (uVar12 < (ulonglong)((param_3[1] - lVar11 >> 5) * -0x5555555555555555));
      }
      goto LAB_180258903;
    }
    bVar5 = true;
  }
  puVar17 = auStack_118;
  if ((cVar8 == '\0') || ((!bVar5 && (puVar17 = auStack_118, (char)param_3[3] == '\0'))))
  goto LAB_180258903;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_70 = (void *)0x0;
  pvStack_68 = (void *)0x0;
  pvVar14 = (void *)0x0;
  local_60 = (void *)0x0;
  uVar12 = param_1[1] - *param_1 >> 6;
  puVar17 = auStack_118;
  local_c8 = plVar24;
  if (uVar12 != 0) {
    if (0x3ffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    uVar12 = uVar12 * 0x40;
    pvVar18 = pvVar14;
    if (uVar12 != 0) {
      if (uVar12 < 0x1000) {
        pvVar18 = (void *)FUN_1802d8350(uVar12);
        puVar16 = auStack_118;
      }
      else {
        if (uVar12 + 0x27 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_180012fe0();
        }
        lVar20 = FUN_1802d8350();
        lVar11 = lVar20;
        if (lVar20 == 0) {
          lVar11 = 5;
          pcVar4 = (code *)swi(0x29);
          lVar20 = (*pcVar4)();
          puVar15 = auStack_110;
        }
        pvVar18 = (void *)(lVar20 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)pvVar18 - 8) = lVar11;
        puVar16 = puVar15;
      }
    }
    local_60 = (void *)((longlong)pvVar18 + uVar12);
    local_a0 = &local_70;
    pvVar22 = (void *)*param_1;
    uVar12 = param_1[1] - (longlong)pvVar22;
    *(undefined8 *)(puVar16 + -8) = 0x18025832b;
    local_70 = pvVar18;
    pvStack_68 = pvVar18;
    memmove(pvVar18,pvVar22,uVar12);
    pvStack_68 = (void *)((uVar12 & 0xffffffffffffffc0) + (longlong)pvVar18);
    local_a0 = (void **)0x0;
    puVar17 = puVar16;
  }
  uStack_58 = CONCAT71(uStack_58._1_7_,(char)param_1[3]);
  local_50 = *plVar24;
  uStack_48 = CONCAT71(uStack_48._1_7_,(char)param_1[5]);
  if (*param_1 != param_1[1]) {
    param_1[1] = *param_1;
  }
  local_88 = (ulonglong *)0x0;
  puStack_80 = (ulonglong *)0x0;
  local_78 = (ulonglong *)0x0;
  local_d0 = (void *)0x0;
  lVar11 = *param_3;
  pvVar18 = pvVar14;
  pvVar22 = pvVar14;
  if ((param_3[1] - lVar11 >> 5) * -0x5555555555555555 != 0) {
    do {
      lVar20 = (longlong)pvVar22 * 0x60;
      pvVar23 = pvVar14;
      local_90 = lVar20;
      if (*(longlong *)(lVar11 + 8 + lVar20) - *(longlong *)(lVar11 + lVar20) >> 4 != 0) {
        do {
          psVar13 = (short *)(*(longlong *)(lVar20 + lVar11) + (longlong)pvVar23 * 0x10);
          cVar8 = (char)psVar13[1];
          if (((cVar8 == '\x05') || ((byte)(cVar8 - 0x10U) < 4)) &&
             ((sVar2 = *psVar13, sVar2 == 0x7b || ((sVar2 == 0x5b || (sVar2 == 0x28)))))) {
            local_98 = param_1[1] - *param_1 >> 6;
            if (puStack_80 == local_78) {
              *(undefined8 *)(puVar17 + -8) = 0x18025855a;
              FUN_180221c00(&local_88,puStack_80,&local_98);
            }
            else {
              *puStack_80 = local_98;
              puStack_80 = puStack_80 + 1;
            }
            local_d8[0] = 1;
            local_c0 = (void *)0x0;
            uStack_b8 = 0;
            local_d6[0] = 0;
            psVar1 = (short *)param_1[1];
            local_b0 = pvVar22;
            pvStack_a8 = pvVar23;
            if (psVar1 == (short *)param_1[2]) {
              *(undefined1 **)(puVar17 + 0x38) = local_d8;
              *(void ***)(puVar17 + 0x30) = &local_d0;
              *(void ***)(puVar17 + 0x28) = &local_c0;
              *(undefined2 **)(puVar17 + 0x20) = local_d6;
              *(undefined8 *)(puVar17 + -8) = 0x1802585e4;
              FUN_1802636e0(param_1,psVar1,psVar13);
            }
            else {
              *psVar1 = *psVar13;
              *(void **)(psVar1 + 4) = pvVar22;
              *(void **)(psVar1 + 8) = pvVar23;
              psVar1[0xc] = 0;
              psVar1[0x10] = 0;
              psVar1[0x11] = 0;
              psVar1[0x12] = 0;
              psVar1[0x13] = 0;
              psVar1[0x14] = 0;
              psVar1[0x15] = 0;
              psVar1[0x16] = 0;
              psVar1[0x17] = 0;
              *(void **)(psVar1 + 0x18) = pvVar18;
              *(undefined1 *)(psVar1 + 0x1c) = 1;
              param_1[1] = param_1[1] + 0x40;
            }
            *(undefined *)(psVar13 + 1) = (&DAT_18037d480)[(ulonglong)pvVar18 % 3];
            pvVar18 = (void *)((longlong)pvVar18 + 1);
            lVar20 = local_90;
            local_d0 = pvVar18;
          }
          else if (((cVar8 == '\x05') || ((byte)(cVar8 - 0x10U) < 4)) &&
                  (((sVar2 = *psVar13, sVar2 == 0x7d || (sVar2 == 0x5d)) || (sVar2 == 0x29)))) {
            if (puStack_80 == local_88) {
              *(undefined1 *)(psVar13 + 1) = 0x13;
            }
            else {
              puVar10 = puStack_80 + -1;
              if ((ulonglong)(param_1[1] - *param_1 >> 6) <= *puVar10) goto LAB_180258931;
              psVar1 = (short *)(*puVar10 * 0x40 + *param_1);
              pvVar18 = (void *)((longlong)pvVar18 + -1);
              sVar2 = *psVar13;
              if (sVar2 == 0x7d) {
                sVar7 = 0x7b;
              }
              else if (sVar2 == 0x5d) {
                sVar7 = 0x5b;
              }
              else {
                sVar7 = sVar2;
                if (sVar2 == 0x29) {
                  sVar7 = 0x28;
                }
              }
              local_d0 = pvVar18;
              puStack_80 = puVar10;
              if (*psVar1 == sVar7) {
                *(undefined *)(psVar13 + 1) = (&DAT_18037d480)[(ulonglong)pvVar18 % 3];
                psVar1[0xc] = sVar2;
                *(void **)(psVar1 + 0x10) = pvVar22;
                *(void **)(psVar1 + 0x14) = pvVar23;
              }
              else {
                *(undefined1 *)(psVar13 + 1) = 0x13;
                *(undefined1 *)
                 (*(longlong *)(*(longlong *)(psVar1 + 4) * 0x60 + *param_3) + 2 +
                 *(longlong *)(psVar1 + 8) * 0x10) = 0x13;
                param_1[1] = param_1[1] + -0x40;
              }
            }
          }
          pvVar23 = (void *)((longlong)pvVar23 + 1);
          lVar11 = *param_3;
        } while (pvVar23 < (void *)(*(longlong *)(lVar20 + 8 + lVar11) -
                                    *(longlong *)(lVar20 + lVar11) >> 4));
      }
      pvVar22 = (void *)((longlong)pvVar22 + 1);
      plVar24 = local_c8;
    } while (pvVar22 < (void *)((param_3[1] - lVar11 >> 5) * -0x5555555555555555));
  }
  puVar10 = puStack_80;
  if (puStack_80 != local_88) {
    while (puVar10 != local_88) {
      cVar8 = -1;
      if (local_88 <= puVar10) {
        cVar8 = '\x01';
      }
      if (cVar8 < '\x01') break;
      puVar10 = puVar10 + -1;
      lVar11 = *param_1;
      if ((ulonglong)(param_1[1] - lVar11 >> 6) <= *puVar10) goto LAB_180258931;
      lVar20 = *puVar10 * 0x40;
      *(undefined1 *)
       (*(longlong *)(*(longlong *)(lVar20 + 8 + lVar11) * 0x60 + *param_3) + 2 +
       *(longlong *)(lVar20 + 0x10 + lVar11) * 0x10) = 0x13;
      pvVar22 = (void *)(*puVar10 * 0x40 + *param_1);
      pvVar18 = (void *)((longlong)pvVar22 + 0x40);
      lVar11 = param_1[1];
      *(undefined8 *)(puVar17 + -8) = 0x1802586df;
      memmove(pvVar22,pvVar18,lVar11 - (longlong)pvVar18);
      param_1[1] = param_1[1] + -0x40;
    }
  }
  if ((*plVar24 != 0) && (*(char *)(*plVar24 + 0x238) != '\0')) {
    lVar11 = param_3[1];
    lVar20 = *param_3;
    if ((lVar11 - lVar20 >> 5) * -0x5555555555555555 != 0) {
      do {
        lVar9 = (longlong)pvVar14 * 0x60;
        if (*(longlong *)(lVar9 + 8 + lVar20) != *(longlong *)(lVar9 + lVar20)) {
          bVar5 = false;
          pvVar18 = (void *)((longlong)pvVar14 + 1);
          pvVar23 = (void *)((lVar11 - lVar20 >> 5) * -0x5555555555555555);
          pvVar22 = pvVar14;
          if (pvVar18 < pvVar23) {
            do {
              pvVar21 = pvVar22;
              if (bVar5) break;
              lVar11 = (longlong)pvVar18 * 0x60;
              if ((*(longlong *)(lVar11 + 8 + lVar20) != *(longlong *)(lVar11 + lVar20)) &&
                 (pvVar21 = pvVar18,
                 *(ulonglong *)(lVar11 + 0x18 + lVar20) <= *(ulonglong *)(lVar9 + 0x18 + lVar20))) {
                bVar5 = true;
                pvVar21 = pvVar22;
              }
              pvVar18 = (void *)((longlong)pvVar18 + 1);
              pvVar22 = pvVar21;
            } while (pvVar18 < pvVar23);
            if (pvVar14 < pvVar21) {
              pvStack_a8 = (void *)(*(longlong *)((longlong)pvVar21 * 0x60 + 8 + lVar20) -
                                    *(longlong *)((longlong)pvVar21 * 0x60 + lVar20) >> 4);
              uStack_b8 = 0;
              puVar3 = (undefined2 *)param_1[1];
              local_c0 = pvVar14;
              local_b0 = pvVar21;
              if (puVar3 == (undefined2 *)param_1[2]) {
                *(undefined8 *)(puVar17 + -8) = 0x18025880b;
                FUN_180263910(param_1,puVar3,&local_c0);
              }
              else {
                *puVar3 = 0;
                *(void **)(puVar3 + 4) = pvVar14;
                *(undefined8 *)(puVar3 + 8) = 0;
                puVar3[0xc] = 0;
                *(void **)(puVar3 + 0x10) = pvVar21;
                *(void **)(puVar3 + 0x14) = pvStack_a8;
                *(undefined8 *)(puVar3 + 0x18) = 0;
                *(undefined1 *)(puVar3 + 0x1c) = 0;
                param_1[1] = param_1[1] + 0x40;
              }
            }
          }
        }
        pvVar14 = (void *)((longlong)pvVar14 + 1);
        lVar11 = param_3[1];
        lVar20 = *param_3;
      } while (pvVar14 < (void *)((lVar11 - lVar20 >> 5) * -0x5555555555555555));
    }
    lVar11 = param_1[1];
    lVar20 = *param_1;
    *(undefined8 *)(puVar17 + -8) = 0x180258849;
    FUN_1802610e0(lVar20,lVar11,lVar11 - lVar20 >> 6,local_d8[0]);
  }
  lVar11 = *param_1;
  if ((longlong)pvStack_68 - (longlong)local_70 == param_1[1] - lVar11) {
    pvVar14 = local_70;
    if (local_70 != pvStack_68) {
      for (; (((*(longlong *)((longlong)pvVar14 + 8) == *(longlong *)(lVar11 + 8) &&
               (*(longlong *)((longlong)pvVar14 + 0x10) == *(longlong *)(lVar11 + 0x10))) &&
              (*(longlong *)((longlong)pvVar14 + 0x20) == *(longlong *)(lVar11 + 0x20))) &&
             (*(longlong *)((longlong)pvVar14 + 0x28) == *(longlong *)(lVar11 + 0x28)));
          lVar11 = lVar11 + 0x40) {
        pvVar14 = (void *)((longlong)pvVar14 + 0x40);
        if (pvVar14 == pvStack_68) goto LAB_1802588a7;
      }
      goto LAB_180258866;
    }
LAB_1802588a7:
    uVar6 = 0;
  }
  else {
LAB_180258866:
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 5) = uVar6;
  if (local_88 != (ulonglong *)0x0) {
    puVar10 = local_88;
    if ((0xfff < (ulonglong)(((longlong)local_78 - (longlong)local_88 >> 3) * 8)) &&
       (puVar10 = (ulonglong *)local_88[-1],
       0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)puVar10)))) {
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar17 = puVar17 + 8;
LAB_180258931:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar17 + -8) = 0x180258936;
      FUN_180262180();
    }
    *(undefined8 *)(puVar17 + -8) = 0x1802588ee;
    free(puVar10);
    local_88 = (ulonglong *)0x0;
    puStack_80 = (ulonglong *)0x0;
    local_78 = (ulonglong *)0x0;
  }
  *(undefined8 *)(puVar17 + -8) = 0x180258903;
  FUN_18021ddb0(&local_70);
LAB_180258903:
  *(undefined8 *)(puVar17 + -8) = 0x18025890f;
  return;
}


