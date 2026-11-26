// 1802d4540  FUN_1802d4540
// signature: undefined FUN_1802d4540()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802d4540(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  fVar2 = param_1[1];
  if ((fVar2 == 0.0) && (*param_1 == 0.0)) {
    fVar4 = 0.0;
    fVar2 = DAT_18038110c;
    if (0.0 < param_1[2]) {
      fVar2 = DAT_1803811dc;
    }
  }
  else {
    fVar1 = *param_1;
    dVar3 = atan2((double)fVar2,(double)fVar1);
    fVar4 = (float)((dVar3 * _DAT_18030d328) / DAT_180380d50);
    if (fVar4 < 0.0) {
      fVar4 = fVar4 + DAT_18038120c;
    }
    fVar2 = (float)(*(code *)PTR_FUN_1803da018)(fVar1 * fVar1 + fVar2 * fVar2);
    dVar3 = atan2((double)(float)((uint)param_1[2] ^ DAT_1803817f0),(double)fVar2);
    fVar2 = (float)((dVar3 * _DAT_18030d328) / DAT_180380d50);
    if (fVar2 < 0.0) {
      fVar2 = fVar2 + DAT_18038120c;
    }
  }
  *param_2 = fVar2;
  param_2[1] = fVar4;
  param_2[2] = 0.0;
  return;
}


