// 0x1800cb220  FUN_1800cb220
// size=316 thunk=false
// signature: undefined FUN_1800cb220()
// status: ok


float FUN_1800cb220(float *param_1,float *param_2)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res8 [4];
  float local_res18 [2];
  float local_res20 [2];
  
  fVar5 = DAT_1803813c0;
  if (*(char *)(param_1 + 6) != '\0') {
    fVar7 = *param_2 - *param_1;
    fVar6 = param_2[1] - param_1[1];
    fVar8 = param_2[2] - param_1[2];
    fVar4 = (float)(*(code *)PTR_FUN_1803da018)(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
    sVar1 = _fdclass();
    fVar5 = DAT_1803813c0;
    if ((sVar1 < 1) && (fVar5 = DAT_180380bb0, DAT_180380964 < fVar4)) {
      fVar4 = (fVar6 * param_1[4] + fVar7 * param_1[3] + fVar8 * param_1[5]) / fVar4;
      local_res18[0] = fVar4;
      sVar1 = _fdclass(fVar4);
      fVar5 = DAT_1803813c0;
      if (sVar1 < 1) {
        local_res20[0] = 1.0;
        local_res8[0] = -1.0;
        pfVar3 = local_res8;
        if (DAT_180381384 <= fVar4) {
          pfVar3 = local_res18;
        }
        pfVar2 = local_res20;
        if (fVar4 <= DAT_180380bb0) {
          pfVar2 = pfVar3;
        }
        fVar5 = *pfVar2;
      }
    }
  }
  return fVar5;
}


