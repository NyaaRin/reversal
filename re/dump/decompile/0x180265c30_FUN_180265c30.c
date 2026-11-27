// 0x180265c30  FUN_180265c30
// size=119 thunk=false
// signature: undefined FUN_180265c30()
// status: ok


undefined8 *
FUN_180265c30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_3;
  if (param_1 != param_2) {
    puVar1 = (undefined8 *)0x0;
    do {
      *param_3 = 0;
      param_3[1] = 0;
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      *param_1 = 0;
      param_1[1] = 0;
      param_3 = param_3 + 2;
      param_1 = param_1 + 2;
    } while (param_1 != param_2);
  }
  FUN_18022a400(param_3,param_3,puVar1,param_4,param_3,param_3,param_4);
  return param_3;
}


