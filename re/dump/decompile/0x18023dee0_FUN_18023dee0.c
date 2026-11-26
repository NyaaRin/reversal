// 0x18023dee0  FUN_18023dee0
// size=60 thunk=false
// signature: undefined FUN_18023dee0()
// status: ok


void FUN_18023dee0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  for (param_1 = (undefined8 *)*param_1; param_1 != puVar1; param_1 = param_1 + 1) {
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
    }
  }
  return;
}


