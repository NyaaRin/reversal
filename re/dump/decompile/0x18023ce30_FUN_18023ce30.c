// 0x18023ce30  FUN_18023ce30
// size=216 thunk=false
// signature: undefined FUN_18023ce30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18023ce30(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 **local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  local_58 = 0;
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_50 = param_2;
  if (param_3 == param_4) {
    local_38 = _DAT_1803814b0;
    uStack_30 = _UNK_1803814b8;
    local_48 = (undefined8 ***)0x0;
  }
  else {
    FUN_18001d080(&local_48,param_3,param_4 - param_3);
  }
  pppuVar1 = (undefined8 ***)local_48;
  if (uStack_30 < 0x10) {
    pppuVar1 = &local_48;
  }
  (**(code **)(*(longlong *)*param_1 + 0x20))
            ((longlong *)*param_1,param_2,pppuVar1,local_38 + (longlong)pppuVar1);
  local_58 = 1;
  FUN_18020e450(&local_48);
  return param_2;
}


