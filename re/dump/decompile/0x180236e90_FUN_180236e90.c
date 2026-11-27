// 0x180236e90  FUN_180236e90
// size=160 thunk=false
// signature: undefined FUN_180236e90()
// status: ok


void FUN_180236e90(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  void *_Memory;
  void *pvVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  longlong local_18;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    for (lVar4 = *(longlong *)(param_1 + 0x18); local_18 = lVar4, lVar4 != lVar1;
        lVar4 = lVar4 + 0x28) {
      FUN_18020e450(lVar4);
    }
    pvVar3 = *(void **)(param_1 + 8);
    _Memory = pvVar3;
    puVar5 = auStack_38;
    if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x28)) {
      _Memory = *(void **)((longlong)pvVar3 + -8);
      pvVar3 = (void *)((longlong)pvVar3 + (-8 - (longlong)_Memory));
      puVar5 = auStack_38;
      if ((void *)0x1f < pvVar3) {
        pcVar2 = (code *)swi(0x29);
        _Memory = pvVar3;
        (*pcVar2)(5);
        puVar5 = auStack_30;
      }
    }
    *(undefined8 *)(puVar5 + -8) = 0x180236f1f;
    free(_Memory);
  }
  return;
}


