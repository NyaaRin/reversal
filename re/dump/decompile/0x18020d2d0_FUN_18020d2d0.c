// 0x18020d2d0  FUN_18020d2d0
// size=186 thunk=false
// signature: undefined FUN_18020d2d0()
// status: ok


void FUN_18020d2d0(longlong *param_1)

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
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar1 = param_1[1];
    for (; local_18 = lVar4, lVar4 != lVar1; lVar4 = lVar4 + 0x30) {
      FUN_18020e450(lVar4 + 0x10);
    }
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    puVar5 = auStack_38;
    if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar2 >> 4) << 4)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8), puVar5 = auStack_38,
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)();
      puVar5 = auStack_30;
    }
    *(undefined8 *)(puVar5 + -8) = 0x18020d36d;
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


