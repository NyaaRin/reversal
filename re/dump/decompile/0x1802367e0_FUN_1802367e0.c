// 0x1802367e0  FUN_1802367e0
// size=170 thunk=false
// signature: undefined FUN_1802367e0()
// status: ok


void FUN_1802367e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  void *_Memory;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  for (plVar4 = *(longlong **)(param_1 + 0x18); plVar4 != plVar1; plVar4 = plVar4 + 1) {
    puVar2 = (undefined8 *)*plVar4;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  _Memory = *(void **)(param_1 + 8);
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) {
    if ((ulonglong)((longlong)_Memory + (-8 - (longlong)*(void **)((longlong)_Memory + -8))) < 0x20)
    {
      free(*(void **)((longlong)_Memory + -8));
      return;
    }
    _Memory = (void *)0x5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
  }
  free(_Memory);
  return;
}


