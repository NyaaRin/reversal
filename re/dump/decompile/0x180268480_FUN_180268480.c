// 0x180268480  FUN_180268480
// size=708 thunk=false
// signature: undefined FUN_180268480()
// status: ok


float * FUN_180268480(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

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
  float fVar16;
  
  fVar12 = *param_3;
  fVar13 = param_3[1];
  fVar2 = *param_2;
  fVar5 = fVar12 - fVar2;
  fVar7 = param_2[1];
  fVar11 = fVar13 - fVar7;
  fVar16 = *param_5;
  fVar1 = param_5[1];
  fVar8 = (fVar1 - fVar7) * fVar11 + (fVar16 - fVar2) * fVar5;
  fVar9 = fVar7;
  fVar10 = fVar2;
  if ((0.0 <= fVar8) &&
     (fVar3 = fVar11 * fVar11 + fVar5 * fVar5, fVar9 = fVar13, fVar10 = fVar12, fVar8 <= fVar3)) {
    fVar9 = (fVar8 * fVar11) / fVar3 + fVar7;
    fVar10 = (fVar8 * fVar5) / fVar3 + fVar2;
  }
  fVar5 = *param_4;
  fVar8 = param_4[1];
  fVar14 = fVar5 - fVar12;
  fVar15 = fVar8 - fVar13;
  fVar4 = (fVar1 - fVar13) * fVar15 + (fVar16 - fVar12) * fVar14;
  fVar11 = fVar12;
  fVar3 = fVar13;
  if ((0.0 <= fVar4) &&
     (fVar6 = fVar15 * fVar15 + fVar14 * fVar14, fVar11 = fVar5, fVar3 = fVar8, fVar4 <= fVar6)) {
    fVar11 = (fVar4 * fVar14) / fVar6 + fVar12;
    fVar3 = (fVar4 * fVar15) / fVar6 + fVar13;
  }
  fVar14 = fVar2 - fVar5;
  fVar15 = fVar7 - fVar8;
  fVar4 = (fVar1 - fVar8) * fVar15 + (fVar16 - fVar5) * fVar14;
  fVar12 = fVar5;
  fVar13 = fVar8;
  if ((0.0 <= fVar4) &&
     (fVar6 = fVar15 * fVar15 + fVar14 * fVar14, fVar12 = fVar2, fVar13 = fVar7, fVar4 <= fVar6)) {
    fVar12 = (fVar4 * fVar14) / fVar6 + fVar5;
    fVar13 = (fVar4 * fVar15) / fVar6 + fVar8;
  }
  fVar5 = (fVar1 - fVar3) * (fVar1 - fVar3) + (fVar16 - fVar11) * (fVar16 - fVar11);
  fVar7 = (fVar1 - fVar9) * (fVar1 - fVar9) + (fVar16 - fVar10) * (fVar16 - fVar10);
  fVar16 = (fVar1 - fVar13) * (fVar1 - fVar13) + (fVar16 - fVar12) * (fVar16 - fVar12);
  fVar2 = fVar5;
  if (fVar16 <= fVar5) {
    fVar2 = fVar16;
  }
  fVar16 = fVar7;
  if (fVar2 <= fVar7) {
    fVar16 = fVar2;
  }
  if (fVar16 == fVar7) {
    *param_1 = fVar10;
    param_1[1] = fVar9;
  }
  else if (fVar16 == fVar5) {
    *param_1 = fVar11;
    param_1[1] = fVar3;
  }
  else {
    *param_1 = fVar12;
    param_1[1] = fVar13;
  }
  return param_1;
}


