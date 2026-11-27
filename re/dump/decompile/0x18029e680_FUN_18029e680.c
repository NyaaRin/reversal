// 0x18029e680  FUN_18029e680
// size=784 thunk=false
// signature: undefined FUN_18029e680()
// status: ok


void FUN_18029e680(undefined8 param_1,undefined8 param_2,float param_3,float *param_4,uint param_5,
                  undefined2 param_6,float *param_7)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  
  lVar3 = FUN_18029db30(param_1,param_3,DAT_180381384);
  puVar4 = (uint *)FUN_18029d9a0(lVar3,param_6);
  if ((puVar4 != (uint *)0x0) && ((*puVar4 & 2) != 0)) {
    uVar2 = param_5 | 0xffffff;
    if ((*puVar4 & 1) == 0) {
      uVar2 = param_5;
    }
    fVar7 = DAT_180380bb0;
    if (0.0 <= param_3) {
      fVar7 = param_3 / *(float *)(lVar3 + 0x14);
    }
    fVar9 = fVar7 * (float)puVar4[2] + (float)(int)*param_4;
    fVar8 = fVar7 * (float)puVar4[4] + (float)(int)*param_4;
    if ((param_7 == (float *)0x0) ||
       ((fVar9 < param_7[2] || fVar9 == param_7[2] && (*param_7 <= fVar8)))) {
      fVar11 = (float)puVar4[9];
      fVar12 = (float)puVar4[8];
      fVar6 = (float)puVar4[7];
      fVar5 = (float)puVar4[6];
      fVar10 = fVar7 * (float)puVar4[3] + (float)(int)param_4[1];
      fVar7 = fVar7 * (float)puVar4[5] + (float)(int)param_4[1];
      if (param_7 != (float *)0x0) {
        fVar1 = *param_7;
        if (fVar9 < fVar1) {
          fVar5 = (DAT_180380bb0 - (fVar8 - fVar1) / (fVar8 - fVar9)) * (fVar12 - fVar5) + fVar5;
          fVar9 = fVar1;
        }
        fVar1 = param_7[1];
        if (fVar10 < fVar1) {
          fVar6 = (DAT_180380bb0 - (fVar7 - fVar1) / (fVar7 - fVar10)) * (fVar11 - fVar6) + fVar6;
          fVar10 = fVar1;
        }
        fVar1 = param_7[2];
        if (fVar1 < fVar8) {
          fVar12 = ((fVar1 - fVar9) / (fVar8 - fVar9)) * (fVar12 - fVar5) + fVar5;
          fVar8 = fVar1;
        }
        fVar1 = param_7[3];
        if (fVar1 < fVar7) {
          fVar11 = ((fVar1 - fVar10) / (fVar7 - fVar10)) * (fVar11 - fVar6) + fVar6;
          fVar7 = fVar1;
        }
        if (fVar7 <= fVar10) {
          return;
        }
      }
      FUN_1802927a0(param_2,6,4);
      local_a8 = fVar12;
      local_a4 = fVar11;
      local_a0 = fVar5;
      local_9c = fVar6;
      local_98 = fVar8;
      local_94 = fVar7;
      local_90 = fVar9;
      local_8c = fVar10;
      FUN_180292880(param_2,&local_90,&local_98,&local_a0,&local_a8,uVar2);
    }
  }
  return;
}


