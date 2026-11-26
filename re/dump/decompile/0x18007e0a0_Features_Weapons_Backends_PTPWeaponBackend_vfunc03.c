// 0x18007e0a0  Features_Weapons_Backends_PTPWeaponBackend_vfunc03
// size=92 thunk=false
// signature: undefined Features_Weapons_Backends_PTPWeaponBackend_vfunc03()
// status: ok


undefined8
Features_Weapons_Backends_PTPWeaponBackend_vfunc03
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *param_3;
  lVar1 = param_3[1];
  while( true ) {
    if (lVar4 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00018007e0eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_4);
      return uVar3;
    }
    cVar2 = FUN_18007de30(lVar4);
    if (cVar2 != '\0') break;
    lVar4 = lVar4 + 0x20;
  }
  return 1;
}


