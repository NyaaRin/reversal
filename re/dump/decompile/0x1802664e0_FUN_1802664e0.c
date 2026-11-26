// 0x1802664e0  FUN_1802664e0
// size=107 thunk=false
// signature: undefined FUN_1802664e0()
// status: ok


void FUN_1802664e0(longlong param_1)

{
  code *pcVar1;
  void *_Memory;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_18022a400(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  _Memory = *(void **)(param_1 + 8);
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 4)) {
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


