// 0x1800dc810  Features_ZCityCompat_ZCityCompatFeature_vfunc16
// size=823 thunk=false
// signature: undefined Features_ZCityCompat_ZCityCompatFeature_vfunc16()
// status: ok


void Features_ZCityCompat_ZCityCompatFeature_vfunc16(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 **ppuVar5;
  bool bVar6;
  undefined8 *local_90;
  uint uStack_88;
  undefined1 uStack_84;
  undefined2 uStack_83;
  undefined1 uStack_81;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 local_68;
  undefined4 local_67;
  undefined2 local_63;
  undefined1 local_61;
  int *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 *local_30;
  undefined8 *local_28 [2];
  undefined8 *local_18;
  
  local_78 = param_1;
  bVar6 = DAT_1803fa678 == 0;
  if (bVar6) {
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    local_80 = (undefined8 *)0x0;
    ppuVar5 = &local_90;
  }
  else {
    ppuVar5 = (undefined8 **)FUN_18001bcd0(param_1,local_28);
  }
  puVar3 = local_80;
  local_40 = *(undefined4 *)ppuVar5;
  uStack_3c = *(undefined4 *)((longlong)ppuVar5 + 4);
  uStack_38 = *(undefined4 *)(ppuVar5 + 1);
  uStack_34 = *(undefined4 *)((longlong)ppuVar5 + 0xc);
  local_30 = ppuVar5[2];
  if ((bVar6) && (local_90 != (undefined8 *)0x0)) {
    (**(code **)*local_90)();
    DAT_1803fa330 = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      DAT_1803fa330 = local_78;
    }
    DAT_1803fa338 = puVar3 != (undefined8 *)0x0;
    DAT_1803fa339 = CONCAT13(uStack_84,uStack_88._1_3_);
    DAT_1803fa33d = uStack_83;
    DAT_1803fa33f = uStack_81;
  }
  if ((!bVar6) && (local_28[0] != (undefined8 *)0x0)) {
    (**(code **)*local_28[0])();
    DAT_1803fa338 = local_18 != (undefined8 *)0x0;
    DAT_1803fa330 = local_78;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_18;
    }
    DAT_1803fa339 = CONCAT13(uStack_84,uStack_88._1_3_);
    DAT_1803fa33d = uStack_83;
    DAT_1803fa33f = uStack_81;
  }
  puVar3 = (undefined8 *)CONCAT44(uStack_3c,local_40);
  iVar2 = *(int *)(param_1 + 3);
  while (0 < iVar2) {
    FUN_180095c30(param_1 + 1,puVar3);
    iVar2 = *(int *)(param_1 + 3);
  }
  FUN_180095d10();
  if ((((DAT_180423571 != '\0') && (DAT_1804015a0 == '\0')) &&
      (piVar1 = (int *)(param_1 + 4), local_60 = piVar1, 0 < *piVar1)) && (DAT_1803fa678 != 0)) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_48 = (undefined8 *)0x0;
    FUN_18001bcd0(0,&local_58);
    if ((local_58 != (undefined8 *)0x0) && (local_58[1] != 0)) {
      FUN_1800da980(param_1,local_58,*piVar1,0,0,0);
    }
    if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)();
      if (local_48 == (undefined8 *)0x0) {
        uVar4 = uStack_88 >> 8;
        uStack_88 = uStack_88 & 0xffffff00;
        DAT_1803fa330 = local_90;
        DAT_1803fa339 = CONCAT13(uStack_84,(int3)uVar4);
        DAT_1803fa33d = uStack_83;
        local_61 = uStack_81;
      }
      else {
        local_70 = local_48;
        local_68 = 1;
        DAT_1803fa330 = local_48;
        DAT_1803fa339 = local_67;
        DAT_1803fa33d = local_63;
      }
      DAT_1803fa338 = local_48 != (undefined8 *)0x0;
      DAT_1803fa33f = local_61;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = 0;
  *(undefined1 *)((longlong)param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  DAT_180423975 = 0;
  DAT_1803e9220 = DAT_1803813b0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    DAT_1803fa338 = local_30 != (undefined8 *)0x0;
    DAT_1803fa330 = local_78;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_30;
    }
    DAT_1803fa339 = CONCAT13(uStack_84,uStack_88._1_3_);
    DAT_1803fa33d = uStack_83;
    DAT_1803fa33f = uStack_81;
  }
  return;
}


