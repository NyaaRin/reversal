// 0x18021b410  FUN_18021b410
// size=52 thunk=false
// signature: undefined FUN_18021b410()
// status: ok


void FUN_18021b410(undefined8 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_18020ad50((longlong)_Memory + 8);
    free(_Memory);
    return;
  }
  return;
}


