// 0x1802d3c20  FUN_1802d3c20
// size=410 thunk=false
// signature: undefined FUN_1802d3c20()
// status: ok


void FUN_1802d3c20(float *param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = DAT_180380994;
  fVar1 = param_1[1] * DAT_180380994;
  dVar2 = sin((double)fVar1);
  fVar6 = (float)dVar2;
  dVar2 = cos((double)fVar1);
  fVar5 = (float)dVar2;
  dVar2 = (double)(*param_1 * fVar4);
  dVar3 = sin(dVar2);
  fVar8 = (float)dVar3;
  dVar2 = cos(dVar2);
  fVar7 = (float)dVar2;
  dVar2 = (double)(param_1[2] * fVar4);
  dVar3 = sin(dVar2);
  fVar1 = (float)dVar3;
  dVar2 = cos(dVar2);
  fVar4 = (float)dVar2;
  *param_2 = fVar7 * fVar5;
  param_2[4] = fVar7 * fVar6;
  param_2[8] = (float)((uint)fVar8 ^ DAT_1803817f0);
  param_2[1] = fVar8 * fVar1 * fVar5 - fVar4 * fVar6;
  param_2[5] = fVar8 * fVar1 * fVar6 + fVar4 * fVar5;
  param_2[9] = fVar1 * fVar7;
  param_2[2] = fVar8 * fVar4 * fVar5 + fVar1 * fVar6;
  param_2[6] = fVar8 * fVar4 * fVar6 - fVar1 * fVar5;
  param_2[10] = fVar4 * fVar7;
  param_2[3] = 0.0;
  param_2[7] = 0.0;
  param_2[0xb] = 0.0;
  return;
}


