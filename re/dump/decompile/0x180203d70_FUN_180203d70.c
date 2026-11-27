// 0x180203d70  FUN_180203d70
// size=177 thunk=false
// signature: undefined FUN_180203d70()
// status: ok


undefined8 * FUN_180203d70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 9) != '\0') {
    FUN_18020e8a0();
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    FUN_18020e8a0(param_1 + 5,param_2 + 5);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[7] = 0;
  param_2[8] = 0xf;
  *(undefined1 *)(param_1 + 9) = 1;
  return param_1;
}


