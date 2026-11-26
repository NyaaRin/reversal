// 0x180013cb0  FUN_180013cb0
// size=190 thunk=false
// signature: undefined FUN_180013cb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_180013cb0(char *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char *pcVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char *local_30;
  char local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  local_38 = 0;
  pcVar3 = local_14 + 1;
  uVar2 = (ulonglong)param_2;
  do {
    pcVar3 = pcVar3 + -1;
    uVar1 = uVar2 / 10;
    *pcVar3 = (char)uVar2 + (char)uVar1 * -10 + '0';
    uVar2 = uVar1;
  } while ((int)uVar1 != 0);
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  if (pcVar3 == local_14 + 1) {
    param_1[0x18] = '\x0f';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    *param_1 = (char)uVar1;
  }
  else {
    local_30 = param_1;
    FUN_18001d080(param_1,pcVar3,local_14 + (1 - (longlong)pcVar3));
  }
  return param_1;
}


