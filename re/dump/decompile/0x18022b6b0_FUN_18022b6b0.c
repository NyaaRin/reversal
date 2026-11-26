// 0x18022b6b0  FUN_18022b6b0
// size=71 thunk=false
// signature: undefined FUN_18022b6b0()
// status: ok


void FUN_18022b6b0(undefined8 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_18020e450((longlong)_Memory + 0x20);
    FUN_18020e450(_Memory);
    free(_Memory);
    return;
  }
  return;
}


