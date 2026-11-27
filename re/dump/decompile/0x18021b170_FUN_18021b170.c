// 0x18021b170  FUN_18021b170
// size=62 thunk=false
// signature: undefined FUN_18021b170()
// status: ok


void FUN_18021b170(undefined8 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_180209700((longlong)_Memory + 0x68);
    FUN_18020e450((longlong)_Memory + 0x30);
    free(_Memory);
    return;
  }
  return;
}


