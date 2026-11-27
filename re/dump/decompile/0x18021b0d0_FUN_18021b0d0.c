// 0x18021b0d0  FUN_18021b0d0
// size=124 thunk=false
// signature: undefined FUN_18021b0d0()
// status: ok


void FUN_18021b0d0(undefined8 *param_1)

{
  void *_Memory;
  
  param_1 = (undefined8 *)*param_1;
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = vftable_Features_DamageLogger_DamageLoggerFeature;
    if (DAT_1804099d8 == param_1) {
      DAT_1804099d8 = (undefined8 *)0x0;
    }
    FUN_18020a720();
    FUN_18021c260(param_1 + 1);
    _Memory = (void *)param_1[1];
    param_1[1] = 0;
    free(_Memory);
    free(param_1);
  }
  return;
}


