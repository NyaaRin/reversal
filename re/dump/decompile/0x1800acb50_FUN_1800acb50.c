// 0x1800acb50  FUN_1800acb50
// size=842 thunk=false
// signature: undefined FUN_1800acb50()
// status: ok


undefined8
FUN_1800acb50(float *param_1,float *param_2,float param_3,float param_4,float *param_5,
             float *param_6,undefined8 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_98;
  float local_94;
  float local_90;
  
  *param_5 = *param_1;
  param_5[1] = param_1[1];
  param_5[2] = param_1[2];
  *param_6 = 0.0;
  fVar6 = DAT_180380ac0;
  DAT_1804236d8 = 0.0;
  DAT_1804236c0 = 0;
  DAT_1804236b4 = param_4;
  if (0.0 < param_4) {
    iVar2 = 0;
    fVar4 = DAT_180380ac0;
    fVar7 = DAT_180380ac0;
    if (DAT_180380ac0 <= param_3) {
      fVar4 = param_3;
      fVar7 = param_3;
    }
    do {
      if (param_4 < fVar4) {
        return 0;
      }
      local_98 = fVar4 * *param_2 + *param_1;
      local_94 = fVar4 * param_2[1] + param_1[1];
      local_90 = fVar4 * param_2[2] + param_1[2];
      cVar1 = FUN_1800abd90(&local_98,param_7,param_8);
      if (cVar1 == '\0') {
        fVar7 = fVar4 - fVar7;
        fVar5 = (fVar7 + fVar4) * fVar6;
        local_98 = fVar5 * *param_2 + *param_1;
        local_94 = fVar5 * param_2[1] + param_1[1];
        local_90 = fVar5 * param_2[2] + param_1[2];
        cVar1 = FUN_1800abd90(&local_98,param_7,param_8);
        fVar3 = fVar5;
        if (cVar1 != '\0') {
          fVar3 = fVar4;
          fVar7 = fVar5;
        }
        fVar5 = (fVar3 + fVar7) * fVar6;
        local_98 = fVar5 * *param_2 + *param_1;
        local_94 = fVar5 * param_2[1] + param_1[1];
        local_90 = fVar5 * param_2[2] + param_1[2];
        cVar1 = FUN_1800abd90(&local_98,param_7,param_8);
        fVar4 = fVar5;
        if (cVar1 != '\0') {
          fVar4 = fVar3;
          fVar7 = fVar5;
        }
        fVar5 = (fVar4 + fVar7) * fVar6;
        local_98 = fVar5 * *param_2 + *param_1;
        local_94 = fVar5 * param_2[1] + param_1[1];
        local_90 = fVar5 * param_2[2] + param_1[2];
        cVar1 = FUN_1800abd90(&local_98,param_7,param_8);
        fVar3 = fVar5;
        if (cVar1 != '\0') {
          fVar3 = fVar4;
          fVar7 = fVar5;
        }
        fVar5 = (fVar3 + fVar7) * fVar6;
        local_98 = fVar5 * *param_2 + *param_1;
        local_94 = fVar5 * param_2[1] + param_1[1];
        local_90 = fVar5 * param_2[2] + param_1[2];
        cVar1 = FUN_1800abd90(&local_98,param_7,param_8);
        fVar4 = fVar5;
        if (cVar1 != '\0') {
          fVar4 = fVar3;
          fVar7 = fVar5;
        }
        fVar6 = (fVar4 + fVar7) * fVar6;
        local_98 = fVar6 * *param_2 + *param_1;
        local_94 = fVar6 * param_2[1] + param_1[1];
        local_90 = fVar6 * param_2[2] + param_1[2];
        cVar1 = FUN_1800abd90(&local_98,param_7,param_8);
        DAT_1804236d8 = fVar4;
        if (cVar1 == '\0') {
          DAT_1804236d8 = fVar6;
        }
        *param_6 = DAT_1804236d8;
        DAT_1804236c0 = 1;
        fVar3 = DAT_1804236d8 * param_2[2];
        fVar7 = DAT_1804236d8 * *param_2;
        fVar6 = param_1[2];
        fVar4 = *param_1;
        param_5[1] = DAT_1804236d8 * param_2[1] + param_1[1];
        param_5[2] = fVar3 + fVar6;
        *param_5 = fVar7 + fVar4;
        return 1;
      }
      iVar2 = iVar2 + 1;
      fVar4 = fVar4 + fVar7;
    } while (iVar2 < 0x40);
  }
  return 0;
}


