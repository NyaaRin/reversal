// 0x180013940  FUN_180013940
// size=48 thunk=false
// signature: undefined FUN_180013940()
// status: ok


undefined8 * FUN_180013940(undefined8 *param_1)

{
  *param_1 = vftable_std_exception;
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = vftable_std_bad_cast;
  return param_1;
}


