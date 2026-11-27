// 0x18021b2b0  FUN_18021b2b0
// size=52 thunk=false
// signature: undefined FUN_18021b2b0()
// status: ok


void FUN_18021b2b0(undefined8 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_18020bc50((longlong)_Memory + 8);
    free(_Memory);
    return;
  }
  return;
}


