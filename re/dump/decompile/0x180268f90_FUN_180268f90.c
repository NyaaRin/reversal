// 0x180268f90  FUN_180268f90
// size=166 thunk=false
// signature: undefined FUN_180268f90()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180268f90(float param_1,float param_2,float param_3,uint *param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3;
  fVar3 = DAT_180381384;
  if (param_3 <= param_2) {
    fVar1 = param_2;
    param_2 = param_3;
    fVar3 = 0.0;
  }
  fVar4 = fVar1;
  if (param_1 < fVar1) {
    fVar3 = DAT_180381358 - fVar3;
    fVar4 = param_1;
    param_1 = fVar1;
  }
  fVar1 = fVar4;
  if (param_2 <= fVar4) {
    fVar1 = param_2;
  }
  fVar2 = param_1 + DAT_180380924;
  *param_4 = (uint)((fVar4 - param_2) / ((param_1 - fVar1) * DAT_180380f40 + DAT_180380924) + fVar3)
             & _DAT_1803817c0;
  *param_5 = (param_1 - fVar1) / fVar2;
  *param_6 = param_1;
  return;
}


