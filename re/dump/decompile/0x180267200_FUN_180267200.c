// 0x180267200  FUN_180267200
// size=113 thunk=false
// signature: undefined FUN_180267200()
// status: ok


void FUN_180267200(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar3 = param_2[1];
  if ((param_2[1] <= fVar1) && (fVar3 = param_2[3], fVar1 <= param_2[3])) {
    fVar3 = fVar1;
  }
  fVar1 = *param_1;
  fVar2 = *param_2;
  if ((*param_2 <= fVar1) && (fVar2 = param_2[2], fVar1 <= param_2[2])) {
    fVar2 = fVar1;
  }
  *param_1 = fVar2;
  param_1[1] = fVar3;
  fVar1 = param_1[3];
  fVar3 = param_2[1];
  if ((param_2[1] <= fVar1) && (fVar3 = param_2[3], fVar1 <= param_2[3])) {
    fVar3 = fVar1;
  }
  fVar1 = param_1[2];
  fVar2 = *param_2;
  if ((*param_2 <= fVar1) && (fVar2 = param_2[2], fVar1 <= param_2[2])) {
    fVar2 = fVar1;
  }
  param_1[3] = fVar3;
  param_1[2] = fVar2;
  return;
}


