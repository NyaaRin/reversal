// 0x1800d29b0  FUN_1800d29b0
// size=181 thunk=false
// signature: undefined FUN_1800d29b0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1800d29b0(undefined8 param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_180380fcc;
  fVar1 = floorf(param_3 * DAT_180380fcc + DAT_180380ac0);
  fVar1 = fVar1 / fVar3;
  fVar2 = floorf(param_2 * fVar3 + DAT_180380ac0);
  if ((float)((uint)(fVar2 / fVar3 - fVar1) & _DAT_1803817c0) <= DAT_1803809c4) {
    fVar3 = DAT_180381384;
    if (0.0 <= param_2 - fVar1) {
      fVar3 = DAT_180380bb0;
    }
    param_2 = fVar3 * _DAT_1803809cc + fVar1;
  }
  return param_2;
}


