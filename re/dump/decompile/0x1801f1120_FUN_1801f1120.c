// 0x1801f1120  FUN_1801f1120
// size=90 thunk=false
// signature: undefined FUN_1801f1120()
// status: ok


ulonglong FUN_1801f1120(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulonglong in_RAX;
  
  if (param_2 == (undefined4 *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = *(undefined4 *)(param_1 + 0x38);
  param_2[3] = *(undefined4 *)(param_1 + 0x3c);
  param_2[4] = *(undefined4 *)(param_1 + 0x40);
  param_2[5] = *(undefined4 *)(param_1 + 0x44);
  param_2[6] = *(undefined4 *)(param_1 + 0x48);
  param_2[7] = *(undefined4 *)(param_1 + 0x4c);
  param_2[8] = *(undefined4 *)(param_1 + 0x50);
  param_2[9] = *(undefined4 *)(param_1 + 0x54);
  param_2[10] = *(undefined4 *)(param_1 + 0x58);
  param_2[0xb] = *(undefined4 *)(param_1 + 0x5c);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  param_2[0xc] = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}


