// 0x180203b10  FUN_180203b10
// size=17 thunk=false
// signature: undefined FUN_180203b10()
// status: ok


float FUN_180203b10(float param_1,float param_2,float param_3)

{
  if (param_1 < param_2) {
    return param_2;
  }
  if (param_1 <= param_3) {
    param_3 = param_1;
  }
  return param_3;
}


