// 0x180128770  FUN_180128770
// size=868 thunk=false
// signature: undefined FUN_180128770()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180128770(longlong param_1,float *param_2,int param_3,int param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_e8;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  float local_cc;
  float local_c8 [6];
  float local_b0;
  
  fVar3 = DAT_180380bb0;
  if (0 < param_4) {
    fVar1 = param_2[3];
    fVar13 = *param_2 - DAT_180380e28;
    fVar2 = param_2[1];
    fVar14 = (*param_2 - DAT_180380e9c) - DAT_180380e9c;
    fVar12 = fVar1 - DAT_180380bb0;
    local_c8[2] = 1.0;
    local_c8[0] = 0.0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8[1] = (float)param_3 / (float)param_4;
    local_e8 = CONCAT44(fVar2,fVar14);
    local_b0 = fVar13 - DAT_180380bb0;
    local_cc = param_5 * DAT_180380b10;
    pfVar8 = local_c8;
    if (0.0 <= local_c8[1]) {
      pfVar8 = local_c8 + 1;
    }
    pfVar7 = local_c8 + 2;
    if (local_c8[1] <= DAT_180380bb0) {
      pfVar7 = pfVar8;
    }
    fVar11 = *pfVar7;
    local_e0 = fVar13;
    local_dc = fVar1;
    uVar5 = FUN_180268ed0(&local_d8);
    uVar4 = DAT_180380d30;
    FUN_180295000(param_1,&local_e8,&local_e0,uVar5,DAT_180380d30,0);
    local_cc = param_5;
    local_d0 = 0;
    local_d8 = CONCAT44(fVar11,fVar3 - fVar11);
    fVar11 = (fVar12 - (fVar2 + fVar3)) * fVar11;
    local_e8 = CONCAT44(fVar12 - fVar11,fVar14 + fVar3);
    local_e0 = local_b0;
    if (0.0 < fVar11) {
      local_dc = fVar12;
      uVar5 = FUN_180268ed0(&local_d8);
      FUN_180295000(param_1,&local_e8,&local_e0,uVar5,fVar3,0);
    }
    local_dc = param_5 * _DAT_180380b48;
    local_e8 = 0;
    local_e0 = 0.0;
    uVar6 = FUN_180268ed0(&local_e8);
    if ((uVar6 & 0xff000000) != 0) {
      if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
        puVar10 = &local_e8;
        local_d8 = CONCAT44(fVar2 + DAT_180380ac0,fVar14 + DAT_180380ac0);
        puVar9 = &local_d8;
        local_e8 = CONCAT44(fVar1 - _DAT_180380abc,fVar13 - _DAT_180380abc);
      }
      else {
        local_e8 = CONCAT44(fVar2 + DAT_180380ac0,fVar14 + DAT_180380ac0);
        puVar10 = &local_d8;
        puVar9 = &local_e8;
        local_d8 = CONCAT44(fVar1 - DAT_180380ac0,fVar13 - DAT_180380ac0);
      }
      FUN_180294990(param_1,puVar9,puVar10,uVar4,0);
      FUN_1802929d0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),uVar6,
                    fVar3,0x200);
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
  return;
}


