// 0x18023c700  FUN_18023c700
// size=170 thunk=false
// signature: undefined FUN_18023c700()
// status: ok


void FUN_18023c700(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  void *_Memory;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  for (puVar3 = *(undefined8 **)(param_1 + 0x18); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    if ((void *)*puVar3 != (void *)0x0) {
      free((void *)*puVar3);
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
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
  }
  free(_Memory);
  return;
}


