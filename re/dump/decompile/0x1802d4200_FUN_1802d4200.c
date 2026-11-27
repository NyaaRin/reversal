// 0x1802d4200  FUN_1802d4200
// size=225 thunk=false
// signature: undefined FUN_1802d4200()
// status: ok


void FUN_1802d4200(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float _Y;
  float fVar3;
  
  fVar3 = param_1[4] * param_1[4] + *param_1 * *param_1;
  if (fVar3 < 0.0) {
    fVar3 = sqrtf(fVar3);
  }
  else {
    fVar3 = SQRT(fVar3);
  }
  fVar1 = atan2f((float)((uint)param_1[8] ^ DAT_1803817f0),fVar3);
  fVar1 = fVar1 * DAT_1803810bc;
  if (fVar3 <= DAT_180380964) {
    fVar2 = 0.0;
    _Y = (float)((uint)param_1[1] ^ DAT_1803817f0);
    fVar3 = param_1[5];
  }
  else {
    fVar2 = atan2f(param_1[9],param_1[10]);
    fVar3 = *param_1;
    fVar2 = fVar2 * DAT_1803810bc;
    _Y = param_1[4];
  }
  fVar3 = atan2f(_Y,fVar3);
  param_2[1] = fVar3 * DAT_1803810bc;
  *param_2 = fVar1;
  param_2[2] = fVar2;
  return;
}


