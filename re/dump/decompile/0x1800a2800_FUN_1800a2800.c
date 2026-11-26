// 0x1800a2800  FUN_1800a2800
// size=720 thunk=false
// signature: undefined FUN_1800a2800()
// status: ok


float * FUN_1800a2800(float *param_1,float *param_2,float *param_3,char param_4,float param_5,
                     float param_6)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = *param_2;
  if ((((((uint)fVar5 & 0x7f800000) != 0x7f800000) &&
       (fVar2 = param_2[1], ((uint)fVar2 & 0x7f800000) != 0x7f800000)) &&
      (fVar6 = param_2[2], ((uint)fVar6 & 0x7f800000) != 0x7f800000)) &&
     (((sVar1 = _fdclass(param_5), sVar1 < 1 && (sVar1 = _fdclass(param_6), sVar1 < 1)) &&
      ((0.0 < param_5 && (0.0 < param_6)))))) {
    fVar3 = DAT_180380ac0;
    if (param_5 <= DAT_180380ac0) {
      fVar3 = param_5;
    }
    fVar5 = fVar3 * fVar5;
    fVar4 = fVar3 * fVar2;
    fVar3 = fVar3 * fVar6;
    if (((param_4 != '\0') && (((uint)*param_3 & 0x7f800000) != 0x7f800000)) &&
       ((((uint)param_3[1] & 0x7f800000) != 0x7f800000 &&
        (((uint)param_3[2] & 0x7f800000) != 0x7f800000)))) {
      fVar7 = DAT_1803809c4;
      if (param_5 <= DAT_1803809c4) {
        fVar7 = param_5;
      }
      fVar8 = (*param_3 - *param_2) * fVar7;
      fVar6 = (param_3[2] - fVar6) * fVar7;
      fVar7 = (param_3[1] - fVar2) * fVar7;
      fVar2 = (float)(*(code *)PTR_FUN_1803da018)(fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6);
      if (DAT_180380fa8 < fVar2) {
        fVar2 = DAT_180380fa8 / fVar2;
        fVar8 = fVar8 * fVar2;
        fVar7 = fVar7 * fVar2;
        fVar6 = fVar6 * fVar2;
      }
      fVar5 = fVar5 + fVar8;
      fVar4 = fVar4 + fVar7;
      fVar3 = fVar3 + fVar6;
    }
    fVar2 = (float)(*(code *)PTR_FUN_1803da018)(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    if ((((((uint)fVar5 & 0x7f800000) != 0x7f800000) && (((uint)fVar4 & 0x7f800000) != 0x7f800000))
        && (((uint)fVar3 & 0x7f800000) != 0x7f800000)) && (sVar1 = _fdclass(), sVar1 < 1)) {
      if (param_6 < fVar2) {
        param_6 = param_6 / fVar2;
        fVar5 = fVar5 * param_6;
        fVar4 = fVar4 * param_6;
        fVar3 = fVar3 * param_6;
      }
      *param_1 = fVar5;
      param_1[1] = fVar4;
      param_1[2] = fVar3;
      return param_1;
    }
  }
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return param_1;
}


