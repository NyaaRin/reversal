// 0x18023aae0  FUN_18023aae0
// size=208 thunk=false
// signature: undefined FUN_18023aae0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18023aae0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  uVar1 = *param_1;
  puVar2 = (undefined8 *)(param_1 + 2);
  local_50 = *puVar2;
  uStack_48 = *(undefined8 *)(param_1 + 4);
  local_40 = *(undefined8 *)(param_1 + 6);
  uStack_38 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)puVar2 = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0xf;
  local_30 = param_1[10];
  *param_1 = *param_2;
  local_58 = uVar1;
  FUN_18020e8a0(puVar2,param_2 + 2);
  param_1[10] = param_2[10];
  *param_2 = uVar1;
  FUN_18020e8a0(param_2 + 2,&local_50);
  param_2[10] = local_30;
  FUN_18020e450(&local_50);
  return;
}


