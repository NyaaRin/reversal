// 0x18030a980  FUN_18030a980
// size=129 thunk=false
// signature: undefined FUN_18030a980()
// status: ok


void FUN_18030a980(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803e9a98 != (void *)0x0) {
    _Memory = DAT_1803e9a98;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803e9aa8 - (longlong)DAT_1803e9a98 >> 4) << 4)) &&
       (_Memory = *(void **)((longlong)DAT_1803e9a98 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803e9a98 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030a9e6;
    free(_Memory);
    DAT_1803e9aa8 = 0;
    DAT_1803e9a98 = (void *)0x0;
    DAT_1803e9aa0 = 0;
  }
  return;
}


