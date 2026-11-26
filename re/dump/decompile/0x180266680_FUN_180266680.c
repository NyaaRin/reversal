// 0x180266680  FUN_180266680
// size=160 thunk=false
// signature: undefined FUN_180266680()
// status: ok


void FUN_180266680(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  void *_Memory;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar3 = *(longlong *)(param_1 + 0x18); lVar3 != lVar1; lVar3 = lVar3 + 0x60) {
    FUN_18023b050(lVar3);
  }
  _Memory = *(void **)(param_1 + 8);
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x60)) {
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


