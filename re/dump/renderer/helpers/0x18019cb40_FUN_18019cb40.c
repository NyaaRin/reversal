// 18019cb40  FUN_18019cb40
// signature: undefined FUN_18019cb40()
// status: ok


undefined1
FUN_18019cb40(char *param_1,float param_2,undefined8 *param_3,float *param_4,char param_5,
             char param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  float *pfVar11;
  char *pcVar12;
  float *pfVar13;
  longlong lVar14;
  byte *pbVar15;
  ulonglong uVar16;
  size_t _Size;
  byte bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 in_stack_fffffffffffffea0;
  longlong lVar26;
  bool local_138;
  undefined1 local_137;
  undefined8 local_130;
  float local_128;
  float local_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  longlong local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  longlong local_e0;
  
  uVar10 = (uint)((ulonglong)in_stack_fffffffffffffea0 >> 0x20);
  local_fc = param_2;
  FUN_18019a460(param_1,0);
  uVar8 = (uint)local_130._4_4_;
  pfVar13 = (float *)&local_130;
  local_128 = 5.60519e-45;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar13 = &DAT_1803fb24c;
  }
  local_130 = (ulonglong)(uint)local_130._4_4_ << 0x20;
  pfVar11 = &local_128;
  if ((int)DAT_1803fb24c < 5) {
    pfVar11 = pfVar13;
  }
  DAT_1803fb24c = *pfVar11;
  local_110 = (longlong)(int)DAT_1803fb24c * 200;
  if (param_6 == '\0') {
    fVar23 = 1.0;
  }
  else {
    pfVar13 = (float *)&local_130;
    local_128 = 1.5;
    local_130 = CONCAT44(uVar8,0x3f400000);
    if (0.75 <= DAT_1803da6a4) {
      pfVar13 = &DAT_1803da6a4;
    }
    pfVar11 = &local_128;
    if (DAT_1803da6a4 <= 1.5) {
      pfVar11 = pfVar13;
    }
    fVar23 = *pfVar11;
  }
  local_130 = *param_3;
  uVar16 = (ulonglong)_tls_index;
  if ((float)local_130 < 0.0) {
    lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar16 * 8);
    if (*(char *)(lVar26 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar26 = *(longlong *)(lVar26 + 0xec0);
    lVar4 = *(longlong *)(lVar26 + 0x1520);
    if ((*(longlong *)(lVar4 + 0x1c8) != 0) || (lVar14 = 0x280, *(longlong *)(lVar26 + 0x2368) != 0)
       ) {
      lVar14 = 0x250;
    }
    local_130 = CONCAT44(local_130._4_4_,*(float *)(lVar4 + lVar14) - *(float *)(lVar4 + 0x118));
  }
  fVar24 = local_130._4_4_;
  if (0.0 <= local_130._4_4_) {
    if (param_6 != '\0') {
      lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar16 * 8);
      if (*(char *)(lVar26 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar26 = *(longlong *)(lVar26 + 0xec0);
      fVar22 = *(float *)(lVar26 + 0xcc8);
      fVar18 = fVar22 + fVar22 + *(float *)(lVar26 + 0x1238);
      fVar22 = fVar24 * fVar23;
      if (fVar24 * fVar23 <= fVar18) {
        fVar22 = fVar18;
      }
      local_130 = CONCAT44(fVar22,(float)local_130);
    }
  }
  else {
    lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar16 * 8);
    if (*(char *)(lVar26 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar26 = *(longlong *)(lVar26 + 0xec0);
    lVar4 = *(longlong *)(lVar26 + 0x1520);
    if ((*(longlong *)(lVar4 + 0x1c8) != 0) || (lVar14 = 0x284, *(longlong *)(lVar26 + 0x2368) != 0)
       ) {
      lVar14 = 0x254;
    }
    local_130 = CONCAT44(*(float *)(lVar14 + lVar4) - *(float *)(lVar4 + 0x11c),(float)local_130);
  }
  FUN_1802ac3c0(param_1,&local_130);
  uVar5 = FUN_18026ee60(0);
  lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar16 * 8);
  local_e0 = lVar26;
  if (*(char *)(lVar26 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  iVar3 = *(int *)(*(longlong *)(lVar26 + 0xec0) + 0x1594);
  if (iVar3 == 0) {
    local_138 = false;
  }
  else {
    local_138 = iVar3 == *(int *)(*(longlong *)(lVar26 + 0xec0) + 0x1ef8);
  }
  cVar6 = FUN_18027bce0(0,0,0);
  if (cVar6 != '\0') {
    cVar6 = FUN_18026ee60(0);
    local_137 = 1;
    if (cVar6 != '\0') goto LAB_18019ce0b;
  }
  local_137 = 0;
LAB_18019ce0b:
  if (*(char *)(lVar26 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  cVar6 = *(char *)(lVar26 + 0x10);
  lVar4 = *(longlong *)(lVar26 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar4 + 0x1520) + 0xce) = 1;
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x1520) + 0x2c8);
  if (cVar6 == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar24 = *(float *)(*(longlong *)(lVar26 + 0xec0) + 0x1f0c);
  fVar22 = *(float *)(*(longlong *)(lVar26 + 0xec0) + 0x1f10);
  if (*(char *)(lVar26 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar18 = *(float *)(*(longlong *)(lVar26 + 0xec0) + 0x1f04);
  fVar1 = *(float *)(*(longlong *)(lVar26 + 0xec0) + 0x1f08);
  local_f0 = fVar18;
  local_ec = fVar1;
  local_e8 = fVar24;
  local_e4 = fVar22;
  uVar7 = FUN_18027b010(param_1);
  pbVar15 = &DAT_180363c09;
  uVar7 = ~uVar7;
  bVar17 = 0x62;
  uVar8 = uVar7;
  do {
    if (((bVar17 == 0x23) && (*pbVar15 == 0x23)) && (pbVar15[1] == 0x23)) {
      pbVar15 = pbVar15 + 2;
      uVar8 = uVar7;
    }
    else {
      uVar8 = uVar8 >> 8 ^
              *(uint *)(&DAT_180331380 + ((ulonglong)(uVar8 & 0xff) ^ (ulonglong)bVar17) * 4);
    }
    bVar17 = *pbVar15;
    pbVar15 = pbVar15 + 1;
  } while (bVar17 != 0);
  fVar19 = (float)FUN_1802d3320(~uVar8,uVar5,0x3f80000000000000,0x41900000);
  pbVar15 = &DAT_180363c11;
  bVar17 = 0x62;
  uVar8 = uVar7;
  do {
    if (((bVar17 == 0x23) && (*pbVar15 == 0x23)) && (pbVar15[1] == 0x23)) {
      pbVar15 = pbVar15 + 2;
      uVar8 = uVar7;
    }
    else {
      uVar8 = uVar8 >> 8 ^
              *(uint *)(&DAT_180331380 + ((ulonglong)(uVar8 & 0xff) ^ (ulonglong)bVar17) * 4);
    }
    bVar17 = *pbVar15;
    pbVar15 = pbVar15 + 1;
  } while (bVar17 != 0);
  fVar20 = (float)FUN_1802d3320(~uVar8,local_138,0x3f80000000000000,0x41c00000);
  lVar26 = local_110;
  uVar8 = (uint)local_130._4_4_;
  if (param_5 == '\0') {
    local_110 = CONCAT44(local_110._4_4_,0x3f800000);
    local_130 = (ulonglong)(uint)local_130._4_4_ << 0x20;
    local_128 = fVar19;
    pfVar13 = (float *)&local_130;
    if (0.0 <= fVar19) {
      pfVar13 = &local_128;
    }
    fVar21 = *(float *)((longlong)&DAT_1803dca30 + lVar26 + 4);
    pfVar11 = (float *)&local_110;
    if (fVar19 <= 1.0) {
      pfVar11 = pfVar13;
    }
    fVar25 = (fVar19 * 0.23 + 0.72) * *(float *)(&DAT_1803dc9c4 + lVar26);
    fStack_114 = *pfVar11;
    fVar20 = (fVar19 * 0.35 + 0.2) * *(float *)(&DAT_1803dc9b4 + lVar26);
    local_120 = (*(float *)(&DAT_1803dca18 + lVar26) - *(float *)(&DAT_1803dca28 + lVar26)) *
                fStack_114 + *(float *)(&DAT_1803dca28 + lVar26);
    fVar2 = *(float *)(&DAT_1803dc9b8 + lVar26);
    fStack_11c = (*(float *)(&DAT_1803dca1c + lVar26) - *(float *)(&DAT_1803dca2c + lVar26)) *
                 fStack_114 + *(float *)(&DAT_1803dca2c + lVar26);
    local_128 = *(float *)(&DAT_1803dc9bc + lVar26);
    fVar19 = *(float *)(&DAT_1803dc9c0 + lVar26);
    local_108 = *(float *)(&DAT_1803dc9a8 + lVar26);
    local_104 = *(float *)(&DAT_1803dc9ac + lVar26);
    local_100 = *(float *)(&DAT_1803dc9b0 + lVar26);
    fStack_118 = (*(float *)(&DAT_1803dca20 + lVar26) -
                 *(float *)((longlong)&DAT_1803dca30 + lVar26)) * fStack_114 +
                 *(float *)((longlong)&DAT_1803dca30 + lVar26);
    fStack_114 = (*(float *)(&DAT_1803dca24 + lVar26) - fVar21) * fStack_114;
  }
  else {
    fVar21 = *(float *)(&DAT_1803dca24 + local_110);
    fVar25 = (fVar19 * 0.3 + 0.38) * param_4[3];
    fStack_11c = (param_4[1] - *(float *)(&DAT_1803dca1c + local_110)) * 0.1 +
                 *(float *)(&DAT_1803dca1c + local_110);
    local_120 = (*param_4 - *(float *)(&DAT_1803dca18 + local_110)) * 0.1 +
                *(float *)(&DAT_1803dca18 + local_110);
    fVar2 = *param_4;
    local_128 = param_4[1];
    fVar20 = (fVar19 * 0.1 + 0.2 + fVar20 * 0.12) * param_4[3];
    fVar19 = param_4[2];
    local_108 = *param_4;
    local_104 = param_4[1];
    local_100 = param_4[2];
    fStack_118 = (param_4[2] - *(float *)(&DAT_1803dca20 + local_110)) * 0.1 +
                 *(float *)(&DAT_1803dca20 + local_110);
    fStack_114 = (param_4[3] - fVar21) * 0.1;
  }
  local_130 = CONCAT44(uVar8,fVar19);
  local_110 = CONCAT44(local_110._4_4_,fVar2);
  fStack_114 = fStack_114 + fVar21;
  uVar8 = FUN_180268ed0(&local_120);
  fVar19 = fVar23 * 8.0;
  local_120 = local_108;
  fStack_11c = local_104;
  fStack_118 = local_100;
  fStack_114 = fVar20;
  uVar9 = FUN_180268ed0(&local_120);
  lVar26 = (ulonglong)uVar10 << 0x20;
  FUN_180295000(lVar4,&local_f0,&local_e8,uVar9,fVar19,lVar26);
  uVar9 = (undefined4)((ulonglong)lVar26 >> 0x20);
  local_120 = (float)local_110;
  fStack_11c = local_128;
  fStack_118 = (float)local_130;
  fStack_114 = fVar25;
  uVar10 = FUN_180268ed0(&local_120);
  lVar26 = local_e0;
  if ((uVar10 & 0xff000000) != 0) {
    local_124 = fVar1 + 0.5;
    if ((*(byte *)(lVar4 + 0x30) & 1) == 0) {
      fVar24 = fVar24 - 0.49;
      fVar20 = fVar22 - 0.49;
    }
    else {
      fVar24 = fVar24 - 0.5;
      fVar20 = fVar22 - 0.5;
    }
    local_128 = fVar18 + 0.5;
    local_130 = CONCAT44(fVar20,fVar24);
    FUN_180294990(lVar4,&local_128,&local_130,fVar19,0);
    FUN_1802929d0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar10,
                  0x3f800000,CONCAT44(uVar9,0x200));
    *(undefined4 *)(lVar4 + 0x50) = 0;
  }
  fVar24 = (fVar1 + fVar22) * 0.5;
  FUN_18019ab20(lVar4,local_fc,CONCAT44(fVar24,fVar23 * 18.0 + fVar18),uVar8,fVar19);
  pcVar12 = strstr(param_1,"##");
  if (pcVar12 == (char *)0x0) {
    _Size = strlen(param_1);
  }
  else {
    _Size = (longlong)pcVar12 - (longlong)param_1;
  }
  if (0x5f < _Size) {
    _Size = 0x5f;
  }
  memcpy(&DAT_18042bc80,param_1,_Size);
  if (0x5f < _Size) {
                    /* WARNING: Subroutine does not return */
    FUN_1802d8348();
  }
  (&DAT_18042bc80)[_Size] = 0;
  if (*(char *)(lVar26 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_fc = fVar23 * 34.0 + fVar18;
  local_f8 = fVar24 - *(float *)(*(longlong *)(lVar26 + 0xec0) + 0x1238) * 0.5;
  if (((uVar8 & 0xff000000) != 0) && (DAT_18042bc80 != '\0')) {
    local_120 = *(float *)(lVar4 + 0x60);
    fStack_11c = *(float *)(lVar4 + 100);
    fStack_118 = *(float *)(lVar4 + 0x68);
    fStack_114 = *(float *)(lVar4 + 0x6c);
    FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x18),lVar4,
                  *(undefined4 *)(*(longlong *)(lVar4 + 0x38) + 0x20),&local_fc,uVar8,&local_120,
                  &DAT_18042bc80,0,0,0);
  }
  return local_137;
}


