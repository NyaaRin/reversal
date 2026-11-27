// 0x18030af90  FUN_18030af90
// size=290 thunk=false
// signature: undefined FUN_18030af90()
// status: ok


void FUN_18030af90(void)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  longlong lVar4;
  
  if (DAT_18056df30 != 0) {
    do {
      lVar4 = *(longlong *)
               ((longlong)DAT_18056df18 +
               (DAT_18056df30 + DAT_18056df28 + -1 & DAT_18056df20 - 1U) * 8);
      FUN_18020e450(lVar4 + 0x20);
      FUN_18020e450(lVar4);
      DAT_18056df30 = DAT_18056df30 + -1;
    } while (DAT_18056df30 != 0);
    DAT_18056df28 = 0;
    DAT_18056df30 = 0;
  }
  pvVar2 = DAT_18056df18;
  lVar4 = DAT_18056df20;
  if (DAT_18056df18 != (void *)0x0) {
    while (0 < lVar4) {
      lVar4 = lVar4 + -1;
      pvVar3 = *(void **)((longlong)pvVar2 + lVar4 * 8);
      if (pvVar3 != (void *)0x0) {
        free(pvVar3);
        pvVar2 = DAT_18056df18;
      }
    }
    pvVar3 = pvVar2;
    if ((0xfff < (ulonglong)(DAT_18056df20 * 8)) &&
       (pvVar3 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    free(pvVar3);
    DAT_18056df18 = (void *)0x0;
    DAT_18056df20 = 0;
  }
  pvVar2 = DAT_18056df10;
  DAT_18056df10 = (void *)0x0;
  free(pvVar2);
  return;
}


