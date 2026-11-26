// 0x1802104d0  FUN_1802104d0
// size=59 thunk=false
// signature: undefined FUN_1802104d0()
// status: ok


void * FUN_1802104d0(longlong param_1,ulonglong param_2)

{
  void *_Memory;
  
  _Memory = (void *)(param_1 + -0x90);
  FUN_180071340(_Memory);
  if ((param_2 & 1) != 0) {
    free(_Memory);
  }
  return _Memory;
}


