// 0x180089640  Features_Weapons_Backends_TacRPWeaponBackend_vfunc25
// size=3845 thunk=false
// signature: undefined Features_Weapons_Backends_TacRPWeaponBackend_vfunc25()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001800896e2) */
/* WARNING: Removing unreachable block (ram,0x000180089700) */
/* WARNING: Removing unreachable block (ram,0x0001800896f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Weapons_Backends_TacRPWeaponBackend_vfunc25(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_2c8 [32];
  char local_2a8;
  char local_2a7;
  undefined1 local_2a6;
  undefined1 local_2a5;
  int local_2a4;
  float local_2a0 [2];
  undefined8 local_298;
  float local_290;
  longlong **local_288;
  undefined8 local_280;
  undefined8 local_278;
  float local_270;
  undefined8 local_268;
  float local_260;
  undefined8 local_258;
  float local_250;
  longlong local_248;
  float local_240;
  float local_23c;
  float local_238;
  float local_230;
  float local_22c;
  float local_228;
  undefined4 local_220;
  uint local_21c;
  uint local_218;
  longlong **local_210;
  undefined8 *local_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  longlong **local_1d8;
  undefined8 *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  longlong **local_168;
  undefined8 *local_160;
  longlong **local_158;
  undefined8 local_150;
  uint local_148;
  uint local_140;
  uint local_138;
  uint local_130;
  uint local_128;
  uint local_120;
  uint local_118;
  uint local_110;
  uint local_108;
  uint local_100;
  uint local_f8;
  longlong **local_f0;
  undefined8 *local_e8;
  uint local_e0;
  longlong **local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 uStack_b8;
  longlong **local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1803da4c0 ^ (ulonglong)auStack_2c8;
  local_c0 = (longlong *)0x0;
  uStack_b8 = 0;
  local_b0 = (longlong **)0x0;
  local_248 = param_1;
  local_c8 = param_2;
  FUN_18001bcd0(0,&local_c0);
  if (local_c0 == (longlong *)0x0) {
    return;
  }
  iVar6 = (**(code **)*local_c0)();
  local_2a4 = iVar6;
  cVar2 = FUN_18001e2b0(local_c8,local_c0);
  if (cVar2 == '\0') goto LAB_18008a449;
  local_210 = &local_c0;
  local_208 = &local_c8;
  local_1d8 = &local_c0;
  local_1d0 = &local_c8;
  local_f0 = &local_c0;
  local_e8 = &local_c8;
  local_158 = &local_c0;
  local_150 = &local_c8;
  local_168 = &local_c0;
  local_160 = &local_c8;
  local_288 = &local_c0;
  local_280 = &local_c8;
  local_d8 = &local_c0;
  local_d0 = &local_c8;
  FUN_18008a570(&local_210,"GetSpread",param_1 + 8);
  FUN_18008aae0(&local_168,"ShotgunPelletSpread",param_1 + 0xc);
  FUN_18008aae0(&local_168,"MuzzleVelocity",param_1 + 0x10);
  local_2a0[0] = 1.0;
  FUN_18008aae0(&local_168,&DAT_180347d28,local_2a0);
  *(int *)(param_1 + 0x14) = (int)local_2a0[0];
  local_2a8 = '\0';
  FUN_18008a690(&local_1d8,"IsShotgun",&local_2a8);
  if ((*(int *)(param_1 + 0x14) < 2) || (local_2a8 != '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 0x18) = uVar5;
  FUN_18008ac10(&local_288,"ShootEnt",param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  local_1c8 = 0;
  local_1c4 = 0;
  local_1c0 = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  local_1bc = 0;
  local_1b8 = 0;
  local_1b4 = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  local_240 = 0.0;
  local_23c = 0.0;
  local_238 = 0.0;
  local_230 = 0.0;
  local_22c = 0.0;
  local_228 = 0.0;
  local_220 = 0;
  local_21c = 0;
  local_218 = 0;
  cVar2 = FUN_18008a7a0(&local_f0,"GetFreeAimOffset",&local_240);
  cVar3 = FUN_18008a7a0(&local_f0,"GetSwayAngles",&local_230);
  cVar4 = FUN_18008ad70(&local_d8);
  if (((cVar2 != '\0') && (cVar3 != '\0')) && (cVar4 != '\0')) {
    local_1e8 = local_230 + local_240;
    local_1e4 = local_22c + local_23c;
    local_1e0 = local_228 + local_238;
    *(float *)(param_1 + 0x34) = local_1e8;
    *(float *)(param_1 + 0x38) = local_1e4;
    *(float *)(param_1 + 0x3c) = local_1e0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    FUN_180022190(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x40) = local_220;
    *(uint *)(param_1 + 0x44) = local_21c;
    *(uint *)(param_1 + 0x48) = local_218;
    local_148 = *(uint *)(param_1 + 0x34);
    if (((((local_148 & 0x7f800000) == 0x7f800000) ||
         (local_140 = *(uint *)(param_1 + 0x38), (local_140 & 0x7f800000) == 0x7f800000)) ||
        ((local_138 = *(uint *)(param_1 + 0x3c), (local_138 & 0x7f800000) == 0x7f800000 ||
         ((local_130 = *(uint *)(param_1 + 0x40), (local_130 & 0x7f800000) == 0x7f800000 ||
          (local_128 = local_21c, (local_21c & 0x7f800000) == 0x7f800000)))))) ||
       (local_120 = local_218, (local_218 & 0x7f800000) == 0x7f800000)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined1 *)(param_1 + 0x4c) = uVar5;
  }
  uVar5 = FUN_18008a940(&local_158);
  *(undefined1 *)(param_1 + 0x5c) = uVar5;
  local_1b0 = 0;
  local_1ac = 0;
  local_1a8 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  local_268 = 0;
  fVar14 = 0.0;
  local_260 = 0.0;
  bVar11 = false;
  local_2a6 = 0;
  FUN_18002d9c0(local_c0[1],0xffffffff,"GetShootDir");
  cVar2 = (**(code **)(*local_c0 + 0x138))(local_c0,0xffffffff,6);
  if (cVar2 == '\0') {
LAB_180089ce4:
    lVar9 = *local_c0;
  }
  else {
    FUN_18001e2b0(local_c8,local_c0);
    iVar7 = FUN_180023180(local_c0[1],1,1);
    lVar9 = *local_c0;
    if (iVar7 == 0) {
      cVar2 = (**(code **)(lVar9 + 0x138))(local_c0,0xffffffff,0xb);
      if (cVar2 != '\0') {
        puVar8 = (undefined8 *)(**(code **)(*local_c0 + 0x170))(local_c0,0xffffffff);
        uVar1 = *puVar8;
        fVar14 = *(float *)(puVar8 + 1);
        bVar11 = true;
        local_2a6 = 1;
        local_268._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        local_268._0_4_ = (float)uVar1;
        fVar12 = (float)local_268;
        fVar13 = local_268._4_4_;
        local_268 = uVar1;
        local_260 = fVar14;
      }
      goto LAB_180089ce4;
    }
  }
  (**(code **)(lVar9 + 0x10))(local_c0,1);
  fVar15 = 0.0;
  fVar16 = 0.0;
  local_258 = 0;
  fVar17 = 0.0;
  local_250 = 0.0;
  bVar10 = false;
  local_2a5 = 0;
  if (bVar11) {
    FUN_18002d9c0(local_c0[1],0xffffffff,"GetOwner");
    cVar2 = (**(code **)(*local_c0 + 0x138))(local_c0,0xffffffff,6);
    if (cVar2 == '\0') {
LAB_180089eac:
      lVar9 = *local_c0;
    }
    else {
      FUN_18001e2b0(local_c8,local_c0);
      iVar7 = FUN_180023180(local_c0[1],1,1);
      lVar9 = *local_c0;
      if (iVar7 == 0) {
        cVar2 = (**(code **)(lVar9 + 0x138))(local_c0,0xffffffff,9);
        if (cVar2 != '\0') {
          FUN_18002d9c0(local_c0[1],0xffffffff,"EyeAngles");
          cVar2 = (**(code **)(*local_c0 + 0x138))(local_c0,0xffffffff,6);
          lVar9 = *local_c0;
          if (cVar2 != '\0') {
            (**(code **)(lVar9 + 8))(local_c0,0xfffffffe);
            iVar7 = FUN_180023180(local_c0[1],1,1);
            lVar9 = *local_c0;
            if (iVar7 == 0) {
              cVar2 = (**(code **)(lVar9 + 0x138))(local_c0,0xffffffff,0xb);
              bVar10 = cVar2 != '\0';
              if (bVar10) {
                puVar8 = (undefined8 *)(**(code **)(*local_c0 + 0x170))(local_c0,0xffffffff);
                uVar1 = *puVar8;
                fVar17 = *(float *)(puVar8 + 1);
                local_2a5 = 1;
                local_258._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                local_258._0_4_ = (float)uVar1;
                fVar15 = (float)local_258;
                fVar16 = local_258._4_4_;
                local_258 = uVar1;
                local_250 = fVar17;
              }
              lVar9 = *local_c0;
            }
          }
          (**(code **)(lVar9 + 0x10))(local_c0,1);
        }
        goto LAB_180089eac;
      }
    }
    (**(code **)(lVar9 + 0x10))(local_c0,1);
    if (bVar10) {
      local_1f4 = fVar12 - fVar15;
      local_1f0 = fVar13 - fVar16;
      local_1ec = fVar14 - fVar17;
      *(float *)(param_1 + 0x1c) = local_1f4;
      *(float *)(param_1 + 0x20) = local_1f0;
      *(float *)(param_1 + 0x24) = local_1ec;
      FUN_180022190(param_1 + 0x1c);
      local_118 = *(uint *)(param_1 + 0x1c);
      if ((((local_118 & 0x7f800000) == 0x7f800000) ||
          (local_e0 = *(uint *)(param_1 + 0x20), (local_e0 & 0x7f800000) == 0x7f800000)) ||
         (local_f8 = *(uint *)(param_1 + 0x24), (local_f8 & 0x7f800000) == 0x7f800000)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (((!bVar11) || (DAT_180381094 < (float)(local_118 & _DAT_1803817c0))) ||
         (DAT_180381094 < (float)(*(uint *)(param_1 + 0x20) & _DAT_1803817c0))) {
        local_1a4 = 0;
        local_1a0 = 0;
        local_19c = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
    }
  }
  local_174 = 0;
  local_170 = 0;
  local_16c = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  local_2a7 = '\0';
  FUN_18008ac10(&local_288,"FreeAim",&local_2a7);
  lVar9 = FUN_180016fb0("tacrp_freeaim");
  if (lVar9 == 0) {
    bVar11 = true;
  }
  else {
    iVar7 = FUN_1800197a0(lVar9);
    bVar11 = iVar7 != 0;
  }
  if ((local_2a7 != '\0') && (bVar11)) {
    local_278 = 0;
    fVar14 = 0.0;
    local_270 = 0.0;
    FUN_18002d9c0(local_c0[1],0xffffffff,"ClientFreeAimAng");
    cVar2 = (**(code **)(*local_c0 + 0x138))(local_c0,0xffffffff,0xb);
    fVar12 = 0.0;
    fVar13 = 0.0;
    if (cVar2 != '\0') {
      puVar8 = (undefined8 *)(**(code **)(*local_c0 + 0x170))(local_c0,0xffffffff);
      uVar1 = *puVar8;
      fVar14 = *(float *)(puVar8 + 1);
      local_278._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_278._0_4_ = (float)uVar1;
      fVar12 = (float)local_278;
      fVar13 = local_278._4_4_;
      local_278 = uVar1;
      local_270 = fVar14;
    }
    (**(code **)(*local_c0 + 0x10))(local_c0,1);
    local_298 = 0;
    local_290 = 0.0;
    FUN_18002d9c0(local_c0[1],0xffffffff,"GetFreeAimAngle");
    cVar2 = (**(code **)(*local_c0 + 0x138))(local_c0,0xffffffff,6);
    if (cVar2 == '\0') {
LAB_18008a20e:
      lVar9 = *local_c0;
    }
    else {
      FUN_18001e2b0(local_c8,local_c0);
      iVar7 = FUN_180023180(local_c0[1],1,1);
      lVar9 = *local_c0;
      if (iVar7 == 0) {
        cVar2 = (**(code **)(lVar9 + 0x138))(local_c0,0xffffffff,0xb);
        if (cVar2 != '\0') {
          puVar8 = (undefined8 *)(**(code **)(*local_c0 + 0x170))(local_c0,0xffffffff);
          local_298 = *puVar8;
          local_290 = *(float *)(puVar8 + 1);
        }
        goto LAB_18008a20e;
      }
    }
    (**(code **)(lVar9 + 0x10))(local_c0,1);
    FUN_180022190(&local_298);
    local_200 = (float)local_298 - fVar12;
    local_1fc = local_298._4_4_ - fVar13;
    local_1f8 = local_290 - fVar14;
    *(float *)(param_1 + 0x28) = local_200;
    *(float *)(param_1 + 0x2c) = local_1fc;
    *(float *)(param_1 + 0x30) = local_1f8;
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_180022190(param_1 + 0x28);
    local_110 = *(uint *)(param_1 + 0x28);
    if ((((local_110 & 0x7f800000) == 0x7f800000) ||
        (local_100 = *(uint *)(param_1 + 0x2c), (local_100 & 0x7f800000) == 0x7f800000)) ||
       (local_108 = *(uint *)(param_1 + 0x30), (local_108 & 0x7f800000) == 0x7f800000)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (((!bVar11) || (DAT_180381024 < (float)(local_110 & _DAT_1803817c0))) ||
       (DAT_180381024 < (float)(*(uint *)(param_1 + 0x2c) & _DAT_1803817c0))) {
      local_18c = 0;
      local_188 = 0;
      local_184 = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  FUN_18008a690(&local_1d8,"GetReloading",param_1 + 0x5d);
  FUN_18008a690(&local_1d8,"GetJammed",param_1 + 0x5e);
  FUN_18008a690(&local_1d8,"GetSafe",param_1 + 0x5f);
  FUN_18008a690(&local_1d8,"GetCustomize",param_1 + 0x60);
  FUN_18008a570(&local_210,"GetCurrentFiremode",param_1 + 100);
  *(bool *)(param_1 + 0x61) = DAT_180380c50 < *(float *)(param_1 + 100);
  FUN_18008a570(&local_210,"GetRPM",param_1 + 0x68);
  FUN_18008aae0(&local_168,"PostBurstDelay",param_1 + 0x6c);
  (**(code **)(*local_c0 + 0x10))(local_c0,1);
LAB_18008a449:
  iVar7 = (**(code **)*local_c0)();
  while (iVar6 < iVar7) {
    (**(code **)(*local_c0 + 0x10))(local_c0,1);
    iVar7 = (**(code **)*local_c0)();
  }
  if (local_c0 != (longlong *)0x0) {
    (**(code **)*local_c0)();
    if (local_b0 == (longlong **)0x0) {
      DAT_1803fa330 = local_288;
      DAT_1803fa339 = local_280._1_4_;
      DAT_1803fa33d = local_280._5_2_;
    }
    else {
      DAT_1803fa330 = local_b0;
      DAT_1803fa339 = local_150._1_4_;
      DAT_1803fa33d = local_150._5_2_;
      local_280._7_1_ = local_150._7_1_;
    }
    DAT_1803fa338 = local_b0 != (longlong **)0x0;
    DAT_1803fa33f = local_280._7_1_;
  }
  return;
}


