// 0x18008b270  FUN_18008b270
// size=441 thunk=false
// signature: undefined FUN_18008b270()
// status: ok


float * FUN_18008b270(undefined8 param_1,float *param_2,float *param_3,float *param_4,float param_5)

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
  
  if (param_5 == 0.0) {
    fVar6 = param_3[2];
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    param_2[2] = fVar6;
  }
  else {
    param_5 = param_5 * DAT_180380994;
    fVar7 = sinf(param_5);
    fVar8 = cosf(param_5);
    fVar6 = *param_4;
    fVar1 = param_4[2];
    fVar2 = param_3[2];
    fVar3 = param_4[1];
    fVar4 = *param_3;
    fVar5 = param_3[1];
    fVar9 = (fVar3 * fVar5 + fVar6 * fVar4 + fVar1 * fVar2) * (DAT_180380bb0 - fVar8);
    *param_2 = (fVar3 * fVar2 - fVar1 * fVar5) * fVar7 + fVar4 * fVar8 + fVar9 * fVar6;
    param_2[1] = (fVar1 * fVar4 - fVar6 * fVar2) * fVar7 + fVar5 * fVar8 + fVar9 * fVar3;
    param_2[2] = (fVar6 * fVar5 - fVar3 * fVar4) * fVar7 + fVar2 * fVar8 + fVar9 * fVar1;
  }
  return param_2;
}


