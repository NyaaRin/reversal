// 0x18020b610  FUN_18020b610
// size=118 thunk=false
// signature: undefined FUN_18020b610()
// status: ok


void FUN_18020b610(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_18020e450(puVar1 + 3);
    free(puVar1);
    puVar1 = puVar2;
  }
  free((void *)*param_1);
  return;
}


