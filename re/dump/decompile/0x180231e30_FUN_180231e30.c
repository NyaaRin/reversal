// 0x180231e30  FUN_180231e30
// size=456 thunk=false
// signature: undefined FUN_180231e30()
// status: ok


undefined4 *
FUN_180231e30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  puVar5 = param_3;
  if (param_1 != param_2) {
    puVar5 = (undefined4 *)0x0;
    do {
      *param_3 = *param_1;
      *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_1 + 1);
      *(undefined1 *)((longlong)param_3 + 5) = *(undefined1 *)((longlong)param_1 + 5);
      *(undefined1 *)((longlong)param_3 + 6) = *(undefined1 *)((longlong)param_1 + 6);
      *(undefined1 *)((longlong)param_3 + 7) = *(undefined1 *)((longlong)param_1 + 7);
      *(undefined1 *)(param_3 + 2) = *(undefined1 *)(param_1 + 2);
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_1 + 4);
      param_3[6] = param_1[6];
      *(undefined8 *)(param_3 + 8) = 0;
      *(undefined8 *)(param_3 + 10) = 0;
      *(undefined8 *)(param_3 + 0xc) = 0;
      *(undefined8 *)(param_3 + 0xe) = 0;
      uVar4 = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_3 + 10) = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)(param_3 + 0xe) = uVar4;
      *(undefined8 *)(param_1 + 0xe) = 0xf;
      *(undefined1 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_3 + 0x10) = 0;
      *(undefined8 *)(param_3 + 0x12) = 0;
      *(undefined8 *)(param_3 + 0x14) = 0;
      *(undefined8 *)(param_3 + 0x16) = 0;
      uVar4 = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_3 + 0x12) = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0x16);
      *(undefined8 *)(param_3 + 0x14) = *(undefined8 *)(param_1 + 0x14);
      *(undefined8 *)(param_3 + 0x16) = uVar4;
      *(undefined8 *)(param_1 + 0x16) = 0xf;
      *(undefined1 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x14) = 0;
      *(undefined8 *)(param_3 + 0x18) = 0;
      *(undefined8 *)(param_3 + 0x1a) = 0;
      *(undefined8 *)(param_3 + 0x1c) = 0;
      *(undefined8 *)(param_3 + 0x1e) = 0;
      uVar4 = *(undefined8 *)(param_1 + 0x1a);
      *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_3 + 0x1a) = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0x1e);
      *(undefined8 *)(param_3 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
      *(undefined8 *)(param_3 + 0x1e) = uVar4;
      *(undefined8 *)(param_1 + 0x1e) = 0xf;
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x1c) = 0;
      *(undefined8 *)(param_3 + 0x20) = 0;
      *(undefined8 *)(param_3 + 0x22) = 0;
      *(undefined8 *)(param_3 + 0x24) = 0;
      *(undefined8 *)(param_3 + 0x26) = 0;
      uVar1 = param_1[0x21];
      uVar2 = param_1[0x22];
      uVar3 = param_1[0x23];
      param_3[0x20] = param_1[0x20];
      param_3[0x21] = uVar1;
      param_3[0x22] = uVar2;
      param_3[0x23] = uVar3;
      uVar1 = param_1[0x25];
      uVar2 = param_1[0x26];
      uVar3 = param_1[0x27];
      param_3[0x24] = param_1[0x24];
      param_3[0x25] = uVar1;
      param_3[0x26] = uVar2;
      param_3[0x27] = uVar3;
      *(undefined1 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 0x26) = 0xf;
      param_3[0x28] = param_1[0x28];
      param_3[0x29] = param_1[0x29];
      *(undefined1 *)(param_3 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
      *(undefined1 *)((longlong)param_3 + 0xa9) = *(undefined1 *)((longlong)param_1 + 0xa9);
      *(undefined1 *)((longlong)param_3 + 0xaa) = *(undefined1 *)((longlong)param_1 + 0xaa);
      param_3 = param_3 + 0x2c;
      param_1 = param_1 + 0x2c;
    } while (param_1 != param_2);
  }
  FUN_18022a210(param_3,param_3,puVar5,param_4,param_3,param_3,param_4);
  return param_3;
}


