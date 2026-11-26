// 0x1802d4050  FUN_1802d4050
// size=182 thunk=false
// signature: undefined FUN_1802d4050()
// status: ok


void FUN_1802d4050(float *param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  
  fVar1 = *param_1 * DAT_180380994;
  dVar2 = cos((double)fVar1);
  fVar4 = param_1[1] * DAT_180380994;
  dVar3 = cos((double)fVar4);
  *param_2 = (float)dVar3 * (float)dVar2;
  dVar3 = sin((double)fVar4);
  param_2[1] = (float)dVar3 * (float)dVar2;
  dVar2 = sin((double)fVar1);
  param_2[2] = (float)((uint)(float)dVar2 ^ DAT_1803817f0);
  return;
}


