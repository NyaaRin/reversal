// 0x180309e60  FUN_180309e60
// size=189 thunk=false
// signature: undefined FUN_180309e60()
// status: ok


void FUN_180309e60(void)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  pvVar3 = DAT_1803eb380;
  pvVar2 = DAT_1803eb378;
  if (DAT_1803eb378 != (void *)0x0) {
    for (; pvVar2 != pvVar3; pvVar2 = (void *)((longlong)pvVar2 + 0x70)) {
      FUN_18020e450(pvVar2);
    }
    pvVar2 = DAT_1803eb378;
    puVar4 = auStack_28;
    if (0xfff < (ulonglong)((DAT_1803eb388 - (longlong)DAT_1803eb378 >> 4) * 0x10)) {
      pvVar2 = *(void **)((longlong)DAT_1803eb378 + -8);
      pvVar3 = (void *)((longlong)DAT_1803eb378 + (-8 - (longlong)pvVar2));
      puVar4 = auStack_28;
      if ((void *)0x1f < pvVar3) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pvVar2 = pvVar3;
        puVar4 = auStack_20;
      }
    }
    *(undefined8 *)(puVar4 + -8) = 0x180309efc;
    free(pvVar2);
    DAT_1803eb378 = (void *)0x0;
    DAT_1803eb380 = (void *)0x0;
    DAT_1803eb388 = 0;
  }
  return;
}


