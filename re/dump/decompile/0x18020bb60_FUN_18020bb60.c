// 0x18020bb60  FUN_18020bb60
// size=233 thunk=false
// signature: undefined FUN_18020bb60()
// status: ok


void FUN_18020bb60(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  void *pvVar3;
  code *pcVar4;
  void *_Memory;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  longlong local_28;
  longlong *local_20;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar1 = param_1[1];
    for (; local_28 = lVar5, lVar5 != lVar1; lVar5 = lVar5 + 0x68) {
      local_20 = (longlong *)(lVar5 + 0x28);
      plVar2 = *(longlong **)(lVar5 + 0x60);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != local_20);
        *(undefined8 *)(lVar5 + 0x60) = 0;
      }
      FUN_18020e450(lVar5 + 8);
    }
    pvVar3 = (void *)*param_1;
    _Memory = pvVar3;
    puVar6 = auStack_48;
    if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar3 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)pvVar3 + -8), puVar6 = auStack_48,
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)();
      puVar6 = auStack_40;
    }
    *(undefined8 *)(puVar6 + -8) = 0x18020bc2b;
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


