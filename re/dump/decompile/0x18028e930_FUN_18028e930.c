// 0x18028e930  FUN_18028e930
// size=233 thunk=false
// signature: undefined FUN_18028e930()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18028e930(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x4c) == 0) {
    uVar2 = FUN_18028c650();
  }
  else {
    uVar2 = 0;
    local_60 = 1;
    local_38 = 0;
    local_30 = 0;
    local_98 = 0;
    local_70 = 0;
    local_68 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    iVar1 = FUN_18028d920(0,0,&local_60);
    if (iVar1 != 0) {
      local_70 = FUN_18026f580((longlong)local_30 * 0xe);
      *param_3 = local_70;
      iVar1 = FUN_18028d920(param_1,param_2,&local_98);
      if (iVar1 != 0) {
        return (ulonglong)local_68;
      }
    }
    *param_3 = 0;
  }
  return uVar2;
}


