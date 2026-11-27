// 0x180196f10  FUN_180196f10
// size=43 thunk=false
// signature: undefined FUN_180196f10()
// status: ok


ulonglong FUN_180196f10(longlong param_1,ulonglong param_2,ulonglong *param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  *param_3 = 0;
  if (param_1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = 0;
  while ((uVar1 < param_2 && (*(char *)(uVar1 + param_1) != '\0'))) {
    uVar1 = uVar1 + 1;
    *param_3 = uVar1;
  }
  return CONCAT71((int7)(uVar1 >> 8),uVar1 < param_2);
}


