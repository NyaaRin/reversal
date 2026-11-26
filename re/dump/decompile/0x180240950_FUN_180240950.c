// 0x180240950  FUN_180240950
// size=107 thunk=false
// signature: undefined FUN_180240950()
// status: ok


undefined8 * FUN_180240950(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  if ((param_3 == param_4) || (param_3 + 1 != param_4)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_18001d080(param_2,param_3,param_4 - param_3,param_4 - param_3,0,param_2);
  }
  return param_2;
}


