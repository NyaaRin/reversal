// 0x18021b3b0  FUN_18021b3b0
// size=62 thunk=false
// signature: undefined FUN_18021b3b0()
// status: ok


void FUN_18021b3b0(undefined8 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_18020c420((longlong)_Memory + 0x20);
    FUN_18020b940((longlong)_Memory + 8);
    free(_Memory);
    return;
  }
  return;
}


