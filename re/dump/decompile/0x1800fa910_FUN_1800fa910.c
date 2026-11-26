// 0x1800fa910  FUN_1800fa910
// size=130 thunk=false
// signature: undefined FUN_1800fa910()
// status: ok


undefined4 * FUN_1800fa910(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  FUN_18016d4c0(param_1 + 2,param_2 + 2);
  FUN_18016d4c0(param_1 + 10,param_2 + 10);
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  param_1[0x19] = param_2[0x19];
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  return param_1;
}


