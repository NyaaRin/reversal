// 0x180066f90  FUN_180066f90
// size=166 thunk=false
// signature: undefined FUN_180066f90()
// status: ok


undefined8 * FUN_180066f90(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = vftable_std_runtime_error;
  *param_1 = vftable_std__System_error;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *param_1 = vftable_std_system_error;
  *param_1 = vftable_std_filesystem_filesystem_error;
  FUN_18020e540(param_1 + 5,param_2 + 0x28);
  FUN_18020e540(param_1 + 9,param_2 + 0x48);
  FUN_18016d4c0(param_1 + 0xd,param_2 + 0x68);
  return param_1;
}


