// 0x1800ea200  FUN_1800ea200
// size=178 thunk=false
// signature: undefined FUN_1800ea200()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800ea200(undefined8 param_1,undefined8 param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fStackX_1c;
  float local_18;
  float local_14 [5];
  
  pfVar2 = &local_18;
  _DAT_1803e85a0 = param_1;
  local_14[0] = 1.5;
  local_18 = 0.75;
  fStackX_1c = (float)((ulonglong)param_2 >> 0x20);
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar2 = &DAT_1803da6a4;
  }
  pfVar1 = local_14;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar1 = pfVar2;
  }
  DAT_1803e84f4 = *pfVar1 * DAT_1803811fc;
  if ((DAT_1803e84f4 <= fStackX_1c) && (DAT_1803e84f4 = DAT_180381294, fStackX_1c <= DAT_180381294))
  {
    DAT_1803e84f4 = fStackX_1c;
  }
  DAT_1803e84f0 = *pfVar1 * DAT_180381244;
  fVar3 = (float)param_2;
  if ((DAT_1803e84f0 <= fVar3) && (DAT_1803e84f0 = DAT_18038129c, fVar3 <= DAT_18038129c)) {
    DAT_1803e84f0 = fVar3;
  }
  DAT_180409bc0 = 1;
  return;
}


