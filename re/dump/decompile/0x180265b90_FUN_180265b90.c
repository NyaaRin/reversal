// 0x180265b90  FUN_180265b90
// size=151 thunk=false
// signature: undefined FUN_180265b90()
// status: ok


undefined8 * FUN_180265b90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    uVar1 = param_1[2];
    param_1[2] = 0;
    uVar2 = param_1[1];
    param_1[1] = 0;
    uVar3 = *param_1;
    *param_1 = 0;
    *param_3 = uVar3;
    param_3[1] = uVar2;
    param_3[2] = uVar1;
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 3);
    param_3 = param_3 + 4;
  }
  return param_3;
}


