// 0x18018d080  FUN_18018d080
// size=2089 thunk=false
// signature: undefined FUN_18018d080()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18018d080(float *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_2c8 [40];
  float local_2a0 [10];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
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
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uVar14;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_2c8;
  if ((((param_1 != (float *)0x0) && (0 < param_2)) && (1 < param_3)) && (1 < param_4)) {
    FUN_180213a70();
    uVar9 = _DAT_1803817c0;
    fVar1 = DAT_180380948;
    iVar12 = 0;
    iVar8 = 0;
    if (param_2 < 4) goto LAB_18018d242;
    do {
      if (iVar12 == 0) {
LAB_18018d162:
        *(undefined8 *)(param_1 + (longlong)iVar12 * 2) =
             *(undefined8 *)(param_1 + (longlong)iVar8 * 2);
        iVar12 = iVar12 + 1;
        if (iVar12 != 0) goto LAB_18018d178;
LAB_18018d1a3:
        *(undefined8 *)(param_1 + (longlong)iVar12 * 2) =
             *(undefined8 *)(param_1 + (longlong)iVar8 * 2 + 2);
        iVar12 = iVar12 + 1;
        if (iVar12 != 0) goto LAB_18018d1b7;
LAB_18018d1e2:
        *(undefined8 *)(param_1 + (longlong)iVar12 * 2) =
             *(undefined8 *)(param_1 + (longlong)iVar8 * 2 + 4);
        iVar12 = iVar12 + 1;
        if (iVar12 != 0) goto LAB_18018d1f6;
LAB_18018d221:
        lVar6 = (longlong)iVar12;
        iVar12 = iVar12 + 1;
        *(undefined8 *)(param_1 + lVar6 * 2) = *(undefined8 *)(param_1 + (longlong)iVar8 * 2 + 6);
      }
      else {
        if ((fVar1 < (float)((uint)(param_1[(longlong)iVar8 * 2] -
                                   param_1[(longlong)iVar12 * 2 + -2]) & uVar9)) ||
           (fVar1 < (float)((uint)(param_1[(longlong)iVar8 * 2 + 1] -
                                  param_1[(longlong)iVar12 * 2 + -1]) & uVar9))) goto LAB_18018d162;
LAB_18018d178:
        if ((fVar1 < (float)((uint)(param_1[(longlong)iVar8 * 2 + 2] -
                                   param_1[(longlong)iVar12 * 2 + -2]) & uVar9)) ||
           (fVar1 < (float)((uint)(param_1[(longlong)iVar8 * 2 + 3] -
                                  param_1[(longlong)iVar12 * 2 + -1]) & uVar9))) goto LAB_18018d1a3;
LAB_18018d1b7:
        if ((fVar1 < (float)((uint)(param_1[(longlong)iVar8 * 2 + 4] -
                                   param_1[(longlong)iVar12 * 2 + -2]) & uVar9)) ||
           (fVar1 < (float)((uint)(param_1[(longlong)iVar8 * 2 + 5] -
                                  param_1[(longlong)iVar12 * 2 + -1]) & uVar9))) goto LAB_18018d1e2;
LAB_18018d1f6:
        if ((fVar1 < (float)((uint)(param_1[(longlong)iVar8 * 2 + 6] -
                                   param_1[(longlong)iVar12 * 2 + -2]) & uVar9)) ||
           (fVar1 < (float)((uint)(param_1[(longlong)iVar8 * 2 + 7] -
                                  param_1[(longlong)iVar12 * 2 + -1]) & uVar9))) goto LAB_18018d221;
      }
      iVar8 = iVar8 + 4;
    } while (iVar8 < param_2 + -3);
    for (; iVar8 < param_2; iVar8 = iVar8 + 1) {
LAB_18018d242:
      if (iVar12 == 0) {
LAB_18018d274:
        lVar6 = (longlong)iVar12;
        iVar12 = iVar12 + 1;
        *(undefined8 *)(param_1 + lVar6 * 2) = *(undefined8 *)(param_1 + (longlong)iVar8 * 2);
      }
      else if ((fVar1 < (float)((uint)(param_1[(longlong)iVar8 * 2] -
                                      param_1[(longlong)iVar12 * 2 + -2]) & uVar9)) ||
              (fVar1 < (float)((uint)(param_1[(longlong)iVar8 * 2 + 1] -
                                     param_1[(longlong)iVar12 * 2 + -1]) & uVar9)))
      goto LAB_18018d274;
    }
    if (iVar12 == 1) {
      if (((0.0 <= *param_1) && (*param_1 <= (float)param_3)) &&
         ((0.0 <= param_1[1] && (param_1[1] <= (float)param_4)))) {
        return 1;
      }
    }
    else {
      uVar15 = 0;
      local_278 = 0;
      uStack_270 = 0;
      uVar14 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      uStack_230 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
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
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      if (0 < iVar12) {
        do {
          if (1 < (int)uVar15) {
            do {
              if (0.0 < (local_2a0[uVar15 * 2 + 8] - local_2a0[uVar15 * 2 + 6]) *
                        (param_1[uVar14 * 2 + 1] - local_2a0[uVar15 * 2 + 7]) -
                        (local_2a0[uVar15 * 2 + 9] - local_2a0[uVar15 * 2 + 7]) *
                        (param_1[uVar14 * 2] - local_2a0[uVar15 * 2 + 6])) break;
              uVar9 = (int)uVar15 - 1;
              uVar15 = (ulonglong)uVar9;
            } while (1 < (int)uVar9);
          }
          lVar6 = uVar14 * 2;
          uVar9 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar9;
          iVar8 = (int)uVar15;
          uVar15 = (ulonglong)(iVar8 + 1);
          (&local_278)[iVar8] = *(undefined8 *)(param_1 + lVar6);
        } while ((int)uVar9 < iVar12);
      }
      uVar9 = (uint)uVar15;
      iVar8 = uVar9 + 1;
      for (uVar13 = iVar12 - 2; -1 < (int)uVar13; uVar13 = uVar13 - 1) {
        uVar14 = (ulonglong)uVar13;
        uVar10 = (uint)uVar15;
        if (iVar8 <= (int)uVar10) {
          do {
            uVar10 = (uint)uVar15;
            lVar6 = (longlong)(int)uVar10;
            if (0.0 < (local_2a0[lVar6 * 2 + 8] - local_2a0[lVar6 * 2 + 6]) *
                      (param_1[uVar14 * 2 + 1] - local_2a0[lVar6 * 2 + 7]) -
                      (local_2a0[lVar6 * 2 + 9] - local_2a0[lVar6 * 2 + 7]) *
                      (param_1[uVar14 * 2] - local_2a0[lVar6 * 2 + 6])) break;
            uVar10 = uVar10 - 1;
            uVar15 = (ulonglong)uVar10;
          } while (iVar8 <= (int)uVar10);
        }
        uVar9 = uVar10 + 1;
        uVar15 = (ulonglong)uVar9;
        (&local_278)[(int)uVar10] = *(undefined8 *)(param_1 + uVar14 * 2);
      }
      uVar13 = uVar9 - 1;
      if ((int)uVar9 < 2) {
        uVar13 = uVar9;
      }
      uVar15 = (ulonglong)uVar13;
      if (0 < (int)uVar13) {
        iVar8 = 0;
        local_2a0[2] = (float)param_3;
        local_2a0[5] = (float)param_4;
        do {
          if ((((0.0 <= *(float *)(&local_278 + iVar8)) &&
               (*(float *)(&local_278 + iVar8) <= local_2a0[2])) &&
              (fVar1 = *(float *)((longlong)&local_278 + (longlong)iVar8 * 8 + 4), 0.0 <= fVar1)) &&
             (fVar1 <= local_2a0[5])) {
            return 1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)uVar13);
        local_2a0[4] = local_2a0[2];
        local_2a0[7] = local_2a0[5];
        local_2a0[0] = 0.0;
        local_2a0[1] = 0.0;
        local_2a0[3] = 0.0;
        local_2a0[6] = 0.0;
        if (2 < (int)uVar13) {
          pfVar11 = local_2a0;
          do {
            bVar3 = false;
            bVar4 = false;
            iVar8 = 0;
            if ((int)uVar13 < 4) {
LAB_18018d760:
              do {
                iVar12 = iVar8 + 1;
                dVar18 = (double)*(float *)((longlong)&local_278 + (longlong)iVar8 * 8 + 4);
                dVar18 = ((double)*(float *)(&local_278 + iVar12 % (int)uVar13) -
                         (double)*(float *)(&local_278 + iVar8)) * ((double)pfVar11[1] - dVar18) -
                         ((double)*(float *)((longlong)&local_278 +
                                            (longlong)(iVar12 % (int)uVar13) * 8 + 4) - dVar18) *
                         ((double)*pfVar11 - (double)*(float *)(&local_278 + iVar8));
                bVar3 = (bool)(bVar3 | DAT_180380a50 < dVar18);
                bVar4 = (bool)(bVar4 | dVar18 < DAT_180381340);
                iVar8 = iVar12;
              } while (iVar12 < (int)uVar13);
            }
            else {
              dVar18 = (double)pfVar11[1];
              dVar2 = (double)*pfVar11;
              do {
                lVar7 = (longlong)iVar8;
                lVar6 = (longlong)((iVar8 + 1) % (int)uVar13);
                dVar16 = (double)*(float *)((longlong)&local_278 + lVar7 * 8 + 4);
                dVar17 = (double)*(float *)((longlong)&uStack_270 + lVar7 * 8 + 4);
                dVar19 = ((double)*(float *)(&local_278 + lVar6) -
                         (double)*(float *)(&local_278 + lVar7)) * (dVar18 - dVar16) -
                         ((double)*(float *)((longlong)&local_278 + lVar6 * 8 + 4) - dVar16) *
                         (dVar2 - (double)*(float *)(&local_278 + lVar7));
                lVar6 = (longlong)((iVar8 + 2) % (int)uVar13);
                dVar16 = (double)*(float *)((longlong)&local_268 + lVar7 * 8 + 4);
                dVar17 = ((double)*(float *)(&local_278 + lVar6) -
                         (double)*(float *)(&uStack_270 + lVar7)) * (dVar18 - dVar17) -
                         ((double)*(float *)((longlong)&local_278 + lVar6 * 8 + 4) - dVar17) *
                         (dVar2 - (double)*(float *)(&uStack_270 + lVar7));
                lVar6 = (longlong)((iVar8 + 3) % (int)uVar13);
                dVar20 = ((double)*(float *)(&local_278 + lVar6) -
                         (double)*(float *)(&local_268 + lVar7)) * (dVar18 - dVar16) -
                         ((double)*(float *)((longlong)&local_278 + lVar6 * 8 + 4) - dVar16) *
                         (dVar2 - (double)*(float *)(&local_268 + lVar7));
                iVar8 = iVar8 + 4;
                dVar16 = (double)*(float *)((longlong)&uStack_260 + lVar7 * 8 + 4);
                dVar16 = ((double)*(float *)(&local_278 + iVar8 % (int)uVar13) -
                         (double)*(float *)(&uStack_260 + lVar7)) * (dVar18 - dVar16) -
                         ((double)*(float *)((longlong)&local_278 +
                                            (longlong)(iVar8 % (int)uVar13) * 8 + 4) - dVar16) *
                         (dVar2 - (double)*(float *)(&uStack_260 + lVar7));
                bVar3 = (bool)(bVar3 | DAT_180380a50 < dVar19 | DAT_180380a50 < dVar17 |
                               DAT_180380a50 < dVar20 | DAT_180380a50 < dVar16);
                bVar4 = (bool)(bVar4 | dVar19 < DAT_180381340 | dVar17 < DAT_180381340 |
                               dVar20 < DAT_180381340 | dVar16 < DAT_180381340);
              } while (iVar8 < (int)(uVar13 - 3));
              if (iVar8 < (int)uVar13) goto LAB_18018d760;
            }
            if (!bVar3) {
              return 1;
            }
            if (!bVar4) {
              return 1;
            }
            pfVar11 = pfVar11 + 2;
          } while (pfVar11 != local_2a0 + 8);
        }
        iVar8 = 0;
        do {
          lVar6 = (longlong)iVar8;
          iVar8 = iVar8 + 1;
          iVar12 = 0;
          do {
            iVar12 = iVar12 + 1;
            cVar5 = FUN_18018cd00(&local_278 + lVar6);
            if (cVar5 != '\0') {
              return 1;
            }
          } while (iVar12 < 4);
        } while (iVar8 < (int)uVar15);
      }
    }
  }
  return 0;
}


