// 0x18020a440  FUN_18020a440
// size=127 thunk=false
// signature: undefined FUN_18020a440()
// status: ok


void FUN_18020a440(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_18020a5a0(puVar1 + 4);
    free(puVar1);
    puVar1 = puVar2;
  }
  free((void *)*param_1);
  return;
}


