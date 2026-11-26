// 0x180196e70  FUN_180196e70
// size=150 thunk=false
// signature: undefined FUN_180196e70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180196e70(undefined8 *param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  char local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  local_28[0x10] = 0;
  local_30 = param_1;
  FUN_180208b00(local_28,"%016llx",param_2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(local_28);
  FUN_18001d080(param_1,local_28,sVar1);
  return param_1;
}


