// 0x18022b500  std_8_std_E_EV?$allocator_X_JAEBV?$vector_Z_std_filesystem_AEBVpath_34_YA?AUDatabase_Features_Sqlite_?7??Read_V<lambda_2>_?$_Func_impl_no_alloc_vfunc02
// size=174 thunk=false
// signature: undefined std_8_std_E_EV?$allocator_X_JAEBV?$vector_Z_std_filesystem_AEBVpath_34_YA?AUDatabase_Features_Sqlite_?7??Read_V<lambda_2>_?$_Func_impl_no_alloc_vfunc02()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void std_8_std_E_EV__allocator_X_JAEBV__vector_Z_std_filesystem_AEBVpath_34_YA_AUDatabase_Features_Sqlite__7__Read_V<lambda_2>____Func_impl_no_alloc_vfunc02
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  cVar2 = FUN_18014b9d0(param_3,*(undefined8 *)(param_1 + 8));
  if (cVar2 != '\0') {
    lVar1 = **(longlong **)(param_1 + 8);
    if (**(int **)(param_1 + 0x10) <
        (int)((*(longlong **)(param_1 + 8))[1] - lVar1 >> 3) * -0x55555555) {
      FUN_18014bba0(local_30,param_3,lVar1 + (longlong)**(int **)(param_1 + 0x10) * 0x18);
      if (local_20 != 0) {
        FUN_180214300(*(longlong *)(param_1 + 0x18) + 0x40,local_30);
      }
      FUN_18020e450(local_30);
    }
  }
  return;
}


