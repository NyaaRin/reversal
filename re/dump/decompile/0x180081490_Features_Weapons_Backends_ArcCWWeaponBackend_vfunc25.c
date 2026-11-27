// 0x180081490  Features_Weapons_Backends_ArcCWWeaponBackend_vfunc25
// size=3624 thunk=false
// signature: undefined Features_Weapons_Backends_ArcCWWeaponBackend_vfunc25()
// status: ok


void Features_Weapons_Backends_ArcCWWeaponBackend_vfunc25(longlong param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  char *_Str;
  size_t sVar7;
  undefined4 *puVar8;
  longlong lVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88;
  int local_80;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined1 uStack_5c;
  undefined2 local_5b;
  undefined1 local_59;
  float local_48;
  
  local_98 = (longlong *)0x0;
  uStack_90 = 0;
  local_88 = 0;
  local_78 = param_2;
  local_70 = param_1;
  FUN_18001bcd0(0,&local_98);
  if (local_98 == (longlong *)0x0) goto LAB_18008228e;
  iVar4 = (**(code **)*local_98)();
  local_80 = iVar4;
  FUN_18001e2b0(param_2,local_98);
  FUN_18002d9c0(local_98[1],0xffffffff,"GetBurstCount");
  cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,6);
  if (cVar2 != '\0') {
    FUN_18001e2b0(param_2,local_98);
    FUN_180023180(local_98[1],1,1);
    cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,3);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,4);
      if ((cVar2 != '\0') &&
         (_Str = (char *)(**(code **)(*local_98 + 0xb8))(local_98,0xffffffff,0), _Str != (char *)0x0
         )) {
        sVar7 = strlen(_Str);
        FUN_180212700(param_1 + 0x28,_Str,sVar7);
      }
    }
    else {
      dVar1 = (double)(**(code **)(*local_98 + 0xc0))();
      uVar6 = FUN_180013ba0(&local_68,(int)dVar1);
      FUN_18020e8a0(param_1 + 0x28,uVar6);
      FUN_18020e450(&local_68);
    }
  }
  (**(code **)(*local_98 + 0x10))(local_98,1);
  (**(code **)(*local_98 + 0x10))(local_98,1);
  iVar5 = (**(code **)*local_98)();
  while (iVar4 < iVar5) {
    (**(code **)(*local_98 + 0x10))(local_98,1);
    iVar5 = (**(code **)*local_98)();
  }
  FUN_18001e2b0(param_2,local_98);
  FUN_18002d9c0(local_98[1],0xffffffff,"GetDispersion");
  cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,6);
  if (cVar2 != '\0') {
    FUN_18001e2b0(param_2,local_98);
    FUN_180023180(local_98[1],1,1);
    dVar1 = (double)(**(code **)(*local_98 + 0xc0))(local_98,0xffffffff);
    *(float *)(param_1 + 8) = (float)dVar1;
  }
  (**(code **)(*local_98 + 0x10))(local_98,1);
  (**(code **)(*local_98 + 0x10))(local_98,1);
  iVar5 = (**(code **)*local_98)();
  fVar11 = DAT_18038095c;
  while (DAT_18038095c = fVar11, iVar4 < iVar5) {
    (**(code **)(*local_98 + 0x10))(local_98,1);
    iVar5 = (**(code **)*local_98)();
    fVar11 = DAT_18038095c;
  }
  local_48 = fVar11;
  FUN_180023e60(local_98,0);
  FUN_18002db10(local_98[1],0xffffffff,&DAT_1803475a4);
  cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,5);
  if (cVar2 != '\0') {
    FUN_18002db10(local_98[1],0xffffffff,"MOAToAcc");
    cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,3);
    if (cVar2 != '\0') {
      dVar1 = (double)(**(code **)(*local_98 + 0xc0))(local_98,0xffffffff);
      fVar11 = (float)dVar1;
      local_48 = fVar11;
    }
    (**(code **)(*local_98 + 0x10))(local_98,1);
  }
  (**(code **)(*local_98 + 0x10))(local_98,2);
  FUN_18001e2b0(param_2,local_98);
  FUN_18002d9c0(local_98[1],0xffffffff,"GetBuff");
  cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,6);
  if (cVar2 == '\0') {
    fVar12 = 0.0;
  }
  else {
    FUN_18001e2b0(param_2,local_98);
    (**(code **)(*local_98 + 0xe8))(local_98,"AccuracyMOA",0);
    FUN_180023180(local_98[1],2,1);
    dVar1 = (double)(**(code **)(*local_98 + 0xc0))(local_98,0xffffffff);
    fVar12 = (float)dVar1;
  }
  (**(code **)(*local_98 + 0x10))(local_98,1);
  (**(code **)(*local_98 + 0x10))(local_98,1);
  *(float *)(param_1 + 0xc) = fVar11;
  *(float *)(param_1 + 0x10) = fVar12 * fVar11;
  iVar5 = (**(code **)*local_98)();
  while (iVar4 < iVar5) {
    (**(code **)(*local_98 + 0x10))(local_98,1);
    iVar5 = (**(code **)*local_98)();
  }
  FUN_180023e60(local_98,0);
  FUN_18002db10(local_98[1],0xffffffff,&DAT_1803475a4);
  cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,5);
  if (cVar2 != '\0') {
    FUN_18002db10(local_98[1],0xffffffff,"StrafeTilt");
    cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,6);
    if (cVar2 != '\0') {
      FUN_18001e2b0(param_2,local_98);
      FUN_180023180(local_98[1],1,1);
      dVar1 = (double)(**(code **)(*local_98 + 0xc0))(local_98,0xffffffff);
      *(float *)(param_1 + 0x14) = (float)dVar1;
    }
    (**(code **)(*local_98 + 0x10))(local_98,1);
  }
  (**(code **)(*local_98 + 0x10))(local_98,2);
  iVar5 = (**(code **)*local_98)();
  while (iVar4 < iVar5) {
    (**(code **)(*local_98 + 0x10))(local_98,1);
    iVar5 = (**(code **)*local_98)();
  }
  local_68 = 0;
  uStack_64 = 0;
  local_60 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_18001e2b0(param_2,local_98);
  FUN_18002d9c0(local_98[1],0xffffffff,"GetFreeAimOffset");
  cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,6);
  if (cVar2 != '\0') {
    FUN_18001e2b0(param_2,local_98);
    FUN_180023180(local_98[1],1,1);
    puVar8 = (undefined4 *)(**(code **)(*local_98 + 0x170))(local_98,0xffffffff);
    *(undefined4 *)(param_1 + 0x18) = *puVar8;
    *(undefined4 *)(param_1 + 0x1c) = puVar8[1];
    *(undefined4 *)(param_1 + 0x20) = puVar8[2];
  }
  (**(code **)(*local_98 + 0x10))(local_98,1);
  (**(code **)(*local_98 + 0x10))(local_98,1);
  iVar5 = (**(code **)*local_98)();
  while (iVar4 < iVar5) {
    (**(code **)(*local_98 + 0x10))(local_98,1);
    iVar5 = (**(code **)*local_98)();
  }
  cVar2 = FUN_18001e2b0(param_2,local_98);
  if (cVar2 != '\0') {
    FUN_18002d9c0(local_98[1],0xffffffff,"GetWeaponOpDelay");
    cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,6);
    if (cVar2 == '\0') {
LAB_180081c0a:
      lVar9 = *local_98;
    }
    else {
      FUN_18001e2b0(param_2,local_98);
      iVar5 = FUN_180023180(local_98[1],1,1);
      lVar9 = *local_98;
      if (iVar5 == 0) {
        uVar6 = (**(code **)(lVar9 + 0xc0))(local_98,0xffffffff);
        *(undefined8 *)(param_1 + 0x48) = uVar6;
        goto LAB_180081c0a;
      }
    }
    (**(code **)(lVar9 + 0x10))(local_98,1);
    FUN_18002d9c0(local_98[1],0xffffffff,"GetNextPrimaryFire");
    cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,6);
    if (cVar2 == '\0') {
LAB_180081c91:
      lVar9 = *local_98;
    }
    else {
      FUN_18001e2b0(param_2,local_98);
      iVar5 = FUN_180023180(local_98[1],1,1);
      lVar9 = *local_98;
      if (iVar5 == 0) {
        uVar6 = (**(code **)(lVar9 + 0xc0))(local_98,0xffffffff);
        *(undefined8 *)(param_1 + 0x50) = uVar6;
        goto LAB_180081c91;
      }
    }
    (**(code **)(lVar9 + 0x10))(local_98,1);
    FUN_18002d9c0(local_98[1],0xffffffff,"GetHolster_Time");
    cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,6);
    if (cVar2 == '\0') {
LAB_180081d18:
      lVar9 = *local_98;
    }
    else {
      FUN_18001e2b0(param_2,local_98);
      iVar5 = FUN_180023180(local_98[1],1,1);
      lVar9 = *local_98;
      if (iVar5 == 0) {
        uVar6 = (**(code **)(lVar9 + 0xc0))(local_98,0xffffffff);
        *(undefined8 *)(param_1 + 0x58) = uVar6;
        goto LAB_180081d18;
      }
    }
    (**(code **)(lVar9 + 0x10))(local_98,1);
    FUN_18002d9c0(local_98[1],0xffffffff,"GetHolster_Entity");
    cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,6);
    if (cVar2 == '\0') {
LAB_180081e56:
      lVar9 = *local_98;
    }
    else {
      FUN_18001e2b0(param_2,local_98);
      iVar5 = FUN_180023180(local_98[1],1,1);
      lVar9 = *local_98;
      if (iVar5 == 0) {
        cVar2 = (**(code **)(lVar9 + 0x138))(local_98,0xffffffff,9);
        if ((cVar2 == '\0') &&
           (cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,0), cVar2 != '\0')) {
          *(undefined1 *)(param_1 + 0x60) = 0;
        }
        else {
          FUN_180023e60(local_98,0);
          FUN_18002db10(local_98[1],0xffffffff,"IsValid");
          (**(code **)(*local_98 + 8))(local_98,0xfffffffd);
          iVar5 = FUN_180023180(local_98[1],1,1);
          lVar9 = *local_98;
          if (iVar5 == 0) {
            uVar3 = (**(code **)(lVar9 + 200))(local_98,0xffffffff);
            *(undefined1 *)(param_1 + 0x60) = uVar3;
            lVar9 = *local_98;
          }
          (**(code **)(lVar9 + 0x10))(local_98,1);
          (**(code **)(*local_98 + 0x10))(local_98,1);
        }
        goto LAB_180081e56;
      }
    }
    (**(code **)(lVar9 + 0x10))(local_98,1);
    FUN_18002d9c0(local_98[1],0xffffffff,"GetState");
    cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,6);
    if (cVar2 == '\0') {
LAB_180081edf:
      lVar9 = *local_98;
    }
    else {
      FUN_18001e2b0(param_2,local_98);
      iVar5 = FUN_180023180(local_98[1],1,1);
      lVar9 = *local_98;
      if (iVar5 == 0) {
        dVar1 = (double)(**(code **)(lVar9 + 0xc0))(local_98,0xffffffff);
        *(int *)(param_1 + 100) = (int)dVar1;
        goto LAB_180081edf;
      }
    }
    (**(code **)(lVar9 + 0x10))(local_98,1);
    FUN_18002d9c0(local_98[1],0xffffffff,"GetNeedCycle");
    cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,6);
    if (cVar2 == '\0') {
LAB_180081f64:
      lVar9 = *local_98;
    }
    else {
      FUN_18001e2b0(param_2,local_98);
      iVar5 = FUN_180023180(local_98[1],1,1);
      lVar9 = *local_98;
      if (iVar5 == 0) {
        uVar3 = (**(code **)(lVar9 + 200))(local_98,0xffffffff);
        *(undefined1 *)(param_1 + 0x68) = uVar3;
        goto LAB_180081f64;
      }
    }
    (**(code **)(lVar9 + 0x10))(local_98,1);
    FUN_18002d9c0(local_98[1],0xffffffff,"GetPriorityAnim");
    cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,6);
    if (cVar2 == '\0') {
LAB_180081fe9:
      lVar9 = *local_98;
    }
    else {
      FUN_18001e2b0(param_2,local_98);
      iVar5 = FUN_180023180(local_98[1],1,1);
      lVar9 = *local_98;
      if (iVar5 == 0) {
        uVar3 = (**(code **)(lVar9 + 200))(local_98,0xffffffff);
        *(undefined1 *)(param_1 + 0x69) = uVar3;
        goto LAB_180081fe9;
      }
    }
    (**(code **)(lVar9 + 0x10))(local_98,1);
    FUN_18002d9c0(local_98[1],0xffffffff,"GetHeatLocked");
    cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,6);
    if (cVar2 == '\0') {
LAB_18008206e:
      lVar9 = *local_98;
    }
    else {
      FUN_18001e2b0(param_2,local_98);
      iVar5 = FUN_180023180(local_98[1],1,1);
      lVar9 = *local_98;
      if (iVar5 == 0) {
        uVar3 = (**(code **)(lVar9 + 200))(local_98,0xffffffff);
        *(undefined1 *)(param_1 + 0x6a) = uVar3;
        goto LAB_18008206e;
      }
    }
    (**(code **)(lVar9 + 0x10))(local_98,1);
    FUN_18002d9c0(local_98[1],0xffffffff,"GetInUBGL");
    cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,6);
    if (cVar2 == '\0') {
LAB_1800820f3:
      lVar9 = *local_98;
    }
    else {
      FUN_18001e2b0(param_2,local_98);
      iVar5 = FUN_180023180(local_98[1],1,1);
      lVar9 = *local_98;
      if (iVar5 == 0) {
        uVar3 = (**(code **)(lVar9 + 200))(local_98,0xffffffff);
        *(undefined1 *)(param_1 + 0x6b) = uVar3;
        goto LAB_1800820f3;
      }
    }
    (**(code **)(lVar9 + 0x10))(local_98,1);
    *(undefined1 *)(param_1 + 0x6c) = 0;
    FUN_18002d9c0(local_98[1],0xffffffff,"GetNWState");
    cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,6);
    if (cVar2 == '\0') {
LAB_18008222e:
      lVar9 = *local_98;
LAB_180082236:
      (**(code **)(lVar9 + 0x10))(local_98,1);
    }
    else {
      FUN_18001e2b0(param_2,local_98);
      iVar5 = FUN_180023180(local_98[1],1,1);
      lVar9 = *local_98;
      if (iVar5 != 0) goto LAB_180082236;
      dVar1 = (double)(**(code **)(lVar9 + 0xc0))(local_98,0xffffffff);
      (**(code **)(*local_98 + 0x10))(local_98,1);
      if ((int)dVar1 == 2) {
        FUN_18002d9c0(local_98[1],0xffffffff,"CanShootWhileSprint");
        cVar2 = (**(code **)(*local_98 + 0x138))(local_98,0xffffffff,6);
        if (cVar2 == '\0') goto LAB_18008222e;
        FUN_18001e2b0(param_2,local_98);
        iVar5 = FUN_180023180(local_98[1],1,1);
        lVar9 = *local_98;
        if (iVar5 != 0) goto LAB_180082236;
        cVar2 = (**(code **)(lVar9 + 200))(local_98,0xffffffff);
        (**(code **)(*local_98 + 0x10))(local_98,1);
        if (cVar2 == '\0') {
          *(undefined1 *)(param_1 + 0x6c) = 1;
        }
      }
    }
    (**(code **)(*local_98 + 0x10))(local_98,1);
  }
  iVar5 = (**(code **)*local_98)();
  while (iVar4 < iVar5) {
    (**(code **)(*local_98 + 0x10))(local_98,1);
    iVar5 = (**(code **)*local_98)();
  }
LAB_18008228e:
  if (local_98 != (longlong *)0x0) {
    (**(code **)*local_98)();
    bVar10 = local_88 == 0;
    if (bVar10) {
      local_88 = CONCAT44(uStack_64,local_68);
    }
    DAT_1803fa338 = !bVar10;
    DAT_1803fa339 = CONCAT13(uStack_5c,local_60._1_3_);
    DAT_1803fa33d = local_5b;
    DAT_1803fa33f = local_59;
    DAT_1803fa330 = local_88;
  }
  return;
}


