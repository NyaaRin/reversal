// 0x18017f420  FUN_18017f420
// size=185 thunk=false
// signature: undefined FUN_18017f420()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_18017f420(float *param_1,undefined8 param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_18;
  float local_14 [5];
  
  pfVar3 = &local_18;
  local_14[0] = 1.5;
  local_18 = 0.75;
  fVar6 = (float)param_2;
  fVar4 = (float)((ulonglong)param_2 >> 0x20);
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar3 = &DAT_1803da6a4;
  }
  pfVar2 = local_14;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar2 = pfVar3;
  }
  fVar1 = *pfVar2;
  fVar5 = fVar1 * _DAT_180381220;
  if ((fVar1 * _DAT_180381220 <= fVar4) &&
     (fVar5 = fVar1 * DAT_18038126c, fVar4 <= fVar1 * DAT_18038126c)) {
    fVar5 = fVar4;
  }
  fVar4 = fVar1 * DAT_180381188 + DAT_180381208;
  if ((fVar4 <= fVar6) && (fVar4 = fVar1 * _DAT_180381260 + DAT_180381208, fVar6 <= fVar4)) {
    fVar4 = fVar6;
  }
  *param_1 = fVar4;
  param_1[1] = fVar5;
  return param_1;
}


