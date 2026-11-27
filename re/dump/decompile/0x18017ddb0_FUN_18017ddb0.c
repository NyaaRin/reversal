// 0x18017ddb0  FUN_18017ddb0
// size=2794 thunk=false
// signature: undefined FUN_18017ddb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2
FUN_18017ddb0(undefined8 param_1,char *param_2,char param_3,undefined4 param_4,char param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  int iVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_258 [32];
  float local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_210;
  undefined2 local_208;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  undefined8 local_1e8;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float local_1c4;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  char *local_1a8;
  undefined1 local_1a0 [16];
  int local_190 [2];
  undefined1 local_188 [32];
  float local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_148;
  undefined4 uStack_144;
  float fStack_140;
  float fStack_13c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_258;
  local_208 = 0;
  local_1a8 = param_2;
  FUN_18017d630(local_188);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar17 = *(longlong *)(lVar5 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar17 + 0x1520) + 0xce) = 1;
  plVar14 = *(longlong **)(lVar17 + 0x1520);
  if (*(char *)((longlong)plVar14 + 0xd1) != '\0') {
    return 0;
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar17 = *(longlong *)(lVar5 + 0xec0);
  lVar6 = plVar14[0x59];
  local_190[0] = FUN_180268980(param_1,0,
                               *(undefined4 *)
                                (plVar14[0x22] + -4 + (longlong)(int)plVar14[0x21] * 4));
  if (*(int *)(*plVar14 + 0x1578) == local_190[0]) {
    FUN_1802899e0(local_190[0],0xb,param_1);
  }
  local_1e8 = CONCAT44(0x41d00000,param_4);
  cVar10 = FUN_1802ac3c0(param_1,&local_1e8);
  cVar11 = FUN_18026ee60(0);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar2 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x1f0c);
  fVar3 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x1f10);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar21 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x1f04);
  fVar4 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x1f08);
  local_1d8 = fVar21;
  fStack_1d4 = fVar4;
  fStack_1d0 = fVar2;
  fStack_1cc = fVar3;
  plVar14 = (longlong *)FUN_1802155b0(&DAT_1803fa820,local_1a0,local_190);
  fVar23 = DAT_180380bb0;
  local_1e8 = *plVar14;
  fVar20 = DAT_180380bb0;
  if (cVar11 == '\0') {
    fVar20 = 0.0;
  }
  if (*(float *)(lVar17 + 0x40) <= 0.0) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = expf(*(float *)(lVar17 + 0x40) * DAT_1803813f4);
    fVar18 = fVar23 - fVar18;
  }
  fVar19 = DAT_180380964;
  iVar16 = 0;
  fVar20 = (fVar20 - *(float *)(local_1e8 + 0x14)) * fVar18 + *(float *)(local_1e8 + 0x14);
  *(float *)(local_1e8 + 0x14) = fVar20;
  if (fVar20 < fVar19) {
    *(undefined4 *)(local_1e8 + 0x14) = 0;
    fVar20 = 0.0;
  }
  fVar18 = DAT_180380ac0;
  if (param_5 == '\0') {
    fVar20 = 0.0;
    local_1b8 = fVar2 - 0.0;
  }
  else {
    fVar20 = fVar20 * DAT_180381048;
    local_1b8 = fVar2 - fVar20;
    if ((((DAT_180380fcc < fVar20) && (local_1b8 <= *(float *)(lVar17 + 0x100))) &&
        (fVar4 <= *(float *)(lVar17 + 0x104))) &&
       ((*(float *)(lVar17 + 0x100) < fVar2 && (*(float *)(lVar17 + 0x104) < fVar3)))) {
      bVar9 = true;
      goto LAB_18017e09b;
    }
  }
  bVar9 = false;
LAB_18017e09b:
  fVar19 = local_1b8;
  if (cVar10 != '\0') {
    if (bVar9) {
      local_208 = CONCAT11(1,(undefined1)local_208);
    }
    else {
      local_208 = CONCAT11(local_208._1_1_,1);
    }
  }
  local_1b4 = fVar4;
  local_1b0 = fVar2;
  local_1ac = fVar3;
  if (param_3 == '\0') {
    local_1ec = DAT_180380a70;
    if (cVar11 != '\0') {
      local_1ec = DAT_180380ae4;
    }
    local_1f4 = (float)local_164;
    local_1ec = local_15c * local_1ec;
    local_1f8 = local_168;
    local_1f0 = local_160;
    uVar12 = FUN_180268ed0(&local_1f8);
    fVar22 = DAT_180380f40;
    local_230 = (float *)((ulonglong)local_230._4_4_ << 0x20);
    local_238 = DAT_180380f40;
    FUN_180295000(lVar6,&local_1d8,&fStack_1d0,uVar12);
    lVar17 = local_1e8;
    if (cVar11 != '\0') {
      local_1f8 = local_148;
      local_1f4 = (float)uStack_144;
      local_1f0 = fStack_140;
      fVar25 = *(float *)(local_1e8 + 0x14);
      if (*(float *)(local_1e8 + 0x14) <= fVar18) {
        fVar25 = fVar18;
      }
      local_1ec = fVar25 * DAT_180380ab0 * fStack_13c;
      uVar12 = FUN_180268ed0(&local_1f8);
      local_228 = (char *)((ulonglong)local_228 & 0xffffffff00000000);
      local_230 = (float *)CONCAT44(local_230._4_4_,fVar23);
      local_238 = fVar22;
      FUN_180294f00(lVar6,&local_1d8,&fStack_1d0,uVar12);
    }
  }
  else {
    local_1ec = DAT_180380a40;
    if (cVar11 != '\0') {
      local_1ec = DAT_180380a74;
    }
    local_1f8 = local_148;
    local_1ec = fStack_13c * local_1ec;
    local_1f4 = (float)uStack_144;
    local_1f0 = fStack_140;
    uVar12 = FUN_180268ed0(&local_1f8);
    fVar22 = DAT_180380f40;
    local_230._0_4_ = 0;
    local_238 = DAT_180380f40;
    FUN_180295000(lVar6,&local_1d8,&fStack_1d0,uVar12);
    local_1f8 = local_148;
    local_1f4 = (float)uStack_144;
    local_1f0 = fStack_140;
    local_1ec = fStack_13c * DAT_180380ad4;
    uVar12 = FUN_180268ed0(&local_1f8);
    local_228 = (char *)((ulonglong)local_228._4_4_ << 0x20);
    local_230 = (float *)CONCAT44(local_230._4_4_,fVar23);
    local_238 = fVar22;
    FUN_180294f00(lVar6,&local_1d8,&fStack_1d0,uVar12);
    lVar17 = local_1e8;
  }
  local_1f8 = fVar21 + DAT_180380fc4;
  fVar18 = (fVar3 + fVar4) * fVar18;
  local_1e8 = CONCAT44(local_1e8._4_4_,local_1f8);
  fVar23 = fVar18 - DAT_180380e9c;
  fVar21 = fVar18 + DAT_180380e9c;
  fVar25 = local_1f8 + DAT_180380fa8;
  local_1c8 = fVar25;
  local_1c4 = fVar21;
  if (param_3 == '\0') {
    local_1f8 = local_f8;
    local_1f4 = local_f4;
    local_1f0 = local_f0;
    local_1ec = local_ec * DAT_180380b20;
    uVar13 = FUN_180268ed0(&local_1f8);
    fVar24 = DAT_180380bb0;
    if ((uVar13 & 0xff000000) != 0) {
      local_1c4 = fVar23 + DAT_180380ac0;
      local_1c8 = (float)local_1e8 + DAT_180380ac0;
      local_238 = 0.0;
      local_1f8 = _DAT_180380abc;
      if ((*(byte *)(lVar6 + 0x30) & 1) != 0) {
        local_1f8 = DAT_180380ac0;
      }
      local_1f4 = fVar21 - local_1f8;
      local_1f8 = fVar25 - local_1f8;
      FUN_180294990(lVar6,&local_1c8,&local_1f8,DAT_180380d30);
      fVar24 = DAT_180380bb0;
      local_230 = (float *)CONCAT44(local_230._4_4_,0x200);
      local_238 = DAT_180380bb0;
      FUN_1802929d0(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),uVar13);
      *(undefined4 *)(lVar6 + 0x50) = 0;
    }
    local_1e8 = CONCAT44(fVar3,fVar2 - DAT_180380e9c);
    FUN_180292550(lVar6,&local_1d8,&local_1e8,1);
    local_1d8 = local_f8;
    fStack_1d4 = local_f4;
    fStack_1d0 = local_f0;
    fStack_1cc = local_ec;
  }
  else {
    fStack_1e0 = fStack_140;
    fStack_1dc = fStack_13c;
    local_1f4 = fVar23;
    uVar12 = FUN_180268ed0(&local_1e8);
    local_230 = (float *)((ulonglong)local_230 & 0xffffffff00000000);
    local_238 = DAT_180380d30;
    FUN_180295000(lVar6,&local_1f8,&local_1c8,uVar12);
    local_1e8 = CONCAT44(fVar3,fVar2 - DAT_180380e9c);
    FUN_180292550(lVar6,&local_1d8,&local_1e8,1);
    local_1d8 = local_108;
    fStack_1d4 = local_104;
    fStack_1d0 = local_100;
    fStack_1cc = local_fc;
    fVar24 = DAT_180380bb0;
  }
  fVar21 = (float)FUN_180268ed0(&local_1d8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar23 = DAT_180380ac0;
  local_1f8 = fVar25 + DAT_180380f90;
  local_1f4 = fVar18 - *(float *)(*(longlong *)(lVar5 + 0xec0) + 0x1238) * DAT_180380ac0;
  if (((((uint)fVar21 & 0xff000000) != 0) && (local_1a8 != (char *)0x0)) && (*local_1a8 != '\0')) {
    local_1d8 = *(float *)(lVar6 + 0x60);
    fStack_1d4 = *(float *)(lVar6 + 100);
    fStack_1d0 = *(float *)(lVar6 + 0x68);
    fStack_1cc = *(float *)(lVar6 + 0x6c);
    local_210 = 0;
    local_218 = 0;
    local_220 = 0;
    local_228 = local_1a8;
    local_230 = &local_1d8;
    local_238 = fVar21;
    FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar6 + 0x38) + 0x18),lVar6,
                  *(undefined4 *)(*(longlong *)(lVar6 + 0x38) + 0x20),&local_1f8);
  }
  piVar1 = (int *)(lVar6 + 0xa0);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    puVar15 = (undefined4 *)(*(longlong *)(lVar6 + 0x38) + 0x38);
  }
  else {
    puVar15 = (undefined4 *)
              ((longlong)(*(int *)(lVar6 + 0xa0) + -1) * 0x10 + *(longlong *)(lVar6 + 0xa8));
  }
  uVar12 = puVar15[1];
  uVar7 = puVar15[2];
  uVar8 = puVar15[3];
  *(undefined4 *)(lVar6 + 0x60) = *puVar15;
  *(undefined4 *)(lVar6 + 100) = uVar12;
  *(undefined4 *)(lVar6 + 0x68) = uVar7;
  *(undefined4 *)(lVar6 + 0x6c) = uVar8;
  FUN_180292360(lVar6);
  if (fVar24 < fVar20) {
    fVar21 = DAT_180380a48;
    if (bVar9) {
      fVar21 = DAT_180380aa0;
    }
    local_1d8 = local_148;
    fStack_1cc = fVar21 * *(float *)(lVar17 + 0x14) * fStack_13c;
    fStack_1d4 = (float)uStack_144;
    fStack_1d0 = fStack_140;
    uVar12 = FUN_180268ed0(&local_1d8);
    local_230 = (float *)((ulonglong)local_230 & 0xffffffff00000000);
    local_238 = fVar22;
    FUN_180295000(lVar6,&local_1b8,&local_1b0,uVar12);
    local_1b8 = local_108;
    local_1b4 = local_104;
    local_1b0 = local_100;
    local_1ac = local_fc * *(float *)(lVar17 + 0x14);
    fVar20 = (fVar19 + fVar2) * fVar23;
    fVar23 = (fVar3 + fVar4) * fVar23;
    local_1e8 = CONCAT44(fVar23,fVar20);
    uVar13 = FUN_180268ed0(&local_1b8);
    fVar4 = DAT_180380c34;
    fVar21 = DAT_180380bbc;
    fVar3 = DAT_180380b38;
    fVar2 = DAT_180380b34;
    do {
      fVar18 = cosf((float)iVar16 * fVar3);
      local_1f8 = fVar18 * fVar22 * fVar21 + fVar20;
      fVar19 = sinf((float)iVar16 * fVar3);
      local_238 = fVar4;
      local_1c8 = fVar18 * fVar22 * fVar2 + fVar20;
      local_1f4 = fVar19 * fVar22 * fVar21 + fVar23;
      local_1c4 = fVar19 * fVar22 * fVar2 + fVar23;
      FUN_180294c90(lVar6,&local_1c8,&local_1f8,uVar13);
      iVar16 = iVar16 + 1;
    } while (iVar16 < 8);
    if ((uVar13 & 0xff000000) != 0) {
      local_230._0_4_ = 0x13;
      local_238 = (float)DAT_180380f3c;
      FUN_1802941e0(lVar6,&local_1e8,DAT_180380e20,0);
      local_230._0_4_ = 0x200;
      local_238 = (float)DAT_180380c50;
      FUN_1802929d0(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),uVar13);
      uVar12 = DAT_180380c20;
      local_230 = (float *)CONCAT44(local_230._4_4_,0xb);
      local_238 = (float)DAT_180380f28;
      *(undefined4 *)(lVar6 + 0x50) = 0;
      FUN_1802941e0(lVar6,&local_1e8,uVar12,0);
      FUN_1802938c0(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),uVar13);
      *(undefined4 *)(lVar6 + 0x50) = 0;
    }
  }
  return local_208;
}


