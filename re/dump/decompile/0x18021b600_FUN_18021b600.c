// 0x18021b600  FUN_18021b600
// size=52 thunk=false
// signature: undefined FUN_18021b600()
// status: ok


void FUN_18021b600(undefined8 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_18020e450((longlong)_Memory + 0x28);
    free(_Memory);
    return;
  }
  return;
}


