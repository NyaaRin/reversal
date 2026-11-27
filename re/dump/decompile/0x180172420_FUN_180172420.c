// 0x180172420  FUN_180172420
// size=3751 thunk=false
// signature: undefined FUN_180172420()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180172420(undefined8 *param_1,undefined8 param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  float fVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  float *pfVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  longlong lVar23;
  ulonglong *puVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  longlong *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  int local_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 *local_178;
  undefined4 *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 *local_158;
  undefined1 local_148 [8];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114 [3];
  undefined8 local_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  
  local_c8 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  local_19c = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_190 = param_1;
  local_188 = param_2;
  local_158 = param_1;
  lVar17 = FUN_1802d8350(0x20);
  *(longlong *)lVar17 = lVar17;
  *(longlong *)(lVar17 + 8) = lVar17;
  param_1[1] = lVar17;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 7;
  param_1[7] = 8;
  *(undefined4 *)param_1 = 0x3f800000;
  FUN_18022c1b0(param_1 + 3,0x10,param_1[1]);
  local_19c = 1;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_1a0 = 0;
  local_108 = 0;
  lStack_100 = 0;
  local_f8 = 0;
  lStack_100 = FUN_1802d8350(0x20);
  *(longlong *)lStack_100 = lStack_100;
  *(longlong *)(lStack_100 + 8) = lStack_100;
  fVar26 = DAT_180380bb0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 7;
  uStack_d0 = 8;
  local_108 = CONCAT44(local_108._4_4_,0x3f800000);
  FUN_18022c1b0(&uStack_f0,0x10,lStack_100);
  puVar8 = DAT_1803fb108;
  puVar24 = DAT_1803fb108;
  for (puVar22 = DAT_1803fb100; fVar27 = DAT_180380ac0, fVar6 = DAT_180380e28,
      puVar7 = DAT_1803fb100, DAT_1803fb108 = puVar24, puVar22 != puVar8; puVar22 = puVar22 + 1) {
    iVar13 = (**(code **)(*(longlong *)*puVar22 + 8))();
    if (iVar13 == 6) {
      FUN_18016e2a0(*puVar22);
    }
    puVar24 = DAT_1803fb108;
  }
  for (; DAT_180380ac0 = fVar27, DAT_180380e28 = fVar6, puVar7 != puVar24; puVar7 = puVar7 + 1) {
    plVar18 = (longlong *)*puVar7;
    if ((((plVar18 != (longlong *)0x0) && (*(char *)((longlong)plVar18 + 0x14) != '\0')) &&
        ((DAT_1803fcb80 != '\0' ||
         (((DAT_1803fcb81 == '\0' || (*(char *)((longlong)plVar18 + 0x16) != '\0')) &&
          ((*(char *)((longlong)plVar18 + 0x15) == '\0' ||
           (DAT_1803fcb68 <= *(float *)(plVar18 + 3))))))))) &&
       ((cVar11 = (**(code **)(*plVar18 + 0x38))(plVar18), cVar11 != '\0' &&
        (iVar13 = (**(code **)(*plVar18 + 8))(plVar18), iVar13 != 3)))) {
      local_168 = *(undefined8 *)param_3;
      uStack_160 = *(undefined8 *)(param_3 + 2);
      local_1b8 = 0xd;
      FUN_180171c50(&local_120,*puVar7,param_2,&local_168);
      uVar9 = (float)local_120;
      uVar10 = local_120._4_4_;
      local_1a8 = (longlong *)*puVar7;
      plVar18 = (longlong *)FUN_180215cd0(param_1,local_130,&local_1a8);
      lVar17 = *plVar18;
      *(undefined4 *)(lVar17 + 0x18) = uVar9;
      *(undefined4 *)(lVar17 + 0x1c) = uVar10;
      uVar9 = (float)local_120;
      uVar10 = local_120._4_4_;
      local_1a8 = (longlong *)*puVar7;
      plVar18 = (longlong *)FUN_180215cd0(&local_108,local_140,&local_1a8);
      lVar17 = *plVar18;
      *(undefined4 *)(lVar17 + 0x18) = uVar9;
      *(undefined4 *)(lVar17 + 0x1c) = uVar10;
    }
    fVar27 = DAT_180380ac0;
    fVar6 = DAT_180380e28;
  }
  if (DAT_1803fcb80 == '\0') {
    fVar26 = (float)FUN_180171430(2);
    fVar27 = (float)FUN_180171430(3);
    puVar22 = DAT_1803fb108;
    if (((0.0 < fVar26) || (0.0 < fVar27)) && (DAT_1803fb100 != DAT_1803fb108)) {
      fVar6 = (float)local_188;
      puVar24 = DAT_1803fb100;
      do {
        plVar18 = (longlong *)*puVar24;
        if ((((plVar18 != (longlong *)0x0) && (*(char *)((longlong)plVar18 + 0x14) != '\0')) &&
            ((DAT_1803fcb80 != '\0' ||
             (((DAT_1803fcb81 == '\0' || (*(char *)((longlong)plVar18 + 0x16) != '\0')) &&
              ((*(char *)((longlong)plVar18 + 0x15) == '\0' ||
               (DAT_1803fcb68 <= *(float *)(plVar18 + 3))))))))) &&
           (((cVar11 = (**(code **)(*plVar18 + 0x38))(plVar18), cVar11 != '\0' &&
             (iVar13 = (**(code **)(*plVar18 + 8))(plVar18), iVar13 != 3)) &&
            (((longlong *)*puVar24 == (longlong *)0x0 ||
             ((iVar13 = (**(code **)(*(longlong *)*puVar24 + 8))(), iVar13 != 4 && (iVar13 != 7)))))
            ))) {
          plVar18 = (longlong *)*puVar24;
          uVar21 = (((((((((ulonglong)plVar18 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (longlong)plVar18 >> 8 & 0xffU) * 0x100000001b3 ^
                        (longlong)plVar18 >> 0x10 & 0xffU) * 0x100000001b3 ^
                       (longlong)plVar18 >> 0x18 & 0xffU) * 0x100000001b3 ^
                      (longlong)plVar18 >> 0x20 & 0xffU) * 0x100000001b3 ^
                     (longlong)plVar18 >> 0x28 & 0xffU) * 0x100000001b3 ^
                    (longlong)plVar18 >> 0x30 & 0xffU) * 0x100000001b3 ^
                   (longlong)plVar18 >> 0x38 & 0xffU) * 0x100000001b3 & param_1[6];
          lVar17 = *(longlong *)(param_1[3] + 8 + uVar21 * 0x10);
          if (lVar17 == param_1[1]) {
LAB_180172897:
            lVar17 = 0;
          }
          else {
            plVar3 = *(longlong **)(lVar17 + 0x10);
            while (plVar18 != plVar3) {
              if (lVar17 == *(longlong *)(param_1[3] + uVar21 * 0x10)) goto LAB_180172897;
              lVar17 = *(longlong *)(lVar17 + 8);
              plVar3 = *(longlong **)(lVar17 + 0x10);
            }
          }
          if (((lVar17 != 0) && (lVar17 != param_1[1])) &&
             ((*(uint *)(plVar18 + 1) < 2 || (*(uint *)(plVar18 + 1) - 4 < 4)))) {
            (**(code **)(*plVar18 + 0x10))(plVar18,&local_120);
            fVar30 = (fVar6 + *param_3) - fVar26;
            fVar28 = fVar6 + param_3[2] + fVar27;
            if ((float)local_120 <= fVar28 - fVar30) {
              if ((0.0 < fVar26) &&
                 (*(float *)(lVar17 + 0x18) <= fVar30 && fVar30 != *(float *)(lVar17 + 0x18))) {
                *(float *)(lVar17 + 0x18) = fVar30;
              }
              if ((0.0 < fVar27) && (fVar28 < (float)local_120 + *(float *)(lVar17 + 0x18))) {
                *(float *)(lVar17 + 0x18) = fVar28 - (float)local_120;
              }
            }
          }
        }
        puVar24 = puVar24 + 1;
      } while (puVar24 != puVar22);
    }
    local_19c = 0;
    FUN_180209700(&uStack_f0);
    FUN_180209930(&lStack_100);
  }
  else {
    local_118 = 0x42800000;
    local_114[0] = 0x42400000;
    local_1a0 = 0;
    while( true ) {
      bVar5 = false;
      local_198 = 0;
      iVar13 = 1;
      if ((int)((longlong)DAT_1803fb108 - (longlong)DAT_1803fb100 >> 3) < 1) break;
      do {
        iVar15 = local_198;
        plVar18 = (longlong *)DAT_1803fb100[local_198];
        local_1a8 = plVar18;
        if ((((plVar18 != (longlong *)0x0) && (*(char *)((longlong)plVar18 + 0x14) != '\0')) &&
            ((DAT_1803fcb80 != '\0' ||
             (((DAT_1803fcb81 == '\0' || (*(char *)((longlong)plVar18 + 0x16) != '\0')) &&
              ((*(char *)((longlong)plVar18 + 0x15) == '\0' ||
               (DAT_1803fcb68 <= *(float *)(plVar18 + 3))))))))) &&
           (((((cVar11 = (**(code **)(*plVar18 + 0x38))(plVar18), cVar11 != '\0' &&
               (iVar14 = (**(code **)(*plVar18 + 8))(plVar18), iVar14 != 3)) &&
              ((int)plVar18[1] != 8)) &&
             ((iVar14 = (**(code **)(*plVar18 + 8))(plVar18), iVar14 != 4 && (iVar14 != 7)))) &&
            (iVar14 = iVar15 + 1,
            iVar14 < (int)((longlong)DAT_1803fb108 - (longlong)DAT_1803fb100 >> 3))))) {
          do {
            plVar3 = (longlong *)DAT_1803fb100[iVar14];
            local_120 = plVar3;
            if ((((plVar3 != (longlong *)0x0) && (*(char *)((longlong)plVar3 + 0x14) != '\0')) &&
                ((DAT_1803fcb80 != '\0' ||
                 (((DAT_1803fcb81 == '\0' || (*(char *)((longlong)plVar3 + 0x16) != '\0')) &&
                  ((*(char *)((longlong)plVar3 + 0x15) == '\0' ||
                   (DAT_1803fcb68 <= *(float *)(plVar3 + 3))))))))) &&
               ((((cVar11 = (**(code **)(*plVar3 + 0x38))(plVar3), cVar11 != '\0' &&
                  (iVar15 = (**(code **)(*plVar3 + 8))(plVar3), iVar15 != 3)) &&
                 ((int)plVar3[1] != 8)) &&
                ((iVar15 = (**(code **)(*plVar3 + 8))(plVar3), iVar15 != 4 && (iVar15 != 7)))))) {
              uVar21 = (((((((((ulonglong)plVar18 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                             (ulonglong)local_1a8 >> 8 & 0xff) * 0x100000001b3 ^
                            (ulonglong)local_1a8 >> 0x10 & 0xff) * 0x100000001b3 ^
                           (ulonglong)local_1a8 >> 0x18 & 0xff) * 0x100000001b3 ^
                          (ulonglong)local_1a8 >> 0x20 & 0xff) * 0x100000001b3 ^
                         (ulonglong)local_1a8 >> 0x28 & 0xff) * 0x100000001b3 ^
                        (ulonglong)local_1a8 >> 0x30 & 0xff) * 0x100000001b3 ^
                       (ulonglong)local_1a8 >> 0x38) * 0x100000001b3 & local_190[6];
              lVar17 = local_190[3];
              lVar25 = *(longlong *)(lVar17 + 8 + uVar21 * 0x10);
              if (lVar25 == local_190[1]) {
LAB_180172bd6:
                lVar25 = 0;
              }
              else {
                plVar4 = *(longlong **)(lVar25 + 0x10);
                while (plVar18 != plVar4) {
                  if (lVar25 == *(longlong *)(lVar17 + uVar21 * 0x10)) goto LAB_180172bd6;
                  lVar25 = *(longlong *)(lVar25 + 8);
                  plVar4 = *(longlong **)(lVar25 + 0x10);
                }
              }
              if (lVar25 == 0) {
                lVar25 = local_190[1];
              }
              uVar21 = (((((((((ulonglong)plVar3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                             (ulonglong)local_120 >> 8 & 0xff) * 0x100000001b3 ^
                            (ulonglong)local_120 >> 0x10 & 0xff) * 0x100000001b3 ^
                           (ulonglong)local_120 >> 0x18 & 0xff) * 0x100000001b3 ^
                          (ulonglong)local_120 >> 0x20 & 0xff) * 0x100000001b3 ^
                         (ulonglong)local_120 >> 0x28 & 0xff) * 0x100000001b3 ^
                        (ulonglong)local_120 >> 0x30 & 0xff) * 0x100000001b3 ^
                       (ulonglong)local_120 >> 0x38) * 0x100000001b3 & local_190[6];
              lVar23 = *(longlong *)(lVar17 + 8 + uVar21 * 0x10);
              if (lVar23 == local_190[1]) {
LAB_180172c71:
                lVar23 = 0;
              }
              else {
                plVar4 = *(longlong **)(lVar23 + 0x10);
                while (plVar3 != plVar4) {
                  if (lVar23 == *(longlong *)(lVar17 + uVar21 * 0x10)) goto LAB_180172c71;
                  lVar23 = *(longlong *)(lVar23 + 8);
                  plVar4 = *(longlong **)(lVar23 + 0x10);
                }
              }
              if (lVar23 == 0) {
                lVar23 = local_190[1];
              }
              if ((lVar25 != local_190[1]) && (lVar23 != local_190[1])) {
                pfVar19 = (float *)(**(code **)(*plVar18 + 0x10))(plVar18,local_148);
                fVar28 = *pfVar19;
                fVar30 = *(float *)(lVar25 + 0x18);
                fVar35 = *(float *)(lVar25 + 0x1c);
                fVar34 = fVar35 + pfVar19[1] + fVar26;
                pfVar19 = (float *)(**(code **)(*plVar3 + 0x10))(plVar3,local_140);
                fVar33 = *(float *)(lVar23 + 0x1c) - fVar26;
                if (fVar33 < fVar34) {
                  fVar35 = fVar35 - fVar26;
                  fVar31 = *(float *)(lVar23 + 0x1c) + pfVar19[1] + fVar26;
                  if (fVar35 < fVar31) {
                    fVar28 = fVar30 + fVar28 + fVar26;
                    fVar32 = *(float *)(lVar23 + 0x18) - fVar26;
                    if (fVar32 < fVar28) {
                      fVar30 = fVar30 - fVar26;
                      fVar29 = *(float *)(lVar23 + 0x18) + *pfVar19 + fVar26;
                      if (fVar30 < fVar29) {
                        uVar1 = *(uint *)(plVar3 + 1);
                        uVar2 = *(uint *)(plVar18 + 1);
                        if ((uVar2 & 0xfffffffa) == 0) {
                          if (uVar2 == 1) goto LAB_180172d64;
                          if (((uVar1 & 0xfffffffa) != 0) || (uVar1 == 1)) goto LAB_180172d53;
LAB_180172d75:
                          iVar15 = (int)plVar18[1];
                          iVar20 = (int)plVar3[1];
                          if (iVar15 == iVar20) goto LAB_180172e61;
                          if (fVar29 <= fVar28) {
                            fVar28 = fVar29;
                          }
                          if (fVar30 <= fVar32) {
                            fVar30 = fVar32;
                          }
                          fVar35 = 0.0;
                          if (0.0 <= fVar28 - fVar30) {
                            fVar35 = fVar28 - fVar30;
                          }
                          fVar35 = fVar35 + fVar6;
                          if (iVar15 == 4) {
LAB_180172dba:
                            iVar15 = -1;
                          }
                          else if (iVar15 == 5) {
LAB_180172db5:
                            iVar15 = 1;
                          }
                          else {
                            if (iVar15 == 6) goto LAB_180172dba;
                            if (iVar15 == 7) goto LAB_180172db5;
                            iVar15 = 0;
                          }
                          if (iVar20 == 4) {
LAB_180172ddc:
                            iVar16 = -1;
                          }
                          else {
                            iVar16 = iVar13;
                            if (iVar20 != 5) {
                              if (iVar20 == 6) goto LAB_180172ddc;
                              if (iVar20 != 7) {
                                iVar16 = 0;
                              }
                            }
                          }
                          if (iVar15 == 0) {
                            if (iVar16 != 0) {
                              *(float *)(lVar23 + 0x18) =
                                   (float)iVar16 * fVar35 + *(float *)(lVar23 + 0x18);
                              goto LAB_180172f84;
                            }
                            goto LAB_180172f87;
                          }
                          if (iVar16 == 0) {
                            *(float *)(lVar25 + 0x18) =
                                 (float)iVar15 * fVar35 + *(float *)(lVar25 + 0x18);
                          }
                          else {
                            if (iVar15 == iVar16) goto LAB_180172f87;
                            *(float *)(lVar25 + 0x18) =
                                 (float)iVar15 * fVar35 * fVar27 + *(float *)(lVar25 + 0x18);
                            *(float *)(lVar23 + 0x18) =
                                 (float)iVar16 * fVar35 * fVar27 + *(float *)(lVar23 + 0x18);
                          }
LAB_180172f84:
                          bVar5 = true;
                        }
                        else {
LAB_180172d53:
                          if ((uVar2 == 1) || (uVar2 - 6 < 2)) {
LAB_180172d64:
                            if ((uVar1 == 1) || (uVar1 - 6 < 2)) goto LAB_180172d75;
                          }
LAB_180172e61:
                          iVar15 = (int)plVar3[1];
                          iVar20 = (int)plVar18[1];
                          if (((((iVar20 == 2) || (iVar20 - 9U < 2)) &&
                               ((iVar15 == 2 || (iVar15 - 9U < 2)))) ||
                              (((((iVar20 - 3U & 0xfffffff6) == 0 && (iVar20 != 4)) &&
                                ((iVar15 - 3U & 0xfffffff6) == 0)) && (iVar15 != 4)))) &&
                             (iVar20 != iVar15)) {
                            if (fVar31 <= fVar34) {
                              fVar34 = fVar31;
                            }
                            if (fVar35 <= fVar33) {
                              fVar35 = fVar33;
                            }
                            fVar28 = 0.0;
                            if (0.0 <= fVar34 - fVar35) {
                              fVar28 = fVar34 - fVar35;
                            }
                            fVar28 = fVar28 + fVar6;
                            if (iVar20 == 9) {
LAB_180172ef0:
                              iVar20 = -1;
                            }
                            else if (iVar20 == 10) {
LAB_180172eeb:
                              iVar20 = 1;
                            }
                            else {
                              if (iVar20 == 0xb) goto LAB_180172ef0;
                              if (iVar20 == 0xc) goto LAB_180172eeb;
                              iVar20 = 0;
                            }
                            if (iVar15 == 9) {
LAB_180172f12:
                              iVar16 = -1;
                            }
                            else {
                              iVar16 = iVar13;
                              if (iVar15 != 10) {
                                if (iVar15 == 0xb) goto LAB_180172f12;
                                if (iVar15 != 0xc) {
                                  iVar16 = 0;
                                }
                              }
                            }
                            if (iVar20 == 0) {
                              if (iVar16 == 0) goto LAB_180172f87;
                              *(float *)(lVar23 + 0x1c) =
                                   (float)iVar16 * fVar28 + *(float *)(lVar23 + 0x1c);
                            }
                            else if (iVar16 == 0) {
                              *(float *)(lVar25 + 0x1c) =
                                   (float)iVar20 * fVar28 + *(float *)(lVar25 + 0x1c);
                            }
                            else {
                              if (iVar20 == iVar16) goto LAB_180172f87;
                              *(float *)(lVar25 + 0x1c) =
                                   (float)iVar20 * fVar28 * fVar27 + *(float *)(lVar25 + 0x1c);
                              *(float *)(lVar23 + 0x1c) =
                                   (float)iVar16 * fVar28 * fVar27 + *(float *)(lVar23 + 0x1c);
                            }
                            goto LAB_180172f84;
                          }
                        }
LAB_180172f87:
                        local_180 = &local_108;
                        local_178 = &local_118;
                        local_170 = local_114;
                        FUN_1801732d0(&local_180,plVar18,lVar25 + 0x18);
                        FUN_1801732d0(&local_180,plVar3,lVar23 + 0x18);
                        pfVar19 = (float *)(**(code **)(*plVar18 + 0x10))(plVar18,local_130);
                        fVar28 = *pfVar19;
                        fVar30 = *(float *)(lVar25 + 0x18);
                        fVar35 = *(float *)(lVar25 + 0x1c);
                        fVar34 = pfVar19[1];
                        pfVar19 = (float *)(**(code **)(*plVar3 + 0x10))(plVar3);
                        if ((*(float *)(lVar23 + 0x1c) - fVar26 < fVar35 + fVar34 + fVar26) &&
                           (fVar35 - fVar26 < *(float *)(lVar23 + 0x1c) + pfVar19[1] + fVar26)) {
                          fVar28 = fVar30 + fVar28 + fVar26;
                          fVar35 = *(float *)(lVar23 + 0x18) - fVar26;
                          if (fVar35 < fVar28) {
                            fVar30 = fVar30 - fVar26;
                            fVar34 = *(float *)(lVar23 + 0x18) + *pfVar19 + fVar26;
                            if (fVar30 < fVar34) {
                              if (fVar34 <= fVar28) {
                                fVar28 = fVar34;
                              }
                              if (fVar30 <= fVar35) {
                                fVar30 = fVar35;
                              }
                              fVar28 = fVar28 - fVar30;
                              uVar1 = *(uint *)(plVar3 + 1);
                              uVar2 = *(uint *)(plVar18 + 1);
                              if ((uVar2 & 0xfffffffa) == 0) {
                                if (uVar2 == 1) goto LAB_1801730a3;
                                if (((uVar1 & 0xfffffffa) != 0) || (uVar1 == 1)) goto LAB_180173092;
LAB_1801730b4:
                                if (fVar28 <= 0.0) goto LAB_180173172;
                                iVar15 = (int)plVar18[1];
                                if (iVar15 == 4) {
LAB_1801730df:
                                  iVar20 = -1;
                                }
                                else if (iVar15 == 5) {
LAB_1801730da:
                                  iVar20 = 1;
                                }
                                else {
                                  if (iVar15 == 6) goto LAB_1801730df;
                                  if (iVar15 == 7) goto LAB_1801730da;
                                  iVar20 = 0;
                                }
                                iVar16 = (int)plVar3[1];
                                if (iVar16 == 4) {
LAB_180173104:
                                  iVar15 = -1;
                                }
                                else {
                                  iVar15 = iVar13;
                                  if (iVar16 != 5) {
                                    if (iVar16 == 6) goto LAB_180173104;
                                    if (iVar16 != 7) {
                                      iVar15 = 0;
                                    }
                                  }
                                }
                                if (iVar20 == 0) {
                                  if (iVar15 == 0) goto LAB_1801731ef;
                                  goto LAB_1801731da;
                                }
                                if (iVar15 == 0) {
                                  *(float *)(lVar25 + 0x18) =
                                       (float)iVar20 * (fVar28 + fVar6) + *(float *)(lVar25 + 0x18);
                                }
                                else if (iVar20 != iVar15) {
                                  fVar28 = (fVar28 + fVar6) * fVar27;
                                  *(float *)(lVar25 + 0x18) =
                                       (float)iVar20 * fVar28 + *(float *)(lVar25 + 0x18);
                                  *(float *)(lVar23 + 0x18) =
                                       (float)iVar15 * fVar28 + *(float *)(lVar23 + 0x18);
                                }
                              }
                              else {
LAB_180173092:
                                if ((uVar2 == 1) || (uVar2 - 6 < 2)) {
LAB_1801730a3:
                                  if ((uVar1 == 1) || (uVar1 - 6 < 2)) goto LAB_1801730b4;
                                }
LAB_180173172:
                                iVar15 = (int)plVar18[1];
                                if (((((iVar15 != 2) && (1 < iVar15 - 9U)) ||
                                     ((uVar1 != 2 && (1 < uVar1 - 9)))) &&
                                    (((((iVar15 - 3U & 0xfffffff6) != 0 || (iVar15 == 4)) ||
                                      ((uVar1 - 3 & 0xfffffff6) != 0)) || (uVar1 == 4)))) ||
                                   (fVar28 <= 0.0)) goto LAB_1801731fc;
                                if ((uVar1 == 2) || (uVar1 - 9 < 2)) {
                                  bVar12 = 0;
                                }
                                else {
                                  bVar12 = 1;
                                }
                                iVar15 = (uint)bVar12 * 2 + -1;
LAB_1801731da:
                                *(float *)(lVar23 + 0x18) =
                                     (float)iVar15 * (fVar28 + fVar6) + *(float *)(lVar23 + 0x18);
                              }
LAB_1801731ef:
                              bVar5 = true;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_1801731fc:
            iVar14 = iVar14 + 1;
            iVar15 = local_198;
          } while (iVar14 < (int)((longlong)DAT_1803fb108 - (longlong)DAT_1803fb100 >> 3));
        }
        local_198 = iVar15 + 1;
      } while (local_198 < (int)((longlong)DAT_1803fb108 - (longlong)DAT_1803fb100 >> 3));
      if ((!bVar5) || (local_1a0 = local_1a0 + 1, 5 < local_1a0)) break;
    }
    local_19c = 0;
    FUN_180209700(&uStack_f0);
    FUN_180209930(&lStack_100);
    param_1 = local_190;
  }
  return param_1;
}


