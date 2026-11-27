// 1802d3e70  FUN_1802d3e70
// signature: undefined FUN_1802d3e70()
// status: ok


void FUN_1802d3e70(float *param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar6 = DAT_180380994;
  fVar2 = param_1[1] * DAT_180380994;
  dVar3 = sin((double)fVar2);
  fVar7 = (float)dVar3;
  dVar3 = cos((double)fVar2);
  fVar8 = (float)dVar3;
  dVar3 = (double)(*param_1 * fVar6);
  dVar4 = sin(dVar3);
  fVar10 = (float)dVar4;
  dVar3 = cos(dVar3);
  fVar9 = (float)dVar3;
  dVar3 = (double)(param_1[2] * fVar6);
  dVar4 = sin(dVar3);
  fVar2 = (float)dVar4;
  dVar3 = cos(dVar3);
  uVar1 = DAT_1803817f0;
  fVar6 = (float)dVar3;
  if (param_2 != (float *)0x0) {
    *param_2 = fVar9 * fVar8;
    param_2[2] = (float)((uint)fVar10 ^ uVar1);
    param_2[1] = fVar9 * fVar7;
  }
  if (param_3 != (float *)0x0) {
    fVar5 = fVar6 * DAT_180381384;
    *param_3 = (float)((uint)fVar7 ^ uVar1) * fVar5 - fVar8 * fVar2 * fVar10;
    param_3[1] = fVar8 * fVar5 - fVar7 * fVar2 * fVar10;
    param_3[2] = fVar2 * DAT_180381384 * fVar9;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar8 * fVar6 * fVar10 - (float)((uint)fVar7 ^ uVar1) * fVar2;
    param_4[2] = fVar6 * fVar9;
    param_4[1] = fVar7 * fVar6 * fVar10 - fVar2 * fVar8;
  }
  return;
}


