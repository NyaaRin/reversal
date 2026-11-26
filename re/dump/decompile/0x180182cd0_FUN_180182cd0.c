// 0x180182cd0  FUN_180182cd0
// size=145 thunk=false
// signature: undefined FUN_180182cd0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180182cd0(undefined8 *param_1,uint param_2)

{
  size_t sVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_50;
  char local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  local_58 = 0;
  local_50 = param_1;
  FUN_180207af0(local_48,"STEAM_0:%u:%u",param_2 & 1,param_2 >> 1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(local_48);
  FUN_18001d080(param_1,local_48,sVar1);
  return param_1;
}


