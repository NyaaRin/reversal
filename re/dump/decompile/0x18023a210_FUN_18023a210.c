// 0x18023a210  FUN_18023a210
// size=305 thunk=false
// signature: undefined FUN_18023a210()
// status: ok


undefined4 * FUN_18023a210(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  uVar2 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  uVar3 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_1 + 2) = uVar3;
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 6) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 0xc) = 0;
  uVar2 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_2 + 10) = 0;
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 10) = uVar2;
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_2 + 0x12) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0xf;
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)((longlong)param_2 + 0x79);
  param_1[0x1f] = param_2[0x1f];
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  param_1[0x24] = param_2[0x24];
  return param_1;
}


