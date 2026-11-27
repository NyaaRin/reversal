// 0x18030b140  FUN_18030b140
// size=148 thunk=false
// signature: undefined FUN_18030b140()
// status: ok


void FUN_18030b140(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803fcc08 != (void *)0x0) {
    FUN_180214c90(DAT_1803fcc08,DAT_1803fcc10);
    _Memory = DAT_1803fcc08;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803fcc18 - (longlong)DAT_1803fcc08 >> 4) << 4)) &&
       (_Memory = *(void **)((longlong)DAT_1803fcc08 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803fcc08 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030b1b9;
    free(_Memory);
    DAT_1803fcc18 = 0;
    DAT_1803fcc08 = (void *)0x0;
    DAT_1803fcc10 = 0;
  }
  return;
}


