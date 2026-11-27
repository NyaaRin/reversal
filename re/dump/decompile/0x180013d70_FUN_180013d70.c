// 0x180013d70  FUN_180013d70
// size=206 thunk=false
// signature: undefined FUN_180013d70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180013d70(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  char local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  local_38 = 0;
  pcVar2 = local_14 + 1;
  do {
    pcVar2 = pcVar2 + -1;
    uVar1 = param_2 / 10;
    *pcVar2 = (char)param_2 + (char)uVar1 * -10 + '0';
    param_2 = uVar1;
  } while (uVar1 != 0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (pcVar2 == local_14 + 1) {
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    local_30 = param_1;
    FUN_18001d080(param_1,pcVar2,local_14 + (1 - (longlong)pcVar2));
  }
  return param_1;
}


