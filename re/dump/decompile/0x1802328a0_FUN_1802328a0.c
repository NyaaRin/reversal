// 0x1802328a0  FUN_1802328a0
// size=222 thunk=false
// signature: undefined FUN_1802328a0()
// status: ok


undefined8 * FUN_1802328a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    *(undefined1 *)param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)((longlong)param_3 + 0x21) = *(undefined1 *)((longlong)param_1 + 0x21);
    *(undefined1 *)((longlong)param_3 + 0x22) = *(undefined1 *)((longlong)param_1 + 0x22);
    *(undefined1 *)((longlong)param_3 + 0x23) = *(undefined1 *)((longlong)param_1 + 0x23);
    uVar1 = *(undefined8 *)((longlong)param_1 + 0x2c);
    *(undefined8 *)((longlong)param_3 + 0x24) = *(undefined8 *)((longlong)param_1 + 0x24);
    *(undefined8 *)((longlong)param_3 + 0x2c) = uVar1;
    *(undefined1 *)((longlong)param_3 + 0x34) = *(undefined1 *)((longlong)param_1 + 0x34);
    uVar1 = param_1[8];
    param_3[7] = param_1[7];
    param_3[8] = uVar1;
    *(undefined1 *)(param_3 + 9) = *(undefined1 *)(param_1 + 9);
    *(undefined4 *)((longlong)param_3 + 0x4c) = *(undefined4 *)((longlong)param_1 + 0x4c);
    param_3 = param_3 + 10;
  }
  return param_3;
}


