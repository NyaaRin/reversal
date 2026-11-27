// 0x18022a280  FUN_18022a280
// size=125 thunk=false
// signature: undefined FUN_18022a280()
// status: ok


void FUN_18022a280(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Memory;
  
  *(undefined8 *)param_2[1] = 0;
  _Memory = (undefined8 *)*param_2;
  while (_Memory != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*_Memory;
    FUN_18020e450(_Memory + 8);
    FUN_18020e450(_Memory + 4);
    free(_Memory);
    _Memory = puVar1;
  }
  return;
}


