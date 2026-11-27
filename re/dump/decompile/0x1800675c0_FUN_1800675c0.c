// 0x1800675c0  FUN_1800675c0
// size=117 thunk=false
// signature: undefined FUN_1800675c0()
// status: ok


undefined8 * FUN_1800675c0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 7;
  *(undefined2 *)(param_1 + 4) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0xffffffffffffffff;
  param_1[8] = uVar1;
  FUN_180067660();
  FUN_180067450(param_1,param_2 + 0x28);
  return param_1;
}


