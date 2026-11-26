// 0x180210370  FUN_180210370
// size=59 thunk=false
// signature: undefined FUN_180210370()
// status: ok


void * FUN_180210370(longlong param_1,ulonglong param_2)

{
  void *_Memory;
  
  _Memory = (void *)(param_1 + -0xb0);
  FUN_18006afc0(_Memory);
  if ((param_2 & 1) != 0) {
    free(_Memory);
  }
  return _Memory;
}


