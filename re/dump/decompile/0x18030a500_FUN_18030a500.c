// 0x18030a500  FUN_18030a500
// size=197 thunk=false
// signature: undefined FUN_18030a500()
// status: ok


void FUN_18030a500(void)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  pvVar3 = DAT_1803e9df8;
  pvVar2 = DAT_1803e9df0;
  if (DAT_1803e9df0 != (void *)0x0) {
    for (; pvVar2 != pvVar3; pvVar2 = (void *)((longlong)pvVar2 + 0x28)) {
      FUN_18020e450(pvVar2);
    }
    pvVar2 = DAT_1803e9df0;
    puVar4 = auStack_28;
    if (0xfff < (ulonglong)((DAT_1803e9e00 - (longlong)DAT_1803e9df0 >> 3) * 8)) {
      pvVar2 = *(void **)((longlong)DAT_1803e9df0 + -8);
      pvVar3 = (void *)((longlong)DAT_1803e9df0 + (-8 - (longlong)pvVar2));
      puVar4 = auStack_28;
      if ((void *)0x1f < pvVar3) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pvVar2 = pvVar3;
        puVar4 = auStack_20;
      }
    }
    *(undefined8 *)(puVar4 + -8) = 0x18030a5a4;
    free(pvVar2);
    DAT_1803e9df0 = (void *)0x0;
    DAT_1803e9df8 = (void *)0x0;
    DAT_1803e9e00 = 0;
  }
  return;
}


