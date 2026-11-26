// 0x1801a0b60  FUN_1801a0b60
// size=2930 thunk=false
// signature: undefined FUN_1801a0b60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801a0b60(char *param_1,char *param_2)

{
  char *pcVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  float *pfVar11;
  float *pfVar12;
  char *pcVar13;
  byte bVar14;
  char *pcVar15;
  uint uVar16;
  undefined1 uVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
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
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar19 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar18 = *(longlong *)(lVar19 + 0xec0);
  uVar10 = *(ulonglong *)(lVar18 + 0x1520);
  *(undefined1 *)(uVar10 + 0xce) = 1;
  plVar3 = *(longlong **)(lVar18 + 0x1520);
  if (*(char *)((longlong)plVar3 + 0xd1) == '\0') {
    local_150 = 5.60519e-45;
    pfVar12 = &local_14c;
    local_14c = 0.0;
    if (-1 < (int)DAT_1803fb24c) {
      pfVar12 = &DAT_1803fb24c;
    }
    pfVar11 = &local_150;
    if ((int)DAT_1803fb24c < 5) {
      pfVar11 = pfVar12;
    }
    DAT_1803fb24c = *pfVar11;
    lVar18 = (longlong)(int)DAT_1803fb24c;
    if (*(char *)(lVar19 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_130 = *(longlong *)(lVar19 + 0xec0);
    uVar8 = FUN_180268980(param_1,0,
                          *(undefined4 *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));
    if (*(uint *)(*plVar3 + 0x1578) == uVar8) {
      FUN_1802899e0(uVar8,0xb,param_1);
    }
    pcVar13 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar13 != '\0') {
        pcVar15 = pcVar13 + 1;
        if (((*pcVar13 == '#') && (*pcVar15 == '#')) ||
           (pcVar13 = pcVar15, pcVar15 == (char *)0xffffffffffffffff)) break;
      }
    }
    if (*(char *)(lVar19 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pcVar15 = pcVar13;
    if (pcVar13 == (char *)0x0) {
      pcVar15 = (char *)0xffffffffffffffff;
    }
    pcVar1 = param_1;
    do {
      pcVar5 = pcVar1;
      if ((pcVar15 <= pcVar5) || (*pcVar5 == '\0')) break;
      pcVar1 = pcVar5 + 1;
    } while ((*pcVar5 != '#') || (*pcVar1 != '#'));
    local_14c = *(float *)(*(longlong *)(lVar19 + 0xec0) + 0x1238);
    if (param_1 == pcVar5) {
      fVar21 = 0.0;
      local_154 = local_14c;
    }
    else {
      local_188 = 0;
      local_198 = 0;
      local_1b8 = (float)DAT_180381384;
      local_1b0 = (float *)param_1;
      local_1a8 = pcVar5;
      local_1a0 = pcVar5;
      FUN_18029e350(&local_158,*(undefined8 *)(*(longlong *)(lVar19 + 0xec0) + 0x1228),local_14c,
                    DAT_180381308);
      local_14c = local_154;
      fVar21 = (float)(int)(local_158 + DAT_180380ba8);
    }
    local_150 = fVar21;
    local_14c = local_154;
    if (*(char *)(lVar19 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar22 = DAT_180380fe0;
    pfVar12 = &local_128;
    local_124 = 1.5;
    local_128 = 0.75;
    fVar23 = *(float *)(*(longlong *)(lVar19 + 0xec0) + 0xcc8);
    if (DAT_180380b20 <= DAT_1803da6a4) {
      pfVar12 = &DAT_1803da6a4;
    }
    pfVar11 = &local_124;
    if (DAT_1803da6a4 <= DAT_180380c50) {
      pfVar11 = pfVar12;
    }
    fVar20 = (fVar23 + fVar23 + *(float *)(*(longlong *)(lVar19 + 0xec0) + 0x1238)) * _DAT_180380af8
    ;
    fVar23 = *pfVar11 * DAT_180380fe0;
    if ((fVar23 <= fVar20) && (fVar23 = *pfVar11 * DAT_180381024, fVar20 <= fVar23)) {
      fVar23 = fVar20;
    }
    fVar20 = *(float *)(plVar3 + 0x23);
    fVar26 = fVar23 * _DAT_180380ce8;
    fVar25 = *(float *)((longlong)plVar3 + 0x11c);
    local_154 = *(float *)(local_130 + 0xcc8) + *(float *)(local_130 + 0xcc8) + local_154;
    fVar24 = fVar23;
    if (fVar23 <= local_154) {
      fVar24 = local_154;
    }
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    else {
      fVar21 = fVar21 + *(float *)(local_130 + 0xcdc);
    }
    local_e4 = fVar24 + fVar25;
    local_e8 = fVar26 + fVar21 + fVar20;
    local_154 = local_e4 - fVar25;
    local_158 = local_e8 - fVar20;
    local_f0 = fVar20;
    local_ec = fVar25;
    FUN_18027f400(&local_158,*(undefined4 *)(local_130 + 0xcc8));
    FUN_18019a7a0(param_1,&local_f0);
    uVar10 = FUN_18027f160(&local_f0,uVar8,0,0);
    if ((char)uVar10 != '\0') {
      local_1b8 = 0.0;
      lVar19 = lVar18 * 200;
      local_178 = FUN_1802ab600(&local_f0,uVar8,&local_f8,local_f7);
      if (local_178 != 0) {
        *param_2 = *param_2 == '\0';
        FUN_18026ed00(uVar8);
      }
      fVar21 = DAT_180380bb0;
      lVar4 = plVar3[0x59];
      pcVar15 = "mc_fill";
      uVar8 = ~uVar8;
      bVar14 = 0x6d;
      uVar16 = uVar8;
      do {
        pcVar15 = pcVar15 + 1;
        if (((bVar14 == 0x23) && (*pcVar15 == 0x23)) && (pcVar15[1] == 0x23)) {
          pcVar15 = pcVar15 + 2;
          uVar16 = uVar8;
        }
        else {
          uVar16 = uVar16 >> 8 ^
                   *(uint *)(&DAT_180331380 + ((ulonglong)(uVar16 & 0xff) ^ (ulonglong)bVar14) * 4);
        }
        bVar14 = *pcVar15;
      } while (bVar14 != 0);
      fVar22 = (float)FUN_1802d3320(~uVar16,*param_2,(ulonglong)(uint)DAT_180380bb0 << 0x20,fVar22);
      if ((local_f8 == '\0') && (local_f7[0] == '\0')) {
        uVar17 = 0;
      }
      else {
        uVar17 = 1;
      }
      pcVar15 = "mc_hover";
      bVar14 = 0x6d;
      uVar16 = uVar8;
      do {
        pcVar15 = pcVar15 + 1;
        if (((bVar14 == 0x23) && (*pcVar15 == 0x23)) && (pcVar15[1] == 0x23)) {
          pcVar15 = pcVar15 + 2;
          uVar16 = uVar8;
        }
        else {
          uVar16 = uVar16 >> 8 ^
                   *(uint *)(&DAT_180331380 + ((ulonglong)(uVar16 & 0xff) ^ (ulonglong)bVar14) * 4);
        }
        bVar14 = *pcVar15;
      } while (bVar14 != 0);
      local_158 = (float)FUN_1802d3320(~uVar16,uVar17,(ulonglong)(uint)fVar21 << 0x20,DAT_180381004)
      ;
      fVar6 = DAT_180380ac0;
      local_120[4] = 1.0;
      local_120[0] = 0.0;
      fVar23 = fVar23 * DAT_180380ac0;
      local_174 = 1.0;
      fVar25 = fVar24 * DAT_180380ac0 + fVar25;
      local_138[0] = fVar22;
      local_140[0] = 0.0;
      fVar26 = fVar20 + fVar26;
      local_170 = fVar20;
      local_148 = fVar26;
      local_144 = fVar23 + fVar25;
      local_160[0] = fVar25 - fVar23;
      fStack_16c = fVar25 - fVar23;
      local_120[2] = local_158 * DAT_180380a1c + DAT_180380ad4;
      pfVar12 = local_120;
      if (0.0 <= local_120[2]) {
        pfVar12 = local_120 + 2;
      }
      pfVar11 = local_120 + 4;
      if (local_120[2] <= fVar21) {
        pfVar11 = pfVar12;
      }
      fVar24 = *pfVar11;
      pfVar12 = local_140;
      if (0.0 <= fVar22) {
        pfVar12 = local_138;
      }
      local_108 = fVar24 * (*(float *)(&DAT_1803dc998 + lVar19) -
                           *(float *)(&DAT_1803dc978 + lVar19)) +
                  *(float *)(&DAT_1803dc978 + lVar19);
      fStack_104 = fVar24 * (*(float *)(&DAT_1803dc99c + lVar19) -
                            *(float *)(&DAT_1803dc97c + lVar19)) +
                   *(float *)(&DAT_1803dc97c + lVar19);
      fStack_100 = fVar24 * (*(float *)(&DAT_1803dc9a0 + lVar19) -
                            *(float *)(&DAT_1803dc980 + lVar19)) +
                   *(float *)(&DAT_1803dc980 + lVar19);
      fStack_fc = fVar24 * (*(float *)(&DAT_1803dc9a4 + lVar19) -
                           *(float *)(&DAT_1803dc984 + lVar19)) +
                  *(float *)(&DAT_1803dc984 + lVar19);
      pfVar11 = &local_174;
      if (fVar22 <= fVar21) {
        pfVar11 = pfVar12;
      }
      fVar24 = *pfVar11;
      local_108 = fVar24 * (*(float *)(&DAT_1803dc9c8 + lVar19) - local_108) + local_108;
      fStack_104 = fVar24 * (*(float *)(&DAT_1803dc9cc + lVar19) - fStack_104) + fStack_104;
      fStack_100 = fVar24 * (*(float *)(&DAT_1803dc9d0 + lVar19) - fStack_100) + fStack_100;
      fStack_fc = fVar24 * (*(float *)(&DAT_1803dc9d4 + lVar19) - fStack_fc) + fStack_fc;
      uVar9 = FUN_180268ed0(&local_108);
      local_1b0 = (float *)((ulonglong)local_1b0 & 0xffffffff00000000);
      local_1b8 = fVar23;
      FUN_180295000(lVar4,&local_170,&local_148,uVar9);
      local_138[0] = fVar22 * DAT_180380ae4;
      local_140[0] = 1.0;
      local_174 = 0.0;
      pfVar12 = &local_174;
      if (0.0 <= local_138[0]) {
        pfVar12 = local_138;
      }
      pfVar11 = local_140;
      if (local_138[0] <= fVar21) {
        pfVar11 = pfVar12;
      }
      fVar24 = *pfVar11;
      local_170 = (*(float *)(&DAT_1803dc9c8 + lVar19) - *(float *)(&DAT_1803dc9b8 + lVar19)) *
                  fVar24 + *(float *)(&DAT_1803dc9b8 + lVar19);
      fStack_16c = (*(float *)(&DAT_1803dc9cc + lVar19) - *(float *)(&DAT_1803dc9bc + lVar19)) *
                   fVar24 + *(float *)(&DAT_1803dc9bc + lVar19);
      fStack_168 = (*(float *)(&DAT_1803dc9d0 + lVar19) - *(float *)(&DAT_1803dc9c0 + lVar19)) *
                   fVar24 + *(float *)(&DAT_1803dc9c0 + lVar19);
      fStack_164 = ((*(float *)(&DAT_1803dc9d4 + lVar19) - *(float *)(&DAT_1803dc9c4 + lVar19)) *
                    fVar24 + *(float *)(&DAT_1803dc9c4 + lVar19)) * DAT_180380ad4;
      uVar8 = FUN_180268ed0(&local_170);
      if ((uVar8 & 0xff000000) != 0) {
        local_144 = local_160[0] + fVar6;
        local_1b8 = 0.0;
        local_170 = _DAT_180380abc;
        if ((*(byte *)(lVar4 + 0x30) & 1) != 0) {
          local_170 = fVar6;
        }
        fStack_16c = (fVar23 + fVar25) - local_170;
        local_170 = fVar26 - local_170;
        local_148 = fVar20 + fVar6;
        FUN_180294990(lVar4,&local_148,&local_170,fVar23);
        local_1b0 = (float *)CONCAT44(local_1b0._4_4_,0x200);
        local_1b8 = fVar21;
        FUN_1802929d0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar8);
        *(undefined4 *)(lVar4 + 0x50) = 0;
      }
      fVar7 = local_158;
      fVar24 = DAT_180380f3c;
      fVar23 = fVar23 - DAT_180380db8;
      fVar20 = fVar23 + fVar20 + DAT_180380d30;
      fVar20 = (((fVar26 - fVar23) - DAT_180380d30) - fVar20) * fVar22 + fVar20;
      if (DAT_180380980 < local_158) {
        local_170 = *(float *)(&DAT_1803dc9c8 + lVar19);
        fStack_16c = *(float *)(&DAT_1803dc9cc + lVar19);
        fStack_168 = *(float *)(&DAT_1803dc9d0 + lVar19);
        fStack_164 = *(float *)(&DAT_1803dc9d4 + lVar19) * local_158 * DAT_180380a3c;
        uVar8 = FUN_180268ed0(&local_170);
        local_170 = fVar20;
        fStack_16c = fVar25;
        if (((uVar8 & 0xff000000) != 0) && (fVar6 <= fVar23 + DAT_180380e28)) {
          local_1b0 = (float *)CONCAT44(local_1b0._4_4_,0x13);
          local_1b8 = fVar24;
          FUN_1802941e0(lVar4,&local_170,fVar23 + DAT_180380e28,0);
          FUN_1802938c0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar8);
          *(undefined4 *)(lVar4 + 0x50) = 0;
        }
      }
      local_174 = 1.0;
      local_158 = 0.0;
      local_160[0] = fVar22;
      pfVar12 = &local_158;
      if (0.0 <= fVar22) {
        pfVar12 = local_160;
      }
      pfVar11 = &local_174;
      if (fVar22 <= fVar21) {
        pfVar11 = pfVar12;
      }
      fVar2 = *pfVar11;
      local_170 = fVar2 * DAT_180380a2c + _DAT_180380b48;
      fStack_16c = fVar2 * _DAT_180380a18 + DAT_180380b4c;
      fStack_168 = fVar2 * _DAT_1803809f0 + DAT_180380b68;
      fStack_164 = fVar2 * 0.0 + fVar21;
      uVar8 = FUN_180268ed0(&local_170);
      local_170 = fVar20;
      fStack_16c = fVar25;
      if (((uVar8 & 0xff000000) != 0) && (fVar6 <= fVar23)) {
        local_1b0 = (float *)CONCAT44(local_1b0._4_4_,0x13);
        local_1b8 = fVar24;
        FUN_1802941e0(lVar4,&local_170,fVar23,0);
        FUN_1802938c0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar8);
        *(undefined4 *)(lVar4 + 0x50) = 0;
      }
      if (0.0 < local_150) {
        if (fVar22 <= fVar7) {
          fVar22 = fVar7;
        }
        fStack_fc = *(float *)((longlong)&DAT_1803dca30 + lVar19 + 4);
        local_174 = 1.0;
        local_158 = 0.0;
        local_160[0] = fVar22;
        pfVar12 = &local_158;
        if (0.0 <= fVar22) {
          pfVar12 = local_160;
        }
        local_130 = CONCAT44(fVar25 - local_14c * fVar6,fVar26 + *(float *)(local_130 + 0xcdc));
        pfVar11 = &local_174;
        if (fVar22 <= fVar21) {
          pfVar11 = pfVar12;
        }
        fVar21 = *pfVar11;
        local_108 = fVar21 * (*(float *)(&DAT_1803dca18 + lVar19) -
                             *(float *)(&DAT_1803dca28 + lVar19)) +
                    *(float *)(&DAT_1803dca28 + lVar19);
        fStack_104 = fVar21 * (*(float *)(&DAT_1803dca1c + lVar19) -
                              *(float *)(&DAT_1803dca2c + lVar19)) +
                     *(float *)(&DAT_1803dca2c + lVar19);
        fStack_100 = fVar21 * (*(float *)(&DAT_1803dca20 + lVar19) -
                              *(float *)(&DAT_1803dca30 + lVar18 * 0x19)) +
                     *(float *)(&DAT_1803dca30 + lVar18 * 0x19);
        fStack_fc = fVar21 * (*(float *)(&DAT_1803dca24 + lVar19) - fStack_fc) + fStack_fc;
        local_1b8 = (float)FUN_180268ed0(&local_108);
        if (((((uint)local_1b8 & 0xff000000) != 0) && (param_1 != pcVar13)) && (*param_1 != '\0')) {
          local_1b0 = &local_108;
          local_108 = *(float *)(lVar4 + 0x60);
          fStack_104 = *(float *)(lVar4 + 100);
          fStack_100 = *(float *)(lVar4 + 0x68);
          fStack_fc = *(float *)(lVar4 + 0x6c);
          local_190 = 0;
          local_198 = local_198 & 0xffffffff00000000;
          local_1a8 = param_1;
          local_1a0 = pcVar13;
          FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x18),lVar4,
                        *(undefined4 *)(*(longlong *)(lVar4 + 0x38) + 0x20),&local_130);
        }
      }
      return (ulonglong)local_178;
    }
  }
  return uVar10 & 0xffffffffffffff00;
}


