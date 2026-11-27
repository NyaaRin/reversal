// 0x180210330  FUN_180210330
// size=59 thunk=false
// signature: undefined FUN_180210330()
// status: ok


void * FUN_180210330(longlong param_1,ulonglong param_2)

{
  void *_Memory;
  
  _Memory = (void *)(param_1 + -0xa8);
  FUN_18006b050(_Memory);
  if ((param_2 & 1) != 0) {
    free(_Memory);
  }
  return _Memory;
}


