// 0x1802661a0  FUN_1802661a0
// size=146 thunk=false
// signature: undefined FUN_1802661a0()
// status: ok


void FUN_1802661a0(longlong param_1)

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
        lVar4 = lVar4 + 0x20) {
      FUN_18020abf0(lVar4);
    }
    pvVar2 = *(void **)(param_1 + 8);
    _Memory = pvVar2;
    puVar5 = auStack_38;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 5)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8), puVar5 = auStack_38,
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
      pcVar3 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar3)(5);
      puVar5 = auStack_30;
    }
    *(undefined8 *)(puVar5 + -8) = 0x180266221;
    free(_Memory);
  }
  return;
}


