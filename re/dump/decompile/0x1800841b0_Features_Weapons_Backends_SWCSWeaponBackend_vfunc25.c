// 0x1800841b0  Features_Weapons_Backends_SWCSWeaponBackend_vfunc25
// size=2924 thunk=false
// signature: undefined Features_Weapons_Backends_SWCSWeaponBackend_vfunc25()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Weapons_Backends_SWCSWeaponBackend_vfunc25(longlong param_1,longlong param_2)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  float *pfVar11;
  undefined4 *puVar12;
  char *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_f8 [32];
  int local_d8;
  longlong **local_d0;
  undefined8 local_c8;
  float local_c0 [2];
  longlong local_b8;
  float local_b0 [2];
  float local_a8 [2];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong **local_78;
  longlong *local_70;
  longlong **local_68;
  ulonglong local_60;
  
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  if (DAT_1803fa678 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  local_78 = (longlong **)0x0;
  local_b8 = param_1;
  local_90 = param_2;
  FUN_18001bcd0(0,&local_88);
  if (local_88 == (longlong *)0x0) goto LAB_180084cf7;
  iVar7 = (**(code **)*local_88)();
  local_70 = &local_90;
  local_68 = &local_88;
  local_d0 = &local_70;
  local_c8 = &local_88;
  local_d8 = iVar7;
  cVar5 = FUN_18001e2b0(local_90,local_88);
  if (cVar5 != '\0') {
    FUN_18002d9c0(local_88[1],0xffffffff,"GetInaccuracy");
    cVar5 = (**(code **)(*local_88 + 0x138))(local_88,0xffffffff,6);
    if (cVar5 == '\0') {
LAB_180084339:
      lVar10 = *local_88;
    }
    else {
      cVar5 = FUN_18001e2b0(local_90,local_88);
      lVar10 = *local_88;
      if (cVar5 != '\0') {
        (**(code **)(lVar10 + 0xf8))(local_88,0);
        iVar8 = FUN_180023180(local_88[1],2,1);
        if ((iVar8 == 0) &&
           (cVar5 = (**(code **)(*local_88 + 0x138))(local_88,0xffffffff,3), cVar5 != '\0')) {
          dVar3 = (double)(**(code **)(*local_88 + 0xc0))(local_88,0xffffffff);
          *(float *)(param_1 + 8) = (float)dVar3;
        }
        goto LAB_180084339;
      }
    }
    (**(code **)(lVar10 + 0x10))(local_88,1);
    (**(code **)(*local_88 + 0x10))(local_88,1);
  }
  iVar8 = (**(code **)*local_88)();
  while (iVar7 < iVar8) {
    (**(code **)(*local_88 + 0x10))(local_88,1);
    iVar8 = (**(code **)*local_88)();
  }
  FUN_180084f00(&local_d0,"GetSpread",param_1 + 0xc);
  FUN_180084f00(&local_d0,"GetRecoilIndex",param_1 + 0x10);
  fVar1 = DAT_180380bb0;
  local_b0[0] = 0.0;
  local_a8[0] = 1.0;
  local_c0[0] = 0.0;
  FUN_180084f00(&local_d0,"GetWeaponMode",local_b0);
  FUN_180084f00(&local_d0,"GetBullets",local_a8);
  FUN_180084f00(&local_d0,"GetBurstShotsRemaining",local_c0);
  *(int *)(param_1 + 0x14) = (int)local_b0[0];
  iVar8 = (int)local_a8[0];
  if (local_a8[0] < fVar1) {
    iVar8 = 1;
  }
  *(int *)(param_1 + 0x18) = iVar8;
  *(int *)(param_1 + 0x1c) = (int)local_c0[0];
  cVar5 = FUN_180084d90(&local_70,"GetInReload");
  if (cVar5 != '\0') {
    uVar6 = (**(code **)(*local_88 + 200))(local_88,0xffffffff);
    *(undefined1 *)(param_1 + 0x21) = uVar6;
    (**(code **)(*local_88 + 0x10))(local_88,2);
  }
  cVar5 = FUN_180084d90(&local_70,"GetIsRevolver");
  if (cVar5 != '\0') {
    uVar6 = (**(code **)(*local_88 + 200))(local_88,0xffffffff);
    *(undefined1 *)(param_1 + 0x23) = uVar6;
    (**(code **)(*local_88 + 0x10))(local_88,2);
  }
  cVar5 = FUN_180084d90(&local_70,"GetHasBurstMode");
  if (cVar5 != '\0') {
    uVar6 = (**(code **)(*local_88 + 200))(local_88,0xffffffff);
    *(undefined1 *)(param_1 + 0x20) = uVar6;
    (**(code **)(*local_88 + 0x10))(local_88,2);
  }
  FUN_180084f00(&local_d0,"GetMaxSpeed",param_1 + 0x34);
  FUN_180084f00(&local_d0,"GetInaccuracyMove",param_1 + 0x38);
  FUN_180084f00(&local_d0,"GetInaccuracyJumpInitial",param_1 + 0x3c);
  FUN_180084f00(&local_d0,"GetInaccuracyJumpApex",param_1 + 0x40);
  iVar8 = (**(code **)*local_88)();
  while (iVar7 < iVar8) {
    (**(code **)(*local_88 + 0x10))(local_88,1);
    iVar8 = (**(code **)*local_88)();
  }
  pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar10 = (*pcVar2)(DAT_1803fa360,uVar9);
  fVar16 = DAT_1803812ac;
  if ((lVar10 != 0) &&
     (cVar5 = FUN_18001e2b0(lVar10,local_88), fVar16 = DAT_1803812ac, cVar5 != '\0')) {
    FUN_18002d9c0(local_88[1],0xffffffff,"GetJumpPower");
    cVar5 = (**(code **)(*local_88 + 0x138))(local_88,0xffffffff,6);
    if ((cVar5 == '\0') || (cVar5 = FUN_18001e2b0(lVar10,local_88), cVar5 == '\0')) {
      (**(code **)(*local_88 + 0x10))(local_88,1);
      fVar16 = DAT_1803812ac;
      (**(code **)(*local_88 + 0x10))(local_88,1);
    }
    else {
      iVar8 = FUN_180023180(local_88[1],1,1);
      if ((iVar8 == 0) &&
         (cVar5 = (**(code **)(*local_88 + 0x138))(local_88,0xffffffff,3), cVar5 != '\0')) {
        dVar3 = (double)(**(code **)(*local_88 + 0xc0))(local_88,0xffffffff);
        fVar16 = DAT_1803812ac;
        fVar14 = (float)dVar3;
        if ((fVar1 < fVar14) && (fVar14 < DAT_1803812ac)) {
          *(float *)(param_1 + 0x44) = fVar14;
          (**(code **)(*local_88 + 0x10))(local_88,1);
          (**(code **)(*local_88 + 0x10))(local_88,1);
          goto LAB_18008473c;
        }
      }
      fVar16 = DAT_1803812ac;
      (**(code **)(*local_88 + 0x10))(local_88,1);
      (**(code **)(*local_88 + 0x10))(local_88,1);
    }
  }
LAB_18008473c:
  iVar8 = (**(code **)*local_88)();
  while (iVar7 < iVar8) {
    (**(code **)(*local_88 + 0x10))(local_88,1);
    iVar8 = (**(code **)*local_88)();
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar10 = (*pcVar2)(DAT_1803fa360,uVar9);
  if (lVar10 != 0) {
    pfVar11 = (float *)FUN_18001d530(lVar10);
    fVar14 = pfVar11[2];
    fVar15 = pfVar11[1] * pfVar11[1] + *pfVar11 * *pfVar11;
    if (fVar15 < 0.0) {
      fVar15 = sqrtf(fVar15);
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    *(float *)(param_1 + 0x4c) = fVar15;
    *(uint *)(param_1 + 0x50) = (uint)fVar14 & _DAT_1803817c0;
    puVar12 = (undefined4 *)FUN_18001d710(lVar10,local_c0);
    *(byte *)(param_1 + 0x49) = (byte)*puVar12 & 1;
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  fVar14 = *(float *)(param_1 + 8);
  fVar15 = fVar1;
  if (fVar14 < 0.0) {
    if (fVar14 <= fVar1) {
      fVar15 = 0.0;
    }
LAB_18008486c:
    *(float *)(param_1 + 8) = fVar15;
  }
  else if (fVar1 < fVar14) goto LAB_18008486c;
  if ((*(float *)(param_1 + 0xc) < 0.0) || (fVar1 < *(float *)(param_1 + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if ((*(float *)(param_1 + 0x10) < 0.0) || (DAT_180381290 < *(float *)(param_1 + 0x10))) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (0x3f < *(int *)(param_1 + 0x18) - 1U) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  if ((*(float *)(param_1 + 0x34) <= fVar1) || (fVar16 < *(float *)(param_1 + 0x34))) {
    *(undefined4 *)(param_1 + 0x34) = 0x437a0000;
  }
  fVar1 = DAT_180380fcc;
  if ((*(float *)(param_1 + 0x38) < 0.0) || (DAT_180380fcc < *(float *)(param_1 + 0x38))) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if ((*(float *)(param_1 + 0x3c) < 0.0) || (fVar1 < *(float *)(param_1 + 0x3c))) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if ((*(float *)(param_1 + 0x40) < 0.0) || (fVar1 < *(float *)(param_1 + 0x40))) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  cVar5 = FUN_180084d90(&local_70,"GetUninterpolatedAimPunchAngle");
  if (cVar5 != '\0') {
    cVar5 = (**(code **)(*local_88 + 0x138))(local_88,0xffffffff,0xb);
    if (cVar5 != '\0') {
      pfVar11 = (float *)(**(code **)(*local_88 + 0x170))(local_88,0xffffffff);
      local_c0[0] = *pfVar11;
      fVar1 = pfVar11[1];
      local_c8 = (longlong **)((ulonglong)local_c8 & 0xffffffff00000000);
      if ((((uint)local_c0[0] & 0x7f800000) == 0x7f800000) ||
         (local_a8[0] = fVar1, ((uint)fVar1 & 0x7f800000) == 0x7f800000)) {
        bVar4 = false;
      }
      else {
        local_b0[0] = 0.0;
        bVar4 = true;
      }
      if (((bVar4) && ((float)((uint)local_c0[0] & _DAT_1803817c0) <= DAT_18038110c)) &&
         ((float)((uint)fVar1 & _DAT_1803817c0) <= DAT_18038110c)) {
        *(float *)(param_1 + 0x28) = local_c0[0];
        *(float *)(param_1 + 0x2c) = fVar1;
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
    (**(code **)(*local_88 + 0x10))(local_88,2);
  }
  iVar8 = (**(code **)*local_88)();
  while (iVar7 < iVar8) {
    (**(code **)(*local_88 + 0x10))(local_88,1);
    iVar8 = (**(code **)*local_88)();
  }
  cVar5 = FUN_18001e2b0(local_90,local_88);
  if (cVar5 != '\0') {
    uVar9 = (**(code **)*local_88)();
    FUN_18002d9c0(local_88[1],uVar9,"IsNegev");
    uVar6 = (**(code **)(*local_88 + 200))(local_88,0xffffffff);
    *(undefined1 *)(param_1 + 0x25) = uVar6;
    (**(code **)(*local_88 + 0x10))(local_88,1);
    FUN_18002d9c0(local_88[1],uVar9,"IsR8Revolver");
    uVar6 = (**(code **)(*local_88 + 200))(local_88,0xffffffff);
    *(undefined1 *)(param_1 + 0x24) = uVar6;
    (**(code **)(*local_88 + 0x10))(local_88,1);
    *(undefined1 *)(param_1 + 0x61) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined1 *)(param_1 + 0x22) = 0;
    FUN_18002d9c0(local_88[1],uVar9,"ItemAttributes");
    cVar5 = (**(code **)(*local_88 + 0x138))(local_88,0xffffffff,5);
    if (cVar5 != '\0') {
      FUN_18002d9c0(local_88[1],0xffffffff,"spread seed");
      cVar5 = (**(code **)(*local_88 + 0x138))(local_88,0xffffffff,4);
      if (cVar5 == '\0') {
        cVar5 = (**(code **)(*local_88 + 0x138))(local_88,0xffffffff,3);
        if (cVar5 != '\0') {
          dVar3 = (double)(**(code **)(*local_88 + 0xc0))(local_88,0xffffffff);
          iVar8 = (int)dVar3;
          goto LAB_180084bcb;
        }
      }
      else {
        pcVar13 = (char *)(**(code **)(*local_88 + 0xb8))(local_88,0xffffffff,0);
        if ((pcVar13 != (char *)0x0) && (*pcVar13 != '\0')) {
          iVar8 = atoi(pcVar13);
LAB_180084bcb:
          *(int *)(param_1 + 100) = iVar8;
          *(undefined1 *)(param_1 + 0x61) = 1;
        }
      }
      (**(code **)(*local_88 + 0x10))(local_88,1);
      FUN_18002d9c0(local_88[1],0xffffffff,"is full auto");
      cVar5 = (**(code **)(*local_88 + 0x138))(local_88,0xffffffff,4);
      if (cVar5 == '\0') {
        cVar5 = (**(code **)(*local_88 + 0x138))(local_88,0xffffffff,3);
        if (cVar5 != '\0') {
          dVar3 = (double)(**(code **)(*local_88 + 0xc0))(local_88,0xffffffff);
          if (dVar3 == 0.0) goto LAB_180084ca7;
          goto LAB_180084c41;
        }
      }
      else {
        pcVar13 = (char *)(**(code **)(*local_88 + 0xb8))(local_88,0xffffffff,0);
        if ((pcVar13 == (char *)0x0) || (iVar8 = atoi(pcVar13), iVar8 == 0)) {
LAB_180084ca7:
          uVar6 = 0;
        }
        else {
LAB_180084c41:
          uVar6 = 1;
        }
        *(undefined1 *)(param_1 + 0x22) = uVar6;
      }
      (**(code **)(*local_88 + 0x10))(local_88,1);
    }
    (**(code **)(*local_88 + 0x10))(local_88,1);
    (**(code **)(*local_88 + 0x10))(local_88,1);
  }
  iVar8 = (**(code **)*local_88)();
  while (iVar7 < iVar8) {
    (**(code **)(*local_88 + 0x10))(local_88,1);
    iVar8 = (**(code **)*local_88)();
  }
  FUN_180084f80(param_1);
LAB_180084cf7:
  if (local_88 != (longlong *)0x0) {
    (**(code **)*local_88)();
    DAT_1803fa338 = local_78 != (longlong **)0x0;
    DAT_1803fa330 = local_d0;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_78;
    }
    DAT_1803fa339 = local_c8._1_4_;
    DAT_1803fa33d = local_c8._5_2_;
    DAT_1803fa33f = local_c8._7_1_;
  }
  return;
}


