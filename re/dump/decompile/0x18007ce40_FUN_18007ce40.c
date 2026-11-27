// 0x18007ce40  FUN_18007ce40
// size=296 thunk=false
// signature: undefined FUN_18007ce40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18007ce40(void)

{
  char *_Str;
  size_t sVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  longlong **local_78;
  ulonglong local_70;
  undefined *local_68;
  undefined8 local_60;
  longlong **local_58;
  ulonglong local_50;
  char *local_48;
  undefined8 local_40;
  longlong **local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  _Str = (char *)FUN_18001e4e0();
  if (_Str == (char *)0x0) {
    return 0;
  }
  local_38 = (longlong **)0x0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0;
  sVar1 = strlen(_Str);
  FUN_18001d080(&local_38,_Str,sVar1);
  local_78 = (longlong **)&local_38;
  if (0xf < local_20) {
    local_78 = local_38;
  }
  local_70 = local_28;
  local_68 = &DAT_180346fb8;
  local_60 = 4;
  if ((local_28 < 4) || (*(int *)local_78 != 0x5f6b396d)) {
    local_58 = (longlong **)&local_38;
    if (0xf < local_20) {
      local_58 = local_38;
    }
    local_50 = local_28;
    local_48 = "weapon_m9k";
    local_40 = 10;
    if (9 < local_28) {
      lVar2 = (longlong)*local_58 + -0x6d5f6e6f70616577;
      if (lVar2 == 0) {
        lVar2 = (ulonglong)*(ushort *)(local_58 + 1) - 0x6b39;
      }
      if (lVar2 == 0) goto LAB_18007cf3a;
    }
    uVar3 = 0;
  }
  else {
LAB_18007cf3a:
    uVar3 = 1;
  }
  FUN_18020e450(&local_38);
  return uVar3;
}


