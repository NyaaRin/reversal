// 0x18007fc10  FUN_18007fc10
// size=412 thunk=false
// signature: undefined FUN_18007fc10()
// status: ok


float * FUN_18007fc10(float *param_1,float *param_2,float *param_3,float param_4)

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
  
  param_4 = param_4 * DAT_180380994;
  fVar7 = cosf(param_4);
  fVar8 = sinf(param_4);
  fVar1 = param_3[1];
  fVar2 = *param_2;
  fVar3 = *param_3;
  fVar4 = param_2[2];
  fVar5 = param_3[2];
  fVar6 = param_2[1];
  fVar9 = DAT_180380bb0 - fVar7;
  fVar10 = fVar6 * fVar1 + fVar2 * fVar3 + fVar4 * fVar5;
  *param_1 = (fVar1 * fVar4 - fVar6 * fVar5) * fVar8 + fVar2 * fVar7 + fVar10 * fVar3 * fVar9;
  param_1[1] = (fVar2 * fVar5 - fVar3 * fVar4) * fVar8 + fVar6 * fVar7 + fVar10 * fVar1 * fVar9;
  param_1[2] = (fVar6 * fVar3 - fVar1 * fVar2) * fVar8 + fVar4 * fVar7 + fVar10 * fVar5 * fVar9;
  return param_1;
}


