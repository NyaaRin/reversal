// 0x18021d150  FUN_18021d150
// size=188 thunk=false
// signature: undefined FUN_18021d150()
// status: ok


void FUN_18021d150(longlong param_1)

{
  void *pvVar1;
  code *pcVar2;
  longlong lVar3;
  void *_Memory;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    do {
      lVar3 = lVar3 + -1;
      *(longlong *)(param_1 + 0x20) = lVar3;
    } while (lVar3 != 0);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    while (0 < lVar3) {
      lVar3 = lVar3 + -1;
      pvVar1 = *(void **)(*(longlong *)(param_1 + 8) + lVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
      }
    }
    pvVar1 = *(void **)(param_1 + 8);
    _Memory = pvVar1;
    puVar4 = auStack_28;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8), puVar4 = auStack_28,
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x18021d1f6;
    free(_Memory);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


