// 0x180309f50  FUN_180309f50
// size=129 thunk=false
// signature: undefined FUN_180309f50()
// status: ok


void FUN_180309f50(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803e9bf0 != (void *)0x0) {
    _Memory = DAT_1803e9bf0;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803e9c00 - (longlong)DAT_1803e9bf0 >> 4) << 4)) &&
       (_Memory = *(void **)((longlong)DAT_1803e9bf0 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803e9bf0 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x180309fb6;
    free(_Memory);
    DAT_1803e9c00 = 0;
    DAT_1803e9bf0 = (void *)0x0;
    DAT_1803e9bf8 = 0;
  }
  return;
}


