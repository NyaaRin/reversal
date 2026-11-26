// 0x1800133b0  FUN_1800133b0
// size=392 thunk=false
// signature: undefined FUN_1800133b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800133b0(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 **local_b0;
  longlong lStack_a8;
  longlong local_a0;
  ulonglong uStack_98;
  undefined8 *local_90;
  longlong *local_88;
  undefined8 *local_80 [4];
  undefined8 **local_60;
  undefined1 local_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  plVar3 = *(longlong **)(param_2 + 2);
  local_60 = local_80;
  local_90 = param_1;
  plVar4 = (longlong *)FUN_18016d4c0(local_80,param_3);
  local_88 = plVar4;
  if (plVar4[2] != 0) {
    FUN_18021aef0(plVar4,&DAT_18033e5b0,2);
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_60,uVar1);
  local_b8 = 2;
  pppuVar5 = &local_60;
  if (0xf < local_48) {
    pppuVar5 = (undefined8 ***)local_60;
  }
  FUN_18021aef0(plVar4,pppuVar5,local_50);
  local_b8 = 0;
  FUN_18020e450(&local_60);
  local_b0 = (undefined8 **)*plVar4;
  lStack_a8 = plVar4[1];
  local_a0 = plVar4[2];
  uStack_98 = plVar4[3];
  *(undefined1 *)plVar4 = 0;
  plVar4[2] = 0;
  plVar4[3] = 0xf;
  local_b8 = 1;
  FUN_18020e450(plVar4);
  local_60 = &local_b0;
  if (0xf < uStack_98) {
    local_60 = local_b0;
  }
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  local_58 = 1;
  __std_exception_copy(&local_60);
  *param_1 = vftable_std_runtime_error;
  local_b8 = 0;
  FUN_18020e450(&local_b0);
  *param_1 = vftable_std__System_error;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  param_1[4] = plVar3;
  *param_1 = vftable_std_system_error;
  return param_1;
}


