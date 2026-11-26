// 0x180309650  FUN_180309650
// size=175 thunk=false
// signature: undefined FUN_180309650()
// status: ok


void FUN_180309650(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar3 = DAT_1803fcc70;
  puVar2 = DAT_1803fcc68;
  if (DAT_1803fcc68 != (undefined8 *)0x0) {
    for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
      if ((void *)*puVar2 != (void *)0x0) {
        free((void *)*puVar2);
      }
    }
    puVar2 = DAT_1803fcc68;
    puVar4 = auStack_28;
    if (0xfff < (ulonglong)((DAT_1803fcc78 - (longlong)DAT_1803fcc68 >> 3) * 8)) {
      puVar2 = (undefined8 *)DAT_1803fcc68[-1];
      puVar3 = (undefined8 *)((longlong)DAT_1803fcc68 + (-8 - (longlong)puVar2));
      puVar4 = auStack_28;
      if ((undefined8 *)0x1f < puVar3) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar2 = puVar3;
        puVar4 = auStack_20;
      }
    }
    *(undefined8 *)(puVar4 + -8) = 0x1803096e3;
    free(puVar2);
    DAT_1803fcc78 = 0;
    DAT_1803fcc68 = (undefined8 *)0x0;
    DAT_1803fcc70 = (undefined8 *)0x0;
  }
  return;
}


