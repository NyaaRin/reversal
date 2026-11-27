// 0x180264c40  FUN_180264c40
// size=179 thunk=false
// signature: undefined FUN_180264c40()
// status: ok


undefined1 * FUN_180264c40(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x48) {
    *param_3 = *param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_3 + 0x10) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_3 + 0x20) = uVar1;
    *(undefined8 *)(param_3 + 0x28) = 0;
    *(undefined8 *)(param_3 + 0x30) = 0;
    *(undefined8 *)(param_3 + 0x38) = 0;
    *(undefined8 *)(param_3 + 0x40) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_3 + 0x30) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_3 + 0x40) = uVar1;
    param_1[0x28] = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0xf;
    param_3 = param_3 + 0x48;
  }
  return param_3;
}


