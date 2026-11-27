// 0x180075fa0  FUN_180075fa0
// size=915 thunk=false
// signature: undefined FUN_180075fa0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_180075fa0(float *param_1,float *param_2,float *param_3,char param_4,longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (((DAT_180423988 == '\0') ||
      (((((DAT_180423985 != '\0' && (DAT_180423984 != '\0')) && (0.0 <= DAT_1803e9210)) &&
        ((DAT_1803fa608 == (float *)0x0 ||
         ((0.0 <= (double)*DAT_1803fa608 - DAT_1803e9210 &&
          ((double)*DAT_1803fa608 - DAT_1803e9210 <= DAT_180380c90)))))) ||
       (DAT_1803fa608 == (float *)0x0)))) ||
     (((fVar1 = *param_2, ((uint)fVar1 & 0x7f800000) == 0x7f800000 ||
       (fVar7 = param_2[1], ((uint)fVar7 & 0x7f800000) == 0x7f800000)) ||
      ((((uint)param_2[2] & 0x7f800000) == 0x7f800000 ||
       (((((uint)*param_3 & 0x7f800000) == 0x7f800000 ||
         (((uint)param_3[1] & 0x7f800000) == 0x7f800000)) ||
        (fVar2 = param_3[2], ((uint)fVar2 & 0x7f800000) == 0x7f800000)))))))) {
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    param_1[2] = param_3[2];
    return param_1;
  }
  if (DAT_180423978 != 0) {
    _DAT_1803e9498 = (double)DAT_1803813b0;
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    param_1[2] = param_3[2];
    DAT_1803fcf60 = 0;
    DAT_1803feb30 = 0;
    return param_1;
  }
  fVar8 = DAT_1803812fc;
  if (0.0 <= DAT_1803e9760) {
    fVar8 = (float)((double)*DAT_1803fa608 - DAT_1803e9760);
  }
  if (param_5 != DAT_1803fcf60) {
    DAT_1803fcf60 = param_5;
    DAT_1803feb30 = '\0';
  }
  if (param_4 == '\0') {
    if ((DAT_1803feb30 == '\0') || (DAT_180380ac0 < fVar8)) {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      param_1[2] = param_3[2];
      DAT_1803feb30 = 0;
      return param_1;
    }
    fVar7 = fVar7 + DAT_1803ffc28;
    *param_1 = fVar1 + DAT_1803fd338;
    goto LAB_180076187;
  }
  for (fVar4 = *param_3 - fVar1; DAT_180381188 < fVar4; fVar4 = fVar4 + DAT_180381424) {
  }
  for (; fVar4 < DAT_180381420; fVar4 = fVar4 + DAT_18038120c) {
  }
  for (fVar3 = param_3[1] - fVar7; DAT_180381188 < fVar3; fVar3 = fVar3 + DAT_180381424) {
  }
  for (; fVar3 < DAT_180381420; fVar3 = fVar3 + DAT_18038120c) {
  }
  if (DAT_1803e91f8 == _DAT_1803e9498) {
    if (DAT_1803feb30 != '\0') {
LAB_1800762fa:
      fVar7 = fVar7 + DAT_1803ffc28;
      *param_1 = fVar1 + DAT_1803fd338;
      goto LAB_180076187;
    }
  }
  else {
    _DAT_1803e9498 = DAT_1803e91f8;
    fVar5 = (float)((uint)(fVar3 - _DAT_1803fd118) & _DAT_1803817c0);
    fVar6 = (float)((uint)(fVar4 - _DAT_180425aac) & _DAT_1803817c0);
    if (DAT_1803feb30 != '\0') {
      if (fVar5 <= fVar6) {
        fVar5 = fVar6;
      }
      if ((DAT_1803809e4 < fVar5) &&
         (_DAT_1803fd118 = fVar3, _DAT_180425aac = fVar4, fVar8 < DAT_180380a58))
      goto LAB_1800762fa;
    }
  }
  fVar7 = fVar7 + fVar3;
  DAT_1803feb30 = '\x01';
  DAT_1803e9760 = (double)*DAT_1803fa608;
  _DAT_1803fd118 = fVar3;
  DAT_1803fd338 = fVar4;
  DAT_1803ffc28 = fVar3;
  _DAT_180425aac = fVar4;
  *param_1 = fVar1 + fVar4;
LAB_180076187:
  param_1[1] = fVar7;
  param_1[2] = fVar2;
  return param_1;
}


