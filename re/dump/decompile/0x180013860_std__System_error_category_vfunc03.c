// 0x180013860  std__System_error_category_vfunc03
// size=115 thunk=false
// signature: undefined std__System_error_category_vfunc03()
// status: ok


int * std__System_error_category_vfunc03(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    *param_2 = 0;
    *(undefined ***)(param_2 + 2) = &PTR_vftable_std__Generic_error_category_1803e7370;
    return param_2;
  }
  iVar1 = std::_Winerror_map(param_3);
  if (iVar1 == 0) {
    *param_2 = param_3;
    *(undefined ***)(param_2 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
    return param_2;
  }
  *param_2 = iVar1;
  *(undefined ***)(param_2 + 2) = &PTR_vftable_std__Generic_error_category_1803e7370;
  return param_2;
}


