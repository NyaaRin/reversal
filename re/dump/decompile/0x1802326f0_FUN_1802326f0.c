// 0x1802326f0  FUN_1802326f0
// size=263 thunk=false
// signature: undefined FUN_1802326f0()
// status: ok


undefined8 * FUN_1802326f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xe) {
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
    *(undefined1 *)((longlong)param_3 + 0x24) = *(undefined1 *)((longlong)param_1 + 0x24);
    *(undefined1 *)((longlong)param_3 + 0x25) = *(undefined1 *)((longlong)param_1 + 0x25);
    *(undefined1 *)((longlong)param_3 + 0x26) = *(undefined1 *)((longlong)param_1 + 0x26);
    *(undefined4 *)(param_3 + 5) = *(undefined4 *)(param_1 + 5);
    uVar1 = *(undefined8 *)((longlong)param_1 + 0x34);
    *(undefined8 *)((longlong)param_3 + 0x2c) = *(undefined8 *)((longlong)param_1 + 0x2c);
    *(undefined8 *)((longlong)param_3 + 0x34) = uVar1;
    *(undefined1 *)((longlong)param_3 + 0x3c) = *(undefined1 *)((longlong)param_1 + 0x3c);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
    uVar1 = *(undefined8 *)((longlong)param_1 + 0x4c);
    *(undefined8 *)((longlong)param_3 + 0x44) = *(undefined8 *)((longlong)param_1 + 0x44);
    *(undefined8 *)((longlong)param_3 + 0x4c) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_1 + 0x5c);
    *(undefined8 *)((longlong)param_3 + 0x54) = *(undefined8 *)((longlong)param_1 + 0x54);
    *(undefined8 *)((longlong)param_3 + 0x5c) = uVar1;
    *(undefined1 *)((longlong)param_3 + 100) = *(undefined1 *)((longlong)param_1 + 100);
    *(undefined4 *)(param_3 + 0xd) = *(undefined4 *)(param_1 + 0xd);
    param_3 = param_3 + 0xe;
  }
  return param_3;
}


