// 0x18023a350  std_std_D_DV?$regex_traits_?$_Node_class_vfunc00
// size=261 thunk=false
// signature: undefined std_std_D_DV?$regex_traits_?$_Node_class_vfunc00()
// status: ok


undefined8 * std_std_D_DV__regex_traits____Node_class_vfunc00(undefined8 *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = vftable_std_std_D_DV__regex_traits____Node_class;
  pvVar2 = (void *)param_1[4];
  while (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((longlong)pvVar2 + 0x18);
    free(*(void **)((longlong)pvVar2 + 0x10));
    free(pvVar2);
    pvVar2 = pvVar1;
  }
  free((void *)param_1[5]);
  pvVar2 = (void *)param_1[6];
  if (pvVar2 != (void *)0x0) {
    free(*(void **)((longlong)pvVar2 + 8));
    free(pvVar2);
  }
  pvVar2 = (void *)param_1[7];
  if (pvVar2 != (void *)0x0) {
    free(*(void **)((longlong)pvVar2 + 8));
    free(pvVar2);
  }
  pvVar2 = (void *)param_1[9];
  while (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((longlong)pvVar2 + 0x18);
    free(*(void **)((longlong)pvVar2 + 0x10));
    free(pvVar2);
    pvVar2 = pvVar1;
  }
  *param_1 = vftable_std__Node_base;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


