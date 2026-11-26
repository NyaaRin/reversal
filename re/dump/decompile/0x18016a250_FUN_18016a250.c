// 0x18016a250  FUN_18016a250
// size=1773 thunk=false
// signature: undefined FUN_18016a250()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18016a250(longlong *param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  
  fVar7 = DAT_180380ac0;
  fVar1 = param_2[1];
  fVar12 = *param_2;
  fVar2 = param_2[3];
  fVar3 = param_2[2];
  lVar5 = *param_1;
  iVar4 = *(int *)(lVar5 + 0x7c);
  fVar9 = fVar3 - fVar12;
  if (fVar2 - fVar1 <= fVar3 - fVar12) {
    fVar9 = fVar2 - fVar1;
  }
  fVar11 = fVar9 * _DAT_180380a64;
  if (DAT_180381078 <= fVar9 * _DAT_180380a64) {
    fVar11 = DAT_180381078;
  }
  local_104 = fVar1;
  if (iVar4 != 1) {
    if (iVar4 == 2) {
      local_108 = fVar3;
      FUN_180294c90(*(undefined8 *)param_1[1],param_2,&local_108,param_3,param_4);
      local_108 = fVar12;
      local_104 = fVar2;
    }
    else {
      if (iVar4 != 3) {
        FUN_180294f00(*(undefined8 *)param_1[1],param_2,param_2 + 2,param_3,
                      *(undefined4 *)(lVar5 + 0x70),param_4,0xf);
        return;
      }
      local_108 = fVar12;
      local_104 = fVar2;
      FUN_180294c90(*(undefined8 *)param_1[1],param_2,&local_108,param_3,param_4);
      local_108 = fVar3;
      local_104 = fVar1;
    }
    FUN_180294c90(*(undefined8 *)param_1[1],&local_108,param_2 + 2,param_3,param_4);
    return;
  }
  fVar9 = fVar9 * DAT_180380ac0 - DAT_180380d30;
  if (fVar9 <= fVar11) {
    fVar11 = fVar9;
  }
  if (fVar11 < DAT_180380d30) {
    FUN_180294f00(*(undefined8 *)param_1[1],param_2,param_2 + 2,param_3,0,param_4,0xf);
    return;
  }
  fVar9 = *(float *)(lVar5 + 0x70);
  if (0.0 <= fVar9) {
    fVar10 = fVar11 - DAT_180380bb0;
    if (fVar9 <= fVar11 - DAT_180380bb0) {
      fVar10 = fVar9;
    }
    if ((DAT_180380ac0 < fVar10) && (DAT_180380f40 <= fVar11)) {
      bVar6 = true;
      goto LAB_18016a453;
    }
  }
  else {
    fVar10 = 0.0;
  }
  bVar6 = false;
LAB_18016a453:
  local_108 = fVar11 + fVar12;
  local_f0 = fVar12 + fVar10;
  local_ec = fVar1;
  local_e8 = local_108;
  local_e4 = local_f0;
  FUN_180294c90(*(undefined8 *)param_1[1],&local_f0,&local_108,param_3,param_4);
  local_104 = fVar11 + fVar1;
  fVar9 = fVar1 + fVar10;
  local_108 = fVar12;
  local_100 = fVar12;
  local_fc = fVar9;
  local_f0 = local_104;
  FUN_180294c90(*(undefined8 *)param_1[1],&local_100,&local_108,param_3,param_4);
  if (bVar6) {
    local_108 = local_e4;
    local_104 = fVar9;
    if (fVar7 <= fVar10) {
      FUN_180294060(*(longlong *)param_1[1],&local_108,fVar10,DAT_180380e48,DAT_180380ef0,0xc);
    }
    else {
      FUN_18020dc30(*(longlong *)param_1[1] + 0x50);
    }
    lVar5 = *(longlong *)param_1[1];
    FUN_1802929d0(lVar5,*(undefined8 *)(lVar5 + 0x58),*(undefined4 *)(lVar5 + 0x50),param_3,param_4,
                  0);
    *(undefined4 *)(lVar5 + 0x50) = 0;
  }
  local_108 = fVar3 - fVar11;
  fVar12 = fVar3 - fVar10;
  local_100 = fVar12;
  local_fc = fVar1;
  local_f8 = local_108;
  local_f4 = fVar1;
  FUN_180294c90(*(undefined8 *)param_1[1],&local_f8,&local_100,param_3,param_4);
  local_f4 = local_f0;
  local_100 = fVar3;
  local_fc = fVar9;
  local_f8 = fVar3;
  FUN_180294c90(*(undefined8 *)param_1[1],&local_100,&local_f8,param_3,param_4);
  if (bVar6) {
    local_f0 = fVar12;
    local_ec = fVar9;
    if (fVar7 <= fVar10) {
      FUN_180294060(*(longlong *)param_1[1],&local_f0,fVar10,DAT_180380ef0,DAT_180380f70,0xc);
    }
    else {
      FUN_18020dc30(*(longlong *)param_1[1] + 0x50);
    }
    lVar5 = *(longlong *)param_1[1];
    FUN_1802929d0(lVar5,*(undefined8 *)(lVar5 + 0x58),*(undefined4 *)(lVar5 + 0x50),param_3,param_4,
                  0);
    *(undefined4 *)(lVar5 + 0x50) = 0;
  }
  fVar1 = local_e4;
  local_f8 = local_e8;
  local_100 = local_e4;
  local_fc = fVar2;
  local_f4 = fVar2;
  FUN_180294c90(*(undefined8 *)param_1[1],&local_100,&local_f8,param_3,param_4);
  local_100 = *param_2;
  fVar9 = fVar2 - fVar10;
  local_fc = fVar2 - fVar11;
  local_f8 = local_100;
  local_f4 = fVar9;
  local_e8 = local_fc;
  FUN_180294c90(*(undefined8 *)param_1[1],&local_100,&local_f8,param_3,param_4);
  uVar8 = DAT_180380c78;
  if (bVar6) {
    local_f0 = fVar1;
    local_ec = fVar9;
    if (fVar7 <= fVar10) {
      FUN_180294060(*(longlong *)param_1[1],&local_f0,fVar10,DAT_180380c78,DAT_180380e48,0xc);
    }
    else {
      FUN_18020dc30(*(longlong *)param_1[1] + 0x50);
    }
    lVar5 = *(longlong *)param_1[1];
    FUN_1802929d0(lVar5,*(undefined8 *)(lVar5 + 0x58),*(undefined4 *)(lVar5 + 0x50),param_3,param_4,
                  0);
    *(undefined4 *)(lVar5 + 0x50) = 0;
  }
  local_100 = local_108;
  local_fc = fVar2;
  local_f8 = fVar12;
  local_f4 = fVar2;
  FUN_180294c90(*(undefined8 *)param_1[1],&local_100,&local_f8,param_3,param_4);
  local_fc = local_e8;
  local_100 = fVar3;
  local_f8 = fVar3;
  local_f4 = fVar9;
  FUN_180294c90(*(undefined8 *)param_1[1],&local_100,&local_f8,param_3,param_4);
  if (bVar6) {
    local_108 = fVar12;
    local_104 = fVar9;
    if (fVar7 <= fVar10) {
      FUN_180294060(*(longlong *)param_1[1],&local_108,fVar10,0,uVar8,0xc);
    }
    else {
      FUN_18020dc30(*(longlong *)param_1[1] + 0x50);
    }
    lVar5 = *(longlong *)param_1[1];
    FUN_1802929d0(lVar5,*(undefined8 *)(lVar5 + 0x58),*(undefined4 *)(lVar5 + 0x50),param_3,param_4,
                  0);
    *(undefined4 *)(lVar5 + 0x50) = 0;
  }
  return;
}


