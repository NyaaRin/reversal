// 0x18011f690  FUN_18011f690
// size=75 thunk=false
// signature: undefined FUN_18011f690()
// status: ok


void FUN_18011f690(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  *param_2 = 0;
  if (param_1 != 0) {
    uVar1 = 0;
    while ((uVar1 + 1 < param_3 && (*(char *)(uVar1 + param_1) != '\0'))) {
      param_2[uVar1] = *(char *)(uVar1 + param_1);
      uVar1 = uVar1 + 1;
    }
    param_2[uVar1] = 0;
  }
  return;
}


