// 0x1801cacc0  FUN_1801cacc0
// size=140 thunk=false
// signature: undefined FUN_1801cacc0()
// status: ok


longlong FUN_1801cacc0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_18020e8a0();
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x4c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x5c) = uVar1;
  *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  return param_1;
}


