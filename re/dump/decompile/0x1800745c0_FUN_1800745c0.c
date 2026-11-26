// 0x1800745c0  FUN_1800745c0
// size=4136 thunk=false
// signature: undefined FUN_1800745c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800745c0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined8 uVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_218 [32];
  float *local_1f8;
  float *local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0 [5];
  float local_18c;
  float local_188 [4];
  float *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  float *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float fStack_104;
  float local_100;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined1 local_f5 [5];
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  ulonglong local_c0;
  
  local_c0 = DAT_1803da4c0 ^ (ulonglong)auStack_218;
  DAT_1803e91f4 = -1.0;
  cVar3 = FUN_180072ba0();
  if (cVar3 == '\0') {
    if (((DAT_180423985 == '\0') && (DAT_180423988 != '\0')) &&
       (cVar3 = FUN_180071c60(), cVar3 != '\0')) {
      local_1b0 = 90.0;
      cVar3 = FUN_180071d10(local_d0,local_e0);
      if (((cVar3 != '\0') && (((uint)*param_1 & 0x7f800000) != 0x7f800000)) &&
         ((((uint)param_1[1] & 0x7f800000) != 0x7f800000 &&
          (((uint)param_1[2] & 0x7f800000) != 0x7f800000)))) {
        local_f0 = DAT_180430190;
        local_e8 = DAT_180430198;
        local_ec = DAT_180430194;
        DAT_180423970 = 0;
        cVar3 = FUN_1800723a0(&local_138);
        fVar13 = local_130;
        fVar2 = local_134;
        fVar1 = local_138;
        if (cVar3 != '\0') {
          DAT_180423970 =
               (*(code *)PTR_FUN_1803da018)
                         ((local_134 - DAT_180430194) * (local_134 - DAT_180430194) +
                          (local_138 - DAT_180430190) * (local_138 - DAT_180430190) +
                          (local_130 - DAT_180430198) * (local_130 - DAT_180430198));
          local_f0 = fVar1;
          local_ec = fVar2;
          local_e8 = fVar13;
        }
        fVar17 = DAT_180381424;
        fVar13 = DAT_180381420;
        fVar2 = DAT_18038120c;
        fVar1 = DAT_180381188;
        local_108 = DAT_1803e9ac8;
        fStack_104 = DAT_1803e9acc;
        local_1d8 = DAT_1803e9ac8;
        local_1d4 = DAT_1803e9acc;
        local_1e0 = DAT_180381304;
        local_100 = 0.0;
        local_1d0 = 0.0;
        if (DAT_180423964 == '\0') {
          pfVar6 = &local_1a8;
          local_1a4 = 0.9;
          local_1a8 = 0.0;
          local_1a0[2] = 1.0;
          local_1a0[0] = 0.15;
          if (0.0 <= DAT_180423980) {
            pfVar6 = &DAT_180423980;
          }
          pfVar5 = &local_1a4;
          if (DAT_180423980 <= DAT_180380b68) {
            pfVar5 = pfVar6;
          }
          local_1a0[1] = DAT_180380bb0 - *pfVar5;
          pfVar6 = local_1a0;
          if (DAT_180380a1c <= local_1a0[1]) {
            pfVar6 = local_1a0 + 1;
          }
          pfVar5 = local_1a0 + 2;
          if (local_1a0[1] <= DAT_180380bb0) {
            pfVar5 = pfVar6;
          }
          local_1c8 = *pfVar5;
        }
        else {
          local_1c8 = DAT_180380bb0;
        }
        iVar7 = 0;
        fVar20 = DAT_1803e9acc;
        fVar21 = DAT_1803e9ac8;
        while( true ) {
          fVar10 = DAT_180380b68;
          pcVar8 = DAT_180423978;
          fVar11 = DAT_180423980;
          fVar15 = DAT_180380bb0;
          cVar3 = DAT_180423964;
          local_108 = fVar21;
          fStack_104 = fVar20;
          fVar9 = (float)FUN_180071bf0();
          if (pcVar8 == (code *)0x0) {
            local_134 = fVar20;
            if (cVar3 == '\0') {
              pfVar6 = &local_1e4;
              local_1e8 = 0.9;
              local_1e4 = 0.0;
              local_130 = fVar9;
              if (0.0 <= fVar11) {
                pfVar6 = &DAT_180423980;
              }
              pfVar5 = &local_1e8;
              if (fVar11 <= fVar10) {
                pfVar5 = pfVar6;
              }
              local_138 = (fVar15 - *pfVar5) * fVar21;
            }
            else {
              local_130 = 0.0;
              local_138 = fVar21;
            }
            local_1f0 = &local_128;
            local_1f8 = &local_118;
            FUN_1800720d0(&local_f0,&local_138,local_d0,local_e0);
          }
          else {
            local_1bc = fVar21;
            local_1b8 = fVar20;
            local_1b4 = fVar9;
            cVar3 = (*pcVar8)(&local_f0,&local_1bc,&local_118,&local_128);
            if (cVar3 == '\0') {
              local_118 = 1e+30;
              local_128 = 0.0;
              local_124 = 0.0;
              local_114 = 1e+30;
              local_110 = 1e+30;
              local_120 = 0.0;
            }
          }
          fVar11 = local_124;
          fVar10 = local_128;
          local_1e8 = param_1[1] - local_114;
          local_1e4 = *param_1 - local_118;
          fVar9 = param_1[2] - local_110;
          fVar15 = local_1e8 * local_1e8 + local_1e4 * local_1e4;
          if (fVar9 * fVar9 + fVar15 <= DAT_180380938) break;
          fVar9 = (float)((uint)fVar9 ^ DAT_1803817f0);
          if (fVar15 < 0.0) {
            fVar15 = sqrtf(fVar15);
          }
          else {
            fVar15 = SQRT(fVar15);
          }
          fVar15 = atan2f(fVar9,fVar15);
          fVar15 = fVar15 * DAT_1803810c0;
          fVar18 = (float)((uint)local_120 ^ DAT_1803817f0);
          fVar9 = fVar11 * fVar11 + fVar10 * fVar10;
          if (fVar9 < 0.0) {
            fVar9 = sqrtf(fVar9);
          }
          else {
            fVar9 = SQRT(fVar9);
          }
          fVar9 = atan2f(fVar18,fVar9);
          for (fVar15 = fVar15 - fVar9 * DAT_1803810c0; fVar1 < fVar15; fVar15 = fVar15 + fVar17) {
          }
          for (; fVar15 < fVar13; fVar15 = fVar15 + fVar2) {
          }
          fVar9 = atan2f(local_1e8,local_1e4);
          fVar9 = fVar9 * DAT_1803810c0;
          fVar10 = atan2f(fVar11,fVar10);
          for (local_188[0] = fVar9 - fVar10 * DAT_1803810c0; fVar1 < local_188[0];
              local_188[0] = local_188[0] + fVar17) {
          }
          for (; local_188[0] < fVar13; local_188[0] = local_188[0] + fVar2) {
          }
          if (((DAT_180381304 <= fVar15) || (fVar15 <= DAT_180381450)) ||
             ((DAT_180381304 <= local_188[0] || (local_188[0] <= DAT_180381450)))) break;
          fVar10 = (float)((uint)local_188[0] & _DAT_1803817c0) +
                   (float)((uint)fVar15 & _DAT_1803817c0);
          if (fVar10 < local_1e0) {
            local_1e0 = fVar10;
            local_1d8 = fVar21;
            local_1d4 = fVar20;
            local_1d0 = 0.0;
          }
          if (((float)((uint)fVar15 & _DAT_1803817c0) < DAT_180380980) &&
             ((float)((uint)local_188[0] & _DAT_1803817c0) < DAT_180380980)) break;
          local_1a0[4] = fVar15 / local_1c8;
          local_1a0[3] = -90.0;
          local_1c4 = 89.0;
          local_1e4 = -89.0;
          pfVar6 = local_1a0 + 3;
          if (DAT_180381414 <= local_1a0[4]) {
            pfVar6 = local_1a0 + 4;
          }
          pfVar5 = &local_1b0;
          if (local_1a0[4] <= DAT_18038110c) {
            pfVar5 = pfVar6;
          }
          for (local_1e8 = fVar21 + *pfVar5; fVar1 < local_1e8; local_1e8 = local_1e8 + fVar17) {
          }
          for (; local_1e8 < fVar13; local_1e8 = local_1e8 + fVar2) {
          }
          local_18c = -90.0;
          pfVar6 = &local_1e4;
          if (DAT_180381410 <= local_1e8) {
            pfVar6 = &local_1e8;
          }
          pfVar5 = &local_1c4;
          if (local_1e8 <= DAT_180381108) {
            pfVar5 = pfVar6;
          }
          fVar21 = *pfVar5;
          _local_108 = CONCAT44(fStack_104,fVar21);
          pfVar6 = &local_18c;
          if (DAT_180381414 <= local_188[0]) {
            pfVar6 = local_188;
          }
          pfVar5 = &local_1b0;
          if (local_188[0] <= DAT_18038110c) {
            pfVar5 = pfVar6;
          }
          for (fVar20 = fVar20 + *pfVar5; fVar1 < fVar20; fVar20 = fVar20 + fVar17) {
          }
          for (; fVar20 < fVar13; fVar20 = fVar20 + fVar2) {
          }
          iVar7 = iVar7 + 1;
          local_108 = fVar21;
          fStack_104 = fVar20;
          if (5 < iVar7) break;
        }
        local_178 = &local_f0;
        local_170 = local_d0;
        local_1c0 = 0.0;
        local_168 = local_e0;
        local_1c8 = 0.0;
        local_158 = &local_f8;
        local_150 = &local_f7;
        local_148 = &local_f6;
        local_140 = local_f5;
        local_160 = param_1;
        fVar11 = (float)FUN_1800755f0(&local_178,&local_108,&local_1c0,&local_1c8);
        fVar10 = DAT_180380ac0;
        fVar20 = DAT_1803809d8;
        fVar21 = DAT_1803809c4;
        if (fVar11 < local_1e0) {
          local_1d8 = local_108;
          local_1d0 = local_100;
          local_1d4 = fStack_104;
          local_1e0 = fVar11;
        }
        iVar7 = 0;
        while ((fVar11 = local_1e0, fVar15 = local_1d4, DAT_180380964 < local_1e0 &&
               (fVar18 = (float)FUN_1800755f0(&local_178,&local_1d8,&local_1c0,&local_1c8),
               fVar15 = local_1d4, fVar9 = local_1d8, fVar18 < DAT_180381304))) {
          fVar18 = fVar21;
          if (_DAT_180381104 < local_1d8) {
            fVar18 = DAT_180381330;
          }
          local_1b8 = local_1d4;
          local_1bc = local_1d8 + fVar18;
          local_1ac = 0.0;
          local_1e8 = 0.0;
          local_1c4 = 0.0;
          local_1e4 = 0.0;
          local_1b4 = 0.0;
          fVar12 = (float)FUN_1800755f0(&local_178,&local_1bc,&local_1ac,&local_1e8);
          fVar11 = local_1e0;
          if (DAT_180381304 <= fVar12) break;
          for (local_114 = fVar15 + fVar21; fVar1 < local_114; local_114 = local_114 + fVar17) {
          }
          for (; local_114 < fVar13; local_114 = local_114 + fVar2) {
          }
          local_118 = fVar9;
          local_110 = 0.0;
          fVar9 = (float)FUN_1800755f0(&local_178,&local_118,&local_1c4,&local_1e4);
          fVar11 = local_1e0;
          if (DAT_180381304 <= fVar9) break;
          for (fVar9 = local_1ac - local_1c0; fVar1 < fVar9; fVar9 = fVar9 + fVar17) {
          }
          for (; fVar9 < fVar13; fVar9 = fVar9 + fVar2) {
          }
          for (fVar12 = local_1c4 - local_1c0; fVar1 < fVar12; fVar12 = fVar12 + fVar17) {
          }
          for (; fVar12 < fVar13; fVar12 = fVar12 + fVar2) {
          }
          for (fVar19 = local_1e8 - local_1c8; fVar1 < fVar19; fVar19 = fVar19 + fVar17) {
          }
          for (; fVar19 < fVar13; fVar19 = fVar19 + fVar2) {
          }
          for (fVar14 = local_1e4 - local_1c8; fVar1 < fVar14; fVar14 = fVar14 + fVar17) {
          }
          for (; fVar14 < fVar13; fVar14 = fVar14 + fVar2) {
          }
          fVar16 = (fVar14 / fVar21) * (fVar9 / fVar18) - (fVar19 / fVar18) * (fVar12 / fVar21);
          fVar15 = local_1d4;
          if (((((DAT_180381304 <= fVar16) || (fVar16 <= DAT_180381450)) ||
               ((float)((uint)fVar16 & _DAT_1803817c0) < DAT_180380948)) ||
              ((fVar12 = ((fVar12 / fVar21) * local_1c8 - (fVar14 / fVar21) * local_1c0) / fVar16,
               DAT_180381304 <= fVar12 || (fVar12 <= DAT_180381450)))) ||
             ((fVar16 = ((fVar19 / fVar18) * local_1c0 - (fVar9 / fVar18) * local_1c8) / fVar16,
              DAT_180381304 <= fVar16 || (fVar16 <= DAT_180381450)))) break;
          fVar11 = (float)((uint)fVar16 & _DAT_1803817c0);
          if ((float)((uint)fVar16 & _DAT_1803817c0) <= (float)((uint)fVar12 & _DAT_1803817c0)) {
            fVar11 = (float)((uint)fVar12 & _DAT_1803817c0);
          }
          fVar9 = DAT_180380bb0;
          if (DAT_180380fe4 < fVar11) {
            fVar16 = (DAT_180380fe4 / fVar11) * fVar16;
            fVar12 = (DAT_180380fe4 / fVar11) * fVar12;
          }
          while( true ) {
            for (local_134 = fVar9 * fVar16 + local_1d4; fVar1 < local_134;
                local_134 = local_134 + fVar17) {
            }
            for (; local_134 < fVar13; local_134 = local_134 + fVar2) {
            }
            local_1e4 = -89.0;
            local_1c4 = 89.0;
            local_130 = 0.0;
            local_1e8 = fVar9 * fVar12 + local_1d8;
            pfVar6 = &local_1e4;
            if (DAT_180381410 <= local_1e8) {
              pfVar6 = &local_1e8;
            }
            pfVar5 = &local_1c4;
            if (local_1e8 <= DAT_180381108) {
              pfVar5 = pfVar6;
            }
            local_138 = *pfVar5;
            local_1e8 = 0.0;
            local_1e4 = 0.0;
            fVar11 = (float)FUN_1800755f0(&local_178,&local_138,&local_1e8,&local_1e4);
            if (fVar11 < local_1e0) break;
            fVar9 = fVar9 * fVar10;
            fVar15 = local_1d4;
            fVar11 = local_1e0;
            if (fVar9 < fVar20) goto LAB_1800751a7;
          }
          local_1d8 = local_138;
          iVar7 = iVar7 + 1;
          local_1d4 = local_134;
          local_1d0 = local_130;
          fVar15 = local_134;
          local_1e0 = fVar11;
          if (5 < iVar7) break;
        }
LAB_1800751a7:
        fVar2 = local_1d8;
        fVar1 = DAT_180381304;
        if (((fVar11 < DAT_180381304) && (((uint)local_1d8 & 0x7f800000) != 0x7f800000)) &&
           ((((uint)fVar15 & 0x7f800000) != 0x7f800000 &&
            (((uint)local_1d0 & 0x7f800000) != 0x7f800000)))) {
          pcVar8 = DAT_180423978;
          fVar13 = (float)FUN_180071bf0();
          if (pcVar8 == (code *)0x0) {
            local_134 = fVar15;
            if (DAT_180423964 == '\0') {
              pfVar6 = &local_1e4;
              local_1e8 = 0.9;
              local_1e4 = 0.0;
              local_130 = fVar13;
              if (0.0 <= DAT_180423980) {
                pfVar6 = &DAT_180423980;
              }
              pfVar5 = &local_1e8;
              if (DAT_180423980 <= DAT_180380b68) {
                pfVar5 = pfVar6;
              }
              local_138 = (DAT_180380bb0 - *pfVar5) * fVar2;
            }
            else {
              local_138 = fVar2;
              local_130 = 0.0;
            }
            local_1f0 = &local_108;
            local_1f8 = &local_118;
            FUN_1800720d0(&local_f0,&local_138,local_d0,local_e0);
          }
          else {
            local_1bc = fVar2;
            local_1b8 = fVar15;
            local_1b4 = fVar13;
            cVar3 = (*pcVar8)(&local_f0,&local_1bc,&local_118,&local_108);
            if (cVar3 == '\0') {
              local_118 = 1e+30;
              local_114 = 1e+30;
              local_110 = 1e+30;
              local_108 = 0.0;
              fStack_104 = 0.0;
              local_100 = 0.0;
            }
          }
          fVar13 = DAT_180380938;
          local_128 = *param_1 - local_118;
          local_124 = param_1[1] - local_114;
          local_120 = param_1[2] - local_110;
          if ((((((uint)local_128 & 0x7f800000) != 0x7f800000) &&
               (((uint)local_124 & 0x7f800000) != 0x7f800000)) &&
              (((uint)local_120 & 0x7f800000) != 0x7f800000)) &&
             (DAT_180380938 < local_124 * local_124 + local_128 * local_128 + local_120 * local_120)
             ) {
            (*(code *)PTR_FUN_1803da000)(&local_128);
            DAT_1805c39d0 = local_128;
            DAT_1805c39d8 = local_120;
            DAT_1803ebbb8 = local_1d0;
            DAT_1805c39d4 = local_124;
            DAT_1803ebbb0 = fVar2;
            DAT_180423987 = 1;
            DAT_1803e9250 = DAT_1803813b0;
            if (DAT_1803fa608 != (float *)0x0) {
              DAT_1803e9250 = (double)*DAT_1803fa608;
            }
            DAT_1803ebbb4 = fVar15;
            if (((((uint)local_108 & 0x7f800000) != 0x7f800000) &&
                (((uint)fStack_104 & 0x7f800000) != 0x7f800000)) &&
               ((((uint)local_100 & 0x7f800000) != 0x7f800000 &&
                (fVar13 < fStack_104 * fStack_104 + local_108 * local_108 + local_100 * local_100)))
               ) {
              local_138 = local_108;
              local_134 = fStack_104;
              local_130 = local_100;
              (*(code *)PTR_FUN_1803da000)(&local_138);
              fVar17 = local_134 * local_124 + local_138 * local_128 + local_130 * local_120;
              fVar13 = DAT_180381384;
              if (DAT_180381384 <= fVar17) {
                fVar13 = fVar17;
              }
              fVar17 = DAT_180380bb0;
              if (fVar13 <= DAT_180380bb0) {
                fVar17 = fVar13;
              }
              fVar13 = acosf(fVar17);
              fVar13 = fVar13 * DAT_1803810c0;
              if ((fVar13 < fVar1) && (DAT_180381450 < fVar13)) {
                fVar11 = fVar13;
              }
            }
          }
          DAT_1803e91f4 = fVar11;
          *param_2 = fVar2;
          param_2[1] = fVar15;
          param_2[2] = 0.0;
          return 1;
        }
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    DAT_1803e91f4 = (float)DAT_1803e91f0;
  }
  return uVar4;
}


