// 0x1800e3320  FUN_1800e3320
// size=384 thunk=false
// signature: undefined FUN_1800e3320()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1800e3320(char *param_1)

{
  char *_Str;
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  size_t sVar5;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  if ((((param_1 != (char *)0x0) && (pcVar2 = strchr(param_1,0x2e), pcVar2 != (char *)0x0)) &&
      (pcVar2 != param_1)) && (_Str = pcVar2 + 1, *_Str != '\0')) {
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_38 = 0;
    FUN_18001d080(&local_50,param_1,(longlong)pcVar2 - (longlong)param_1);
    local_98 = local_70;
    uVar3 = FUN_18016d4c0(local_70,&local_50);
    local_c8 = (undefined8 *)local_90;
    local_c0 = (undefined8 *)uVar3;
    uVar4 = FUN_18016d4c0(local_90,uVar3);
    uVar4 = FUN_180018ef0(&DAT_1803fac80,uVar4);
    FUN_18020e450(uVar3);
    local_c8 = &local_b8;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    sVar5 = strlen(_Str);
    FUN_18001d080(&local_b8,_Str,sVar5);
    local_c0 = &local_b8;
    local_c8 = (undefined8 *)local_90;
    uVar3 = FUN_18016d4c0(local_90,&local_b8);
    uVar1 = FUN_180018c10(uVar4,uVar3);
    FUN_18020e450(&local_b8);
    FUN_18020e450(&local_50);
    return uVar1;
  }
  return 0;
}


