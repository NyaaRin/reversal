// 0x180210490  FUN_180210490
// size=59 thunk=false
// signature: undefined FUN_180210490()
// status: ok


void * FUN_180210490(longlong param_1,ulonglong param_2)

{
  void *_Memory;
  
  _Memory = (void *)(param_1 + -0x88);
  FUN_180014b70(_Memory);
  if ((param_2 & 1) != 0) {
    free(_Memory);
  }
  return _Memory;
}


