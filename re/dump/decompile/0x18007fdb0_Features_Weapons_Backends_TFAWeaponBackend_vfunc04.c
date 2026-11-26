// 0x18007fdb0  Features_Weapons_Backends_TFAWeaponBackend_vfunc04
// size=2914 thunk=false
// signature: undefined Features_Weapons_Backends_TFAWeaponBackend_vfunc04()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Features_Weapons_Backends_TFAWeaponBackend_vfunc04
          (float *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  float *pfVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  float local_160;
  longlong *local_158;
  undefined8 uStack_150;
  float *local_148;
  longlong local_140 [2];
  int local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  char local_110;
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined2 local_eb;
  undefined1 local_e9;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 *local_c8 [2];
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  float local_98;
  undefined8 local_94;
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  local_f8._0_4_ = (undefined4)param_3;
  local_f8._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
  local_168 = param_1;
  local_140[0] = param_4;
  local_c8[0] = param_2;
  local_b8[0] = param_4;
  if ((DAT_1803fa678 == (longlong *)0x0) ||
     (lVar5 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0), lVar5 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar5 + 8);
  }
  FUN_18002dc30(&local_128,uVar6);
  local_158 = (longlong *)0x0;
  uStack_150 = 0;
  local_148 = (float *)0x0;
  FUN_18001bcd0();
  if (local_158 == (longlong *)0x0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    local_f8 = (float *)CONCAT44(local_f8._4_4_,(undefined4)local_f8);
    goto LAB_18008080e;
  }
  fVar11 = 0.0;
  local_108 = 0.0;
  iVar3 = (**(code **)*local_158)();
  local_130 = iVar3;
  FUN_18001e2b0(param_3,local_158);
  FUN_18002d9c0(local_158[1],0xffffffff,"CalculateConeRecoil");
  cVar2 = (**(code **)(*local_158 + 0x138))(local_158,0xffffffff,6);
  if (cVar2 == '\0') {
LAB_18007ff1f:
    lVar5 = *local_158;
  }
  else {
    FUN_18001e2b0(param_3,local_158);
    iVar4 = FUN_180023180(local_158[1],1,1);
    lVar5 = *local_158;
    if (iVar4 == 0) {
      dVar9 = (double)(**(code **)(lVar5 + 0xc0))(local_158,0xffffffff);
      fVar11 = (float)dVar9;
      local_108 = fVar11;
      goto LAB_18007ff1f;
    }
  }
  (**(code **)(lVar5 + 0x10))(local_158,1);
  (**(code **)(*local_158 + 0x10))(local_158,1);
  iVar4 = (**(code **)*local_158)();
  while (iVar3 < iVar4) {
    (**(code **)(*local_158 + 0x10))(local_158,1);
    iVar4 = (**(code **)*local_158)();
  }
  param_1[8] = fVar11;
  if (DAT_1803fa608 == 0) {
    dVar9 = 0.0;
  }
  else {
    dVar9 = (double)DAT_1803de068 * *(double *)(DAT_1803fa608 + 0x28);
  }
  *(double *)(param_1 + 6) = dVar9;
  pfVar1 = param_1 + 10;
  *pfVar1 = 0.0;
  local_168 = param_1 + 9;
  *local_168 = 0.0;
  local_f8 = pfVar1;
  if (fVar11 <= 0.0) {
    *(undefined4 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0;
    goto LAB_18008080e;
  }
  fVar12 = 0.0;
  local_104 = 0.0;
  fVar13 = 0.0;
  local_100 = 0.0;
  fVar10 = 1.4013e-45;
  if (0 < (int)param_1[5]) {
    fVar10 = param_1[5];
  }
  iVar3 = (**(code **)*local_158)();
  local_130 = iVar3;
  FUN_18001e2b0(param_3,local_158);
  FUN_18002d9c0(local_158[1],0xffffffff,"ComputeBulletDeviation");
  cVar2 = (**(code **)(*local_158 + 0x138))(local_158,0xffffffff,6);
  if (cVar2 == '\0') {
    uVar6 = 1;
LAB_18008015a:
    lVar5 = *local_158;
  }
  else {
    FUN_18001e2b0(param_3,local_158);
    (**(code **)(*local_158 + 0xf0))(local_158,DAT_180380d08);
    (**(code **)(*local_158 + 0xf0))(local_158,(double)(int)fVar10);
    (**(code **)(*local_158 + 0xf0))(local_158,(double)fVar11);
    iVar4 = FUN_180023180(local_158[1],4,2);
    lVar5 = *local_158;
    if (iVar4 == 0) {
      dVar9 = (double)(**(code **)(lVar5 + 0xc0))(local_158,0xfffffffe);
      fVar12 = (float)dVar9;
      local_104 = fVar12;
      dVar9 = (double)(**(code **)(*local_158 + 0xc0))(local_158,0xffffffff);
      fVar13 = (float)dVar9;
      uVar6 = 2;
      local_100 = fVar13;
      goto LAB_18008015a;
    }
    uVar6 = 1;
  }
  (**(code **)(lVar5 + 0x10))(local_158,uVar6);
  (**(code **)(*local_158 + 0x10))(local_158,1);
  lVar5 = local_140[0];
  iVar4 = (**(code **)*local_158)();
  while (iVar3 < iVar4) {
    (**(code **)(*local_158 + 0x10))(local_158,1);
    iVar4 = (**(code **)*local_158)();
  }
  fVar11 = (float)((uint)fVar12 & (uint)_DAT_1803817c0);
  if ((DAT_180380fe4 < fVar11) ||
     (fVar10 = (float)((uint)fVar13 & (uint)_DAT_1803817c0), DAT_180380fe4 < fVar10)) {
    *(undefined4 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0;
    if (local_158 != (longlong *)0x0) {
      (**(code **)*local_158)();
      DAT_1803fa338 = local_148 != (float *)0x0;
      DAT_1803fa330 = local_f8;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = local_148;
      }
      DAT_1803fa339 = CONCAT13(uStack_ec,uStack_f0._1_3_);
      DAT_1803fa33d = local_eb;
      DAT_1803fa33f = local_e9;
    }
    if (local_110 == '\0') {
      return param_2;
    }
    if (DAT_1803faf78 == (code *)0x0) {
      return param_2;
    }
    (*DAT_1803faf78)(local_128,local_120,local_118,local_114);
    return param_2;
  }
  if ((DAT_180380948 <= fVar11) || (DAT_180380948 <= fVar10)) {
    *local_168 = fVar12;
    *pfVar1 = fVar13;
    FUN_1802d4050(lVar5 + 8,&local_d8);
    local_e8 = local_d8;
    local_e4 = local_d4;
    local_e0 = local_d0;
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    local_f8._0_4_ = 0;
    FUN_1802d4540(&local_e8,&local_f8);
    FUN_1802d3e70(&local_f8,local_b8,local_c8,local_a8);
    FUN_18007fc10(local_140,local_b8,local_a8,fVar12);
    FUN_18007fc10(&local_168,local_140,local_c8,fVar13);
    local_e8 = local_e8 - ((float)local_168 - local_d8);
    local_e4 = local_e4 - (local_168._4_4_ - local_d4);
    local_e0 = local_e0 - (local_160 - local_d0);
    (*(code *)PTR_FUN_1803da000)(&local_e8);
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    local_f8._0_4_ = 0;
    FUN_1802d4540(&local_e8,&local_f8);
    FUN_1802d3e70(&local_f8,local_b8,local_c8,local_a8);
    FUN_18007fc10(local_140,local_b8,local_a8,fVar12);
    FUN_18007fc10(&local_168,local_140,local_c8,fVar13);
    local_e8 = local_e8 - ((float)local_168 - local_d8);
    local_e4 = local_e4 - (local_168._4_4_ - local_d4);
    local_e0 = local_e0 - (local_160 - local_d0);
    (*(code *)PTR_FUN_1803da000)(&local_e8);
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    local_f8._0_4_ = 0;
    FUN_1802d4540(&local_e8,&local_f8);
    FUN_1802d3e70(&local_f8,local_b8,local_c8,local_a8);
    FUN_18007fc10(local_140,local_b8,local_a8,fVar12);
    FUN_18007fc10(&local_168,local_140,local_c8,fVar13);
    local_e8 = local_e8 - ((float)local_168 - local_d8);
    local_e4 = local_e4 - (local_168._4_4_ - local_d4);
    local_e0 = local_e0 - (local_160 - local_d0);
    (*(code *)PTR_FUN_1803da000)(&local_e8);
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    local_f8._0_4_ = 0;
    FUN_1802d4540(&local_e8,&local_f8);
    FUN_1802d3e70(&local_f8,local_b8,local_c8,local_a8);
    FUN_18007fc10(local_140,local_b8,local_a8,fVar12);
    FUN_18007fc10(&local_168,local_140,local_c8,fVar13);
    local_e8 = local_e8 - ((float)local_168 - local_d8);
    local_e4 = local_e4 - (local_168._4_4_ - local_d4);
    local_e0 = local_e0 - (local_160 - local_d0);
    (*(code *)PTR_FUN_1803da000)(&local_e8);
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    local_f8._0_4_ = 0;
    FUN_1802d4540(&local_e8,&local_f8);
    FUN_1802d3e70(&local_f8,local_b8,local_c8,local_a8);
    FUN_18007fc10(local_140,local_b8,local_a8,fVar12);
    FUN_18007fc10(&local_168,local_140,local_c8,fVar13);
    local_e8 = local_e8 - ((float)local_168 - local_d8);
    local_e4 = local_e4 - (local_168._4_4_ - local_d4);
    local_e0 = local_e0 - (local_160 - local_d0);
    (*(code *)PTR_FUN_1803da000)(&local_e8);
    local_94 = 0;
    local_98 = 0.0;
    FUN_1802d4540(&local_e8,&local_98);
    uVar7 = FUN_1802d3e00(*(float *)(lVar5 + 8) - local_98);
    uVar8 = FUN_180022110();
    *(undefined4 *)param_2 = uVar7;
    *(undefined4 *)((longlong)param_2 + 4) = uVar8;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    *(undefined4 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0;
  }
LAB_18008080e:
  if (local_158 != (longlong *)0x0) {
    (**(code **)*local_158)();
    DAT_1803fa338 = local_148 != (float *)0x0;
    DAT_1803fa330 = local_f8;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_148;
    }
    DAT_1803fa339 = CONCAT13(uStack_ec,uStack_f0._1_3_);
    DAT_1803fa33d = local_eb;
    DAT_1803fa33f = local_e9;
  }
  if ((local_110 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
    (*DAT_1803faf78)(local_128,local_120,local_118,local_114);
  }
  return param_2;
}


