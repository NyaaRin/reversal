// 0x18019dee0  FUN_18019dee0
// size=2695 thunk=false
// signature: undefined FUN_18019dee0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18019dee0(char *param_1,float param_2,undefined1 param_3,float param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  char *pcVar6;
  undefined1 uVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  byte *pbVar14;
  longlong lVar15;
  uint uVar16;
  byte bVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulonglong in_stack_fffffffffffffeb0;
  float local_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined8 local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0 [2];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  
  fVar5 = DAT_1803da6a4;
  local_e0 = param_2;
  pfVar13 = local_f0;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar13 = &DAT_1803fb24c;
  }
  local_f8 = 5.60519e-45;
  local_f0[0] = 0.0;
  pfVar12 = &local_f8;
  if ((int)DAT_1803fb24c < 5) {
    pfVar12 = pfVar13;
  }
  local_110 = param_1;
  DAT_1803fb24c = *pfVar12;
  lVar11 = (longlong)(int)DAT_1803fb24c;
  lVar15 = lVar11 * 200;
  FUN_18027abf0();
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_100 = fVar5 * DAT_180380fa8;
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar4 + 0x1520) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar4 + 0x1520);
  *(undefined1 *)(lVar4 + 0x159) = 1;
  *(float *)(lVar4 + 0x118) = (*(float *)(lVar4 + 0x28) - *(float *)(lVar4 + 0x98)) + local_100;
  local_e4 = fVar5 * DAT_180381078;
  local_e8 = param_4;
  FUN_1802ac3c0("##nav",&local_e8);
  uVar7 = FUN_18026ee60(0);
  cVar8 = FUN_18027bce0(0,0,0);
  if ((cVar8 == '\0') || (cVar8 = FUN_18026ee60(0), cVar8 == '\0')) {
    uVar18 = 0;
  }
  else {
    uVar18 = 1;
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar22 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1f0c);
  fVar26 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1f10);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar24 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1f08);
  fVar1 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1f04);
  local_120 = fVar1;
  fStack_11c = fVar24;
  fStack_118 = fVar22;
  fStack_114 = fVar26;
  local_e8 = fVar24;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar4 + 0x1520) + 0xce) = 1;
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x1520) + 0x2c8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar25 = DAT_180380bb0;
  pbVar14 = &DAT_180363c31;
  bVar17 = 0x6e;
  uVar16 = ~*(uint *)(*(longlong *)(lVar3 + 0xec0) + 0x1ef8);
  uVar10 = uVar16;
  do {
    if (((bVar17 == 0x23) && (*pbVar14 == 0x23)) && (pbVar14[1] == 0x23)) {
      pbVar14 = pbVar14 + 2;
      uVar10 = uVar16;
    }
    else {
      uVar10 = uVar10 >> 8 ^
               *(uint *)(&DAT_180331380 + ((ulonglong)(uVar10 & 0xff) ^ (ulonglong)bVar17) * 4);
    }
    bVar17 = *pbVar14;
    pbVar14 = pbVar14 + 1;
  } while (bVar17 != 0);
  fVar19 = (float)FUN_1802d3320(~uVar10,uVar7,(ulonglong)(uint)DAT_180380bb0 << 0x20,DAT_180381004);
  pbVar14 = &DAT_180363c39;
  bVar17 = 0x6e;
  uVar10 = uVar16;
  do {
    if (((bVar17 == 0x23) && (*pbVar14 == 0x23)) && (pbVar14[1] == 0x23)) {
      pbVar14 = pbVar14 + 2;
      uVar10 = uVar16;
    }
    else {
      uVar10 = uVar10 >> 8 ^
               *(uint *)(&DAT_180331380 + ((ulonglong)(uVar10 & 0xff) ^ (ulonglong)bVar17) * 4);
    }
    bVar17 = *pbVar14;
    pbVar14 = pbVar14 + 1;
  } while (bVar17 != 0);
  local_124 = fVar19;
  fVar20 = (float)FUN_1802d3320(~uVar10,param_3,(ulonglong)(uint)fVar25 << 0x20,DAT_180380fe8);
  pcVar6 = local_110;
  fVar27 = fVar19 * DAT_180380a40;
  if (fVar19 * DAT_180380a40 <= fVar20 * _DAT_180380a98) {
    fVar27 = fVar20 * _DAT_180380a98;
  }
  fVar19 = DAT_180380fa8;
  if (DAT_180380964 < fVar27) {
    local_110 = (char *)CONCAT44(local_110._4_4_,0x3f800000);
    local_f8 = 0.0;
    local_f0[0] = fVar20;
    pfVar13 = &local_f8;
    if (0.0 <= fVar20) {
      pfVar13 = local_f0;
    }
    pfVar12 = (float *)&local_110;
    if (fVar20 <= fVar25) {
      pfVar12 = pfVar13;
    }
    fVar19 = *pfVar12;
    local_110 = (char *)CONCAT44((*(float *)(&DAT_1803dc9dc + lVar15) -
                                 *(float *)(&DAT_1803dc9ac + lVar15)) * fVar19 +
                                 *(float *)(&DAT_1803dc9ac + lVar15),
                                 (*(float *)(&DAT_1803dc9d8 + lVar15) -
                                 *(float *)(&DAT_1803dc9a8 + lVar15)) * fVar19 +
                                 *(float *)(&DAT_1803dc9a8 + lVar15));
    local_108 = (*(float *)(&DAT_1803dc9e0 + lVar15) - *(float *)(&DAT_1803dc9b0 + lVar15)) * fVar19
                + *(float *)(&DAT_1803dc9b0 + lVar15);
    local_104 = ((*(float *)(&DAT_1803dc9e4 + lVar15) - *(float *)(&DAT_1803dc9b4 + lVar15)) *
                 fVar19 + *(float *)(&DAT_1803dc9b4 + lVar15)) * fVar27;
    uVar9 = FUN_180268ed0(&local_110);
    fVar19 = DAT_180380fa8;
    in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffff00000000;
    FUN_180295000(lVar4,&local_120,&fStack_118,uVar9,DAT_180380fa8,in_stack_fffffffffffffeb0);
  }
  fVar27 = DAT_180380ac0;
  if (DAT_180380964 < fVar20) {
    fStack_11c = *(float *)(&DAT_1803dc9cc + lVar15);
    local_120 = *(float *)(&DAT_1803dc9c8 + lVar15);
    fStack_118 = *(float *)(&DAT_1803dc9d0 + lVar15);
    fStack_114 = fVar20 * DAT_180380ab0 * *(float *)(&DAT_1803dc9d4 + lVar15);
    uVar10 = FUN_180268ed0(&local_120);
    uVar9 = (undefined4)(in_stack_fffffffffffffeb0 >> 0x20);
    if ((uVar10 & 0xff000000) != 0) {
      local_f4 = fVar24 + fVar27;
      fVar21 = _DAT_180380abc;
      if ((*(byte *)(lVar4 + 0x30) & 1) != 0) {
        fVar21 = fVar27;
      }
      local_f8 = fVar1 + fVar27;
      local_110 = (char *)CONCAT44(fVar26 - fVar21,fVar22 - fVar21);
      FUN_180294990(lVar4,&local_f8,&local_110,fVar19,0);
      in_stack_fffffffffffffeb0 = CONCAT44(uVar9,0x200);
      FUN_1802929d0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar10,fVar25,
                    in_stack_fffffffffffffeb0);
      *(undefined4 *)(lVar4 + 0x50) = 0;
    }
    local_120 = *(float *)(&DAT_1803dc9c8 + lVar15);
    fStack_11c = *(float *)(&DAT_1803dc9cc + lVar15);
    fStack_118 = *(float *)(&DAT_1803dc9d0 + lVar15);
    fStack_114 = fVar20 * *(float *)(&DAT_1803dc9d4 + lVar15);
    fVar22 = (fVar26 + fVar24) * fVar27;
    fVar24 = ((fVar26 - fVar24) * fVar27 - local_100) * fVar20;
    local_fc = fVar22 + fVar24;
    local_110 = (char *)CONCAT44(fVar22 - fVar24,fVar5 * DAT_180380e9c + fVar1);
    local_100 = fVar5 * DAT_180380f74 + fVar1;
    uVar9 = FUN_180268ed0(&local_120);
    FUN_180295000(lVar4,&local_110,&local_100,uVar9,DAT_180380d30,
                  in_stack_fffffffffffffeb0 & 0xffffffff00000000);
  }
  local_100 = local_124 * DAT_180380b10;
  local_110 = (char *)CONCAT44(local_110._4_4_,0x3f800000);
  fVar22 = *(float *)((longlong)&DAT_1803dca30 + lVar15 + 4);
  local_124 = 0.0;
  pfVar13 = &local_124;
  if (0.0 <= local_100) {
    pfVar13 = &local_100;
  }
  pfVar12 = (float *)&local_110;
  if (local_100 <= DAT_180380bb0) {
    pfVar12 = pfVar13;
  }
  fVar24 = *pfVar12;
  pfVar13 = &local_124;
  if (0.0 <= fVar20) {
    pfVar13 = &local_100;
  }
  local_110 = (char *)CONCAT44(local_110._4_4_,0x3f800000);
  local_100 = fVar20;
  local_124 = 0.0;
  fVar25 = (*(float *)(&DAT_1803dca18 + lVar15) - *(float *)(&DAT_1803dca28 + lVar15)) * fVar24 +
           *(float *)(&DAT_1803dca28 + lVar15);
  pfVar12 = (float *)&local_110;
  if (fVar20 <= DAT_180380bb0) {
    pfVar12 = pfVar13;
  }
  fVar21 = (*(float *)(&DAT_1803dca1c + lVar15) - *(float *)(&DAT_1803dca2c + lVar15)) * fVar24 +
           *(float *)(&DAT_1803dca2c + lVar15);
  fVar23 = (*(float *)(&DAT_1803dca20 + lVar15) - *(float *)(&DAT_1803dca30 + lVar11 * 0x19)) *
           fVar24 + *(float *)(&DAT_1803dca30 + lVar11 * 0x19);
  fVar19 = *pfVar12;
  pfVar13 = &local_124;
  if (0.0 <= fVar20) {
    pfVar13 = &local_100;
  }
  local_110 = (char *)CONCAT44(local_110._4_4_,0x3f800000);
  local_124 = 0.0;
  fVar22 = (*(float *)(&DAT_1803dca24 + lVar15) - fVar22) * fVar24 + fVar22;
  fVar25 = (*(float *)(&DAT_1803dca18 + lVar15) - fVar25) * fVar19 + fVar25;
  pfVar12 = (float *)&local_110;
  if (fVar20 <= DAT_180380bb0) {
    pfVar12 = pfVar13;
  }
  fVar21 = (*(float *)(&DAT_1803dca1c + lVar15) - fVar21) * fVar19 + fVar21;
  fVar23 = (*(float *)(&DAT_1803dca20 + lVar15) - fVar23) * fVar19 + fVar23;
  fVar24 = *pfVar12;
  fVar22 = (*(float *)(&DAT_1803dca24 + lVar15) - fVar22) * fVar19 + fVar22;
  fStack_11c = (*(float *)(&DAT_1803dc9cc + lVar15) - fVar21) * fVar24 + fVar21;
  local_120 = (*(float *)(&DAT_1803dc9c8 + lVar15) - fVar25) * fVar24 + fVar25;
  fVar19 = fVar5 * _DAT_180381028;
  fVar20 = (fVar26 + local_e8) * fVar27;
  fVar26 = fVar5 * _DAT_180380f9c;
  fStack_114 = (*(float *)(&DAT_1803dc9d4 + lVar15) - fVar22) * fVar24 + fVar22;
  fStack_118 = (*(float *)(&DAT_1803dc9d0 + lVar15) - fVar23) * fVar24 + fVar23;
  uVar9 = FUN_180268ed0(&local_120);
  FUN_18019ab20(lVar4,local_e0,CONCAT44(fVar20,fVar19 + fVar1),uVar9,fVar26);
  local_120 = fVar25;
  fStack_11c = fVar21;
  fStack_118 = fVar23;
  fStack_114 = fVar22;
  uVar10 = FUN_180268ed0(&local_120);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_e0 = fVar5 * _DAT_180381084 + fVar1;
  local_dc = fVar20 - *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1238) * fVar27;
  if ((((uVar10 & 0xff000000) != 0) && (pcVar6 != (char *)0x0)) && (*pcVar6 != '\0')) {
    local_120 = *(float *)(lVar4 + 0x60);
    fStack_11c = *(float *)(lVar4 + 100);
    fStack_118 = *(float *)(lVar4 + 0x68);
    fStack_114 = *(float *)(lVar4 + 0x6c);
    FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x18),lVar4,
                  *(undefined4 *)(*(longlong *)(lVar4 + 0x38) + 0x20),&local_e0,uVar10,&local_120,
                  pcVar6,0,0,0);
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x1520);
  iVar2 = *(int *)(lVar3 + 0x108);
  if (iVar2 < 2) {
    FUN_18027e9c0("Calling PopID() too many times!");
  }
  else {
    *(int *)(lVar3 + 0x108) = iVar2 + -1;
  }
  return uVar18;
}


