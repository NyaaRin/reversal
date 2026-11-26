// 0x1801f1180  FUN_1801f1180
// size=145 thunk=false
// signature: undefined FUN_1801f1180()
// status: ok


ulonglong FUN_1801f1180(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulonglong in_RAX;
  
  if (param_2 == (undefined8 *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  uVar1 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = uVar1;
  uVar1 = param_1[5];
  param_2[4] = param_1[4];
  param_2[5] = uVar1;
  uVar1 = param_1[7];
  param_2[6] = param_1[6];
  param_2[7] = uVar1;
  uVar1 = param_1[9];
  param_2[8] = param_1[8];
  param_2[9] = uVar1;
  uVar1 = param_1[0xb];
  param_2[10] = param_1[10];
  param_2[0xb] = uVar1;
  uVar1 = param_1[0xd];
  param_2[0xc] = param_1[0xc];
  param_2[0xd] = uVar1;
  uVar1 = param_1[0xf];
  param_2[0xe] = param_1[0xe];
  param_2[0xf] = uVar1;
  uVar1 = param_1[0x11];
  param_2[0x10] = param_1[0x10];
  param_2[0x11] = uVar1;
  uVar1 = param_1[0x13];
  param_2[0x12] = param_1[0x12];
  param_2[0x13] = uVar1;
  uVar1 = param_1[0x15];
  param_2[0x14] = param_1[0x14];
  param_2[0x15] = uVar1;
  uVar1 = param_1[0x17];
  param_2[0x16] = param_1[0x16];
  param_2[0x17] = uVar1;
  uVar1 = param_1[0x18];
  param_2[0x18] = uVar1;
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}


