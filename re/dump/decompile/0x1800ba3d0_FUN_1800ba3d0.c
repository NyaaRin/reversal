// 0x1800ba3d0  FUN_1800ba3d0
// size=182 thunk=false
// signature: undefined FUN_1800ba3d0()
// status: ok


float FUN_1800ba3d0(float param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = (float *)(param_2 + 0xc);
  fVar3 = *(float *)(param_2 + 0x14);
  if (fVar3 != 0.0) {
    fVar2 = floorf(((fVar3 - ((*(float *)(param_2 + 0x10) + *pfVar1) * DAT_180380ac0 +
                             fVar3 * DAT_180380ac0)) + param_1) / fVar3);
    param_1 = param_1 - fVar2 * fVar3;
  }
  fVar3 = (param_1 - *pfVar1) / (*(float *)(param_2 + 0x10) - *pfVar1);
  if (0.0 <= fVar3) {
    fVar2 = DAT_180380bb0;
    if (fVar3 <= DAT_180380bb0) {
      fVar2 = fVar3;
    }
  }
  else {
    fVar2 = 0.0;
  }
  return fVar2;
}


