// 0x18030a650  FUN_18030a650
// size=133 thunk=false
// signature: undefined FUN_18030a650()
// status: ok


void FUN_18030a650(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803fcc20 != (void *)0x0) {
    _Memory = DAT_1803fcc20;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803fcc30 - (longlong)DAT_1803fcc20 >> 2) * 4)) &&
       (_Memory = *(void **)((longlong)DAT_1803fcc20 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803fcc20 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030a6ba;
    free(_Memory);
    DAT_1803fcc30 = 0;
    DAT_1803fcc20 = (void *)0x0;
    uRam00000001803fcc28 = 0;
  }
  return;
}


