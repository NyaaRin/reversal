// 0x180235540  FUN_180235540
// size=95 thunk=false
// signature: undefined FUN_180235540()
// status: ok


void FUN_180235540(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  param_1 = (undefined8 *)*param_1;
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    while (puVar2 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)puVar2[2];
      puVar2[2] = 0;
      (**(code **)*puVar2)(puVar2,1);
      puVar2 = puVar1;
    }
    *param_1 = 0;
  }
  return;
}


