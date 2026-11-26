// 0x18023cb00  FUN_18023cb00
// size=105 thunk=false
// signature: undefined FUN_18023cb00()
// status: ok


longlong FUN_18023cb00(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_18016d4c0();
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  uVar1 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  return param_1;
}


