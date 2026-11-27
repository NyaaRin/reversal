// 0x1800ab790  FUN_1800ab790
// size=579 thunk=false
// signature: undefined FUN_1800ab790()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1800ab790(float *param_1,float *param_2,longlong param_3)

{
  code *pcVar1;
  char cVar2;
  float extraout_XMM0_Da;
  undefined1 auStack_368 [32];
  float *local_348;
  longlong local_340;
  undefined4 local_338;
  undefined4 local_334;
  undefined1 local_330;
  undefined8 local_328;
  undefined8 local_320;
  longlong local_318;
  undefined4 local_310;
  undefined1 local_308 [32];
  longlong alStack_2e8 [80];
  int local_68;
  char local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  float local_38;
  float local_34;
  float local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_368;
  local_348 = param_1;
  local_340 = param_3;
  cVar2 = FUN_1800ab660();
  if ((cVar2 != '\0') && (param_3 != 0)) {
    local_38 = *param_2 - *param_1;
    local_34 = param_2[1] - param_1[1];
    local_30 = param_2[2] - param_1[2];
    if ((((uint)local_38 & 0x7f800000) != 0x7f800000) &&
       (((((uint)local_34 & 0x7f800000) != 0x7f800000 &&
         (((uint)local_30 & 0x7f800000) != 0x7f800000)) &&
        (DAT_180380bb0 < local_34 * local_34 + local_38 * local_38 + local_30 * local_30)))) {
      (*(code *)PTR_FUN_1803da000)(&local_38);
      local_328 = 0;
      local_338 = DAT_1803e9230;
      local_334 = DAT_1803e9208;
      local_330 = DAT_18042398c;
      local_310 = 4;
      pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
      local_318 = param_3;
      (**(code **)(*DAT_1803fa668 + 0x60))();
      local_328 = (*pcVar1)(DAT_1803fa360);
      local_320 = DAT_1803ff0f0;
      memset(local_308,0,0x2a0);
      FUN_180202e70(local_308);
      local_68 = 0;
      local_64 = '\0';
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      cVar2 = FUN_1800aa340(param_1,&local_38,&local_338,local_308);
      if ((((cVar2 != '\0') && (local_64 != '\0')) && (0 < local_68)) &&
         (alStack_2e8[(longlong)(local_68 + -1) * 6] == param_3)) {
        FUN_1800ab730();
        return extraout_XMM0_Da <= (float)local_50;
      }
    }
  }
  return false;
}


