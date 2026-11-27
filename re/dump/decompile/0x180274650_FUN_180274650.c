// 0x180274650  FUN_180274650
// size=3561 thunk=false
// signature: undefined FUN_180274650()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_180274650(longlong param_1,uint *param_2,uint *param_3,int param_4,undefined4 *param_5,
                  float *param_6)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  char cVar11;
  uint uVar12;
  float *pfVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  undefined8 uVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  char local_168;
  float local_164;
  float local_160;
  uint local_15c;
  undefined8 local_158;
  undefined8 local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  longlong local_138;
  float local_130;
  float local_12c;
  float local_128 [2];
  undefined8 local_120;
  uint *local_118;
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  uint *local_100;
  char local_f8;
  char local_f7 [7];
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  local_120 = param_5;
  local_158 = CONCAT44(local_158._4_4_,param_4);
  local_138 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_118 = param_3;
  local_100 = param_2;
  if (*(char *)(local_138 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar5 = DAT_180381308;
  fVar30 = DAT_180380bb0;
  uVar15 = *(uint *)(param_1 + 0x14);
  if (((((uVar15 & 2) == 0) && (*(char *)(param_1 + 0xe8) < '\x01')) &&
      (*(char *)(param_1 + 0xe9) < '\x01')) &&
     ((((uVar15 & 0x40) == 0 || ((*(byte *)(param_1 + 0x18) & 0xc) != 0)) &&
      (*(char *)(param_1 + 0xcd) != '\0')))) {
    lVar3 = *(longlong *)(local_138 + 0xec0);
    local_15c = 0;
    if (param_4 < 1) {
      local_164 = 0.0;
    }
    else {
      fVar25 = *(float *)(lVar3 + 0x1238) * _DAT_180380c30;
      fVar20 = *(float *)(param_1 + 0x60) + DAT_180380bb0 +
               *(float *)(lVar3 + 0x1238) * DAT_180380a3c;
      if (fVar25 <= fVar20) {
        fVar25 = fVar20;
      }
      local_164 = (float)(int)((float)(int)fVar25 * DAT_180380b20);
    }
    fVar25 = *(float *)(lVar3 + 0x1514);
    fVar20 = *param_6;
    fVar21 = param_6[2];
    fVar29 = param_6[3];
    fVar31 = param_6[1];
    if (((*(byte *)(param_1 + 0xf0) & 1) == 0) && ((uVar15 & 1) == 0)) {
      fVar31 = fVar31 - *(float *)(param_1 + 0x68);
      local_168 = '\x01';
    }
    else {
      local_168 = '\0';
    }
    local_130 = 3.4028235e+38;
    local_12c = 3.4028235e+38;
    local_150 = 0x7f7fffff7f7fffff;
    *(undefined4 *)(param_1 + 0x170) = 1;
    local_160 = fVar31;
    local_148 = fVar20;
    local_144 = fVar29;
    local_140 = fVar21;
    FUN_18027abf0();
    uVar15 = DAT_1803817f0;
    uVar17 = 0;
    fVar23 = DAT_180381454;
    if (0 < param_4) {
      lVar16 = 0;
      fVar22 = local_164;
      do {
        fVar20 = *(float *)(param_1 + 0x28);
        fVar21 = *(float *)(param_1 + 0x2c);
        pfVar13 = (float *)(&DAT_180331320 + lVar16 * 6);
        fVar20 = ((fVar20 + *(float *)(param_1 + 0x30)) - fVar20) * *pfVar13 + fVar20;
        fStack_e8 = (float)(&DAT_180331328)[lVar16 * 6] * fVar22 + fVar20;
        fVar20 = fVar20 - (float)(&DAT_180331328)[lVar16 * 6] * fVar25;
        fVar21 = ((fVar21 + *(float *)(param_1 + 0x34)) - fVar21) *
                 (float)(&DAT_180331324)[lVar16 * 6] + fVar21;
        fStack_e4 = (float)(&DAT_18033132c)[lVar16 * 6] * fVar22 + fVar21;
        fVar21 = fVar21 - (float)(&DAT_18033132c)[lVar16 * 6] * fVar25;
        local_f0 = fVar20;
        if (fStack_e8 < fVar20) {
          local_f0 = fStack_e8;
          fStack_e8 = fVar20;
        }
        fStack_ec = fVar21;
        if (fStack_e4 < fVar21) {
          fStack_ec = fStack_e4;
          fStack_e4 = fVar21;
        }
        uVar6 = FUN_18027aaa0(param_1,uVar17);
        FUN_18027f160(&local_f0,uVar6,0,2);
        local_178 = (undefined8 *)CONCAT44(local_178._4_4_,0x40800);
        FUN_1802ab600(&local_f0,uVar6,&local_f8,local_f7);
        if ((local_f8 == '\0') && (local_f7[0] == '\0')) {
LAB_180274bcb:
          if ((uVar17 == 0) && ((*(uint *)(param_1 + 0x14) & 0x1000000) == 0)) goto LAB_180274bd9;
        }
        else {
          if (*(char *)(local_138 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          *(uint *)(*(longlong *)(local_138 + 0xec0) + 0x2508) = (uVar17 & 1 ^ 1) + 5;
          if (local_f7[0] == '\0') {
LAB_180274bc3:
            if (local_f8 == '\0') goto LAB_180274bcb;
          }
          else {
            if (*(char *)(lVar3 + 0xb35) == '\0') {
              fVar20 = (float)(&DAT_180331324)[lVar16 * 6];
              if ((fVar20 != fVar30) && ((fVar20 != 0.0 || (local_168 == '\0')))) {
                fVar31 = fVar23;
              }
              fVar21 = *pfVar13;
              if (fVar21 == fVar30) {
                fVar23 = local_148;
              }
              fVar30 = fVar5;
              if (fVar20 == 0.0) {
                fVar30 = local_144;
              }
              fVar29 = fVar5;
              if (fVar21 == 0.0) {
                fVar29 = local_140;
              }
              fVar22 = (float)(&DAT_180331328)[lVar16 * 6] * fVar25;
              fVar26 = (float)(&DAT_18033132c)[lVar16 * 6] * fVar25;
              fVar21 = (*(float *)(lVar3 + 0x100) - *(float *)(lVar3 + 0x15ac)) +
                       ((float)(&DAT_180331328)[lVar16 * 6] * (float)((uint)local_164 ^ uVar15) -
                       fVar22) * fVar21 + fVar22;
              fVar20 = (*(float *)(lVar3 + 0x104) - *(float *)(lVar3 + 0x15b0)) +
                       ((float)(&DAT_18033132c)[lVar16 * 6] * (float)((uint)local_164 ^ uVar15) -
                       fVar26) * fVar20 + fVar26;
              local_128[1] = fVar31;
              if ((fVar31 <= fVar20) && (local_128[1] = fVar30, fVar20 <= fVar30)) {
                local_128[1] = fVar20;
              }
              local_128[0] = fVar23;
              if ((fVar23 <= fVar21) && (local_128[0] = fVar29, fVar21 <= fVar29)) {
                local_128[0] = fVar21;
              }
              local_178 = &local_150;
              FUN_180274360(param_1,local_128,pfVar13,&local_130);
              fVar22 = local_164;
              fVar23 = DAT_180381454;
              fVar31 = local_160;
              fVar30 = DAT_180380bb0;
            }
            else {
              FUN_180274030(local_110,param_1,param_1 + 0x48,0xffffffff);
              puVar7 = (undefined8 *)FUN_180273d40(local_108,param_1);
              local_15c = 3;
              local_150 = *puVar7;
              FUN_18026ea90(0,0);
            }
            if (local_f7[0] == '\0') goto LAB_180274bc3;
          }
LAB_180274bd9:
          if (local_f7[0] == '\0') {
            cVar11 = (local_f8 != '\0') + '\x1f';
          }
          else {
            cVar11 = '!';
          }
          uVar6 = FUN_18026a6a0(cVar11,fVar30);
          local_120[lVar16] = uVar6;
        }
        uVar17 = uVar17 + 1;
        lVar16 = lVar16 + 1;
        param_3 = local_118;
        fVar20 = local_148;
        fVar29 = local_144;
        fVar21 = local_140;
      } while ((int)uVar17 < (int)(float)local_158);
    }
    fVar30 = DAT_1803809b8;
    if ((*(uint *)(param_1 + 0x14) & 0x1000000) == 0) {
      local_160 = (float)(-(uint)(*(char *)(lVar3 + 0x7e) != '\0') & 0xf);
    }
    else {
      local_160 = (float)(*(uint *)(param_1 + 0x18) >> 1 & 2 | *(uint *)(param_1 + 0x18) & 8);
    }
    uVar17 = 0;
    uVar15 = 1;
    fVar25 = local_160;
    do {
      fVar22 = local_164;
      if (((uint)fVar25 & uVar15) != 0) {
        if (uVar17 < 2) {
          uVar18 = 1;
        }
        else {
          uVar18 = 2;
        }
        bVar19 = uVar17 >= 2;
        uVar14 = (ulonglong)bVar19;
        local_178._0_4_ = *(undefined4 *)(lVar3 + 0x1514);
        FUN_180274510(&local_f0,param_1,uVar17,local_164);
        uVar6 = FUN_18027aaa0(param_1,uVar17 + 4);
        FUN_18027f160(&local_f0,uVar6,0,2);
        local_178 = (undefined8 *)CONCAT44(local_178._4_4_,0x40800);
        FUN_1802ab600(&local_f0,uVar6,&local_f8,local_f7);
        lVar16 = local_138;
        if (local_f8 == '\0') {
LAB_180274d01:
          if (local_f7[0] != '\0') goto LAB_180274d0b;
        }
        else {
          if (*(float *)(lVar3 + 0x1588) <= fVar30) {
            local_f8 = '\0';
            goto LAB_180274d01;
          }
LAB_180274d0b:
          if (*(char *)(local_138 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          uVar12 = (uint)bVar19;
          *(uint *)(*(longlong *)(lVar16 + 0xec0) + 0x2508) = (uVar12 ^ 1) + 3;
          if (local_f7[0] != '\0') {
            if (*(char *)(lVar3 + 0xb35) == '\0') {
              lVar16 = *(longlong *)(lVar3 + 0x1548);
              uVar8 = (ulonglong)uVar17;
              if ((lVar16 == 0) ||
                 (lVar9 = param_1, *(int *)(lVar3 + 0x155c) != *(int *)(lVar3 + 4))) {
LAB_180274e0a:
                bVar19 = false;
              }
              else {
                do {
                  lVar10 = *(longlong *)(lVar9 + 0x3c0);
                  bVar19 = lVar9 != lVar10;
                  lVar9 = lVar10;
                } while (bVar19);
                lVar9 = param_1;
                if (lVar10 != lVar16) {
                  do {
                    if (lVar9 == lVar16) goto LAB_180274f32;
                  } while ((lVar9 != lVar10) &&
                          (plVar1 = (longlong *)(lVar9 + 0x3b0), lVar9 = *plVar1, *plVar1 != 0));
                  goto LAB_180274e0a;
                }
LAB_180274f32:
                bVar19 = true;
              }
              if ((*(char *)(lVar3 + 0x15a0) != '\0') || (bVar19)) {
                *(undefined1 *)(lVar3 + 0x26b4) = 0;
                *(ulonglong *)(lVar3 + 0x26a4) = CONCAT44(fStack_ec,local_f0);
                *(ulonglong *)(lVar3 + 0x26ac) = CONCAT44(fStack_e4,fStack_e8);
              }
              if (((*(uint *)(param_1 + 0x14) & 0x1000000) != 0) &&
                 ((*(longlong *)(lVar3 + 0x26a4) != CONCAT44(fStack_ec,local_f0) ||
                  (*(longlong *)(lVar3 + 0x26ac) != CONCAT44(fStack_e4,fStack_e8))))) {
                *(undefined1 *)(lVar3 + 0x26b4) = 1;
              }
              bVar19 = false;
              fVar25 = (float)(&DAT_1803312a8)[uVar8 * 7];
              if ((float)(&DAT_1803312b0)[uVar8 * 7] <= (float)(&DAT_1803312a8)[uVar8 * 7]) {
                fVar25 = (float)(&DAT_1803312b0)[uVar8 * 7];
              }
              fVar26 = (float)(&DAT_1803312ac)[uVar8 * 7];
              if ((float)(&DAT_1803312b4)[uVar8 * 7] <= (float)(&DAT_1803312ac)[uVar8 * 7]) {
                fVar26 = (float)(&DAT_1803312b4)[uVar8 * 7];
              }
              fVar24 = *(float *)(param_1 + 0x34);
              fVar27 = (*(float *)(lVar3 + 0x100 + uVar14 * 4) -
                       *(float *)(lVar3 + 0x15ac + uVar14 * 4)) + *(float *)(lVar3 + 0x1514);
              fVar28 = *(float *)(param_1 + 0x2c);
              local_128[0] = fVar25 * *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x28);
              local_158 = *(undefined8 *)(param_1 + 0x28);
              *(float *)((longlong)&local_158 + uVar14 * 4) = fVar27;
              local_128[1] = fVar26 * fVar24 + fVar28;
              if (*(char *)(lVar3 + 0x26b4) != '\0') {
                fVar24 = *(float *)(lVar3 + 0xec + uVar14 * 4);
                fVar28 = local_128[uVar14];
                *(float *)((longlong)&local_158 + uVar14 * 4) = fVar24 + fVar28;
                if ((fVar24 == 0.0) || (0.0 < fVar24 == fVar27 < fVar24 + fVar28)) {
                  bVar19 = true;
                }
              }
              fVar24 = fVar31;
              if ((uVar17 != 3) && ((uVar17 != 2 || (local_168 == '\0')))) {
                fVar24 = fVar23;
              }
              fVar28 = fVar5;
              fVar27 = fVar20;
              if (((uVar17 == 1) || (fVar28 = fVar29, fVar27 = fVar23, uVar17 == 2)) ||
                 (fVar28 = fVar5, fVar4 = fVar21, uVar17 != 0)) {
                fVar4 = fVar5;
              }
              if ((fVar24 <= local_158._4_4_) && (fVar24 = fVar28, local_158._4_4_ <= fVar28)) {
                fVar24 = local_158._4_4_;
              }
              if ((fVar27 <= (float)local_158) && (fVar27 = fVar4, (float)local_158 <= fVar4)) {
                fVar27 = (float)local_158;
              }
              local_158 = CONCAT44(fVar24,fVar27);
              if (!bVar19) {
                local_178 = &local_150;
                local_140 = fVar25;
                local_13c = fVar26;
                FUN_180274360(param_1,&local_158,&local_140,&local_130);
              }
            }
            else {
              if ((uVar17 - 1 & 0xfffffffd) == 0) {
                FUN_180274030(local_110,param_1,param_1 + 0x48,uVar18);
                lVar16 = FUN_180273d40(local_108,param_1,local_110);
                *(undefined4 *)((longlong)&local_150 + uVar14 * 4) =
                     *(undefined4 *)(lVar16 + uVar14 * 4);
                local_15c = local_15c | 1 << uVar12;
                local_f7[0] = '\0';
                local_f8 = '\0';
              }
              FUN_18026ea90(0,0);
            }
          }
        }
        if (local_f8 != '\0') {
          *local_100 = uVar17;
        }
        param_3 = local_118;
        fVar25 = local_160;
        if (local_f7[0] != '\0') {
          *local_118 = uVar17;
        }
      }
      lVar16 = local_138;
      uVar17 = uVar17 + 1;
      uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
    } while ((int)uVar17 < 4);
    if (*(char *)(local_138 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar9 = *(longlong *)(*(longlong *)(lVar16 + 0xec0) + 0x1520);
    iVar2 = *(int *)(lVar9 + 0x108);
    if (iVar2 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar9 + 0x108) = iVar2 + -1;
    }
    *(undefined4 *)(param_1 + 0x170) = 0;
    if ((*(longlong *)(lVar3 + 0x2258) != 0) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x2258) + 0x3c0) == param_1)) {
      fVar30 = 0.0;
      fVar25 = 0.0;
      if ((*(int *)(lVar3 + 0x20c0) == 2) && (*(char *)(lVar3 + 0x11d) != '\0')) {
        lVar9 = FUN_180267330(0x204);
        lVar10 = FUN_180267330(0x203);
        fVar25 = *(float *)(lVar9 + 0xc) - *(float *)(lVar10 + 0xc);
        lVar9 = FUN_180267330(0x202);
        lVar10 = FUN_180267330(0x201);
        fVar30 = *(float *)(lVar9 + 0xc) - *(float *)(lVar10 + 0xc);
      }
      if (*(int *)(lVar3 + 0x20c0) == 3) {
        lVar9 = FUN_180267330(0x281);
        lVar10 = FUN_180267330(0x280);
        fVar25 = *(float *)(lVar9 + 0xc) - *(float *)(lVar10 + 0xc);
        lVar9 = FUN_180267330(0x27f);
        lVar10 = FUN_180267330(0x27e);
        fVar30 = *(float *)(lVar9 + 0xc) - *(float *)(lVar10 + 0xc);
      }
      if ((fVar30 != 0.0) || (fVar25 != 0.0)) {
        if (*(char *)(lVar16 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        fVar21 = DAT_180380bb0;
        fVar29 = *(float *)(lVar3 + 0x40) * DAT_18038125c *
                 *(float *)(*(longlong *)(lVar16 + 0xec0) + 0x1210);
        fVar25 = fVar29 * fVar25 + *(float *)(lVar3 + 0x2290);
        fVar30 = fVar29 * fVar30 + *(float *)(lVar3 + 0x228c);
        *(float *)(lVar3 + 0x2290) = fVar25;
        *(float *)(lVar3 + 0x228c) = fVar30;
        fVar29 = (fVar31 - *(float *)(param_1 + 0x2c)) - *(float *)(param_1 + 0x34);
        fVar20 = (fVar20 - *(float *)(param_1 + 0x28)) - *(float *)(param_1 + 0x30);
        *(undefined1 *)(lVar3 + 0x227c) = 0;
        *(undefined1 *)(lVar3 + 0x2069) = 1;
        if (fVar25 <= fVar29) {
          fVar25 = fVar29;
        }
        if (fVar30 <= fVar20) {
          fVar30 = fVar20;
        }
        *(float *)(lVar3 + 0x2290) = fVar25;
        *(float *)(lVar3 + 0x228c) = fVar30;
        uVar6 = FUN_18026a6a0(0x21,fVar21);
        *local_120 = uVar6;
        fVar25 = (float)(int)*(float *)(lVar3 + 0x228c);
        fVar30 = (float)(int)*(float *)(lVar3 + 0x2290);
        if ((fVar25 != 0.0) || (fVar30 != 0.0)) {
          local_120 = (undefined4 *)
                      CONCAT44(fVar30 + *(float *)(param_1 + 0x3c),
                               fVar25 + *(float *)(param_1 + 0x38));
          puVar7 = (undefined8 *)FUN_180273d40(local_108,param_1,&local_120);
          local_150 = *puVar7;
          *(float *)(lVar3 + 0x228c) = *(float *)(lVar3 + 0x228c) - fVar25;
          *(float *)(lVar3 + 0x2290) = *(float *)(lVar3 + 0x2290) - fVar30;
        }
      }
    }
    fVar30 = *(float *)(param_1 + 0x28);
    fVar25 = *(float *)(param_1 + 0x2c);
    fVar20 = *(float *)(param_1 + 0x38);
    fVar21 = *(float *)(param_1 + 0x3c);
    fVar29 = fVar20;
    if (((float)local_150 != fVar5) &&
       ((*(float *)(param_1 + 0x30) != (float)local_150 || (fVar20 != (float)local_150)))) {
      *(float *)(param_1 + 0x38) = (float)local_150;
      *(float *)(param_1 + 0x30) = (float)local_150;
      fVar29 = (float)local_150;
    }
    if ((local_150._4_4_ != fVar5) &&
       ((*(float *)(param_1 + 0x34) != local_150._4_4_ || (fVar21 != local_150._4_4_)))) {
      *(float *)(param_1 + 0x3c) = local_150._4_4_;
      *(float *)(param_1 + 0x34) = local_150._4_4_;
    }
    fVar31 = fVar30;
    if ((local_130 != fVar5) && (fVar23 = (float)(int)local_130, fVar30 != fVar23)) {
      *(float *)(param_1 + 0x28) = fVar23;
      fVar31 = fVar23;
    }
    if ((local_12c != fVar5) && (fVar25 != (float)(int)local_12c)) {
      *(float *)(param_1 + 0x2c) = (float)(int)local_12c;
    }
    if ((((fVar30 != fVar31) || (fVar25 != *(float *)(param_1 + 0x2c))) || (fVar20 != fVar29)) ||
       (fVar21 != *(float *)(param_1 + 0x3c))) {
      FUN_180287ee0(param_1);
    }
    if (*param_3 != 0xffffffff) {
      local_178 = (undefined8 *)CONCAT44(local_178._4_4_,*(undefined4 *)(lVar3 + 0x1514));
      puVar7 = (undefined8 *)FUN_180274510(&local_f0,param_1,*param_3,fVar22);
      uVar18 = puVar7[1];
      *(undefined8 *)(lVar3 + 0x26a4) = *puVar7;
      *(undefined8 *)(lVar3 + 0x26ac) = uVar18;
    }
  }
  else {
    local_15c = 0;
  }
  return local_15c;
}


