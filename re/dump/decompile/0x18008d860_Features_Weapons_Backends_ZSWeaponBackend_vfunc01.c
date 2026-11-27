// 0x18008d860  Features_Weapons_Backends_ZSWeaponBackend_vfunc01
// size=332 thunk=false
// signature: undefined Features_Weapons_Backends_ZSWeaponBackend_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong Features_Weapons_Backends_ZSWeaponBackend_vfunc01(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  char *_Str;
  size_t sVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong **local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong **local_50;
  ulonglong local_48;
  char *local_40;
  undefined8 local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  bVar1 = false;
  local_78 = 0;
  if (param_2 == 0) {
    return local_10 & 0xffffffffffffff00;
  }
  FUN_18001f260(param_2,local_30);
  _Str = (char *)FUN_18001e4e0(param_2);
  cVar2 = FUN_18008d400(local_30);
  if (cVar2 == '\0') {
    if (_Str != (char *)0x0) {
      local_70 = (longlong **)0x0;
      uStack_68 = 0;
      local_60 = 0;
      local_58 = 0;
      sVar3 = strlen(_Str);
      FUN_18001d080(&local_70,_Str,sVar3);
      bVar1 = true;
      local_78 = 1;
      local_50 = (longlong **)&local_70;
      if (0xf < local_58) {
        local_50 = local_70;
      }
      local_48 = local_60;
      local_40 = "weapon_zs_";
      local_38 = 10;
      if (9 < local_60) {
        lVar4 = (longlong)*local_50 + -0x7a5f6e6f70616577;
        if (lVar4 == 0) {
          lVar4 = (ulonglong)*(ushort *)(local_50 + 1) - 0x5f73;
        }
        if (lVar4 == 0) goto LAB_18008d95f;
      }
    }
    uVar5 = 0;
  }
  else {
LAB_18008d95f:
    uVar5 = 1;
  }
  if (bVar1) {
    local_78 = 0;
    FUN_18020e450(&local_70);
  }
  FUN_18020e450(local_30);
  return uVar5;
}


