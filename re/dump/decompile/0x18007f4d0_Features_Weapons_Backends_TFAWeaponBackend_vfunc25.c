// 0x18007f4d0  Features_Weapons_Backends_TFAWeaponBackend_vfunc25
// size=1468 thunk=false
// signature: undefined Features_Weapons_Backends_TFAWeaponBackend_vfunc25()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Weapons_Backends_TFAWeaponBackend_vfunc25(longlong **param_1,longlong *param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong **pplVar7;
  undefined1 auStack_88 [32];
  int local_68;
  longlong **local_60;
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  longlong **local_50;
  longlong **local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 uStack_28;
  longlong **local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  local_30 = (longlong *)0x0;
  uStack_28 = 0;
  local_20 = (longlong **)0x0;
  local_60 = param_1;
  local_50 = param_1;
  local_38 = param_2;
  FUN_18001bcd0(0,&local_30);
  if (local_30 == (longlong *)0x0) goto LAB_18007f527;
  iVar3 = (**(code **)*local_30)();
  local_68 = iVar3;
  FUN_18001e2b0(local_38,local_30);
  FUN_18002d9c0(local_30[1],0xffffffff,"CalculateConeRecoil");
  cVar2 = (**(code **)(*local_30 + 0x138))(local_30,0xffffffff,6);
  if (cVar2 == '\0') {
LAB_18007f5ed:
    lVar5 = *local_30;
  }
  else {
    FUN_18001e2b0(local_38,local_30);
    iVar4 = FUN_180023180(local_30[1],1,1);
    lVar5 = *local_30;
    if (iVar4 == 0) {
      dVar1 = (double)(**(code **)(lVar5 + 0xc0))(local_30,0xffffffff);
      *(float *)(param_1 + 1) = (float)dVar1;
      goto LAB_18007f5ed;
    }
  }
  (**(code **)(lVar5 + 0x10))(local_30,1);
  (**(code **)(*local_30 + 0x10))(local_30,1);
  local_48 = param_1;
  iVar4 = (**(code **)*local_30)();
  while (iVar3 < iVar4) {
    (**(code **)(*local_30 + 0x10))(local_30,1);
    iVar4 = (**(code **)*local_30)();
  }
  FUN_18001e2b0(local_38,local_30);
  FUN_18002d9c0(local_30[1],0xffffffff,"GetStatL");
  cVar2 = (**(code **)(*local_30 + 0x138))(local_30,0xffffffff,6);
  if (cVar2 == '\0') {
LAB_18007f7e3:
    lVar5 = *local_30;
  }
  else {
    FUN_18001e2b0(local_38,local_30);
    (**(code **)(*local_30 + 0xe8))(local_30,"Primary.SpreadBiasYaw",0);
    iVar4 = FUN_180023180(local_30[1],2,1);
    lVar5 = *local_30;
    if (iVar4 == 0) {
      cVar2 = (**(code **)(lVar5 + 0x138))(local_30,0xffffffff,3);
      if (cVar2 != '\0') {
        dVar1 = (double)(**(code **)(*local_30 + 0xc0))(local_30,0xffffffff);
        *(float *)((longlong)param_1 + 0xc) = (float)dVar1;
      }
      lVar5 = *local_30;
    }
    (**(code **)(lVar5 + 0x10))(local_30,1);
    FUN_18002d9c0(local_30[1],0xffffffff,"GetStatL");
    cVar2 = (**(code **)(*local_30 + 0x138))(local_30,0xffffffff,6);
    if (cVar2 == '\0') goto LAB_18007f7e3;
    FUN_18001e2b0(local_38,local_30);
    (**(code **)(*local_30 + 0xe8))(local_30,"Primary.SpreadBiasPitch",0);
    iVar4 = FUN_180023180(local_30[1],2,1);
    lVar5 = *local_30;
    if (iVar4 == 0) {
      cVar2 = (**(code **)(lVar5 + 0x138))(local_30,0xffffffff,3);
      if (cVar2 != '\0') {
        dVar1 = (double)(**(code **)(*local_30 + 0xc0))(local_30,0xffffffff);
        *(float *)(param_1 + 2) = (float)dVar1;
      }
      goto LAB_18007f7e3;
    }
  }
  (**(code **)(lVar5 + 0x10))(local_30,1);
  (**(code **)(*local_30 + 0x10))(local_30,1);
  iVar4 = (**(code **)*local_30)();
  while (iVar3 < iVar4) {
    (**(code **)(*local_30 + 0x10))(local_30,1);
    iVar4 = (**(code **)*local_30)();
  }
  FUN_18001e2b0(local_38,local_30);
  FUN_18002d9c0(local_30[1],0xffffffff,"GetStatL");
  cVar2 = (**(code **)(*local_30 + 0x138))(local_30,0xffffffff,6);
  if (cVar2 == '\0') {
LAB_18007f911:
    lVar5 = *local_30;
  }
  else {
    FUN_18001e2b0(local_38,local_30);
    (**(code **)(*local_30 + 0xe8))(local_30,"Primary.NumShots",0);
    iVar4 = FUN_180023180(local_30[1],2,1);
    lVar5 = *local_30;
    if (iVar4 == 0) {
      cVar2 = (**(code **)(lVar5 + 0x138))(local_30,0xffffffff,3);
      if (cVar2 != '\0') {
        dVar1 = (double)(**(code **)(*local_30 + 0xc0))(local_30,0xffffffff);
        iVar4 = 1;
        if ((int)dVar1 - 1U < 0x40) {
          iVar4 = (int)dVar1;
        }
        *(int *)((longlong)param_1 + 0x14) = iVar4;
      }
      goto LAB_18007f911;
    }
  }
  (**(code **)(lVar5 + 0x10))(local_30,1);
  (**(code **)(*local_30 + 0x10))(local_30,1);
  iVar4 = (**(code **)*local_30)();
  while (iVar3 < iVar4) {
    (**(code **)(*local_30 + 0x10))(local_30,1);
    iVar4 = (**(code **)*local_30)();
  }
  if (local_38 == param_1[6]) {
    pplVar7 = local_48 + 7;
  }
  else {
    param_1[6] = local_38;
    pplVar7 = param_1 + 7;
    *(char *)pplVar7 = '\0';
    *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  }
  local_48 = &local_30;
  local_40 = (longlong *)&local_38;
  FUN_18007fab0(&local_48,"GetViewPunchP",(longlong)param_1 + 0x3c);
  FUN_18007fab0(&local_48,"GetViewPunchY",param_1 + 8);
  if ((DAT_180380948 < (float)(*(uint *)((longlong)param_1 + 0x3c) & (uint)_DAT_1803817c0)) ||
     (DAT_180380948 < (float)(*(uint *)(param_1 + 8) & (uint)_DAT_1803817c0))) {
    *(char *)pplVar7 = '\x01';
  }
  if ((*(char *)pplVar7 == '\0') &&
     (((DAT_1803ff100 != 0 ||
       ((DAT_1803fa340 != 0 && (DAT_1803ff100 = FUN_180016fb0(), DAT_1803ff100 != 0)))) &&
      (iVar3 = FUN_1800197a0(), iVar3 != 0)))) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  *(undefined1 *)((longlong)local_60 + 0x2c) = uVar6;
LAB_18007f527:
  if (local_30 != (longlong *)0x0) {
    (**(code **)*local_30)();
    DAT_1803fa338 = local_20 != (longlong **)0x0;
    DAT_1803fa330 = local_60;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_20;
    }
    DAT_1803fa339 = local_57;
    DAT_1803fa33d = local_53;
    DAT_1803fa33f = local_51;
  }
  return;
}


