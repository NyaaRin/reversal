// 0x18022b620  FUN_18022b620
// size=61 thunk=false
// signature: undefined FUN_18022b620()
// status: ok


void FUN_18022b620(undefined8 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_18020e450(_Memory);
    free(_Memory);
    return;
  }
  return;
}


