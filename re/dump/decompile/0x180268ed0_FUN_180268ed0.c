// 0x180268ed0  FUN_180268ed0
// size=177 thunk=false
// signature: undefined FUN_180268ed0()
// status: ok


uint FUN_180268ed0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_1;
  if (0.0 <= fVar1) {
    fVar3 = DAT_180380bb0;
    if (fVar1 <= DAT_180380bb0) {
      fVar3 = fVar1;
    }
  }
  else {
    fVar3 = 0.0;
  }
  fVar1 = param_1[1];
  if (0.0 <= fVar1) {
    fVar5 = DAT_180380bb0;
    if (fVar1 <= DAT_180380bb0) {
      fVar5 = fVar1;
    }
  }
  else {
    fVar5 = 0.0;
  }
  fVar1 = param_1[2];
  if (0.0 <= fVar1) {
    fVar4 = DAT_180380bb0;
    if (fVar1 <= DAT_180380bb0) {
      fVar4 = fVar1;
    }
  }
  else {
    fVar4 = 0.0;
  }
  fVar1 = param_1[3];
  fVar2 = 0.0;
  if ((0.0 <= fVar1) && (fVar2 = DAT_180380bb0, fVar1 <= DAT_180380bb0)) {
    fVar2 = fVar1;
  }
  return (int)(fVar2 * DAT_1803811c8 + DAT_180380ac0) << 0x18 |
         (int)(fVar4 * DAT_1803811c8 + DAT_180380ac0) << 0x10 |
         (int)(fVar5 * DAT_1803811c8 + DAT_180380ac0) << 8 |
         (int)(fVar3 * DAT_1803811c8 + DAT_180380ac0);
}


