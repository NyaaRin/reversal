// 0x180083f80  Features_Weapons_Backends_SWCSWeaponBackend_vfunc01
// size=202 thunk=false
// signature: undefined Features_Weapons_Backends_SWCSWeaponBackend_vfunc01()
// status: ok


undefined1 Features_Weapons_Backends_SWCSWeaponBackend_vfunc01(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_40 [40];
  
  puVar2 = DAT_1803edd00;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    puVar1 = DAT_1803edcf8;
    if (param_2 == DAT_180409780) {
      for (; puVar1 != puVar2; puVar1 = puVar1 + 4) {
        puVar6 = puVar1;
        if (0xf < (ulonglong)puVar1[3]) {
          puVar6 = (undefined8 *)*puVar1;
        }
        if (((0xb < (ulonglong)puVar1[2]) &&
            (puVar4 = (undefined8 *)
                      thunk_FUN_1802d5870(puVar6,(undefined8 *)((longlong)puVar6 + 0xc),
                                          "weapon_swcs_",0xc),
            puVar4 != (undefined8 *)((longlong)puVar6 + 0xc))) && (puVar4 == puVar6)) {
          return 1;
        }
      }
    }
    uVar5 = FUN_18001f260(param_2,local_40);
    uVar3 = FUN_180083f00(uVar5);
    FUN_18020e450(local_40);
  }
  return uVar3;
}


