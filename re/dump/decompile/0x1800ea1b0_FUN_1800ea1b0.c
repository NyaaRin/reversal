// 0x1800ea1b0  FUN_1800ea1b0
// size=69 thunk=false
// signature: undefined FUN_1800ea1b0()
// status: ok


undefined8 * FUN_1800ea1b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


