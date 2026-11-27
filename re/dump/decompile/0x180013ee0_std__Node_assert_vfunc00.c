// 0x180013ee0  std__Node_assert_vfunc00
// size=117 thunk=false
// signature: undefined std__Node_assert_vfunc00()
// status: ok


undefined8 * std__Node_assert_vfunc00(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = vftable_std__Node_assert;
  puVar2 = (undefined8 *)param_1[4];
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar2[2];
    puVar2[2] = 0;
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  *param_1 = vftable_std__Node_base;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


