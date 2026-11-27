// 0x1800132b0  FUN_1800132b0
// size=241 thunk=false
// signature: undefined FUN_1800132b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800132b0(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 **local_60 [3];
  ulonglong local_48;
  undefined8 *local_40;
  undefined8 **local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  plVar3 = *(longlong **)(param_2 + 2);
  local_40 = param_1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_60,uVar1);
  local_68 = 1;
  local_38 = local_60;
  if (0xf < local_48) {
    local_38 = local_60[0];
  }
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  local_30 = 1;
  __std_exception_copy(&local_38);
  *param_1 = vftable_std_runtime_error;
  local_68 = 0;
  FUN_18020e450(local_60);
  *param_1 = vftable_std__System_error;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  param_1[4] = plVar3;
  *param_1 = vftable_std_system_error;
  return param_1;
}


