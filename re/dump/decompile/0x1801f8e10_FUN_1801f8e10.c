// 0x1801f8e10  FUN_1801f8e10
// size=467 thunk=false
// signature: undefined FUN_1801f8e10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f8e10(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  size_t sVar7;
  char *_Str;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  iVar2 = FUN_18006da40(param_2,&DAT_18037b590,0);
  pcVar4 = (char *)FUN_18006da70(param_2,"networkid");
  pcVar5 = (char *)FUN_18006da70(param_2,&DAT_180341148);
  pcVar6 = (char *)FUN_18006da70(param_2,"reason");
  uVar3 = FUN_18006da40(param_2,"userid",0);
  cVar1 = FUN_18003a090("PlayerDisconnect");
  if (cVar1 != '\0') {
    _Str = "";
    if (pcVar6 != (char *)0x0) {
      _Str = pcVar6;
    }
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    sVar7 = strlen(_Str);
    FUN_18001d080(&local_50,_Str,sVar7);
    pcVar6 = "";
    if (pcVar5 != (char *)0x0) {
      pcVar6 = pcVar5;
    }
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    sVar7 = strlen(pcVar6);
    FUN_18001d080(&local_70,pcVar6,sVar7);
    pcVar5 = "";
    if (pcVar4 != (char *)0x0) {
      pcVar5 = pcVar4;
    }
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    sVar7 = strlen(pcVar5);
    FUN_18001d080(&local_90,pcVar5,sVar7);
    local_b0 = &local_50;
    local_a8 = &local_70;
    local_a0 = &local_90;
    local_b8 = uVar3;
    local_98 = iVar2 != 0;
    FUN_180200190();
    FUN_18020e450(&local_90);
    FUN_18020e450(&local_70);
    FUN_18020e450(&local_50);
  }
  return;
}


