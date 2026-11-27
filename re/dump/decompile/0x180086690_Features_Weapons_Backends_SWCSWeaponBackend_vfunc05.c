// 0x180086690  Features_Weapons_Backends_SWCSWeaponBackend_vfunc05
// size=217 thunk=false
// signature: undefined Features_Weapons_Backends_SWCSWeaponBackend_vfunc05()
// status: ok


undefined8 *
Features_Weapons_Backends_SWCSWeaponBackend_vfunc05(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined8 *local_20;
  
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  local_20 = param_2;
  uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
  if ((((lVar3 == 0) || (FUN_18001f9d0(lVar3,&local_48), (local_48 & 0x7f800000) == 0x7f800000)) ||
      ((local_44 & 0x7f800000) == 0x7f800000)) || ((local_40 & 0x7f800000) == 0x7f800000)) {
    *(undefined4 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0;
  }
  else {
    *param_2 = CONCAT44(local_44,local_48);
    *(uint *)(param_2 + 1) = local_40;
  }
  return param_2;
}


