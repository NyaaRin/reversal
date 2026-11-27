// 0x1800b5050  FUN_1800b5050
// size=84 thunk=false
// signature: undefined FUN_1800b5050()
// status: ok


undefined1 FUN_1800b5050(longlong param_1)

{
  undefined1 uVar1;
  
  if ((((*(char *)(param_1 + 0x4a) == 'H') && (*(char *)(param_1 + 0x4b) == 'c')) &&
      (*(char *)(param_1 + 0x4c) == '=')) &&
     (((*(char *)(param_1 + 0x60) == 'H' && (*(char *)(param_1 + 0x61) == -0x75)) &&
      (*(char *)(param_1 + 0x62) == '\x05')))) {
    DAT_18040a5f8 = (longlong)*(int *)(param_1 + 0x4d) + 0x51 + param_1;
    DAT_18040a5f0 = (longlong)*(int *)(param_1 + 99) + 0x67 + param_1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


