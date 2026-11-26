// 0x18006ecb0  FUN_18006ecb0
// size=146 thunk=false
// signature: undefined FUN_18006ecb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18006ecb0(undefined8 *param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  char local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_48 = 0;
  local_40 = param_1;
  FUN_180012ac0(local_38,0x28,&DAT_180346744,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(local_38);
  FUN_18001d080(param_1,local_38,sVar1);
  return param_1;
}


