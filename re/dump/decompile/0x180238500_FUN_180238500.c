// 0x180238500  FUN_180238500
// size=144 thunk=false
// signature: undefined FUN_180238500()
// status: ok


void FUN_180238500(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  void *_Memory;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar3 = *(longlong *)(param_1 + 0x18); lVar3 != lVar1; lVar3 = lVar3 + 0x40) {
    FUN_18003abb0(lVar3);
  }
  _Memory = *(void **)(param_1 + 8);
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 6)) {
    if ((ulonglong)((longlong)_Memory + (-8 - (longlong)*(void **)((longlong)_Memory + -8))) < 0x20)
    {
      free(*(void **)((longlong)_Memory + -8));
      return;
    }
    pcVar2 = (code *)swi(0x29);
    _Memory = (void *)(*pcVar2)(5);
  }
  free(_Memory);
  return;
}


