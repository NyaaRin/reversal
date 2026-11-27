// 0x1803094d0  FUN_1803094d0
// size=277 thunk=false
// signature: undefined FUN_1803094d0()
// status: ok


void FUN_1803094d0(void)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  longlong lVar4;
  
  if (DAT_1805c3988 != 0) {
    do {
      FUN_18006e960(*(undefined8 *)
                     ((longlong)DAT_1805c3970 +
                     (DAT_1805c3980 + -1 + DAT_1805c3988 & DAT_1805c3978 - 1U) * 8));
      DAT_1805c3988 = DAT_1805c3988 + -1;
    } while (DAT_1805c3988 != 0);
    DAT_1805c3980 = 0;
    DAT_1805c3988 = 0;
  }
  pvVar2 = DAT_1805c3970;
  lVar4 = DAT_1805c3978;
  if (DAT_1805c3970 != (void *)0x0) {
    while (0 < lVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + lVar4 * 8 + -8);
      lVar4 = lVar4 + -1;
      if (pvVar3 != (void *)0x0) {
        free(pvVar3);
        pvVar2 = DAT_1805c3970;
      }
    }
    pvVar3 = pvVar2;
    if ((0xfff < (ulonglong)(DAT_1805c3978 * 8)) &&
       (pvVar3 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    free(pvVar3);
    DAT_1805c3970 = (void *)0x0;
    DAT_1805c3978 = 0;
  }
  pvVar2 = DAT_1805c3968;
  DAT_1805c3968 = (void *)0x0;
  free(pvVar2);
  return;
}


