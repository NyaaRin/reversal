// 0x180237fc0  FUN_180237fc0
// size=204 thunk=false
// signature: undefined FUN_180237fc0()
// status: ok


void FUN_180237fc0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  void *pvVar2;
  code *pcVar3;
  void *_Memory;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  longlong local_48;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar1 = param_1[1];
    for (; local_48 = lVar4, lVar4 != lVar1; lVar4 = lVar4 + 0x70) {
      FUN_18020e450(lVar4 + 0x28);
      FUN_18020e450(lVar4 + 8);
    }
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    puVar5 = auStack_68;
    if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar2 >> 4) * 0x10)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8), puVar5 = auStack_68,
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)();
      puVar5 = auStack_60;
    }
    *(undefined8 *)(puVar5 + -8) = 0x180238066;
    free(_Memory);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x70 + param_2;
  param_1[2] = param_4 * 0x70 + param_2;
  return;
}


