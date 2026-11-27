// 0x18019d4d0  FUN_18019d4d0
// size=1830 thunk=false
// signature: undefined FUN_18019d4d0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18019d4d0(undefined8 param_1,float param_2,undefined1 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  byte *pbVar19;
  char *pcVar20;
  byte bVar21;
  longlong lVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
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
  
  pfVar18 = &local_158;
  local_138 = param_2;
  local_164 = 5.60519e-45;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar18 = &DAT_1803fb24c;
  }
  local_158 = 0.0;
  local_100 = param_4;
  pfVar17 = &local_164;
  if ((int)DAT_1803fb24c < 5) {
    pfVar17 = pfVar18;
  }
  DAT_1803fb24c = *pfVar17;
  lVar15 = (longlong)(int)DAT_1803fb24c;
  lVar22 = lVar15 * 200;
  FUN_1802ac3c0(param_1,&stack0x00000028);
  uVar10 = FUN_18026ee60(0);
  cVar11 = FUN_18027bce0(0,0,0);
  if ((cVar11 == '\0') || (cVar11 = FUN_18026ee60(0), cVar11 == '\0')) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar14 = *(uint *)(*(longlong *)(lVar6 + 0xec0) + 0x1f0c);
  fVar32 = *(float *)(*(longlong *)(lVar6 + 0xec0) + 0x1f10);
  local_e8 = ZEXT416(uVar14);
  local_15c = fVar32;
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_154 = *(float *)(*(longlong *)(lVar6 + 0xec0) + 0x1f04);
  local_164 = *(float *)(*(longlong *)(lVar6 + 0xec0) + 0x1f08);
  local_f8 = local_154;
  local_f4 = local_164;
  local_f0 = uVar14;
  local_ec = fVar32;
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar6 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar6 + 0x1520) + 0xce) = 1;
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x1520) + 0x2c8);
  uVar12 = FUN_18027b010(param_1);
  fVar32 = DAT_180380bb0;
  pbVar19 = &DAT_180363c19;
  uVar12 = ~uVar12;
  bVar21 = 0x73;
  uVar14 = uVar12;
  do {
    if (((bVar21 == 0x23) && (*pbVar19 == 0x23)) && (pbVar19[1] == 0x23)) {
      pbVar19 = pbVar19 + 2;
      uVar14 = uVar12;
    }
    else {
      uVar14 = uVar14 >> 8 ^
               *(uint *)(&DAT_180331380 + ((ulonglong)(uVar14 & 0xff) ^ (ulonglong)bVar21) * 4);
    }
    bVar21 = *pbVar19;
    pbVar19 = pbVar19 + 1;
  } while (bVar21 != 0);
  fVar24 = (float)FUN_1802d3320(~uVar14,uVar10,(ulonglong)(uint)DAT_180380bb0 << 0x20,DAT_180381004)
  ;
  pcVar20 = "sib_act";
  bVar21 = 0x73;
  uVar14 = uVar12;
  do {
    pcVar20 = pcVar20 + 1;
    if (((bVar21 == 0x23) && (*pcVar20 == 0x23)) && (pcVar20[1] == 0x23)) {
      pcVar20 = pcVar20 + 2;
      uVar14 = uVar12;
    }
    else {
      uVar14 = uVar14 >> 8 ^
               *(uint *)(&DAT_180331380 + ((ulonglong)(uVar14 & 0xff) ^ (ulonglong)bVar21) * 4);
    }
    bVar21 = *pcVar20;
  } while (bVar21 != 0);
  local_158 = fVar24;
  fVar25 = (float)FUN_1802d3320(~uVar14,param_3,(ulonglong)(uint)fVar32 << 0x20,DAT_180380fe0);
  pfVar18 = local_100;
  local_160 = 1.0;
  fVar1 = local_100[1];
  fVar2 = *local_100;
  fVar3 = local_100[3];
  fVar4 = local_100[2];
  local_120[2] = local_158;
  fStack_124 = (fVar24 * DAT_180380a68 + DAT_180380a3c) * *(float *)(&DAT_1803dc9b4 + lVar22);
  local_150[0] = 0.0;
  local_120[4] = 1.0;
  local_120[0] = 0.0;
  local_140 = 1.0;
  local_120[5] = 0.0;
  fVar24 = *(float *)(&DAT_1803dca18 + lVar22);
  fVar33 = *(float *)(&DAT_1803dca1c + lVar22);
  fVar7 = *(float *)(&DAT_1803dca20 + lVar22);
  fVar8 = *(float *)(&DAT_1803dca24 + lVar22);
  fVar30 = (float)local_e8._0_4_ - local_154;
  if (local_15c - local_164 <= (float)local_e8._0_4_ - local_154) {
    fVar30 = local_15c - local_164;
  }
  local_148[0] = fVar25;
  pfVar17 = local_150;
  if (0.0 <= fVar25) {
    pfVar17 = local_148;
  }
  local_120[6] = fVar25;
  fVar26 = *(float *)(&DAT_1803dca28 + lVar22);
  fVar27 = *(float *)(&DAT_1803dca2c + lVar22);
  fVar28 = *(float *)(&DAT_1803dca30 + lVar15 * 0x19);
  fVar29 = *(float *)((longlong)&DAT_1803dca30 + lVar22 + 4);
  pfVar16 = &local_160;
  if (fVar25 <= fVar32) {
    pfVar16 = pfVar17;
  }
  local_160 = DAT_180380fa8;
  if (fVar30 * DAT_180380a6c <= DAT_180380fa8) {
    local_160 = fVar30 * DAT_180380a6c;
  }
  fVar32 = *pfVar16;
  fVar31 = DAT_180380fa8;
  if (fVar30 * _DAT_180380a8c <= DAT_180380fa8) {
    fVar31 = fVar30 * _DAT_180380a8c;
  }
  local_100 = (float *)CONCAT44(local_100._4_4_,fVar31);
  fStack_12c = (fVar1 - *(float *)(&DAT_1803dc9ac + lVar22)) * fVar32 +
               *(float *)(&DAT_1803dc9ac + lVar22);
  local_130 = (fVar2 - *(float *)(&DAT_1803dc9a8 + lVar22)) * fVar32 +
              *(float *)(&DAT_1803dc9a8 + lVar22);
  fStack_128 = (fVar4 - *(float *)(&DAT_1803dc9b0 + lVar22)) * fVar32 +
               *(float *)(&DAT_1803dc9b0 + lVar22);
  fStack_124 = (fVar3 * DAT_180380a6c - fStack_124) * fVar32 + fStack_124;
  uVar13 = FUN_180268ed0(&local_130);
  fVar30 = local_160;
  FUN_180295000(lVar6,&local_f8,&local_f0,uVar13,local_160,0);
  fVar32 = DAT_180380bb0;
  local_150[0] = 1.0;
  local_160 = 0.0;
  local_148[0] = fVar25;
  pfVar17 = &local_160;
  if (0.0 <= fVar25) {
    pfVar17 = local_148;
  }
  pfVar16 = local_150;
  if (fVar25 <= DAT_180380bb0) {
    pfVar16 = pfVar17;
  }
  fVar31 = *pfVar16;
  local_130 = (fVar2 - *(float *)(&DAT_1803dc9b8 + lVar22)) * fVar31 +
              *(float *)(&DAT_1803dc9b8 + lVar22);
  fStack_12c = (fVar1 - *(float *)(&DAT_1803dc9bc + lVar22)) * fVar31 +
               *(float *)(&DAT_1803dc9bc + lVar22);
  fStack_128 = (fVar4 - *(float *)(&DAT_1803dc9c0 + lVar22)) * fVar31 +
               *(float *)(&DAT_1803dc9c0 + lVar22);
  fStack_124 = (fVar3 * DAT_180380af0 - *(float *)(&DAT_1803dc9c4 + lVar22)) * fVar31 +
               *(float *)(&DAT_1803dc9c4 + lVar22);
  uVar14 = FUN_180268ed0(&local_130);
  fVar2 = local_138;
  fVar1 = DAT_180380ac0;
  pfVar17 = local_120;
  if (0.0 <= local_158) {
    pfVar17 = local_120 + 2;
  }
  fVar3 = *pfVar18;
  fVar4 = pfVar18[1];
  fVar31 = pfVar18[2];
  fVar9 = pfVar18[3];
  pfVar18 = local_120 + 4;
  if (local_158 <= fVar32) {
    pfVar18 = pfVar17;
  }
  fVar5 = *pfVar18;
  pfVar18 = local_120 + 5;
  if (0.0 <= fVar25) {
    pfVar18 = local_120 + 6;
  }
  pfVar17 = &local_140;
  if (fVar25 <= fVar32) {
    pfVar17 = pfVar18;
  }
  fVar26 = fVar5 * (fVar24 - fVar26) + fVar26;
  fVar27 = fVar5 * (fVar33 - fVar27) + fVar27;
  fVar28 = fVar5 * (fVar7 - fVar28) + fVar28;
  fVar29 = fVar5 * (fVar8 - fVar29) + fVar29;
  fVar24 = *pfVar17;
  if ((uVar14 & 0xff000000) != 0) {
    local_140 = local_154 + DAT_180380ac0;
    local_13c = local_164 + DAT_180380ac0;
    local_138 = _DAT_180380abc;
    if ((*(byte *)(lVar6 + 0x30) & 1) != 0) {
      local_138 = DAT_180380ac0;
    }
    local_134 = local_15c - local_138;
    local_138 = (float)local_e8._0_4_ - local_138;
    FUN_180294990(lVar6,&local_140,&local_138,fVar30,0);
    FUN_1802929d0(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),uVar14,fVar32,
                  0x200);
    *(undefined4 *)(lVar6 + 0x50) = 0;
  }
  fVar32 = (float)local_e8._0_4_ + local_154;
  fVar33 = local_15c + local_164;
  local_130 = fVar24 * (fVar3 - fVar26) + fVar26;
  fStack_12c = fVar24 * (fVar4 - fVar27) + fVar27;
  fStack_128 = fVar24 * (fVar31 - fVar28) + fVar28;
  fStack_124 = fVar24 * (fVar9 - fVar29) + fVar29;
  uVar13 = FUN_180268ed0(&local_130);
  FUN_18019ab20(lVar6,fVar2,CONCAT44(fVar33 * fVar1,fVar32 * fVar1),uVar13,local_100._0_4_);
  return uVar23;
}


