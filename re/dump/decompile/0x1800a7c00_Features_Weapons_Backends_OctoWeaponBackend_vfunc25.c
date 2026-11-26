// 0x1800a7c00  Features_Weapons_Backends_OctoWeaponBackend_vfunc25
// size=2893 thunk=false
// signature: undefined Features_Weapons_Backends_OctoWeaponBackend_vfunc25()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Weapons_Backends_OctoWeaponBackend_vfunc25(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  int *******pppppppiVar15;
  longlong lVar16;
  undefined **ppuVar17;
  bool bVar18;
  undefined1 auStack_1a8 [40];
  longlong *local_180;
  undefined1 *local_178;
  undefined4 *local_170;
  undefined4 *local_168;
  char local_158;
  longlong *local_150;
  undefined8 uStack_148;
  longlong local_140;
  int local_138;
  longlong local_130;
  undefined4 local_127;
  undefined2 local_123;
  undefined1 local_121;
  float local_120;
  undefined4 local_11c;
  longlong local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined **local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  int ******local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  ulonglong local_b0;
  int ******local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong local_90;
  undefined1 local_88 [16];
  ulonglong local_78;
  
  dVar5 = DAT_1803813b0;
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_1a8;
  dVar4 = DAT_1803813b0;
  if (DAT_1803fa608 != (float *)0x0) {
    dVar4 = (double)*DAT_1803fa608;
  }
  plVar1 = param_1 + 1;
  local_110 = param_1;
  local_f8 = param_2;
  local_f0 = plVar1;
  if ((param_2 != *plVar1) || ((0.0 <= (double)param_1[3] && (dVar4 < (double)param_1[3])))) {
    (**(code **)(*param_1 + 0xd0))();
    *plVar1 = param_2;
    param_1[9] = 0;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3c) = 1;
    *(undefined2 *)((longlong)param_1 + 0x59) = 1;
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  }
  if (param_2 == 0) {
    return;
  }
  if (DAT_1803fa678 == 0) {
    return;
  }
  if (DAT_1803fa608 == (float *)0x0) {
    return;
  }
  local_150 = (longlong *)0x0;
  uStack_148 = 0;
  local_140 = 0;
  FUN_18001bcd0(0,&local_150);
  if ((local_150 == (longlong *)0x0) || (local_150[1] == 0)) goto LAB_1800a8729;
  pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar10 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar13 = (*pcVar3)(DAT_1803fa360,uVar10);
  local_118 = lVar13;
  local_138 = (**(code **)*local_150)();
  cVar7 = FUN_18001e2b0(param_2,local_150);
  if (cVar7 != '\0') {
    uVar10 = (**(code **)*local_150)();
    local_11c = uVar10;
    local_158 = FUN_1800a5030(local_150,uVar10,"Spread",param_1 + 7);
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    FUN_1800a5030(local_150,uVar10,"Distance");
    local_120 = 1.0;
    FUN_1800a5030(local_150,uVar10,"NumShots",&local_120);
    if (((((uint)local_120 & 0x7f800000) == 0x7f800000) || (local_120 < DAT_180380bb0)) ||
       (iVar11 = (int)local_120, DAT_1803811cc < local_120)) {
      iVar11 = 1;
    }
    *(int *)((longlong)param_1 + 0x3c) = iVar11;
    FUN_1800a5150(local_150,uVar10);
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 0xf;
    local_a8 = (int ******)0x0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0xf;
    local_c8 = (int ******)0x0;
    cVar7 = FUN_1800a4f50(local_150,uVar10,"WeaponCategory",&local_a8);
    if (cVar7 != '\0') {
      pppppppiVar15 = &local_a8;
      if (0xf < local_90) {
        pppppppiVar15 = (int *******)local_a8;
      }
      if (local_98 == 5) {
        iVar11 = *(int *)pppppppiVar15 + -0x656c656d;
        if (iVar11 == 0) {
          iVar11 = *(byte *)((longlong)pppppppiVar15 + 4) - 0x65;
        }
        bVar18 = iVar11 == 0;
      }
      else {
        bVar18 = false;
      }
      *(bool *)(param_1 + 8) = bVar18;
    }
    *(undefined1 *)((longlong)param_1 + 0x41) = 0;
    plVar1 = DAT_1803edd00;
    for (local_e8 = DAT_1803edcf8; local_e8 != plVar1; local_e8 = local_e8 + 4) {
      plVar14 = local_e8;
      if (0xf < (ulonglong)local_e8[3]) {
        plVar14 = (longlong *)*local_e8;
      }
      if (local_e8[2] == 0x14) {
        lVar16 = *plVar14 + -0x6f5f6e6f70616577;
        if ((lVar16 == 0) && (lVar16 = plVar14[1] + -0x657361625f6f7463, lVar16 == 0)) {
          lVar16 = (ulonglong)*(uint *)(plVar14 + 2) - 0x7269615f;
        }
        if (lVar16 == 0) {
          *(undefined1 *)((longlong)param_1 + 0x41) = 1;
        }
      }
    }
    cVar7 = FUN_1800a5380(local_150,uVar10,&local_c8);
    plVar1 = local_150;
    if (cVar7 == '\0') {
LAB_1800a7fe8:
      uVar8 = 0;
    }
    else {
      pppppppiVar15 = &local_c8;
      if (0xf < local_b0) {
        pppppppiVar15 = (int *******)local_c8;
      }
      if (local_b8 != 5) goto LAB_1800a7fe8;
      iVar11 = *(int *)pppppppiVar15 + -0x73727562;
      if (iVar11 == 0) {
        iVar11 = *(byte *)((longlong)pppppppiVar15 + 4) - 0x74;
      }
      if (iVar11 != 0) goto LAB_1800a7fe8;
      uVar8 = 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x42) = uVar8;
    cVar7 = FUN_1800a5270(local_150,param_2,uVar10,"IsStockHidden");
    if (cVar7 != '\0') {
      cVar7 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,1);
      if (cVar7 != '\0') {
        uVar8 = (**(code **)(*plVar1 + 200))(plVar1,0xffffffff);
        *(undefined1 *)((longlong)param_1 + 0x44) = uVar8;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,1);
    }
    plVar1 = local_150;
    cVar7 = FUN_1800a5270(local_150,param_2,uVar10,"IsReady");
    if (cVar7 == '\0') {
LAB_1800a817c:
      bVar18 = false;
      cVar7 = FUN_1800a4300(SUB84(dVar4,0),(int)param_1[4],DAT_180380c90);
      bVar6 = false;
      if (cVar7 != '\0') goto LAB_1800a80b4;
      uVar8 = 0;
    }
    else {
      cVar7 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,1);
      if (cVar7 == '\0') {
        (**(code **)(*plVar1 + 0x10))(plVar1,1);
        goto LAB_1800a817c;
      }
      uVar8 = (**(code **)(*plVar1 + 200))(plVar1,0xffffffff);
      *(undefined1 *)(param_1 + 0xb) = uVar8;
      (**(code **)(*plVar1 + 0x10))(plVar1,1);
      param_1[4] = (longlong)dVar4;
      bVar6 = true;
LAB_1800a80b4:
      bVar18 = bVar6;
      uVar8 = 1;
    }
    plVar1 = local_150;
    *(undefined1 *)((longlong)param_1 + 0x5a) = uVar8;
    cVar7 = FUN_1800a5270(local_150,param_2,uVar10,"CanSetReady");
    if (cVar7 != '\0') {
      cVar7 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,1);
      if (cVar7 != '\0') {
        uVar8 = (**(code **)(*plVar1 + 200))(plVar1,0xffffffff);
        *(undefined1 *)((longlong)param_1 + 0x59) = uVar8;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,1);
    }
    uVar10 = local_11c;
    if ((((uint)((ulonglong)dVar4 >> 0x34) & 0x7ff) == 0x7ff) || (dVar4 < 0.0)) {
      param_1[6] = -0x4010000000000000;
LAB_1800a81af:
      param_1[5] = -0x4010000000000000;
    }
    else {
      if (dVar4 < (double)param_1[6]) {
        param_1[6] = -0x4010000000000000;
        param_1[5] = -0x4010000000000000;
      }
      param_1[6] = (longlong)dVar4;
      if (bVar18) {
        if ((char)param_1[0xb] == '\0') goto LAB_1800a81af;
        if ((double)param_1[5] <= 0.0 && (double)param_1[5] != 0.0) {
          param_1[5] = (longlong)dVar4;
        }
      }
    }
    DAT_1803e8830 = 0xbf800000;
    DAT_18040a238 = param_2;
    FUN_18007daf0(local_150,local_11c,"nextFire",&DAT_1803e8830);
    if (((local_158 != '\0') || ((char)param_1[8] != '\0')) ||
       (*(char *)((longlong)param_1 + 0x41) != '\0')) {
      *(undefined1 *)(param_1 + 2) = 1;
      param_1[3] = (longlong)dVar4;
    }
    if (lVar13 != 0) {
      FUN_1800a7210(local_150,uVar10,lVar13);
    }
    iVar11 = FUN_1800a7800();
    plVar1 = local_150;
    if (((iVar11 == 2) && ((char)param_1[8] == '\0')) &&
       (*(char *)((longlong)param_1 + 0x41) == '\0')) {
      DAT_180423988 = '\x01';
    }
    else {
      DAT_180423988 = '\0';
    }
    DAT_180423985 = 0;
    DAT_180423984 = 0;
    DAT_180423964 = 0;
    DAT_180423989 = 0;
    DAT_1803e9218 = 0xbf800000;
    DAT_180423968 = param_2;
    DAT_18042398a = DAT_180423988;
    if ((DAT_180423988 == '\0') ||
       ((*(char *)((longlong)param_1 + 0x5a) != '\0' && ((char)param_1[0xb] == '\0')))) {
      *(undefined1 *)((longlong)param_1 + 0x5b) = 0;
      *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
      DAT_180423986 = 0;
      DAT_18042398b = 0;
      DAT_1803e91f8 = dVar5;
      param_1[0xd] = -0x4010000000000000;
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    else if (((((lVar13 != 0) && (*(char *)((longlong)param_1 + 0x5a) != '\0')) &&
              ((char)param_1[0xb] != '\0')) &&
             ((dVar2 = (double)param_1[5], 0.0 <= dVar2 && (dVar2 <= dVar4)))) &&
            (_DAT_180380c98 <= dVar4 - dVar2)) {
      cVar7 = FUN_18001e2b0(lVar13,local_150);
      if (cVar7 == '\0') {
LAB_1800a8325:
        FUN_1800a6190("RENDER",&DAT_18034a134);
      }
      else {
        uVar10 = (**(code **)*plVar1)(plVar1);
        for (ppuVar17 = &PTR_s_ValveBiped_Bip01_R_Hand_180339800; local_e0 = ppuVar17,
            ppuVar17 != &Features::Fullbright::FullbrightFeature::vftable_meta_ptr;
            ppuVar17 = ppuVar17 + 1) {
          cVar7 = FUN_1800a5ed0(plVar1,uVar10,*ppuVar17);
          if (cVar7 != '\0') {
            (**(code **)(*plVar1 + 0x10))(plVar1,1);
            goto LAB_1800a8325;
          }
        }
        uVar10 = (**(code **)(*plVar1 + 0x10))(plVar1,1);
        local_d0 = 0;
        local_d4 = 0;
        local_d8 = 0;
        local_100 = 0;
        uStack_104 = 0;
        local_108 = 0;
        local_168 = &local_108;
        local_170 = &local_d8;
        local_178 = local_88;
        local_180 = &local_130;
        cVar7 = FUN_1800a6200(uVar10,local_150,local_11c,local_118);
        if (cVar7 != '\0') {
          FUN_1800a4c80(param_1,local_d8,local_108);
          FUN_1800a6e40(param_1,&local_130,local_88,&local_d8);
          param_1[0xe] = CONCAT44(uStack_104,local_108);
          *(undefined4 *)(param_1 + 0xf) = local_100;
          *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
        }
      }
    }
    FUN_18020e450(&local_c8);
    FUN_18020e450(&local_a8);
  }
  plVar1 = local_150;
  if ((local_150 != (longlong *)0x0) &&
     (iVar11 = (**(code **)*local_150)(local_150), local_138 < iVar11)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,iVar11 - local_138);
  }
  lVar13 = local_118;
  if (local_118 != 0) {
    iVar11 = (**(code **)*local_150)();
    local_138 = iVar11;
    cVar7 = FUN_18001e2b0(lVar13,local_150);
    if (cVar7 != '\0') {
      uVar10 = (**(code **)*local_150)();
      lVar13 = local_118;
      plVar1 = local_150;
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 9) = 0;
      cVar7 = FUN_1800a5270(local_150,local_118,uVar10,"accumulatables.dbgWeapons.suppression");
      if (cVar7 != '\0') {
        cVar7 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,3);
        if (cVar7 != '\0') {
          dVar4 = (double)(**(code **)(*plVar1 + 0xc0))(plVar1,0xffffffff);
          *(float *)(param_1 + 9) = (float)dVar4;
        }
        (**(code **)(*plVar1 + 0x10))(plVar1,1);
      }
      plVar1 = local_150;
      cVar7 = FUN_1800a5270(local_150,lVar13,uVar10,"accumulatables.dbgWeapons.scare");
      if (cVar7 != '\0') {
        cVar7 = (**(code **)(*plVar1 + 0x138))(plVar1,0xffffffff,3);
        if (cVar7 != '\0') {
          dVar4 = (double)(**(code **)(*plVar1 + 0xc0))(plVar1,0xffffffff);
          *(float *)((longlong)param_1 + 0x4c) = (float)dVar4;
        }
        (**(code **)(*plVar1 + 0x10))(plVar1,1);
      }
    }
    plVar1 = local_150;
    if ((local_150 != (longlong *)0x0) &&
       (iVar12 = (**(code **)*local_150)(local_150), iVar11 < iVar12)) {
      (**(code **)(*plVar1 + 0x10))(plVar1,iVar12 - iVar11);
    }
    cVar7 = FUN_18001fcf0(local_118);
    *(int *)(param_1 + 10) = (int)cVar7;
  }
  if (((param_2 == *local_f0) && ((char)param_1[2] != '\0')) && (DAT_1803fa608 != (float *)0x0)) {
    dVar4 = (double)*DAT_1803fa608;
    sVar9 = _dclass(SUB84(dVar4,0));
    if (sVar9 < 1) {
      dVar2 = (double)param_1[3];
      sVar9 = _dclass(SUB84(dVar2,0));
      if (((sVar9 < 1) && (0.0 <= dVar2)) && ((dVar2 <= dVar4 && (dVar4 - dVar2 <= DAT_180380cb0))))
      goto LAB_1800a8729;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x5b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  DAT_180423986 = 0;
  DAT_18042398b = 0;
  DAT_1803e91f8 = dVar5;
  param_1[0xd] = -0x4010000000000000;
  *(undefined1 *)(param_1 + 0x13) = 0;
LAB_1800a8729:
  if (local_150 != (longlong *)0x0) {
    (**(code **)*local_150)();
    DAT_1803fa338 = local_140 != 0;
    DAT_1803fa330 = local_130;
    if ((bool)DAT_1803fa338) {
      DAT_1803fa330 = local_140;
    }
    DAT_1803fa339 = local_127;
    DAT_1803fa33d = local_123;
    DAT_1803fa33f = local_121;
  }
  return;
}


