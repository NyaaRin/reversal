// 0x1802c6840  FUN_1802c6840
// size=2932 thunk=false
// signature: undefined FUN_1802c6840()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802c6840(longlong param_1,char *param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  short sVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char *pcVar18;
  float fVar19;
  char *pcVar20;
  char cVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  float fVar25;
  void *_Dst;
  size_t sVar26;
  uint uVar27;
  longlong lVar28;
  undefined8 uVar29;
  uint uVar30;
  int iVar32;
  ulonglong uVar33;
  int *piVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_1b8 [32];
  char *local_198;
  int local_190;
  undefined4 local_188;
  undefined1 local_180;
  undefined1 *local_178;
  char *local_170;
  char local_168;
  char local_167;
  byte local_166;
  uint local_164;
  float local_160;
  float local_15c;
  uint local_158;
  uint local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  undefined1 local_138 [8];
  char *local_130;
  ulonglong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  longlong local_f0 [2];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  char local_d0;
  char local_cf [7];
  ulonglong local_c8;
  ulonglong uVar31;
  
  local_c8 = DAT_1803da4c0 ^ (ulonglong)auStack_1b8;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_158 = param_4;
  local_130 = param_2;
  local_f0[0] = lVar10;
  if (*(char *)(lVar10 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar10 = *(longlong *)(lVar10 + 0xec0);
  if (*(char *)(param_1 + 0x83) != '\0') {
    uVar12 = *(undefined8 *)(lVar10 + 0x1ec0);
    uVar13 = *(undefined8 *)(lVar10 + 0x1ec8);
    uVar14 = *(undefined8 *)(lVar10 + 0x1ed0);
    uVar15 = *(undefined8 *)(lVar10 + 0x1ed8);
    uVar16 = *(undefined8 *)(lVar10 + 0x1ee0);
    uVar17 = *(undefined8 *)(lVar10 + 0x1ee8);
    uVar29 = *(undefined8 *)(lVar10 + 0x1ef0);
    FUN_1802c4ee0(param_1);
    *(undefined8 *)(lVar10 + 0x1ec0) = uVar12;
    *(undefined8 *)(lVar10 + 0x1ec8) = uVar13;
    *(undefined8 *)(lVar10 + 0x1ed0) = uVar14;
    *(undefined8 *)(lVar10 + 0x1ed8) = uVar15;
    *(undefined8 *)(lVar10 + 0x1ee0) = uVar16;
    *(undefined8 *)(lVar10 + 0x1ee8) = uVar17;
    *(undefined8 *)(lVar10 + 0x1ef0) = uVar29;
  }
  local_128 = *(ulonglong *)(lVar10 + 0x1520);
  if (*(char *)(local_128 + 0xd1) != '\0') {
LAB_1802c73ad:
    return local_128 & 0xffffffffffffff00;
  }
  iVar22 = FUN_1802c5f50(param_1,param_2);
  uVar24 = DAT_180381384;
  if ((param_4 >> 0x14 & 1) == 0) {
    param_4 = param_4 | 0x100000;
    local_158 = param_4;
  }
  uVar31 = 0;
  if ((iVar22 != 0) && (0 < *(int *)(param_1 + 8))) {
    do {
      piVar34 = (int *)(uVar31 * 0x2c + *(longlong *)(param_1 + 0x10));
      if (*piVar34 == iVar22) {
        cVar21 = '\0';
        goto LAB_1802c6a92;
      }
      uVar30 = (int)uVar31 + 1;
      uVar31 = (ulonglong)uVar30;
    } while ((int)uVar30 < *(int *)(param_1 + 8));
  }
  iVar9 = *(int *)(param_1 + 0xc);
  local_120 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_f8 = 0;
  uStack_118 = 0xffffffffffffffff;
  uStack_104 = 0xbf800000;
  uStack_100 = 0xffffffff;
  uStack_fc = 0xffffffff;
  if (*(int *)(param_1 + 8) == iVar9) {
    iVar32 = *(int *)(param_1 + 8) + 1;
    if (iVar9 == 0) {
      iVar23 = 8;
    }
    else {
      iVar23 = iVar9 / 2 + iVar9;
    }
    if (iVar32 < iVar23) {
      iVar32 = iVar23;
    }
    if (iVar9 < iVar32) {
      _Dst = (void *)FUN_18026f580((longlong)iVar32 * 0x2c);
      if (*(void **)(param_1 + 0x10) != (void *)0x0) {
        memcpy(_Dst,*(void **)(param_1 + 0x10),(longlong)*(int *)(param_1 + 8) * 0x2c);
        FUN_18026f680(*(undefined8 *)(param_1 + 0x10));
      }
      *(void **)(param_1 + 0x10) = _Dst;
      *(int *)(param_1 + 0xc) = iVar32;
    }
  }
  cVar21 = '\x01';
  lVar28 = (longlong)*(int *)(param_1 + 8) * 0x2c;
  lVar11 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(lVar28 + lVar11) = local_120;
  ((undefined8 *)(lVar28 + lVar11))[1] = uStack_118;
  puVar2 = (undefined8 *)(lVar28 + 0x10 + lVar11);
  *puVar2 = local_110;
  puVar2[1] = CONCAT44(uStack_104,uStack_108);
  puVar2 = (undefined8 *)(lVar28 + 0x1c + lVar11);
  *puVar2 = CONCAT44(uStack_100,uStack_104);
  puVar2[1] = CONCAT44(uStack_f8,uStack_fc);
  iVar9 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar9 + 1;
  piVar34 = (int *)((longlong)iVar9 * 0x2c + *(longlong *)(param_1 + 0x10));
  *piVar34 = iVar22;
  *(undefined1 *)(param_1 + 0x85) = 1;
  param_4 = local_158;
LAB_1802c6a92:
  *(short *)(param_1 + 0x8a) = (short)(((longlong)piVar34 - *(longlong *)(param_1 + 0x10)) / 0x2c);
  local_168 = cVar21;
  FUN_1802c73c0(&local_160,local_130,param_4 & 1);
  piVar34[7] = -0x40800000;
  fVar36 = local_160;
  if ((*(byte *)(lVar10 + 0x1ec0) & 1) != 0) {
    fVar36 = *(float *)(lVar10 + 0x1ed8);
    piVar34[7] = (int)fVar36;
  }
  fVar7 = DAT_180380bb0;
  if (cVar21 != '\0') {
    fVar37 = DAT_180380bb0;
    if (DAT_180380bb0 <= fVar36) {
      fVar37 = fVar36;
    }
    piVar34[5] = (int)fVar37;
  }
  piVar34[6] = (int)fVar36;
  sVar8 = *(short *)(param_1 + 0x88);
  *(short *)(param_1 + 0x88) = sVar8 + 1;
  *(short *)(piVar34 + 9) = sVar8;
  iVar9 = *(int *)(lVar10 + 4);
  iVar32 = *(int *)(param_1 + 0x34) + 1;
  local_148 = (float)(CONCAT31(local_148._1_3_,(char)(*(uint *)(param_1 + 0x18) >> 0x15)) &
                     0xffffff01);
  local_150 = (float)(piVar34[2] + 1);
  if (((param_4 & 1) == 0) || (local_167 = '\x01', (*(byte *)(piVar34 + 1) & 1) != 0)) {
    local_167 = '\0';
  }
  piVar1 = (int *)(param_1 + 0xa0);
  piVar34[1] = local_158;
  local_154 = local_158 & 0x200000;
  piVar34[2] = iVar9;
  iVar23 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar23 = 0;
  }
  piVar34[8] = iVar23;
  sVar26 = strlen(local_130);
  FUN_1802694a0(piVar1,local_130,local_130 + sVar26 + 1);
  uVar31 = local_128;
  if (local_154 == 0) {
    if (((((int)local_150 < iVar9) && ((*(byte *)(param_1 + 0x18) & 2) != 0)) &&
        (*(int *)(param_1 + 0x24) == 0)) && ((iVar9 <= iVar32 || (*(int *)(param_1 + 0x20) == 0))))
    {
      *(int *)(param_1 + 0x24) = *piVar34;
    }
    if (((local_158 & 2) != 0) && (*(int *)(param_1 + 0x20) != iVar22)) {
      *(int *)(param_1 + 0x24) = *piVar34;
    }
  }
  bVar35 = *(int *)(param_1 + 0x2c) == iVar22;
  uVar33 = CONCAT71((int7)((ulonglong)piVar1 >> 8),bVar35);
  local_164 = (uint)uVar33;
  if (bVar35) {
    *(undefined1 *)(param_1 + 0x84) = 1;
  }
  else if (((*(int *)(param_1 + 0x20) == 0) && (iVar32 < iVar9)) && (*(int *)(param_1 + 8) == 1)) {
    uVar33 = (ulonglong)bVar35;
    if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
      uVar33 = 1;
    }
    local_164 = (uint)uVar33;
  }
  if (((int)local_150 < iVar9) && ((iVar9 <= iVar32 || (local_168 != '\0')))) {
    local_f0[0] = 0;
    local_f0[1] = 0;
    local_128 = FUN_18027f160(local_f0,iVar22,0,2);
    if (local_154 == 0) {
      return uVar33 & 0xff;
    }
    goto LAB_1802c73ad;
  }
  if (*(int *)(param_1 + 0x20) == iVar22) {
    piVar34[3] = *(int *)(lVar10 + 4);
  }
  local_d8 = (float)piVar34[5];
  uVar3 = *(undefined4 *)(local_128 + 0x118);
  uVar4 = *(undefined4 *)(local_128 + 0x11c);
  local_dc = *(float *)(param_1 + 0x3c) + 0.0;
  if ((*(byte *)(piVar34 + 1) & 0xc0) == 0) {
    local_e0 = (float)(int)((float)piVar34[4] - *(float *)(param_1 + 0x5c)) +
               *(float *)(param_1 + 0x38);
    *(float *)(local_128 + 0x118) = local_e0;
    *(float *)(local_128 + 0x11c) = local_dc;
    local_d8 = local_e0 + local_d8;
    local_140 = *(float *)(param_1 + 0x6c);
    local_d4 = local_dc + local_15c;
    fVar36 = *(float *)(param_1 + 0x70);
    if ((local_140 <= local_e0) && (local_d8 <= fVar36)) goto LAB_1802c6dbe;
    local_168 = '\x01';
    if ((local_140 <= local_e0) && (local_140 = fVar36, local_e0 <= fVar36)) {
      local_140 = local_e0;
    }
    local_13c = local_dc - fVar7;
    local_160 = fVar36;
    local_15c = local_d4;
    FUN_180271790(&local_140,&local_160,1);
  }
  else {
    local_e0 = (float)piVar34[4] + *(float *)(param_1 + 0x38);
    *(float *)(local_128 + 0x118) = local_e0;
    *(float *)(local_128 + 0x11c) = local_dc;
    local_d8 = local_e0 + local_d8;
LAB_1802c6dbe:
    local_d4 = local_dc + local_15c;
    local_168 = '\0';
  }
  uVar5 = *(undefined4 *)(uVar31 + 0x130);
  local_13c = local_d4 - local_dc;
  local_140 = local_d8 - local_e0;
  uVar6 = *(undefined4 *)(uVar31 + 0x134);
  FUN_18027f400(&local_140,*(undefined4 *)(lVar10 + 0xcc8));
  *(undefined4 *)(uVar31 + 0x130) = uVar5;
  *(undefined4 *)(uVar31 + 0x134) = uVar6;
  cVar21 = FUN_18027f160(&local_e0,iVar22,0,0);
  uVar30 = local_158;
  if (cVar21 == '\0') {
    if (local_168 != '\0') {
      FUN_180271860();
    }
    *(undefined4 *)(uVar31 + 0x118) = uVar3;
    *(undefined4 *)(uVar31 + 0x11c) = uVar4;
    return uVar33 & 0xff;
  }
  uVar27 = 0x1010;
  if (local_154 != 0) {
    uVar27 = 0x1020;
  }
  if (*(char *)(lVar10 + 0x2298) != '\0') {
    uVar27 = uVar27 | 0x200;
  }
  local_160 = (float)(local_158 & 0x400000);
  if (local_160 == 0.0) {
    local_198 = (char *)CONCAT44(local_198._4_4_,uVar27);
    local_166 = FUN_1802ab600(&local_e0,iVar22,local_cf,&local_d0);
    if ((local_166 != 0) && (local_154 == 0)) {
      *(int *)(param_1 + 0x24) = *piVar34;
    }
    if (((((local_d0 != '\0') && (iVar9 <= (int)local_150)) &&
         (cVar21 = FUN_18027bec0(0,uVar24), cVar21 != '\0')) &&
        ((*(char *)(lVar10 + 0x2298) == '\0' && ((*(byte *)(param_1 + 0x18) & 1) != 0)))) &&
       (((*(float *)(lVar10 + 0xec) < 0.0 &&
         (*(float *)(lVar10 + 0x100) <= local_e0 && local_e0 != *(float *)(lVar10 + 0x100))) ||
        ((0.0 < *(float *)(lVar10 + 0xec) && (local_d8 < *(float *)(lVar10 + 0x100))))))) {
      FUN_1802c6060(param_1,piVar34,*(undefined8 *)(lVar10 + 0x100));
    }
  }
  else {
    local_166 = 0;
    local_d0 = '\0';
    local_cf[0] = '\0';
  }
  if (((*(uint *)(lVar10 + 0x1f00) & 0x100) == 0) || (local_160 != 0.0)) goto LAB_1802c7376;
  lVar11 = *(longlong *)(local_128 + 0x2c8);
  if ((local_d0 == '\0') && (local_cf[0] == '\0')) {
    cVar21 = local_148._0_1_;
    if ((char)local_164 == '\0') {
      uVar29 = 0x27;
      if (local_148._0_1_ != '\0') {
        uVar29 = 0x24;
      }
      uVar24 = FUN_18026a6a0(uVar29,fVar7);
      uVar30 = local_158;
      FUN_1802c7500(lVar11,&local_e0,local_158,uVar24);
    }
    else {
      uVar29 = 0x28;
      if (local_148._0_1_ != '\0') {
        uVar29 = 0x25;
      }
      uVar24 = FUN_18026a6a0(uVar29,fVar7);
      FUN_1802c7500(lVar11,&local_e0,uVar30,uVar24);
LAB_1802c7074:
      if (((*(byte *)(param_1 + 0x18) & 0x40) != 0) && (0.0 < *(float *)(lVar10 + 0xd38))) {
        fVar38 = local_e0 + 0.0;
        fVar37 = local_dc + *(float *)(lVar10 + 0x1248);
        fVar36 = local_d8 + 0.0;
        uVar29 = 0x29;
        if (cVar21 != '\0') {
          uVar29 = 0x26;
        }
        fVar25 = (float)FUN_18026a6a0(uVar29,fVar7);
        fVar19 = DAT_180380ac0;
        fVar7 = *(float *)(lVar10 + 0xd1c);
        if (fVar7 <= 0.0) {
          local_144 = fVar37 - DAT_180380ac0;
          local_140 = fVar36 - DAT_180380ac0;
          local_148 = fVar38 - DAT_180380ac0;
          local_198 = (char *)CONCAT44(local_198._4_4_,*(undefined4 *)(lVar10 + 0xd38));
          local_13c = local_144;
          FUN_180294c90(lVar11,&local_148,&local_140,fVar25);
        }
        else {
          local_150 = fVar7 + fVar38;
          fVar37 = fVar7 + fVar37;
          local_14c = fVar37;
          local_148 = fVar25;
          if (DAT_180380ac0 <= fVar7) {
            local_198 = (char *)CONCAT44(local_198._4_4_,0x24);
            FUN_180293e00(lVar11,&local_150,fVar7,0x1c);
          }
          else {
            FUN_18020dc30(lVar11 + 0x50);
          }
          local_150 = fVar36 - fVar7;
          if (fVar19 <= fVar7) {
            local_198 = (char *)CONCAT44(local_198._4_4_,0x2c);
            local_14c = fVar37;
            FUN_180293e00(lVar11,&local_150,fVar7,0x24);
          }
          else {
            local_14c = fVar37;
            FUN_18020dc30(lVar11 + 0x50);
          }
          local_190 = 0;
          local_198 = (char *)CONCAT44(local_198._4_4_,*(undefined4 *)(lVar10 + 0xd38));
          FUN_1802929d0(lVar11,*(undefined8 *)(lVar11 + 0x58),*(undefined4 *)(lVar11 + 0x50),
                        local_148);
          *(undefined4 *)(lVar11 + 0x50) = 0;
          uVar30 = local_158;
        }
      }
    }
  }
  else {
    uVar24 = FUN_18026a6a0(0x23,fVar7);
    FUN_1802c7500(lVar11,&local_e0,uVar30,uVar24);
    if ((char)local_164 != '\0') {
      cVar21 = SUB41(local_148,0);
      goto LAB_1802c7074;
    }
  }
  FUN_18026c370(&local_e0,iVar22,0);
  cVar21 = FUN_18026ee60(0x20);
  if ((*(int *)(param_1 + 0x20) != *piVar34) && (cVar21 != '\0')) {
    cVar21 = FUN_18027bce0(1,0,0);
    if (cVar21 == '\0') {
      if (*(char *)(local_f0[0] + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xec0) + 0xb4f) != '\0') {
        lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar28 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        if (*(char *)(*(longlong *)(lVar28 + 0xec0) + 0x1ce0) == '\0') goto LAB_1802c72b2;
      }
    }
    else {
LAB_1802c72b2:
      if (local_154 == 0) {
        *(int *)(param_1 + 0x24) = *piVar34;
      }
    }
  }
  pcVar20 = local_130;
  if ((*(byte *)(param_1 + 0x18) & 8) != 0) {
    uVar30 = uVar30 | 4;
  }
  local_170 = &local_167;
  local_178 = local_138;
  uVar27 = uVar30 & 0xfffffffe;
  if (local_167 == '\0') {
    uVar27 = uVar30;
  }
  local_180 = (undefined1)local_164;
  local_188 = 0;
  local_198 = local_130;
  local_190 = iVar22;
  FUN_1802c7820(lVar11,&local_e0,uVar27,*(undefined8 *)(param_1 + 0x90));
  if ((((local_167 != '\0') && (*(int *)(lVar10 + 0x157c) == iVar22)) && (local_d0 == '\0')) &&
     (((*(byte *)(param_1 + 0x18) & 0x20) == 0 &&
      (pcVar18 = pcVar20, (*(byte *)(piVar34 + 1) & 0x10) == 0)))) {
    for (; ((pcVar18 != (char *)0xffffffffffffffff && (*pcVar18 != '\0')) &&
           ((*pcVar18 != '#' || (pcVar18[1] != '#')))); pcVar18 = pcVar18 + 1) {
    }
    FUN_180280d50(&DAT_18037f6fc,(int)pcVar18 - (int)pcVar20,pcVar20);
  }
  uVar33 = (ulonglong)local_164;
LAB_1802c7376:
  if (local_168 != '\0') {
    FUN_180271860();
  }
  *(undefined4 *)(local_128 + 0x118) = uVar3;
  *(undefined4 *)(local_128 + 0x11c) = uVar4;
  if (local_154 == 0) {
    return uVar33 & 0xff;
  }
  return (ulonglong)local_166;
}


