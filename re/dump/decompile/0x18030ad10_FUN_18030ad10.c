// 0x18030ad10  FUN_18030ad10
// size=125 thunk=false
// signature: undefined FUN_18030ad10()
// status: ok


void FUN_18030ad10(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803edce0 != (void *)0x0) {
    _Memory = DAT_1803edce0;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803edcf0 - (longlong)DAT_1803edce0 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)DAT_1803edce0 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803edce0 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030ad72;
    free(_Memory);
    DAT_1803edcf0 = 0;
    DAT_1803edce0 = (void *)0x0;
    DAT_1803edce8 = 0;
  }
  return;
}


