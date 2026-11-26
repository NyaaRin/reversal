// 0x180077ff0  Features_Weapons_Backends_HL2WeaponBackend_vfunc01
// size=75 thunk=false
// signature: undefined Features_Weapons_Backends_HL2WeaponBackend_vfunc01()
// status: ok


ulonglong Features_Weapons_Backends_HL2WeaponBackend_vfunc01(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  longlong lVar1;
  undefined1 local_28 [32];
  
  if (param_2 != 0) {
    in_RAX = FUN_180076340(param_2);
    if ((char)in_RAX == '\0') {
      lVar1 = FUN_18001f260(param_2,local_28);
      lVar1 = *(longlong *)(lVar1 + 0x10);
      FUN_18020e450(local_28);
      return (ulonglong)(lVar1 == 0);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


