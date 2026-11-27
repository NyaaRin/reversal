// 0x180232b00  FUN_180232b00
// size=225 thunk=false
// signature: undefined FUN_180232b00()
// status: ok


undefined8 * FUN_180232b00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 10) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    uVar1 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar1;
    uVar1 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar1;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    param_1[2] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    uVar1 = param_1[5];
    param_3[4] = param_1[4];
    param_3[5] = uVar1;
    uVar1 = param_1[7];
    param_3[6] = param_1[6];
    param_3[7] = uVar1;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[6] = 0;
    param_1[7] = 0xf;
    param_3[8] = param_1[8];
    *(undefined4 *)(param_3 + 9) = *(undefined4 *)(param_1 + 9);
    *(undefined4 *)((longlong)param_3 + 0x4c) = *(undefined4 *)((longlong)param_1 + 0x4c);
    param_3 = param_3 + 10;
  }
  return param_3;
}


