// 0x18007f340  Features_Weapons_Backends_TFAWeaponBackend_vfunc01
// size=131 thunk=false
// signature: undefined Features_Weapons_Backends_TFAWeaponBackend_vfunc01()
// status: ok


undefined1 Features_Weapons_Backends_TFAWeaponBackend_vfunc01(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_28 [32];
  
  lVar1 = DAT_1803edd00;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    if ((param_2 == DAT_180409780) && (lVar5 = DAT_1803edcf8, DAT_1803edcf8 != DAT_1803edd00)) {
      do {
        cVar2 = FUN_18007f2b0(lVar5);
        if (cVar2 != '\0') {
          return 1;
        }
        lVar5 = lVar5 + 0x20;
      } while (lVar5 != lVar1);
      return 0;
    }
    uVar4 = FUN_18001f260(param_2,local_28);
    uVar3 = FUN_18007f2b0(uVar4);
    FUN_18020e450(local_28);
  }
  return uVar3;
}


