// 0x1800a0530  Features_Weapons_Backends_ZCityWeaponBackend_vfunc29
// size=1680 thunk=false
// signature: undefined Features_Weapons_Backends_ZCityWeaponBackend_vfunc29()
// status: ok


void Features_Weapons_Backends_ZCityWeaponBackend_vfunc29
               (longlong param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  char local_98 [8];
  longlong *local_90;
  undefined8 uStack_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_6f;
  undefined2 local_6b;
  undefined1 local_69;
  undefined4 local_68;
  int local_64;
  double local_60;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 == (int *)0x0) {
    return;
  }
  if (DAT_1803fa678 == 0) {
    return;
  }
  if (DAT_1803fa608 == 0) {
    return;
  }
  if (param_2 != *(longlong *)(param_1 + 8)) {
    return;
  }
  if (*param_3 == *(int *)(param_1 + 0x6c)) {
    return;
  }
  *(int *)(param_1 + 0x6c) = *param_3;
  *(undefined1 *)(param_1 + 0xab) = 0;
  *(undefined4 *)(param_1 + 0xad) = 1;
  local_90 = (longlong *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  FUN_18001bcd0(0,&local_90);
  if ((local_90 == (longlong *)0x0) || (local_90[1] == 0)) goto LAB_1800a0b56;
  iVar4 = (**(code **)*local_90)();
  local_64 = iVar4;
  cVar2 = FUN_18001e2b0(param_2,local_90);
  if ((cVar2 == '\0') ||
     (cVar2 = (**(code **)(*local_90 + 0x138))(local_90,0xffffffff,9), cVar2 == '\0')) {
    plVar1 = local_90;
    if ((local_90 != (longlong *)0x0) && (iVar8 = (**(code **)*local_90)(local_90), iVar4 < iVar8))
    {
      (**(code **)(*plVar1 + 0x10))(plVar1,iVar8 - iVar4);
    }
    if (local_90 == (longlong *)0x0) {
      return;
    }
    (**(code **)*local_90)();
    if (local_80 == 0) {
      DAT_1803fa330 = local_78;
      DAT_1803fa339 = local_6f;
      DAT_1803fa33d = local_6b;
      local_49 = local_69;
    }
    else {
      DAT_1803fa330 = local_80;
      DAT_1803fa339 = local_4f;
      DAT_1803fa33d = local_4b;
    }
    DAT_1803fa338 = local_80 != 0;
    DAT_1803fa33f = local_49;
    return;
  }
  uVar5 = (**(code **)*local_90)();
  local_98[0] = '\0';
  uVar12 = (undefined4)((ulonglong)local_98 >> 0x20);
  local_68 = uVar5;
  cVar2 = FUN_180099e30();
  if ((cVar2 == '\0') || (local_98[0] != '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0xb0) = uVar3;
  FUN_18002d9c0(local_90[1],uVar5,"Primary");
  cVar2 = (**(code **)(*local_90 + 0x138))(local_90,0xffffffff,5);
  if (cVar2 != '\0') {
    uVar5 = (**(code **)*local_90)();
    FUN_18002d9c0(local_90[1],uVar5,"RealAutomatic");
    cVar2 = (**(code **)(*local_90 + 0x138))(local_90,0xffffffff,1);
    lVar6 = *local_90;
    if (cVar2 == '\0') {
      (**(code **)(lVar6 + 0x10))(local_90,1);
      FUN_18002d9c0(local_90[1],uVar5,"Automatic");
      cVar2 = (**(code **)(*local_90 + 0x138))(local_90,0xffffffff,1);
      if (cVar2 != '\0') {
        lVar6 = *local_90;
        goto LAB_1800a072b;
      }
    }
    else {
LAB_1800a072b:
      uVar3 = (**(code **)(lVar6 + 200))(local_90,0xffffffff);
      *(undefined1 *)(param_1 + 0xac) = uVar3;
    }
    (**(code **)(*local_90 + 0x10))(local_90,1);
    local_60 = 0.0;
    FUN_18002d9c0(local_90[1],uVar5,&DAT_18034277c);
    cVar2 = (**(code **)(*local_90 + 0x138))(local_90,0xffffffff,3);
    bVar9 = cVar2 != '\0';
    dVar11 = 0.0;
    if (bVar9) {
      local_60 = (double)(**(code **)(*local_90 + 0xc0))(local_90,0xffffffff);
      dVar11 = local_60;
    }
    (**(code **)(*local_90 + 0x10))(local_90,1);
    FUN_18002d9c0(local_90[1],uVar5,"NextFire");
    cVar2 = (**(code **)(*local_90 + 0x138))(local_90,0xffffffff,3);
    if (cVar2 != '\0') {
      dVar10 = (double)(**(code **)(*local_90 + 0xc0))(local_90,0xffffffff);
      if ((!bVar9) || (dVar11 < dVar10)) {
        local_60 = dVar10;
        dVar11 = dVar10;
      }
      bVar9 = true;
    }
    (**(code **)(*local_90 + 0x10))(local_90,1);
    if ((bVar9) && (((uint)((ulonglong)dVar11 >> 0x34) & 0x7ff) != 0x7ff)) {
      *(double *)(param_1 + 0xa0) = dVar11;
      *(undefined1 *)(param_1 + 0xaf) = 1;
    }
  }
  uVar7 = 1;
  (**(code **)(*local_90 + 0x10))(local_90,1);
  uVar5 = local_68;
  FUN_18002d9c0(local_90[1],local_68,"drawBullet");
  cVar2 = (**(code **)(*local_90 + 0x138))(local_90,0xffffffff,1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*local_90 + 0x138))(local_90,0xffffffff,0);
    uVar3 = cVar2 == '\0';
  }
  else {
    uVar3 = (**(code **)(*local_90 + 200))();
  }
  *(undefined1 *)(param_1 + 0xae) = uVar3;
  (**(code **)(*local_90 + 0x10))(local_90,1);
  FUN_18002d9c0(local_90[1],uVar5,"reload");
  cVar2 = (**(code **)(*local_90 + 0x138))(local_90,0xffffffff,1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*local_90 + 0x138))(local_90,0xffffffff,3);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0xad) = 0;
    }
    else {
      dVar11 = (double)(**(code **)(*local_90 + 0xc0))(local_90,0xffffffff);
      *(bool *)(param_1 + 0xad) =
           *(double *)(DAT_1803fa608 + 0x10) <= dVar11 &&
           dVar11 != *(double *)(DAT_1803fa608 + 0x10);
    }
  }
  else {
    uVar3 = (**(code **)(*local_90 + 200))();
    *(undefined1 *)(param_1 + 0xad) = uVar3;
  }
  (**(code **)(*local_90 + 0x10))(local_90,1);
  if (*(char *)(param_1 + 0xb1) != '\0') {
    uVar3 = FUN_180099f60(local_90,param_2,uVar5);
    *(undefined1 *)(param_1 + 0xb2) = uVar3;
  }
  *(undefined1 *)(param_1 + 0xab) = 1;
  iVar8 = DAT_1803ff0ec + 1;
  bVar9 = DAT_1803ff0ec == (DAT_1803ff0ec / 0xf0) * 0xf0;
  DAT_1803ff0ec = iVar8;
  if (bVar9) {
    if ((*(char *)(param_1 + 0xb1) != '\0') && (*(char *)(param_1 + 0xb2) == '\0')) {
      uVar7 = 0;
    }
    FUN_180014410("[ZCITY-TSTATE] busy=%d chamber=%d canuse=%d auto=%d cyl=%d next=%.3f now=%.3f cmd#%d\n"
                  ,*(char *)(param_1 + 0xad) != '\0',*(char *)(param_1 + 0xae) != '\0',
                  *(char *)(param_1 + 0xb0) != '\0',
                  CONCAT44(uVar12,(uint)(*(char *)(param_1 + 0xac) != '\0')),uVar7,
                  *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(DAT_1803fa608 + 0x10),*param_3);
  }
  plVar1 = local_90;
  if ((local_90 != (longlong *)0x0) && (iVar8 = (**(code **)*local_90)(local_90), iVar4 < iVar8)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,iVar8 - iVar4);
  }
LAB_1800a0b56:
  if (local_90 != (longlong *)0x0) {
    (**(code **)*local_90)();
    DAT_1803fa338 = local_80 != 0;
    DAT_1803fa330 = local_78;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_80;
    }
    DAT_1803fa339 = local_6f;
    DAT_1803fa33d = local_6b;
    DAT_1803fa33f = local_69;
  }
  return;
}


