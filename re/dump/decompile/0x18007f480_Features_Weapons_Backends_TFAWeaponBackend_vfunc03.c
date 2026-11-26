// 0x18007f480  Features_Weapons_Backends_TFAWeaponBackend_vfunc03
// size=71 thunk=false
// signature: undefined Features_Weapons_Backends_TFAWeaponBackend_vfunc03()
// status: ok


undefined8
Features_Weapons_Backends_TFAWeaponBackend_vfunc03
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_4);
  if (cVar2 == '\0') {
    lVar3 = *param_3;
    lVar1 = param_3[1];
    while( true ) {
      if (lVar3 == lVar1) {
        return 0;
      }
      cVar2 = FUN_18007f2b0(lVar3);
      if (cVar2 != '\0') break;
      lVar3 = lVar3 + 0x20;
    }
  }
  return 1;
}


