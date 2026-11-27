// 0x18007cf70  Features_Weapons_Backends_M9KWeaponBackend_vfunc01
// size=111 thunk=false
// signature: undefined Features_Weapons_Backends_M9KWeaponBackend_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong Features_Weapons_Backends_M9KWeaponBackend_vfunc01(undefined8 param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    FUN_18001f260(param_2,local_38);
    cVar1 = FUN_18007cd30(local_38);
    if ((cVar1 == '\0') && (cVar1 = FUN_18007ce40(param_2), cVar1 == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    FUN_18020e450(local_38);
    return uVar2;
  }
  return local_18 & 0xffffffffffffff00;
}


