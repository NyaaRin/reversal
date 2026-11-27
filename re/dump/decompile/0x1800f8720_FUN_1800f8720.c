// 0x1800f8720  FUN_1800f8720
// size=2441 thunk=false
// signature: undefined FUN_1800f8720()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800f8720(longlong param_1,int *param_2,undefined8 param_3,float param_4,float param_5,
                  float param_6)

{
  undefined4 uVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float *pfVar11;
  undefined *puVar12;
  longlong *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_188 [32];
  float local_168;
  undefined8 local_160;
  float *local_158;
  undefined8 local_150;
  ulonglong local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100 [2];
  longlong local_f8;
  undefined4 local_f0;
  float local_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  if ((char)param_2[1] == '\0') {
    if (*param_2 == 0) {
      puVar9 = &DAT_1803fa930;
    }
    else {
      puVar9 = &DAT_1803fa950;
      if (*param_2 != 1) {
        puVar9 = &DAT_1803fa920;
      }
    }
  }
  else {
    puVar9 = &DAT_1803fa940;
  }
  local_104 = puVar9[1];
  pfVar11 = local_100;
  uVar1 = *puVar9;
  fVar15 = (float)param_3;
  fVar17 = (float)puVar9[3];
  local_128._4_4_ = (float)((ulonglong)param_3 >> 0x20);
  fVar16 = local_128._4_4_;
  param_5 = local_128._4_4_ + param_5;
  local_108 = puVar9[2];
  local_100[0] = 0.75;
  local_f8 = DAT_1803fa8e0;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar11 = &DAT_1803da6a4;
  }
  pfVar10 = &local_110;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar10 = pfVar11;
  }
  local_114 = local_128._4_4_;
  local_ec = param_6 * _DAT_180380b70 * _DAT_1803fa8ec;
  fVar2 = *pfVar10;
  fVar18 = fVar2 * DAT_180380f40;
  local_f0 = DAT_1803fa8e8;
  local_128 = param_3;
  local_118 = fVar15;
  local_110 = fVar15 + param_4;
  local_10c = param_5;
  uVar5 = FUN_180268ed0(&local_f8);
  local_160._0_4_ = 0;
  local_168 = fVar18;
  FUN_180295000(param_1,&local_118,&local_110,uVar5);
  local_128 = DAT_1803fa8f0;
  uStack_120 = CONCAT44(param_6 * _DAT_1803fa8fc,DAT_1803fa8f8);
  uVar6 = FUN_180268ed0(&local_128);
  fVar4 = DAT_180380ac0;
  if ((uVar6 & 0xff000000) != 0) {
    local_168 = 0.0;
    local_10c = fVar16 + DAT_180380ac0;
    local_114 = _DAT_180380abc;
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      local_114 = DAT_180380ac0;
    }
    local_118 = (fVar15 + param_4) - local_114;
    local_114 = param_5 - local_114;
    local_110 = fVar15 + DAT_180380ac0;
    FUN_180294990(param_1,&local_110,&local_118,fVar18);
    local_160._0_4_ = 0x200;
    local_168 = DAT_180380bb0;
    FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),uVar6);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  uVar7 = local_104;
  local_118 = fVar2 * DAT_180380f90 + fVar15;
  local_128 = CONCAT44(local_104,uVar1);
  local_110 = fVar2 * DAT_180380e9c + fVar15;
  uStack_120 = CONCAT44(param_6 * DAT_180380b74 * fVar17,local_108);
  local_114 = param_5 - fVar2 * DAT_180380f00;
  local_10c = fVar2 * DAT_180380f00 + fVar16;
  uVar5 = FUN_180268ed0(&local_128);
  local_160 = (float *)((ulonglong)local_160._4_4_ << 0x20);
  local_168 = DAT_180380c50;
  FUN_180295000(param_1,&local_110,&local_118,uVar5);
  uVar5 = local_108;
  fVar17 = fVar17 * param_6;
  fVar14 = fVar2 * _DAT_180381020;
  local_128 = CONCAT44(uVar7,uVar1);
  uStack_120 = CONCAT44(fVar17,local_108);
  fVar16 = (param_5 + fVar16) * fVar4;
  uVar7 = FUN_180268ed0(&local_128);
  FUN_1800f8480(param_1,param_2,CONCAT44(fVar16,fVar14 + fVar15),uVar7);
  if ((char)param_2[1] == '\0') {
    if (param_2[0x12] < 0) {
      puVar12 = &DAT_18034d714;
      goto LAB_1800f8b0f;
    }
    FUN_180012ac0(&local_f8,0x10,&DAT_18033f570);
  }
  else {
    puVar12 = &DAT_18034fa3c;
LAB_1800f8b0f:
    FUN_180012ac0(&local_f8,0x10,puVar12);
  }
  if (param_2[0x13] < 2) {
    local_100[0] = (float)((uint)local_100[0] & 0xffffff00);
  }
  else {
    FUN_180012ac0(local_100,8,&DAT_18034fa44);
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uStack_120 = CONCAT44(fVar17,uVar5);
  fVar15 = fVar2 * _DAT_18038106c + fVar15;
  fVar16 = fVar16 - *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x1238) * fVar4;
  local_128 = CONCAT44(local_104,uVar1);
  fVar17 = (float)FUN_180268ed0(&local_128);
  local_118 = fVar15;
  local_114 = fVar16;
  if ((((uint)fVar17 & 0xff000000) == 0) || ((char)local_f8 == '\0')) {
    local_110 = fVar15 + fVar4;
    local_10c = fVar16;
    if (((uint)fVar17 & 0xff000000) == 0) goto LAB_1800f8cac;
  }
  else {
    local_158 = (float *)&local_f8;
    local_128 = *(undefined8 *)(param_1 + 0x60);
    uStack_120 = *(undefined8 *)(param_1 + 0x68);
    local_140 = 0;
    local_148 = local_148 & 0xffffffff00000000;
    local_150 = 0;
    local_160 = (float *)&local_128;
    local_168 = fVar17;
    FUN_18029e990(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),param_1,
                  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x20),&local_118);
  }
  local_110 = fVar15 + fVar4;
  local_10c = fVar16;
  if ((char)local_f8 != '\0') {
    local_158 = (float *)&local_f8;
    local_128 = *(undefined8 *)(param_1 + 0x60);
    uStack_120 = *(undefined8 *)(param_1 + 0x68);
    local_140 = 0;
    local_148 = local_148 & 0xffffffff00000000;
    local_150 = 0;
    local_160 = (float *)&local_128;
    local_168 = fVar17;
    FUN_18029e990(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),param_1,
                  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x20),&local_110);
  }
LAB_1800f8cac:
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar6 = DAT_180381384;
  uVar1 = DAT_180381308;
  local_160 = (float *)&local_f8;
  local_138 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = (float *)0x0;
  local_168 = (float)DAT_180381384;
  FUN_18029e350(&local_128,*(undefined8 *)(*(longlong *)(lVar3 + 0xec0) + 0x1228),
                *(undefined4 *)(*(longlong *)(lVar3 + 0xec0) + 0x1238),DAT_180381308);
  fVar17 = DAT_180380ba8;
  fVar15 = (float)(int)((float)local_128 + DAT_180380ba8) + fVar15;
  if (local_100[0]._0_1_ != '\0') {
    fVar15 = fVar15 + fVar18;
    local_128 = DAT_1803fa910;
    uStack_120 = CONCAT44(param_6 * _DAT_1803fa91c,DAT_1803fa918);
    uVar8 = FUN_180268ed0(&local_128);
    local_118 = fVar15;
    local_114 = fVar16;
    if ((uVar8 & 0xff000000) != 0) {
      local_158 = local_100;
      local_128 = *(undefined8 *)(param_1 + 0x60);
      uStack_120 = *(undefined8 *)(param_1 + 0x68);
      local_140 = 0;
      local_148 = local_148 & 0xffffffff00000000;
      local_150 = 0;
      local_160 = (float *)&local_128;
      local_168 = (float)uVar8;
      FUN_18029e990(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),param_1,
                    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x20),&local_118);
    }
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_160 = local_100;
    local_138 = 0;
    local_148 = 0;
    local_150 = 0;
    local_158 = (float *)0x0;
    local_168 = (float)uVar6;
    FUN_18029e350(&local_128,*(undefined8 *)(*(longlong *)(lVar3 + 0xec0) + 0x1228),
                  *(undefined4 *)(*(longlong *)(lVar3 + 0xec0) + 0x1238),uVar1);
    fVar15 = (float)(int)((float)local_128 + fVar17) + fVar15;
  }
  fVar4 = DAT_180380fa8;
  if (*(longlong *)(param_2 + 6) != 0) {
    pfVar11 = (float *)(param_2 + 2);
    fVar15 = fVar2 * DAT_180380fa8 + fVar15;
    pfVar10 = pfVar11;
    if (0xf < *(ulonglong *)(param_2 + 8)) {
      pfVar10 = *(float **)pfVar11;
    }
    local_128 = DAT_1803fa900;
    uStack_120 = CONCAT44(param_6 * _DAT_1803fa90c,DAT_1803fa908);
    uVar8 = FUN_180268ed0(&local_128);
    local_118 = fVar15;
    local_114 = fVar16;
    if ((((uVar8 & 0xff000000) != 0) && (pfVar10 != (float *)0x0)) && (*(char *)pfVar10 != '\0')) {
      local_160 = (float *)&local_128;
      local_128 = *(undefined8 *)(param_1 + 0x60);
      uStack_120 = *(undefined8 *)(param_1 + 0x68);
      local_140 = 0;
      local_148 = local_148 & 0xffffffff00000000;
      local_150 = 0;
      local_168 = (float)uVar8;
      local_158 = pfVar10;
      FUN_18029e990(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),param_1,
                    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x20),&local_118);
    }
    if (0xf < *(ulonglong *)(param_2 + 8)) {
      pfVar11 = *(float **)pfVar11;
    }
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (pfVar11 == (float *)0x0) {
      fVar17 = 0.0;
    }
    else {
      local_138 = 0;
      local_148 = 0;
      local_150 = 0;
      local_158 = (float *)0x0;
      local_168 = (float)uVar6;
      local_160 = pfVar11;
      FUN_18029e350(&local_128,*(undefined8 *)(*(longlong *)(lVar3 + 0xec0) + 0x1228),
                    *(undefined4 *)(*(longlong *)(lVar3 + 0xec0) + 0x1238),uVar1);
      fVar17 = (float)(int)((float)local_128 + fVar17);
    }
    fVar15 = fVar15 + fVar17;
  }
  if (*(longlong *)(param_2 + 0xe) != 0) {
    plVar13 = (longlong *)(param_2 + 10);
    if (0xf < *(ulonglong *)(param_2 + 0x10)) {
      plVar13 = (longlong *)*plVar13;
    }
    local_128 = DAT_1803fa910;
    uStack_120 = CONCAT44(param_6 * _DAT_1803fa91c,DAT_1803fa918);
    local_168 = (float)FUN_180268ed0(&local_128);
    if (((((uint)local_168 & 0xff000000) != 0) && (plVar13 != (longlong *)0x0)) &&
       (*(char *)plVar13 != '\0')) {
      local_160 = (float *)&local_128;
      local_128 = *(undefined8 *)(param_1 + 0x60);
      uStack_120 = *(undefined8 *)(param_1 + 0x68);
      local_140 = 0;
      local_148 = local_148 & 0xffffffff00000000;
      local_150 = 0;
      local_158 = (float *)plVar13;
      local_118 = fVar2 * fVar4 + fVar15;
      local_114 = fVar16;
      FUN_18029e990(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),param_1,
                    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x20),&local_118);
    }
  }
  return;
}


