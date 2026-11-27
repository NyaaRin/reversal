// 0x18021b520  FUN_18021b520
// size=55 thunk=false
// signature: undefined FUN_18021b520()
// status: ok


void FUN_18021b520(undefined8 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_18020e450((longlong)_Memory + 0xd0);
    free(_Memory);
    return;
  }
  return;
}


