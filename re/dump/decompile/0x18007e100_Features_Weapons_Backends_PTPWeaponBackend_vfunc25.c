// 0x18007e100  Features_Weapons_Backends_PTPWeaponBackend_vfunc25
// size=1059 thunk=false
// signature: undefined Features_Weapons_Backends_PTPWeaponBackend_vfunc25()
// status: ok


void Features_Weapons_Backends_PTPWeaponBackend_vfunc25(longlong param_1,longlong param_2)

{
  double dVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  float local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((DAT_1803fa678 != 0) && (param_2 != 0)) {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = param_1;
    FUN_18001bcd0(0,&local_78);
    plVar2 = local_78;
    if (local_78 != (longlong *)0x0) {
      plVar10 = (longlong *)&DAT_1803e9f78;
      if (0xf < DAT_1803e9f90) {
        plVar10 = DAT_1803e9f78;
      }
      if (DAT_1803e9f88 == 0x10) {
        lVar9 = *plVar10 + -0x746f68735f707470;
        if (lVar9 == 0) {
          lVar9 = plVar10[1] + -0x657361625f6e7567;
        }
        bVar3 = lVar9 == 0;
      }
      else {
        bVar3 = false;
      }
      *(bool *)(param_1 + 0x11) = bVar3;
      plVar10 = (longlong *)&DAT_1803e9f78;
      if (0xf < DAT_1803e9f90) {
        plVar10 = DAT_1803e9f78;
      }
      if (DAT_1803e9f88 == 0xf) {
        iVar6 = memcmp(plVar10,"ptp_scoped_base",0xf);
        bVar3 = iVar6 == 0;
      }
      else {
        bVar3 = false;
      }
      *(bool *)(param_1 + 0x12) = bVar3;
      iVar6 = (**(code **)*plVar2)(plVar2);
      local_4c = iVar6;
      cVar4 = FUN_18001e2b0(param_2,local_78);
      if (cVar4 != '\0') {
        uVar7 = (**(code **)*local_78)();
        FUN_18002d9c0(local_78[1],uVar7,"Primary");
        cVar4 = (**(code **)(*local_78 + 0x138))(local_78,0xffffffff,5);
        plVar2 = local_78;
        if (cVar4 != '\0') {
          (**(code **)(*local_78 + 0xe8))(local_78,&DAT_180347278,0);
          (**(code **)(*plVar2 + 0xa8))(plVar2,0xfffffffe);
          cVar4 = (**(code **)(*local_78 + 0x138))(local_78,0xffffffff,3);
          if (cVar4 != '\0') {
            dVar1 = (double)(**(code **)(*local_78 + 0xc0))(local_78,0xffffffff);
            *(float *)(param_1 + 0x18) = (float)dVar1;
          }
          (**(code **)(*local_78 + 0x10))(local_78,1);
        }
        (**(code **)(*local_78 + 0x10))(local_78,1);
        FUN_18007daf0(local_78,uVar7,"StandCone",param_1 + 0x24);
        FUN_18007daf0(local_78,uVar7,"WalkCone",param_1 + 0x28);
        FUN_18007daf0(local_78,uVar7,"CrouchCone",param_1 + 0x2c);
        FUN_18007daf0(local_78,uVar7,"CrouchWalkCone",param_1 + 0x30);
        FUN_18007daf0(local_78,uVar7,"AirCone",param_1 + 0x34);
        FUN_18007daf0(local_78,uVar7,"IronSightsCone",param_1 + 0x38);
        FUN_18007daf0(local_78,uVar7,"SetNextFireMode",param_1 + 0x1c);
        local_50 = 0.0;
        cVar4 = FUN_18007daf0(local_78,uVar7,"BurstCounter",&local_50);
        plVar2 = local_78;
        if (cVar4 != '\0') {
          *(int *)(param_1 + 0x20) = (int)local_50;
        }
        if (DAT_1803faee8 != (code *)0x0) {
          lVar9 = local_78[1];
          FUN_180023010(&local_48,lVar9);
          (*DAT_1803faee8)(lVar9,uVar7,"DeadEyed");
          if ((local_30 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
            (*DAT_1803fae90)(local_48,local_40,local_38,local_34);
          }
        }
        cVar4 = (**(code **)(*plVar2 + 0x138))(plVar2,0xffffffff,1);
        if (cVar4 != '\0') {
          uVar5 = (**(code **)(*plVar2 + 200))(plVar2,0xffffffff);
          *(undefined1 *)(param_1 + 0x14) = uVar5;
        }
        (**(code **)(*plVar2 + 0x10))(plVar2,1);
        uVar5 = FUN_18007dbc0(local_78,param_2,uVar7);
        *(undefined1 *)(param_1 + 0x13) = uVar5;
        *(longlong *)(param_1 + 8) = param_2;
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
      plVar2 = local_78;
      if ((local_78 != (longlong *)0x0) && (iVar8 = (**(code **)*local_78)(local_78), iVar6 < iVar8)
         ) {
        (**(code **)(*plVar2 + 0x10))(plVar2,iVar8 - iVar6);
      }
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)*local_78)();
      DAT_1803fa338 = local_68 != 0;
      DAT_1803fa330 = local_60;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = local_68;
      }
      DAT_1803fa339 = local_57;
      DAT_1803fa33d = local_53;
      DAT_1803fa33f = local_51;
    }
  }
  return;
}


