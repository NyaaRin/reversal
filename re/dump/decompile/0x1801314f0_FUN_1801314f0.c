// 0x1801314f0  FUN_1801314f0
// size=91 thunk=false
// signature: undefined FUN_1801314f0()
// status: ok


ulonglong FUN_1801314f0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1801311e0();
  if ((char)uVar1 == '\0') {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar1 = 0;
    while ((uVar1 + 1 < 0x80 && (*(char *)(uVar1 + param_1) != '\0'))) {
      *(char *)(uVar1 + param_2) = *(char *)(uVar1 + param_1);
      uVar1 = uVar1 + 1;
    }
    *(undefined1 *)(uVar1 + param_2) = 0;
    uVar1 = CONCAT71((int7)(uVar1 >> 8),uVar1 != 0);
  }
  return uVar1;
}


