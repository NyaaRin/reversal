// 0x180309a40  FUN_180309a40
// size=276 thunk=false
// signature: undefined FUN_180309a40()
// status: ok


void FUN_180309a40(void)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  longlong lVar4;
  
  if (DAT_1803fac60 != 0) {
    do {
      FUN_18021cee0();
      DAT_1803fac60 = DAT_1803fac60 + -1;
    } while (DAT_1803fac60 != 0);
    DAT_1803fac58 = 0;
    DAT_1803fac60 = 0;
  }
  pvVar2 = DAT_1803fac48;
  lVar4 = DAT_1803fac50;
  if (DAT_1803fac48 != (void *)0x0) {
    while (0 < lVar4) {
      lVar4 = lVar4 + -1;
      pvVar3 = *(void **)((longlong)pvVar2 + lVar4 * 8);
      if (pvVar3 != (void *)0x0) {
        free(pvVar3);
        pvVar2 = DAT_1803fac48;
      }
    }
    pvVar3 = pvVar2;
    if ((0xfff < (ulonglong)(DAT_1803fac50 * 8)) &&
       (pvVar3 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    free(pvVar3);
    DAT_1803fac48 = (void *)0x0;
    DAT_1803fac50 = 0;
  }
  pvVar2 = DAT_1803fac40;
  DAT_1803fac40 = (void *)0x0;
  free(pvVar2);
  return;
}


