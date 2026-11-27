// 0x1803090a0  FUN_1803090a0
// size=133 thunk=false
// signature: undefined FUN_1803090a0()
// status: ok


void FUN_1803090a0(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1803eb3e0 != (void *)0x0) {
    _Memory = DAT_1803eb3e0;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1803eb3f0 - (longlong)DAT_1803eb3e0 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)DAT_1803eb3e0 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1803eb3e0 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x18030910a;
    free(_Memory);
    DAT_1803eb3f0 = 0;
    DAT_1803eb3e0 = (void *)0x0;
    DAT_1803eb3e8 = 0;
  }
  return;
}


