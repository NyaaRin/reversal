// 0x18030a140  FUN_18030a140
// size=115 thunk=false
// signature: undefined FUN_18030a140()
// status: ok


void FUN_18030a140(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803e9f48 != (void *)0x0) {
    _Memory = DAT_1803e9f48;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803e9f58 - (longlong)DAT_1803e9f48 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)DAT_1803e9f48 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803e9f48 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030a198;
    free(_Memory);
    DAT_1803e9f58 = 0;
    DAT_1803e9f48 = (void *)0x0;
    DAT_1803e9f50 = 0;
  }
  return;
}


