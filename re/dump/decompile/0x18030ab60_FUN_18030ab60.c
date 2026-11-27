// 0x18030ab60  FUN_18030ab60
// size=125 thunk=false
// signature: undefined FUN_18030ab60()
// status: ok


void FUN_18030ab60(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_180425a10 != (void *)0x0) {
    _Memory = DAT_180425a10;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_180425a20 - (longlong)DAT_180425a10 >> 2) * 4)) &&
       (_Memory = *(void **)((longlong)DAT_180425a10 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_180425a10 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030abc2;
    free(_Memory);
    DAT_180425a20 = 0;
    DAT_180425a10 = (void *)0x0;
    DAT_180425a18 = 0;
  }
  return;
}


