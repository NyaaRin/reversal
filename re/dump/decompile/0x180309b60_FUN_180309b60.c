// 0x180309b60  FUN_180309b60
// size=227 thunk=false
// signature: undefined FUN_180309b60()
// status: ok


void FUN_180309b60(void)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  longlong lVar4;
  
  if (DAT_18056ffa8 != 0) {
    do {
      DAT_18056ffa8 = DAT_18056ffa8 + -1;
    } while (DAT_18056ffa8 != 0);
    DAT_18056ffa0 = 0;
    DAT_18056ffa8 = 0;
  }
  pvVar2 = DAT_18056ff90;
  lVar4 = DAT_18056ff98;
  if (DAT_18056ff90 != (void *)0x0) {
    while (0 < lVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + lVar4 * 8 + -8);
      lVar4 = lVar4 + -1;
      if (pvVar3 != (void *)0x0) {
        free(pvVar3);
        pvVar2 = DAT_18056ff90;
      }
    }
    pvVar3 = pvVar2;
    if ((0xfff < (ulonglong)(DAT_18056ff98 * 8)) &&
       (pvVar3 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    free(pvVar3);
    DAT_18056ff90 = (void *)0x0;
    DAT_18056ff98 = 0;
  }
  pvVar2 = DAT_18056ff88;
  DAT_18056ff88 = (void *)0x0;
  free(pvVar2);
  return;
}


