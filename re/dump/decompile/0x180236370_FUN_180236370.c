// 0x180236370  FUN_180236370
// size=107 thunk=false
// signature: undefined FUN_180236370()
// status: ok


void FUN_180236370(longlong param_1)

{
  code *pcVar1;
  void *_Memory;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_18022a210(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  _Memory = *(void **)(param_1 + 8);
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0xb0)) {
    if ((ulonglong)((longlong)_Memory + (-8 - (longlong)*(void **)((longlong)_Memory + -8))) < 0x20)
    {
      free(*(void **)((longlong)_Memory + -8));
      return;
    }
    pcVar1 = (code *)swi(0x29);
    _Memory = (void *)(*pcVar1)(5);
  }
  free(_Memory);
  return;
}


