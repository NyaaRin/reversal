// 0x18013d750  FUN_18013d750
// size=213 thunk=false
// signature: undefined FUN_18013d750()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18013d750(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if ((int)param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(char *)param_1 = (char)param_2;
  }
  else {
    local_30 = param_1;
    puVar1 = (undefined8 *)FUN_180139640(local_28);
    for (plVar2 = (longlong *)*puVar1; plVar2 != (longlong *)puVar1[1]; plVar2 = plVar2 + 10) {
      if (*plVar2 == param_2) {
        FUN_18016d4c0(param_1,plVar2 + 1);
        local_38 = 1;
        FUN_18020a5a0(local_28);
        return param_1;
      }
    }
    FUN_18020a5a0(local_28);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  return param_1;
}


