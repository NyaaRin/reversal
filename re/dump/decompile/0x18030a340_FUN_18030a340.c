// 0x18030a340  FUN_18030a340
// size=189 thunk=false
// signature: undefined FUN_18030a340()
// status: ok


void FUN_18030a340(void)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  pvVar3 = DAT_1803e9e50;
  pvVar2 = DAT_1803e9e48;
  if (DAT_1803e9e48 != (void *)0x0) {
    for (; pvVar2 != pvVar3; pvVar2 = (void *)((longlong)pvVar2 + 0x38)) {
      FUN_18020e450(pvVar2);
    }
    pvVar2 = DAT_1803e9e48;
    puVar4 = auStack_28;
    if (0xfff < (ulonglong)((DAT_1803e9e58 - (longlong)DAT_1803e9e48 >> 3) * 8)) {
      pvVar2 = *(void **)((longlong)DAT_1803e9e48 + -8);
      pvVar3 = (void *)((longlong)DAT_1803e9e48 + (-8 - (longlong)pvVar2));
      puVar4 = auStack_28;
      if ((void *)0x1f < pvVar3) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pvVar2 = pvVar3;
        puVar4 = auStack_20;
      }
    }
    *(undefined8 *)(puVar4 + -8) = 0x18030a3dc;
    free(pvVar2);
    DAT_1803e9e48 = (void *)0x0;
    DAT_1803e9e50 = (void *)0x0;
    DAT_1803e9e58 = 0;
  }
  return;
}


