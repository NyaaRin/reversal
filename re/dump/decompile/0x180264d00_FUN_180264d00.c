// 0x180264d00  FUN_180264d00
// size=215 thunk=false
// signature: undefined FUN_180264d00()
// status: ok


undefined4 * FUN_180264d00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x12) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
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
    *(undefined8 *)(param_1 + 8) = 0xf;
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_3 + 10) = 0;
    *(undefined8 *)(param_3 + 0xc) = 0;
    *(undefined8 *)(param_3 + 0xe) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)(param_3 + 0xc) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_3 + 0xe) = *(undefined8 *)(param_1 + 0xe);
    *(undefined8 *)(param_3 + 0x10) = uVar1;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0xf;
    param_3 = param_3 + 0x12;
  }
  return param_3;
}


