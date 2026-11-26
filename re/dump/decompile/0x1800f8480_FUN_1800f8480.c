// 0x1800f8480  FUN_1800f8480
// size=658 thunk=false
// signature: undefined FUN_1800f8480()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800f8480(longlong param_1,int *param_2,undefined8 param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined8 local_80;
  float local_78;
  float local_74;
  
  uVar1 = DAT_180380cd0;
  fVar6 = DAT_180380c50;
  pfVar4 = &local_88;
  local_84 = 1.5;
  local_88 = 0.75;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar4 = &DAT_1803da6a4;
  }
  local_80 = param_3;
  uVar2 = local_80;
  pfVar3 = &local_84;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar3 = pfVar4;
  }
  fVar5 = *pfVar3;
  fVar8 = (float)param_3;
  local_80._4_4_ = (float)((ulonglong)param_3 >> 0x20);
  local_80 = uVar2;
  if ((char)param_2[1] == '\0') {
    if (*param_2 == 2) {
      if ((param_4 & 0xff000000) == 0) {
        return;
      }
      if (fVar5 * _DAT_180380e64 < DAT_180380ac0) {
        return;
      }
      FUN_180293e00(param_1,&local_80,fVar5 * _DAT_180380e64 - DAT_180380ac0,0,0x30);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
      FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),
                    param_4 & 0xffffffff,fVar6,0x200);
    }
    else {
      fVar6 = DAT_180380bb0;
      if (*param_2 == 1) {
        fVar6 = DAT_180381384;
      }
      local_94 = local_80._4_4_;
      local_90 = fVar8 - fVar5 * DAT_180380e4c * fVar6;
      local_74 = fVar5 * DAT_180380eb8 + local_80._4_4_;
      local_8c = local_80._4_4_ - fVar5 * DAT_180380eb8;
      local_98 = fVar5 * DAT_180380e9c * fVar6 + fVar8;
      if ((param_4 & 0xff000000) == 0) {
        return;
      }
      local_78 = local_90;
      FUN_18020dc30(param_1 + 0x50,&local_90);
      FUN_18020dc30(param_1 + 0x50,&local_98);
      FUN_18020dc30(param_1 + 0x50,&local_78);
      FUN_1802938c0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),
                    param_4 & 0xffffffff);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  else {
    fVar5 = fVar5 * _DAT_180380e98;
    fVar7 = fVar5 + local_80._4_4_;
    fVar6 = local_80._4_4_ - fVar5;
    local_98 = fVar5 + fVar8;
    local_94 = fVar7;
    local_90 = fVar8 - fVar5;
    local_8c = fVar6;
    FUN_180294c90(param_1,&local_90,&local_98,param_4,DAT_180380cd0);
    local_98 = fVar8 - fVar5;
    local_94 = fVar7;
    local_90 = fVar5 + fVar8;
    local_8c = fVar6;
    FUN_180294c90(param_1,&local_98,&local_90,param_4 & 0xffffffff,uVar1);
  }
  return;
}


