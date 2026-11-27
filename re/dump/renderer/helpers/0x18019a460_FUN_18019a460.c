// 18019a460  FUN_18019a460
// signature: undefined FUN_18019a460()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18019a460(char *param_1,undefined8 param_2)

{
  size_t sVar1;
  char *pcVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  if ((((DAT_1803facfd != '\0') && (param_1 != (char *)0x0)) && (*param_1 != '\0')) &&
     (*param_1 != '#')) {
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0xf;
    local_b8 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0xf;
    local_98 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0xf;
    local_78 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0xf;
    local_58 = 0;
    local_38 = 0;
    local_34 = 0xffffffff;
    local_30 = 0;
    sVar1 = strlen(param_1);
    FUN_180212700(&local_b8,param_1,sVar1);
    pcVar2 = "";
    if (PTR_DAT_1803dc8c0 != (undefined *)0x0) {
      pcVar2 = PTR_DAT_1803dc8c0;
    }
    sVar1 = strlen(pcVar2);
    FUN_180212700(&local_98,pcVar2,sVar1);
    pcVar2 = "";
    if (PTR_DAT_1803dc910 != (undefined *)0x0) {
      pcVar2 = PTR_DAT_1803dc910;
    }
    sVar1 = strlen(pcVar2);
    FUN_180212700(&local_78,pcVar2,sVar1);
    if ((DAT_1803fcbf0 != DAT_1803fcbf8) &&
       (pcVar2 = *(char **)(DAT_1803fcbf8 + -8), pcVar2 != (char *)0x0)) {
      sVar1 = strlen(pcVar2);
      FUN_180212700(&local_58,pcVar2,sVar1);
    }
    local_38 = DAT_1803fcbe8;
    local_34 = DAT_1803dc8c8;
    local_30 = param_2;
    if (DAT_1803fcc10 == DAT_1803fcc18) {
      FUN_180221dd0(DAT_1803fcc10,DAT_1803fcc10,&local_b8);
    }
    else {
      FUN_18023a090(DAT_1803fcc10,&local_b8);
      DAT_1803fcc10 = DAT_1803fcc10 + 0x90;
    }
    FUN_18020e450(&local_58);
    FUN_18020e450(&local_78);
    FUN_18020e450(&local_98);
    FUN_18020e450(&local_b8);
  }
  return;
}


