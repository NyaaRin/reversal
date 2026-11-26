// 0x1802bff90  FUN_1802bff90
// size=4347 thunk=false
// signature: undefined FUN_1802bff90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802bff90(float param_1,uint param_2,char *param_3)

{
  char *pcVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  char cVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  char cVar22;
  undefined4 uVar23;
  char *pcVar24;
  longlong lVar25;
  float *pfVar26;
  byte bVar27;
  float fVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_1d8 [32];
  float *local_1b8;
  char *local_1b0;
  char *local_1a8;
  char *local_1a0;
  undefined8 local_198;
  undefined4 local_188;
  char local_178;
  byte local_177;
  char local_176;
  uint local_174;
  float local_170;
  undefined1 local_16c;
  byte local_16b;
  undefined8 local_168;
  float local_160;
  uint local_15c;
  longlong local_158;
  float local_150;
  float local_14c;
  uint local_148;
  uint local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  char *local_128;
  char *local_120;
  float local_118;
  float fStack_114;
  char local_110;
  char local_10f [7];
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_170 = param_1;
  local_15c = param_2;
  local_158 = lVar25;
  local_128 = param_3;
  if (*(char *)(lVar25 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar25 + 0xec0);
  uVar20 = *(ulonglong *)(lVar4 + 0x1520);
  *(undefined1 *)(uVar20 + 0xce) = 1;
  lVar4 = *(longlong *)(lVar4 + 0x1520);
  if (*(char *)(lVar4 + 0xd1) != '\0') {
    return uVar20 & 0xffffffffffffff00;
  }
  local_168 = lVar4;
  if (*(char *)(lVar25 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar25 + 0xec0);
  local_138 = (float)(param_2 & 2);
  if ((local_138 == 0.0) && ((param_2 >> 10 & 1) == 0)) {
    bVar11 = false;
    fVar15 = *(float *)(lVar4 + 0x150);
    if (*(float *)(lVar5 + 0xcc8) <= *(float *)(lVar4 + 0x150)) {
      fVar15 = *(float *)(lVar5 + 0xcc8);
    }
  }
  else {
    bVar11 = true;
    fVar15 = *(float *)(lVar5 + 0xcc8);
  }
  fVar28 = *(float *)(lVar5 + 0xcc4);
  pcVar24 = local_128;
  if (local_128 != (char *)0xffffffffffffffff) {
    while (*pcVar24 != '\0') {
      pcVar1 = pcVar24 + 1;
      if (((*pcVar24 == '#') && (*pcVar1 == '#')) ||
         (pcVar24 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  local_160 = fVar28;
  local_120 = pcVar24;
  if (*(char *)(lVar25 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (local_128 == pcVar24) {
    fVar35 = 0.0;
    local_14c = *(float *)(*(longlong *)(lVar25 + 0xec0) + 0x1238);
  }
  else {
    local_188 = 0;
    local_198 = 0;
    local_1b0 = local_128;
    local_1b8 = (float *)CONCAT44(local_1b8._4_4_,DAT_180381384);
    local_1a8 = pcVar24;
    local_1a0 = pcVar24;
    FUN_18029e350(&local_150,*(undefined8 *)(*(longlong *)(lVar25 + 0xec0) + 0x1228),local_128,
                  DAT_180381308);
    fVar35 = (float)(int)(local_150 + DAT_180380ba8);
  }
  if (local_138 == 0.0) {
    fVar31 = fVar28 + fVar28;
  }
  else {
    fVar31 = fVar28 * DAT_180380e28;
  }
  fVar31 = *(float *)(lVar5 + 0x1238) + fVar31;
  if (bVar11) {
    fStack_114 = *(float *)(lVar5 + 0xcc8);
    if (*(float *)(lVar5 + 0xcc8) <= *(float *)(lVar4 + 0x150)) {
      fStack_114 = *(float *)(lVar4 + 0x150);
    }
  }
  else {
    fStack_114 = *(float *)(lVar4 + 0x150);
  }
  fVar34 = *(float *)(lVar5 + 0x1238) + fVar35 + fVar28 + fVar28;
  fVar33 = fVar15 + fVar15 + local_14c;
  if (((param_2 >> 0xe & 1) == 0) || (*(longlong *)(lVar5 + 0x2368) == 0)) {
    local_176 = '\0';
  }
  else {
    local_176 = '\x01';
  }
  if (((param_2 >> 0xf & 1) == 0) || (local_178 = '\x01', *(longlong *)(lVar5 + 0x2368) == 0)) {
    local_178 = '\0';
  }
  fVar36 = (fStack_114 - fVar15) + *(float *)(lVar4 + 0x11c);
  if (local_176 == '\0') {
    if ((param_2 >> 0xc & 1) == 0) {
      local_108 = *(float *)(lVar4 + 0x118);
    }
    else {
      local_108 = *(float *)(lVar4 + 0x248);
    }
    if ((param_2 >> 0xd & 1) == 0) {
      fVar37 = *(float *)(lVar4 + 0x250);
    }
    else {
      fVar37 = fVar34 + *(float *)(lVar4 + 0x118) + local_160;
    }
  }
  else {
    local_108 = *(float *)(lVar4 + 600);
    fVar37 = *(float *)(lVar4 + 0x260);
  }
  fVar38 = fVar36 + fVar33;
  if (local_138 != 0.0) {
    fVar32 = (float)(int)(*(float *)(lVar4 + 0x58) * DAT_180380ac0);
    local_108 = local_108 - fVar32;
    fVar37 = fVar37 + fVar32;
  }
  fVar32 = local_108;
  fStack_114 = *(float *)(lVar4 + 0x11c) + fStack_114;
  local_118 = fVar31 + *(float *)(lVar4 + 0x118);
  local_150 = fVar34;
  local_12c = local_14c;
  local_14c = fVar33;
  local_130 = fVar35;
  fStack_104 = fVar36;
  fStack_100 = fVar37;
  fStack_fc = fVar38;
  FUN_18027f400(&local_150,fVar15);
  lVar25 = local_158;
  fStack_f0 = fVar37;
  if ((param_2 & 0x7802) == 0) {
    if (fVar35 <= 0.0) {
      fStack_f0 = 0.0;
    }
    else {
      fStack_f0 = *(float *)(lVar5 + 0xcd4) + *(float *)(lVar5 + 0xcd4);
    }
    fStack_f0 = fVar34 + fVar32 + fStack_f0;
  }
  if ((*(byte *)(lVar5 + 0x1ec0) & 0x10) != 0) {
    param_1 = *(float *)(lVar5 + 0x1ef0);
  }
  uVar30 = 1;
  local_140 = param_1;
  local_f8 = fVar32;
  fStack_f4 = fVar36;
  fStack_ec = fVar38;
  if ((param_2 >> 8 & 1) == 0) {
    if (*(char *)(local_158 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar25 = *(longlong *)(lVar25 + 0xec0);
    lVar6 = *(longlong *)(lVar25 + 0x1520);
    piVar7 = *(int **)(lVar6 + 0x1c0);
    if ((*(byte *)(lVar25 + 0x1ec0) & 2) == 0) {
      uVar20 = (longlong)*piVar7;
      pfVar26 = *(float **)(piVar7 + 2);
      while (uVar21 = uVar20, uVar21 != 0) {
        uVar20 = uVar21 >> 1;
        if ((uint)pfVar26[uVar20 * 4] < (uint)param_1) {
          pfVar26 = pfVar26 + uVar20 * 4 + 4;
          uVar20 = uVar21 + (-1 - uVar20);
        }
      }
      if ((pfVar26 == *(float **)(piVar7 + 2) + (longlong)*piVar7 * 4) || (*pfVar26 != param_1)) {
        fVar15 = (float)((param_2 & 0x20) >> 5);
      }
      else {
        fVar15 = pfVar26[2];
      }
LAB_1802c04fe:
      local_174 = CONCAT31((int3)((uint)param_1 >> 8),fVar15 != 0.0);
      uVar20 = (ulonglong)local_174;
    }
    else {
      if ((*(byte *)(lVar25 + 0x1ee5) & 1) == 0) {
        uVar20 = (longlong)*piVar7;
        pfVar26 = *(float **)(piVar7 + 2);
        while (uVar21 = uVar20, uVar21 != 0) {
          uVar20 = uVar21 >> 1;
          if ((uint)pfVar26[uVar20 * 4] < (uint)param_1) {
            pfVar26 = pfVar26 + uVar20 * 4 + 4;
            uVar20 = uVar21 + (-1 - uVar20);
          }
        }
        if (((pfVar26 != *(float **)(piVar7 + 2) + (longlong)*piVar7 * 4) && (*pfVar26 == param_1))
           && (fVar15 = pfVar26[2], fVar15 != -NAN)) goto LAB_1802c04fe;
      }
      uVar20 = (ulonglong)*(byte *)(lVar25 + 0x1ee4);
      local_174 = (uint)*(byte *)(lVar25 + 0x1ee4);
      FUN_1802bfd50(local_140,uVar20);
    }
    if ((*(char *)(lVar25 + 0x2858) != '\0') && ((param_2 & 0x10) == 0)) {
      uVar20 = uVar20 & 0xff;
      if (*(int *)(lVar6 + 0x1a0) - *(int *)(lVar25 + 0x2894) < *(int *)(lVar25 + 0x2898)) {
        uVar20 = 1;
      }
      goto LAB_1802c0531;
    }
  }
  else {
    uVar20 = 1;
LAB_1802c0531:
    local_174 = (uint)uVar20;
  }
  if ((local_176 == '\0') && (local_178 == '\0')) {
    uVar21 = (ulonglong)(uint)local_170;
    cVar14 = FUN_18027f160(&local_f8,uVar21,0,0);
  }
  else {
    uVar18 = *(undefined4 *)(lVar4 + 0x268);
    uVar23 = *(undefined4 *)(lVar4 + 0x270);
    uVar21 = (ulonglong)(uint)local_170;
    *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(lVar4 + 600);
    *(undefined4 *)(lVar4 + 0x270) = *(undefined4 *)(lVar4 + 0x260);
    cVar14 = FUN_18027f160(&local_f8,uVar21,0,0);
    *(undefined4 *)(lVar4 + 0x268) = uVar18;
    *(undefined4 *)(lVar4 + 0x270) = uVar23;
  }
  uVar9 = CONCAT44(fStack_104,local_108);
  uVar10 = CONCAT44(fStack_fc,fStack_100);
  *(uint *)(lVar5 + 0x1f00) = *(uint *)(lVar5 + 0x1f00) | 2;
  uVar21 = uVar21 & 0xffffffffffffff00;
  local_150 = (float)uVar21;
  *(undefined8 *)(lVar5 + 0x1f24) = uVar9;
  *(undefined8 *)(lVar5 + 0x1f2c) = uVar10;
  if ((param_2 & 0x1c0000) == 0) {
    param_2 = param_2 | *(uint *)(lVar5 + 0xd48);
    local_15c = param_2;
  }
  if ((((param_2 & 0x180000) == 0) || (*(float *)(lVar4 + 0x274) <= fVar36)) ||
     (*(float *)(lVar5 + 0xd4c) <= 0.0)) {
    local_16b = 0;
  }
  else {
    local_16b = 1;
  }
  cVar22 = (char)(param_2 & 8);
  if ((param_2 & 8) == 0) {
    uVar21 = (ulonglong)local_16b;
    local_150 = (float)(uint)local_16b;
    if ((((param_2 >> 0x11 & 1) != 0) && (*(char *)(lVar5 + 0x206b) == cVar22)) &&
       ((*(uint *)(lVar5 + 0x2120) == (param_2 & 8) && (*(longlong *)(lVar5 + 0x2070) == lVar4)))) {
      if (*(char *)(local_158 + 0x10) == cVar22) {
        __dyn_tls_on_demand_init();
        uVar21 = (ulonglong)(uint)local_150;
      }
      lVar25 = *(longlong *)(local_158 + 0xec0);
      if ((*(char *)(lVar25 + 0x2111) != '\0') && (*(int *)(lVar25 + 0x2160) == 0)) {
        uVar21 = uVar21 & 0xff;
        if (*(int *)(lVar25 + 0x21d0) == 0) {
          uVar21 = 1;
        }
        local_150 = (float)uVar21;
      }
    }
  }
  if (cVar14 == '\0') {
    if (((param_2 >> 0x14 & 1) != 0) &&
       ((*(uint *)(lVar4 + 0x1a8) >> (*(int *)(lVar4 + 0x1a0) - 1U & 0x1f) & 1) != 0)) {
      fVar15 = *(float *)(*(longlong *)(lVar5 + 0x2050) + -8 +
                         (longlong)*(int *)(lVar5 + 0x2048) * 0x28);
      if (fVar15 <= *(float *)(lVar4 + 0x11c)) {
        fVar15 = *(float *)(lVar4 + 0x11c);
      }
      *(float *)(*(longlong *)(lVar5 + 0x2050) + -8 + (longlong)*(int *)(lVar5 + 0x2048) * 0x28) =
           fVar15;
      if (*(float *)(lVar4 + 0x274) <= fVar36) {
        *(uint *)(lVar4 + 0x1a8) =
             *(uint *)(lVar4 + 0x1a8) & ~(1 << ((char)*(undefined4 *)(lVar4 + 0x1a0) - 1U & 0x1f));
      }
    }
    if ((char)uVar20 != '\0') {
      if ((char)uVar21 != '\0') {
        FUN_1802bfdc0(param_2,local_118 - fVar31);
      }
      if ((param_2 & 8) == 0) {
        FUN_1802c15f0(local_170);
      }
    }
    return uVar20 & 0xff;
  }
  local_144 = param_2 & 0x100;
  if ((local_176 != '\0') || (local_178 != '\0')) {
    FUN_1802a5930();
    *(uint *)(lVar5 + 0x1f00) = *(uint *)(lVar5 + 0x1f00) | 0x200;
    uVar8 = *(undefined8 *)(lVar4 + 0x270);
    *(undefined8 *)(lVar5 + 0x1f34) = *(undefined8 *)(lVar4 + 0x268);
    *(undefined8 *)(lVar5 + 0x1f3c) = uVar8;
  }
  uVar19 = 0;
  if (((param_2 & 4) == 0) && ((*(uint *)(lVar5 + 0x1efc) & 0x4000) == 0)) {
    uVar29 = 0;
  }
  else {
    uVar29 = 0x1000;
    uVar19 = 0x1000;
  }
  if (local_144 == 0) {
    uVar19 = uVar29 | 0x200;
  }
  if ((*(float *)(lVar5 + 0x100) < (local_118 - fVar31) - *(float *)(lVar5 + 0xcec)) ||
     (fVar28 + fVar28 + *(float *)(lVar5 + 0x1238) + (local_118 - fVar31) +
      *(float *)(lVar5 + 0xcec) <= *(float *)(lVar5 + 0x100))) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  uVar29 = *(uint *)(lVar5 + 0x1efc) & 0x400000;
  if (uVar29 != 0) {
    local_15c = 0x80;
    if ((param_2 & 0xc0) == 0) {
      local_15c = 0xc0;
    }
    local_15c = param_2 | local_15c;
    param_2 = local_15c;
  }
  if (bVar11) {
    local_148 = uVar19 | 0x10;
  }
  else {
    local_148 = uVar19 | 0x20;
    if ((param_2 & 0x40) != 0) {
      local_148 = uVar19 | 0x120;
    }
  }
  if ((param_2 >> 0x1b & 1) != 0) {
    local_148 = local_148 | 0x40000;
  }
  bVar27 = (byte)param_2 & 1;
  local_177 = bVar27;
  if (uVar29 == 0) {
    if ((local_168 != *(longlong *)(lVar5 + 0x1528)) || (uVar19 = local_148, !bVar11)) {
      uVar19 = local_148 | 0x10000;
    }
  }
  else {
    FUN_1802c2df0(local_170,&local_177,&local_148);
    uVar19 = local_148;
    if (bVar11) {
      uVar19 = local_148 & 0xffffffdf | 0x10;
    }
  }
  local_1b8 = (float *)CONCAT44(local_1b8._4_4_,uVar19);
  cVar14 = FUN_1802ab600(&local_f8,local_170,&local_110,local_10f);
  bVar12 = false;
  lVar25 = local_168;
  if (local_144 == 0) {
    cVar22 = (char)local_174;
    if (cVar14 != '\0') {
      if (*(float *)(lVar5 + 9000) == local_170) {
        if (cVar22 == '\0') {
          bVar12 = true;
        }
        else {
          cVar14 = '\0';
        }
      }
      else {
        if (((local_15c & 0xc0) == 0) ||
           ((*(float *)(lVar5 + 0x2084) == local_170 && (uVar29 == 0)))) {
          bVar12 = true;
        }
        if ((char)local_15c < '\0') {
          if ((bVar11) && (*(char *)(lVar5 + 0x2069) == '\0')) {
            bVar13 = 1;
          }
          else {
            bVar13 = 0;
          }
          bVar12 = (bool)(bVar12 | bVar13);
        }
        if (((local_15c & 0x40) != 0) && (*(short *)(lVar5 + 0xb3a) == 2)) {
          bVar12 = true;
        }
      }
    }
    if (*(float *)(lVar5 + 0x206c) == local_170) {
      if ((*(int *)(lVar5 + 0x2120) == 0) && (cVar22 != '\0')) {
        bVar12 = true;
        FUN_180282d00(0);
        if (*(char *)(local_158 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        *(undefined2 *)(*(longlong *)(local_158 + 0xec0) + 0x2110) = 0;
        FUN_180283e10();
      }
      if (((*(float *)(lVar5 + 0x206c) != local_170) || (*(int *)(lVar5 + 0x2120) != 1)) ||
         (cVar22 != '\0')) goto LAB_1802c09d0;
      bVar12 = true;
      FUN_180282d00(0);
      if (*(char *)(local_158 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      *(undefined2 *)(*(longlong *)(local_158 + 0xec0) + 0x2110) = 0;
      FUN_180283e10();
    }
    else {
LAB_1802c09d0:
      lVar25 = local_168;
      if (!bVar12) goto LAB_1802c0a0a;
    }
    lVar25 = local_168;
    local_174 = CONCAT31(local_174._1_3_,cVar22 == '\0');
    FUN_180269340(*(undefined8 *)(local_168 + 0x1c0),local_140,cVar22 == '\0');
    *(uint *)(lVar5 + 0x1f00) = *(uint *)(lVar5 + 0x1f00) | 0x10;
  }
LAB_1802c0a0a:
  if (uVar29 != 0) {
    if ((cVar14 == '\0') || (bVar12)) {
      local_16c = 0;
      FUN_1802c2f30(local_170,&local_177,&local_16c);
      if (cVar14 == '\0') goto LAB_1802c0acd;
    }
    else {
      local_16c = 1;
      FUN_1802c2f30(local_170,&local_177,&local_16c);
    }
    lVar4 = local_158;
    uVar18 = *(undefined4 *)(lVar5 + 0x1eb4);
    iVar3 = *(int *)(lVar25 + 0x170);
    if (*(char *)(local_158 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar25 = *(longlong *)(lVar4 + 0xec0);
    *(float *)(lVar25 + 0x206c) = local_170;
    *(int *)(lVar25 + 0x207c) = iVar3;
    FUN_180279b90(uVar18);
    *(float *)(*(longlong *)(lVar25 + 0x2070) + 0x3f0 + (longlong)iVar3 * 4) = local_170;
    pfVar26 = (float *)(*(longlong *)(lVar25 + 0x2070) + 0x3f8 + (longlong)iVar3 * 0x10);
    *pfVar26 = local_f8;
    pfVar26[1] = fStack_f4;
    pfVar26[2] = fStack_f0;
    pfVar26[3] = fStack_ec;
    FUN_180282d00(0);
    FUN_180282d00(1);
  }
LAB_1802c0acd:
  if (local_177 != bVar27) {
    *(uint *)(lVar5 + 0x1f00) = *(uint *)(lVar5 + 0x1f00) | 8;
  }
  uVar18 = DAT_180380bb0;
  uVar16 = FUN_18026a6a0(0,DAT_180380bb0);
  fVar15 = local_138;
  uVar23 = 6;
  if (uVar29 == 0) {
    uVar23 = 2;
  }
  if (local_138 == 0.0) {
    if ((local_110 != '\0') || (lVar25 = local_158, local_177 != 0)) {
      if ((local_10f[0] == '\0') || (local_110 == '\0')) {
        cVar14 = (local_110 != '\0') + '\x19';
      }
      else {
        cVar14 = '\x1b';
      }
      uVar18 = FUN_18026a6a0(cVar14,uVar18);
      lVar25 = local_158;
      local_140 = fVar32;
      local_13c = fVar36;
      local_138 = fVar37;
      local_134 = fVar38;
      if (*(char *)(local_158 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      local_1b0 = (char *)((ulonglong)local_1b0 & 0xffffffff00000000);
      local_1b8 = (float *)((ulonglong)local_1b8 & 0xffffffff00000000);
      FUN_180295000(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar25 + 0xec0) + 0x1520) + 0x2c8),
                    &local_140,&local_138,uVar18);
    }
    FUN_18026c370(&local_108,local_170,uVar23);
    if ((local_176 != '\0') && (local_178 == '\0')) {
      FUN_1802a5a20();
    }
    uVar29 = local_15c;
    uVar19 = local_174;
    if ((local_15c >> 9 & 1) == 0) {
      if (local_144 == 0) {
        if ((char)local_174 != '\0') {
          uVar30 = ~(local_15c >> 0x1d) & 1 | 2;
        }
        local_1b8 = (float *)CONCAT44(local_1b8._4_4_,DAT_180380b10);
        FUN_18029f160(*(undefined8 *)(local_168 + 0x2c8),
                      CONCAT44(*(float *)(lVar5 + 0x1238) * DAT_180380a1c + fStack_114,
                               (local_118 - fVar31) + local_160),uVar16,uVar30);
      }
    }
    else {
      plVar2 = (longlong *)(local_168 + 0x2c8);
      fVar28 = *(float *)(*(longlong *)(*plVar2 + 0x38) + 0x20);
      local_168 = CONCAT44(*(float *)(lVar5 + 0x1238) * DAT_180380ac0 + fStack_114,
                           local_118 - fVar31 * DAT_180380ac0);
      if (DAT_18038102c <= fVar28) {
        uVar18 = 0;
        if (fVar28 < DAT_180381088) {
          uVar18 = 0xc;
        }
      }
      else {
        uVar18 = 8;
      }
      local_1b8 = (float *)CONCAT44(local_1b8._4_4_,uVar18);
      FUN_180295540(*plVar2,&local_168,fVar28 * DAT_180380a3c,uVar16);
      uVar19 = local_174;
    }
    fVar35 = local_160;
    fVar28 = local_170;
    if (*(char *)(lVar5 + 0x2858) != '\0') {
      if (*(char *)(lVar25 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar25 = *(longlong *)(lVar25 + 0xec0);
      *(undefined **)(lVar25 + 0x2880) = &DAT_18035efac;
      *(undefined8 *)(lVar25 + 0x2888) = 0;
      fVar35 = local_160;
      fVar28 = local_170;
    }
  }
  else {
    if ((local_10f[0] == '\0') || (local_110 == '\0')) {
      cVar14 = (local_110 != '\0') + '\x19';
    }
    else {
      cVar14 = '\x1b';
    }
    uVar17 = FUN_18026a6a0(cVar14,uVar18);
    local_1b8 = (float *)CONCAT44(local_1b8._4_4_,*(undefined4 *)(lVar5 + 0xccc));
    FUN_18026c020(uVar9,uVar10,uVar17,1);
    fVar28 = local_170;
    FUN_18026c370(&local_108,local_170,uVar23);
    if ((local_176 != '\0') && (local_178 == '\0')) {
      FUN_1802a5a20();
    }
    uVar29 = local_15c;
    fVar35 = local_160;
    uVar19 = local_174;
    if ((local_15c >> 9 & 1) == 0) {
      if (local_144 == 0) {
        if ((char)local_174 != '\0') {
          uVar30 = ~(local_15c >> 0x1d) & 1 | 2;
        }
        local_1b8 = (float *)CONCAT44(local_1b8._4_4_,uVar18);
        FUN_18029f160(*(undefined8 *)(local_168 + 0x2c8),
                      CONCAT44(fStack_114,(local_118 - fVar31) + local_160),uVar16,uVar30);
      }
      else {
        local_118 = local_118 - (fVar31 - local_160);
      }
    }
    else {
      plVar2 = (longlong *)(local_168 + 0x2c8);
      fVar35 = *(float *)(*(longlong *)(*plVar2 + 0x38) + 0x20);
      local_168 = CONCAT44(*(float *)(lVar5 + 0x1238) * DAT_180380ac0 + fStack_114,
                           local_118 - fVar31 * DAT_180380ae4);
      if (DAT_18038102c <= fVar35) {
        uVar18 = 0;
        if (fVar35 < DAT_180381088) {
          uVar18 = 0xc;
        }
      }
      else {
        uVar18 = 8;
      }
      local_1b8 = (float *)CONCAT44(local_1b8._4_4_,uVar18);
      FUN_180295540(*plVar2,&local_168,fVar35 * DAT_180380a3c,uVar16);
      fVar35 = local_160;
      uVar19 = local_174;
    }
    lVar25 = local_158;
    if ((uVar29 >> 0x1c & 1) != 0) {
      fStack_100 = fVar37 - (*(float *)(lVar5 + 0xcc4) + *(float *)(lVar5 + 0x1238));
    }
    if (*(char *)(lVar5 + 0x2858) != '\0') {
      if (*(char *)(local_158 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar25 = *(longlong *)(lVar25 + 0xec0);
      *(undefined **)(lVar25 + 0x2880) = &DAT_180380390;
      *(undefined **)(lVar25 + 0x2888) = &DAT_180380390;
    }
  }
  if (local_16b != 0) {
    local_168 = CONCAT44(*(float *)(lVar5 + 0x1238) * DAT_180380ac0 + fStack_114,
                         (local_118 - fVar31) + fVar35);
    FUN_1802c1090(&local_168);
  }
  if (fVar15 == 0.0) {
    FUN_18026b160(CONCAT44(fStack_114,local_118),local_128,local_120,0);
  }
  else {
    local_1b0 = (char *)&local_168;
    local_1a8 = (char *)0x0;
    local_1b8 = &local_130;
    local_168 = 0;
    FUN_18026ba40(&local_118,&fStack_100,local_128,local_120);
  }
  if (local_178 != '\0') {
    FUN_1802a5a20();
  }
  if ((char)uVar19 != '\0') {
    if (local_150._0_1_ != '\0') {
      FUN_1802bfdc0(uVar29,local_118 - fVar31);
    }
    if ((uVar29 & 8) == 0) {
      FUN_1802c15f0(fVar28);
    }
  }
  return (ulonglong)(uVar19 & 0xff);
}


