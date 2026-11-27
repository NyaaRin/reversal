// 0x18018e910  FUN_18018e910
// size=2005 thunk=false
// signature: undefined FUN_18018e910()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18018e910(undefined8 *param_1,longlong *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  float fVar6;
  int iVar7;
  char cVar8;
  BOOL BVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_208 [32];
  int local_1e8;
  int local_1e0;
  float local_1d8 [2];
  undefined8 local_1d0;
  float local_1c8;
  undefined1 local_1c0;
  float local_1bc [4];
  float fStack_1ac;
  float local_1a8;
  uint local_1a0;
  int local_19c;
  undefined8 *local_198;
  undefined8 local_190;
  undefined *local_188;
  longlong local_180;
  undefined8 local_178;
  float local_170;
  float local_160;
  float local_15c;
  float local_158;
  int local_148;
  int local_144;
  undefined8 local_140;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float local_110;
  float local_10c;
  float local_100;
  float local_fc;
  ulonglong local_e0;
  
  local_e0 = DAT_1803da4c0 ^ (ulonglong)auStack_208;
  if ((((param_2 != (longlong *)0x0) &&
       (local_198 = param_1, BVar9 = IsBadReadPtr(param_2,8), BVar9 == 0)) &&
      (BVar9 = IsBadReadPtr((void *)*param_2,8), BVar9 == 0)) &&
     (((DAT_1803fa668 != (longlong *)0x0 && (DAT_1803f9250 != (longlong *)0x0)) &&
      (DAT_1803fa608 != 0)))) {
    local_144 = 0;
    local_148 = 0;
    (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_144,&local_148);
    if ((1 < local_144) && (1 < local_148)) {
      FUN_18018a830(local_1bc + 3,param_2);
      local_1d8[0] = 0.0;
      cVar8 = FUN_18018e680(local_1bc + 3,&local_110,local_1d8);
      fVar1 = local_1d8[0];
      if ((cVar8 != '\0') && (DAT_180380bb0 < local_1d8[0])) {
        local_1bc[1] = local_110;
        local_1bc[2] = local_100;
        local_1d8[0] = local_10c;
        local_1bc[0] = local_fc;
        fVar22 = 0.0;
        fVar25 = 0.0;
        local_1d0 = 0;
        fVar24 = 0.0;
        local_1c8 = 0.0;
        fVar23 = 0.0;
        fVar26 = 0.0;
        local_140 = 0;
        fVar21 = 0.0;
        local_138 = 0.0;
        bVar5 = false;
        plVar11 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2);
        lVar12 = (**(code **)(*plVar11 + 0x48))(plVar11);
        if (lVar12 == 0) {
          *(undefined1 *)(param_1 + 2) = 0;
          return param_1;
        }
        lVar12 = (**(code **)(*DAT_1803f9250 + 0xe0))(DAT_1803f9250,lVar12);
        if (((lVar12 == 0) || (*(int *)(lVar12 + 0xac) < 1)) || (*(int *)(lVar12 + 0x9c) < 1)) {
          *(undefined1 *)(param_1 + 2) = 0;
          return param_1;
        }
        uVar10 = 0;
        local_180 = lVar12;
        if (((1 < *(int *)(lVar12 + 0xac)) && (uVar10 = FUN_18001da00(param_2), (int)uVar10 < 0)) ||
           (*(int *)(lVar12 + 0xac) <= (int)uVar10)) {
          *(undefined1 *)(param_1 + 2) = 0;
          return param_1;
        }
        lVar12 = lVar12 + *(int *)(lVar12 + 0xb0) + (ulonglong)uVar10 * 0xc;
        if ((lVar12 == 0) || (0xff < *(int *)(lVar12 + 4) - 1U)) {
          *(undefined1 *)(param_1 + 2) = 0;
          return param_1;
        }
        if ((DAT_18042623c & 1) == 0) {
          DAT_18042623c = DAT_18042623c | 1;
          local_188 = &DAT_1804290b0;
          lVar13 = 0x80;
          while (lVar13 != 0) {
            local_188 = local_188 + 0x30;
            lVar13 = lVar13 + -1;
          }
          local_190 = 0xffffffffffffffff;
        }
        cVar8 = FUN_1800c1bb0(param_2,&DAT_1804290b0);
        fVar6 = local_1a8;
        if (cVar8 == '\0') {
          *(undefined1 *)(param_1 + 2) = 0;
          return param_1;
        }
        local_19c = 0;
        fVar19 = local_10c;
        while (iVar7 = local_19c, local_19c < *(int *)(lVar12 + 4)) {
          piVar16 = (int *)((longlong)*(int *)(lVar12 + 8) + (longlong)local_19c * 0x44 + lVar12);
          if ((((piVar16 == (int *)0x0) || (iVar2 = *piVar16, iVar2 < 0)) ||
              (*(int *)(local_180 + 0x9c) <= iVar2)) ||
             ((0x7f < iVar2 || (cVar8 = FUN_18018c550(piVar16 + 2,piVar16 + 5), cVar8 == '\0')))) {
            local_19c = iVar7 + 1;
          }
          else {
            uVar10 = 0;
            while (local_1a0 = uVar10, (int)uVar10 < 8) {
              lVar13 = 0x1c;
              if ((uVar10 & 4) == 0) {
                lVar13 = 0x10;
              }
              local_118 = *(undefined4 *)(lVar13 + (longlong)piVar16);
              lVar13 = 0x18;
              if ((uVar10 & 2) == 0) {
                lVar13 = 0xc;
              }
              local_11c = *(undefined4 *)(lVar13 + (longlong)piVar16);
              lVar13 = 0x14;
              if ((uVar10 & 1) == 0) {
                lVar13 = 8;
              }
              local_120 = *(undefined4 *)(lVar13 + (longlong)piVar16);
              FUN_1802d46f0(&local_120,&DAT_1804290b0 + (longlong)*piVar16 * 0x30,&local_130);
              cVar8 = FUN_180015580(&local_130,local_1bc + 3);
              if (cVar8 == '\0') {
                uVar10 = uVar10 + 1;
              }
              else {
                local_160 = local_130 - local_1bc[3];
                local_15c = local_12c - fStack_1ac;
                local_158 = local_128 - fVar6;
                fVar18 = local_15c * local_1bc[0] + local_160 * fVar19 + local_158 * 0.0;
                fVar20 = fVar18 + fVar1;
                fVar19 = local_1d8[0];
                if (DAT_180380bb0 < fVar20) {
                  fVar20 = fVar1 / fVar20;
                  fVar17 = (local_160 * local_1bc[1] + local_15c * local_1bc[2] + local_158 * 0.0) *
                           fVar20;
                  local_178 = CONCAT44(fVar18,fVar17);
                  local_170 = fVar20 * local_158;
                  if (bVar5) {
                    if (fVar17 <= fVar22) {
                      fVar22 = fVar17;
                    }
                    if (fVar23 <= fVar17) {
                      fVar23 = fVar17;
                    }
                    if (fVar18 <= fVar25) {
                      fVar25 = fVar18;
                    }
                    local_1d0 = CONCAT44(fVar25,fVar22);
                    if (fVar26 <= fVar18) {
                      fVar26 = fVar18;
                    }
                    local_140 = CONCAT44(fVar26,fVar23);
                    if (local_170 <= fVar24) {
                      fVar24 = local_170;
                    }
                    if (fVar21 <= local_170) {
                      fVar21 = local_170;
                    }
                    uVar10 = uVar10 + 1;
                    local_1c8 = fVar24;
                    local_138 = fVar21;
                  }
                  else {
                    local_178 = CONCAT44(fVar18,fVar17);
                    local_1d0 = CONCAT44(fVar18,fVar17);
                    local_140 = CONCAT44(fVar18,fVar17);
                    bVar5 = true;
                    local_1c0 = 1;
                    uVar10 = uVar10 + 1;
                    fVar21 = local_170;
                    fVar22 = fVar17;
                    fVar23 = fVar17;
                    fVar24 = local_170;
                    fVar25 = fVar18;
                    fVar26 = fVar18;
                    local_1c8 = local_170;
                    local_138 = local_170;
                  }
                }
                else {
                  uVar10 = uVar10 + 1;
                }
              }
            }
            local_19c = iVar7 + 1;
          }
        }
        if (bVar5) {
          local_1bc[0] = 2.0;
          local_1bc[2] = 0.25;
          local_1bc[1] = (fVar21 - fVar24) * DAT_1803809a0;
          pfVar15 = local_1bc + 2;
          if (DAT_180380a58 <= local_1bc[1]) {
            pfVar15 = local_1bc + 1;
          }
          pfVar14 = local_1bc;
          if (local_1bc[1] <= DAT_180380d30) {
            pfVar14 = pfVar15;
          }
          fVar1 = *pfVar14;
          local_1d0._0_4_ = fVar22 - fVar1;
          local_138 = fVar21 + fVar1;
          local_1d0._4_4_ = -1.0;
          local_140 = CONCAT44(0x3f800000,fVar23 + fVar1);
          cVar8 = FUN_18018c550(&local_1d0,&local_140);
          if (cVar8 != '\0') {
            local_1e0 = local_148;
            local_1e8 = local_144;
            piVar16 = (int *)FUN_18018df20(&local_160,&local_1d0,&local_140,&local_110);
            uVar3 = *(undefined8 *)(piVar16 + 1);
            uVar4 = *(undefined8 *)(piVar16 + 3);
            if (*piVar16 == 3) {
              if (param_3 != (float *)0x0) {
                *param_3 = (float)local_1d0;
                param_3[1] = local_1d0._4_4_;
                param_3[2] = local_1c8;
                *(undefined8 *)(param_3 + 3) = local_140;
                param_3[5] = local_138;
                *(ulonglong *)(param_3 + 6) = CONCAT44(fStack_1ac,local_1bc[3]);
                param_3[8] = local_1a8;
                *(undefined2 *)(param_3 + 9) = 0x101;
              }
              *param_1 = uVar3;
              param_1[1] = uVar4;
              *(undefined1 *)(param_1 + 2) = 1;
              return param_1;
            }
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}


