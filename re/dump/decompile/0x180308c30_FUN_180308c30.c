// 0x180308c30  FUN_180308c30
// size=115 thunk=false
// signature: undefined FUN_180308c30()
// status: ok


void FUN_180308c30(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_18042a8b8 != (void *)0x0) {
    _Memory = DAT_18042a8b8;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_18042a8c8 - (longlong)DAT_18042a8b8 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)DAT_18042a8b8 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_18042a8b8 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x180308c88;
    free(_Memory);
    DAT_18042a8c8 = 0;
    DAT_18042a8b8 = (void *)0x0;
    uRam000000018042a8c0 = 0;
  }
  return;
}


