// 0x18023a180  FUN_18023a180
// size=132 thunk=false
// signature: undefined FUN_18023a180()
// status: ok


undefined4 * FUN_18023a180(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_18016d4c0(param_1 + 2,param_2 + 2);
  FUN_18016d4c0(param_1 + 10,param_2 + 10);
  param_1[0x12] = param_2[0x12];
  FUN_18016d4c0(param_1 + 0x14,param_2 + 0x14);
  FUN_18016d4c0(param_1 + 0x1c,param_2 + 0x1c);
  param_1[0x24] = param_2[0x24];
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  return param_1;
}


