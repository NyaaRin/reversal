// 1802d3e00  FUN_1802d3e00
// signature: undefined FUN_1802d3e00()
// status: ok


float FUN_1802d3e00(float param_1)

{
  float fVar1;
  
  fVar1 = fmodf(param_1,DAT_18038120c);
  if (DAT_180381188 < fVar1) {
    fVar1 = fVar1 - DAT_18038120c;
  }
  if (fVar1 < DAT_180381420) {
    fVar1 = fVar1 + DAT_18038120c;
  }
  return fVar1;
}


