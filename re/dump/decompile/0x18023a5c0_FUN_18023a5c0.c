// 0x18023a5c0  FUN_18023a5c0
// size=264 thunk=false
// signature: undefined FUN_18023a5c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18023a5c0(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = param_1[2];
  uStack_40 = param_1[3];
  *(undefined1 *)param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  local_38 = *(undefined4 *)(param_1 + 4);
  local_20 = param_1[7];
  param_1[7] = 0;
  local_28 = param_1[6];
  param_1[6] = 0;
  local_30 = param_1[5];
  param_1[5] = 0;
  FUN_18020e8a0(param_1,param_2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_18020d830(param_1 + 5,param_2 + 0x28);
  FUN_18020e8a0(param_2,&local_58);
  *(undefined4 *)(param_2 + 0x20) = local_38;
  FUN_18020d830(param_2 + 0x28,&local_30);
  FUN_18020d5c0(&local_30);
  FUN_18020e450(&local_58);
  return;
}


