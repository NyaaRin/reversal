// 0x180308cb0  FUN_180308cb0
// size=115 thunk=false
// signature: undefined FUN_180308cb0()
// status: ok


void FUN_180308cb0(void)

{
  code *pcVar1;
  void *_Memory;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1805beef0 != (void *)0x0) {
    _Memory = DAT_1805beef0;
    puVar2 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1805bef00 - (longlong)DAT_1805beef0 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)DAT_1805beef0 + -8), puVar2 = auStack_28,
       0x1f < (ulonglong)((longlong)DAT_1805beef0 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar2 = auStack_20;
    }
    *(undefined8 *)(puVar2 + -8) = 0x180308d08;
    free(_Memory);
    DAT_1805bef00 = 0;
    DAT_1805beef0 = (void *)0x0;
    uRam00000001805beef8 = 0;
  }
  return;
}


