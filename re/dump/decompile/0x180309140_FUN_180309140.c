// 0x180309140  FUN_180309140
// size=100 thunk=false
// signature: undefined FUN_180309140()
// status: ok


void FUN_180309140(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803edc38 != (void *)0x0) {
    _Memory = DAT_1803edc38;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)(DAT_1803edc48 - (longlong)DAT_1803edc38)) &&
       (_Memory = *(void **)((longlong)DAT_1803edc38 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803edc38 + (-8 - (longlong)_Memory)))) {
      pcVar1 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar1)(5);
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x180309189;
    free(_Memory);
    DAT_1803edc48 = 0;
    DAT_1803edc38 = (void *)0x0;
    DAT_1803edc40 = 0;
  }
  return;
}


