// 0x180013ba0  FUN_180013ba0
// size=258 thunk=false
// signature: undefined FUN_180013ba0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180013ba0(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char *pcVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  char local_15 [5];
  ulonglong local_10;
  char *pcVar4;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  local_38 = 0;
  pcVar3 = local_15 + 2;
  uVar2 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + -1;
      *pcVar3 = (char)param_2 + (char)((ulonglong)param_2 / 10) * -10 + '0';
      param_2 = (uint)((ulonglong)param_2 / 10);
    } while (param_2 != 0);
    pcVar3 = pcVar4 + -2;
    *pcVar3 = '-';
  }
  else {
    do {
      pcVar3 = pcVar3 + -1;
      uVar1 = uVar2 / 10;
      *pcVar3 = (char)uVar2 + (char)uVar1 * -10 + '0';
      uVar2 = uVar1;
    } while ((int)uVar1 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (pcVar3 == local_15 + 2) {
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    local_30 = param_1;
    FUN_18001d080(param_1,pcVar3,local_15 + (2 - (longlong)pcVar3));
  }
  return param_1;
}


