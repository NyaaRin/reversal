// 0x180029e60  FUN_180029e60
// size=110 thunk=false
// signature: undefined FUN_180029e60()
// status: ok


void FUN_180029e60(undefined8 *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  code *pcVar3;
  void *_Memory;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  plVar1 = (longlong *)*param_1;
  if ((plVar1 != (longlong *)0x0) && (pvVar2 = (void *)*plVar1, pvVar2 != (void *)0x0)) {
    _Memory = pvVar2;
    puVar4 = auStack_28;
    if ((0xfff < (ulonglong)((plVar1[2] - (longlong)pvVar2 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8), puVar4 = auStack_28,
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)();
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x180029ebb;
    free(_Memory);
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
  return;
}


