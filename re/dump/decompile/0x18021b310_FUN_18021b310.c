// 0x18021b310  FUN_18021b310
// size=78 thunk=false
// signature: undefined FUN_18021b310()
// status: ok


void FUN_18021b310(undefined8 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_18020e450((longlong)_Memory + 0xa58);
    FUN_18020d5c0((longlong)_Memory + 0x9d8);
    FUN_1800f5240((longlong)_Memory + 8);
    free(_Memory);
    return;
  }
  return;
}


