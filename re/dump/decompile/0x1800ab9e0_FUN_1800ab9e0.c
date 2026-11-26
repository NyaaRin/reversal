// 0x1800ab9e0  FUN_1800ab9e0
// size=462 thunk=false
// signature: undefined FUN_1800ab9e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ab9e0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  float extraout_XMM0_Da;
  undefined1 auStack_368 [32];
  longlong local_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined1 local_338;
  undefined8 local_330;
  undefined8 local_328;
  longlong local_320;
  undefined4 local_318;
  undefined1 local_310 [16];
  undefined1 local_300 [24];
  undefined1 local_2e8 [32];
  longlong alStack_2c8 [80];
  int local_48;
  char local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_368;
  local_348 = param_2;
  cVar2 = FUN_1800ab660();
  if ((((cVar2 != '\0') && (param_2 != 0)) && (DAT_180423988 != '\0')) &&
     ((cVar2 = FUN_180071c60(), cVar2 != '\0' &&
      (cVar2 = FUN_1800732a0(param_1,local_300,local_310), cVar2 != '\0')))) {
    local_330 = 0;
    local_340 = DAT_1803e9230;
    local_33c = DAT_1803e9208;
    local_338 = DAT_18042398c;
    local_318 = 4;
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    local_320 = param_2;
    (**(code **)(*DAT_1803fa668 + 0x60))();
    local_330 = (*pcVar1)(DAT_1803fa360);
    local_328 = DAT_1803ff0f0;
    memset(local_2e8,0,0x2a0);
    FUN_180202e70(local_2e8);
    local_48 = 0;
    local_44 = '\0';
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    cVar2 = FUN_1800aa340(local_300,local_310,&local_340,local_2e8);
    if (((cVar2 != '\0') && ((local_44 != '\0' && (0 < local_48)))) &&
       (alStack_2c8[(longlong)(local_48 + -1) * 6] == param_2)) {
      FUN_1800ab730();
      if (extraout_XMM0_Da <= (float)local_30) {
        return 1;
      }
    }
  }
  return 0;
}


