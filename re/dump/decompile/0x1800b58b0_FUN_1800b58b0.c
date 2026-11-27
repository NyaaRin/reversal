// 0x1800b58b0  FUN_1800b58b0
// size=137 thunk=false
// signature: undefined FUN_1800b58b0()
// status: ok


longlong FUN_1800b58b0(void)

{
  longlong lVar1;
  uint uVar2;
  char *pcVar3;
  
  if (DAT_1804258e0 == '\0') {
    DAT_1804258e0 = '\x01';
    lVar1 = FUN_1800b5800();
    if (lVar1 != 0) {
      uVar2 = 0;
      do {
        pcVar3 = (char *)((ulonglong)uVar2 + lVar1);
        if (((*pcVar3 == 'H') && (pcVar3[1] == -0x75)) && (pcVar3[2] == -0x75)) {
          lVar1 = (longlong)*(int *)(pcVar3 + 3);
          if (*(int *)(pcVar3 + 3) - 0x101U < 0xfeff) goto LAB_1800b58fa;
          break;
        }
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < 0xc0);
    }
    lVar1 = DAT_1803fcf10;
LAB_1800b58fa:
    DAT_1803fcf10 = lVar1;
    FUN_180014410("[LBY] AnimState ptrOff=+0x%zX valid=%d (from UpdateClientSideAnimation %p)\n",
                  DAT_1803fcf10,DAT_1803fcf10 != 0);
  }
  return DAT_1803fcf10;
}


