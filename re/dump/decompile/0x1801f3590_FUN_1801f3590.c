// 0x1801f3590  FUN_1801f3590
// size=1082 thunk=false
// signature: undefined FUN_1801f3590()
// status: ok


void FUN_1801f3590(float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_3[1];
  fVar2 = param_1[4];
  fVar3 = *param_1;
  fVar5 = param_3[2];
  fVar6 = param_1[8];
  fVar7 = *param_3;
  fVar8 = DAT_180380bb0 - param_4;
  fVar4 = fVar1 * fVar2 + fVar7 * fVar3 + fVar5 * fVar6;
  *param_1 = (fVar1 * fVar6 - fVar5 * fVar2) * param_5 + fVar3 * param_4 + fVar4 * fVar7 * fVar8;
  param_1[4] = (fVar5 * fVar3 - fVar7 * fVar6) * param_5 + fVar2 * param_4 + fVar4 * fVar1 * fVar8;
  param_1[8] = (fVar7 * fVar2 - fVar1 * fVar3) * param_5 + fVar6 * param_4 + fVar4 * fVar5 * fVar8;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_1[9];
  fVar5 = *param_3;
  fVar6 = param_1[1];
  fVar7 = param_1[5];
  fVar4 = fVar1 * fVar7 + fVar5 * fVar6 + fVar2 * fVar3;
  param_1[1] = (fVar1 * fVar3 - fVar2 * fVar7) * param_5 + fVar6 * param_4 + fVar4 * fVar5 * fVar8;
  param_1[5] = (fVar2 * fVar6 - fVar5 * fVar3) * param_5 + fVar7 * param_4 + fVar4 * fVar1 * fVar8;
  param_1[9] = (fVar5 * fVar7 - fVar1 * fVar6) * param_5 + fVar3 * param_4 + fVar4 * fVar2 * fVar8;
  fVar1 = param_1[2];
  fVar2 = param_1[6];
  fVar3 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_1[10];
  fVar7 = param_3[2];
  fVar4 = fVar2 * fVar5 + fVar1 * fVar3 + fVar6 * fVar7;
  param_1[2] = (fVar6 * fVar5 - fVar2 * fVar7) * param_5 + fVar1 * param_4 + fVar3 * fVar4 * fVar8;
  param_1[6] = (fVar1 * fVar7 - fVar6 * fVar3) * param_5 + fVar2 * param_4 + fVar5 * fVar4 * fVar8;
  param_1[10] = (fVar2 * fVar3 - fVar1 * fVar5) * param_5 + fVar6 * param_4 + fVar7 * fVar4 * fVar8;
  fVar1 = *param_3;
  fVar2 = param_3[2];
  fVar3 = param_3[1];
  fVar4 = param_1[3] - *param_2;
  fVar5 = param_1[7] - param_2[1];
  fVar7 = param_1[0xb] - param_2[2];
  fVar6 = fVar1 * fVar4 + fVar3 * fVar5 + fVar2 * fVar7;
  param_1[3] = (fVar3 * fVar7 - fVar2 * fVar5) * param_5 + fVar4 * param_4 + fVar1 * fVar6 * fVar8 +
               *param_2;
  param_1[7] = (fVar2 * fVar4 - fVar1 * fVar7) * param_5 + fVar5 * param_4 + fVar3 * fVar6 * fVar8 +
               param_2[1];
  param_1[0xb] = (fVar1 * fVar5 - fVar3 * fVar4) * param_5 + fVar7 * param_4 + fVar2 * fVar6 * fVar8
                 + param_2[2];
  return;
}


