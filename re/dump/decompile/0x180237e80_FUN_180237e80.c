// 0x180237e80  FUN_180237e80
// size=154 thunk=false
// signature: undefined FUN_180237e80()
// status: ok


void FUN_180237e80(longlong param_1)

{
  longlong lVar1;
  void *pvVar2;
  code *pcVar3;
  void *_Memory;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  longlong local_18;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    for (lVar4 = *(longlong *)(param_1 + 0x18); local_18 = lVar4, lVar4 != lVar1;
        lVar4 = lVar4 + 0x30) {
      FUN_18020e450(lVar4 + 8);
    }
    pvVar2 = *(void **)(param_1 + 8);
    _Memory = pvVar2;
    puVar5 = auStack_38;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x30)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8), puVar5 = auStack_38,
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)();
      puVar5 = auStack_30;
    }
    *(undefined8 *)(puVar5 + -8) = 0x180237f09;
    free(_Memory);
  }
  return;
}


