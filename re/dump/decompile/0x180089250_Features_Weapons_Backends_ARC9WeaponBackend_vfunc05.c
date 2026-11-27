// 0x180089250  Features_Weapons_Backends_ARC9WeaponBackend_vfunc05
// size=101 thunk=false
// signature: undefined Features_Weapons_Backends_ARC9WeaponBackend_vfunc05()
// status: ok


undefined8 *
Features_Weapons_Backends_ARC9WeaponBackend_vfunc05(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
  if (lVar3 == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
  FUN_18001f9d0(lVar3,param_2);
  return param_2;
}


