// 0x1800b8c50  FUN_1800b8c50
// size=2359 thunk=false
// signature: undefined FUN_1800b8c50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800b8c50(int param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  undefined4 uVar14;
  uint uVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float _Y;
  float fVar23;
  undefined1 auStack_1b8 [32];
  float local_198;
  double local_190;
  undefined4 *local_188;
  undefined1 local_178;
  float local_174;
  ulonglong local_170;
  undefined8 local_168;
  float local_160;
  undefined4 local_158;
  int local_154;
  int local_150;
  uint local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140;
  undefined1 local_13f;
  undefined2 local_13e;
  float local_13c;
  float local_138;
  float local_134;
  undefined1 local_128 [16];
  undefined4 local_118 [16];
  ulonglong local_d8;
  
  local_d8 = DAT_1803da4c0 ^ (ulonglong)auStack_1b8;
  lVar12 = (longlong)param_1;
  if (((param_1 - 1U < 0x80) && (param_2 != 0)) && (DAT_1803fa608 != 0)) {
    lVar9 = lVar12 * 0x168;
    local_170 = *(ulonglong *)(DAT_1803fa608 + 0x10);
    uVar14 = (undefined4)local_170;
    uVar21 = (undefined4)(local_170 >> 0x20);
    puVar5 = (undefined8 *)FUN_18001d350(param_2);
    local_168 = *puVar5;
    local_160 = *(float *)(puVar5 + 1);
    FUN_1800b5be0(param_2,&local_168);
    *(bool *)(&DAT_180561188 + lVar12 * 0xb4) =
         _DAT_1803810f8 < (float)((uint)(float)local_168 & _DAT_1803817c0);
    fVar18 = local_168._4_4_;
    *(float *)((longlong)&DAT_180561150 + lVar9 + 4) = local_168._4_4_;
    (&DAT_180561158)[lVar9] = 1;
    dVar16 = (double)FUN_18001c0d0(param_2);
    dVar19 = *(double *)(DAT_1803fa608 + 0x28);
    if (*(double *)(DAT_1803fa608 + 0x28) <= 0.0) {
      dVar19 = DAT_180380be0;
    }
    if ((&DAT_18056117c)[lVar9] == '\0') {
      (&DAT_180561170)[lVar12 * 0x2d] = dVar16;
      (&DAT_180561178)[lVar12 * 0x5a] = fVar18;
      puVar6 = (undefined4 *)FUN_18001daf0(param_2,local_128);
      *(undefined4 *)((longlong)&DAT_1805611b0 + lVar9 + 4) = *puVar6;
      *(undefined4 *)(&DAT_1805611b8 + lVar12 * 0x2d) = puVar6[1];
      *(undefined4 *)((longlong)&DAT_1805611b8 + lVar9 + 4) = puVar6[2];
      (&DAT_1805611c0)[lVar9] = 1;
      (&DAT_18056117c)[lVar9] = 1;
      for (local_154 = 0; local_154 < 6; local_154 = local_154 + 1) {
        local_148 = 0;
        local_144 = 0;
        local_140 = 0;
        local_13f = 0;
        lVar7 = (longlong)local_154;
        *(undefined8 *)((longlong)&DAT_1805611c8 + lVar7 * 0xc + lVar9) = 0;
        *(undefined2 *)(&DAT_1805611d0 + lVar12 * 0x5a + lVar7 * 3) = 0;
        *(undefined2 *)(lVar9 + 0x1805611d2 + lVar7 * 0xc) = local_13e;
        *(float *)((longlong)&DAT_1805611c8 + lVar7 * 0xc + lVar9) = fVar18;
        *(float *)(lVar9 + 0x1805611cc + lVar7 * 0xc) = fVar18;
        *(undefined1 *)(&DAT_1805611d0 + lVar12 * 0x5a + lVar7 * 3) = 1;
      }
      (&DAT_180561210)[lVar9] = 1;
      (&DAT_180561218)[lVar12 * 0x2d] = dVar16;
      *(undefined4 *)(&DAT_180561220 + lVar12 * 0x2d) = 0;
      *(undefined4 *)((longlong)&DAT_180561220 + lVar9 + 4) = 0;
      *(undefined1 *)(&DAT_180561228 + lVar12 * 0xb4) = 0;
      fVar17 = DAT_180380ac0;
      fVar23 = DAT_180380bb0;
    }
    else {
      fVar17 = DAT_180380ac0;
      fVar23 = DAT_180380bb0;
      if ((double)(&DAT_180561170)[lVar12 * 0x2d] + DAT_180380ae8 < dVar16) {
        local_174 = (float)dVar19;
        dVar19 = (double)local_174;
        fVar20 = (float)((dVar16 - (double)(&DAT_180561170)[lVar12 * 0x2d]) / dVar19);
        if ((0.0 < fVar20) && (fVar20 < DAT_1803810d0)) {
          uVar15 = FUN_180022110(fVar18);
          fVar23 = DAT_180380bb0;
          fVar17 = (float)(uVar15 & _DAT_1803817c0);
          if (DAT_180380bb0 < fVar20) {
            fVar17 = fVar17 / fVar20;
          }
          *(float *)(&DAT_180561180 + lVar12 * 0x2d) =
               fVar17 * DAT_180380a6c + *(float *)(&DAT_180561180 + lVar12 * 0x2d) * DAT_180380b10;
          *(float *)((longlong)&DAT_180561180 + lVar9 + 4) =
               *(float *)((longlong)&DAT_180561180 + lVar9 + 4) * DAT_180380b10 +
               fVar20 * DAT_180380a6c;
          FUN_18001daf0(param_2,&local_168);
          local_128 = ZEXT416((uint)(float)local_168);
          fVar22 = (float)local_168 - *(float *)((longlong)&DAT_1805611b0 + lVar9 + 4);
          _Y = local_168._4_4_ - *(float *)(&DAT_1805611b8 + lVar12 * 0x2d);
          fVar17 = _Y * _Y + fVar22 * fVar22;
          if (fVar17 <= DAT_180380e9c) {
            fVar13 = *(float *)(&DAT_1805611b0 + lVar12 * 0x2d);
            *(float *)(&DAT_1805611b0 + lVar12 * 0x2d) = fVar20 + fVar13;
            if (DAT_180380fa8 < fVar20 + fVar13) {
              (&DAT_1805611ac)[lVar9] = 0;
            }
          }
          else {
            fVar13 = atan2f(_Y,fVar22);
            (&DAT_1805611a8)[lVar12 * 0x5a] = fVar13 * DAT_1803810bc;
            (&DAT_1805611ac)[lVar9] = 1;
            *(undefined4 *)(&DAT_1805611b0 + lVar12 * 0x2d) = 0;
          }
          puVar6 = (undefined4 *)0x0;
          fVar13 = local_160 - *(float *)((longlong)&DAT_1805611b8 + lVar9 + 4);
          fVar17 = fVar13 * fVar13 + fVar17;
          if (fVar17 < 0.0) {
            fVar17 = sqrtf(fVar17);
          }
          else {
            fVar17 = SQRT(fVar17);
          }
          fVar2 = local_174;
          fVar1 = DAT_18038093c;
          fVar20 = fVar20 * local_174;
          if (fVar20 <= DAT_18038093c) {
            fVar17 = 0.0;
          }
          else {
            fVar17 = fVar17 / fVar20;
          }
          *(float *)(&DAT_180561230 + lVar12 * 0x2d) = fVar17;
          if (fVar1 < fVar20) {
            *(undefined4 *)((longlong)&DAT_180561240 + lVar9 + 4) =
                 *(undefined4 *)(&DAT_180561238 + lVar12 * 0x2d);
            *(undefined4 *)(&DAT_180561248 + lVar12 * 0x2d) =
                 *(undefined4 *)((longlong)&DAT_180561238 + lVar9 + 4);
            *(undefined4 *)((longlong)&DAT_180561248 + lVar9 + 4) =
                 *(undefined4 *)(&DAT_180561240 + lVar12 * 0x2d);
            *(undefined1 *)((longlong)&DAT_180561250 + lVar9 + 1) =
                 *(undefined1 *)(&DAT_180561250 + lVar12 * 0xb4);
            local_134 = fVar13 / fVar20;
            local_138 = _Y / fVar20;
            local_13c = fVar22 / fVar20;
            *(float *)(&DAT_180561238 + lVar12 * 0x2d) = local_13c;
            *(float *)((longlong)&DAT_180561238 + lVar9 + 4) = local_138;
            *(float *)(&DAT_180561240 + lVar12 * 0x2d) = local_134;
            *(undefined1 *)(&DAT_180561250 + lVar12 * 0xb4) = 1;
          }
          iVar10 = 0;
          iVar4 = iVar10;
          if ((0.0 < local_174) && ((double)(&DAT_180561170)[lVar12 * 0x2d] < dVar16)) {
            iVar4 = (int)((dVar16 - (double)(&DAT_180561170)[lVar12 * 0x2d]) / dVar19 +
                         DAT_180380cb0);
            if (iVar4 < 1) {
              iVar4 = 1;
            }
          }
          *(int *)((longlong)&DAT_180561230 + lVar9 + 4) = iVar4;
          fVar17 = DAT_180380ac0;
          FUN_1800b2f10(param_1);
          iVar4 = *(int *)((longlong)&DAT_180561230 + lVar9 + 4);
          if ((1 < iVar4) && (iVar4 = iVar4 + -1, iVar4 < 0x10)) {
            lVar7 = lVar12 * 0x318;
            if (*(int *)(&DAT_18040a958 + lVar7) == 1) {
              local_14c = 0;
              puVar8 = puVar6;
              while (iVar11 = (int)puVar8, iVar10 = 1, iVar11 < iVar4) {
                uVar14 = FUN_1800b1d70(fVar18 - (float)(iVar4 - iVar11) *
                                                *(float *)(&DAT_18040a95c + lVar7));
                local_118[iVar11] = uVar14;
                local_14c = iVar11 + 1;
                puVar8 = (undefined4 *)(ulonglong)local_14c;
              }
            }
            else if (*(int *)(&DAT_18040a958 + lVar7) == 2) {
              uVar14 = FUN_1800b1d70(fVar18 - *(float *)(&DAT_18040a95c + lVar7));
              puVar8 = puVar6;
              while (local_150 = (int)puVar8, iVar10 = 1, local_150 < iVar4) {
                local_118[local_150] = uVar14;
                puVar8 = (undefined4 *)(ulonglong)(local_150 + 1);
              }
            }
          }
          local_188 = local_118;
          if (iVar10 == 0) {
            local_188 = puVar6;
          }
          local_198 = fVar2;
          local_190 = dVar16;
          FUN_1800b3420(&DAT_1805611c8 + lVar12 * 0x2d);
          *(ulonglong *)((longlong)&DAT_1805611b0 + lVar9 + 4) =
               CONCAT44(local_168._4_4_,local_128._0_4_);
          *(float *)((longlong)&DAT_1805611b8 + lVar9 + 4) = local_160;
        }
        (&DAT_180561170)[lVar12 * 0x2d] = dVar16;
        (&DAT_180561178)[lVar12 * 0x5a] = fVar18;
        uVar14 = (undefined4)local_170;
        uVar21 = (undefined4)(local_170 >> 0x20);
      }
    }
    fVar20 = *(float *)((longlong)&DAT_180561180 + lVar9 + 4);
    fVar22 = DAT_180409cb8;
    if (((0.0 < fVar20) && (fVar22 = fVar20, 0.0 < DAT_180409cb8)) && (DAT_180409cb8 <= fVar20)) {
      fVar22 = DAT_180409cb8 + (fVar20 - DAT_180409cb8) * DAT_180380958;
    }
    DAT_180409cb8 = fVar22;
    fVar22 = DAT_180409cb8;
    if (DAT_180409cb8 <= 0.0) {
      fVar22 = fVar23;
    }
    if (((*(char *)(&DAT_180561188 + lVar12 * 0xb4) != '\0') ||
        (fVar22 * DAT_180380c88 + fVar17 < fVar20)) ||
       (cVar3 = '\0', DAT_18038103c <= *(float *)(&DAT_180561180 + lVar12 * 0x2d))) {
      cVar3 = '\x01';
    }
    *(char *)((longlong)&DAT_180561188 + lVar9 + 1) = cVar3;
    if (cVar3 != '\0') {
      *(float *)(&DAT_18056118c + lVar12 * 0x2d) =
           (float)(double)CONCAT44(uVar21,uVar14) + DAT_180380e28;
    }
    local_170 = local_170 & 0xffffffff00000000;
    cVar3 = FUN_1800b5f30(param_2,&local_170);
    (&DAT_180561194)[lVar9] = cVar3;
    if (cVar3 != '\0') {
      *(undefined4 *)((longlong)&DAT_18056118c + lVar9 + 4) = (undefined4)local_170;
    }
    cVar3 = FUN_1800b61b0(param_2,&local_170);
    (&DAT_18056119c)[lVar9] = cVar3;
    if (cVar3 != '\0') {
      (&DAT_180561198)[lVar12 * 0x5a] = (undefined4)local_170;
    }
    local_174 = 0.0;
    cVar3 = FUN_1800b5f30(param_2,&local_174);
    if (cVar3 == '\0') {
      (&DAT_1805611a4)[lVar9] = 0;
    }
    else {
      uVar15 = FUN_1802d3e00(fVar18 - local_174);
      local_170 = CONCAT44(local_170._4_4_,uVar15);
      (&DAT_1805611a0)[lVar12 * 0x5a] = uVar15;
      (&DAT_1805611a4)[lVar9] = _DAT_18038108c <= (float)(uVar15 & _DAT_1803817c0);
    }
    local_158 = 0;
    local_178 = 0;
    cVar3 = FUN_1800b86f0();
    if (cVar3 == '\0') {
      if ((&DAT_180561194)[lVar9] == '\0') {
        return;
      }
      local_158 = *(undefined4 *)((longlong)&DAT_18056118c + lVar9 + 4);
    }
    else {
      if ((&DAT_18056114c)[lVar9] == '\0') {
        return;
      }
      local_158 = (&DAT_180561148)[lVar12 * 0x5a];
    }
    local_178 = 1;
    uVar15 = FUN_180022110(fVar18);
    fVar18 = (float)(uVar15 & _DAT_1803817c0);
    if (fVar18 <= DAT_180381110) {
      fVar17 = (float)(&DAT_18056115c)[lVar12 * 0x5a];
      if (fVar18 <= fVar17) {
        (&DAT_18056115c)[lVar12 * 0x5a] = fVar17 - (fVar17 - fVar18) * _DAT_180380968;
      }
      else {
        (&DAT_18056115c)[lVar12 * 0x5a] = fVar18;
      }
    }
  }
  return;
}


