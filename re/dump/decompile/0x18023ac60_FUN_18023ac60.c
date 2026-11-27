// 0x18023ac60  FUN_18023ac60
// size=175 thunk=false
// signature: undefined FUN_18023ac60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18023ac60(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  local_38 = *param_1;
  uStack_30 = param_1[1];
  local_28 = param_1[2];
  uStack_20 = param_1[3];
  *(undefined1 *)param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  local_18 = *(undefined4 *)(param_1 + 4);
  FUN_18020e8a0();
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_18020e8a0(param_2,&local_38);
  *(undefined4 *)(param_2 + 0x20) = local_18;
  FUN_18020e450(&local_38);
  return;
}


