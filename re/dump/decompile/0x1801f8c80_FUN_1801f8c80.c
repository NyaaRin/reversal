// 0x1801f8c80  FUN_1801f8c80
// size=384 thunk=false
// signature: undefined FUN_1801f8c80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f8c80(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  size_t sVar7;
  char *_Str;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  int local_94;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  iVar2 = FUN_18006da40(param_1,&DAT_18037b590,0);
  pcVar5 = (char *)FUN_18006da70(param_1,"networkid");
  pcVar6 = (char *)FUN_18006da70(param_1,&DAT_180341148);
  iVar3 = FUN_18006da40(param_1,"index",0);
  uVar4 = FUN_18006da40(param_1,"userid",0);
  cVar1 = FUN_18003a090("PlayerConnect");
  if (cVar1 != '\0') {
    _Str = "";
    if (pcVar6 != (char *)0x0) {
      _Str = pcVar6;
    }
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    sVar7 = strlen(_Str);
    FUN_18001d080(&local_58,_Str,sVar7);
    pcVar6 = "";
    if (pcVar5 != (char *)0x0) {
      pcVar6 = pcVar5;
    }
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    sVar7 = strlen(pcVar6);
    FUN_18001d080(&local_78,pcVar6,sVar7);
    local_90 = &local_58;
    local_88 = &local_78;
    local_98 = uVar4;
    local_94 = iVar3 + 1;
    local_80 = iVar2 != 0;
    FUN_1801ffb60();
    FUN_18020e450(&local_78);
    FUN_18020e450(&local_58);
  }
  return;
}


