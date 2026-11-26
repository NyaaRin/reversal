// 0x180093310  Features_Weapons_Backends_ZSWeaponBackend_vfunc05
// size=180 thunk=false
// signature: undefined Features_Weapons_Backends_ZSWeaponBackend_vfunc05()
// status: ok


undefined8 * Features_Weapons_Backends_ZSWeaponBackend_vfunc05(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_18 [16];
  
  if ((*(char *)(param_1 + 0xc) != '\0') && (*(int *)(param_1 + 8) == 2)) {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)FUN_18001f9d0(lVar3,local_18);
      uVar2 = *(undefined4 *)(puVar4 + 1);
      *param_2 = *puVar4;
      *(undefined4 *)(param_2 + 1) = uVar2;
      return param_2;
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}


