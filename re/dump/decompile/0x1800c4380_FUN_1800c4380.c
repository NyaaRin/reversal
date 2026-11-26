// 0x1800c4380  FUN_1800c4380
// size=115 thunk=false
// signature: undefined FUN_1800c4380()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1800c4380(float param_1,int param_2)

{
  float fVar1;
  
  if (param_1 == 0.0) {
    return true;
  }
  if (0 < param_2) {
    param_1 = (float)((uint)param_1 & _DAT_1803817c0);
    fVar1 = floorf(param_1);
    if ((param_1 == fVar1) && (param_1 <= (float)param_2)) {
      return param_2 % (int)param_1 == 0;
    }
  }
  return false;
}


