// 0x18015e7f0  FUN_18015e7f0
// size=726 thunk=false
// signature: undefined FUN_18015e7f0()
// status: ok


void FUN_18015e7f0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar6 = (param_3 * DAT_180380e48) / DAT_180381188;
  fVar4 = cosf(fVar6);
  fVar5 = sinf(fVar6);
  fVar6 = param_2[2];
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar7 = DAT_180380bb0 - fVar4;
  fVar8 = fVar2 * fVar7;
  fVar9 = fVar8 * fVar6 - fVar1 * fVar5;
  fVar10 = fVar8 * fVar6 + fVar1 * fVar5;
  fVar13 = fVar1 * fVar7 * fVar6;
  fVar11 = fVar1 * fVar7 * fVar1 + fVar4;
  fVar14 = fVar8 * fVar2 + fVar4;
  fVar12 = fVar8 * fVar1 - fVar6 * fVar5;
  fVar3 = param_1[8];
  fVar15 = fVar8 * fVar1 + fVar6 * fVar5;
  fVar8 = fVar13 - fVar2 * fVar5;
  fVar1 = param_1[4];
  fVar13 = fVar13 + fVar2 * fVar5;
  fVar2 = *param_1;
  fVar4 = fVar6 * fVar7 * fVar6 + fVar4;
  *param_1 = fVar12 * fVar1 + fVar14 * fVar2 + fVar10 * fVar3;
  param_1[4] = fVar11 * fVar1 + fVar15 * fVar2 + fVar8 * fVar3;
  param_1[8] = fVar13 * fVar1 + fVar9 * fVar2 + fVar4 * fVar3;
  fVar6 = param_1[9];
  fVar1 = param_1[1];
  fVar2 = param_1[5];
  param_1[1] = fVar12 * fVar2 + fVar14 * fVar1 + fVar10 * fVar6;
  param_1[5] = fVar11 * fVar2 + fVar15 * fVar1 + fVar8 * fVar6;
  param_1[9] = fVar13 * fVar2 + fVar9 * fVar1 + fVar4 * fVar6;
  fVar6 = param_1[2];
  fVar1 = param_1[6];
  fVar2 = param_1[10];
  param_1[2] = fVar12 * fVar1 + fVar14 * fVar6 + fVar10 * fVar2;
  param_1[6] = fVar11 * fVar1 + fVar15 * fVar6 + fVar8 * fVar2;
  param_1[10] = fVar13 * fVar1 + fVar9 * fVar6 + fVar4 * fVar2;
  return;
}


