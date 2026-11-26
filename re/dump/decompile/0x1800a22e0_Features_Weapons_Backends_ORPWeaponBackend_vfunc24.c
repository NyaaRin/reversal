// 0x1800a22e0  Features_Weapons_Backends_ORPWeaponBackend_vfunc24
// size=705 thunk=false
// signature: undefined Features_Weapons_Backends_ORPWeaponBackend_vfunc24()
// status: ok


void Features_Weapons_Backends_ORPWeaponBackend_vfunc24(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 **ppuVar6;
  bool bVar7;
  undefined4 local_8f;
  undefined2 local_8b;
  undefined1 local_89;
  undefined8 *local_80;
  undefined4 uStack_78;
  undefined8 *local_70;
  longlong *local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  undefined8 *local_50 [2];
  undefined8 *local_40;
  
  if ((0 < *(int *)(param_1 + 0xe)) &&
     (iVar3 = *(int *)(param_1 + 0xe) + -1, *(int *)(param_1 + 0xe) = iVar3, iVar3 < 1)) {
    bVar7 = DAT_1803fa678 == 0;
    if (bVar7) {
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      local_70 = (undefined8 *)0x0;
      ppuVar6 = &local_80;
    }
    else {
      ppuVar6 = (undefined8 **)FUN_18001bcd0(param_1,local_50);
    }
    puVar1 = local_70;
    plVar2 = *ppuVar6;
    local_68 = plVar2;
    puStack_60 = ppuVar6[1];
    local_58 = ppuVar6[2];
    if ((bVar7) && (local_80 != (undefined8 *)0x0)) {
      (**(code **)*local_80)();
      DAT_1803fa338 = puVar1 != (undefined8 *)0x0;
      DAT_1803fa330 = param_1;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = puVar1;
      }
      DAT_1803fa339 = local_8f;
      DAT_1803fa33d = local_8b;
      DAT_1803fa33f = local_89;
    }
    if ((!bVar7) && (local_50[0] != (undefined8 *)0x0)) {
      (**(code **)*local_50[0])();
      DAT_1803fa338 = local_40 != (undefined8 *)0x0;
      DAT_1803fa330 = param_1;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = local_40;
      }
      DAT_1803fa339 = local_8f;
      DAT_1803fa33d = local_8b;
      DAT_1803fa33f = local_89;
    }
    if (((plVar2 != (longlong *)0x0) && (plVar2[1] != 0)) && (plVar2[1] == param_1[0xc])) {
      iVar3 = (**(code **)*plVar2)(plVar2);
      FUN_180023e60(plVar2,0);
      uVar4 = (**(code **)*plVar2)(plVar2);
      if (*(int *)(param_1 + 0xd) < 0) {
        (**(code **)(*plVar2 + 0xe0))();
      }
      else {
        (**(code **)(*plVar2 + 0x128))(plVar2);
      }
      FUN_18002da40(plVar2[1],uVar4,"TPIK_CamPos");
      if (*(int *)((longlong)param_1 + 0x6c) < 0) {
        (**(code **)(*plVar2 + 0xe0))();
      }
      else {
        (**(code **)(*plVar2 + 0x128))(plVar2);
      }
      FUN_18002da40(plVar2[1],uVar4,"TPIK_CamAng");
      if (-1 < *(int *)(param_1 + 0xd)) {
        (**(code **)(*plVar2 + 0x120))(plVar2);
      }
      if (-1 < *(int *)((longlong)param_1 + 0x6c)) {
        (**(code **)(*plVar2 + 0x120))(plVar2);
      }
      iVar5 = (**(code **)*plVar2)(plVar2);
      if (iVar3 < iVar5) {
        puVar1 = (undefined8 *)*plVar2;
        iVar5 = (*(code *)*puVar1)(plVar2);
        (*(code *)puVar1[2])(plVar2,iVar5 - iVar3);
      }
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0xffffffffffffffff;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)*plVar2)(plVar2);
      DAT_1803fa338 = local_58 != (undefined8 *)0x0;
      DAT_1803fa330 = param_1;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = local_58;
      }
      DAT_1803fa339 = local_8f;
      DAT_1803fa33d = local_8b;
      DAT_1803fa33f = local_89;
    }
  }
  return;
}


