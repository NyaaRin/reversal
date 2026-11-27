// 0x18008b160  FUN_18008b160
// size=261 thunk=false
// signature: undefined FUN_18008b160()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_18008b160(undefined8 param_1,float *param_2,undefined8 param_3,int param_4,int param_5,
                     float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (param_6 <= 0.0) {
    param_2[2] = 0.0;
  }
  else {
    param_5 = param_5 + param_4 + 1;
    fVar1 = (float)FUN_180087ba0(DAT_18038120c,param_3,"tacrp_randomspread",0,DAT_18038120c,param_5)
    ;
    fVar2 = (float)FUN_180087ba0(fVar1,param_3,"tacrp_randomspread2",0,DAT_180381094,param_5);
    fVar3 = fVar2 * param_6 * _DAT_180380c38;
    fVar2 = sinf(fVar1);
    *param_2 = fVar2 * fVar3;
    fVar1 = cosf(fVar1);
    param_2[2] = 0.0;
    param_2[1] = fVar1 * fVar3 + param_2[1];
  }
  return param_2;
}


