// 0x180209650  FUN_180209650
// size=167 thunk=false
// signature: undefined FUN_180209650()
// status: ok


void FUN_180209650(longlong *param_1)

{
  longlong lVar1;
  void *pvVar2;
  code *pcVar3;
  void *_Memory;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar1 = param_1[1];
    for (; lVar4 != lVar1; lVar4 = lVar4 + 0x68) {
      FUN_18006b910(lVar4);
    }
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    puVar5 = auStack_28;
    if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar2 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8), puVar5 = auStack_28,
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)();
      puVar5 = auStack_20;
    }
    *(undefined8 *)(puVar5 + -8) = 0x1802096df;
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


