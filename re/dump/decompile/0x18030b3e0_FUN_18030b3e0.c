// 0x18030b3e0  FUN_18030b3e0
// size=100 thunk=false
// signature: undefined FUN_18030b3e0()
// status: ok


void FUN_18030b3e0(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_180423b50 != (void *)0x0) {
    _Memory = DAT_180423b50;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)(DAT_180423b60 - (longlong)DAT_180423b50)) &&
       (_Memory = *(void **)((longlong)DAT_180423b50 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_180423b50 + (-8 - (longlong)_Memory)))) {
      pcVar1 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar1)(5);
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030b429;
    free(_Memory);
    DAT_180423b60 = 0;
    DAT_180423b50 = (void *)0x0;
    DAT_180423b58 = 0;
  }
  return;
}


