// 0x180133a10  FUN_180133a10
// size=222 thunk=false
// signature: undefined FUN_180133a10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180133a10(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 *local_20;
  char *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    pcVar6 = param_2 + *(longlong *)(param_2 + 0x10);
    pcVar1 = param_2;
    pcVar5 = param_2;
  }
  else {
    pcVar1 = *(char **)param_2;
    pcVar6 = pcVar1 + *(longlong *)(param_2 + 0x10);
    pcVar5 = pcVar1;
  }
  for (; pcVar5 != pcVar6; pcVar5 = pcVar5 + 1) {
    cVar7 = *pcVar5;
    if ((byte)(cVar7 + 0xbfU) < 0x1a) {
      cVar7 = cVar7 + ' ';
    }
    *pcVar1 = cVar7;
    pcVar1 = pcVar1 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *param_2 = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\x0f';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  local_28 = 1;
  local_20 = param_1;
  local_18 = param_2;
  FUN_18020e450(param_2);
  return param_1;
}


