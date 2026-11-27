// 0x180240ad0  FUN_180240ad0
// size=162 thunk=false
// signature: undefined FUN_180240ad0()
// status: ok


void FUN_180240ad0(longlong param_1)

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
  longlong local_10;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    for (lVar4 = *(longlong *)(param_1 + 0x18); local_18 = lVar4, lVar4 != lVar1;
        lVar4 = lVar4 + 0x40) {
      FUN_18020d430(lVar4 + 0x28);
      local_10 = lVar4 + 8;
      FUN_18021e060();
    }
    pvVar2 = *(void **)(param_1 + 8);
    _Memory = pvVar2;
    puVar5 = auStack_38;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 6)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8), puVar5 = auStack_38,
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
      pcVar3 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar3)(5);
      puVar5 = auStack_30;
    }
    *(undefined8 *)(puVar5 + -8) = 0x180240b61;
    free(_Memory);
  }
  return;
}


