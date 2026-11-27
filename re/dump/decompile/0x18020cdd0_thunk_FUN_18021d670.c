// 0x18020cdd0  thunk_FUN_18021d670
// size=5 thunk=true
// signature: undefined thunk_FUN_18021d670()
// status: ok


void thunk_FUN_18021d670(longlong *param_1)

{
  longlong lVar1;
  void *pvVar2;
  code *pcVar3;
  void *_Memory;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  longlong lStack_18;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar1 = param_1[1];
    for (; lStack_18 = lVar4, lVar4 != lVar1; lVar4 = lVar4 + 0x20) {
      FUN_18020c270(lVar4 + 8);
    }
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    puVar5 = auStack_38;
    if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xffffffffffffffe0U)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8), puVar5 = auStack_38,
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
      pcVar3 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar3)(5);
      puVar5 = auStack_30;
    }
    *(undefined8 *)(puVar5 + -8) = 0x18021d6f4;
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


