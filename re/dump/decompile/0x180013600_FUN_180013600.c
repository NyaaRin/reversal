// 0x180013600  FUN_180013600
// size=104 thunk=false
// signature: undefined FUN_180013600()
// status: ok


undefined8 * FUN_180013600(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = vftable_std_runtime_error;
  *param_1 = vftable_std__System_error;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar1;
  *param_1 = vftable_std_system_error;
  return param_1;
}


