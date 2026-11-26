// 0x180266720  FUN_180266720
// size=214 thunk=false
// signature: undefined FUN_180266720()
// status: ok


void FUN_180266720(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  void *pvVar2;
  code *pcVar3;
  void *_Memory;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar1 = param_1[1];
    for (; lVar4 != lVar1; lVar4 = lVar4 + 0x60) {
      FUN_18023b050(lVar4);
    }
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    puVar5 = auStack_38;
    if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar2 >> 5) << 5)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8), puVar5 = auStack_38,
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)();
      puVar5 = auStack_30;
    }
    *(undefined8 *)(puVar5 + -8) = 0x1802667c1;
    free(_Memory);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x60 + param_2;
  param_1[2] = param_4 * 0x60 + param_2;
  return;
}


