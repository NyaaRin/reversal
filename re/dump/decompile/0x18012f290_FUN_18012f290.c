// 0x18012f290  FUN_18012f290
// size=111 thunk=false
// signature: undefined FUN_18012f290()
// status: ok


void FUN_18012f290(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_180400ea8) {
    do {
      puVar1 = &DAT_1803e9ff0 + (longlong)iVar2 * 4;
      if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar2 * 4]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      FUN_1802d7d9c(puVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_180400ea8);
  }
  DAT_180400ea8 = 0;
  DAT_180400b80 = 0;
  DAT_180401111 = 0;
  DAT_180400e51 = 0;
  return;
}


