// 0x18030aa10  FUN_18030aa10
// size=104 thunk=false
// signature: undefined FUN_18030aa10()
// status: ok


void FUN_18030aa10(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803ea278 != (void *)0x0) {
    _Memory = DAT_1803ea278;
    puVar2 = auStack_28;
    if ((0xfff < (DAT_1803ea288 - (longlong)DAT_1803ea278 & 0xfffffffffffffff0U)) &&
       (_Memory = *(void **)((longlong)DAT_1803ea278 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803ea278 + (-8 - (longlong)_Memory)))) {
      pcVar1 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar1)(5);
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030aa5d;
    free(_Memory);
    DAT_1803ea288 = 0;
    DAT_1803ea278 = (void *)0x0;
    DAT_1803ea280 = 0;
  }
  return;
}


