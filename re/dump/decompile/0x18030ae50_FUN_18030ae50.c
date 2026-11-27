// 0x18030ae50  FUN_18030ae50
// size=129 thunk=false
// signature: undefined FUN_18030ae50()
// status: ok


void FUN_18030ae50(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_180423b00 != (void *)0x0) {
    _Memory = DAT_180423b00;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_180423b10 - (longlong)DAT_180423b00 >> 4) << 4)) &&
       (_Memory = *(void **)((longlong)DAT_180423b00 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_180423b00 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030aeb6;
    free(_Memory);
    DAT_180423b10 = 0;
    DAT_180423b00 = (void *)0x0;
    DAT_180423b08 = 0;
  }
  return;
}


