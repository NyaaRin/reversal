// 18019d4d0  FUN_18019d4d0
// signature: undefined FUN_18019d4d0()
// status: ok


undefined8 FUN_18019d4d0(undefined8 param_1,float param_2,undefined1 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  float fVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  byte *pbVar17;
  char *pcVar18;
  byte bVar19;
  longlong lVar20;
  undefined8 uVar21;
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
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150 [2];
  float local_148 [2];
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120 [8];
  float *local_100;
  float local_f8;
  float local_f4;
  uint local_f0;
  float local_ec;
  undefined1 local_e8 [16];
  
  pfVar16 = &local_158;
  local_138 = param_2;
  local_164 = 5.60519e-45;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar16 = &DAT_1803fb24c;
  }
  local_158 = 0.0;
  local_100 = param_4;
  pfVar15 = &local_164;
  if ((int)DAT_1803fb24c < 5) {
    pfVar15 = pfVar16;
  }
  DAT_1803fb24c = *pfVar15;
  lVar13 = (longlong)(int)DAT_1803fb24c;
  lVar20 = lVar13 * 200;
  FUN_1802ac3c0(param_1,&stack0x00000028);
  uVar8 = FUN_18026ee60(0);
  cVar9 = FUN_18027bce0(0,0,0);
  if (cVar9 != '\0') {
    cVar9 = FUN_18026ee60(0);
    if (cVar9 != '\0') {
      uVar21 = 1;
      goto LAB_18019d5c1;
    }
  }
  uVar21 = 0;
LAB_18019d5c1:
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar12 = *(uint *)(*(longlong *)(lVar6 + 0xec0) + 0x1f0c);
  fVar22 = *(float *)(*(longlong *)(lVar6 + 0xec0) + 0x1f10);
  local_e8 = ZEXT416(uVar12);
  local_15c = fVar22;
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_154 = *(float *)(*(longlong *)(lVar6 + 0xec0) + 0x1f04);
  local_164 = *(float *)(*(longlong *)(lVar6 + 0xec0) + 0x1f08);
  local_f8 = local_154;
  local_f4 = local_164;
  local_f0 = uVar12;
  local_ec = fVar22;
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar6 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar6 + 0x1520) + 0xce) = 1;
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x1520) + 0x2c8);
  uVar10 = FUN_18027b010(param_1);
  pbVar17 = &DAT_180363c19;
  uVar10 = ~uVar10;
  bVar19 = 0x73;
  uVar12 = uVar10;
  do {
    if (((bVar19 == 0x23) && (*pbVar17 == 0x23)) && (pbVar17[1] == 0x23)) {
      pbVar17 = pbVar17 + 2;
      uVar12 = uVar10;
    }
    else {
      uVar12 = uVar12 >> 8 ^
               *(uint *)(&DAT_180331380 + ((ulonglong)(uVar12 & 0xff) ^ (ulonglong)bVar19) * 4);
    }
    bVar19 = *pbVar17;
    pbVar17 = pbVar17 + 1;
  } while (bVar19 != 0);
  fVar22 = (float)FUN_1802d3320(~uVar12,uVar8,0x3f80000000000000,0x41900000);
  pcVar18 = "sib_act";
  bVar19 = 0x73;
  uVar12 = uVar10;
  do {
    pcVar18 = pcVar18 + 1;
    if (((bVar19 == 0x23) && (*pcVar18 == 0x23)) && (pcVar18[1] == 0x23)) {
      pcVar18 = pcVar18 + 2;
      uVar12 = uVar10;
    }
    else {
      uVar12 = uVar12 >> 8 ^
               *(uint *)(&DAT_180331380 + ((ulonglong)(uVar12 & 0xff) ^ (ulonglong)bVar19) * 4);
    }
    bVar19 = *pcVar18;
  } while (bVar19 != 0);
  local_158 = fVar22;
  fVar23 = (float)FUN_1802d3320(~uVar12,param_3,0x3f80000000000000,0x41600000);
  pfVar16 = local_100;
  local_160 = 1.0;
  fVar1 = local_100[1];
  fVar2 = *local_100;
  fVar3 = local_100[3];
  fVar4 = local_100[2];
  local_120[2] = local_158;
  fStack_124 = (fVar22 * 0.28 + 0.2) * *(float *)(&DAT_1803dc9b4 + lVar20);
  local_150[0] = 0.0;
  local_120[4] = 1.0;
  local_120[0] = 0.0;
  local_140 = 1.0;
  local_120[5] = 0.0;
  fVar22 = *(float *)(&DAT_1803dca18 + lVar20);
  fVar30 = *(float *)(&DAT_1803dca1c + lVar20);
  fVar31 = *(float *)(&DAT_1803dca20 + lVar20);
  fVar7 = *(float *)(&DAT_1803dca24 + lVar20);
  fVar28 = (float)local_e8._0_4_ - local_154;
  if (local_15c - local_164 <= (float)local_e8._0_4_ - local_154) {
    fVar28 = local_15c - local_164;
  }
  local_148[0] = fVar23;
  pfVar15 = local_150;
  if (0.0 <= fVar23) {
    pfVar15 = local_148;
  }
  local_120[6] = fVar23;
  fVar24 = *(float *)(&DAT_1803dca28 + lVar20);
  fVar25 = *(float *)(&DAT_1803dca2c + lVar20);
  fVar26 = *(float *)(&DAT_1803dca30 + lVar13 * 0x19);
  fVar27 = *(float *)((longlong)&DAT_1803dca30 + lVar20 + 4);
  pfVar14 = &local_160;
  if (fVar23 <= 1.0) {
    pfVar14 = pfVar15;
  }
  local_160 = 8.0;
  if (fVar28 * 0.3 <= 8.0) {
    local_160 = fVar28 * 0.3;
  }
  fVar5 = *pfVar14;
  fVar29 = 8.0;
  if (fVar28 * 0.36 <= 8.0) {
    fVar29 = fVar28 * 0.36;
  }
  local_100 = (float *)CONCAT44(local_100._4_4_,fVar29);
  fStack_12c = (fVar1 - *(float *)(&DAT_1803dc9ac + lVar20)) * fVar5 +
               *(float *)(&DAT_1803dc9ac + lVar20);
  local_130 = (fVar2 - *(float *)(&DAT_1803dc9a8 + lVar20)) * fVar5 +
              *(float *)(&DAT_1803dc9a8 + lVar20);
  fStack_128 = (fVar4 - *(float *)(&DAT_1803dc9b0 + lVar20)) * fVar5 +
               *(float *)(&DAT_1803dc9b0 + lVar20);
  fStack_124 = (fVar3 * 0.3 - fStack_124) * fVar5 + fStack_124;
  uVar11 = FUN_180268ed0(&local_130);
  fVar28 = local_160;
  FUN_180295000(lVar6,&local_f8,&local_f0,uVar11,local_160,0);
  local_150[0] = 1.0;
  local_160 = 0.0;
  local_148[0] = fVar23;
  pfVar15 = &local_160;
  if (0.0 <= fVar23) {
    pfVar15 = local_148;
  }
  pfVar14 = local_150;
  if (fVar23 <= 1.0) {
    pfVar14 = pfVar15;
  }
  fVar5 = *pfVar14;
  local_130 = (fVar2 - *(float *)(&DAT_1803dc9b8 + lVar20)) * fVar5 +
              *(float *)(&DAT_1803dc9b8 + lVar20);
  fStack_12c = (fVar1 - *(float *)(&DAT_1803dc9bc + lVar20)) * fVar5 +
               *(float *)(&DAT_1803dc9bc + lVar20);
  fStack_128 = (fVar4 - *(float *)(&DAT_1803dc9c0 + lVar20)) * fVar5 +
               *(float *)(&DAT_1803dc9c0 + lVar20);
  fStack_124 = (fVar3 * 0.62 - *(float *)(&DAT_1803dc9c4 + lVar20)) * fVar5 +
               *(float *)(&DAT_1803dc9c4 + lVar20);
  uVar12 = FUN_180268ed0(&local_130);
  fVar1 = local_138;
  pfVar15 = local_120;
  if (0.0 <= local_158) {
    pfVar15 = local_120 + 2;
  }
  fVar2 = *pfVar16;
  fVar3 = pfVar16[1];
  fVar4 = pfVar16[2];
  fVar5 = pfVar16[3];
  pfVar16 = local_120 + 4;
  if (local_158 <= 1.0) {
    pfVar16 = pfVar15;
  }
  fVar29 = *pfVar16;
  pfVar16 = local_120 + 5;
  if (0.0 <= fVar23) {
    pfVar16 = local_120 + 6;
  }
  pfVar15 = &local_140;
  if (fVar23 <= 1.0) {
    pfVar15 = pfVar16;
  }
  fVar24 = fVar29 * (fVar22 - fVar24) + fVar24;
  fVar25 = fVar29 * (fVar30 - fVar25) + fVar25;
  fVar26 = fVar29 * (fVar31 - fVar26) + fVar26;
  fVar27 = fVar29 * (fVar7 - fVar27) + fVar27;
  fVar22 = *pfVar15;
  if ((uVar12 & 0xff000000) != 0) {
    local_140 = local_154 + 0.5;
    local_13c = local_164 + 0.5;
    if ((*(byte *)(lVar6 + 0x30) & 1) == 0) {
      local_138 = (float)local_e8._0_4_ - 0.49;
      local_134 = local_15c - 0.49;
    }
    else {
      local_138 = (float)local_e8._0_4_ - 0.5;
      local_134 = local_15c - 0.5;
    }
    FUN_180294990(lVar6,&local_140,&local_138,fVar28,0);
    FUN_1802929d0(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),uVar12,
                  0x3f800000,0x200);
    *(undefined4 *)(lVar6 + 0x50) = 0;
  }
  fVar30 = (float)local_e8._0_4_ + local_154;
  fVar31 = local_15c + local_164;
  local_130 = fVar22 * (fVar2 - fVar24) + fVar24;
  fStack_12c = fVar22 * (fVar3 - fVar25) + fVar25;
  fStack_128 = fVar22 * (fVar4 - fVar26) + fVar26;
  fStack_124 = fVar22 * (fVar5 - fVar27) + fVar27;
  uVar11 = FUN_180268ed0(&local_130);
  FUN_18019ab20(lVar6,fVar1,CONCAT44(fVar31 * 0.5,fVar30 * 0.5),uVar11,local_100._0_4_);
  return uVar21;
}


