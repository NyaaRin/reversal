// 0x1801f1770  FUN_1801f1770
// size=113 thunk=false
// signature: undefined FUN_1801f1770()
// status: ok


undefined8 FUN_1801f1770(void)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 0x40; iVar1 = iVar1 + 1) {
    if (DAT_180409884 < 1) goto LAB_1801f17c2;
    FUN_18012a350();
    if (DAT_180409880 != '\0') {
      FUN_18012a210(1);
    }
  }
  if (DAT_180409884 < 1) {
LAB_1801f17c2:
    FUN_18012a350();
  }
  else {
    DAT_180409884 = 1;
    FUN_18012a350();
  }
  if (DAT_180409880 != '\0') {
    FUN_18012a210(1);
  }
  return 1;
}


