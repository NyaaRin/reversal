// 0x180075ea0  FUN_180075ea0
// size=241 thunk=false
// signature: undefined FUN_180075ea0()
// status: ok


bool FUN_180075ea0(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  if (((DAT_180423988 != '\0') ||
      (((((DAT_180423985 != '\0' && (DAT_180423984 != '\0')) && (0.0 <= DAT_1803e9210)) &&
        ((DAT_1803fa608 != (float *)0x0 && (0.0 <= (double)*DAT_1803fa608 - DAT_1803e9210)))) &&
       ((double)*DAT_1803fa608 - DAT_1803e9210 <= DAT_180380c90)))) && (0.0 <= param_1)) {
    if (((DAT_180381108 <= param_1) || (param_2 <= 0.0)) || (NAN(param_2))) {
      return false;
    }
    if (DAT_1803809a0 < param_1) {
      fVar1 = tanf(param_1 * DAT_180380994);
      return fVar1 * param_2 <= param_3;
    }
  }
  return true;
}


