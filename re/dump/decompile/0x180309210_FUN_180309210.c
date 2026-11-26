// 0x180309210  FUN_180309210
// size=181 thunk=false
// signature: undefined FUN_180309210()
// status: ok


void FUN_180309210(void)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  pvVar3 = DAT_1803eb7d8;
  pvVar2 = DAT_1803eb7d0;
  if (DAT_1803eb7d0 != (void *)0x0) {
    for (; pvVar2 != pvVar3; pvVar2 = (void *)((longlong)pvVar2 + 0x40)) {
      FUN_18020e450((longlong)pvVar2 + 0x20);
      FUN_18020e450(pvVar2);
    }
    pvVar2 = DAT_1803eb7d0;
    puVar4 = auStack_28;
    if (0xfff < (DAT_1803eb7e0 - (longlong)DAT_1803eb7d0 & 0xffffffffffffffc0U)) {
      pvVar2 = *(void **)((longlong)DAT_1803eb7d0 + -8);
      pvVar3 = (void *)((longlong)DAT_1803eb7d0 + (-8 - (longlong)pvVar2));
      puVar4 = auStack_28;
      if ((void *)0x1f < pvVar3) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pvVar2 = pvVar3;
        puVar4 = auStack_20;
      }
    }
    *(undefined8 *)(puVar4 + -8) = 0x1803092a4;
    free(pvVar2);
    DAT_1803eb7d0 = (void *)0x0;
    DAT_1803eb7d8 = (void *)0x0;
    DAT_1803eb7e0 = 0;
  }
  return;
}


