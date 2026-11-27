// 0x180025c00  FUN_180025c00
// size=85 thunk=false
// signature: undefined FUN_180025c00()
// status: ok


undefined8 FUN_180025c00(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  while ((uVar1 + 1 < 0xc0 && (*(char *)(uVar1 + param_1) != '\0'))) {
    *(char *)(uVar1 + param_2) = *(char *)(uVar1 + param_1);
    uVar1 = uVar1 + 1;
  }
  *(undefined1 *)(uVar1 + param_2) = 0;
  return CONCAT71((int7)(uVar1 >> 8),uVar1 != 0);
}


