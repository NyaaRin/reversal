// 0x180309d10  FUN_180309d10
// size=114 thunk=false
// signature: undefined FUN_180309d10()
// status: ok


void FUN_180309d10(void)

{
  longlong lVar1;
  void *pvVar2;
  code *pcVar3;
  void *_Memory;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pvVar2 = *(void **)(lVar1 + 0xda0);
  if (pvVar2 != (void *)0x0) {
    _Memory = pvVar2;
    puVar4 = auStack_28;
    if ((0xfff < (ulonglong)(*(longlong *)(lVar1 + 0xdb0) - (longlong)pvVar2)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8), puVar4 = auStack_28,
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
      pcVar3 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar3)(5);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x180309d6f;
    free(_Memory);
    *(longlong *)(lVar1 + 0xda0) = 0;
    *(undefined8 *)(lVar1 + 0xda8) = 0;
    *(undefined8 *)(lVar1 + 0xdb0) = 0;
  }
  return;
}


