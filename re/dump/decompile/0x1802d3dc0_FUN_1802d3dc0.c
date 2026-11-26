// 0x1802d3dc0  FUN_1802d3dc0
// size=52 thunk=false
// signature: undefined FUN_1802d3dc0()
// status: ok


void FUN_1802d3dc0(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  FUN_1802d3c20(param_1,param_3);
  *(undefined4 *)(param_3 + 0xc) = *param_2;
  *(undefined4 *)(param_3 + 0x1c) = param_2[1];
  *(undefined4 *)(param_3 + 0x2c) = param_2[2];
  return;
}


