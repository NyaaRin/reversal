// 0x180232980  FUN_180232980
// size=168 thunk=false
// signature: undefined FUN_180232980()
// status: ok


undefined4 * FUN_180232980(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    *param_3 = *param_1;
    *(undefined8 *)(param_3 + 2) = 0;
    *(undefined8 *)(param_3 + 4) = 0;
    *(undefined8 *)(param_3 + 6) = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    uVar1 = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(param_3 + 4) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_3 + 6) = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_3 + 8) = uVar1;
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0xf;
    param_3[10] = param_1[10];
    param_3 = param_3 + 0xc;
  }
  return param_3;
}


