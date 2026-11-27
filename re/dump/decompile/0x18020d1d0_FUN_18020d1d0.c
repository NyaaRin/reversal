// 0x18020d1d0  FUN_18020d1d0
// size=114 thunk=false
// signature: undefined FUN_18020d1d0()
// status: ok


void FUN_18020d1d0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_18020e450();
    free(puVar1);
    puVar1 = puVar2;
  }
  free((void *)*param_1);
  return;
}


