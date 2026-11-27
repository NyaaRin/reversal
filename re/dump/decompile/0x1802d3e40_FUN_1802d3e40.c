// 0x1802d3e40  FUN_1802d3e40
// size=44 thunk=false
// signature: undefined FUN_1802d3e40()
// status: ok


float FUN_1802d3e40(float param_1)

{
  float fVar1;
  
  fVar1 = fmodf(param_1,DAT_18038120c);
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + DAT_18038120c;
  }
  return fVar1;
}


