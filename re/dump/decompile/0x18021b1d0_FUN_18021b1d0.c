// 0x18021b1d0  FUN_18021b1d0
// size=82 thunk=false
// signature: undefined FUN_18021b1d0()
// status: ok


void FUN_18021b1d0(undefined8 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_18020e450((longlong)_Memory + 0x70);
    FUN_18020e450((longlong)_Memory + 0x50);
    FUN_18020e450((longlong)_Memory + 0x30);
    FUN_18020e450((longlong)_Memory + 0x10);
    free(_Memory);
    return;
  }
  return;
}


