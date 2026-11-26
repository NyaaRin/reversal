// 0x18021b360  FUN_18021b360
// size=70 thunk=false
// signature: undefined FUN_18021b360()
// status: ok


void FUN_18021b360(undefined8 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    _eh_vector_destructor_iterator_((void *)((longlong)_Memory + 8),0x18,0x102,FUN_18021ef60);
    free(_Memory);
    return;
  }
  return;
}


