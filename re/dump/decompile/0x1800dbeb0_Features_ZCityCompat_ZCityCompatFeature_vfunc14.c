// 0x1800dbeb0  Features_ZCityCompat_ZCityCompatFeature_vfunc14
// size=422 thunk=false
// signature: undefined Features_ZCityCompat_ZCityCompatFeature_vfunc14()
// status: ok


void Features_ZCityCompat_ZCityCompatFeature_vfunc14
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *local_90;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined2 uStack_83;
  undefined1 uStack_81;
  undefined8 *local_80;
  undefined8 *local_78 [2];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 *local_50;
  
  if (DAT_1803fa678 == 0) {
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    local_80 = (undefined8 *)0x0;
    ppuVar4 = &local_90;
    uVar5 = 2;
    uVar6 = 2;
  }
  else {
    ppuVar4 = (undefined8 **)FUN_18001bcd0(param_1,local_78,param_3,param_4,0);
    uVar5 = 1;
    uVar6 = 1;
  }
  puVar3 = local_80;
  puVar2 = *ppuVar4;
  local_60 = puVar2;
  puStack_58 = ppuVar4[1];
  puVar1 = ppuVar4[2];
  local_50 = puVar1;
  if (((uVar5 & 2) != 0) &&
     (uVar5 = uVar5 & 0xfffffffd, uVar6 = uVar5, local_90 != (undefined8 *)0x0)) {
    (**(code **)*local_90)();
    DAT_1803fa330 = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      DAT_1803fa330 = local_90;
    }
    DAT_1803fa338 = puVar3 != (undefined8 *)0x0;
    DAT_1803fa339 = CONCAT13(uStack_84,uStack_88._1_3_);
    DAT_1803fa33d = uStack_83;
    DAT_1803fa33f = uStack_81;
  }
  if (((uVar5 & 1) != 0) && (uVar6 = uVar5 & 0xfffffffe, local_78[0] != (undefined8 *)0x0)) {
    (**(code **)*local_78[0])();
    DAT_1803fa338 = local_68 != (undefined8 *)0x0;
    DAT_1803fa330 = local_90;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_68;
    }
    DAT_1803fa339 = CONCAT13(uStack_84,uStack_88._1_3_);
    DAT_1803fa33d = uStack_83;
    DAT_1803fa33f = uStack_81;
  }
  FUN_180095c30(param_1 + 8,puVar2,param_3,param_4,uVar6);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    DAT_1803fa338 = puVar1 != (undefined8 *)0x0;
    if ((bool)DAT_1803fa338) {
      local_90 = puVar1;
    }
    DAT_1803fa339 = CONCAT13(uStack_84,uStack_88._1_3_);
    DAT_1803fa33d = uStack_83;
    DAT_1803fa33f = uStack_81;
    DAT_1803fa330 = local_90;
  }
  return;
}


