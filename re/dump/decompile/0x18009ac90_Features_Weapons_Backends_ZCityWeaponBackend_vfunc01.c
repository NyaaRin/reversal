// 0x18009ac90  Features_Weapons_Backends_ZCityWeaponBackend_vfunc01
// size=145 thunk=false
// signature: undefined Features_Weapons_Backends_ZCityWeaponBackend_vfunc01()
// status: ok


ulonglong Features_Weapons_Backends_ZCityWeaponBackend_vfunc01(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30 [40];
  
  if (param_2 == 0) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
    if ((param_2 == DAT_180409780) && (DAT_1803edcf8 != DAT_1803edd00)) {
      uVar2 = FUN_180095440(&DAT_1803e9f78,&DAT_1803edcf8);
      return uVar2;
    }
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uVar3 = FUN_18001f260(param_2,local_30);
    bVar1 = FUN_180095440(uVar3,&local_48);
    FUN_18020e450(local_30);
    FUN_18020d5c0(&local_48);
    uVar2 = (ulonglong)bVar1;
  }
  return uVar2;
}


