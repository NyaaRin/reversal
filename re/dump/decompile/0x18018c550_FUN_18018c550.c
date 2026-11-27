// 0x18018c550  FUN_18018c550
// size=318 thunk=false
// signature: undefined FUN_18018c550()
// status: ok


undefined8 FUN_18018c550(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar8 = fVar3 - *param_1;
  fVar5 = param_2[2];
  fVar10 = fVar4 - fVar1;
  fVar9 = fVar5 - fVar2;
  fVar7 = fVar10;
  if (fVar10 <= fVar9) {
    fVar7 = fVar9;
  }
  if (fVar7 < fVar8) {
    fVar7 = fVar8;
  }
  sVar6 = _fdclass();
  if ((((((sVar6 < 1) && (sVar6 = _fdclass(fVar1), sVar6 < 1)) &&
        (sVar6 = _fdclass(fVar2), sVar6 < 1)) &&
       ((sVar6 = _fdclass(fVar3), sVar6 < 1 && (sVar6 = _fdclass(fVar4), sVar6 < 1)))) &&
      ((sVar6 = _fdclass(fVar5), sVar6 < 1 && ((0.0 <= fVar8 && (0.0 <= fVar10)))))) &&
     ((0.0 <= fVar9 && ((DAT_180380bb0 <= fVar7 && (fVar7 < DAT_1803812b4)))))) {
    return 1;
  }
  return 0;
}


