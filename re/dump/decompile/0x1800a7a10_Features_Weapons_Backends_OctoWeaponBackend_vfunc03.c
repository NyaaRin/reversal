// 0x1800a7a10  Features_Weapons_Backends_OctoWeaponBackend_vfunc03
// size=152 thunk=false
// signature: undefined Features_Weapons_Backends_OctoWeaponBackend_vfunc03()
// status: ok


undefined8
Features_Weapons_Backends_OctoWeaponBackend_vfunc03
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)*param_3;
  puVar1 = (undefined8 *)param_3[1];
  while( true ) {
    if (puVar4 == puVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001800a7a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_4);
      return uVar3;
    }
    puVar5 = puVar4;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar5 = (undefined8 *)*puVar4;
    }
    if (((0xf < (ulonglong)puVar4[2]) &&
        (puVar2 = (undefined8 *)thunk_FUN_1802d5870(puVar5,puVar5 + 2,"weapon_octo_base",0x10),
        puVar2 != puVar5 + 2)) && (puVar2 == puVar5)) break;
    puVar4 = puVar4 + 4;
  }
  return 1;
}


