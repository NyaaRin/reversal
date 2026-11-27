// 0x18011e1d0  FUN_18011e1d0
// size=92 thunk=false
// signature: undefined FUN_18011e1d0()
// status: ok


undefined8 FUN_18011e1d0(longlong param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = 0;
  while (uVar1 + 1 < 0x80) {
    if (*(char *)(uVar1 + param_1) == '\0') break;
    param_2[uVar1] = *(char *)(uVar1 + param_1);
    uVar1 = uVar1 + 1;
  }
  param_2[uVar1] = 0;
  uVar2 = FUN_18011e020(param_2);
  return uVar2;
}


