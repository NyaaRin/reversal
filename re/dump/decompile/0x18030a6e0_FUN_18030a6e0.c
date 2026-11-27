// 0x18030a6e0  FUN_18030a6e0
// size=104 thunk=false
// signature: undefined FUN_18030a6e0()
// status: ok


void FUN_18030a6e0(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803eb360 != (void *)0x0) {
    _Memory = DAT_1803eb360;
    puVar2 = auStack_28;
    if ((0xfff < (DAT_1803eb370 - (longlong)DAT_1803eb360 & 0xffffffffffffffe0U)) &&
       (_Memory = *(void **)((longlong)DAT_1803eb360 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803eb360 + (-8 - (longlong)_Memory)))) {
      pcVar1 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar1)(5);
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030a72d;
    free(_Memory);
    DAT_1803eb370 = 0;
    DAT_1803eb360 = (void *)0x0;
    DAT_1803eb368 = 0;
  }
  return;
}


