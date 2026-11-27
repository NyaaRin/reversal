// 0x180210160  FUN_180210160
// size=184 thunk=false
// signature: undefined FUN_180210160()
// status: ok


undefined4 * FUN_180210160(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_2 + 8) = 0xf;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 0xe) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 0xc) = 0;
  uVar3 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_1 + 10) = uVar3;
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x41) = *(undefined1 *)((longlong)param_2 + 0x41);
  *(undefined1 *)((longlong)param_1 + 0x42) = *(undefined1 *)((longlong)param_2 + 0x42);
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0xf;
  return param_1;
}


