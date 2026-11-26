// 180022110  FUN_180022110
// signature: undefined FUN_180022110()
// status: ok


float FUN_180022110(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = fmodf(param_1 - param_2,DAT_18038120c);
  if (param_1 <= param_2) {
    if (fVar1 <= DAT_180381420) {
      fVar1 = fVar1 + DAT_18038120c;
    }
  }
  else if (DAT_180381188 <= fVar1) {
    return fVar1 - DAT_18038120c;
  }
  return fVar1;
}


