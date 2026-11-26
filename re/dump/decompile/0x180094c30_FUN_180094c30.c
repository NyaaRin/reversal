// 0x180094c30  FUN_180094c30
// size=194 thunk=false
// signature: undefined FUN_180094c30()
// status: ok


float FUN_180094c30(float *param_1,double param_2,float param_3)

{
  short sVar1;
  float fVar2;
  float fVar3;
  
  sVar1 = _dclass(SUB84(param_2,0));
  if ((sVar1 < 1) && (0.0 <= param_2)) {
    fVar2 = (param_1[1] + *param_1) - DAT_180380bb0;
    fVar3 = DAT_1803809ec;
    if (DAT_1803809ec <= fVar2) {
      fVar3 = fVar2;
    }
    fVar3 = (param_3 / param_1[6]) * (fVar3 + fVar3 + DAT_180380d30);
    if (0.0 < fVar3) {
      fVar2 = DAT_180380bb0 - (float)param_2 / fVar3;
      fVar3 = 0.0;
      if (0.0 <= fVar2) {
        fVar3 = fVar2;
      }
      return fVar3 * DAT_180380c50 * fVar3 * fVar3 - fVar3 * fVar3;
    }
  }
  return 0.0;
}


