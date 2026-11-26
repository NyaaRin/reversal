// 0x18020a7b0  FUN_18020a7b0
// size=39 thunk=false
// signature: undefined FUN_18020a7b0()
// status: ok


void FUN_18020a7b0(undefined8 *param_1)

{
  void *_Memory;
  
  FUN_18021c260();
  _Memory = (void *)*param_1;
  *param_1 = 0;
  free(_Memory);
  return;
}


