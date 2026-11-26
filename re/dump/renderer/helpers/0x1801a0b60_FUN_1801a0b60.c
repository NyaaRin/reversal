// 1801a0b60  FUN_1801a0b60
// signature: undefined FUN_1801a0b60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801a0b60(char *param_1,char *param_2)

{
  char *pcVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  float *pfVar9;
  float *pfVar10;
  char *pcVar11;
  byte bVar12;
  char *pcVar13;
  uint uVar14;
  undefined1 uVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_1d8 [32];
  float local_1b8;
  float *local_1b0;
  char *local_1a8;
  char *local_1a0;
  ulonglong local_198;
  undefined4 local_190;
  undefined4 local_188;
  byte local_178;
  float local_174;
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float local_160 [2];
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140 [2];
  float local_138 [2];
  undefined8 local_130;
  float local_128;
  float local_124;
  float local_120 [6];
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  char local_f8;
  char local_f7 [7];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  FUN_18019a460();
  lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar17 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar16 = *(longlong *)(lVar17 + 0xec0);
  uVar8 = *(ulonglong *)(lVar16 + 0x1520);
  *(undefined1 *)(uVar8 + 0xce) = 1;
  plVar3 = *(longlong **)(lVar16 + 0x1520);
  if (*(char *)((longlong)plVar3 + 0xd1) == '\0') {
    local_150 = 5.60519e-45;
    pfVar10 = &local_14c;
    local_14c = 0.0;
    if (-1 < (int)DAT_1803fb24c) {
      pfVar10 = &DAT_1803fb24c;
    }
    pfVar9 = &local_150;
    if ((int)DAT_1803fb24c < 5) {
      pfVar9 = pfVar10;
    }
    DAT_1803fb24c = *pfVar9;
    lVar16 = (longlong)(int)DAT_1803fb24c;
    if (*(char *)(lVar17 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_130 = *(longlong *)(lVar17 + 0xec0);
    uVar6 = FUN_180268980(param_1,0,
                          *(undefined4 *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));
    if (*(uint *)(*plVar3 + 0x1578) == uVar6) {
      FUN_1802899e0(uVar6,0xb,param_1);
    }
    pcVar11 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar11 != '\0') {
        pcVar13 = pcVar11 + 1;
        if (((*pcVar11 == '#') && (*pcVar13 == '#')) ||
           (pcVar11 = pcVar13, pcVar13 == (char *)0xffffffffffffffff)) break;
      }
    }
    if (*(char *)(lVar17 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pcVar13 = pcVar11;
    if (pcVar11 == (char *)0x0) {
      pcVar13 = (char *)0xffffffffffffffff;
    }
    pcVar1 = param_1;
    do {
      pcVar5 = pcVar1;
      if ((pcVar13 <= pcVar5) || (*pcVar5 == '\0')) break;
      pcVar1 = pcVar5 + 1;
    } while ((*pcVar5 != '#') || (*pcVar1 != '#'));
    local_14c = *(float *)(*(longlong *)(lVar17 + 0xec0) + 0x1238);
    if (param_1 == pcVar5) {
      fVar19 = 0.0;
      local_154 = local_14c;
    }
    else {
      local_188 = 0;
      local_198 = 0;
      local_1b8 = -1.0;
      local_1b0 = (float *)param_1;
      local_1a8 = pcVar5;
      local_1a0 = pcVar5;
      FUN_18029e350(&local_158,*(undefined8 *)(*(longlong *)(lVar17 + 0xec0) + 0x1228),local_14c,
                    0x7f7fffff);
      local_14c = local_154;
      fVar19 = (float)(int)(local_158 + 0.99999);
    }
    local_150 = fVar19;
    local_14c = local_154;
    if (*(char *)(lVar17 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pfVar10 = &local_128;
    local_124 = 1.5;
    local_128 = 0.75;
    fVar20 = *(float *)(*(longlong *)(lVar17 + 0xec0) + 0xcc8);
    if (0.75 <= DAT_1803da6a4) {
      pfVar10 = &DAT_1803da6a4;
    }
    pfVar9 = &local_124;
    if (DAT_1803da6a4 <= 1.5) {
      pfVar9 = pfVar10;
    }
    fVar18 = (fVar20 + fVar20 + *(float *)(*(longlong *)(lVar17 + 0xec0) + 0x1238)) * 0.64;
    fVar20 = *pfVar9 * 14.0;
    if ((fVar20 <= fVar18) && (fVar20 = *pfVar9 * 20.0, fVar18 <= fVar20)) {
      fVar20 = fVar18;
    }
    fVar18 = *(float *)(plVar3 + 0x23);
    fVar22 = *(float *)((longlong)plVar3 + 0x11c);
    local_154 = *(float *)(local_130 + 0xcc8) + *(float *)(local_130 + 0xcc8) + local_154;
    fVar23 = fVar20;
    if (fVar20 <= local_154) {
      fVar23 = local_154;
    }
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    else {
      fVar19 = fVar19 + *(float *)(local_130 + 0xcdc);
    }
    local_e4 = fVar23 + fVar22;
    local_e8 = fVar20 * 1.85 + fVar19 + fVar18;
    local_154 = local_e4 - fVar22;
    local_158 = local_e8 - fVar18;
    local_f0 = fVar18;
    local_ec = fVar22;
    FUN_18027f400(&local_158,*(undefined4 *)(local_130 + 0xcc8));
    FUN_18019a7a0(param_1,&local_f0);
    uVar8 = FUN_18027f160(&local_f0,uVar6,0,0);
    if ((char)uVar8 != '\0') {
      local_1b8 = 0.0;
      lVar17 = lVar16 * 200;
      local_178 = FUN_1802ab600(&local_f0,uVar6,&local_f8,local_f7);
      if (local_178 != 0) {
        *param_2 = *param_2 == '\0';
        FUN_18026ed00(uVar6);
      }
      lVar4 = plVar3[0x59];
      pcVar13 = "mc_fill";
      uVar6 = ~uVar6;
      bVar12 = 0x6d;
      uVar14 = uVar6;
      do {
        pcVar13 = pcVar13 + 1;
        if (((bVar12 == 0x23) && (*pcVar13 == 0x23)) && (pcVar13[1] == 0x23)) {
          pcVar13 = pcVar13 + 2;
          uVar14 = uVar6;
        }
        else {
          uVar14 = uVar14 >> 8 ^
                   *(uint *)(&DAT_180331380 + ((ulonglong)(uVar14 & 0xff) ^ (ulonglong)bVar12) * 4);
        }
        bVar12 = *pcVar13;
      } while (bVar12 != 0);
      fVar19 = (float)FUN_1802d3320(~uVar14,*param_2,0x3f80000000000000,0x41600000);
      if ((local_f8 == '\0') && (local_f7[0] == '\0')) {
        uVar15 = 0;
      }
      else {
        uVar15 = 1;
      }
      pcVar13 = "mc_hover";
      bVar12 = 0x6d;
      uVar14 = uVar6;
      do {
        pcVar13 = pcVar13 + 1;
        if (((bVar12 == 0x23) && (*pcVar13 == 0x23)) && (pcVar13[1] == 0x23)) {
          pcVar13 = pcVar13 + 2;
          uVar14 = uVar6;
        }
        else {
          uVar14 = uVar14 >> 8 ^
                   *(uint *)(&DAT_180331380 + ((ulonglong)(uVar14 & 0xff) ^ (ulonglong)bVar12) * 4);
        }
        bVar12 = *pcVar13;
      } while (bVar12 != 0);
      local_158 = (float)FUN_1802d3320(~uVar14,uVar15,0x3f80000000000000,0x41900000);
      local_120[4] = 1.0;
      local_120[0] = 0.0;
      fVar21 = fVar20 * 0.5;
      local_174 = 1.0;
      fVar22 = fVar23 * 0.5 + fVar22;
      local_138[0] = fVar19;
      local_140[0] = 0.0;
      fVar23 = fVar18 + fVar20 * 1.85;
      local_170 = fVar18;
      fVar20 = fVar21 + fVar22;
      local_148 = fVar23;
      local_144 = fVar20;
      local_160[0] = fVar22 - fVar21;
      fStack_16c = fVar22 - fVar21;
      local_120[2] = local_158 * 0.15 + 0.55;
      pfVar10 = local_120;
      if (0.0 <= local_120[2]) {
        pfVar10 = local_120 + 2;
      }
      pfVar9 = local_120 + 4;
      if (local_120[2] <= 1.0) {
        pfVar9 = pfVar10;
      }
      fVar2 = *pfVar9;
      pfVar10 = local_140;
      if (0.0 <= fVar19) {
        pfVar10 = local_138;
      }
      local_108 = fVar2 * (*(float *)(&DAT_1803dc998 + lVar17) - *(float *)(&DAT_1803dc978 + lVar17)
                          ) + *(float *)(&DAT_1803dc978 + lVar17);
      fStack_104 = fVar2 * (*(float *)(&DAT_1803dc99c + lVar17) -
                           *(float *)(&DAT_1803dc97c + lVar17)) +
                   *(float *)(&DAT_1803dc97c + lVar17);
      fStack_100 = fVar2 * (*(float *)(&DAT_1803dc9a0 + lVar17) -
                           *(float *)(&DAT_1803dc980 + lVar17)) +
                   *(float *)(&DAT_1803dc980 + lVar17);
      fStack_fc = fVar2 * (*(float *)(&DAT_1803dc9a4 + lVar17) - *(float *)(&DAT_1803dc984 + lVar17)
                          ) + *(float *)(&DAT_1803dc984 + lVar17);
      pfVar9 = &local_174;
      if (fVar19 <= 1.0) {
        pfVar9 = pfVar10;
      }
      fVar2 = *pfVar9;
      local_108 = fVar2 * (*(float *)(&DAT_1803dc9c8 + lVar17) - local_108) + local_108;
      fStack_104 = fVar2 * (*(float *)(&DAT_1803dc9cc + lVar17) - fStack_104) + fStack_104;
      fStack_100 = fVar2 * (*(float *)(&DAT_1803dc9d0 + lVar17) - fStack_100) + fStack_100;
      fStack_fc = fVar2 * (*(float *)(&DAT_1803dc9d4 + lVar17) - fStack_fc) + fStack_fc;
      uVar7 = FUN_180268ed0(&local_108);
      local_1b0 = (float *)((ulonglong)local_1b0 & 0xffffffff00000000);
      local_1b8 = fVar21;
      FUN_180295000(lVar4,&local_170,&local_148,uVar7);
      local_138[0] = fVar19 * 0.6;
      local_140[0] = 1.0;
      local_174 = 0.0;
      pfVar10 = &local_174;
      if (0.0 <= local_138[0]) {
        pfVar10 = local_138;
      }
      pfVar9 = local_140;
      if (local_138[0] <= 1.0) {
        pfVar9 = pfVar10;
      }
      fVar2 = *pfVar9;
      local_170 = (*(float *)(&DAT_1803dc9c8 + lVar17) - *(float *)(&DAT_1803dc9b8 + lVar17)) *
                  fVar2 + *(float *)(&DAT_1803dc9b8 + lVar17);
      fStack_16c = (*(float *)(&DAT_1803dc9cc + lVar17) - *(float *)(&DAT_1803dc9bc + lVar17)) *
                   fVar2 + *(float *)(&DAT_1803dc9bc + lVar17);
      fStack_168 = (*(float *)(&DAT_1803dc9d0 + lVar17) - *(float *)(&DAT_1803dc9c0 + lVar17)) *
                   fVar2 + *(float *)(&DAT_1803dc9c0 + lVar17);
      fStack_164 = ((*(float *)(&DAT_1803dc9d4 + lVar17) - *(float *)(&DAT_1803dc9c4 + lVar17)) *
                    fVar2 + *(float *)(&DAT_1803dc9c4 + lVar17)) * 0.55;
      uVar6 = FUN_180268ed0(&local_170);
      if ((uVar6 & 0xff000000) != 0) {
        local_144 = local_160[0] + 0.5;
        local_1b8 = 0.0;
        if ((*(byte *)(lVar4 + 0x30) & 1) == 0) {
          local_170 = fVar23 - 0.49;
          fStack_16c = fVar20 - 0.49;
        }
        else {
          local_170 = fVar23 - 0.5;
          fStack_16c = fVar20 - 0.5;
        }
        local_148 = fVar18 + 0.5;
        FUN_180294990(lVar4,&local_148,&local_170,fVar21);
        local_1b0 = (float *)CONCAT44(local_1b0._4_4_,0x200);
        local_1b8 = 1.0;
        FUN_1802929d0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar6);
        *(undefined4 *)(lVar4 + 0x50) = 0;
      }
      fVar20 = local_158;
      fVar21 = fVar21 - 2.5;
      fVar18 = fVar21 + fVar18 + 2.0;
      fVar18 = (((fVar23 - fVar21) - 2.0) - fVar18) * fVar19 + fVar18;
      if (0.01 < local_158) {
        local_170 = *(float *)(&DAT_1803dc9c8 + lVar17);
        fStack_16c = *(float *)(&DAT_1803dc9cc + lVar17);
        fStack_168 = *(float *)(&DAT_1803dc9d0 + lVar17);
        fStack_164 = *(float *)(&DAT_1803dc9d4 + lVar17) * local_158 * 0.2;
        uVar6 = FUN_180268ed0(&local_170);
        local_170 = fVar18;
        fStack_16c = fVar22;
        if (((uVar6 & 0xff000000) != 0) && (0.5 <= fVar21 + 3.0)) {
          local_1b0 = (float *)CONCAT44(local_1b0._4_4_,0x13);
          local_1b8 = 5.969026;
          FUN_1802941e0(lVar4,&local_170,fVar21 + 3.0,0);
          FUN_1802938c0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar6);
          *(undefined4 *)(lVar4 + 0x50) = 0;
        }
      }
      local_174 = 1.0;
      local_158 = 0.0;
      local_160[0] = fVar19;
      pfVar10 = &local_158;
      if (0.0 <= fVar19) {
        pfVar10 = local_160;
      }
      pfVar9 = &local_174;
      if (fVar19 <= 1.0) {
        pfVar9 = pfVar10;
      }
      fVar2 = *pfVar9;
      local_170 = fVar2 * 0.18 + 0.82;
      fStack_16c = fVar2 * 0.14999998 + 0.85;
      fStack_168 = fVar2 * 0.100000024 + 0.9;
      fStack_164 = fVar2 * 0.0 + 1.0;
      uVar6 = FUN_180268ed0(&local_170);
      local_170 = fVar18;
      fStack_16c = fVar22;
      if (((uVar6 & 0xff000000) != 0) && (0.5 <= fVar21)) {
        local_1b0 = (float *)CONCAT44(local_1b0._4_4_,0x13);
        local_1b8 = 5.969026;
        FUN_1802941e0(lVar4,&local_170,fVar21,0);
        FUN_1802938c0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar6);
        *(undefined4 *)(lVar4 + 0x50) = 0;
      }
      if (0.0 < local_150) {
        if (fVar19 <= fVar20) {
          fVar19 = fVar20;
        }
        fStack_fc = *(float *)((longlong)&DAT_1803dca30 + lVar17 + 4);
        local_174 = 1.0;
        local_158 = 0.0;
        local_160[0] = fVar19;
        pfVar10 = &local_158;
        if (0.0 <= fVar19) {
          pfVar10 = local_160;
        }
        local_130 = CONCAT44(fVar22 - local_14c * 0.5,fVar23 + *(float *)(local_130 + 0xcdc));
        pfVar9 = &local_174;
        if (fVar19 <= 1.0) {
          pfVar9 = pfVar10;
        }
        fVar19 = *pfVar9;
        local_108 = fVar19 * (*(float *)(&DAT_1803dca18 + lVar17) -
                             *(float *)(&DAT_1803dca28 + lVar17)) +
                    *(float *)(&DAT_1803dca28 + lVar17);
        fStack_104 = fVar19 * (*(float *)(&DAT_1803dca1c + lVar17) -
                              *(float *)(&DAT_1803dca2c + lVar17)) +
                     *(float *)(&DAT_1803dca2c + lVar17);
        fStack_100 = fVar19 * (*(float *)(&DAT_1803dca20 + lVar17) -
                              *(float *)(&DAT_1803dca30 + lVar16 * 0x19)) +
                     *(float *)(&DAT_1803dca30 + lVar16 * 0x19);
        fStack_fc = fVar19 * (*(float *)(&DAT_1803dca24 + lVar17) - fStack_fc) + fStack_fc;
        local_1b8 = (float)FUN_180268ed0(&local_108);
        if (((((uint)local_1b8 & 0xff000000) != 0) && (param_1 != pcVar11)) && (*param_1 != '\0')) {
          local_1b0 = &local_108;
          local_108 = *(float *)(lVar4 + 0x60);
          fStack_104 = *(float *)(lVar4 + 100);
          fStack_100 = *(float *)(lVar4 + 0x68);
          fStack_fc = *(float *)(lVar4 + 0x6c);
          local_190 = 0;
          local_198 = local_198 & 0xffffffff00000000;
          local_1a8 = param_1;
          local_1a0 = pcVar11;
          FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x18),lVar4,
                        *(undefined4 *)(*(longlong *)(lVar4 + 0x38) + 0x20),&local_130);
        }
      }
      return (ulonglong)local_178;
    }
  }
  return uVar8 & 0xffffffffffffff00;
}


