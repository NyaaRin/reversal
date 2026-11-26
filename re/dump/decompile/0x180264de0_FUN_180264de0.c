// 0x180264de0  FUN_180264de0
// size=170 thunk=false
// signature: undefined FUN_180264de0()
// status: ok


undefined8 * FUN_180264de0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *param_3 = *param_1;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 1);
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    uVar1 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar1;
    uVar1 = param_1[5];
    param_3[4] = param_1[4];
    param_3[5] = uVar1;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[4] = 0;
    param_1[5] = 0xf;
    param_3 = param_3 + 6;
  }
  return param_3;
}


