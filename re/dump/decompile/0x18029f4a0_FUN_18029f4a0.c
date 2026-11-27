// 0x18029f4a0  FUN_18029f4a0
// size=1441 thunk=false
// signature: undefined FUN_18029f4a0()
// status: ok


void FUN_18029f4a0(longlong param_1,float *param_2,undefined4 param_3,float param_4,float param_5,
                  float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  
  fVar4 = DAT_180380bb0;
  if (param_5 < param_4) {
    return;
  }
  fVar1 = param_2[3];
  fVar2 = param_2[1];
  local_c8 = param_5;
  local_c4 = fVar1;
  local_c0 = param_4;
  local_bc = fVar2;
  if (param_6 == 0.0) {
    FUN_180295000(param_1,&local_c0,&local_c8,param_3,0,0);
    return;
  }
  fVar3 = *param_2;
  fVar7 = (fVar1 - fVar2) * DAT_180380ac0;
  fVar9 = (param_2[2] - fVar3) * DAT_180380ac0;
  if (fVar7 <= fVar9) {
    fVar9 = fVar7;
  }
  fVar9 = fVar9 - DAT_180380bb0;
  if (0.0 <= fVar9) {
    if (fVar9 <= param_6) {
      param_6 = fVar9;
    }
  }
  else {
    param_6 = 0.0;
  }
  fVar10 = DAT_180380bb0 / param_6;
  fVar7 = DAT_180380bb0 - (param_4 - fVar3) * fVar10;
  fVar9 = DAT_180380c78;
  if (0.0 < fVar7) {
    if (fVar7 < DAT_180380bb0) {
      fVar9 = acosf(fVar7);
    }
    else {
      fVar9 = 0.0;
    }
  }
  fVar8 = fVar4 - (param_5 - fVar3) * fVar10;
  fVar7 = DAT_180380c78;
  if (0.0 < fVar8) {
    if (fVar8 < fVar4) {
      fVar7 = acosf(fVar8);
    }
    else {
      fVar7 = 0.0;
    }
  }
  fVar5 = DAT_180380e48;
  fVar8 = DAT_180380ac0;
  fVar11 = param_4;
  if (param_4 <= fVar3 + param_6) {
    fVar11 = fVar3 + param_6;
  }
  if (fVar9 == fVar7) {
    local_c0 = fVar11;
    local_bc = fVar1;
    FUN_18020dc30(param_1 + 0x50,&local_c0);
    local_c0 = fVar11;
    local_bc = fVar2;
    FUN_18020dc30(param_1 + 0x50,&local_c0);
    fVar8 = DAT_180380ac0;
  }
  else if ((fVar9 == 0.0) && (fVar7 == DAT_180380c78)) {
    local_c4 = fVar1 - param_6;
    local_c8 = fVar11;
    if (DAT_180380ac0 <= param_6) {
      FUN_180293e00(param_1,&local_c8,param_6,0xc,0x18);
    }
    else {
      FUN_18020dc30(param_1 + 0x50);
    }
    local_c4 = param_6 + fVar2;
    if (fVar8 <= param_6) {
      local_c8 = fVar11;
      FUN_180293e00(param_1,&local_c8,param_6,0x18,0x24);
    }
    else {
      local_c8 = fVar11;
      FUN_18020dc30(param_1 + 0x50);
    }
  }
  else {
    local_bc = fVar1 - param_6;
    local_c0 = fVar11;
    FUN_1802941e0(param_1,&local_c0,param_6,DAT_180380e48 - fVar7,DAT_180380e48 - fVar9,0);
    local_bc = param_6 + fVar2;
    local_c0 = fVar11;
    FUN_1802941e0(param_1,&local_c0,param_6,fVar9 + fVar5,fVar7 + fVar5,0);
    fVar8 = DAT_180380ac0;
  }
  if (param_5 <= param_6 + *param_2) goto LAB_18029f9c1;
  fVar3 = param_2[2];
  fVar7 = fVar4 - (fVar3 - param_5) * fVar10;
  fVar9 = DAT_180380c78;
  if (0.0 < fVar7) {
    if (fVar7 < fVar4) {
      fVar9 = acosf(fVar7);
    }
    else {
      fVar9 = 0.0;
    }
  }
  fVar10 = fVar4 - (fVar3 - param_4) * fVar10;
  fVar7 = DAT_180380c78;
  if (0.0 < fVar10) {
    if (fVar10 < fVar4) {
      fVar7 = acosf(fVar10);
    }
    else {
      fVar7 = 0.0;
    }
  }
  if (fVar3 - param_6 <= param_5) {
    param_5 = fVar3 - param_6;
  }
  if (fVar9 == fVar7) {
    local_c0 = param_5;
    local_bc = fVar2;
    FUN_18020dc30(param_1 + 0x50,&local_c0);
    pfVar6 = &local_c0;
    local_c0 = param_5;
    local_bc = fVar1;
  }
  else {
    if ((fVar9 != 0.0) || (fVar7 != DAT_180380c78)) {
      local_bc = param_6 + fVar2;
      local_c0 = param_5;
      FUN_1802941e0(param_1,&local_c0,param_6,(uint)fVar7 ^ DAT_1803817f0,
                    (uint)fVar9 ^ DAT_1803817f0,0);
      local_bc = fVar1 - param_6;
      local_c0 = param_5;
      FUN_1802941e0(param_1,&local_c0,param_6,fVar9,fVar7,0);
      goto LAB_18029f9c1;
    }
    local_c4 = param_6 + fVar2;
    local_c8 = param_5;
    if (fVar8 <= param_6) {
      FUN_180293e00(param_1,&local_c8,param_6,0x24,0x30);
    }
    else {
      FUN_18020dc30(param_1 + 0x50);
    }
    pfVar6 = &local_c8;
    local_c4 = fVar1 - param_6;
    local_c8 = param_5;
    if (fVar8 <= param_6) {
      FUN_180293e00(param_1,pfVar6,param_6,0,0xc);
      goto LAB_18029f9c1;
    }
  }
  FUN_18020dc30(param_1 + 0x50,pfVar6);
LAB_18029f9c1:
  FUN_1802938c0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_3);
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}


