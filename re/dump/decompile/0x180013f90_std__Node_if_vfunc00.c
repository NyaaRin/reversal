// 0x180013f90  std__Node_if_vfunc00
// size=153 thunk=false
// signature: undefined std__Node_if_vfunc00()
// status: ok


undefined8 * std__Node_if_vfunc00(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = vftable_std__Node_if;
  puVar3 = (undefined8 *)param_1[5];
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar3[5];
    puVar3[5] = 0;
    puVar2 = (undefined8 *)param_1[4];
    puVar4 = puVar3;
    while ((puVar3 = puVar1, puVar4 != puVar2 && (puVar4 != (undefined8 *)0x0))) {
      puVar3 = (undefined8 *)puVar4[2];
      puVar4[2] = 0;
      (**(code **)*puVar4)(puVar4,1);
      puVar4 = puVar3;
    }
  }
  *param_1 = vftable_std__Node_base;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


