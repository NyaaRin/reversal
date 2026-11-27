// 0x1800688e0  FUN_1800688e0
// size=103 thunk=false
// signature: undefined FUN_1800688e0()
// status: ok


undefined8
FUN_1800688e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_20;
  undefined **local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = &PTR_vftable_std__System_error_category_1803e9500;
  local_10 = param_1;
  FUN_1800681f0(param_1,param_2,&local_20,param_4,0);
  if ((int)local_20 == 0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800670f0("weakly_canonical",&local_20,param_2,param_4,1);
}


