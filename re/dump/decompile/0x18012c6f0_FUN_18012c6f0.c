// 0x18012c6f0  FUN_18012c6f0
// size=320 thunk=false
// signature: undefined FUN_18012c6f0()
// status: ok


void FUN_18012c6f0(char param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((DAT_180400eb8 != '\0') || (DAT_180400ea8 != 0)) {
    FUN_180014410("[SKY] RemoveOverride: sky=\'%s\' files=%d reload=%d\n",&DAT_180401180,
                  DAT_180400ea8,param_1);
  }
  iVar1 = 0;
  if (0 < DAT_180400ea8) {
    do {
      puVar2 = &DAT_1803e9ff0 + (longlong)iVar1 * 4;
      if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar1 * 4]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      FUN_1802d7d9c(puVar2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_180400ea8);
  }
  DAT_180400ea8 = 0;
  if ((((param_1 != '\0') && (DAT_180400eb8 != '\0')) && (DAT_180401110 != '\0')) &&
     (DAT_180401180 != '\0')) {
    FUN_18012acc0(&DAT_180401180);
  }
  puVar2 = &DAT_180401118;
  do {
    FUN_18012ab90(*puVar2);
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (puVar2 != (undefined8 *)&DAT_180401148);
  puVar2 = &DAT_180401150;
  do {
    FUN_18012ab90(*puVar2);
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while ((char *)puVar2 != &DAT_180401180);
  DAT_180400eb8 = 0;
  DAT_180401110 = 0;
  DAT_180401180 = 0;
  DAT_180400b20 = 0;
  DAT_180400c00 = 0;
  return;
}


